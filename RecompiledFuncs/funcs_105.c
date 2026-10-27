#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_ground_F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000F94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42000F98: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x42000F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42000FA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42000FA4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42000FA8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42000FAC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x42000FB0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42000FB4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x42000FB8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x42000FBC: jal         0x420006C4
    // 0x42000FC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x42000FC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x42000FC4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x42000FC8: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42000FCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42000FD0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x42000FD4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x42000FD8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x42000FDC: bc1t        L_42000FE8
    if (c1cs) {
        // 0x42000FE0: nop
    
            goto L_42000FE8;
    }
    // 0x42000FE0: nop

    // 0x42000FE4: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
L_42000FE8:
    // 0x42000FE8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x42000FEC: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x42000FF0: nop

    // 0x42000FF4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x42000FF8: swc1        $f10, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f10.u32l;
    // 0x42000FFC: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x42001000: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x42001004: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42001008: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4200100C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42001010: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    // 0x42001014: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x42001018: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x4200101C: nop

    // 0x42001020: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x42001024: swc1        $f18, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f18.u32l;
    // 0x42001028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4200102C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42001030: jr          $ra
    // 0x42001034: nop

    return;
    // 0x42001034: nop

;}
RECOMP_FUNC void ovl_blast_ground_1038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001038: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4200103C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42001040: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42001044: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42001048: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4200104C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42001050: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x42001054: jal         0x42000F34
    // 0x42001058: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x42001058: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x4200105C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42001060: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x42001064: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x42001068: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x4200106C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x42001070: jal         0x42000F94
    // 0x42001074: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ground_F94(rdram, ctx);
        goto after_1;
    // 0x42001074: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x42001078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4200107C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42001080: jr          $ra
    // 0x42001084: nop

    return;
    // 0x42001084: nop

;}
RECOMP_FUNC void ovl_blast_ground_1088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001088: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4200108C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42001090: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x42001094: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x42001098: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x4200109C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x420010A0: bne         $t6, $at, L_420010F4
    if (ctx->r14 != ctx->r1) {
        // 0x420010A4: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_420010F4;
    }
    // 0x420010A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x420010A8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x420010AC: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x420010B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x420010B4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x420010B8: jal         0x42000F34
    // 0x420010BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x420010BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x420010C0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x420010C4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x420010C8: bne         $a2, $zero, L_420010E0
    if (ctx->r6 != 0) {
        // 0x420010CC: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_420010E0;
    }
    // 0x420010CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420010D0: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x420010D4: jal         0x420006C4
    // 0x420010D8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_1;
    // 0x420010D8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x420010DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
L_420010E0:
    // 0x420010E0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x420010E4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x420010E8: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x420010EC: jal         0x42000F34
    // 0x420010F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x420010F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_420010F4:
    // 0x420010F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420010F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420010FC: jr          $ra
    // 0x42001100: nop

    return;
    // 0x42001100: nop

;}
RECOMP_FUNC void ovl_blast_ground_1104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x42001108: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4200110C: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x42001110: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42001114: jal         0x42001088
    // 0x42001118: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_blast_ground_1088(rdram, ctx);
        goto after_0;
    // 0x42001118: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x4200111C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42001120: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42001124: jr          $ra
    // 0x42001128: nop

    return;
    // 0x42001128: nop

;}
RECOMP_FUNC void ovl_blast_ground_112C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200112C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42001130: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x42001134: jr          $ra
    // 0x42001138: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x42001138: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_blast_ground_113C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200113C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x42001140: jr          $ra
    // 0x42001144: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x42001144: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_blast_ground_1148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001148: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4200114C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001150: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42001154: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x42001158: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x4200115C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x42001160: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x42001164: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x42001168: nop

    // 0x4200116C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x42001170: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x42001174: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x42001178: jal         0x420017CC
    // 0x4200117C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x4200117C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x42001180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001184: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42001188: jr          $ra
    // 0x4200118C: nop

    return;
    // 0x4200118C: nop

;}
RECOMP_FUNC void ovl_blast_ground_1190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001190: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42001194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001198: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4200119C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x420011A0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x420011A4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x420011A8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x420011AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x420011B0: jal         0x420006C4
    // 0x420011B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x420011B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x420011B8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x420011BC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x420011C0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x420011C4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x420011C8: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x420011CC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x420011D0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x420011D4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x420011D8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x420011DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x420011E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x420011E4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x420011E8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x420011EC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x420011F0: jal         0x42001148
    // 0x420011F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_1148(rdram, ctx);
        goto after_1;
    // 0x420011F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x420011F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420011FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42001200: jr          $ra
    // 0x42001204: nop

    return;
    // 0x42001204: nop

;}
RECOMP_FUNC void ovl_blast_ground_1208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001208: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4200120C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001210: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42001214: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42001218: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4200121C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x42001220: jal         0x420006C4
    // 0x42001224: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x42001224: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x42001228: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x4200122C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x42001230: beq         $t7, $zero, L_4200124C
    if (ctx->r15 == 0) {
        // 0x42001234: ori         $t1, $t0, 0x4
        ctx->r9 = ctx->r8 | 0X4;
            goto L_4200124C;
    }
    // 0x42001234: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x42001238: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x4200123C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x42001240: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x42001244: b           L_42001250
    // 0x42001248: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_42001250;
    // 0x42001248: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_4200124C:
    // 0x4200124C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_42001250:
    // 0x42001250: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x42001254: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x42001258: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x4200125C: jal         0x420006C4
    // 0x42001260: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_1;
    // 0x42001260: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x42001264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001268: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4200126C: jr          $ra
    // 0x42001270: nop

    return;
    // 0x42001270: nop

;}
RECOMP_FUNC void ovl_blast_ground_1274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001274: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42001278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200127C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42001280: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x42001284: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42001288: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x4200128C: jal         0x420006C4
    // 0x42001290: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x42001290: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x42001294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001298: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4200129C: jr          $ra
    // 0x420012A0: nop

    return;
    // 0x420012A0: nop

;}
RECOMP_FUNC void ovl_blast_ground_12A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420012A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x420012A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420012AC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x420012B0: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x420012B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x420012B8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x420012BC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x420012C0: jal         0x420006C4
    // 0x420012C4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x420012C4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x420012C8: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x420012CC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x420012D0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x420012D4: beq         $v0, $zero, L_420012F4
    if (ctx->r2 == 0) {
        // 0x420012D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_420012F4;
    }
    // 0x420012D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420012DC: beq         $v0, $at, L_420012F4
    if (ctx->r2 == ctx->r1) {
        // 0x420012E0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_420012F4;
    }
    // 0x420012E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x420012E4: beq         $v0, $at, L_420012F4
    if (ctx->r2 == ctx->r1) {
        // 0x420012E8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_420012F4;
    }
    // 0x420012E8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x420012EC: bne         $v0, $at, L_4200136C
    if (ctx->r2 != ctx->r1) {
        // 0x420012F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4200136C;
    }
    // 0x420012F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420012F4:
    // 0x420012F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x420012F8: lw          $t6, 0xC($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XC);
    // 0x420012FC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x42001300: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x42001304: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x42001308: nop

    // 0x4200130C: blez        $v1, L_42001340
    if (SIGNED(ctx->r3) <= 0) {
        // 0x42001310: slti        $at, $v1, 0xF
        ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
            goto L_42001340;
    }
    // 0x42001310: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x42001314: beq         $at, $zero, L_42001340
    if (ctx->r1 == 0) {
        // 0x42001318: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_42001340;
    }
    // 0x42001318: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x4200131C: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x42001320: bne         $at, $zero, L_4200132C
    if (ctx->r1 != 0) {
        // 0x42001324: lui         $t8, 0x4200
        ctx->r24 = S32(0X4200 << 16);
            goto L_4200132C;
    }
    // 0x42001324: lui         $t8, 0x4200
    ctx->r24 = S32(0X4200 << 16);
    // 0x42001328: addiu       $v0, $v0, -0x7
    ctx->r2 = ADD32(ctx->r2, -0X7);
L_4200132C:
    // 0x4200132C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x42001330: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x42001334: lw          $t8, 0x4450($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4450);
    // 0x42001338: nop

    // 0x4200133C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_42001340:
    // 0x42001340: lw          $v0, 0x1C4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C4);
    // 0x42001344: nop

    // 0x42001348: bltz        $v0, L_4200135C
    if (SIGNED(ctx->r2) < 0) {
        // 0x4200134C: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_4200135C;
    }
    // 0x4200134C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x42001350: beq         $at, $zero, L_4200135C
    if (ctx->r1 == 0) {
        // 0x42001354: addiu       $t9, $v0, 0x5
        ctx->r25 = ADD32(ctx->r2, 0X5);
            goto L_4200135C;
    }
    // 0x42001354: addiu       $t9, $v0, 0x5
    ctx->r25 = ADD32(ctx->r2, 0X5);
    // 0x42001358: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_4200135C:
    // 0x4200135C: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x42001360: jal         0x420006C4
    // 0x42001364: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_1;
    // 0x42001364: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x42001368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4200136C:
    // 0x4200136C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x42001370: jr          $ra
    // 0x42001374: nop

    return;
    // 0x42001374: nop

;}
RECOMP_FUNC void ovl_blast_ground_1378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001378: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x4200137C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001380: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x42001384: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x42001388: sra         $t0, $v0, 6
    ctx->r8 = S32(SIGNED(ctx->r2) >> 6);
    // 0x4200138C: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x42001390: bne         $t7, $zero, L_42001404
    if (ctx->r15 != 0) {
        // 0x42001394: andi        $t6, $t0, 0xF
        ctx->r14 = ctx->r8 & 0XF;
            goto L_42001404;
    }
    // 0x42001394: andi        $t6, $t0, 0xF
    ctx->r14 = ctx->r8 & 0XF;
    // 0x42001398: beq         $t6, $zero, L_42001404
    if (ctx->r14 == 0) {
        // 0x4200139C: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_42001404;
    }
    // 0x4200139C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x420013A0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x420013A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x420013A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x420013AC: addiu       $t3, $zero, 0x13
    ctx->r11 = ADD32(0, 0X13);
    // 0x420013B0: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x420013B4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x420013B8: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x420013BC: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x420013C0: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x420013C4: lw          $t4, 0xC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC);
    // 0x420013C8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x420013CC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x420013D0: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x420013D4: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x420013D8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x420013DC: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x420013E0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x420013E4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x420013E8: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x420013EC: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x420013F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x420013F4: jal         0x420017CC
    // 0x420013F8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x420013F8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x420013FC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x42001400: nop

L_42001404:
    // 0x42001404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001408: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x4200140C: jr          $ra
    // 0x42001410: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x42001410: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_ground_1414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001414: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42001418: lw          $v0, 0x4710($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4710);
    // 0x4200141C: jr          $ra
    // 0x42001420: nop

    return;
    // 0x42001420: nop

;}
RECOMP_FUNC void ovl_blast_ground_1424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001424: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42001428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200142C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42001430: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42001434: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x42001438: jal         0x420006C4
    // 0x4200143C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x4200143C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x42001440: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x42001444: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x42001448: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x4200144C: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x42001450: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x42001454: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x42001458: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x4200145C: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x42001460: addiu       $t1, $zero, 0xCC
    ctx->r9 = ADD32(0, 0XCC);
    // 0x42001464: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x42001468: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x4200146C: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x42001470: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x42001474: jal         0x420006C4
    // 0x42001478: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_1;
    // 0x42001478: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x4200147C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42001484: jr          $ra
    // 0x42001488: nop

    return;
    // 0x42001488: nop

;}
RECOMP_FUNC void ovl_blast_ground_148C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200148C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42001490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001494: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42001498: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4200149C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420014A0: jal         0x420006C4
    // 0x420014A4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x420014A4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x420014A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x420014AC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x420014B0: jal         0x42000CA0
    // 0x420014B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_CA0(rdram, ctx);
        goto after_1;
    // 0x420014B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x420014B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420014BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x420014C0: jr          $ra
    // 0x420014C4: nop

    return;
    // 0x420014C4: nop

;}
RECOMP_FUNC void ovl_blast_ground_14C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420014C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420014CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420014D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420014D4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x420014D8: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x420014DC: jal         0x42002A38
    // 0x420014E0: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    ovl_blast_ground_2A38(rdram, ctx);
        goto after_0;
    // 0x420014E0: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x420014E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420014E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420014EC: jr          $ra
    // 0x420014F0: nop

    return;
    // 0x420014F0: nop

;}
RECOMP_FUNC void ovl_blast_ground_14F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420014F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420014F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420014FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42001500: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x42001504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x42001508: jal         0x42001874
    // 0x4200150C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x4200150C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42001510: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x42001514: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x42001518: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x4200151C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x42001520: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_42001524:
    // 0x42001524: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x42001528: nop

    // 0x4200152C: beq         $v0, $t6, L_4200154C
    if (ctx->r2 == ctx->r14) {
        // 0x42001530: nop
    
            goto L_4200154C;
    }
    // 0x42001530: nop

    // 0x42001534: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x42001538: nop

    // 0x4200153C: bne         $a2, $t7, L_4200154C
    if (ctx->r6 != ctx->r15) {
        // 0x42001540: nop
    
            goto L_4200154C;
    }
    // 0x42001540: nop

    // 0x42001544: b           L_420015D0
    // 0x42001548: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_420015D0;
    // 0x42001548: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4200154C:
    // 0x4200154C: lw          $t8, 0x1D4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001550: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001554: beq         $v0, $t8, L_42001574
    if (ctx->r2 == ctx->r24) {
        // 0x42001558: nop
    
            goto L_42001574;
    }
    // 0x42001558: nop

    // 0x4200155C: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x42001560: nop

    // 0x42001564: bne         $a2, $t9, L_42001574
    if (ctx->r6 != ctx->r25) {
        // 0x42001568: nop
    
            goto L_42001574;
    }
    // 0x42001568: nop

    // 0x4200156C: b           L_420015D0
    // 0x42001570: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_420015D0;
    // 0x42001570: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_42001574:
    // 0x42001574: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001578: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x4200157C: beq         $v0, $t0, L_4200159C
    if (ctx->r2 == ctx->r8) {
        // 0x42001580: nop
    
            goto L_4200159C;
    }
    // 0x42001580: nop

    // 0x42001584: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x42001588: nop

    // 0x4200158C: bne         $a2, $t1, L_4200159C
    if (ctx->r6 != ctx->r9) {
        // 0x42001590: nop
    
            goto L_4200159C;
    }
    // 0x42001590: nop

    // 0x42001594: b           L_420015D0
    // 0x42001598: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_420015D0;
    // 0x42001598: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4200159C:
    // 0x4200159C: lw          $t2, 0x1D4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X1D4);
    // 0x420015A0: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x420015A4: beq         $v0, $t2, L_420015C4
    if (ctx->r2 == ctx->r10) {
        // 0x420015A8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_420015C4;
    }
    // 0x420015A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x420015AC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x420015B0: nop

    // 0x420015B4: bne         $a2, $t3, L_420015C4
    if (ctx->r6 != ctx->r11) {
        // 0x420015B8: nop
    
            goto L_420015C4;
    }
    // 0x420015B8: nop

    // 0x420015BC: b           L_420015D0
    // 0x420015C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_420015D0;
    // 0x420015C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_420015C4:
    // 0x420015C4: bne         $a0, $a1, L_42001524
    if (ctx->r4 != ctx->r5) {
        // 0x420015C8: addiu       $v1, $v1, 0x1CC
        ctx->r3 = ADD32(ctx->r3, 0X1CC);
            goto L_42001524;
    }
    // 0x420015C8: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x420015CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_420015D0:
    // 0x420015D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420015D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420015D8: jr          $ra
    // 0x420015DC: nop

    return;
    // 0x420015DC: nop

;}
RECOMP_FUNC void ovl_blast_ground_15E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420015E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420015E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420015E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x420015EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x420015F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x420015F4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x420015F8: jal         0x42001874
    // 0x420015FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x420015FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42001600: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x42001604: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x42001608: jal         0x42001874
    // 0x4200160C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_ground_1874(rdram, ctx);
        goto after_1;
    // 0x4200160C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x42001610: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x42001614: lui         $t7, 0x4200
    ctx->r15 = S32(0X4200 << 16);
    // 0x42001618: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x4200161C: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x42001620: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x42001624: addiu       $t7, $t7, 0x4470
    ctx->r15 = ADD32(ctx->r15, 0X4470);
    // 0x42001628: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x4200162C: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x42001630: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x42001634: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x42001638: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x4200163C: sw          $t9, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r25;
    // 0x42001640: sw          $t1, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r9;
    // 0x42001644: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x42001648: lw          $t2, 0xC($a2)
    ctx->r10 = MEM_W(ctx->r6, 0XC);
    // 0x4200164C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x42001650: sw          $t2, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r10;
    // 0x42001654: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x42001658: blez        $t2, L_420016DC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x4200165C: sw          $t3, 0x10($a3)
        MEM_W(0X10, ctx->r7) = ctx->r11;
            goto L_420016DC;
    }
    // 0x4200165C: sw          $t3, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r11;
    // 0x42001660: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x42001664: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42001668: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200166C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x42001670: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_42001674:
    // 0x42001674: lw          $t5, 0x10($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X10);
    // 0x42001678: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x4200167C: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x42001680: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
    // 0x42001684: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x42001688: ori         $t5, $t4, 0x8200
    ctx->r13 = ctx->r12 | 0X8200;
    // 0x4200168C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x42001690: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x42001694: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x42001698: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x4200169C: addu        $t1, $t9, $v1
    ctx->r9 = ADD32(ctx->r25, ctx->r3);
    // 0x420016A0: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x420016A4: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x420016A8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x420016AC: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x420016B0: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x420016B4: lw          $t6, 0x10($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X10);
    // 0x420016B8: nop

    // 0x420016BC: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x420016C0: sw          $t5, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r13;
    // 0x420016C4: lw          $t8, 0xC($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC);
    // 0x420016C8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x420016CC: slt         $at, $a0, $t8
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x420016D0: bne         $at, $zero, L_42001674
    if (ctx->r1 != 0) {
        // 0x420016D4: nop
    
            goto L_42001674;
    }
    // 0x420016D4: nop

    // 0x420016D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_420016DC:
    // 0x420016DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x420016E0: lui         $t2, 0x4200
    ctx->r10 = S32(0X4200 << 16);
    // 0x420016E4: addiu       $t2, $t2, 0x4720
    ctx->r10 = ADD32(ctx->r10, 0X4720);
    // 0x420016E8: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x420016EC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x420016F0: sw          $v1, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r3;
    // 0x420016F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x420016F8: lw          $t4, 0x14($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X14);
    // 0x420016FC: lw          $t3, 0x10($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X10);
    // 0x42001700: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42001704: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x42001708: lw          $a1, 0x14($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X14);
    // 0x4200170C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42001710: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x42001714: nop

    // 0x42001718: blez        $t6, L_420017C0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x4200171C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420017C0;
    }
    // 0x4200171C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001720: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x42001724: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x42001728: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4200172C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_42001730:
    // 0x42001730: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    // 0x42001734: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x42001738: addu        $t7, $t5, $v1
    ctx->r15 = ADD32(ctx->r13, ctx->r3);
    // 0x4200173C: swc1        $f2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f2.u32l;
    // 0x42001740: lw          $t8, 0x14($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X14);
    // 0x42001744: nop

    // 0x42001748: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x4200174C: nop

    // 0x42001750: addu        $t1, $t9, $v1
    ctx->r9 = ADD32(ctx->r25, ctx->r3);
    // 0x42001754: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x42001758: lw          $t2, 0x14($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X14);
    // 0x4200175C: nop

    // 0x42001760: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x42001764: nop

    // 0x42001768: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x4200176C: swc1        $f12, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f12.u32l;
    // 0x42001770: lw          $t6, 0x14($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X14);
    // 0x42001774: nop

    // 0x42001778: lw          $t5, 0x4($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X4);
    // 0x4200177C: nop

    // 0x42001780: addu        $t7, $t5, $v1
    ctx->r15 = ADD32(ctx->r13, ctx->r3);
    // 0x42001784: swc1        $f0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f0.u32l;
    // 0x42001788: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x4200178C: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    // 0x42001790: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x42001794: nop

    // 0x42001798: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x4200179C: sw          $t8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r24;
    // 0x420017A0: lw          $a1, 0x14($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X14);
    // 0x420017A4: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x420017A8: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x420017AC: nop

    // 0x420017B0: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x420017B4: bne         $at, $zero, L_42001730
    if (ctx->r1 != 0) {
        // 0x420017B8: nop
    
            goto L_42001730;
    }
    // 0x420017B8: nop

    // 0x420017BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420017C0:
    // 0x420017C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x420017C4: jr          $ra
    // 0x420017C8: nop

    return;
    // 0x420017C8: nop

;}
RECOMP_FUNC void ovl_blast_ground_17CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420017CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x420017D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420017D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x420017D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420017DC: addiu       $t7, $a0, 0x4
    ctx->r15 = ADD32(ctx->r4, 0X4);
    // 0x420017E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x420017E4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x420017E8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x420017EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x420017F0: jal         0x420007FC
    // 0x420017F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_7FC(rdram, ctx);
        goto after_0;
    // 0x420017F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x420017F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420017FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x42001800: jr          $ra
    // 0x42001804: nop

    return;
    // 0x42001804: nop

;}
RECOMP_FUNC void ovl_blast_ground_1808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4200180C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x42001814: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x42001818: jal         0x420017CC
    // 0x4200181C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x4200181C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x42001820: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x42001824: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x42001828: jal         0x420017CC
    // 0x4200182C: addiu       $a2, $a0, 0x18
    ctx->r6 = ADD32(ctx->r4, 0X18);
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_1;
    // 0x4200182C: addiu       $a2, $a0, 0x18
    ctx->r6 = ADD32(ctx->r4, 0X18);
    after_1:
    // 0x42001830: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x42001834: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x42001838: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x4200183C: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x42001840: sw          $zero, 0x64($a0)
    MEM_W(0X64, ctx->r4) = 0;
    // 0x42001844: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x42001848: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x4200184C: sw          $zero, 0x68($a0)
    MEM_W(0X68, ctx->r4) = 0;
    // 0x42001850: sw          $zero, 0x70($a0)
    MEM_W(0X70, ctx->r4) = 0;
    // 0x42001854: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x42001858: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x4200185C: sw          $v0, 0x1C4($a0)
    MEM_W(0X1C4, ctx->r4) = ctx->r2;
    // 0x42001860: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
    // 0x42001864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200186C: jr          $ra
    // 0x42001870: nop

    return;
    // 0x42001870: nop

;}
RECOMP_FUNC void ovl_blast_ground_1874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001874: addiu       $sp, $sp, -0x1F0
    ctx->r29 = ADD32(ctx->r29, -0X1F0);
    // 0x42001878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200187C: sw          $a1, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->r5;
    // 0x42001880: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42001884: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x42001888: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4200188C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x42001890: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x42001894: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x42001898: jal         0x420017CC
    // 0x4200189C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x4200189C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x420018A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420018A4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x420018A8: jr          $ra
    // 0x420018AC: addiu       $sp, $sp, 0x1F0
    ctx->r29 = ADD32(ctx->r29, 0X1F0);
    return;
    // 0x420018AC: addiu       $sp, $sp, 0x1F0
    ctx->r29 = ADD32(ctx->r29, 0X1F0);
;}
RECOMP_FUNC void ovl_blast_ground_18B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420018B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420018B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420018B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x420018BC: jal         0x42001874
    // 0x420018C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x420018C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x420018C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x420018C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x420018CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x420018D0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_420018D4:
    // 0x420018D4: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x420018D8: nop

    // 0x420018DC: bne         $v0, $t6, L_42001900
    if (ctx->r2 != ctx->r14) {
        // 0x420018E0: nop
    
            goto L_42001900;
    }
    // 0x420018E0: nop

    // 0x420018E4: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x420018E8: addiu       $v1, $v1, 0x4710
    ctx->r3 = ADD32(ctx->r3, 0X4710);
    // 0x420018EC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x420018F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x420018F4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x420018F8: b           L_42001994
    // 0x420018FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_42001994;
    // 0x420018FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_42001900:
    // 0x42001900: lw          $t9, 0x1D4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001904: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001908: bne         $v0, $t9, L_4200192C
    if (ctx->r2 != ctx->r25) {
        // 0x4200190C: nop
    
            goto L_4200192C;
    }
    // 0x4200190C: nop

    // 0x42001910: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42001914: addiu       $v1, $v1, 0x4710
    ctx->r3 = ADD32(ctx->r3, 0X4710);
    // 0x42001918: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x4200191C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x42001920: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x42001924: b           L_42001994
    // 0x42001928: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_42001994;
    // 0x42001928: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_4200192C:
    // 0x4200192C: lw          $t2, 0x1D4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001930: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001934: bne         $v0, $t2, L_42001958
    if (ctx->r2 != ctx->r10) {
        // 0x42001938: nop
    
            goto L_42001958;
    }
    // 0x42001938: nop

    // 0x4200193C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42001940: addiu       $v1, $v1, 0x4710
    ctx->r3 = ADD32(ctx->r3, 0X4710);
    // 0x42001944: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x42001948: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x4200194C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x42001950: b           L_42001994
    // 0x42001954: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_42001994;
    // 0x42001954: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_42001958:
    // 0x42001958: lw          $t5, 0x1D4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X1D4);
    // 0x4200195C: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001960: bne         $v0, $t5, L_42001984
    if (ctx->r2 != ctx->r13) {
        // 0x42001964: nop
    
            goto L_42001984;
    }
    // 0x42001964: nop

    // 0x42001968: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x4200196C: addiu       $v1, $v1, 0x4710
    ctx->r3 = ADD32(ctx->r3, 0X4710);
    // 0x42001970: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x42001974: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x42001978: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4200197C: b           L_42001994
    // 0x42001980: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_42001994;
    // 0x42001980: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_42001984:
    // 0x42001984: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x42001988: bne         $a0, $a1, L_420018D4
    if (ctx->r4 != ctx->r5) {
        // 0x4200198C: addiu       $v1, $v1, 0x1CC
        ctx->r3 = ADD32(ctx->r3, 0X1CC);
            goto L_420018D4;
    }
    // 0x4200198C: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001990: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_42001994:
    // 0x42001994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200199C: jr          $ra
    // 0x420019A0: nop

    return;
    // 0x420019A0: nop

;}
RECOMP_FUNC void ovl_blast_ground_19A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420019A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420019A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420019AC: jal         0x42002928
    // 0x420019B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_blast_ground_2928(rdram, ctx);
        goto after_0;
    // 0x420019B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x420019B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x420019B8: jal         0x42001808
    // 0x420019BC: nop

    ovl_blast_ground_1808(rdram, ctx);
        goto after_1;
    // 0x420019BC: nop

    after_1:
    // 0x420019C0: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x420019C4: addiu       $v0, $v0, 0x4710
    ctx->r2 = ADD32(ctx->r2, 0X4710);
    // 0x420019C8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x420019CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420019D0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x420019D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x420019D8: jr          $ra
    // 0x420019DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x420019DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_blast_ground_19E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420019E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420019E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420019E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x420019EC: jal         0x42001874
    // 0x420019F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x420019F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x420019F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x420019F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x420019FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x42001A00: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_42001A04:
    // 0x42001A04: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x42001A08: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x42001A0C: beq         $v0, $t6, L_42001A34
    if (ctx->r2 == ctx->r14) {
        // 0x42001A10: nop
    
            goto L_42001A34;
    }
    // 0x42001A10: nop

    // 0x42001A14: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x42001A18: nop

    // 0x42001A1C: beq         $v0, $t7, L_42001A34
    if (ctx->r2 == ctx->r15) {
        // 0x42001A20: nop
    
            goto L_42001A34;
    }
    // 0x42001A20: nop

    // 0x42001A24: lw          $t8, 0x5C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X5C);
    // 0x42001A28: nop

    // 0x42001A2C: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x42001A30: sw          $t9, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r25;
L_42001A34:
    // 0x42001A34: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001A38: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001A3C: beq         $v0, $t0, L_42001A64
    if (ctx->r2 == ctx->r8) {
        // 0x42001A40: nop
    
            goto L_42001A64;
    }
    // 0x42001A40: nop

    // 0x42001A44: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x42001A48: nop

    // 0x42001A4C: beq         $v0, $t1, L_42001A64
    if (ctx->r2 == ctx->r9) {
        // 0x42001A50: nop
    
            goto L_42001A64;
    }
    // 0x42001A50: nop

    // 0x42001A54: lw          $t2, 0x5C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X5C);
    // 0x42001A58: nop

    // 0x42001A5C: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x42001A60: sw          $t3, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r11;
L_42001A64:
    // 0x42001A64: lw          $t4, 0x1D4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001A68: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001A6C: beq         $v0, $t4, L_42001A94
    if (ctx->r2 == ctx->r12) {
        // 0x42001A70: nop
    
            goto L_42001A94;
    }
    // 0x42001A70: nop

    // 0x42001A74: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x42001A78: nop

    // 0x42001A7C: beq         $v0, $t5, L_42001A94
    if (ctx->r2 == ctx->r13) {
        // 0x42001A80: nop
    
            goto L_42001A94;
    }
    // 0x42001A80: nop

    // 0x42001A84: lw          $t6, 0x5C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X5C);
    // 0x42001A88: nop

    // 0x42001A8C: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x42001A90: sw          $t7, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r15;
L_42001A94:
    // 0x42001A94: lw          $t8, 0x1D4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1D4);
    // 0x42001A98: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001A9C: beq         $v0, $t8, L_42001AC4
    if (ctx->r2 == ctx->r24) {
        // 0x42001AA0: nop
    
            goto L_42001AC4;
    }
    // 0x42001AA0: nop

    // 0x42001AA4: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x42001AA8: nop

    // 0x42001AAC: beq         $v0, $t9, L_42001AC4
    if (ctx->r2 == ctx->r25) {
        // 0x42001AB0: nop
    
            goto L_42001AC4;
    }
    // 0x42001AB0: nop

    // 0x42001AB4: lw          $t0, 0x5C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X5C);
    // 0x42001AB8: nop

    // 0x42001ABC: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x42001AC0: sw          $t1, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r9;
L_42001AC4:
    // 0x42001AC4: bne         $a0, $a1, L_42001A04
    if (ctx->r4 != ctx->r5) {
        // 0x42001AC8: addiu       $v1, $v1, 0x1CC
        ctx->r3 = ADD32(ctx->r3, 0X1CC);
            goto L_42001A04;
    }
    // 0x42001AC8: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42001AD4: jr          $ra
    // 0x42001AD8: nop

    return;
    // 0x42001AD8: nop

;}
RECOMP_FUNC void ovl_blast_ground_1ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x42001AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001AE4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x42001AE8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x42001AEC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x42001AF0: nop

    // 0x42001AF4: bne         $v1, $at, L_42001B18
    if (ctx->r3 != ctx->r1) {
        // 0x42001AF8: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_42001B18;
    }
    // 0x42001AF8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x42001AFC: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x42001B00: jal         0x42001414
    // 0x42001B04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    ovl_blast_ground_1414(rdram, ctx);
        goto after_0;
    // 0x42001B04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x42001B08: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x42001B0C: b           L_42001B28
    // 0x42001B10: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
        goto L_42001B28;
    // 0x42001B10: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x42001B14: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
L_42001B18:
    // 0x42001B18: bne         $v1, $at, L_42001B2C
    if (ctx->r3 != ctx->r1) {
        // 0x42001B1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42001B2C;
    }
    // 0x42001B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001B20: jal         0x420019E0
    // 0x42001B24: nop

    ovl_blast_ground_19E0(rdram, ctx);
        goto after_1;
    // 0x42001B24: nop

    after_1:
L_42001B28:
    // 0x42001B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42001B2C:
    // 0x42001B2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42001B30: jr          $ra
    // 0x42001B34: nop

    return;
    // 0x42001B34: nop

;}
RECOMP_FUNC void ovl_blast_ground_1B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42001B3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x42001B40: lui         $a0, 0x4200
    ctx->r4 = S32(0X4200 << 16);
    // 0x42001B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001B48: lw          $a0, 0x4718($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4718);
    // 0x42001B4C: jal         0x4200082C
    // 0x42001B50: nop

    ovl_blast_ground_82C(rdram, ctx);
        goto after_0;
    // 0x42001B50: nop

    after_0:
    // 0x42001B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42001B5C: jr          $ra
    // 0x42001B60: nop

    return;
    // 0x42001B60: nop

;}
RECOMP_FUNC void ovl_blast_ground_1B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42001B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001B6C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x42001B70: jal         0x420014F4
    // 0x42001B74: nop

    ovl_blast_ground_14F4(rdram, ctx);
        goto after_0;
    // 0x42001B74: nop

    after_0:
    // 0x42001B78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42001B7C: beq         $v0, $at, L_42001B8C
    if (ctx->r2 == ctx->r1) {
        // 0x42001B80: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_42001B8C;
    }
    // 0x42001B80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x42001B84: jal         0x420019A4
    // 0x42001B88: nop

    ovl_blast_ground_19A4(rdram, ctx);
        goto after_1;
    // 0x42001B88: nop

    after_1:
L_42001B8C:
    // 0x42001B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42001B94: jr          $ra
    // 0x42001B98: nop

    return;
    // 0x42001B98: nop

;}
RECOMP_FUNC void ovl_blast_ground_1B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001B9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42001BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001BA4: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x42001BA8: addiu       $t9, $a0, 0x18
    ctx->r25 = ADD32(ctx->r4, 0X18);
    // 0x42001BAC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x42001BB0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x42001BB4: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x42001BB8: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x42001BBC: nop

    // 0x42001BC0: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x42001BC4: nop

    // 0x42001BC8: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
    // 0x42001BCC: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x42001BD0: nop

    // 0x42001BD4: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x42001BD8: nop

    // 0x42001BDC: swc1        $f8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f8.u32l;
    // 0x42001BE0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x42001BE4: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x42001BE8: nop

    // 0x42001BEC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x42001BF0: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x42001BF4: nop

    // 0x42001BF8: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x42001BFC: nop

    // 0x42001C00: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x42001C04: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x42001C08: nop

    // 0x42001C0C: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x42001C10: nop

    // 0x42001C14: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x42001C18: lw          $t3, 0x10($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X10);
    // 0x42001C1C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x42001C20: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x42001C24: jal         0x420017CC
    // 0x42001C28: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x42001C28: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x42001C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001C30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42001C34: jr          $ra
    // 0x42001C38: nop

    return;
    // 0x42001C38: nop

;}
RECOMP_FUNC void ovl_blast_ground_1C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001C3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42001C40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42001C44: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42001C48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42001C4C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42001C50: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x42001C54: nop

    // 0x42001C58: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x42001C5C: jal         0x420014F4
    // 0x42001C60: nop

    ovl_blast_ground_14F4(rdram, ctx);
        goto after_0;
    // 0x42001C60: nop

    after_0:
    // 0x42001C64: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x42001C68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42001C6C: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
    // 0x42001C70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x42001C74: beq         $v0, $at, L_42001C90
    if (ctx->r2 == ctx->r1) {
        // 0x42001C78: sw          $zero, 0x20($sp)
        MEM_W(0X20, ctx->r29) = 0;
            goto L_42001C90;
    }
    // 0x42001C78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x42001C7C: lw          $t7, 0x5C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X5C);
    // 0x42001C80: nop

    // 0x42001C84: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x42001C88: beq         $t8, $zero, L_42001C98
    if (ctx->r24 == 0) {
        // 0x42001C8C: nop
    
            goto L_42001C98;
    }
    // 0x42001C8C: nop

L_42001C90:
    // 0x42001C90: b           L_42001DAC
    // 0x42001C94: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
        goto L_42001DAC;
    // 0x42001C94: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_42001C98:
    // 0x42001C98: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x42001C9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42001CA0: beq         $t9, $at, L_42001CF4
    if (ctx->r25 == ctx->r1) {
        // 0x42001CA4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_42001CF4;
    }
    // 0x42001CA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42001CA8: jal         0x42002840
    // 0x42001CAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_2840(rdram, ctx);
        goto after_1;
    // 0x42001CAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x42001CB0: beq         $v0, $zero, L_42001CC0
    if (ctx->r2 == 0) {
        // 0x42001CB4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_42001CC0;
    }
    // 0x42001CB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42001CB8: jal         0x420012A4
    // 0x42001CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_12A4(rdram, ctx);
        goto after_2;
    // 0x42001CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_42001CC0:
    // 0x42001CC0: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x42001CC4: nop

    // 0x42001CC8: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x42001CCC: bne         $t1, $zero, L_42001D2C
    if (ctx->r9 != 0) {
        // 0x42001CD0: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_42001D2C;
    }
    // 0x42001CD0: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x42001CD4: lw          $t2, 0x5C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X5C);
    // 0x42001CD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42001CDC: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x42001CE0: bne         $t3, $zero, L_42001CEC
    if (ctx->r11 != 0) {
        // 0x42001CE4: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_42001CEC;
    }
    // 0x42001CE4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x42001CE8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
L_42001CEC:
    // 0x42001CEC: b           L_42001D28
    // 0x42001CF0: swc1        $f4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f4.u32l;
        goto L_42001D28;
    // 0x42001CF0: swc1        $f4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f4.u32l;
L_42001CF4:
    // 0x42001CF4: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x42001CF8: ori         $at, $zero, 0x8B00
    ctx->r1 = 0 | 0X8B00;
    // 0x42001CFC: bne         $t5, $at, L_42001D0C
    if (ctx->r13 != ctx->r1) {
        // 0x42001D00: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_42001D0C;
    }
    // 0x42001D00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42001D04: b           L_42001DAC
    // 0x42001D08: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
        goto L_42001DAC;
    // 0x42001D08: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_42001D0C:
    // 0x42001D0C: jal         0x42001B9C
    // 0x42001D10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_1B9C(rdram, ctx);
        goto after_3;
    // 0x42001D10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x42001D14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x42001D18: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x42001D1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42001D20: jal         0x420027E0
    // 0x42001D24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_27E0(rdram, ctx);
        goto after_4;
    // 0x42001D24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_42001D28:
    // 0x42001D28: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
L_42001D2C:
    // 0x42001D2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42001D30: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x42001D34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42001D38: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x42001D3C: nop

    // 0x42001D40: bc1f        L_42001D50
    if (!c1cs) {
        // 0x42001D44: nop
    
            goto L_42001D50;
    }
    // 0x42001D44: nop

    // 0x42001D48: jal         0x420028C4
    // 0x42001D4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_28C4(rdram, ctx);
        goto after_5;
    // 0x42001D4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_42001D50:
    // 0x42001D50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42001D54: jal         0x42001378
    // 0x42001D58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_1378(rdram, ctx);
        goto after_6;
    // 0x42001D58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x42001D5C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x42001D60: beq         $v0, $at, L_42001D6C
    if (ctx->r2 == ctx->r1) {
        // 0x42001D64: nop
    
            goto L_42001D6C;
    }
    // 0x42001D64: nop

    // 0x42001D68: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_42001D6C:
    // 0x42001D6C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x42001D70: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x42001D74: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x42001D78: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x42001D7C: beq         $at, $zero, L_42001D98
    if (ctx->r1 == 0) {
        // 0x42001D80: nop
    
            goto L_42001D98;
    }
    // 0x42001D80: nop

    // 0x42001D84: lw          $t9, 0x5C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X5C);
    // 0x42001D88: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x42001D8C: andi        $t0, $t9, 0x2000
    ctx->r8 = ctx->r25 & 0X2000;
    // 0x42001D90: beq         $t0, $zero, L_42001DA4
    if (ctx->r8 == 0) {
        // 0x42001D94: lw          $t3, 0x30($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X30);
            goto L_42001DA4;
    }
    // 0x42001D94: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
L_42001D98:
    // 0x42001D98: b           L_42001DAC
    // 0x42001D9C: sw          $zero, 0xC($t1)
    MEM_W(0XC, ctx->r9) = 0;
        goto L_42001DAC;
    // 0x42001D9C: sw          $zero, 0xC($t1)
    MEM_W(0XC, ctx->r9) = 0;
    // 0x42001DA0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
L_42001DA4:
    // 0x42001DA4: nop

    // 0x42001DA8: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
L_42001DAC:
    // 0x42001DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42001DB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42001DB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42001DB8: jr          $ra
    // 0x42001DBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x42001DBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_ground_1DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001DC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x42001DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001DC8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42001DCC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x42001DD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x42001DD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x42001DD8: jal         0x42001874
    // 0x42001DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x42001DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42001DE0: lui         $a0, 0x4200
    ctx->r4 = S32(0X4200 << 16);
    // 0x42001DE4: lw          $a0, 0x471C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X471C);
    // 0x42001DE8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x42001DEC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x42001DF0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x42001DF4: beq         $at, $zero, L_42001E54
    if (ctx->r1 == 0) {
        // 0x42001DF8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_42001E54;
    }
    // 0x42001DF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x42001DFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_42001E00:
    // 0x42001E00: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x42001E04: nop

    // 0x42001E08: beq         $v0, $t6, L_42001E44
    if (ctx->r2 == ctx->r14) {
        // 0x42001E0C: nop
    
            goto L_42001E44;
    }
    // 0x42001E0C: nop

    // 0x42001E10: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x42001E14: nop

    // 0x42001E18: beq         $v0, $t7, L_42001E44
    if (ctx->r2 == ctx->r15) {
        // 0x42001E1C: nop
    
            goto L_42001E44;
    }
    // 0x42001E1C: nop

    // 0x42001E20: lw          $t8, 0x1C8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1C8);
    // 0x42001E24: nop

    // 0x42001E28: beq         $v0, $t8, L_42001E44
    if (ctx->r2 == ctx->r24) {
        // 0x42001E2C: nop
    
            goto L_42001E44;
    }
    // 0x42001E2C: nop

    // 0x42001E30: lw          $t9, 0x1C4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C4);
    // 0x42001E34: nop

    // 0x42001E38: bne         $a3, $t9, L_42001E44
    if (ctx->r7 != ctx->r25) {
        // 0x42001E3C: nop
    
            goto L_42001E44;
    }
    // 0x42001E3C: nop

    // 0x42001E40: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_42001E44:
    // 0x42001E44: addiu       $v1, $v1, 0x1CC
    ctx->r3 = ADD32(ctx->r3, 0X1CC);
    // 0x42001E48: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x42001E4C: bne         $at, $zero, L_42001E00
    if (ctx->r1 != 0) {
        // 0x42001E50: nop
    
            goto L_42001E00;
    }
    // 0x42001E50: nop

L_42001E54:
    // 0x42001E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42001E5C: jr          $ra
    // 0x42001E60: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x42001E60: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_blast_ground_1E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001E64: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x42001E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001E6C: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x42001E70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42001E74: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x42001E78: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x42001E7C: beq         $a2, $at, L_42001E94
    if (ctx->r6 == ctx->r1) {
        // 0x42001E80: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_42001E94;
    }
    // 0x42001E80: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x42001E84: jal         0x420014F4
    // 0x42001E88: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    ovl_blast_ground_14F4(rdram, ctx);
        goto after_0;
    // 0x42001E88: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_0:
    // 0x42001E8C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x42001E90: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_42001E94:
    // 0x42001E94: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x42001E98: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x42001E9C: beq         $v0, $zero, L_42001EB4
    if (ctx->r2 == 0) {
        // 0x42001EA0: nop
    
            goto L_42001EB4;
    }
    // 0x42001EA0: nop

    // 0x42001EA4: beq         $v0, $v1, L_42001EE4
    if (ctx->r2 == ctx->r3) {
        // 0x42001EA8: nop
    
            goto L_42001EE4;
    }
    // 0x42001EA8: nop

    // 0x42001EAC: b           L_42001FA4
    // 0x42001EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42001FA4;
    // 0x42001EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42001EB4:
    // 0x42001EB4: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x42001EB8: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x42001EBC: bne         $t6, $at, L_42001FA4
    if (ctx->r14 != ctx->r1) {
        // 0x42001EC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42001FA4;
    }
    // 0x42001EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001EC4: lw          $v1, 0x14($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14);
    // 0x42001EC8: nop

    // 0x42001ECC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x42001ED0: jal         0x42001DC0
    // 0x42001ED4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_blast_ground_1DC0(rdram, ctx);
        goto after_1;
    // 0x42001ED4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x42001ED8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x42001EDC: b           L_42001FA0
    // 0x42001EE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_42001FA0;
    // 0x42001EE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_42001EE4:
    // 0x42001EE4: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x42001EE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42001EEC: bne         $v1, $t7, L_42001FA4
    if (ctx->r3 != ctx->r15) {
        // 0x42001EF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42001FA4;
    }
    // 0x42001EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001EF4: lw          $v1, 0x14($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14);
    // 0x42001EF8: beq         $a3, $at, L_42001FA0
    if (ctx->r7 == ctx->r1) {
        // 0x42001EFC: addiu       $a1, $zero, 0x1A
        ctx->r5 = ADD32(0, 0X1A);
            goto L_42001FA0;
    }
    // 0x42001EFC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x42001F00: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x42001F04: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x42001F08: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x42001F0C: jal         0x420006C4
    // 0x42001F10: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_2;
    // 0x42001F10: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x42001F14: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x42001F18: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x42001F1C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x42001F20: nop

    // 0x42001F24: sw          $t8, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r24;
    // 0x42001F28: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42001F2C: jal         0x4200113C
    // 0x42001F30: nop

    ovl_blast_ground_113C(rdram, ctx);
        goto after_3;
    // 0x42001F30: nop

    after_3:
    // 0x42001F34: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x42001F38: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x42001F3C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x42001F40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x42001F44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x42001F48: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x42001F4C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x42001F50: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x42001F54: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x42001F58: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x42001F5C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x42001F60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x42001F64: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x42001F68: sw          $t0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r8;
    // 0x42001F6C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x42001F70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x42001F74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x42001F78: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x42001F7C: nop

    // 0x42001F80: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x42001F84: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x42001F88: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x42001F8C: sw          $t2, 0x1C4($a0)
    MEM_W(0X1C4, ctx->r4) = ctx->r10;
    // 0x42001F90: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x42001F94: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x42001F98: jal         0x420029CC
    // 0x42001F9C: swc1        $f16, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f16.u32l;
    ovl_blast_ground_29CC(rdram, ctx);
        goto after_4;
    // 0x42001F9C: swc1        $f16, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f16.u32l;
    after_4:
L_42001FA0:
    // 0x42001FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42001FA4:
    // 0x42001FA4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x42001FA8: jr          $ra
    // 0x42001FAC: nop

    return;
    // 0x42001FAC: nop

;}
RECOMP_FUNC void ovl_blast_ground_1FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001FB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x42001FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42001FB8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x42001FBC: jal         0x420014F4
    // 0x42001FC0: nop

    ovl_blast_ground_14F4(rdram, ctx);
        goto after_0;
    // 0x42001FC0: nop

    after_0:
    // 0x42001FC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x42001FC8: jal         0x420014C8
    // 0x42001FCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_blast_ground_14C8(rdram, ctx);
        goto after_1;
    // 0x42001FCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x42001FD0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x42001FD4: jal         0x42001424
    // 0x42001FD8: nop

    ovl_blast_ground_1424(rdram, ctx);
        goto after_2;
    // 0x42001FD8: nop

    after_2:
    // 0x42001FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42001FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42001FE4: jr          $ra
    // 0x42001FE8: nop

    return;
    // 0x42001FE8: nop

;}
RECOMP_FUNC void ovl_blast_ground_1FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42001FEC: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42001FF0: addiu       $v1, $v1, 0x4714
    ctx->r3 = ADD32(ctx->r3, 0X4714);
    // 0x42001FF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x42001FF8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x42001FFC: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x42002000: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x42002004: addiu       $t6, $v0, 0x4
    ctx->r14 = ADD32(ctx->r2, 0X4);
    // 0x42002008: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x4200200C: jr          $ra
    // 0x42002010: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    return;
    // 0x42002010: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_blast_ground_2014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002014: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42002018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200201C: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x42002020: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x42002024: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42002028: jal         0x420018B0
    // 0x4200202C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_blast_ground_18B0(rdram, ctx);
        goto after_0;
    // 0x4200202C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x42002030: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x42002034: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x42002038: jal         0x42001874
    // 0x4200203C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_1;
    // 0x4200203C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x42002040: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x42002044: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42002048: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x4200204C: addiu       $v1, $v1, 0x4714
    ctx->r3 = ADD32(ctx->r3, 0X4714);
    // 0x42002050: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x42002054: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x42002058: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x4200205C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x42002060: lui         $t9, 0x4200
    ctx->r25 = S32(0X4200 << 16);
    // 0x42002064: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x42002068: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x4200206C: lw          $t9, 0x4474($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4474);
    // 0x42002070: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x42002074: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002078: bne         $a2, $at, L_42002084
    if (ctx->r6 != ctx->r1) {
        // 0x4200207C: sw          $t9, 0x70($t0)
        MEM_W(0X70, ctx->r8) = ctx->r25;
            goto L_42002084;
    }
    // 0x4200207C: sw          $t9, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r25;
    // 0x42002080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_42002084:
    // 0x42002084: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x42002088: jal         0x420015E0
    // 0x4200208C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_blast_ground_15E0(rdram, ctx);
        goto after_2;
    // 0x4200208C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x42002090: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42002094: addiu       $v1, $v1, 0x4714
    ctx->r3 = ADD32(ctx->r3, 0X4714);
    // 0x42002098: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x4200209C: jal         0x42002CAC
    // 0x420020A0: nop

    ovl_blast_ground_2CAC(rdram, ctx);
        goto after_3;
    // 0x420020A0: nop

    after_3:
    // 0x420020A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420020A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x420020AC: jr          $ra
    // 0x420020B0: nop

    return;
    // 0x420020B0: nop

;}
RECOMP_FUNC void ovl_blast_ground_20B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420020B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x420020B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x420020BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x420020C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x420020C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x420020C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420020CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x420020D0: jal         0x42001874
    // 0x420020D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x420020D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x420020D8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420020DC: sw          $zero, 0x4710($at)
    MEM_W(0X4710, ctx->r1) = 0;
    // 0x420020E0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420020E4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x420020E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x420020EC: sw          $t6, 0x4714($at)
    MEM_W(0X4714, ctx->r1) = ctx->r14;
    // 0x420020F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x420020F4: addiu       $s2, $zero, 0x30
    ctx->r18 = ADD32(0, 0X30);
    // 0x420020F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_420020FC:
    // 0x420020FC: jal         0x42001808
    // 0x42002100: addiu       $s0, $s0, 0x1CC
    ctx->r16 = ADD32(ctx->r16, 0X1CC);
    ovl_blast_ground_1808(rdram, ctx);
        goto after_1;
    // 0x42002100: addiu       $s0, $s0, 0x1CC
    ctx->r16 = ADD32(ctx->r16, 0X1CC);
    after_1:
    // 0x42002104: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x42002108: bne         $s1, $s2, L_420020FC
    if (ctx->r17 != ctx->r18) {
        // 0x4200210C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_420020FC;
    }
    // 0x4200210C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42002110: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002114: lui         $a0, 0x4200
    ctx->r4 = S32(0X4200 << 16);
    // 0x42002118: sw          $s0, 0x471C($at)
    MEM_W(0X471C, ctx->r1) = ctx->r16;
    // 0x4200211C: addiu       $a0, $a0, 0x25F8
    ctx->r4 = ADD32(ctx->r4, 0X25F8);
    // 0x42002120: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x42002124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002128: jal         0x42000820
    // 0x4200212C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_820(rdram, ctx);
        goto after_2;
    // 0x4200212C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42002130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42002134: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002138: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4200213C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42002140: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42002144: sw          $v0, 0x4718($at)
    MEM_W(0X4718, ctx->r1) = ctx->r2;
    // 0x42002148: jr          $ra
    // 0x4200214C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4200214C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ground_2150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4200215C: jal         0x420017CC
    // 0x42002160: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x42002160: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x42002164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200216C: jr          $ra
    // 0x42002170: nop

    return;
    // 0x42002170: nop

;}
RECOMP_FUNC void ovl_blast_ground_2174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002174: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42002178: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4200217C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42002180: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x42002184: jr          $ra
    // 0x42002188: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x42002188: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_blast_ground_218C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200218C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x42002190: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x42002194: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x42002198: beq         $t6, $zero, L_420021B4
    if (ctx->r14 == 0) {
        // 0x4200219C: ori         $t8, $v0, 0x1
        ctx->r24 = ctx->r2 | 0X1;
            goto L_420021B4;
    }
    // 0x4200219C: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x420021A0: bne         $a1, $at, L_420021BC
    if (ctx->r5 != ctx->r1) {
        // 0x420021A4: ori         $t7, $v0, 0x1
        ctx->r15 = ctx->r2 | 0X1;
            goto L_420021BC;
    }
    // 0x420021A4: ori         $t7, $v0, 0x1
    ctx->r15 = ctx->r2 | 0X1;
    // 0x420021A8: sw          $t7, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r15;
    // 0x420021AC: jr          $ra
    // 0x420021B0: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    return;
    // 0x420021B0: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
L_420021B4:
    // 0x420021B4: sw          $t8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r24;
    // 0x420021B8: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
L_420021BC:
    // 0x420021BC: jr          $ra
    // 0x420021C0: nop

    return;
    // 0x420021C0: nop

;}
RECOMP_FUNC void ovl_blast_ground_21C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420021C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x420021C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420021CC: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x420021D0: addiu       $t6, $a0, 0x18
    ctx->r14 = ADD32(ctx->r4, 0X18);
    // 0x420021D4: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x420021D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x420021DC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x420021E0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x420021E4: jal         0x420006C4
    // 0x420021E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x420021E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x420021EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420021F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x420021F4: jr          $ra
    // 0x420021F8: nop

    return;
    // 0x420021F8: nop

;}
RECOMP_FUNC void ovl_blast_ground_21FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420021FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002204: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x42002208: nop

    // 0x4200220C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x42002210: beq         $t7, $zero, L_42002240
    if (ctx->r15 == 0) {
        // 0x42002214: nop
    
            goto L_42002240;
    }
    // 0x42002214: nop

    // 0x42002218: lw          $v1, 0x78($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X78);
    // 0x4200221C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x42002220: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x42002224: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x42002228: bne         $v0, $zero, L_42002240
    if (ctx->r2 != 0) {
        // 0x4200222C: sw          $t8, 0x78($a0)
        MEM_W(0X78, ctx->r4) = ctx->r24;
            goto L_42002240;
    }
    // 0x4200222C: sw          $t8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r24;
    // 0x42002230: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x42002234: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x42002238: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4200223C: sw          $t0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r8;
L_42002240:
    // 0x42002240: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x42002244: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42002248: beq         $v0, $zero, L_42002268
    if (ctx->r2 == 0) {
        // 0x4200224C: nop
    
            goto L_42002268;
    }
    // 0x4200224C: nop

    // 0x42002250: beq         $v0, $at, L_42002278
    if (ctx->r2 == ctx->r1) {
        // 0x42002254: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_42002278;
    }
    // 0x42002254: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x42002258: beq         $v0, $at, L_420022B8
    if (ctx->r2 == ctx->r1) {
        // 0x4200225C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420022B8;
    }
    // 0x4200225C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002260: b           L_420022B8
    // 0x42002264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_420022B8;
    // 0x42002264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002268:
    // 0x42002268: jal         0x420027A0
    // 0x4200226C: nop

    ovl_blast_ground_27A0(rdram, ctx);
        goto after_0;
    // 0x4200226C: nop

    after_0:
    // 0x42002270: b           L_420022B8
    // 0x42002274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_420022B8;
    // 0x42002274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002278:
    // 0x42002278: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200227C: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x42002280: nop

    // 0x42002284: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x42002288: nop

    // 0x4200228C: bc1f        L_420022B8
    if (!c1cs) {
        // 0x42002290: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420022B8;
    }
    // 0x42002290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002294: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x42002298: nop

    // 0x4200229C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x420022A0: nop

    // 0x420022A4: bc1f        L_420022B8
    if (!c1cs) {
        // 0x420022A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420022B8;
    }
    // 0x420022A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420022AC: jal         0x4200218C
    // 0x420022B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_218C(rdram, ctx);
        goto after_1;
    // 0x420022B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x420022B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420022B8:
    // 0x420022B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420022BC: jr          $ra
    // 0x420022C0: nop

    return;
    // 0x420022C0: nop

;}
RECOMP_FUNC void ovl_blast_ground_22C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420022C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420022C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420022CC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x420022D0: nop

    // 0x420022D4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x420022D8: beq         $t7, $zero, L_42002394
    if (ctx->r15 == 0) {
        // 0x420022DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002394;
    }
    // 0x420022DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420022E0: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x420022E4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x420022E8: beq         $v0, $at, L_42002318
    if (ctx->r2 == ctx->r1) {
        // 0x420022EC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_42002318;
    }
    // 0x420022EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x420022F0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x420022F4: bne         $v0, $at, L_4200236C
    if (ctx->r2 != ctx->r1) {
        // 0x420022F8: nop
    
            goto L_4200236C;
    }
    // 0x420022F8: nop

    // 0x420022FC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x42002300: jal         0x42002150
    // 0x42002304: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_blast_ground_2150(rdram, ctx);
        goto after_0;
    // 0x42002304: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x42002308: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4200230C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42002310: b           L_4200236C
    // 0x42002314: nop

        goto L_4200236C;
    // 0x42002314: nop

L_42002318:
    // 0x42002318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200231C: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x42002320: nop

    // 0x42002324: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x42002328: nop

    // 0x4200232C: bc1f        L_42002368
    if (!c1cs) {
        // 0x42002330: nop
    
            goto L_42002368;
    }
    // 0x42002330: nop

    // 0x42002334: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x42002338: nop

    // 0x4200233C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x42002340: nop

    // 0x42002344: bc1t        L_42002368
    if (c1cs) {
        // 0x42002348: nop
    
            goto L_42002368;
    }
    // 0x42002348: nop

    // 0x4200234C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x42002350: jal         0x42002174
    // 0x42002354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_blast_ground_2174(rdram, ctx);
        goto after_1;
    // 0x42002354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x42002358: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4200235C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42002360: b           L_4200236C
    // 0x42002364: nop

        goto L_4200236C;
    // 0x42002364: nop

L_42002368:
    // 0x42002368: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_4200236C:
    // 0x4200236C: beq         $v1, $zero, L_42002380
    if (ctx->r3 == 0) {
        // 0x42002370: nop
    
            goto L_42002380;
    }
    // 0x42002370: nop

    // 0x42002374: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x42002378: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x4200237C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
L_42002380:
    // 0x42002380: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x42002384: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x42002388: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4200238C: sw          $t0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r8;
    // 0x42002390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002394:
    // 0x42002394: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42002398: jr          $ra
    // 0x4200239C: nop

    return;
    // 0x4200239C: nop

;}
RECOMP_FUNC void ovl_blast_ground_23A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420023A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420023A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420023A8: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x420023AC: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x420023B0: lw          $t1, 0x6C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X6C);
    // 0x420023B4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x420023B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x420023BC: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x420023C0: sw          $t7, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r15;
    // 0x420023C4: bne         $at, $zero, L_420023D4
    if (ctx->r1 != 0) {
        // 0x420023C8: sw          $t9, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r25;
            goto L_420023D4;
    }
    // 0x420023C8: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
    // 0x420023CC: jal         0x4200218C
    // 0x420023D0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_blast_ground_218C(rdram, ctx);
        goto after_0;
    // 0x420023D0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
L_420023D4:
    // 0x420023D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420023D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420023DC: jr          $ra
    // 0x420023E0: nop

    return;
    // 0x420023E0: nop

;}
RECOMP_FUNC void ovl_blast_ground_23E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420023E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x420023E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420023EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420023F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x420023F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x420023F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x420023FC: jal         0x420017CC
    // 0x42002400: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_0;
    // 0x42002400: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x42002404: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x42002408: nop

    // 0x4200240C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x42002410: nop

    // 0x42002414: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x42002418: beq         $t8, $zero, L_42002490
    if (ctx->r24 == 0) {
        // 0x4200241C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42002490;
    }
    // 0x4200241C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002420: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x42002424: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002428: beq         $v0, $at, L_42002444
    if (ctx->r2 == ctx->r1) {
        // 0x4200242C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_42002444;
    }
    // 0x4200242C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002430: jal         0x420023A0
    // 0x42002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_23A0(rdram, ctx);
        goto after_1;
    // 0x42002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x42002438: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x4200243C: nop

    // 0x42002440: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_42002444:
    // 0x42002444: beq         $v0, $at, L_42002460
    if (ctx->r2 == ctx->r1) {
        // 0x42002448: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_42002460;
    }
    // 0x42002448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4200244C: jal         0x420022C4
    // 0x42002450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_22C4(rdram, ctx);
        goto after_2;
    // 0x42002450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x42002454: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x42002458: nop

    // 0x4200245C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_42002460:
    // 0x42002460: beq         $v0, $at, L_4200247C
    if (ctx->r2 == ctx->r1) {
        // 0x42002464: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4200247C;
    }
    // 0x42002464: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002468: jal         0x420021FC
    // 0x4200246C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_21FC(rdram, ctx);
        goto after_3;
    // 0x4200246C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x42002470: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x42002474: nop

    // 0x42002478: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4200247C:
    // 0x4200247C: beq         $v0, $at, L_42002490
    if (ctx->r2 == ctx->r1) {
        // 0x42002480: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42002490;
    }
    // 0x42002480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002484: jal         0x420021C4
    // 0x42002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_21C4(rdram, ctx);
        goto after_4;
    // 0x42002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4200248C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42002490:
    // 0x42002490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002494: jr          $ra
    // 0x42002498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ground_249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200249C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x420024A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x420024A4: lw          $v1, 0x471C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X471C);
    // 0x420024A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x420024AC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x420024B0: beq         $at, $zero, L_420024F4
    if (ctx->r1 == 0) {
        // 0x420024B4: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_420024F4;
    }
    // 0x420024B4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_420024B8:
    // 0x420024B8: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x420024BC: nop

    // 0x420024C0: beq         $a1, $t6, L_420024E0
    if (ctx->r5 == ctx->r14) {
        // 0x420024C4: nop
    
            goto L_420024E0;
    }
    // 0x420024C4: nop

    // 0x420024C8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x420024CC: nop

    // 0x420024D0: beq         $a1, $t7, L_420024E0
    if (ctx->r5 == ctx->r15) {
        // 0x420024D4: nop
    
            goto L_420024E0;
    }
    // 0x420024D4: nop

    // 0x420024D8: jr          $ra
    // 0x420024DC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x420024DC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_420024E0:
    // 0x420024E0: addiu       $v0, $v0, 0x1CC
    ctx->r2 = ADD32(ctx->r2, 0X1CC);
    // 0x420024E4: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x420024E8: bne         $at, $zero, L_420024B8
    if (ctx->r1 != 0) {
        // 0x420024EC: nop
    
            goto L_420024B8;
    }
    // 0x420024EC: nop

    // 0x420024F0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_420024F4:
    // 0x420024F4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x420024F8: jr          $ra
    // 0x420024FC: nop

    return;
    // 0x420024FC: nop

;}
RECOMP_FUNC void ovl_blast_ground_2500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002500: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42002504: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42002508: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4200250C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x42002510: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42002514: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42002518: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4200251C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x42002520: jal         0x42001874
    // 0x42002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x42002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42002528: lui         $s1, 0x4200
    ctx->r17 = S32(0X4200 << 16);
    // 0x4200252C: lw          $s1, 0x4710($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4710);
    // 0x42002530: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x42002534: blez        $s1, L_420025D8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x42002538: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_420025D8;
    }
    // 0x42002538: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4200253C: addiu       $s4, $sp, 0x34
    ctx->r20 = ADD32(ctx->r29, 0X34);
    // 0x42002540: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x42002544: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
L_42002548:
    // 0x42002548: jal         0x4200249C
    // 0x4200254C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_blast_ground_249C(rdram, ctx);
        goto after_1;
    // 0x4200254C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x42002550: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x42002554: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x42002558: beq         $t6, $s3, L_420025D8
    if (ctx->r14 == ctx->r19) {
        // 0x4200255C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_420025D8;
    }
    // 0x4200255C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x42002560: lw          $t8, 0x5C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X5C);
    // 0x42002564: nop

    // 0x42002568: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x4200256C: beq         $t9, $zero, L_42002588
    if (ctx->r25 == 0) {
        // 0x42002570: nop
    
            goto L_42002588;
    }
    // 0x42002570: nop

    // 0x42002574: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x42002578: jal         0x420006C4
    // 0x4200257C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_2;
    // 0x4200257C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x42002580: b           L_420025C8
    // 0x42002584: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
        goto L_420025C8;
    // 0x42002584: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_42002588:
    // 0x42002588: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x4200258C: nop

    // 0x42002590: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x42002594: sltiu       $at, $t2, 0x9
    ctx->r1 = ctx->r10 < 0X9 ? 1 : 0;
    // 0x42002598: beq         $at, $zero, L_420025C4
    if (ctx->r1 == 0) {
        // 0x4200259C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_420025C4;
    }
    // 0x4200259C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x420025A0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420025A4: addu        $at, $at, $t2
    gpr jr_addend_420025B0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x420025A8: lw          $t2, 0x45FC($at)
    ctx->r10 = ADD32(ctx->r1, 0X45FC);
    // 0x420025AC: nop

    // 0x420025B0: jr          $t2
    // 0x420025B4: nop

    switch (jr_addend_420025B0 >> 2) {
        case 0: goto L_420025B8; break;
        case 1: goto L_420025C4; break;
        case 2: goto L_420025B8; break;
        case 3: goto L_420025B8; break;
        case 4: goto L_420025B8; break;
        case 5: goto L_420025B8; break;
        case 6: goto L_420025B8; break;
        case 7: goto L_420025B8; break;
        case 8: goto L_420025B8; break;
        default: switch_error(__func__, 0x420025B0, 0x420045FC);
    }
    // 0x420025B4: nop

L_420025B8:
    // 0x420025B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x420025BC: jal         0x420023E4
    // 0x420025C0: nop

    ovl_blast_ground_23E4(rdram, ctx);
        goto after_3;
    // 0x420025C0: nop

    after_3:
L_420025C4:
    // 0x420025C4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_420025C8:
    // 0x420025C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x420025CC: addiu       $t4, $t3, 0x1CC
    ctx->r12 = ADD32(ctx->r11, 0X1CC);
    // 0x420025D0: bne         $s0, $s1, L_42002548
    if (ctx->r16 != ctx->r17) {
        // 0x420025D4: sw          $t4, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r12;
            goto L_42002548;
    }
    // 0x420025D4: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
L_420025D8:
    // 0x420025D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420025DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x420025E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x420025E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x420025E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x420025EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x420025F0: jr          $ra
    // 0x420025F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x420025F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_ground_25F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420025F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420025FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_42002600:
    // 0x42002600: jal         0x42002500
    // 0x42002604: nop

    ovl_blast_ground_2500(rdram, ctx);
        goto after_0;
    // 0x42002604: nop

    after_0:
    // 0x42002608: jal         0x4200085C
    // 0x4200260C: nop

    ovl_blast_ground_85C(rdram, ctx);
        goto after_1;
    // 0x4200260C: nop

    after_1:
    // 0x42002610: b           L_42002600
    // 0x42002614: nop

        goto L_42002600;
    // 0x42002614: nop

    // 0x42002618: nop

    // 0x4200261C: nop

    // 0x42002620: nop

    // 0x42002624: nop

    // 0x42002628: nop

    // 0x4200262C: nop

    // 0x42002630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002638: jr          $ra
    // 0x4200263C: nop

    return;
    // 0x4200263C: nop

;}
RECOMP_FUNC void ovl_blast_ground_2640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002648: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4200264C: nop

    // 0x42002650: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x42002654: sltiu       $at, $t7, 0x16
    ctx->r1 = ctx->r15 < 0X16 ? 1 : 0;
    // 0x42002658: beq         $at, $zero, L_42002700
    if (ctx->r1 == 0) {
        // 0x4200265C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_42002700;
    }
    // 0x4200265C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002660: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002664: addu        $at, $at, $t7
    gpr jr_addend_42002670 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x42002668: lw          $t7, 0x4620($at)
    ctx->r15 = ADD32(ctx->r1, 0X4620);
    // 0x4200266C: nop

    // 0x42002670: jr          $t7
    // 0x42002674: nop

    switch (jr_addend_42002670 >> 2) {
        case 0: goto L_42002678; break;
        case 1: goto L_42002700; break;
        case 2: goto L_42002700; break;
        case 3: goto L_420026D8; break;
        case 4: goto L_42002700; break;
        case 5: goto L_420026E8; break;
        case 6: goto L_42002688; break;
        case 7: goto L_42002698; break;
        case 8: goto L_42002700; break;
        case 9: goto L_42002700; break;
        case 10: goto L_420026C8; break;
        case 11: goto L_420026B8; break;
        case 12: goto L_42002700; break;
        case 13: goto L_42002700; break;
        case 14: goto L_42002700; break;
        case 15: goto L_42002700; break;
        case 16: goto L_42002700; break;
        case 17: goto L_42002700; break;
        case 18: goto L_42002700; break;
        case 19: goto L_420026F8; break;
        case 20: goto L_420026A8; break;
        case 21: goto L_42002700; break;
        default: switch_error(__func__, 0x42002670, 0x42004620);
    }
    // 0x42002674: nop

L_42002678:
    // 0x42002678: jal         0x420020B4
    // 0x4200267C: nop

    ovl_blast_ground_20B4(rdram, ctx);
        goto after_0;
    // 0x4200267C: nop

    after_0:
    // 0x42002680: b           L_42002704
    // 0x42002684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x42002684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002688:
    // 0x42002688: jal         0x42002014
    // 0x4200268C: nop

    ovl_blast_ground_2014(rdram, ctx);
        goto after_1;
    // 0x4200268C: nop

    after_1:
    // 0x42002690: b           L_42002704
    // 0x42002694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x42002694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002698:
    // 0x42002698: jal         0x42001FEC
    // 0x4200269C: nop

    ovl_blast_ground_1FEC(rdram, ctx);
        goto after_2;
    // 0x4200269C: nop

    after_2:
    // 0x420026A0: b           L_42002704
    // 0x420026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026A8:
    // 0x420026A8: jal         0x42001FB0
    // 0x420026AC: nop

    ovl_blast_ground_1FB0(rdram, ctx);
        goto after_3;
    // 0x420026AC: nop

    after_3:
    // 0x420026B0: b           L_42002704
    // 0x420026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026B8:
    // 0x420026B8: jal         0x42001E64
    // 0x420026BC: nop

    ovl_blast_ground_1E64(rdram, ctx);
        goto after_4;
    // 0x420026BC: nop

    after_4:
    // 0x420026C0: b           L_42002704
    // 0x420026C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026C8:
    // 0x420026C8: jal         0x42001C3C
    // 0x420026CC: nop

    ovl_blast_ground_1C3C(rdram, ctx);
        goto after_5;
    // 0x420026CC: nop

    after_5:
    // 0x420026D0: b           L_42002704
    // 0x420026D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026D8:
    // 0x420026D8: jal         0x42001B64
    // 0x420026DC: nop

    ovl_blast_ground_1B64(rdram, ctx);
        goto after_6;
    // 0x420026DC: nop

    after_6:
    // 0x420026E0: b           L_42002704
    // 0x420026E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026E8:
    // 0x420026E8: jal         0x42001B38
    // 0x420026EC: nop

    ovl_blast_ground_1B38(rdram, ctx);
        goto after_7;
    // 0x420026EC: nop

    after_7:
    // 0x420026F0: b           L_42002704
    // 0x420026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026F8:
    // 0x420026F8: jal         0x42001ADC
    // 0x420026FC: nop

    ovl_blast_ground_1ADC(rdram, ctx);
        goto after_8;
    // 0x420026FC: nop

    after_8:
L_42002700:
    // 0x42002700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002704:
    // 0x42002704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002708: jr          $ra
    // 0x4200270C: nop

    return;
    // 0x4200270C: nop

;}
RECOMP_FUNC void ovl_blast_ground_2710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002718: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x4200271C: nop

    // 0x42002720: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x42002724: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x42002728: beq         $at, $zero, L_42002778
    if (ctx->r1 == 0) {
        // 0x4200272C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_42002778;
    }
    // 0x4200272C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x42002730: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002734: addu        $at, $at, $t6
    gpr jr_addend_42002740 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x42002738: lw          $t6, 0x4678($at)
    ctx->r14 = ADD32(ctx->r1, 0X4678);
    // 0x4200273C: nop

    // 0x42002740: jr          $t6
    // 0x42002744: nop

    switch (jr_addend_42002740 >> 2) {
        case 0: goto L_42002748; break;
        case 1: goto L_42002758; break;
        case 2: goto L_42002768; break;
        case 3: goto L_42002758; break;
        case 4: goto L_42002758; break;
        case 5: goto L_42002758; break;
        case 6: goto L_42002758; break;
        case 7: goto L_42002758; break;
        case 8: goto L_42002758; break;
        case 9: goto L_42002758; break;
        default: switch_error(__func__, 0x42002740, 0x42004678);
    }
    // 0x42002744: nop

L_42002748:
    // 0x42002748: jal         0x42002640
    // 0x4200274C: nop

    ovl_blast_ground_2640(rdram, ctx);
        goto after_0;
    // 0x4200274C: nop

    after_0:
    // 0x42002750: b           L_42002788
    // 0x42002754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002758:
    // 0x42002758: jal         0x42002640
    // 0x4200275C: nop

    ovl_blast_ground_2640(rdram, ctx);
        goto after_1;
    // 0x4200275C: nop

    after_1:
    // 0x42002760: b           L_42002788
    // 0x42002764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002768:
    // 0x42002768: jal         0x42002640
    // 0x4200276C: nop

    ovl_blast_ground_2640(rdram, ctx);
        goto after_2;
    // 0x4200276C: nop

    after_2:
    // 0x42002770: b           L_42002788
    // 0x42002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002778:
    // 0x42002778: lui         $a0, 0x4200
    ctx->r4 = S32(0X4200 << 16);
    // 0x4200277C: jal         0x4200001C
    // 0x42002780: addiu       $a0, $a0, 0x45D0
    ctx->r4 = ADD32(ctx->r4, 0X45D0);
    ovl_blast_ground_1C(rdram, ctx);
        goto after_3;
    // 0x42002780: addiu       $a0, $a0, 0x45D0
    ctx->r4 = ADD32(ctx->r4, 0X45D0);
    after_3:
    // 0x42002784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002788:
    // 0x42002788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200278C: jr          $ra
    // 0x42002790: nop

    return;
    // 0x42002790: nop

    // 0x42002794: nop

    // 0x42002798: nop

    // 0x4200279C: nop

;}
RECOMP_FUNC void ovl_blast_ground_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027A8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027AC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x420027B0: bne         $t6, $at, L_420027C8
    if (ctx->r14 != ctx->r1) {
        // 0x420027B4: nop
    
            goto L_420027C8;
    }
    // 0x420027B4: nop

    // 0x420027B8: jal         0x4200430C
    // 0x420027BC: nop

    ovl_blast_ground_430C(rdram, ctx);
        goto after_0;
    // 0x420027BC: nop

    after_0:
    // 0x420027C0: b           L_420027D4
    // 0x420027C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_420027D4;
    // 0x420027C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420027C8:
    // 0x420027C8: jal         0x42003BAC
    // 0x420027CC: nop

    ovl_blast_ground_3BAC(rdram, ctx);
        goto after_1;
    // 0x420027CC: nop

    after_1:
    // 0x420027D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420027D4:
    // 0x420027D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420027D8: jr          $ra
    // 0x420027DC: nop

    return;
    // 0x420027DC: nop

;}
RECOMP_FUNC void ovl_blast_ground_27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027E8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x420027F0: bne         $t6, $at, L_42002834
    if (ctx->r14 != ctx->r1) {
        // 0x420027F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002834;
    }
    // 0x420027F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420027F8: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x420027FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002800: beq         $t7, $zero, L_42002834
    if (ctx->r15 == 0) {
        // 0x42002804: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002834;
    }
    // 0x42002804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002808: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x4200280C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002810: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x42002814: nop

    // 0x42002818: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4200281C: nop

    // 0x42002820: bc1t        L_42002834
    if (c1cs) {
        // 0x42002824: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002834;
    }
    // 0x42002824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002828: jal         0x420039F0
    // 0x4200282C: nop

    ovl_blast_ground_39F0(rdram, ctx);
        goto after_0;
    // 0x4200282C: nop

    after_0:
    // 0x42002830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002834:
    // 0x42002834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002838: jr          $ra
    // 0x4200283C: nop

    return;
    // 0x4200283C: nop

;}
