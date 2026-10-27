#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8002AFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AFB4: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8002AFB8: addiu       $s2, $s2, -0x4300
    ctx->r18 = ADD32(ctx->r18, -0X4300);
    // 0x8002AFBC: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x8002AFC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AFC4: beq         $v1, $zero, L_8002B024
    if (ctx->r3 == 0) {
        // 0x8002AFC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002B024;
    }
    // 0x8002AFC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AFCC: blez        $v1, L_8002B018
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002AFD0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002B018;
    }
    // 0x8002AFD0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8002AFD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8002AFD8:
    // 0x8002AFD8: lw          $t6, 0xC($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XC);
    // 0x8002AFDC: nop

    // 0x8002AFE0: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x8002AFE4: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x8002AFE8: nop

    // 0x8002AFEC: beq         $t7, $zero, L_8002B008
    if (ctx->r15 == 0) {
        // 0x8002AFF0: nop
    
            goto L_8002B008;
    }
    // 0x8002AFF0: nop

    // 0x8002AFF4: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x8002AFF8: jal         0x80006DC0
    // 0x8002AFFC: nop

    func_80006DC0(rdram, ctx);
        goto after_0;
    // 0x8002AFFC: nop

    after_0:
    // 0x8002B000: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x8002B004: nop

L_8002B008:
    // 0x8002B008: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002B00C: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002B010: bne         $at, $zero, L_8002AFD8
    if (ctx->r1 != 0) {
        // 0x8002B014: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_8002AFD8;
    }
    // 0x8002B014: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_8002B018:
    // 0x8002B018: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8002B01C: jal         0x80006DC0
    // 0x8002B020: nop

    func_80006DC0(rdram, ctx);
        goto after_1;
    // 0x8002B020: nop

    after_1:
L_8002B024:
    // 0x8002B024: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8002B028: addiu       $s0, $s0, -0xB48
    ctx->r16 = ADD32(ctx->r16, -0XB48);
    // 0x8002B02C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002B030: nop

    // 0x8002B034: beq         $a0, $zero, L_8002B048
    if (ctx->r4 == 0) {
        // 0x8002B038: nop
    
            goto L_8002B048;
    }
    // 0x8002B038: nop

    // 0x8002B03C: jal         0x80002C10
    // 0x8002B040: nop

    func_80002C10(rdram, ctx);
        goto after_2;
    // 0x8002B040: nop

    after_2:
    // 0x8002B044: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8002B048:
    // 0x8002B048: jal         0x80007E70
    // 0x8002B04C: nop

    func_80007E70(rdram, ctx);
        goto after_3;
    // 0x8002B04C: nop

    after_3:
    // 0x8002B050: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8002B054: addiu       $s0, $s0, 0x6280
    ctx->r16 = ADD32(ctx->r16, 0X6280);
    // 0x8002B058: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002B05C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002B060: lhu         $a1, 0x60($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X60);
    // 0x8002B064: lw          $a3, 0x64($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X64);
    // 0x8002B068: jal         0x8001B20C
    // 0x8002B06C: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    func_8001B20C(rdram, ctx);
        goto after_4;
    // 0x8002B06C: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    after_4:
    // 0x8002B070: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002B074: nop

    // 0x8002B078: lbu         $a2, 0x5A($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5A);
    // 0x8002B07C: lbu         $a1, 0x59($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X59);
    // 0x8002B080: lbu         $a0, 0x58($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X58);
    // 0x8002B084: jal         0x80004634
    // 0x8002B088: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    func_80004634(rdram, ctx);
        goto after_5;
    // 0x8002B088: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    after_5:
    // 0x8002B08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B094: jr          $ra
    // 0x8002B098: nop

    return;
    // 0x8002B098: nop

    // 0x8002B09C: jr          $ra
    // 0x8002B0A0: nop

    return;
    // 0x8002B0A0: nop

;}
RECOMP_FUNC void func_8002B0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B0A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002B0A8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x8002B0AC: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x8002B0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B0B4: addiu       $s2, $s2, -0x5FF0
    ctx->r18 = ADD32(ctx->r18, -0X5FF0);
    // 0x8002B0B8: addiu       $s0, $s0, -0x6020
    ctx->r16 = ADD32(ctx->r16, -0X6020);
    // 0x8002B0BC: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
L_8002B0C0:
    // 0x8002B0C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002B0C4: nop

    // 0x8002B0C8: beq         $a0, $zero, L_8002B0FC
    if (ctx->r4 == 0) {
        // 0x8002B0CC: nop
    
            goto L_8002B0FC;
    }
    // 0x8002B0CC: nop

    // 0x8002B0D0: add.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x8002B0D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8002B0D8: sub.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x8002B0DC: add.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x8002B0E0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8002B0E4: add.s       $f4, $f24, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f24.fl;
    // 0x8002B0E8: sub.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x8002B0EC: sub.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f24.fl - ctx->f4.fl;
    // 0x8002B0F0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8002B0F4: jal         0x80009D54
    // 0x8002B0F8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_80009D54(rdram, ctx);
        goto after_0;
    // 0x8002B0F8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_0:
L_8002B0FC:
    // 0x8002B0FC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8002B100: bne         $s0, $s2, L_8002B0C0
    if (ctx->r16 != ctx->r18) {
        // 0x8002B104: nop
    
            goto L_8002B0C0;
    }
    // 0x8002B104: nop

    // 0x8002B108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B10C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8002B110: jr          $ra
    // 0x8002B114: nop

    return;
    // 0x8002B114: nop

;}
RECOMP_FUNC void func_8002B118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B118: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002B11C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002B120: lw          $a0, -0x910($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X910);
    // 0x8002B124: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002B128: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8002B12C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8002B130: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8002B134: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8002B138: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8002B13C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8002B140: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8002B144: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002B148: beq         $a0, $zero, L_8002B170
    if (ctx->r4 == 0) {
        // 0x8002B14C: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_8002B170;
    }
    // 0x8002B14C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8002B150: jal         0x800075A0
    // 0x8002B154: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x8002B154: nop

    after_0:
    // 0x8002B158: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8002B15C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002B160: sw          $zero, -0x910($at)
    MEM_W(-0X910, ctx->r1) = 0;
    // 0x8002B164: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x8002B168: jal         0x8002B0A4
    // 0x8002B16C: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    func_8002B0A4(rdram, ctx);
        goto after_1;
    // 0x8002B16C: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    after_1:
L_8002B170:
    // 0x8002B170: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002B174: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8002B178: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002B17C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8002B180: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002B184: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8002B188: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002B18C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8002B190: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8002B194: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8002B198: jr          $ra
    // 0x8002B19C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8002B19C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8002B1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B1A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002B1A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002B1A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002B1AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002B1B0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8002B1B4: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8002B1B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002B1BC: addiu       $s2, $s2, -0x4290
    ctx->r18 = ADD32(ctx->r18, -0X4290);
    // 0x8002B1C0: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
    // 0x8002B1C4: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
L_8002B1C8:
    // 0x8002B1C8: lw          $a0, 0x118($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X118);
    // 0x8002B1CC: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8002B1D0: jal         0x8004A0A0
    // 0x8002B1D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8002B1D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x8002B1D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002B1DC: bne         $s0, $s2, L_8002B1C8
    if (ctx->r16 != ctx->r18) {
        // 0x8002B1E0: nop
    
            goto L_8002B1C8;
    }
    // 0x8002B1E0: nop

    // 0x8002B1E4: jal         0x80040720
    // 0x8002B1E8: nop

    func_80040720(rdram, ctx);
        goto after_1;
    // 0x8002B1E8: nop

    after_1:
    // 0x8002B1EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002B1F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002B1F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B1F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002B1FC: jr          $ra
    // 0x8002B200: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8002B200: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8002B204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B204: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8002B208: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8002B20C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8002B210: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8002B214: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8002B218: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8002B21C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8002B220: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8002B224: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8002B228: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8002B22C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8002B230: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8002B234: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002B238: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8002B23C: addiu       $s2, $s2, -0x4288
    ctx->r18 = ADD32(ctx->r18, -0X4288);
    // 0x8002B240: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8002B244: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
L_8002B248:
    // 0x8002B248: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8002B24C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8002B250: beq         $t6, $zero, L_8002B264
    if (ctx->r14 == 0) {
        // 0x8002B254: nop
    
            goto L_8002B264;
    }
    // 0x8002B254: nop

    // 0x8002B258: lw          $a0, 0xFC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XFC);
    // 0x8002B25C: jal         0x8004A0A0
    // 0x8002B260: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8002B260: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
L_8002B264:
    // 0x8002B264: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8002B268: sltu        $at, $s1, $s2
    ctx->r1 = ctx->r17 < ctx->r18 ? 1 : 0;
    // 0x8002B26C: bne         $at, $zero, L_8002B248
    if (ctx->r1 != 0) {
        // 0x8002B270: nop
    
            goto L_8002B248;
    }
    // 0x8002B270: nop

    // 0x8002B274: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002B278: lw          $t7, -0x4298($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4298);
    // 0x8002B27C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002B280: bne         $t7, $at, L_8002B290
    if (ctx->r15 != ctx->r1) {
        // 0x8002B284: nop
    
            goto L_8002B290;
    }
    // 0x8002B284: nop

    // 0x8002B288: jal         0x8002B1A0
    // 0x8002B28C: nop

    func_8002B1A0(rdram, ctx);
        goto after_1;
    // 0x8002B28C: nop

    after_1:
L_8002B290:
    // 0x8002B290: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8002B294: addiu       $s0, $s0, -0x910
    ctx->r16 = ADD32(ctx->r16, -0X910);
    // 0x8002B298: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002B29C: nop

    // 0x8002B2A0: beq         $a0, $zero, L_8002B2C4
    if (ctx->r4 == 0) {
        // 0x8002B2A4: nop
    
            goto L_8002B2C4;
    }
    // 0x8002B2A4: nop

    // 0x8002B2A8: jal         0x800075A0
    // 0x8002B2AC: nop

    func_800075A0(rdram, ctx);
        goto after_2;
    // 0x8002B2AC: nop

    after_2:
    // 0x8002B2B0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8002B2B4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8002B2B8: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x8002B2BC: jal         0x8002B0A4
    // 0x8002B2C0: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    func_8002B0A4(rdram, ctx);
        goto after_3;
    // 0x8002B2C0: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    after_3:
L_8002B2C4:
    // 0x8002B2C4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002B2C8: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8002B2CC: nop

    // 0x8002B2D0: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8002B2D4: beq         $t9, $zero, L_8002B358
    if (ctx->r25 == 0) {
        // 0x8002B2D8: lui         $s1, 0x800B
        ctx->r17 = S32(0X800B << 16);
            goto L_8002B358;
    }
    // 0x8002B2D8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8002B2DC: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x8002B2E0: addiu       $s0, $s0, -0x6020
    ctx->r16 = ADD32(ctx->r16, -0X6020);
    // 0x8002B2E4: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8002B2E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8002B2EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002B2F0:
    // 0x8002B2F0: beq         $s3, $zero, L_8002B308
    if (ctx->r19 == 0) {
        // 0x8002B2F4: lui         $a0, 0x800E
        ctx->r4 = S32(0X800E << 16);
            goto L_8002B308;
    }
    // 0x8002B2F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8002B2F8: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x8002B2FC: lw          $a0, -0x5FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5FF0);
    // 0x8002B300: jal         0x80008FA8
    // 0x8002B304: nop

    func_80008FA8(rdram, ctx);
        goto after_4;
    // 0x8002B304: nop

    after_4:
L_8002B308:
    // 0x8002B308: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8002B30C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002B310: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8002B314: jal         0x80009D28
    // 0x8002B318: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    func_80009D28(rdram, ctx);
        goto after_5;
    // 0x8002B318: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    after_5:
    // 0x8002B31C: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x8002B320: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8002B324: beq         $t7, $zero, L_8002B338
    if (ctx->r15 == 0) {
        // 0x8002B328: nop
    
            goto L_8002B338;
    }
    // 0x8002B328: nop

    // 0x8002B32C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8002B330: jal         0x800075A0
    // 0x8002B334: nop

    func_800075A0(rdram, ctx);
        goto after_6;
    // 0x8002B334: nop

    after_6:
L_8002B338:
    // 0x8002B338: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8002B33C: addiu       $t8, $t8, -0x5FF0
    ctx->r24 = ADD32(ctx->r24, -0X5FF0);
    // 0x8002B340: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8002B344: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8002B348: bne         $s0, $t8, L_8002B2F0
    if (ctx->r16 != ctx->r24) {
        // 0x8002B34C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8002B2F0;
    }
    // 0x8002B34C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8002B350: b           L_8002B374
    // 0x8002B354: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_8002B374;
    // 0x8002B354: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_8002B358:
    // 0x8002B358: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x8002B35C: addiu       $s0, $s0, -0x6020
    ctx->r16 = ADD32(ctx->r16, -0X6020);
    // 0x8002B360: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002B364: jal         0x80009D28
    // 0x8002B368: nop

    func_80009D28(rdram, ctx);
        goto after_7;
    // 0x8002B368: nop

    after_7:
    // 0x8002B36C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8002B370: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_8002B374:
    // 0x8002B374: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8002B378: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002B37C: lwc1        $f14, 0x5820($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5820);
    // 0x8002B380: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002B384: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002B388: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x8002B38C: lui         $a3, 0x45FA
    ctx->r7 = S32(0X45FA << 16);
    // 0x8002B390: jal         0x80008E30
    // 0x8002B394: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80008E30(rdram, ctx);
        goto after_8;
    // 0x8002B394: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x8002B398: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002B39C: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002B3A0: jal         0x8001C568
    // 0x8002B3A4: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x8002B3A4: nop

    after_9:
    // 0x8002B3A8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002B3AC: lw          $a0, -0x4320($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4320);
    // 0x8002B3B0: jal         0x80002C10
    // 0x8002B3B4: nop

    func_80002C10(rdram, ctx);
        goto after_10;
    // 0x8002B3B4: nop

    after_10:
    // 0x8002B3B8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8002B3BC: addiu       $s0, $s0, -0x904
    ctx->r16 = ADD32(ctx->r16, -0X904);
    // 0x8002B3C0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002B3C4: nop

    // 0x8002B3C8: beq         $a0, $zero, L_8002B3F0
    if (ctx->r4 == 0) {
        // 0x8002B3CC: nop
    
            goto L_8002B3F0;
    }
    // 0x8002B3CC: nop

    // 0x8002B3D0: jal         0x800195C4
    // 0x8002B3D4: nop

    func_800195C4(rdram, ctx);
        goto after_11;
    // 0x8002B3D4: nop

    after_11:
    // 0x8002B3D8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8002B3DC: addiu       $s1, $s1, -0x908
    ctx->r17 = ADD32(ctx->r17, -0X908);
    // 0x8002B3E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8002B3E4: jal         0x80002C10
    // 0x8002B3E8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    func_80002C10(rdram, ctx);
        goto after_12;
    // 0x8002B3E8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    after_12:
    // 0x8002B3EC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8002B3F0:
    // 0x8002B3F0: jal         0x8004B874
    // 0x8002B3F4: nop

    func_8004B874(rdram, ctx);
        goto after_13;
    // 0x8002B3F4: nop

    after_13:
    // 0x8002B3F8: jal         0x8005CC10
    // 0x8002B3FC: nop

    func_8005CC10(rdram, ctx);
        goto after_14;
    // 0x8002B3FC: nop

    after_14:
    // 0x8002B400: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8002B404: addiu       $s0, $s0, -0xB44
    ctx->r16 = ADD32(ctx->r16, -0XB44);
    // 0x8002B408: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002B40C: nop

    // 0x8002B410: beq         $a0, $zero, L_8002B424
    if (ctx->r4 == 0) {
        // 0x8002B414: nop
    
            goto L_8002B424;
    }
    // 0x8002B414: nop

    // 0x8002B418: jal         0x80002C10
    // 0x8002B41C: nop

    func_80002C10(rdram, ctx);
        goto after_15;
    // 0x8002B41C: nop

    after_15:
    // 0x8002B420: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8002B424:
    // 0x8002B424: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002B428: lw          $a0, -0xB50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB50);
    // 0x8002B42C: jal         0x80006DC0
    // 0x8002B430: nop

    func_80006DC0(rdram, ctx);
        goto after_16;
    // 0x8002B430: nop

    after_16:
    // 0x8002B434: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002B438: lw          $a0, -0xB4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB4C);
    // 0x8002B43C: jal         0x80006DC0
    // 0x8002B440: nop

    func_80006DC0(rdram, ctx);
        goto after_17;
    // 0x8002B440: nop

    after_17:
    // 0x8002B444: jal         0x8002AFB4
    // 0x8002B448: nop

    func_8002AFB4(rdram, ctx);
        goto after_18;
    // 0x8002B448: nop

    after_18:
    // 0x8002B44C: jal         0x8002AF60
    // 0x8002B450: nop

    func_8002AF60(rdram, ctx);
        goto after_19;
    // 0x8002B450: nop

    after_19:
    // 0x8002B454: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8002B458: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x8002B45C: addiu       $t9, $zero, 0xE4
    ctx->r25 = ADD32(0, 0XE4);
    // 0x8002B460: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8002B464: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8002B468: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8002B46C: jal         0x80008F90
    // 0x8002B470: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
    func_80008F90(rdram, ctx);
        goto after_20;
    // 0x8002B470: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
    after_20:
    // 0x8002B474: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8002B478: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8002B47C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002B480: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8002B484: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002B488: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8002B48C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002B490: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8002B494: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8002B498: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8002B49C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8002B4A0: jr          $ra
    // 0x8002B4A4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8002B4A4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8002B4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B4A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002B4AC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002B4B0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8002B4B4: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8002B4B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002B4BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002B4C0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8002B4C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002B4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B4CC: beq         $a1, $at, L_8002B50C
    if (ctx->r5 == ctx->r1) {
        // 0x8002B4D0: sw          $a1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r5;
            goto L_8002B50C;
    }
    // 0x8002B4D0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8002B4D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B4D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002B4DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8002B4E0: jal         0x8004A0A0
    // 0x8002B4E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8002B4E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8002B4E8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8002B4EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B4F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002B4F4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002B4F8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002B4FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002B500: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8002B504: jal         0x80009F20
    // 0x8002B508: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_80009F20(rdram, ctx);
        goto after_1;
    // 0x8002B508: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_1:
L_8002B50C:
    // 0x8002B50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B510: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002B514: jr          $ra
    // 0x8002B518: nop

    return;
    // 0x8002B518: nop

    // 0x8002B51C: jr          $ra
    // 0x8002B520: nop

    return;
    // 0x8002B520: nop

;}
RECOMP_FUNC void func_8002B524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B524: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8002B528: addiu       $s0, $s0, -0x42C0
    ctx->r16 = ADD32(ctx->r16, -0X42C0);
    // 0x8002B52C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002B530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B534: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x8002B538: beq         $t6, $zero, L_8002B564
    if (ctx->r14 == 0) {
        // 0x8002B53C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002B564;
    }
    // 0x8002B53C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B540: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8002B544: beq         $t7, $zero, L_8002B554
    if (ctx->r15 == 0) {
        // 0x8002B548: nop
    
            goto L_8002B554;
    }
    // 0x8002B548: nop

    // 0x8002B54C: b           L_8002B924
    // 0x8002B550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002B924;
    // 0x8002B550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002B554:
    // 0x8002B554: jal         0x80002F88
    // 0x8002B558: addiu       $a0, $zero, 0x807
    ctx->r4 = ADD32(0, 0X807);
    func_80002F88(rdram, ctx);
        goto after_0;
    // 0x8002B558: addiu       $a0, $zero, 0x807
    ctx->r4 = ADD32(0, 0X807);
    after_0:
    // 0x8002B55C: b           L_8002B574
    // 0x8002B560: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
        goto L_8002B574;
    // 0x8002B560: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_8002B564:
    // 0x8002B564: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002B568: jal         0x80002F88
    // 0x8002B56C: addiu       $a0, $a0, 0x7FE
    ctx->r4 = ADD32(ctx->r4, 0X7FE);
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x8002B56C: addiu       $a0, $a0, 0x7FE
    ctx->r4 = ADD32(ctx->r4, 0X7FE);
    after_1:
    // 0x8002B570: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_8002B574:
    // 0x8002B574: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8002B578: andi        $t8, $t3, 0x4
    ctx->r24 = ctx->r11 & 0X4;
    // 0x8002B57C: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x8002B580: beq         $t8, $zero, L_8002B674
    if (ctx->r24 == 0) {
        // 0x8002B584: or          $t3, $t8, $zero
        ctx->r11 = ctx->r24 | 0;
            goto L_8002B674;
    }
    // 0x8002B584: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x8002B588: blez        $t2, L_8002B8FC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8002B58C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8002B8FC;
    }
    // 0x8002B58C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002B590: andi        $t1, $t2, 0x3
    ctx->r9 = ctx->r10 & 0X3;
    // 0x8002B594: beq         $t1, $zero, L_8002B5D8
    if (ctx->r9 == 0) {
        // 0x8002B598: or          $a3, $t1, $zero
        ctx->r7 = ctx->r9 | 0;
            goto L_8002B5D8;
    }
    // 0x8002B598: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8002B59C: sll         $a0, $zero, 2
    ctx->r4 = S32(0 << 2);
    // 0x8002B5A0: subu        $a0, $a0, $zero
    ctx->r4 = SUB32(ctx->r4, 0);
    // 0x8002B5A4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002B5A8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8002B5AC: lw          $a1, -0x41E4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X41E4);
    // 0x8002B5B0: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
L_8002B5B4:
    // 0x8002B5B4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002B5B8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8002B5BC: bne         $a1, $t9, L_8002B5CC
    if (ctx->r5 != ctx->r25) {
        // 0x8002B5C0: addiu       $v0, $v0, 0x34
        ctx->r2 = ADD32(ctx->r2, 0X34);
            goto L_8002B5CC;
    }
    // 0x8002B5C0: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8002B5C4: b           L_8002B924
    // 0x8002B5C8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8002B924;
    // 0x8002B5C8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8002B5CC:
    // 0x8002B5CC: bne         $a3, $a2, L_8002B5B4
    if (ctx->r7 != ctx->r6) {
        // 0x8002B5D0: addiu       $a0, $a0, 0x34
        ctx->r4 = ADD32(ctx->r4, 0X34);
            goto L_8002B5B4;
    }
    // 0x8002B5D0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x8002B5D4: beq         $a2, $t2, L_8002B8FC
    if (ctx->r6 == ctx->r10) {
        // 0x8002B5D8: sll         $a0, $a2, 2
        ctx->r4 = S32(ctx->r6 << 2);
            goto L_8002B8FC;
    }
L_8002B5D8:
    // 0x8002B5D8: sll         $a0, $a2, 2
    ctx->r4 = S32(ctx->r6 << 2);
    // 0x8002B5DC: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x8002B5E0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B5E4: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8002B5E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002B5EC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B5F0: lw          $a1, -0x41E4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X41E4);
    // 0x8002B5F4: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
L_8002B5F8:
    // 0x8002B5F8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002B5FC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8002B600: bne         $a1, $t6, L_8002B610
    if (ctx->r5 != ctx->r14) {
        // 0x8002B604: nop
    
            goto L_8002B610;
    }
    // 0x8002B604: nop

    // 0x8002B608: b           L_8002B924
    // 0x8002B60C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8002B924;
    // 0x8002B60C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8002B610:
    // 0x8002B610: lw          $t7, 0x34($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X34);
    // 0x8002B614: nop

    // 0x8002B618: bne         $a1, $t7, L_8002B62C
    if (ctx->r5 != ctx->r15) {
        // 0x8002B61C: nop
    
            goto L_8002B62C;
    }
    // 0x8002B61C: nop

    // 0x8002B620: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B624: b           L_8002B924
    // 0x8002B628: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
        goto L_8002B924;
    // 0x8002B628: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8002B62C:
    // 0x8002B62C: lw          $t8, 0x68($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X68);
    // 0x8002B630: nop

    // 0x8002B634: bne         $a1, $t8, L_8002B648
    if (ctx->r5 != ctx->r24) {
        // 0x8002B638: nop
    
            goto L_8002B648;
    }
    // 0x8002B638: nop

    // 0x8002B63C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B640: b           L_8002B924
    // 0x8002B644: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
        goto L_8002B924;
    // 0x8002B644: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
L_8002B648:
    // 0x8002B648: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x8002B64C: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x8002B650: bne         $a1, $t9, L_8002B664
    if (ctx->r5 != ctx->r25) {
        // 0x8002B654: nop
    
            goto L_8002B664;
    }
    // 0x8002B654: nop

    // 0x8002B658: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B65C: b           L_8002B924
    // 0x8002B660: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
        goto L_8002B924;
    // 0x8002B660: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
L_8002B664:
    // 0x8002B664: bne         $a2, $t2, L_8002B5F8
    if (ctx->r6 != ctx->r10) {
        // 0x8002B668: addiu       $a0, $a0, 0xD0
        ctx->r4 = ADD32(ctx->r4, 0XD0);
            goto L_8002B5F8;
    }
    // 0x8002B668: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
    // 0x8002B66C: b           L_8002B8FC
    // 0x8002B670: nop

        goto L_8002B8FC;
    // 0x8002B670: nop

L_8002B674:
    // 0x8002B674: blez        $t2, L_8002B7C0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8002B678: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8002B7C0;
    }
    // 0x8002B678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002B67C: andi        $t1, $t2, 0x3
    ctx->r9 = ctx->r10 & 0X3;
    // 0x8002B680: beq         $t1, $zero, L_8002B6D8
    if (ctx->r9 == 0) {
        // 0x8002B684: or          $a3, $t1, $zero
        ctx->r7 = ctx->r9 | 0;
            goto L_8002B6D8;
    }
    // 0x8002B684: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8002B688: sll         $a0, $zero, 2
    ctx->r4 = S32(0 << 2);
    // 0x8002B68C: subu        $a0, $a0, $zero
    ctx->r4 = SUB32(ctx->r4, 0);
    // 0x8002B690: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8002B694: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8002B698: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
L_8002B69C:
    // 0x8002B69C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002B6A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8002B6A4: bne         $a1, $t6, L_8002B6C8
    if (ctx->r5 != ctx->r14) {
        // 0x8002B6A8: nop
    
            goto L_8002B6C8;
    }
    // 0x8002B6A8: nop

    // 0x8002B6AC: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x8002B6B0: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8002B6B4: nop

    // 0x8002B6B8: bne         $t7, $t8, L_8002B6C8
    if (ctx->r15 != ctx->r24) {
        // 0x8002B6BC: nop
    
            goto L_8002B6C8;
    }
    // 0x8002B6BC: nop

    // 0x8002B6C0: b           L_8002B924
    // 0x8002B6C4: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8002B924;
    // 0x8002B6C4: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8002B6C8:
    // 0x8002B6C8: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x8002B6CC: bne         $a3, $a2, L_8002B69C
    if (ctx->r7 != ctx->r6) {
        // 0x8002B6D0: addiu       $v0, $v0, 0x34
        ctx->r2 = ADD32(ctx->r2, 0X34);
            goto L_8002B69C;
    }
    // 0x8002B6D0: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8002B6D4: beq         $a2, $t2, L_8002B7BC
    if (ctx->r6 == ctx->r10) {
        // 0x8002B6D8: sll         $a0, $a2, 2
        ctx->r4 = S32(ctx->r6 << 2);
            goto L_8002B7BC;
    }
L_8002B6D8:
    // 0x8002B6D8: sll         $a0, $a2, 2
    ctx->r4 = S32(ctx->r6 << 2);
    // 0x8002B6DC: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x8002B6E0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B6E4: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8002B6E8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B6EC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8002B6F0: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
L_8002B6F4:
    // 0x8002B6F4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002B6F8: nop

    // 0x8002B6FC: bne         $a1, $t9, L_8002B720
    if (ctx->r5 != ctx->r25) {
        // 0x8002B700: nop
    
            goto L_8002B720;
    }
    // 0x8002B700: nop

    // 0x8002B704: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x8002B708: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8002B70C: nop

    // 0x8002B710: bne         $t6, $t7, L_8002B720
    if (ctx->r14 != ctx->r15) {
        // 0x8002B714: nop
    
            goto L_8002B720;
    }
    // 0x8002B714: nop

    // 0x8002B718: b           L_8002B924
    // 0x8002B71C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8002B924;
    // 0x8002B71C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8002B720:
    // 0x8002B720: lw          $t8, 0x34($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X34);
    // 0x8002B724: nop

    // 0x8002B728: bne         $a1, $t8, L_8002B750
    if (ctx->r5 != ctx->r24) {
        // 0x8002B72C: nop
    
            goto L_8002B750;
    }
    // 0x8002B72C: nop

    // 0x8002B730: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x8002B734: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x8002B738: nop

    // 0x8002B73C: bne         $t9, $t6, L_8002B750
    if (ctx->r25 != ctx->r14) {
        // 0x8002B740: nop
    
            goto L_8002B750;
    }
    // 0x8002B740: nop

    // 0x8002B744: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B748: b           L_8002B924
    // 0x8002B74C: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
        goto L_8002B924;
    // 0x8002B74C: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8002B750:
    // 0x8002B750: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x8002B754: nop

    // 0x8002B758: bne         $a1, $t7, L_8002B780
    if (ctx->r5 != ctx->r15) {
        // 0x8002B75C: nop
    
            goto L_8002B780;
    }
    // 0x8002B75C: nop

    // 0x8002B760: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x8002B764: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x8002B768: nop

    // 0x8002B76C: bne         $t8, $t9, L_8002B780
    if (ctx->r24 != ctx->r25) {
        // 0x8002B770: nop
    
            goto L_8002B780;
    }
    // 0x8002B770: nop

    // 0x8002B774: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B778: b           L_8002B924
    // 0x8002B77C: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
        goto L_8002B924;
    // 0x8002B77C: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
L_8002B780:
    // 0x8002B780: lw          $t6, 0x9C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X9C);
    // 0x8002B784: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8002B788: bne         $a1, $t6, L_8002B7B0
    if (ctx->r5 != ctx->r14) {
        // 0x8002B78C: nop
    
            goto L_8002B7B0;
    }
    // 0x8002B78C: nop

    // 0x8002B790: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x8002B794: lw          $t8, 0xA0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XA0);
    // 0x8002B798: nop

    // 0x8002B79C: bne         $t7, $t8, L_8002B7B0
    if (ctx->r15 != ctx->r24) {
        // 0x8002B7A0: nop
    
            goto L_8002B7B0;
    }
    // 0x8002B7A0: nop

    // 0x8002B7A4: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B7A8: b           L_8002B924
    // 0x8002B7AC: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
        goto L_8002B924;
    // 0x8002B7AC: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
L_8002B7B0:
    // 0x8002B7B0: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
    // 0x8002B7B4: bne         $a2, $t2, L_8002B6F4
    if (ctx->r6 != ctx->r10) {
        // 0x8002B7B8: addiu       $v0, $v0, 0xD0
        ctx->r2 = ADD32(ctx->r2, 0XD0);
            goto L_8002B6F4;
    }
    // 0x8002B7B8: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
L_8002B7BC:
    // 0x8002B7BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8002B7C0:
    // 0x8002B7C0: blez        $t2, L_8002B8FC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8002B7C4: andi        $t1, $t2, 0x3
        ctx->r9 = ctx->r10 & 0X3;
            goto L_8002B8FC;
    }
    // 0x8002B7C4: andi        $t1, $t2, 0x3
    ctx->r9 = ctx->r10 & 0X3;
    // 0x8002B7C8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8002B7CC: beq         $t1, $zero, L_8002B828
    if (ctx->r9 == 0) {
        // 0x8002B7D0: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_8002B828;
    }
    // 0x8002B7D0: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8002B7D4: sll         $a0, $a2, 2
    ctx->r4 = S32(ctx->r6 << 2);
    // 0x8002B7D8: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x8002B7DC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B7E0: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8002B7E4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B7E8: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x8002B7EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_8002B7F0:
    // 0x8002B7F0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002B7F4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8002B7F8: bne         $a1, $t9, L_8002B818
    if (ctx->r5 != ctx->r25) {
        // 0x8002B7FC: nop
    
            goto L_8002B818;
    }
    // 0x8002B7FC: nop

    // 0x8002B800: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002B804: nop

    // 0x8002B808: bne         $a3, $t6, L_8002B818
    if (ctx->r7 != ctx->r14) {
        // 0x8002B80C: nop
    
            goto L_8002B818;
    }
    // 0x8002B80C: nop

    // 0x8002B810: b           L_8002B924
    // 0x8002B814: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8002B924;
    // 0x8002B814: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8002B818:
    // 0x8002B818: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x8002B81C: bne         $t0, $a2, L_8002B7F0
    if (ctx->r8 != ctx->r6) {
        // 0x8002B820: addiu       $v0, $v0, 0x34
        ctx->r2 = ADD32(ctx->r2, 0X34);
            goto L_8002B7F0;
    }
    // 0x8002B820: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8002B824: beq         $a2, $t2, L_8002B8FC
    if (ctx->r6 == ctx->r10) {
        // 0x8002B828: sll         $a0, $a2, 2
        ctx->r4 = S32(ctx->r6 << 2);
            goto L_8002B8FC;
    }
L_8002B828:
    // 0x8002B828: sll         $a0, $a2, 2
    ctx->r4 = S32(ctx->r6 << 2);
    // 0x8002B82C: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x8002B830: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B834: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8002B838: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002B83C: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x8002B840: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_8002B844:
    // 0x8002B844: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8002B848: nop

    // 0x8002B84C: bne         $a1, $t7, L_8002B86C
    if (ctx->r5 != ctx->r15) {
        // 0x8002B850: nop
    
            goto L_8002B86C;
    }
    // 0x8002B850: nop

    // 0x8002B854: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8002B858: nop

    // 0x8002B85C: bne         $a3, $t8, L_8002B86C
    if (ctx->r7 != ctx->r24) {
        // 0x8002B860: nop
    
            goto L_8002B86C;
    }
    // 0x8002B860: nop

    // 0x8002B864: b           L_8002B924
    // 0x8002B868: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8002B924;
    // 0x8002B868: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8002B86C:
    // 0x8002B86C: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x8002B870: nop

    // 0x8002B874: bne         $a1, $t9, L_8002B898
    if (ctx->r5 != ctx->r25) {
        // 0x8002B878: nop
    
            goto L_8002B898;
    }
    // 0x8002B878: nop

    // 0x8002B87C: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x8002B880: nop

    // 0x8002B884: bne         $a3, $t6, L_8002B898
    if (ctx->r7 != ctx->r14) {
        // 0x8002B888: nop
    
            goto L_8002B898;
    }
    // 0x8002B888: nop

    // 0x8002B88C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B890: b           L_8002B924
    // 0x8002B894: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
        goto L_8002B924;
    // 0x8002B894: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
L_8002B898:
    // 0x8002B898: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x8002B89C: nop

    // 0x8002B8A0: bne         $a1, $t7, L_8002B8C4
    if (ctx->r5 != ctx->r15) {
        // 0x8002B8A4: nop
    
            goto L_8002B8C4;
    }
    // 0x8002B8A4: nop

    // 0x8002B8A8: lw          $t8, 0x6C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X6C);
    // 0x8002B8AC: nop

    // 0x8002B8B0: bne         $a3, $t8, L_8002B8C4
    if (ctx->r7 != ctx->r24) {
        // 0x8002B8B4: nop
    
            goto L_8002B8C4;
    }
    // 0x8002B8B4: nop

    // 0x8002B8B8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B8BC: b           L_8002B924
    // 0x8002B8C0: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
        goto L_8002B924;
    // 0x8002B8C0: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
L_8002B8C4:
    // 0x8002B8C4: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x8002B8C8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8002B8CC: bne         $a1, $t9, L_8002B8F0
    if (ctx->r5 != ctx->r25) {
        // 0x8002B8D0: nop
    
            goto L_8002B8F0;
    }
    // 0x8002B8D0: nop

    // 0x8002B8D4: lw          $t6, 0xA0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA0);
    // 0x8002B8D8: nop

    // 0x8002B8DC: bne         $a3, $t6, L_8002B8F0
    if (ctx->r7 != ctx->r14) {
        // 0x8002B8E0: nop
    
            goto L_8002B8F0;
    }
    // 0x8002B8E0: nop

    // 0x8002B8E4: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8002B8E8: b           L_8002B924
    // 0x8002B8EC: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
        goto L_8002B924;
    // 0x8002B8EC: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
L_8002B8F0:
    // 0x8002B8F0: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
    // 0x8002B8F4: bne         $a2, $t2, L_8002B844
    if (ctx->r6 != ctx->r10) {
        // 0x8002B8F8: addiu       $v0, $v0, 0xD0
        ctx->r2 = ADD32(ctx->r2, 0XD0);
            goto L_8002B844;
    }
    // 0x8002B8F8: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
L_8002B8FC:
    // 0x8002B8FC: beq         $t3, $zero, L_8002B914
    if (ctx->r11 == 0) {
        // 0x8002B900: nop
    
            goto L_8002B914;
    }
    // 0x8002B900: nop

    // 0x8002B904: jal         0x80002D08
    // 0x8002B908: addiu       $a0, $zero, 0x807
    ctx->r4 = ADD32(0, 0X807);
    func_80002D08(rdram, ctx);
        goto after_2;
    // 0x8002B908: addiu       $a0, $zero, 0x807
    ctx->r4 = ADD32(0, 0X807);
    after_2:
    // 0x8002B90C: b           L_8002B924
    // 0x8002B910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002B924;
    // 0x8002B910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002B914:
    // 0x8002B914: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002B918: jal         0x80002D08
    // 0x8002B91C: addiu       $a0, $a0, 0x7FE
    ctx->r4 = ADD32(ctx->r4, 0X7FE);
    func_80002D08(rdram, ctx);
        goto after_3;
    // 0x8002B91C: addiu       $a0, $a0, 0x7FE
    ctx->r4 = ADD32(ctx->r4, 0X7FE);
    after_3:
    // 0x8002B920: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002B924:
    // 0x8002B924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B92C: jr          $ra
    // 0x8002B930: nop

    return;
    // 0x8002B930: nop

;}
RECOMP_FUNC void func_8002B934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B934: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8002B938: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002B93C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8002B940: jal         0x8002B524
    // 0x8002B944: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_8002B524(rdram, ctx);
        goto after_0;
    // 0x8002B944: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002B948: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8002B94C: beq         $v0, $zero, L_8002BBEC
    if (ctx->r2 == 0) {
        // 0x8002B950: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002BBEC;
    }
    // 0x8002B950: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002B954: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002B958: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8002B95C: lwc1        $f1, 0x5828($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5828);
    // 0x8002B960: lwc1        $f0, 0x582C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X582C);
    // 0x8002B964: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002B968: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8002B96C: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x8002B970: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x8002B974: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002B978: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B97C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8002B980: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002B984: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x8002B988: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8002B98C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8002B990: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002B994: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8002B998: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8002B99C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8002B9A0: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8002B9A4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8002B9A8: nop

    // 0x8002B9AC: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8002B9B0: lw          $t6, 0x30($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X30);
    // 0x8002B9B4: nop

    // 0x8002B9B8: bne         $t6, $at, L_8002BA40
    if (ctx->r14 != ctx->r1) {
        // 0x8002B9BC: nop
    
            goto L_8002BA40;
    }
    // 0x8002B9BC: nop

    // 0x8002B9C0: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8002B9C4: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8002B9C8: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8002B9CC: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8002B9D0: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x8002B9D4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8002B9D8: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8002B9DC: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8002B9E0: addiu       $t8, $t8, -0x6020
    ctx->r24 = ADD32(ctx->r24, -0X6020);
    // 0x8002B9E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B9E8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8002B9EC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002B9F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8002B9F4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8002B9F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8002B9FC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8002BA00: jal         0x80009F20
    // 0x8002BA04: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    func_80009F20(rdram, ctx);
        goto after_1;
    // 0x8002BA04: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8002BA08: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8002BA0C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8002BA10: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002BA14: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8002BA18: sw          $t9, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->r25;
    // 0x8002BA1C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002BA20: jal         0x80009DFC
    // 0x8002BA24: nop

    func_80009DFC(rdram, ctx);
        goto after_2;
    // 0x8002BA24: nop

    after_2:
    // 0x8002BA28: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8002BA2C: jal         0x8002B4A8
    // 0x8002BA30: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8002B4A8(rdram, ctx);
        goto after_3;
    // 0x8002BA30: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
    // 0x8002BA34: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8002BA38: b           L_8002BB88
    // 0x8002BA3C: nop

        goto L_8002BB88;
    // 0x8002BA3C: nop

L_8002BA40:
    // 0x8002BA40: lw          $a1, -0xB34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XB34);
    // 0x8002BA44: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8002BA48: jal         0x8002B4A8
    // 0x8002BA4C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    func_8002B4A8(rdram, ctx);
        goto after_4;
    // 0x8002BA4C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_4:
    // 0x8002BA50: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8002BA54: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8002BA58: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8002BA5C: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8002BA60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002BA64: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x8002BA68: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8002BA6C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002BA70: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8002BA74: jal         0x80009DFC
    // 0x8002BA78: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80009DFC(rdram, ctx);
        goto after_5;
    // 0x8002BA78: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_5:
    // 0x8002BA7C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8002BA80: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8002BA84: lw          $t6, 0x30($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X30);
    // 0x8002BA88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BA8C: bne         $t6, $at, L_8002BAA0
    if (ctx->r14 != ctx->r1) {
        // 0x8002BA90: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_8002BAA0;
    }
    // 0x8002BA90: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8002BA94: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8002BA98: b           L_8002BAAC
    // 0x8002BA9C: sw          $t7, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r15;
        goto L_8002BAAC;
    // 0x8002BA9C: sw          $t7, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r15;
L_8002BAA0:
    // 0x8002BAA0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8002BAA4: nop

    // 0x8002BAA8: sw          $zero, 0x44($t9)
    MEM_W(0X44, ctx->r25) = 0;
L_8002BAAC:
    // 0x8002BAAC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8002BAB0: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8002BAB4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8002BAB8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002BABC: nop

    // 0x8002BAC0: bc1t        L_8002BAD8
    if (c1cs) {
        // 0x8002BAC4: nop
    
            goto L_8002BAD8;
    }
    // 0x8002BAC4: nop

    // 0x8002BAC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002BACC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002BAD0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8002BAD4: swc1        $f6, -0x42D4($at)
    MEM_W(-0X42D4, ctx->r1) = ctx->f6.u32l;
L_8002BAD8:
    // 0x8002BAD8: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x8002BADC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002BAE0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002BAE4: nop

    // 0x8002BAE8: bc1t        L_8002BAF4
    if (c1cs) {
        // 0x8002BAEC: nop
    
            goto L_8002BAF4;
    }
    // 0x8002BAEC: nop

    // 0x8002BAF0: swc1        $f0, -0x42D0($at)
    MEM_W(-0X42D0, ctx->r1) = ctx->f0.u32l;
L_8002BAF4:
    // 0x8002BAF4: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8002BAF8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8002BAFC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002BB00: nop

    // 0x8002BB04: bc1t        L_8002BB1C
    if (c1cs) {
        // 0x8002BB08: nop
    
            goto L_8002BB1C;
    }
    // 0x8002BB08: nop

    // 0x8002BB0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002BB10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002BB14: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8002BB18: swc1        $f10, -0x42CC($at)
    MEM_W(-0X42CC, ctx->r1) = ctx->f10.u32l;
L_8002BB1C:
    // 0x8002BB1C: lwc1        $f0, 0x20($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8002BB20: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8002BB24: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002BB28: nop

    // 0x8002BB2C: bc1t        L_8002BB44
    if (c1cs) {
        // 0x8002BB30: nop
    
            goto L_8002BB44;
    }
    // 0x8002BB30: nop

    // 0x8002BB34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002BB38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002BB3C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8002BB40: swc1        $f6, -0x42E0($at)
    MEM_W(-0X42E0, ctx->r1) = ctx->f6.u32l;
L_8002BB44:
    // 0x8002BB44: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8002BB48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002BB4C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002BB50: nop

    // 0x8002BB54: bc1t        L_8002BB60
    if (c1cs) {
        // 0x8002BB58: nop
    
            goto L_8002BB60;
    }
    // 0x8002BB58: nop

    // 0x8002BB5C: swc1        $f0, -0x42DC($at)
    MEM_W(-0X42DC, ctx->r1) = ctx->f0.u32l;
L_8002BB60:
    // 0x8002BB60: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8002BB64: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8002BB68: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002BB6C: nop

    // 0x8002BB70: bc1t        L_8002BB88
    if (c1cs) {
        // 0x8002BB74: nop
    
            goto L_8002BB88;
    }
    // 0x8002BB74: nop

    // 0x8002BB78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002BB7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002BB80: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8002BB84: swc1        $f10, -0x42D8($at)
    MEM_W(-0X42D8, ctx->r1) = ctx->f10.u32l;
L_8002BB88:
    // 0x8002BB88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002BB8C: lwc1        $f14, 0x5830($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5830);
    // 0x8002BB90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002BB94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002BB98: lwc1        $f12, 0x2C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x8002BB9C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x8002BBA0: lui         $a3, 0x45FA
    ctx->r7 = S32(0X45FA << 16);
    // 0x8002BBA4: jal         0x80008E30
    // 0x8002BBA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80008E30(rdram, ctx);
        goto after_6;
    // 0x8002BBA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x8002BBAC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002BBB0: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8002BBB4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002BBB8: nop

    // 0x8002BBBC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8002BBC0: beq         $t7, $zero, L_8002BBD8
    if (ctx->r15 == 0) {
        // 0x8002BBC4: nop
    
            goto L_8002BBD8;
    }
    // 0x8002BBC4: nop

    // 0x8002BBC8: jal         0x80002D08
    // 0x8002BBCC: addiu       $a0, $zero, 0x807
    ctx->r4 = ADD32(0, 0X807);
    func_80002D08(rdram, ctx);
        goto after_7;
    // 0x8002BBCC: addiu       $a0, $zero, 0x807
    ctx->r4 = ADD32(0, 0X807);
    after_7:
    // 0x8002BBD0: b           L_8002BC8C
    // 0x8002BBD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002BC8C;
    // 0x8002BBD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002BBD8:
    // 0x8002BBD8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002BBDC: jal         0x80002D08
    // 0x8002BBE0: addiu       $a0, $a0, 0x7FE
    ctx->r4 = ADD32(ctx->r4, 0X7FE);
    func_80002D08(rdram, ctx);
        goto after_8;
    // 0x8002BBE0: addiu       $a0, $a0, 0x7FE
    ctx->r4 = ADD32(ctx->r4, 0X7FE);
    after_8:
    // 0x8002BBE4: b           L_8002BC8C
    // 0x8002BBE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002BC8C;
    // 0x8002BBE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002BBEC:
    // 0x8002BBEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002BBF0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8002BBF4: lwc1        $f8, 0x5834($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5834);
    // 0x8002BBF8: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8002BBFC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8002BC00: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x8002BC04: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x8002BC08: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002BC0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002BC10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002BC14: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8002BC18: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002BC1C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8002BC20: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8002BC24: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8002BC28: sw          $zero, 0x44($t6)
    MEM_W(0X44, ctx->r14) = 0;
    // 0x8002BC2C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002BC30: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8002BC34: jal         0x80009DFC
    // 0x8002BC38: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80009DFC(rdram, ctx);
        goto after_9;
    // 0x8002BC38: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x8002BC3C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8002BC40: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002BC44: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8002BC48: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002BC4C: lw          $t8, -0x4294($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4294);
    // 0x8002BC50: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x8002BC54: beq         $t8, $zero, L_8002BC80
    if (ctx->r24 == 0) {
        // 0x8002BC58: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8002BC80;
    }
    // 0x8002BC58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8002BC5C: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8002BC60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002BC64: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002BC68: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8002BC6C: lw          $a1, -0xB34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XB34);
    // 0x8002BC70: jal         0x8002B4A8
    // 0x8002BC74: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002B4A8(rdram, ctx);
        goto after_10;
    // 0x8002BC74: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_10:
    // 0x8002BC78: b           L_8002BC8C
    // 0x8002BC7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002BC8C;
    // 0x8002BC7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002BC80:
    // 0x8002BC80: jal         0x8002B4A8
    // 0x8002BC84: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8002B4A8(rdram, ctx);
        goto after_11;
    // 0x8002BC84: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_11:
    // 0x8002BC88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002BC8C:
    // 0x8002BC8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8002BC90: jr          $ra
    // 0x8002BC94: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8002BC94: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8002BC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BC98: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8002BC9C: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x8002BCA0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8002BCA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BCA8: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8002BCAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002BCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BCB4: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8002BCB8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002BCBC: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x8002BCC0: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x8002BCC4: addiu       $a0, $a0, -0x1CC
    ctx->r4 = ADD32(ctx->r4, -0X1CC);
    // 0x8002BCC8: ori         $a1, $zero, 0xF7FD
    ctx->r5 = 0 | 0XF7FD;
    // 0x8002BCCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002BCD0: jal         0x80007C3C
    // 0x8002BCD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x8002BCD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8002BCD8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x8002BCDC: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8002BCE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BCE8: jr          $ra
    // 0x8002BCEC: nop

    return;
    // 0x8002BCEC: nop

;}
RECOMP_FUNC void func_8002BCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BCF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002BCF4: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x8002BCF8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8002BCFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BD00: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x8002BD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BD08: beq         $t6, $zero, L_8002BD28
    if (ctx->r14 == 0) {
        // 0x8002BD0C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8002BD28;
    }
    // 0x8002BD0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002BD10: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x8002BD14: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x8002BD18: bne         $t7, $zero, L_8002BD2C
    if (ctx->r15 != 0) {
        // 0x8002BD1C: addiu       $t0, $zero, 0x64
        ctx->r8 = ADD32(0, 0X64);
            goto L_8002BD2C;
    }
    // 0x8002BD1C: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x8002BD20: b           L_8002BE54
    // 0x8002BD24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002BE54;
    // 0x8002BD24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002BD28:
    // 0x8002BD28: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
L_8002BD2C:
    // 0x8002BD2C: div         $zero, $a3, $t0
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r8)));
    // 0x8002BD30: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8002BD34: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002BD38: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x8002BD3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8002BD40: bne         $t0, $zero, L_8002BD4C
    if (ctx->r8 != 0) {
        // 0x8002BD44: nop
    
            goto L_8002BD4C;
    }
    // 0x8002BD44: nop

    // 0x8002BD48: break       7
    do_break(2147663176);
L_8002BD4C:
    // 0x8002BD4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002BD50: bne         $t0, $at, L_8002BD64
    if (ctx->r8 != ctx->r1) {
        // 0x8002BD54: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002BD64;
    }
    // 0x8002BD54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002BD58: bne         $a3, $at, L_8002BD64
    if (ctx->r7 != ctx->r1) {
        // 0x8002BD5C: nop
    
            goto L_8002BD64;
    }
    // 0x8002BD5C: nop

    // 0x8002BD60: break       6
    do_break(2147663200);
L_8002BD64:
    // 0x8002BD64: addiu       $v1, $v1, -0x6020
    ctx->r3 = ADD32(ctx->r3, -0X6020);
    // 0x8002BD68: addiu       $v0, $v0, -0x6030
    ctx->r2 = ADD32(ctx->r2, -0X6030);
    // 0x8002BD6C: addiu       $a0, $a0, -0x6020
    ctx->r4 = ADD32(ctx->r4, -0X6020);
    // 0x8002BD70: mflo        $t8
    ctx->r24 = lo;
    // 0x8002BD74: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002BD78: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x8002BD7C: lw          $a2, -0xA10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0XA10);
    // 0x8002BD80: nop

L_8002BD84:
    // 0x8002BD84: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8002BD88: nop

    // 0x8002BD8C: bne         $a2, $t1, L_8002BDD4
    if (ctx->r6 != ctx->r9) {
        // 0x8002BD90: nop
    
            goto L_8002BDD4;
    }
    // 0x8002BD90: nop

    // 0x8002BD94: div         $zero, $a3, $t0
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r8)));
    // 0x8002BD98: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8002BD9C: bne         $t0, $zero, L_8002BDA8
    if (ctx->r8 != 0) {
        // 0x8002BDA0: nop
    
            goto L_8002BDA8;
    }
    // 0x8002BDA0: nop

    // 0x8002BDA4: break       7
    do_break(2147663268);
L_8002BDA8:
    // 0x8002BDA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002BDAC: bne         $t0, $at, L_8002BDC0
    if (ctx->r8 != ctx->r1) {
        // 0x8002BDB0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002BDC0;
    }
    // 0x8002BDB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002BDB4: bne         $a3, $at, L_8002BDC0
    if (ctx->r7 != ctx->r1) {
        // 0x8002BDB8: nop
    
            goto L_8002BDC0;
    }
    // 0x8002BDB8: nop

    // 0x8002BDBC: break       6
    do_break(2147663292);
L_8002BDC0:
    // 0x8002BDC0: mfhi        $a1
    ctx->r5 = hi;
    // 0x8002BDC4: jal         0x80051418
    // 0x8002BDC8: nop

    func_80051418(rdram, ctx);
        goto after_0;
    // 0x8002BDC8: nop

    after_0:
    // 0x8002BDCC: b           L_8002BE58
    // 0x8002BDD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002BE58;
    // 0x8002BDD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BDD4:
    // 0x8002BDD4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002BDD8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8002BDDC: bne         $at, $zero, L_8002BD84
    if (ctx->r1 != 0) {
        // 0x8002BDE0: nop
    
            goto L_8002BD84;
    }
    // 0x8002BDE0: nop

    // 0x8002BDE4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002BDE8: addiu       $v0, $v0, -0x6030
    ctx->r2 = ADD32(ctx->r2, -0X6030);
    // 0x8002BDEC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8002BDF0:
    // 0x8002BDF0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8002BDF4: nop

    // 0x8002BDF8: bne         $v1, $t2, L_8002BE44
    if (ctx->r3 != ctx->r10) {
        // 0x8002BDFC: nop
    
            goto L_8002BE44;
    }
    // 0x8002BDFC: nop

    // 0x8002BE00: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x8002BE04: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8002BE08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8002BE0C: jal         0x800517A4
    // 0x8002BE10: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800517A4(rdram, ctx);
        goto after_1;
    // 0x8002BE10: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x8002BE14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002BE18: jal         0x80051418
    // 0x8002BE1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80051418(rdram, ctx);
        goto after_2;
    // 0x8002BE1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_2:
    // 0x8002BE20: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8002BE24: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8002BE28: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x8002BE2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002BE30: mfhi        $a1
    ctx->r5 = hi;
    // 0x8002BE34: jal         0x80051418
    // 0x8002BE38: nop

    func_80051418(rdram, ctx);
        goto after_3;
    // 0x8002BE38: nop

    after_3:
    // 0x8002BE3C: b           L_8002BE58
    // 0x8002BE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002BE58;
    // 0x8002BE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BE44:
    // 0x8002BE44: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002BE48: bne         $v0, $a0, L_8002BDF0
    if (ctx->r2 != ctx->r4) {
        // 0x8002BE4C: nop
    
            goto L_8002BDF0;
    }
    // 0x8002BE4C: nop

    // 0x8002BE50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002BE54:
    // 0x8002BE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BE58:
    // 0x8002BE58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002BE5C: jr          $ra
    // 0x8002BE60: nop

    return;
    // 0x8002BE60: nop

;}
RECOMP_FUNC void func_8002BE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BE64: andi        $t6, $a0, 0x20
    ctx->r14 = ctx->r4 & 0X20;
    // 0x8002BE68: beq         $t6, $zero, L_8002BE78
    if (ctx->r14 == 0) {
        // 0x8002BE6C: addiu       $t7, $a1, -0x1
        ctx->r15 = ADD32(ctx->r5, -0X1);
            goto L_8002BE78;
    }
    // 0x8002BE6C: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x8002BE70: b           L_8002BE7C
    // 0x8002BE74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002BE7C;
    // 0x8002BE74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002BE78:
    // 0x8002BE78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8002BE7C:
    // 0x8002BE7C: sltiu       $at, $t7, 0xE
    ctx->r1 = ctx->r15 < 0XE ? 1 : 0;
    // 0x8002BE80: beq         $at, $zero, L_8002BF84
    if (ctx->r1 == 0) {
        // 0x8002BE84: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002BF84;
    }
    // 0x8002BE84: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BE88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002BE8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002BE90: addu        $at, $at, $t7
    gpr jr_addend_8002BE9C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002BE94: lw          $t7, 0x5838($at)
    ctx->r15 = ADD32(ctx->r1, 0X5838);
    // 0x8002BE98: nop

    // 0x8002BE9C: jr          $t7
    // 0x8002BEA0: nop

    switch (jr_addend_8002BE9C >> 2) {
        case 0: goto L_8002BEA4; break;
        case 1: goto L_8002BEB4; break;
        case 2: goto L_8002BEC4; break;
        case 3: goto L_8002BED4; break;
        case 4: goto L_8002BEE4; break;
        case 5: goto L_8002BEF4; break;
        case 6: goto L_8002BF04; break;
        case 7: goto L_8002BF14; break;
        case 8: goto L_8002BF24; break;
        case 9: goto L_8002BF34; break;
        case 10: goto L_8002BF44; break;
        case 11: goto L_8002BF54; break;
        case 12: goto L_8002BF64; break;
        case 13: goto L_8002BF74; break;
        default: switch_error(__func__, 0x8002BE9C, 0x80095838);
    }
    // 0x8002BEA0: nop

L_8002BEA4:
    // 0x8002BEA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BEA8: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BEAC: jr          $ra
    // 0x8002BEB0: ori         $v0, $t8, 0xD
    ctx->r2 = ctx->r24 | 0XD;
    return;
    // 0x8002BEB0: ori         $v0, $t8, 0xD
    ctx->r2 = ctx->r24 | 0XD;
L_8002BEB4:
    // 0x8002BEB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BEB8: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BEBC: jr          $ra
    // 0x8002BEC0: ori         $v0, $t6, 0x2
    ctx->r2 = ctx->r14 | 0X2;
    return;
    // 0x8002BEC0: ori         $v0, $t6, 0x2
    ctx->r2 = ctx->r14 | 0X2;
L_8002BEC4:
    // 0x8002BEC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BEC8: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BECC: jr          $ra
    // 0x8002BED0: ori         $v0, $t8, 0x5
    ctx->r2 = ctx->r24 | 0X5;
    return;
    // 0x8002BED0: ori         $v0, $t8, 0x5
    ctx->r2 = ctx->r24 | 0X5;
L_8002BED4:
    // 0x8002BED4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BED8: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BEDC: jr          $ra
    // 0x8002BEE0: ori         $v0, $t6, 0x4
    ctx->r2 = ctx->r14 | 0X4;
    return;
    // 0x8002BEE0: ori         $v0, $t6, 0x4
    ctx->r2 = ctx->r14 | 0X4;
L_8002BEE4:
    // 0x8002BEE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BEE8: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BEEC: jr          $ra
    // 0x8002BEF0: ori         $v0, $t8, 0xE
    ctx->r2 = ctx->r24 | 0XE;
    return;
    // 0x8002BEF0: ori         $v0, $t8, 0xE
    ctx->r2 = ctx->r24 | 0XE;
L_8002BEF4:
    // 0x8002BEF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BEF8: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BEFC: jr          $ra
    // 0x8002BF00: ori         $v0, $t6, 0x12
    ctx->r2 = ctx->r14 | 0X12;
    return;
    // 0x8002BF00: ori         $v0, $t6, 0x12
    ctx->r2 = ctx->r14 | 0X12;
L_8002BF04:
    // 0x8002BF04: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF08: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BF0C: jr          $ra
    // 0x8002BF10: ori         $v0, $t8, 0x14
    ctx->r2 = ctx->r24 | 0X14;
    return;
    // 0x8002BF10: ori         $v0, $t8, 0x14
    ctx->r2 = ctx->r24 | 0X14;
L_8002BF14:
    // 0x8002BF14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF18: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BF1C: jr          $ra
    // 0x8002BF20: ori         $v0, $t6, 0x6
    ctx->r2 = ctx->r14 | 0X6;
    return;
    // 0x8002BF20: ori         $v0, $t6, 0x6
    ctx->r2 = ctx->r14 | 0X6;
L_8002BF24:
    // 0x8002BF24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF28: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BF2C: jr          $ra
    // 0x8002BF30: ori         $v0, $t8, 0x7
    ctx->r2 = ctx->r24 | 0X7;
    return;
    // 0x8002BF30: ori         $v0, $t8, 0x7
    ctx->r2 = ctx->r24 | 0X7;
L_8002BF34:
    // 0x8002BF34: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF38: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BF3C: jr          $ra
    // 0x8002BF40: ori         $v0, $t6, 0x8
    ctx->r2 = ctx->r14 | 0X8;
    return;
    // 0x8002BF40: ori         $v0, $t6, 0x8
    ctx->r2 = ctx->r14 | 0X8;
L_8002BF44:
    // 0x8002BF44: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF48: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BF4C: jr          $ra
    // 0x8002BF50: ori         $v0, $t8, 0x9
    ctx->r2 = ctx->r24 | 0X9;
    return;
    // 0x8002BF50: ori         $v0, $t8, 0x9
    ctx->r2 = ctx->r24 | 0X9;
L_8002BF54:
    // 0x8002BF54: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF58: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BF5C: jr          $ra
    // 0x8002BF60: ori         $v0, $t6, 0xA
    ctx->r2 = ctx->r14 | 0XA;
    return;
    // 0x8002BF60: ori         $v0, $t6, 0xA
    ctx->r2 = ctx->r14 | 0XA;
L_8002BF64:
    // 0x8002BF64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF68: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BF6C: jr          $ra
    // 0x8002BF70: ori         $v0, $t8, 0xB
    ctx->r2 = ctx->r24 | 0XB;
    return;
    // 0x8002BF70: ori         $v0, $t8, 0xB
    ctx->r2 = ctx->r24 | 0XB;
L_8002BF74:
    // 0x8002BF74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002BF78: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x8002BF7C: jr          $ra
    // 0x8002BF80: ori         $v0, $t6, 0xC
    ctx->r2 = ctx->r14 | 0XC;
    return;
    // 0x8002BF80: ori         $v0, $t6, 0xC
    ctx->r2 = ctx->r14 | 0XC;
L_8002BF84:
    // 0x8002BF84: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x8002BF88: ori         $v1, $t8, 0x1
    ctx->r3 = ctx->r24 | 0X1;
    // 0x8002BF8C: jr          $ra
    // 0x8002BF90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002BF90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8002BF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BF94: jr          $ra
    // 0x8002BF98: nop

    return;
    // 0x8002BF98: nop

;}
RECOMP_FUNC void func_8002BF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BF9C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8002BFA0: addiu       $s3, $s3, -0xB50
    ctx->r19 = ADD32(ctx->r19, -0XB50);
    // 0x8002BFA4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8002BFA8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8002BFAC: sll         $s1, $a0, 2
    ctx->r17 = S32(ctx->r4 << 2);
    // 0x8002BFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BFB4: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8002BFB8: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8002BFBC: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8002BFC0: bne         $s6, $v1, L_8002CAD4
    if (ctx->r22 != ctx->r3) {
        // 0x8002BFC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002CAD4;
    }
    // 0x8002BFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BFC8: sll         $s2, $a0, 2
    ctx->r18 = S32(ctx->r4 << 2);
    // 0x8002BFCC: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002BFD0: addu        $s2, $s2, $a0
    ctx->r18 = ADD32(ctx->r18, ctx->r4);
    // 0x8002BFD4: addiu       $s4, $s4, -0x4304
    ctx->r20 = ADD32(ctx->r20, -0X4304);
    // 0x8002BFD8: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8002BFDC: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8002BFE0: subu        $s2, $s2, $a0
    ctx->r18 = SUB32(ctx->r18, ctx->r4);
    // 0x8002BFE4: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8002BFE8: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    // 0x8002BFEC: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x8002BFF0: nop

    // 0x8002BFF4: bne         $s6, $t9, L_8002C0AC
    if (ctx->r22 != ctx->r25) {
        // 0x8002BFF8: nop
    
            goto L_8002C0AC;
    }
    // 0x8002BFF8: nop

    // 0x8002BFFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x8002C000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002C004: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8002C008: beq         $t6, $at, L_8002C024
    if (ctx->r14 == ctx->r1) {
        // 0x8002C00C: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8002C024;
    }
    // 0x8002C00C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002C010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002C014: beq         $t6, $at, L_8002C040
    if (ctx->r14 == ctx->r1) {
        // 0x8002C018: nop
    
            goto L_8002C040;
    }
    // 0x8002C018: nop

    // 0x8002C01C: b           L_8002C0AC
    // 0x8002C020: nop

        goto L_8002C0AC;
    // 0x8002C020: nop

L_8002C024:
    // 0x8002C024: lw          $t7, -0x42B4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42B4);
    // 0x8002C028: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x8002C02C: nop

    // 0x8002C030: bne         $t7, $t8, L_8002C0AC
    if (ctx->r15 != ctx->r24) {
        // 0x8002C034: nop
    
            goto L_8002C0AC;
    }
    // 0x8002C034: nop

    // 0x8002C038: b           L_8002CAD4
    // 0x8002C03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C040:
    // 0x8002C040: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x8002C044: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8002C048: bgez        $a1, L_8002C078
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8002C04C: ori         $at, $at, 0xFFFF
        ctx->r1 = ctx->r1 | 0XFFFF;
            goto L_8002C078;
    }
    // 0x8002C04C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8002C050: jal         0x8003E4D4
    // 0x8002C054: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    func_8003E4D4(rdram, ctx);
        goto after_0;
    // 0x8002C054: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    after_0:
    // 0x8002C058: bne         $v0, $zero, L_8002C0A0
    if (ctx->r2 != 0) {
        // 0x8002C05C: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_8002C0A0;
    }
    // 0x8002C05C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002C060: lw          $t9, -0xB50($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XB50);
    // 0x8002C064: nop

    // 0x8002C068: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C06C: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8002C070: b           L_8002CAD4
    // 0x8002C074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C078:
    // 0x8002C078: jal         0x8003E4D4
    // 0x8002C07C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8003E4D4(rdram, ctx);
        goto after_1;
    // 0x8002C07C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8002C080: beq         $v0, $zero, L_8002C0A0
    if (ctx->r2 == 0) {
        // 0x8002C084: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8002C0A0;
    }
    // 0x8002C084: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002C088: lw          $t7, -0xB50($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XB50);
    // 0x8002C08C: nop

    // 0x8002C090: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8002C094: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8002C098: b           L_8002CAD4
    // 0x8002C09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C0A0:
    // 0x8002C0A0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002C0A4: nop

    // 0x8002C0A8: addu        $s0, $t9, $s2
    ctx->r16 = ADD32(ctx->r25, ctx->r18);
L_8002C0AC:
    // 0x8002C0AC: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8002C0B0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8002C0B4: addiu       $fp, $fp, -0x4308
    ctx->r30 = ADD32(ctx->r30, -0X4308);
    // 0x8002C0B8: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x8002C0BC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8002C0C0: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x8002C0C4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8002C0C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002C0CC: beq         $a0, $zero, L_8002CAAC
    if (ctx->r4 == 0) {
        // 0x8002C0D0: nop
    
            goto L_8002CAAC;
    }
    // 0x8002C0D0: nop

    // 0x8002C0D4: beq         $a0, $at, L_8002C904
    if (ctx->r4 == ctx->r1) {
        // 0x8002C0D8: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_8002C904;
    }
    // 0x8002C0D8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002C0DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002C0E0: beq         $a0, $at, L_8002C110
    if (ctx->r4 == ctx->r1) {
        // 0x8002C0E4: addiu       $t6, $zero, -0x1
        ctx->r14 = ADD32(0, -0X1);
            goto L_8002C110;
    }
    // 0x8002C0E4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8002C0E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002C0EC: beq         $a0, $at, L_8002C36C
    if (ctx->r4 == ctx->r1) {
        // 0x8002C0F0: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8002C36C;
    }
    // 0x8002C0F0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002C0F4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002C0F8: lw          $t8, -0xB50($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB50);
    // 0x8002C0FC: nop

    // 0x8002C100: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C104: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x8002C108: b           L_8002CAD4
    // 0x8002C10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C110:
    // 0x8002C110: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8002C114: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8002C118: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002C11C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8002C120: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x8002C124: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x8002C128: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8002C12C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8002C130: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002C134: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8002C138: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8002C13C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002C140: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8002C144: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8002C148: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002C14C: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x8002C150: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x8002C154: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8002C158: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002C15C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002C160: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8002C164: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8002C168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002C16C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x8002C170: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8002C174: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8002C178: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8002C17C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8002C180: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8002C184: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x8002C188: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002C18C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002C190: jal         0x8004A0A0
    // 0x8002C194: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8002C194: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8002C198: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8002C19C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8002C1A0: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8002C1A4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002C1A8: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8002C1AC: lw          $t8, -0xB4C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB4C);
    // 0x8002C1B0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8002C1B4: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C1B8: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8002C1BC: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002C1C0: nop

    // 0x8002C1C4: addu        $s0, $t9, $s2
    ctx->r16 = ADD32(ctx->r25, ctx->r18);
    // 0x8002C1C8: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C1CC: nop

    // 0x8002C1D0: andi        $t7, $a2, 0x40
    ctx->r15 = ctx->r6 & 0X40;
    // 0x8002C1D4: beq         $t7, $zero, L_8002C270
    if (ctx->r15 == 0) {
        // 0x8002C1D8: nop
    
            goto L_8002C270;
    }
    // 0x8002C1D8: nop

    // 0x8002C1DC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x8002C1E0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8002C1E4: beq         $a0, $at, L_8002C200
    if (ctx->r4 == ctx->r1) {
        // 0x8002C1E8: andi        $t8, $a2, 0x20
        ctx->r24 = ctx->r6 & 0X20;
            goto L_8002C200;
    }
    // 0x8002C1E8: andi        $t8, $a2, 0x20
    ctx->r24 = ctx->r6 & 0X20;
    // 0x8002C1EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8002C1F0: beq         $a0, $at, L_8002C220
    if (ctx->r4 == ctx->r1) {
        // 0x8002C1F4: andi        $t8, $a2, 0x20
        ctx->r24 = ctx->r6 & 0X20;
            goto L_8002C220;
    }
    // 0x8002C1F4: andi        $t8, $a2, 0x20
    ctx->r24 = ctx->r6 & 0X20;
    // 0x8002C1F8: b           L_8002C240
    // 0x8002C1FC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
        goto L_8002C240;
    // 0x8002C1FC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
L_8002C200:
    // 0x8002C200: beq         $t8, $zero, L_8002C210
    if (ctx->r24 == 0) {
        // 0x8002C204: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8002C210;
    }
    // 0x8002C204: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002C208: b           L_8002C210
    // 0x8002C20C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002C210;
    // 0x8002C20C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002C210:
    // 0x8002C210: sll         $t9, $v0, 24
    ctx->r25 = S32(ctx->r2 << 24);
    // 0x8002C214: ori         $t7, $t9, 0x13
    ctx->r15 = ctx->r25 | 0X13;
    // 0x8002C218: b           L_8002C23C
    // 0x8002C21C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
        goto L_8002C23C;
    // 0x8002C21C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_8002C220:
    // 0x8002C220: beq         $t8, $zero, L_8002C230
    if (ctx->r24 == 0) {
        // 0x8002C224: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8002C230;
    }
    // 0x8002C224: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8002C228: b           L_8002C230
    // 0x8002C22C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8002C230;
    // 0x8002C22C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8002C230:
    // 0x8002C230: sll         $t9, $a0, 24
    ctx->r25 = S32(ctx->r4 << 24);
    // 0x8002C234: ori         $t7, $t9, 0x15
    ctx->r15 = ctx->r25 | 0X15;
    // 0x8002C238: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_8002C23C:
    // 0x8002C23C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
L_8002C240:
    // 0x8002C240: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x8002C244: addiu       $t8, $t8, -0x1778
    ctx->r24 = ADD32(ctx->r24, -0X1778);
    // 0x8002C248: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8002C24C: addu        $t9, $t6, $s1
    ctx->r25 = ADD32(ctx->r14, ctx->r17);
    // 0x8002C250: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8002C254: jal         0x8004A0A0
    // 0x8002C258: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8002C258: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_3:
    // 0x8002C25C: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8002C260: nop

    // 0x8002C264: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x8002C268: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C26C: nop

L_8002C270:
    // 0x8002C270: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8002C274: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x8002C278: addiu       $a3, $a3, -0x1778
    ctx->r7 = ADD32(ctx->r7, -0X1778);
    // 0x8002C27C: jal         0x8002BE64
    // 0x8002C280: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002BE64(rdram, ctx);
        goto after_4;
    // 0x8002C280: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x8002C284: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002C288: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8002C28C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8002C290: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C294: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C298: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8002C29C: jal         0x8004A0A0
    // 0x8002C2A0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8002C2A0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_5:
    // 0x8002C2A4: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002C2A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8002C2AC: addiu       $t9, $t9, -0x488
    ctx->r25 = ADD32(ctx->r25, -0X488);
    // 0x8002C2B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8002C2B4: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x8002C2B8: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x8002C2BC: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C2C0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C2C4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8002C2C8: jal         0x8004A0A0
    // 0x8002C2CC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8002C2CC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_6:
    // 0x8002C2D0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002C2D4: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x8002C2D8: addu        $s0, $t9, $s2
    ctx->r16 = ADD32(ctx->r25, ctx->r18);
    // 0x8002C2DC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8002C2E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002C2E4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8002C2E8: addu        $t6, $v1, $t8
    ctx->r14 = ADD32(ctx->r3, ctx->r24);
    // 0x8002C2EC: lwc1        $f0, 0x5870($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5870);
    // 0x8002C2F0: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8002C2F4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8002C2F8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002C2FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002C300: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8002C304: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8002C308: nop

    // 0x8002C30C: sll         $t7, $t9, 5
    ctx->r15 = S32(ctx->r25 << 5);
    // 0x8002C310: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8002C314: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x8002C318: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002C31C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8002C320: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8002C324: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8002C328: nop

    // 0x8002C32C: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8002C330: addu        $t7, $v1, $t9
    ctx->r15 = ADD32(ctx->r3, ctx->r25);
    // 0x8002C334: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8002C338: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C33C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002C340: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8002C344: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C348: jal         0x8005CB68
    // 0x8002C34C: nop

    func_8005CB68(rdram, ctx);
        goto after_7;
    // 0x8002C34C: nop

    after_7:
    // 0x8002C350: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002C354: lw          $t9, -0xB50($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XB50);
    // 0x8002C358: nop

    // 0x8002C35C: addu        $t7, $t9, $s1
    ctx->r15 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C360: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8002C364: b           L_8002CAD4
    // 0x8002C368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C36C:
    // 0x8002C36C: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8002C370: lui         $s7, 0x4
    ctx->r23 = S32(0X4 << 16);
    // 0x8002C374: sll         $t6, $t8, 13
    ctx->r14 = S32(ctx->r24 << 13);
    // 0x8002C378: bgez        $t6, L_8002C3B8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002C37C: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8002C3B8;
    }
    // 0x8002C37C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002C380: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8002C384: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002C388: addu        $t7, $t9, $s1
    ctx->r15 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C38C: sw          $s6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r22;
    // 0x8002C390: lw          $t8, -0xB4C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB4C);
    // 0x8002C394: nop

    // 0x8002C398: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C39C: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8002C3A0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8002C3A4: nop

    // 0x8002C3A8: addu        $t7, $t9, $s1
    ctx->r15 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C3AC: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8002C3B0: b           L_8002CAD4
    // 0x8002C3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C3B8:
    // 0x8002C3B8: lw          $t8, -0x42E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42E8);
    // 0x8002C3BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002C3C0: beq         $t8, $zero, L_8002C424
    if (ctx->r24 == 0) {
        // 0x8002C3C4: nop
    
            goto L_8002C424;
    }
    // 0x8002C3C4: nop

    // 0x8002C3C8: beq         $s5, $zero, L_8002C424
    if (ctx->r21 == 0) {
        // 0x8002C3CC: nop
    
            goto L_8002C424;
    }
    // 0x8002C3CC: nop

    // 0x8002C3D0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002C3D4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002C3D8: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x8002C3DC: beq         $t9, $zero, L_8002C424
    if (ctx->r25 == 0) {
        // 0x8002C3E0: nop
    
            goto L_8002C424;
    }
    // 0x8002C3E0: nop

    // 0x8002C3E4: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x8002C3E8: lw          $t7, -0x42E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42E4);
    // 0x8002C3EC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8002C3F0: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8002C3F4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C3F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8002C3FC: sltiu       $t9, $a0, 0x1
    ctx->r25 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x8002C400: beq         $t9, $zero, L_8002C424
    if (ctx->r25 == 0) {
        // 0x8002C404: sw          $t7, 0x0($s5)
        MEM_W(0X0, ctx->r21) = ctx->r15;
            goto L_8002C424;
    }
    // 0x8002C404: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
    // 0x8002C408: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002C40C: lw          $t8, -0xB50($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB50);
    // 0x8002C410: nop

    // 0x8002C414: addu        $t6, $t8, $s1
    ctx->r14 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C418: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8002C41C: b           L_8002CAD4
    // 0x8002C420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C424:
    // 0x8002C424: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8002C428: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8002C42C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8002C430: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8002C434: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8002C438: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x8002C43C: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x8002C440: addu        $s0, $t6, $s2
    ctx->r16 = ADD32(ctx->r14, ctx->r18);
    // 0x8002C444: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8002C448: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x8002C44C: sll         $t7, $t9, 5
    ctx->r15 = S32(ctx->r25 << 5);
    // 0x8002C450: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8002C454: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002C458: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8002C45C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8002C460: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8002C464: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x8002C468: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8002C46C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002C470: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002C474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002C478: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x8002C47C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8002C480: nop

    // 0x8002C484: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x8002C488: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8002C48C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8002C490: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8002C494: addu        $t7, $v1, $t9
    ctx->r15 = ADD32(ctx->r3, ctx->r25);
    // 0x8002C498: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8002C49C: nop

    // 0x8002C4A0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002C4A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002C4A8: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x8002C4AC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8002C4B0: nop

    // 0x8002C4B4: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x8002C4B8: addu        $t9, $v1, $t6
    ctx->r25 = ADD32(ctx->r3, ctx->r14);
    // 0x8002C4BC: lw          $t7, 0x14($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X14);
    // 0x8002C4C0: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x8002C4C4: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x8002C4C8: jal         0x8004A0A0
    // 0x8002C4CC: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x8002C4CC: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    after_8:
    // 0x8002C4D0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8002C4D4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8002C4D8: addu        $t7, $t9, $s1
    ctx->r15 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C4DC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8002C4E0: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8002C4E4: lui         $a0, 0x7
    ctx->r4 = S32(0X7 << 16);
    // 0x8002C4E8: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x8002C4EC: lw          $t6, 0x18($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X18);
    // 0x8002C4F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8002C4F4: and         $v1, $t6, $a0
    ctx->r3 = ctx->r14 & ctx->r4;
    // 0x8002C4F8: bne         $v1, $at, L_8002C510
    if (ctx->r3 != ctx->r1) {
        // 0x8002C4FC: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_8002C510;
    }
    // 0x8002C4FC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8002C500: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002C504: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002C508: b           L_8002C5A8
    // 0x8002C50C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
        goto L_8002C5A8;
    // 0x8002C50C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
L_8002C510:
    // 0x8002C510: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8002C514: bne         $v1, $at, L_8002C528
    if (ctx->r3 != ctx->r1) {
        // 0x8002C518: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_8002C528;
    }
    // 0x8002C518: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8002C51C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002C520: b           L_8002C5A8
    // 0x8002C524: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
        goto L_8002C5A8;
    // 0x8002C524: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
L_8002C528:
    // 0x8002C528: bne         $s7, $v1, L_8002C53C
    if (ctx->r23 != ctx->r3) {
        // 0x8002C52C: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_8002C53C;
    }
    // 0x8002C52C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8002C530: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002C534: b           L_8002C5A8
    // 0x8002C538: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
        goto L_8002C5A8;
    // 0x8002C538: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
L_8002C53C:
    // 0x8002C53C: bne         $v1, $zero, L_8002C550
    if (ctx->r3 != 0) {
        // 0x8002C540: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_8002C550;
    }
    // 0x8002C540: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8002C544: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002C548: b           L_8002C5A8
    // 0x8002C54C: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
        goto L_8002C5A8;
    // 0x8002C54C: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
L_8002C550:
    // 0x8002C550: bne         $v1, $at, L_8002C564
    if (ctx->r3 != ctx->r1) {
        // 0x8002C554: lui         $at, 0x4361
        ctx->r1 = S32(0X4361 << 16);
            goto L_8002C564;
    }
    // 0x8002C554: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x8002C558: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002C55C: b           L_8002C5A8
    // 0x8002C560: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
        goto L_8002C5A8;
    // 0x8002C560: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
L_8002C564:
    // 0x8002C564: lui         $at, 0x5
    ctx->r1 = S32(0X5 << 16);
    // 0x8002C568: bne         $v1, $at, L_8002C57C
    if (ctx->r3 != ctx->r1) {
        // 0x8002C56C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8002C57C;
    }
    // 0x8002C56C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002C570: lwc1        $f4, 0x5874($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5874);
    // 0x8002C574: b           L_8002C5A8
    // 0x8002C578: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
        goto L_8002C5A8;
    // 0x8002C578: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
L_8002C57C:
    // 0x8002C57C: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x8002C580: bne         $v1, $at, L_8002C594
    if (ctx->r3 != ctx->r1) {
        // 0x8002C584: lui         $at, 0x4307
        ctx->r1 = S32(0X4307 << 16);
            goto L_8002C594;
    }
    // 0x8002C584: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x8002C588: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002C58C: b           L_8002C5A8
    // 0x8002C590: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
        goto L_8002C5A8;
    // 0x8002C590: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
L_8002C594:
    // 0x8002C594: bne         $a0, $v1, L_8002C5A8
    if (ctx->r4 != ctx->r3) {
        // 0x8002C598: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_8002C5A8;
    }
    // 0x8002C598: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8002C59C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002C5A0: nop

    // 0x8002C5A4: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
L_8002C5A8:
    // 0x8002C5A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002C5AC: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002C5B0: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x8002C5B4: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x8002C5B8: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8002C5BC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8002C5C0: jal         0x8005CA3C
    // 0x8002C5C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8005CA3C(rdram, ctx);
        goto after_9;
    // 0x8002C5C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8002C5C8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8002C5CC: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8002C5D0: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x8002C5D4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8002C5D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002C5DC: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x8002C5E0: lw          $a1, -0x42F8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X42F8);
    // 0x8002C5E4: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8002C5E8: lw          $a2, 0x14($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X14);
    // 0x8002C5EC: blez        $a1, L_8002C628
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002C5F0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8002C628;
    }
    // 0x8002C5F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002C5F4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002C5F8: lw          $a3, -0x42F4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X42F4);
    // 0x8002C5FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002C600: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8002C604:
    // 0x8002C604: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8002C608: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002C60C: bne         $a2, $t8, L_8002C61C
    if (ctx->r6 != ctx->r24) {
        // 0x8002C610: addiu       $v0, $v0, 0x14
        ctx->r2 = ADD32(ctx->r2, 0X14);
            goto L_8002C61C;
    }
    // 0x8002C610: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8002C614: b           L_8002C62C
    // 0x8002C618: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
        goto L_8002C62C;
    // 0x8002C618: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
L_8002C61C:
    // 0x8002C61C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8002C620: bne         $at, $zero, L_8002C604
    if (ctx->r1 != 0) {
        // 0x8002C624: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_8002C604;
    }
    // 0x8002C624: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_8002C628:
    // 0x8002C628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002C62C:
    // 0x8002C62C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002C630: lw          $t9, -0xB4C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XB4C);
    // 0x8002C634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002C638: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C63C: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8002C640: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8002C644: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002C648: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x8002C64C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x8002C650: nop

    // 0x8002C654: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x8002C658: beq         $t8, $at, L_8002C670
    if (ctx->r24 == ctx->r1) {
        // 0x8002C65C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8002C670;
    }
    // 0x8002C65C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002C660: beq         $t8, $at, L_8002C6D0
    if (ctx->r24 == ctx->r1) {
        // 0x8002C664: nop
    
            goto L_8002C6D0;
    }
    // 0x8002C664: nop

    // 0x8002C668: b           L_8002C7AC
    // 0x8002C66C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
        goto L_8002C7AC;
    // 0x8002C66C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_8002C670:
    // 0x8002C670: lw          $t9, -0x42B4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42B4);
    // 0x8002C674: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x8002C678: nop

    // 0x8002C67C: bne         $t9, $t6, L_8002C6C4
    if (ctx->r25 != ctx->r14) {
        // 0x8002C680: nop
    
            goto L_8002C6C4;
    }
    // 0x8002C680: nop

    // 0x8002C684: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002C688: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x8002C68C: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8002C690: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8002C694: jal         0x8005C8FC
    // 0x8002C698: nop

    func_8005C8FC(rdram, ctx);
        goto after_10;
    // 0x8002C698: nop

    after_10:
    // 0x8002C69C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002C6A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002C6A4: addu        $s0, $t9, $s2
    ctx->r16 = ADD32(ctx->r25, ctx->r18);
    // 0x8002C6A8: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x8002C6AC: nop

    // 0x8002C6B0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8002C6B4: sw          $t7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r15;
    // 0x8002C6B8: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8002C6BC: nop

    // 0x8002C6C0: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
L_8002C6C4:
    // 0x8002C6C4: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C6C8: b           L_8002C7DC
    // 0x8002C6CC: andi        $t7, $a2, 0x40
    ctx->r15 = ctx->r6 & 0X40;
        goto L_8002C7DC;
    // 0x8002C6CC: andi        $t7, $a2, 0x40
    ctx->r15 = ctx->r6 & 0X40;
L_8002C6D0:
    // 0x8002C6D0: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x8002C6D4: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8002C6D8: bgez        $a1, L_8002C738
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8002C6DC: ori         $at, $at, 0xFFFF
        ctx->r1 = ctx->r1 | 0XFFFF;
            goto L_8002C738;
    }
    // 0x8002C6DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8002C6E0: jal         0x8003E4D4
    // 0x8002C6E4: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    func_8003E4D4(rdram, ctx);
        goto after_11;
    // 0x8002C6E4: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    after_11:
    // 0x8002C6E8: bne         $v0, $zero, L_8002C78C
    if (ctx->r2 != 0) {
        // 0x8002C6EC: nop
    
            goto L_8002C78C;
    }
    // 0x8002C6EC: nop

    // 0x8002C6F0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8002C6F4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8002C6F8: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C6FC: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x8002C700: lw          $a1, 0x20($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X20);
    // 0x8002C704: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C708: jal         0x8005C8FC
    // 0x8002C70C: nop

    func_8005C8FC(rdram, ctx);
        goto after_12;
    // 0x8002C70C: nop

    after_12:
    // 0x8002C710: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8002C714: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002C718: addu        $s0, $t9, $s2
    ctx->r16 = ADD32(ctx->r25, ctx->r18);
    // 0x8002C71C: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C720: nop

    // 0x8002C724: andi        $t6, $a2, 0x8
    ctx->r14 = ctx->r6 & 0X8;
    // 0x8002C728: bne         $t6, $zero, L_8002C78C
    if (ctx->r14 != 0) {
        // 0x8002C72C: or          $t7, $a2, $at
        ctx->r15 = ctx->r6 | ctx->r1;
            goto L_8002C78C;
    }
    // 0x8002C72C: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x8002C730: b           L_8002C78C
    // 0x8002C734: sw          $t7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r15;
        goto L_8002C78C;
    // 0x8002C734: sw          $t7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r15;
L_8002C738:
    // 0x8002C738: jal         0x8003E4D4
    // 0x8002C73C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8003E4D4(rdram, ctx);
        goto after_13;
    // 0x8002C73C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_13:
    // 0x8002C740: beq         $v0, $zero, L_8002C78C
    if (ctx->r2 == 0) {
        // 0x8002C744: nop
    
            goto L_8002C78C;
    }
    // 0x8002C744: nop

    // 0x8002C748: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002C74C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8002C750: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C754: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x8002C758: lw          $a1, 0x20($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X20);
    // 0x8002C75C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8002C760: jal         0x8005C8FC
    // 0x8002C764: nop

    func_8005C8FC(rdram, ctx);
        goto after_14;
    // 0x8002C764: nop

    after_14:
    // 0x8002C768: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8002C76C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002C770: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    // 0x8002C774: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C778: nop

    // 0x8002C77C: andi        $t9, $a2, 0x8
    ctx->r25 = ctx->r6 & 0X8;
    // 0x8002C780: bne         $t9, $zero, L_8002C78C
    if (ctx->r25 != 0) {
        // 0x8002C784: or          $t6, $a2, $at
        ctx->r14 = ctx->r6 | ctx->r1;
            goto L_8002C78C;
    }
    // 0x8002C784: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x8002C788: sw          $t6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r14;
L_8002C78C:
    // 0x8002C78C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002C790: lw          $t7, -0x4304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4304);
    // 0x8002C794: nop

    // 0x8002C798: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x8002C79C: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C7A0: b           L_8002C7DC
    // 0x8002C7A4: andi        $t7, $a2, 0x40
    ctx->r15 = ctx->r6 & 0X40;
        goto L_8002C7DC;
    // 0x8002C7A4: andi        $t7, $a2, 0x40
    ctx->r15 = ctx->r6 & 0X40;
    // 0x8002C7A8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_8002C7AC:
    // 0x8002C7AC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x8002C7B0: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C7B4: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8002C7B8: jal         0x8005C8FC
    // 0x8002C7BC: nop

    func_8005C8FC(rdram, ctx);
        goto after_15;
    // 0x8002C7BC: nop

    after_15:
    // 0x8002C7C0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002C7C4: lw          $t6, -0x4304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4304);
    // 0x8002C7C8: nop

    // 0x8002C7CC: addu        $s0, $t6, $s2
    ctx->r16 = ADD32(ctx->r14, ctx->r18);
    // 0x8002C7D0: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C7D4: nop

    // 0x8002C7D8: andi        $t7, $a2, 0x40
    ctx->r15 = ctx->r6 & 0X40;
L_8002C7DC:
    // 0x8002C7DC: beq         $t7, $zero, L_8002C87C
    if (ctx->r15 == 0) {
        // 0x8002C7E0: addiu       $a1, $zero, 0x19
        ctx->r5 = ADD32(0, 0X19);
            goto L_8002C87C;
    }
    // 0x8002C7E0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8002C7E4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x8002C7E8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8002C7EC: beq         $a0, $at, L_8002C808
    if (ctx->r4 == ctx->r1) {
        // 0x8002C7F0: andi        $t8, $a2, 0x20
        ctx->r24 = ctx->r6 & 0X20;
            goto L_8002C808;
    }
    // 0x8002C7F0: andi        $t8, $a2, 0x20
    ctx->r24 = ctx->r6 & 0X20;
    // 0x8002C7F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8002C7F8: beq         $a0, $at, L_8002C828
    if (ctx->r4 == ctx->r1) {
        // 0x8002C7FC: andi        $t8, $a2, 0x20
        ctx->r24 = ctx->r6 & 0X20;
            goto L_8002C828;
    }
    // 0x8002C7FC: andi        $t8, $a2, 0x20
    ctx->r24 = ctx->r6 & 0X20;
    // 0x8002C800: b           L_8002C848
    // 0x8002C804: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
        goto L_8002C848;
    // 0x8002C804: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
L_8002C808:
    // 0x8002C808: beq         $t8, $zero, L_8002C818
    if (ctx->r24 == 0) {
        // 0x8002C80C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8002C818;
    }
    // 0x8002C80C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002C810: b           L_8002C818
    // 0x8002C814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002C818;
    // 0x8002C814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002C818:
    // 0x8002C818: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8002C81C: ori         $t7, $t6, 0x13
    ctx->r15 = ctx->r14 | 0X13;
    // 0x8002C820: b           L_8002C844
    // 0x8002C824: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
        goto L_8002C844;
    // 0x8002C824: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_8002C828:
    // 0x8002C828: beq         $t8, $zero, L_8002C838
    if (ctx->r24 == 0) {
        // 0x8002C82C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8002C838;
    }
    // 0x8002C82C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8002C830: b           L_8002C838
    // 0x8002C834: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8002C838;
    // 0x8002C834: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8002C838:
    // 0x8002C838: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8002C83C: ori         $t7, $t6, 0x15
    ctx->r15 = ctx->r14 | 0X15;
    // 0x8002C840: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_8002C844:
    // 0x8002C844: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
L_8002C848:
    // 0x8002C848: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x8002C84C: addiu       $t8, $t8, -0x1778
    ctx->r24 = ADD32(ctx->r24, -0X1778);
    // 0x8002C850: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8002C854: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C858: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C85C: jal         0x8004A0A0
    // 0x8002C860: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_16;
    // 0x8002C860: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_16:
    // 0x8002C864: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002C868: lw          $t7, -0x4304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4304);
    // 0x8002C86C: nop

    // 0x8002C870: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x8002C874: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8002C878: nop

L_8002C87C:
    // 0x8002C87C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8002C880: jal         0x8002BE64
    // 0x8002C884: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002BE64(rdram, ctx);
        goto after_17;
    // 0x8002C884: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_17:
    // 0x8002C888: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002C88C: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8002C890: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8002C894: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x8002C898: beq         $t9, $zero, L_8002C8C8
    if (ctx->r25 == 0) {
        // 0x8002C89C: lui         $t8, 0x8003
        ctx->r24 = S32(0X8003 << 16);
            goto L_8002C8C8;
    }
    // 0x8002C89C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x8002C8A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002C8A4: addiu       $v0, $v0, -0x4170
    ctx->r2 = ADD32(ctx->r2, -0X4170);
    // 0x8002C8A8: lw          $t6, 0x9C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X9C);
    // 0x8002C8AC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8002C8B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8002C8B4: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    // 0x8002C8B8: jal         0x8003DC68
    // 0x8002C8BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8003DC68(rdram, ctx);
        goto after_18;
    // 0x8002C8BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_18:
    // 0x8002C8C0: b           L_8002C8D4
    // 0x8002C8C4: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
        goto L_8002C8D4;
    // 0x8002C8C4: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
L_8002C8C8:
    // 0x8002C8C8: addiu       $t8, $t8, -0x1778
    ctx->r24 = ADD32(ctx->r24, -0X1778);
    // 0x8002C8CC: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8002C8D0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
L_8002C8D4:
    // 0x8002C8D4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8002C8D8: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C8DC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002C8E0: jal         0x8004A0A0
    // 0x8002C8E4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_19;
    // 0x8002C8E4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_19:
    // 0x8002C8E8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002C8EC: lw          $t7, -0xB50($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XB50);
    // 0x8002C8F0: nop

    // 0x8002C8F4: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8002C8F8: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8002C8FC: b           L_8002CAD4
    // 0x8002C900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C904:
    // 0x8002C904: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8002C908: lui         $s7, 0x4
    ctx->r23 = S32(0X4 << 16);
    // 0x8002C90C: sll         $t6, $t9, 13
    ctx->r14 = S32(ctx->r25 << 13);
    // 0x8002C910: bgez        $t6, L_8002C950
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002C914: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_8002C950;
    }
    // 0x8002C914: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002C918: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002C91C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002C920: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8002C924: sw          $s6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r22;
    // 0x8002C928: lw          $t9, -0xB4C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XB4C);
    // 0x8002C92C: nop

    // 0x8002C930: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8002C934: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8002C938: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002C93C: nop

    // 0x8002C940: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8002C944: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8002C948: b           L_8002CAD4
    // 0x8002C94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002C94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002C950:
    // 0x8002C950: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8002C954: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8002C958: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8002C95C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8002C960: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8002C964: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8002C968: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8002C96C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002C970: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8002C974: addu        $t6, $v1, $t9
    ctx->r14 = ADD32(ctx->r3, ctx->r25);
    // 0x8002C978: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8002C97C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8002C980: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8002C984: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x8002C988: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8002C98C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002C990: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002C994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002C998: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x8002C99C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8002C9A0: nop

    // 0x8002C9A4: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x8002C9A8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8002C9AC: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8002C9B0: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8002C9B4: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8002C9B8: lwc1        $f4, 0x10($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8002C9BC: nop

    // 0x8002C9C0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002C9C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002C9C8: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x8002C9CC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8002C9D0: nop

    // 0x8002C9D4: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8002C9D8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8002C9DC: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002C9E0: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x8002C9E4: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8002C9E8: jal         0x8004A0A0
    // 0x8002C9EC: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_20;
    // 0x8002C9EC: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    after_20:
    // 0x8002C9F0: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002C9F4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8002C9F8: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8002C9FC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002CA00: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8002CA04: lw          $t6, -0xB4C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB4C);
    // 0x8002CA08: nop

    // 0x8002CA0C: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x8002CA10: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8002CA14: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8002CA18: nop

    // 0x8002CA1C: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x8002CA20: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8002CA24: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8002CA28: jal         0x8002BE64
    // 0x8002CA2C: nop

    func_8002BE64(rdram, ctx);
        goto after_21;
    // 0x8002CA2C: nop

    after_21:
    // 0x8002CA30: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002CA34: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8002CA38: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8002CA3C: andi        $t6, $t9, 0x4
    ctx->r14 = ctx->r25 & 0X4;
    // 0x8002CA40: beq         $t6, $zero, L_8002CA70
    if (ctx->r14 == 0) {
        // 0x8002CA44: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_8002CA70;
    }
    // 0x8002CA44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8002CA48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002CA4C: addiu       $v0, $v0, -0x4170
    ctx->r2 = ADD32(ctx->r2, -0X4170);
    // 0x8002CA50: lw          $t8, 0x9C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X9C);
    // 0x8002CA54: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8002CA58: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8002CA5C: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    // 0x8002CA60: jal         0x8003DC68
    // 0x8002CA64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003DC68(rdram, ctx);
        goto after_22;
    // 0x8002CA64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x8002CA68: b           L_8002CA7C
    // 0x8002CA6C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
        goto L_8002CA7C;
    // 0x8002CA6C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
L_8002CA70:
    // 0x8002CA70: addiu       $t9, $t9, -0x1778
    ctx->r25 = ADD32(ctx->r25, -0X1778);
    // 0x8002CA74: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x8002CA78: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
L_8002CA7C:
    // 0x8002CA7C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8002CA80: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x8002CA84: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8002CA88: jal         0x8004A0A0
    // 0x8002CA8C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_23;
    // 0x8002CA8C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_23:
    // 0x8002CA90: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002CA94: lw          $t7, -0xB50($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XB50);
    // 0x8002CA98: nop

    // 0x8002CA9C: addu        $t9, $t7, $s1
    ctx->r25 = ADD32(ctx->r15, ctx->r17);
    // 0x8002CAA0: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x8002CAA4: b           L_8002CAD4
    // 0x8002CAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002CAD4;
    // 0x8002CAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002CAAC:
    // 0x8002CAAC: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8002CAB0: jal         0x8002BCF0
    // 0x8002CAB4: nop

    func_8002BCF0(rdram, ctx);
        goto after_24;
    // 0x8002CAB4: nop

    after_24:
    // 0x8002CAB8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002CABC: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x8002CAC0: nop

    // 0x8002CAC4: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x8002CAC8: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8002CACC: nop

    // 0x8002CAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002CAD4:
    // 0x8002CAD4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8002CAD8: jr          $ra
    // 0x8002CADC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002CADC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8002CAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CAE0: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002CAE4: addiu       $s3, $s3, -0x4320
    ctx->r19 = ADD32(ctx->r19, -0X4320);
    // 0x8002CAE8: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8002CAEC: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x8002CAF0: addiu       $fp, $fp, -0x42E8
    ctx->r30 = ADD32(ctx->r30, -0X42E8);
    // 0x8002CAF4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8002CAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CAFC: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
    // 0x8002CB00: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8002CB04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002CB08: blez        $v1, L_8002CB7C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002CB0C: lui         $a2, 0x800B
        ctx->r6 = S32(0X800B << 16);
            goto L_8002CB7C;
    }
    // 0x8002CB0C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8002CB10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002CB14: lw          $v0, -0x4304($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4304);
    // 0x8002CB18: lw          $a2, -0x4308($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4308);
    // 0x8002CB1C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_8002CB20:
    // 0x8002CB20: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002CB24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002CB28: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8002CB2C: addu        $a0, $a2, $t7
    ctx->r4 = ADD32(ctx->r6, ctx->r15);
    // 0x8002CB30: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8002CB34: nop

    // 0x8002CB38: bne         $a3, $t8, L_8002CB70
    if (ctx->r7 != ctx->r24) {
        // 0x8002CB3C: slt         $at, $s2, $v1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8002CB70;
    }
    // 0x8002CB3C: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002CB40: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8002CB44: nop

    // 0x8002CB48: andi        $t6, $t9, 0x1
    ctx->r14 = ctx->r25 & 0X1;
    // 0x8002CB4C: beq         $t6, $zero, L_8002CB70
    if (ctx->r14 == 0) {
        // 0x8002CB50: slt         $at, $s2, $v1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8002CB70;
    }
    // 0x8002CB50: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002CB54: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x8002CB58: nop

    // 0x8002CB5C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8002CB60: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x8002CB64: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8002CB68: nop

    // 0x8002CB6C: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
L_8002CB70:
    // 0x8002CB70: bne         $at, $zero, L_8002CB20
    if (ctx->r1 != 0) {
        // 0x8002CB74: addiu       $v0, $v0, 0x4C
        ctx->r2 = ADD32(ctx->r2, 0X4C);
            goto L_8002CB20;
    }
    // 0x8002CB74: addiu       $v0, $v0, 0x4C
    ctx->r2 = ADD32(ctx->r2, 0X4C);
    // 0x8002CB78: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002CB7C:
    // 0x8002CB7C: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002CB80: nop

    // 0x8002CB84: beq         $v0, $zero, L_8002CC58
    if (ctx->r2 == 0) {
        // 0x8002CB88: nop
    
            goto L_8002CC58;
    }
    // 0x8002CB88: nop

    // 0x8002CB8C: jal         0x80006DFC
    // 0x8002CB90: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    func_80006DFC(rdram, ctx);
        goto after_0;
    // 0x8002CB90: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    after_0:
    // 0x8002CB94: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8002CB98: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002CB9C: addiu       $v1, $v1, -0x42E4
    ctx->r3 = ADD32(ctx->r3, -0X42E4);
    // 0x8002CBA0: blez        $t9, L_8002CBD4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8002CBA4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8002CBD4;
    }
    // 0x8002CBA4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002CBA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002CBAC:
    // 0x8002CBAC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8002CBB0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002CBB4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8002CBB8: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x8002CBBC: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x8002CBC0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002CBC4: slt         $at, $s2, $t8
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8002CBC8: bne         $at, $zero, L_8002CBAC
    if (ctx->r1 != 0) {
        // 0x8002CBCC: nop
    
            goto L_8002CBAC;
    }
    // 0x8002CBCC: nop

    // 0x8002CBD0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002CBD4:
    // 0x8002CBD4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8002CBD8: addiu       $s1, $s1, -0x4300
    ctx->r17 = ADD32(ctx->r17, -0X4300);
    // 0x8002CBDC: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8002CBE0: nop

    // 0x8002CBE4: blez        $t9, L_8002CC58
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8002CBE8: nop
    
            goto L_8002CC58;
    }
    // 0x8002CBE8: nop

    // 0x8002CBEC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8002CBF0:
    // 0x8002CBF0: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8002CBF4: jal         0x80028AB8
    // 0x8002CBF8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8002CBF8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_1:
    // 0x8002CBFC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002CC00: lw          $t6, -0x42E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42E4);
    // 0x8002CC04: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002CC08: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8002CC0C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8002CC10: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8002CC14: nop

    // 0x8002CC18: bne         $t8, $zero, L_8002CC40
    if (ctx->r24 != 0) {
        // 0x8002CC1C: nop
    
            goto L_8002CC40;
    }
    // 0x8002CC1C: nop

    // 0x8002CC20: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x8002CC24: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8002CC28: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002CC2C: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8002CC30: bne         $at, $zero, L_8002CC40
    if (ctx->r1 != 0) {
        // 0x8002CC34: nop
    
            goto L_8002CC40;
    }
    // 0x8002CC34: nop

    // 0x8002CC38: b           L_8002CC58
    // 0x8002CC3C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_8002CC58;
    // 0x8002CC3C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002CC40:
    // 0x8002CC40: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8002CC44: nop

    // 0x8002CC48: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002CC4C: bne         $at, $zero, L_8002CBF0
    if (ctx->r1 != 0) {
        // 0x8002CC50: nop
    
            goto L_8002CBF0;
    }
    // 0x8002CC50: nop

    // 0x8002CC54: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002CC58:
    // 0x8002CC58: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002CC5C: nop

    // 0x8002CC60: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x8002CC64: nop

    // 0x8002CC68: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8002CC6C: jal         0x80006DFC
    // 0x8002CC70: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80006DFC(rdram, ctx);
        goto after_2;
    // 0x8002CC70: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x8002CC74: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8002CC78: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8002CC7C: addiu       $s7, $s7, -0xB50
    ctx->r23 = ADD32(ctx->r23, -0XB50);
    // 0x8002CC80: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x8002CC84: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8002CC88: nop

    // 0x8002CC8C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002CC90: jal         0x80006DFC
    // 0x8002CC94: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80006DFC(rdram, ctx);
        goto after_3;
    // 0x8002CC94: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_3:
    // 0x8002CC98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002CC9C: sw          $v0, -0xB4C($at)
    MEM_W(-0XB4C, ctx->r1) = ctx->r2;
    // 0x8002CCA0: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x8002CCA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002CCA8: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x8002CCAC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8002CCB0: blez        $t7, L_8002CCE8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8002CCB4: nop
    
            goto L_8002CCE8;
    }
    // 0x8002CCB4: nop

L_8002CCB8:
    // 0x8002CCB8: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x8002CCBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002CCC0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8002CCC4: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8002CCC8: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x8002CCCC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002CCD0: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x8002CCD4: nop

    // 0x8002CCD8: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002CCDC: bne         $at, $zero, L_8002CCB8
    if (ctx->r1 != 0) {
        // 0x8002CCE0: nop
    
            goto L_8002CCB8;
    }
    // 0x8002CCE0: nop

    // 0x8002CCE4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002CCE8:
    // 0x8002CCE8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x8002CCEC: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8002CCF0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8002CCF4: blez        $v1, L_8002CD40
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002CCF8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002CD40;
    }
L_8002CCF8:
    // 0x8002CCF8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002CCFC: addiu       $s5, $sp, 0x48
    ctx->r21 = ADD32(ctx->r29, 0X48);
    // 0x8002CD00: jal         0x8002BF9C
    // 0x8002CD04: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    func_8002BF9C(rdram, ctx);
        goto after_4;
    // 0x8002CD04: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    after_4:
    // 0x8002CD08: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002CD0C: addiu       $s3, $s3, -0x4320
    ctx->r19 = ADD32(ctx->r19, -0X4320);
    // 0x8002CD10: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002CD14: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8002CD18: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x8002CD1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002CD20: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8002CD24: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8002CD28: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002CD2C: addiu       $fp, $fp, -0x42E8
    ctx->r30 = ADD32(ctx->r30, -0X42E8);
    // 0x8002CD30: addiu       $s7, $s7, -0xB50
    ctx->r23 = ADD32(ctx->r23, -0XB50);
    // 0x8002CD34: bne         $at, $zero, L_8002CCF8
    if (ctx->r1 != 0) {
        // 0x8002CD38: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_8002CCF8;
    }
    // 0x8002CD38: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8002CD3C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002CD40:
    // 0x8002CD40: blez        $v1, L_8002CE00
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002CD44: nop
    
            goto L_8002CE00;
    }
    // 0x8002CD44: nop

    // 0x8002CD48: lui         $s4, 0x700
    ctx->r20 = S32(0X700 << 16);
    // 0x8002CD4C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002CD50: addiu       $s3, $s3, -0x4304
    ctx->r19 = ADD32(ctx->r19, -0X4304);
    // 0x8002CD54: ori         $s4, $s4, 0x3
    ctx->r20 = ctx->r20 | 0X3;
    // 0x8002CD58: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x8002CD5C: addiu       $s5, $sp, 0x2C
    ctx->r21 = ADD32(ctx->r29, 0X2C);
L_8002CD60:
    // 0x8002CD60: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002CD64: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
L_8002CD68:
    // 0x8002CD68: addu        $t9, $t9, $s2
    ctx->r25 = ADD32(ctx->r25, ctx->r18);
    // 0x8002CD6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002CD70: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002CD74: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x8002CD78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002CD7C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8002CD80: addu        $v1, $t6, $s0
    ctx->r3 = ADD32(ctx->r14, ctx->r16);
    // 0x8002CD84: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x8002CD88: nop

    // 0x8002CD8C: beq         $s1, $t7, L_8002CDD4
    if (ctx->r17 == ctx->r15) {
        // 0x8002CD90: nop
    
            goto L_8002CDD4;
    }
    // 0x8002CD90: nop

    // 0x8002CD94: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x8002CD98: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x8002CD9C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8002CDA0: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x8002CDA4: nop

    // 0x8002CDA8: beq         $s1, $a3, L_8002CDD4
    if (ctx->r17 == ctx->r7) {
        // 0x8002CDAC: nop
    
            goto L_8002CDD4;
    }
    // 0x8002CDAC: nop

    // 0x8002CDB0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8002CDB4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8002CDB8: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x8002CDBC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x8002CDC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002CDC4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8002CDC8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8002CDCC: jal         0x8004A0A0
    // 0x8002CDD0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8002CDD0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_5:
L_8002CDD4:
    // 0x8002CDD4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002CDD8: bne         $s0, $s6, L_8002CD68
    if (ctx->r16 != ctx->r22) {
        // 0x8002CDDC: sll         $t9, $s2, 2
        ctx->r25 = S32(ctx->r18 << 2);
            goto L_8002CD68;
    }
    // 0x8002CDDC: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8002CDE0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002CDE4: lw          $t9, -0x4320($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4320);
    // 0x8002CDE8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002CDEC: lw          $v1, 0xC($t9)
    ctx->r3 = MEM_W(ctx->r25, 0XC);
    // 0x8002CDF0: nop

    // 0x8002CDF4: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002CDF8: bne         $at, $zero, L_8002CD60
    if (ctx->r1 != 0) {
        // 0x8002CDFC: nop
    
            goto L_8002CD60;
    }
    // 0x8002CDFC: nop

L_8002CE00:
    // 0x8002CE00: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x8002CE04: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002CE08: beq         $t6, $zero, L_8002CE20
    if (ctx->r14 == 0) {
        // 0x8002CE0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002CE20;
    }
    // 0x8002CE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CE10: lw          $a0, -0x42E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42E4);
    // 0x8002CE14: jal         0x80006DC0
    // 0x8002CE18: nop

    func_80006DC0(rdram, ctx);
        goto after_6;
    // 0x8002CE18: nop

    after_6:
    // 0x8002CE1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002CE20:
    // 0x8002CE20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8002CE24: jr          $ra
    // 0x8002CE28: nop

    return;
    // 0x8002CE28: nop

;}
RECOMP_FUNC void func_8002CE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CE2C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8002CE30: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002CE34: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002CE38: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8002CE3C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8002CE40: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002CE44: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002CE48: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002CE4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002CE50: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002CE54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002CE58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002CE5C: jal         0x800407D8
    // 0x8002CE60: addiu       $s1, $s1, -0xAC4
    ctx->r17 = ADD32(ctx->r17, -0XAC4);
    func_800407D8(rdram, ctx);
        goto after_0;
    // 0x8002CE60: addiu       $s1, $s1, -0xAC4
    ctx->r17 = ADD32(ctx->r17, -0XAC4);
    after_0:
    // 0x8002CE64: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002CE68: addiu       $s5, $t6, -0x4298
    ctx->r21 = ADD32(ctx->r14, -0X4298);
    // 0x8002CE6C: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8002CE70: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8002CE74: addiu       $s7, $s7, -0x900
    ctx->r23 = ADD32(ctx->r23, -0X900);
    // 0x8002CE78: addiu       $s6, $s6, -0xAC4
    ctx->r22 = ADD32(ctx->r22, -0XAC4);
    // 0x8002CE7C: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x8002CE80: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002CE84: addiu       $fp, $sp, 0x58
    ctx->r30 = ADD32(ctx->r29, 0X58);
L_8002CE88:
    // 0x8002CE88: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002CE8C: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x8002CE90: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x8002CE94: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8002CE98: beq         $t8, $zero, L_8002CEC0
    if (ctx->r24 == 0) {
        // 0x8002CE9C: addiu       $s4, $s2, 0x1
        ctx->r20 = ADD32(ctx->r18, 0X1);
            goto L_8002CEC0;
    }
    // 0x8002CE9C: addiu       $s4, $s2, 0x1
    ctx->r20 = ADD32(ctx->r18, 0X1);
    // 0x8002CEA0: lw          $t9, 0x120($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X120);
    // 0x8002CEA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002CEA8: bne         $t9, $at, L_8002CEC0
    if (ctx->r25 != ctx->r1) {
        // 0x8002CEAC: nop
    
            goto L_8002CEC0;
    }
    // 0x8002CEAC: nop

    // 0x8002CEB0: nor         $v1, $s2, $zero
    ctx->r3 = ~(ctx->r18 | 0);
    // 0x8002CEB4: andi        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 & 0X1;
    // 0x8002CEB8: b           L_8002CEC0
    // 0x8002CEBC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_8002CEC0;
    // 0x8002CEBC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_8002CEC0:
    // 0x8002CEC0: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8002CEC4: sw          $s4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r20;
    // 0x8002CEC8: lw          $t1, 0x120($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X120);
    // 0x8002CECC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8002CED0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002CED4: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8002CED8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8002CEDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002CEE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002CEE4: addu        $t3, $s7, $t2
    ctx->r11 = ADD32(ctx->r23, ctx->r10);
    // 0x8002CEE8: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8002CEEC: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8002CEF0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002CEF4: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x8002CEF8: lw          $t5, 0x120($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X120);
    // 0x8002CEFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002CF00: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002CF04: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002CF08: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8002CF0C: addu        $t7, $s7, $t6
    ctx->r15 = ADD32(ctx->r23, ctx->r14);
    // 0x8002CF10: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8002CF14: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8002CF18: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x8002CF1C: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x8002CF20: lw          $t9, 0x120($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X120);
    // 0x8002CF24: nop

    // 0x8002CF28: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002CF2C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8002CF30: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8002CF34: addu        $t1, $s7, $t0
    ctx->r9 = ADD32(ctx->r23, ctx->r8);
    // 0x8002CF38: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8002CF3C: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8002CF40: jal         0x8004A0A0
    // 0x8002CF44: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8002CF44: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    after_1:
    // 0x8002CF48: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x8002CF4C: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
    // 0x8002CF50: sw          $zero, 0x110($s3)
    MEM_W(0X110, ctx->r19) = 0;
    // 0x8002CF54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002CF58: jal         0x8005C478
    // 0x8002CF5C: sw          $t3, 0x118($s3)
    MEM_W(0X118, ctx->r19) = ctx->r11;
    func_8005C478(rdram, ctx);
        goto after_2;
    // 0x8002CF5C: sw          $t3, 0x118($s3)
    MEM_W(0X118, ctx->r19) = ctx->r11;
    after_2:
    // 0x8002CF60: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8002CF64: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8002CF68: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x8002CF6C: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8002CF70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002CF74: jal         0x8005BE2C
    // 0x8002CF78: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_3;
    // 0x8002CF78: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_3:
    // 0x8002CF7C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8002CF80: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8002CF84: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8002CF88: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8002CF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002CF90: jal         0x8005BE2C
    // 0x8002CF94: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_4;
    // 0x8002CF94: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_4:
    // 0x8002CF98: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002CF9C: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8002CFA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002CFA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002CFA8: jal         0x80056C2C
    // 0x8002CFAC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_80056C2C(rdram, ctx);
        goto after_5;
    // 0x8002CFAC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_5:
    // 0x8002CFB0: jal         0x8004515C
    // 0x8002CFB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8004515C(rdram, ctx);
        goto after_6;
    // 0x8002CFB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x8002CFB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002CFBC: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8002CFC0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8002CFC4: addiu       $s6, $s6, 0x1C
    ctx->r22 = ADD32(ctx->r22, 0X1C);
    // 0x8002CFC8: bne         $s4, $at, L_8002CE88
    if (ctx->r20 != ctx->r1) {
        // 0x8002CFCC: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_8002CE88;
    }
    // 0x8002CFCC: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x8002CFD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002CFD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002CFD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CFDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002CFE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002CFE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002CFE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002CFEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002CFF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002CFF4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8002CFF8: jr          $ra
    // 0x8002CFFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8002CFFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8002D000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D000: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002D004: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8002D008: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x8002D00C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8002D010: beq         $t7, $zero, L_8002D080
    if (ctx->r15 == 0) {
        // 0x8002D014: subu        $t2, $t2, $a0
        ctx->r10 = SUB32(ctx->r10, ctx->r4);
            goto L_8002D080;
    }
    // 0x8002D014: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x8002D018: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8002D01C: beq         $at, $zero, L_8002D058
    if (ctx->r1 == 0) {
        // 0x8002D020: sll         $t1, $a0, 2
        ctx->r9 = S32(ctx->r4 << 2);
            goto L_8002D058;
    }
    // 0x8002D020: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8002D024: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002D028: addiu       $t9, $t9, -0x4298
    ctx->r25 = ADD32(ctx->r25, -0X4298);
    // 0x8002D02C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8002D030: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8002D034: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x8002D038: nop

    // 0x8002D03C: beq         $t0, $zero, L_8002D050
    if (ctx->r8 == 0) {
        // 0x8002D040: nop
    
            goto L_8002D050;
    }
    // 0x8002D040: nop

    // 0x8002D044: lw          $v0, 0xFC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XFC);
    // 0x8002D048: jr          $ra
    // 0x8002D04C: nop

    return;
    // 0x8002D04C: nop

L_8002D050:
    // 0x8002D050: jr          $ra
    // 0x8002D054: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8002D054: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002D058:
    // 0x8002D058: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002D05C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8002D060: lw          $v1, -0x4190($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4190);
    // 0x8002D064: nop

    // 0x8002D068: beq         $v1, $zero, L_8002D078
    if (ctx->r3 == 0) {
        // 0x8002D06C: nop
    
            goto L_8002D078;
    }
    // 0x8002D06C: nop

    // 0x8002D070: jr          $ra
    // 0x8002D074: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002D074: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8002D078:
    // 0x8002D078: jr          $ra
    // 0x8002D07C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8002D07C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002D080:
    // 0x8002D080: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8002D084: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002D088: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8002D08C: lw          $v0, -0xB34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XB34);
    // 0x8002D090: nop

    // 0x8002D094: jr          $ra
    // 0x8002D098: nop

    return;
    // 0x8002D098: nop

;}
RECOMP_FUNC void func_8002D09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D09C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002D0A0: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8002D0A4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002D0A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D0AC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8002D0B0: beq         $t7, $zero, L_8002D0C0
    if (ctx->r15 == 0) {
        // 0x8002D0B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002D0C0;
    }
    // 0x8002D0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D0B8: b           L_8002D0CC
    // 0x8002D0BC: addiu       $s3, $zero, 0x7FD
    ctx->r19 = ADD32(0, 0X7FD);
        goto L_8002D0CC;
    // 0x8002D0BC: addiu       $s3, $zero, 0x7FD
    ctx->r19 = ADD32(0, 0X7FD);
L_8002D0C0:
    // 0x8002D0C0: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x8002D0C4: nop

    // 0x8002D0C8: addiu       $s3, $s3, 0x7F4
    ctx->r19 = ADD32(ctx->r19, 0X7F4);
L_8002D0CC:
    // 0x8002D0CC: jal         0x80002F88
    // 0x8002D0D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80002F88(rdram, ctx);
        goto after_0;
    // 0x8002D0D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x8002D0D4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002D0D8: lw          $t8, -0xA70($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XA70);
    // 0x8002D0DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8002D0E0: beq         $t8, $zero, L_8002D114
    if (ctx->r24 == 0) {
        // 0x8002D0E4: or          $s6, $v0, $zero
        ctx->r22 = ctx->r2 | 0;
            goto L_8002D114;
    }
    // 0x8002D0E4: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8002D0E8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002D0EC: addiu       $s1, $t9, -0xA70
    ctx->r17 = ADD32(ctx->r25, -0XA70);
    // 0x8002D0F0: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x8002D0F4: nop

L_8002D0F8:
    // 0x8002D0F8: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x8002D0FC: jal         0x8004AE50
    // 0x8002D100: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8004AE50(rdram, ctx);
        goto after_1;
    // 0x8002D100: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8002D104: lw          $s2, 0x8($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X8);
    // 0x8002D108: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8002D10C: bne         $s2, $zero, L_8002D0F8
    if (ctx->r18 != 0) {
        // 0x8002D110: nop
    
            goto L_8002D0F8;
    }
    // 0x8002D110: nop

L_8002D114:
    // 0x8002D114: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002D118: addiu       $s4, $s4, -0x4300
    ctx->r20 = ADD32(ctx->r20, -0X4300);
    // 0x8002D11C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x8002D120: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x8002D124: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002D128: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002D12C: beq         $v0, $zero, L_8002D38C
    if (ctx->r2 == 0) {
        // 0x8002D130: nop
    
            goto L_8002D38C;
    }
    // 0x8002D130: nop

L_8002D134:
    // 0x8002D134: bne         $s5, $v0, L_8002D2C4
    if (ctx->r21 != ctx->r2) {
        // 0x8002D138: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8002D2C4;
    }
    // 0x8002D138: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8002D13C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002D140: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8002D144: beq         $a0, $at, L_8002D15C
    if (ctx->r4 == ctx->r1) {
        // 0x8002D148: sw          $a0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r4;
            goto L_8002D15C;
    }
    // 0x8002D148: sw          $a0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r4;
    // 0x8002D14C: jal         0x80002F88
    // 0x8002D150: nop

    func_80002F88(rdram, ctx);
        goto after_2;
    // 0x8002D150: nop

    after_2:
    // 0x8002D154: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002D158: sw          $v0, -0xB48($at)
    MEM_W(-0XB48, ctx->r1) = ctx->r2;
L_8002D15C:
    // 0x8002D15C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8002D160: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8002D164: sw          $t7, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r15;
    // 0x8002D168: lw          $s1, -0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, -0X4);
    // 0x8002D16C: nop

    // 0x8002D170: blez        $s1, L_8002D194
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8002D174: nop
    
            goto L_8002D194;
    }
    // 0x8002D174: nop

L_8002D178:
    // 0x8002D178: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002D17C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8002D180: jal         0x8004AE50
    // 0x8002D184: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    func_8004AE50(rdram, ctx);
        goto after_3;
    // 0x8002D184: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_3:
    // 0x8002D188: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8002D18C: bne         $s3, $s1, L_8002D178
    if (ctx->r19 != ctx->r17) {
        // 0x8002D190: nop
    
            goto L_8002D178;
    }
    // 0x8002D190: nop

L_8002D194:
    // 0x8002D194: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8002D198: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002D19C: beq         $t8, $zero, L_8002D38C
    if (ctx->r24 == 0) {
        // 0x8002D1A0: sw          $t8, 0x8($s4)
        MEM_W(0X8, ctx->r20) = ctx->r24;
            goto L_8002D38C;
    }
    // 0x8002D1A0: sw          $t8, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r24;
    // 0x8002D1A4: sll         $a0, $t8, 2
    ctx->r4 = S32(ctx->r24 << 2);
    // 0x8002D1A8: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8002D1AC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002D1B0: jal         0x80006DFC
    // 0x8002D1B4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80006DFC(rdram, ctx);
        goto after_4;
    // 0x8002D1B4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_4:
    // 0x8002D1B8: lw          $t9, 0x8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X8);
    // 0x8002D1BC: sw          $v0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r2;
    // 0x8002D1C0: blez        $t9, L_8002D38C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8002D1C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002D38C;
    }
    // 0x8002D1C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002D1C8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8002D1CC:
    // 0x8002D1CC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8002D1D0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8002D1D4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8002D1D8: lw          $t8, 0xC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC);
    // 0x8002D1DC: lw          $t7, -0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, -0XC);
    // 0x8002D1E0: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x8002D1E4: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8002D1E8: lw          $t8, 0xC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC);
    // 0x8002D1EC: lw          $t6, -0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, -0X8);
    // 0x8002D1F0: addu        $t7, $t8, $s2
    ctx->r15 = ADD32(ctx->r24, ctx->r18);
    // 0x8002D1F4: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x8002D1F8: lw          $t8, 0xC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC);
    // 0x8002D1FC: lw          $t9, -0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, -0X4);
    // 0x8002D200: addu        $t6, $t8, $s2
    ctx->r14 = ADD32(ctx->r24, ctx->r18);
    // 0x8002D204: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x8002D208: lw          $t7, 0xC($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XC);
    // 0x8002D20C: nop

    // 0x8002D210: addu        $v1, $t7, $s2
    ctx->r3 = ADD32(ctx->r15, ctx->r18);
    // 0x8002D214: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8002D218: nop

    // 0x8002D21C: beq         $v0, $zero, L_8002D2A4
    if (ctx->r2 == 0) {
        // 0x8002D220: sll         $a0, $v0, 3
        ctx->r4 = S32(ctx->r2 << 3);
            goto L_8002D2A4;
    }
    // 0x8002D220: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8002D224: jal         0x80006DFC
    // 0x8002D228: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80006DFC(rdram, ctx);
        goto after_5;
    // 0x8002D228: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_5:
    // 0x8002D22C: lw          $t8, 0xC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC);
    // 0x8002D230: nop

    // 0x8002D234: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x8002D238: sw          $v0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r2;
    // 0x8002D23C: lw          $t6, 0xC($s4)
    ctx->r14 = MEM_W(ctx->r20, 0XC);
    // 0x8002D240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D244: addu        $v1, $t6, $s2
    ctx->r3 = ADD32(ctx->r14, ctx->r18);
    // 0x8002D248: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8002D24C: nop

    // 0x8002D250: blez        $t7, L_8002D2A4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8002D254: nop
    
            goto L_8002D2A4;
    }
    // 0x8002D254: nop

L_8002D258:
    // 0x8002D258: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x8002D25C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8002D260: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x8002D264: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8002D268: lw          $t9, 0xC($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XC);
    // 0x8002D26C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8002D270: addu        $t8, $t9, $s2
    ctx->r24 = ADD32(ctx->r25, ctx->r18);
    // 0x8002D274: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x8002D278: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002D27C: addu        $t9, $t6, $v0
    ctx->r25 = ADD32(ctx->r14, ctx->r2);
    // 0x8002D280: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8002D284: lw          $t8, 0xC($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC);
    // 0x8002D288: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8002D28C: addu        $v1, $t8, $s2
    ctx->r3 = ADD32(ctx->r24, ctx->r18);
    // 0x8002D290: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x8002D294: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8002D298: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002D29C: bne         $at, $zero, L_8002D258
    if (ctx->r1 != 0) {
        // 0x8002D2A0: nop
    
            goto L_8002D258;
    }
    // 0x8002D2A0: nop

L_8002D2A4:
    // 0x8002D2A4: lw          $t7, 0x8($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X8);
    // 0x8002D2A8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8002D2AC: slt         $at, $s3, $t7
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8002D2B0: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8002D2B4: bne         $at, $zero, L_8002D1CC
    if (ctx->r1 != 0) {
        // 0x8002D2B8: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_8002D1CC;
    }
    // 0x8002D2B8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8002D2BC: b           L_8002D38C
    // 0x8002D2C0: nop

        goto L_8002D38C;
    // 0x8002D2C0: nop

L_8002D2C4:
    // 0x8002D2C4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8002D2C8: nop

    // 0x8002D2CC: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8002D2D0: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x8002D2D4: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8002D2D8: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x8002D2DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002D2E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002D2E4: blez        $a0, L_8002D37C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8002D2E8: andi        $v0, $a0, 0x3
        ctx->r2 = ctx->r4 & 0X3;
            goto L_8002D37C;
    }
    // 0x8002D2E8: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8002D2EC: beq         $v0, $zero, L_8002D318
    if (ctx->r2 == 0) {
        // 0x8002D2F0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002D318;
    }
    // 0x8002D2F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8002D2F4:
    // 0x8002D2F4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8002D2F8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8002D2FC: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8002D300: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x8002D304: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8002D308: bne         $v1, $s3, L_8002D2F4
    if (ctx->r3 != ctx->r19) {
        // 0x8002D30C: addu        $s0, $s0, $t8
        ctx->r16 = ADD32(ctx->r16, ctx->r24);
            goto L_8002D2F4;
    }
    // 0x8002D30C: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x8002D310: beq         $s3, $a0, L_8002D37C
    if (ctx->r19 == ctx->r4) {
        // 0x8002D314: nop
    
            goto L_8002D37C;
    }
    // 0x8002D314: nop

L_8002D318:
    // 0x8002D318: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8002D31C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8002D320: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8002D324: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x8002D328: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8002D32C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x8002D330: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8002D334: nop

    // 0x8002D338: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8002D33C: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x8002D340: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002D344: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8002D348: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8002D34C: nop

    // 0x8002D350: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8002D354: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x8002D358: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8002D35C: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x8002D360: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8002D364: nop

    // 0x8002D368: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8002D36C: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x8002D370: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8002D374: bne         $s3, $a0, L_8002D318
    if (ctx->r19 != ctx->r4) {
        // 0x8002D378: addu        $s0, $s0, $t8
        ctx->r16 = ADD32(ctx->r16, ctx->r24);
            goto L_8002D318;
    }
    // 0x8002D378: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
L_8002D37C:
    // 0x8002D37C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002D380: nop

    // 0x8002D384: bne         $v0, $zero, L_8002D134
    if (ctx->r2 != 0) {
        // 0x8002D388: nop
    
            goto L_8002D134;
    }
    // 0x8002D388: nop

L_8002D38C:
    // 0x8002D38C: jal         0x80002C10
    // 0x8002D390: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80002C10(rdram, ctx);
        goto after_6;
    // 0x8002D390: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_6:
    // 0x8002D394: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002D398: lw          $a0, -0xB48($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB48);
    // 0x8002D39C: nop

    // 0x8002D3A0: beq         $a0, $zero, L_8002D3C4
    if (ctx->r4 == 0) {
        // 0x8002D3A4: addiu       $v0, $a0, 0x230
        ctx->r2 = ADD32(ctx->r4, 0X230);
            goto L_8002D3C4;
    }
    // 0x8002D3A4: addiu       $v0, $a0, 0x230
    ctx->r2 = ADD32(ctx->r4, 0X230);
    // 0x8002D3A8: lw          $s3, 0x0($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X0);
    // 0x8002D3AC: nop

    // 0x8002D3B0: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
    // 0x8002D3B4: jal         0x80010730
    // 0x8002D3B8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    func_80010730(rdram, ctx);
        goto after_7;
    // 0x8002D3B8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    after_7:
    // 0x8002D3BC: b           L_8002D3CC
    // 0x8002D3C0: nop

        goto L_8002D3CC;
    // 0x8002D3C0: nop

L_8002D3C4:
    // 0x8002D3C4: jal         0x80007E70
    // 0x8002D3C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80007E70(rdram, ctx);
        goto after_8;
    // 0x8002D3C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_8:
L_8002D3CC:
    // 0x8002D3CC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8002D3D0: addiu       $s0, $s0, 0x6280
    ctx->r16 = ADD32(ctx->r16, 0X6280);
    // 0x8002D3D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002D3D8: andi        $a0, $s3, 0x1
    ctx->r4 = ctx->r19 & 0X1;
    // 0x8002D3DC: lhu         $a1, 0x60($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X60);
    // 0x8002D3E0: lw          $a3, 0x64($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X64);
    // 0x8002D3E4: jal         0x8001B20C
    // 0x8002D3E8: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    func_8001B20C(rdram, ctx);
        goto after_9;
    // 0x8002D3E8: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    after_9:
    // 0x8002D3EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002D3F0: nop

    // 0x8002D3F4: lbu         $a2, 0x5A($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5A);
    // 0x8002D3F8: lbu         $a1, 0x59($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X59);
    // 0x8002D3FC: lbu         $a0, 0x58($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X58);
    // 0x8002D400: jal         0x80004634
    // 0x8002D404: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    func_80004634(rdram, ctx);
        goto after_10;
    // 0x8002D404: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    after_10:
    // 0x8002D408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D410: jr          $ra
    // 0x8002D414: nop

    return;
    // 0x8002D414: nop

;}
RECOMP_FUNC void func_8002D418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D418: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8002D41C: addiu       $t2, $t2, -0xB44
    ctx->r10 = ADD32(ctx->r10, -0XB44);
    // 0x8002D420: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8002D424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D42C: beq         $a1, $zero, L_8002D450
    if (ctx->r5 == 0) {
        // 0x8002D430: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8002D450;
    }
    // 0x8002D430: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002D434: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002D438: jal         0x80002C10
    // 0x8002D43C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80002C10(rdram, ctx);
        goto after_0;
    // 0x8002D43C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8002D440: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8002D444: addiu       $t2, $t2, -0xB44
    ctx->r10 = ADD32(ctx->r10, -0XB44);
    // 0x8002D448: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002D44C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_8002D450:
    // 0x8002D450: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002D454: beq         $a2, $at, L_8002D5B8
    if (ctx->r6 == ctx->r1) {
        // 0x8002D458: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002D5B8;
    }
    // 0x8002D458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D45C: jal         0x80002F88
    // 0x8002D460: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x8002D460: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8002D464: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8002D468: addiu       $t2, $t2, -0xB44
    ctx->r10 = ADD32(ctx->r10, -0XB44);
    // 0x8002D46C: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8002D470: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8002D474: lw          $ra, 0x0($v0)
    ctx->r31 = MEM_W(ctx->r2, 0X0);
    // 0x8002D478: addiu       $t5, $t5, -0xB40
    ctx->r13 = ADD32(ctx->r13, -0XB40);
    // 0x8002D47C: addiu       $t6, $v0, 0x1C
    ctx->r14 = ADD32(ctx->r2, 0X1C);
    // 0x8002D480: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8002D484: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8002D488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D48C: swc1        $f4, -0x42E0($at)
    MEM_W(-0X42E0, ctx->r1) = ctx->f4.u32l;
    // 0x8002D490: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002D494: lwc1        $f6, 0x5878($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5878);
    // 0x8002D498: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D49C: swc1        $f6, -0x42DC($at)
    MEM_W(-0X42DC, ctx->r1) = ctx->f6.u32l;
    // 0x8002D4A0: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8002D4A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D4A8: swc1        $f8, -0x42D8($at)
    MEM_W(-0X42D8, ctx->r1) = ctx->f8.u32l;
    // 0x8002D4AC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8002D4B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D4B4: swc1        $f10, -0x42D4($at)
    MEM_W(-0X42D4, ctx->r1) = ctx->f10.u32l;
    // 0x8002D4B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002D4BC: lwc1        $f16, 0x587C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X587C);
    // 0x8002D4C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D4C4: swc1        $f16, -0x42D0($at)
    MEM_W(-0X42D0, ctx->r1) = ctx->f16.u32l;
    // 0x8002D4C8: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8002D4CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D4D0: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8002D4D4: blez        $ra, L_8002D5B4
    if (SIGNED(ctx->r31) <= 0) {
        // 0x8002D4D8: swc1        $f18, -0x42CC($at)
        MEM_W(-0X42CC, ctx->r1) = ctx->f18.u32l;
            goto L_8002D5B4;
    }
    // 0x8002D4D8: swc1        $f18, -0x42CC($at)
    MEM_W(-0X42CC, ctx->r1) = ctx->f18.u32l;
    // 0x8002D4DC: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x8002D4E0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
L_8002D4E4:
    // 0x8002D4E4: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x8002D4E8: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8002D4EC: addu        $v0, $t7, $t3
    ctx->r2 = ADD32(ctx->r15, ctx->r11);
    // 0x8002D4F0: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x8002D4F4: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x8002D4F8: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8002D4FC: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x8002D500: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8002D504: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8002D508: addu        $v0, $t6, $t3
    ctx->r2 = ADD32(ctx->r14, ctx->r11);
    // 0x8002D50C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8002D510: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8002D514: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002D518: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D51C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x8002D520: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x8002D524: nop

    // 0x8002D528: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8002D52C: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8002D530: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8002D534: mflo        $t9
    ctx->r25 = lo;
    // 0x8002D538: nop

    // 0x8002D53C: nop

    // 0x8002D540: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D544: mflo        $t1
    ctx->r9 = lo;
    // 0x8002D548: blez        $t1, L_8002D5AC
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8002D54C: nop
    
            goto L_8002D5AC;
    }
    // 0x8002D54C: nop

L_8002D550:
    // 0x8002D550: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8002D554: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x8002D558: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8002D55C: addu        $a3, $t9, $t6
    ctx->r7 = ADD32(ctx->r25, ctx->r14);
    // 0x8002D560: sw          $a3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r7;
    // 0x8002D564: blez        $t7, L_8002D5A0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8002D568: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8002D5A0;
    }
    // 0x8002D568: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002D56C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8002D570:
    // 0x8002D570: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8002D574: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002D578: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D57C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002D580: mflo        $t9
    ctx->r25 = lo;
    // 0x8002D584: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x8002D588: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x8002D58C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8002D590: nop

    // 0x8002D594: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8002D598: bne         $at, $zero, L_8002D570
    if (ctx->r1 != 0) {
        // 0x8002D59C: nop
    
            goto L_8002D570;
    }
    // 0x8002D59C: nop

L_8002D5A0:
    // 0x8002D5A0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8002D5A4: bne         $t0, $t1, L_8002D550
    if (ctx->r8 != ctx->r9) {
        // 0x8002D5A8: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8002D550;
    }
    // 0x8002D5A8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002D5AC:
    // 0x8002D5AC: bne         $t4, $ra, L_8002D4E4
    if (ctx->r12 != ctx->r31) {
        // 0x8002D5B0: addiu       $t3, $t3, 0x24
        ctx->r11 = ADD32(ctx->r11, 0X24);
            goto L_8002D4E4;
    }
    // 0x8002D5B0: addiu       $t3, $t3, 0x24
    ctx->r11 = ADD32(ctx->r11, 0X24);
L_8002D5B4:
    // 0x8002D5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002D5B8:
    // 0x8002D5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D5BC: jr          $ra
    // 0x8002D5C0: nop

    return;
    // 0x8002D5C0: nop

;}
RECOMP_FUNC void func_8002D5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D5C4: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x8002D5C8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8002D5CC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8002D5D0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8002D5D4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8002D5D8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8002D5DC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8002D5E0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8002D5E4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8002D5E8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8002D5EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8002D5F0: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8002D5F4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8002D5F8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002D5FC: jal         0x8004B91C
    // 0x8002D600: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    func_8004B91C(rdram, ctx);
        goto after_0;
    // 0x8002D600: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8002D604: jal         0x8005CDDC
    // 0x8002D608: nop

    func_8005CDDC(rdram, ctx);
        goto after_1;
    // 0x8002D608: nop

    after_1:
    // 0x8002D60C: jal         0x8004BCA8
    // 0x8002D610: nop

    func_8004BCA8(rdram, ctx);
        goto after_2;
    // 0x8002D610: nop

    after_2:
    // 0x8002D614: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002D618: addiu       $a1, $a1, -0x948
    ctx->r5 = ADD32(ctx->r5, -0X948);
    // 0x8002D61C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x8002D620: sw          $t6, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r14;
    // 0x8002D624: jal         0x8004BA34
    // 0x8002D628: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8004BA34(rdram, ctx);
        goto after_3;
    // 0x8002D628: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8002D62C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002D630: lw          $a0, -0x41E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X41E4);
    // 0x8002D634: jal         0x80002F88
    // 0x8002D638: nop

    func_80002F88(rdram, ctx);
        goto after_4;
    // 0x8002D638: nop

    after_4:
    // 0x8002D63C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002D640: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8002D644: addiu       $s0, $s0, -0x4320
    ctx->r16 = ADD32(ctx->r16, -0X4320);
    // 0x8002D648: addiu       $a3, $a3, -0x4308
    ctx->r7 = ADD32(ctx->r7, -0X4308);
    // 0x8002D64C: addiu       $t7, $v0, 0x10
    ctx->r15 = ADD32(ctx->r2, 0X10);
    // 0x8002D650: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8002D654: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8002D658: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x8002D65C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D660: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8002D664: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002D668: sw          $t7, -0x4304($at)
    MEM_W(-0X4304, ctx->r1) = ctx->r15;
    // 0x8002D66C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8002D670: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x8002D674: jal         0x8001D138
    // 0x8002D678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x8002D678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8002D67C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8002D680: addiu       $s1, $s1, -0x42F0
    ctx->r17 = ADD32(ctx->r17, -0X42F0);
    // 0x8002D684: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002D688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002D68C: jal         0x800188F0
    // 0x8002D690: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800188F0(rdram, ctx);
        goto after_6;
    // 0x8002D690: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_6:
    // 0x8002D694: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8002D698: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8002D69C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8002D6A0: jal         0x8001C468
    // 0x8002D6A4: nop

    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x8002D6A4: nop

    after_7:
    // 0x8002D6A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D6AC: sw          $v0, -0x42EC($at)
    MEM_W(-0X42EC, ctx->r1) = ctx->r2;
    // 0x8002D6B0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8002D6B4: nop

    // 0x8002D6B8: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x8002D6BC: jal         0x8002D418
    // 0x8002D6C0: nop

    func_8002D418(rdram, ctx);
        goto after_8;
    // 0x8002D6C0: nop

    after_8:
    // 0x8002D6C4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8002D6C8: lw          $s5, -0x41E4($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X41E4);
    // 0x8002D6CC: jal         0x8002D09C
    // 0x8002D6D0: nop

    func_8002D09C(rdram, ctx);
        goto after_9;
    // 0x8002D6D0: nop

    after_9:
    // 0x8002D6D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002D6D8: lw          $v0, -0x41E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41E4);
    // 0x8002D6DC: addiu       $at, $zero, 0x811
    ctx->r1 = ADD32(0, 0X811);
    // 0x8002D6E0: addiu       $s0, $zero, 0x932
    ctx->r16 = ADD32(0, 0X932);
    // 0x8002D6E4: beq         $v0, $at, L_8002D778
    if (ctx->r2 == ctx->r1) {
        // 0x8002D6E8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8002D778;
    }
    // 0x8002D6E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002D6EC: addiu       $at, $zero, 0x812
    ctx->r1 = ADD32(0, 0X812);
    // 0x8002D6F0: beq         $v0, $at, L_8002D778
    if (ctx->r2 == ctx->r1) {
        // 0x8002D6F4: addiu       $at, $zero, 0x814
        ctx->r1 = ADD32(0, 0X814);
            goto L_8002D778;
    }
    // 0x8002D6F4: addiu       $at, $zero, 0x814
    ctx->r1 = ADD32(0, 0X814);
    // 0x8002D6F8: beq         $v0, $at, L_8002D778
    if (ctx->r2 == ctx->r1) {
        // 0x8002D6FC: addiu       $at, $zero, 0x81C
        ctx->r1 = ADD32(0, 0X81C);
            goto L_8002D778;
    }
    // 0x8002D6FC: addiu       $at, $zero, 0x81C
    ctx->r1 = ADD32(0, 0X81C);
    // 0x8002D700: beq         $v0, $at, L_8002D778
    if (ctx->r2 == ctx->r1) {
        // 0x8002D704: addiu       $at, $zero, 0x81E
        ctx->r1 = ADD32(0, 0X81E);
            goto L_8002D778;
    }
    // 0x8002D704: addiu       $at, $zero, 0x81E
    ctx->r1 = ADD32(0, 0X81E);
    // 0x8002D708: beq         $v0, $at, L_8002D778
    if (ctx->r2 == ctx->r1) {
        // 0x8002D70C: addiu       $at, $zero, 0x820
        ctx->r1 = ADD32(0, 0X820);
            goto L_8002D778;
    }
    // 0x8002D70C: addiu       $at, $zero, 0x820
    ctx->r1 = ADD32(0, 0X820);
    // 0x8002D710: beq         $v0, $at, L_8002D778
    if (ctx->r2 == ctx->r1) {
        // 0x8002D714: addiu       $at, $zero, 0x816
        ctx->r1 = ADD32(0, 0X816);
            goto L_8002D778;
    }
    // 0x8002D714: addiu       $at, $zero, 0x816
    ctx->r1 = ADD32(0, 0X816);
    // 0x8002D718: beq         $v0, $at, L_8002D730
    if (ctx->r2 == ctx->r1) {
        // 0x8002D71C: addiu       $at, $zero, 0x818
        ctx->r1 = ADD32(0, 0X818);
            goto L_8002D730;
    }
    // 0x8002D71C: addiu       $at, $zero, 0x818
    ctx->r1 = ADD32(0, 0X818);
    // 0x8002D720: beq         $v0, $at, L_8002D730
    if (ctx->r2 == ctx->r1) {
        // 0x8002D724: addiu       $at, $zero, 0x819
        ctx->r1 = ADD32(0, 0X819);
            goto L_8002D730;
    }
    // 0x8002D724: addiu       $at, $zero, 0x819
    ctx->r1 = ADD32(0, 0X819);
    // 0x8002D728: bne         $v0, $at, L_8002D73C
    if (ctx->r2 != ctx->r1) {
        // 0x8002D72C: addiu       $at, $zero, 0x815
        ctx->r1 = ADD32(0, 0X815);
            goto L_8002D73C;
    }
    // 0x8002D72C: addiu       $at, $zero, 0x815
    ctx->r1 = ADD32(0, 0X815);
L_8002D730:
    // 0x8002D730: b           L_8002D778
    // 0x8002D734: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_8002D778;
    // 0x8002D734: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8002D738: addiu       $at, $zero, 0x815
    ctx->r1 = ADD32(0, 0X815);
L_8002D73C:
    // 0x8002D73C: beq         $v0, $at, L_8002D74C
    if (ctx->r2 == ctx->r1) {
        // 0x8002D740: addiu       $at, $zero, 0x81D
        ctx->r1 = ADD32(0, 0X81D);
            goto L_8002D74C;
    }
    // 0x8002D740: addiu       $at, $zero, 0x81D
    ctx->r1 = ADD32(0, 0X81D);
    // 0x8002D744: bne         $v0, $at, L_8002D758
    if (ctx->r2 != ctx->r1) {
        // 0x8002D748: addiu       $at, $zero, 0x817
        ctx->r1 = ADD32(0, 0X817);
            goto L_8002D758;
    }
    // 0x8002D748: addiu       $at, $zero, 0x817
    ctx->r1 = ADD32(0, 0X817);
L_8002D74C:
    // 0x8002D74C: b           L_8002D778
    // 0x8002D750: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_8002D778;
    // 0x8002D750: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8002D754: addiu       $at, $zero, 0x817
    ctx->r1 = ADD32(0, 0X817);
L_8002D758:
    // 0x8002D758: beq         $v0, $at, L_8002D76C
    if (ctx->r2 == ctx->r1) {
        // 0x8002D75C: addiu       $s0, $zero, 0xC00
        ctx->r16 = ADD32(0, 0XC00);
            goto L_8002D76C;
    }
    // 0x8002D75C: addiu       $s0, $zero, 0xC00
    ctx->r16 = ADD32(0, 0XC00);
    // 0x8002D760: addiu       $at, $zero, 0x81A
    ctx->r1 = ADD32(0, 0X81A);
    // 0x8002D764: bne         $v0, $at, L_8002D774
    if (ctx->r2 != ctx->r1) {
        // 0x8002D768: nop
    
            goto L_8002D774;
    }
    // 0x8002D768: nop

L_8002D76C:
    // 0x8002D76C: b           L_8002D778
    // 0x8002D770: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8002D778;
    // 0x8002D770: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8002D774:
    // 0x8002D774: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8002D778:
    // 0x8002D778: beq         $s0, $zero, L_8002D7CC
    if (ctx->r16 == 0) {
        // 0x8002D77C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8002D7CC;
    }
    // 0x8002D77C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D780: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x8002D784: addiu       $a3, $a3, -0x984
    ctx->r7 = ADD32(ctx->r7, -0X984);
    // 0x8002D788: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8002D78C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8002D790: jal         0x80019F10
    // 0x8002D794: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80019F10(rdram, ctx);
        goto after_10;
    // 0x8002D794: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_10:
    // 0x8002D798: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8002D79C: addiu       $s1, $s1, -0x904
    ctx->r17 = ADD32(ctx->r17, -0X904);
    // 0x8002D7A0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002D7A4: jal         0x80002F88
    // 0x8002D7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002F88(rdram, ctx);
        goto after_11;
    // 0x8002D7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8002D7AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002D7B0: sw          $v0, -0x908($at)
    MEM_W(-0X908, ctx->r1) = ctx->r2;
    // 0x8002D7B4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002D7B8: nop

    // 0x8002D7BC: lhu         $t6, 0x38($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X38);
    // 0x8002D7C0: nop

    // 0x8002D7C4: andi        $t7, $t6, 0xFBFF
    ctx->r15 = ctx->r14 & 0XFBFF;
    // 0x8002D7C8: sh          $t7, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r15;
L_8002D7CC:
    // 0x8002D7CC: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8002D7D0: addiu       $s6, $s6, -0xB38
    ctx->r22 = ADD32(ctx->r22, -0XB38);
    // 0x8002D7D4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8002D7D8: sw          $s1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r17;
    // 0x8002D7DC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002D7E0: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8002D7E4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8002D7E8: andi        $t8, $t9, 0x400
    ctx->r24 = ctx->r25 & 0X400;
    // 0x8002D7EC: beq         $t8, $zero, L_8002D8B0
    if (ctx->r24 == 0) {
        // 0x8002D7F0: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_8002D8B0;
    }
    // 0x8002D7F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8002D7F4: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8002D7F8: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x8002D7FC: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002D800: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8002D804: addiu       $s3, $s3, -0x5FF0
    ctx->r19 = ADD32(ctx->r19, -0X5FF0);
    // 0x8002D808: addiu       $s0, $s0, -0x840
    ctx->r16 = ADD32(ctx->r16, -0X840);
    // 0x8002D80C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002D810: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8002D814:
    // 0x8002D814: bne         $s5, $zero, L_8002D848
    if (ctx->r21 != 0) {
        // 0x8002D818: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_8002D848;
    }
    // 0x8002D818: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8002D81C: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x8002D820: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x8002D824: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8002D828: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8002D82C: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x8002D830: jal         0x80008F90
    // 0x8002D834: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80008F90(rdram, ctx);
        goto after_12;
    // 0x8002D834: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_12:
    // 0x8002D838: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8002D83C: lw          $t7, 0x120($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X120);
    // 0x8002D840: b           L_8002D880
    // 0x8002D844: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
        goto L_8002D880;
    // 0x8002D844: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
L_8002D848:
    // 0x8002D848: jal         0x80008FBC
    // 0x8002D84C: nop

    func_80008FBC(rdram, ctx);
        goto after_13;
    // 0x8002D84C: nop

    after_13:
    // 0x8002D850: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8002D854: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002D858: lw          $a1, 0x128($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X128);
    // 0x8002D85C: jal         0x80008E84
    // 0x8002D860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80008E84(rdram, ctx);
        goto after_14;
    // 0x8002D860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x8002D864: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x8002D868: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002D86C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8002D870: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8002D874: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x8002D878: jal         0x80008F90
    // 0x8002D87C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80008F90(rdram, ctx);
        goto after_15;
    // 0x8002D87C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_15:
L_8002D880:
    // 0x8002D880: lw          $t8, 0x4($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X4);
    // 0x8002D884: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8002D888: beq         $t8, $zero, L_8002D894
    if (ctx->r24 == 0) {
        // 0x8002D88C: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_8002D894;
    }
    // 0x8002D88C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8002D890: sw          $s2, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r18;
L_8002D894:
    // 0x8002D894: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002D898: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002D89C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8002D8A0: bne         $s2, $at, L_8002D814
    if (ctx->r18 != ctx->r1) {
        // 0x8002D8A4: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8002D814;
    }
    // 0x8002D8A4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8002D8A8: b           L_8002D8D8
    // 0x8002D8AC: nop

        goto L_8002D8D8;
    // 0x8002D8AC: nop

L_8002D8B0:
    // 0x8002D8B0: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x8002D8B4: addiu       $t6, $zero, 0xE4
    ctx->r14 = ADD32(0, 0XE4);
    // 0x8002D8B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002D8BC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8002D8C0: jal         0x80008F90
    // 0x8002D8C4: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
    func_80008F90(rdram, ctx);
        goto after_16;
    // 0x8002D8C4: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
    after_16:
    // 0x8002D8C8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8002D8CC: lw          $t7, 0x120($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X120);
    // 0x8002D8D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8002D8D4: sw          $t7, -0x5FF0($at)
    MEM_W(-0X5FF0, ctx->r1) = ctx->r15;
L_8002D8D8:
    // 0x8002D8D8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002D8DC: lw          $t9, -0x4258($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4258);
    // 0x8002D8E0: addiu       $v0, $sp, 0xA4
    ctx->r2 = ADD32(ctx->r29, 0XA4);
    // 0x8002D8E4: beq         $t9, $zero, L_8002D93C
    if (ctx->r25 == 0) {
        // 0x8002D8E8: addiu       $v1, $sp, 0xB4
        ctx->r3 = ADD32(ctx->r29, 0XB4);
            goto L_8002D93C;
    }
    // 0x8002D8E8: addiu       $v1, $sp, 0xB4
    ctx->r3 = ADD32(ctx->r29, 0XB4);
    // 0x8002D8EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D8F0: sw          $zero, -0x4118($at)
    MEM_W(-0X4118, ctx->r1) = 0;
    // 0x8002D8F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D8F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002D8FC: sw          $t6, -0x4114($at)
    MEM_W(-0X4114, ctx->r1) = ctx->r14;
    // 0x8002D900: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D904: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002D908: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002D90C: sw          $t9, -0x4110($at)
    MEM_W(-0X4110, ctx->r1) = ctx->r25;
    // 0x8002D910: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x8002D914: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8002D918: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002D91C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8002D920: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8002D924: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x8002D928: sw          $t6, -0x410C($at)
    MEM_W(-0X410C, ctx->r1) = ctx->r14;
    // 0x8002D92C: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x8002D930: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x8002D934: b           L_8002D9B8
    // 0x8002D938: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
        goto L_8002D9B8;
    // 0x8002D938: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
L_8002D93C:
    // 0x8002D93C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002D940: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8002D944: bne         $at, $zero, L_8002D93C
    if (ctx->r1 != 0) {
        // 0x8002D948: sw          $s1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r17;
            goto L_8002D93C;
    }
    // 0x8002D948: sw          $s1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r17;
    // 0x8002D94C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002D950: addiu       $s3, $s3, -0x4170
    ctx->r19 = ADD32(ctx->r19, -0X4170);
    // 0x8002D954: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002D958: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
L_8002D95C:
    // 0x8002D95C: jal         0x80028AB8
    // 0x8002D960: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80028AB8(rdram, ctx);
        goto after_17;
    // 0x8002D960: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_17:
    // 0x8002D964: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8002D968: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8002D96C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8002D970: nop

    // 0x8002D974: beq         $s1, $t7, L_8002D9A0
    if (ctx->r17 == ctx->r15) {
        // 0x8002D978: addu        $t8, $s3, $v1
        ctx->r24 = ADD32(ctx->r19, ctx->r3);
            goto L_8002D9A0;
    }
    // 0x8002D978: addu        $t8, $s3, $v1
    ctx->r24 = ADD32(ctx->r19, ctx->r3);
L_8002D97C:
    // 0x8002D97C: jal         0x80028AB8
    // 0x8002D980: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80028AB8(rdram, ctx);
        goto after_18;
    // 0x8002D980: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_18:
    // 0x8002D984: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8002D988: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8002D98C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8002D990: nop

    // 0x8002D994: bne         $s1, $t9, L_8002D97C
    if (ctx->r17 != ctx->r25) {
        // 0x8002D998: nop
    
            goto L_8002D97C;
    }
    // 0x8002D998: nop

    // 0x8002D99C: addu        $t8, $s3, $v1
    ctx->r24 = ADD32(ctx->r19, ctx->r3);
L_8002D9A0:
    // 0x8002D9A0: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8002D9A4: sw          $s2, 0x58($t8)
    MEM_W(0X58, ctx->r24) = ctx->r18;
    // 0x8002D9A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002D9AC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002D9B0: bne         $s2, $at, L_8002D95C
    if (ctx->r18 != ctx->r1) {
        // 0x8002D9B4: nop
    
            goto L_8002D95C;
    }
    // 0x8002D9B4: nop

L_8002D9B8:
    // 0x8002D9B8: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x8002D9BC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8002D9C0: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8002D9C4: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8002D9C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002D9CC: addiu       $a3, $a3, -0xB34
    ctx->r7 = ADD32(ctx->r7, -0XB34);
    // 0x8002D9D0: addiu       $t2, $t2, -0x4308
    ctx->r10 = ADD32(ctx->r10, -0X4308);
    // 0x8002D9D4: addiu       $t3, $t3, -0x4304
    ctx->r11 = ADD32(ctx->r11, -0X4304);
    // 0x8002D9D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002D9DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D9E0: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x8002D9E4: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
L_8002D9E8:
    // 0x8002D9E8: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x8002D9EC: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8002D9F0: addu        $t6, $a2, $a0
    ctx->r14 = ADD32(ctx->r6, ctx->r4);
    // 0x8002D9F4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8002D9F8: nop

    // 0x8002D9FC: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x8002DA00: addu        $t8, $a1, $t9
    ctx->r24 = ADD32(ctx->r5, ctx->r25);
    // 0x8002DA04: lw          $t6, 0x14($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X14);
    // 0x8002DA08: nop

    // 0x8002DA0C: bne         $s2, $t6, L_8002DA7C
    if (ctx->r18 != ctx->r14) {
        // 0x8002DA10: nop
    
            goto L_8002DA7C;
    }
    // 0x8002DA10: nop

    // 0x8002DA14: multu       $s2, $t0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DA18: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8002DA1C: addu        $t8, $s0, $t9
    ctx->r24 = ADD32(ctx->r16, ctx->r25);
    // 0x8002DA20: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x8002DA24: mflo        $t7
    ctx->r15 = lo;
    // 0x8002DA28: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x8002DA2C: nop

    // 0x8002DA30: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DA34: mflo        $t7
    ctx->r15 = lo;
    // 0x8002DA38: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x8002DA3C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8002DA40: nop

    // 0x8002DA44: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8002DA48: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x8002DA4C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8002DA50: nop

    // 0x8002DA54: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x8002DA58: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8002DA5C: nop

    // 0x8002DA60: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8002DA64: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x8002DA68: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002DA6C: nop

    // 0x8002DA70: sll         $t8, $t9, 5
    ctx->r24 = S32(ctx->r25 << 5);
    // 0x8002DA74: addu        $t6, $a1, $t8
    ctx->r14 = ADD32(ctx->r5, ctx->r24);
    // 0x8002DA78: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
L_8002DA7C:
    // 0x8002DA7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002DA80: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8002DA84: bne         $at, $zero, L_8002D9E8
    if (ctx->r1 != 0) {
        // 0x8002DA88: addiu       $a0, $a0, 0x4C
        ctx->r4 = ADD32(ctx->r4, 0X4C);
            goto L_8002D9E8;
    }
    // 0x8002DA88: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    // 0x8002DA8C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8002DA90: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8002DA94: jal         0x80040438
    // 0x8002DA98: sw          $t7, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r15;
    func_80040438(rdram, ctx);
        goto after_19;
    // 0x8002DA98: sw          $t7, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r15;
    after_19:
    // 0x8002DA9C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002DAA0: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x8002DAA4: addiu       $s5, $s5, -0x6020
    ctx->r21 = ADD32(ctx->r21, -0X6020);
    // 0x8002DAA8: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8002DAAC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002DAB0: addiu       $s6, $sp, 0x74
    ctx->r22 = ADD32(ctx->r29, 0X74);
L_8002DAB4:
    // 0x8002DAB4: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8002DAB8: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x8002DABC: beq         $v0, $zero, L_8002DC10
    if (ctx->r2 == 0) {
        // 0x8002DAC0: subu        $t9, $t9, $s2
        ctx->r25 = SUB32(ctx->r25, ctx->r18);
            goto L_8002DC10;
    }
    // 0x8002DAC0: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x8002DAC4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002DAC8: addiu       $t8, $t8, -0xB34
    ctx->r24 = ADD32(ctx->r24, -0XB34);
    // 0x8002DACC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002DAD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002DAD4: sw          $s3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r19;
    // 0x8002DAD8: bne         $v0, $at, L_8002DAEC
    if (ctx->r2 != ctx->r1) {
        // 0x8002DADC: addu        $v1, $t9, $t8
        ctx->r3 = ADD32(ctx->r25, ctx->r24);
            goto L_8002DAEC;
    }
    // 0x8002DADC: addu        $v1, $t9, $t8
    ctx->r3 = ADD32(ctx->r25, ctx->r24);
    // 0x8002DAE0: addiu       $t6, $s2, 0x6
    ctx->r14 = ADD32(ctx->r18, 0X6);
    // 0x8002DAE4: b           L_8002DB08
    // 0x8002DAE8: sw          $t6, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r14;
        goto L_8002DB08;
    // 0x8002DAE8: sw          $t6, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r14;
L_8002DAEC:
    // 0x8002DAEC: lw          $t7, 0x14($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X14);
    // 0x8002DAF0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002DAF4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8002DAF8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8002DAFC: lw          $t8, -0x800($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X800);
    // 0x8002DB00: nop

    // 0x8002DB04: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
L_8002DB08:
    // 0x8002DB08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8002DB0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002DB10: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x8002DB14: jal         0x8004A0A0
    // 0x8002DB18: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    func_8004A0A0(rdram, ctx);
        goto after_20;
    // 0x8002DB18: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    after_20:
    // 0x8002DB1C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x8002DB20: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x8002DB24: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8002DB28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002DB2C: sw          $zero, 0xC8($s4)
    MEM_W(0XC8, ctx->r20) = 0;
    // 0x8002DB30: bne         $t7, $at, L_8002DB50
    if (ctx->r15 != ctx->r1) {
        // 0x8002DB34: sw          $t6, 0xFC($s4)
        MEM_W(0XFC, ctx->r20) = ctx->r14;
            goto L_8002DB50;
    }
    // 0x8002DB34: sw          $t6, 0xFC($s4)
    MEM_W(0XFC, ctx->r20) = ctx->r14;
    // 0x8002DB38: jal         0x80040508
    // 0x8002DB3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80040508(rdram, ctx);
        goto after_21;
    // 0x8002DB3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_21:
    // 0x8002DB40: jal         0x800404E8
    // 0x8002DB44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800404E8(rdram, ctx);
        goto after_22;
    // 0x8002DB44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_22:
    // 0x8002DB48: b           L_8002DC14
    // 0x8002DB4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8002DC14;
    // 0x8002DB4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8002DB50:
    // 0x8002DB50: jal         0x8002D000
    // 0x8002DB54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8002D000(rdram, ctx);
        goto after_23;
    // 0x8002DB54: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_23:
    // 0x8002DB58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002DB5C: jal         0x8005B0A0
    // 0x8002DB60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005B0A0(rdram, ctx);
        goto after_24;
    // 0x8002DB60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x8002DB64: lw          $t9, 0x4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X4);
    // 0x8002DB68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002DB6C: bne         $t9, $at, L_8002DC10
    if (ctx->r25 != ctx->r1) {
        // 0x8002DB70: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8002DC10;
    }
    // 0x8002DB70: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002DB74: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8002DB78: sll         $t7, $s2, 4
    ctx->r15 = S32(ctx->r18 << 4);
    // 0x8002DB7C: andi        $t6, $t8, 0x8000
    ctx->r14 = ctx->r24 & 0X8000;
    // 0x8002DB80: bne         $t6, $zero, L_8002DC10
    if (ctx->r14 != 0) {
        // 0x8002DB84: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_8002DC10;
    }
    // 0x8002DB84: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002DB88: addiu       $t9, $t9, -0x4298
    ctx->r25 = ADD32(ctx->r25, -0X4298);
    // 0x8002DB8C: addu        $s0, $t7, $t9
    ctx->r16 = ADD32(ctx->r15, ctx->r25);
    // 0x8002DB90: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x8002DB94: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8002DB98: beq         $s1, $v0, L_8002DBB0
    if (ctx->r17 == ctx->r2) {
        // 0x8002DB9C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002DBB0;
    }
    // 0x8002DB9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002DBA0: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8002DBA4: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8002DBA8: jal         0x8005BE2C
    // 0x8002DBAC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_25;
    // 0x8002DBAC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_25:
L_8002DBB0:
    // 0x8002DBB0: lw          $v0, 0x58($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X58);
    // 0x8002DBB4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8002DBB8: beq         $s1, $v0, L_8002DBD0
    if (ctx->r17 == ctx->r2) {
        // 0x8002DBBC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002DBD0;
    }
    // 0x8002DBBC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002DBC0: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x8002DBC4: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8002DBC8: jal         0x8005BE2C
    // 0x8002DBCC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_26;
    // 0x8002DBCC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_26:
L_8002DBD0:
    // 0x8002DBD0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x8002DBD4: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8002DBD8: beq         $s1, $v0, L_8002DBF0
    if (ctx->r17 == ctx->r2) {
        // 0x8002DBDC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002DBF0;
    }
    // 0x8002DBDC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002DBE0: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x8002DBE4: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8002DBE8: jal         0x8005BE2C
    // 0x8002DBEC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_27;
    // 0x8002DBEC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_27:
L_8002DBF0:
    // 0x8002DBF0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x8002DBF4: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x8002DBF8: beq         $s1, $v0, L_8002DC10
    if (ctx->r17 == ctx->r2) {
        // 0x8002DBFC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002DC10;
    }
    // 0x8002DBFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002DC00: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x8002DC04: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8002DC08: jal         0x8005BE2C
    // 0x8002DC0C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_28;
    // 0x8002DC0C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_28:
L_8002DC10:
    // 0x8002DC10: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8002DC14:
    // 0x8002DC14: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8002DC18: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8002DC1C: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x8002DC20: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
    // 0x8002DC24: bne         $at, $zero, L_8002DAB4
    if (ctx->r1 != 0) {
        // 0x8002DC28: sw          $zero, -0x8($s5)
        MEM_W(-0X8, ctx->r21) = 0;
            goto L_8002DAB4;
    }
    // 0x8002DC28: sw          $zero, -0x8($s5)
    MEM_W(-0X8, ctx->r21) = 0;
    // 0x8002DC2C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002DC30: lw          $t8, -0x4298($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4298);
    // 0x8002DC34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002DC38: bne         $t8, $at, L_8002DC48
    if (ctx->r24 != ctx->r1) {
        // 0x8002DC3C: nop
    
            goto L_8002DC48;
    }
    // 0x8002DC3C: nop

    // 0x8002DC40: jal         0x8002CE2C
    // 0x8002DC44: nop

    func_8002CE2C(rdram, ctx);
        goto after_29;
    // 0x8002DC44: nop

    after_29:
L_8002DC48:
    // 0x8002DC48: jal         0x8002CAE0
    // 0x8002DC4C: nop

    func_8002CAE0(rdram, ctx);
        goto after_30;
    // 0x8002DC4C: nop

    after_30:
    // 0x8002DC50: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002DC54: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x8002DC58: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002DC5C: bne         $t6, $zero, L_8002DC90
    if (ctx->r14 != 0) {
        // 0x8002DC60: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_8002DC90;
    }
    // 0x8002DC60: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8002DC64: lw          $t7, -0x4178($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4178);
    // 0x8002DC68: nop

    // 0x8002DC6C: bne         $t7, $zero, L_8002DC84
    if (ctx->r15 != 0) {
        // 0x8002DC70: nop
    
            goto L_8002DC84;
    }
    // 0x8002DC70: nop

    // 0x8002DC74: jal         0x80059A94
    // 0x8002DC78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80059A94(rdram, ctx);
        goto after_31;
    // 0x8002DC78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_31:
    // 0x8002DC7C: b           L_8002DC90
    // 0x8002DC80: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
        goto L_8002DC90;
    // 0x8002DC80: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_8002DC84:
    // 0x8002DC84: jal         0x80059A94
    // 0x8002DC88: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80059A94(rdram, ctx);
        goto after_32;
    // 0x8002DC88: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_32:
    // 0x8002DC8C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_8002DC90:
    // 0x8002DC90: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x8002DC94: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8002DC98: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8002DC9C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8002DCA0: addiu       $s6, $s6, -0xB44
    ctx->r22 = ADD32(ctx->r22, -0XB44);
    // 0x8002DCA4: addiu       $s3, $s3, -0x5FF0
    ctx->r19 = ADD32(ctx->r19, -0X5FF0);
    // 0x8002DCA8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8002DCAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8002DCB0:
    // 0x8002DCB0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002DCB4: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8002DCB8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002DCBC: andi        $t8, $t9, 0x400
    ctx->r24 = ctx->r25 & 0X400;
    // 0x8002DCC0: beq         $t8, $zero, L_8002DD3C
    if (ctx->r24 == 0) {
        // 0x8002DCC4: addiu       $t6, $t6, -0x4298
        ctx->r14 = ADD32(ctx->r14, -0X4298);
            goto L_8002DD3C;
    }
    // 0x8002DCC4: addiu       $t6, $t6, -0x4298
    ctx->r14 = ADD32(ctx->r14, -0X4298);
    // 0x8002DCC8: addu        $s4, $s0, $t6
    ctx->r20 = ADD32(ctx->r16, ctx->r14);
    // 0x8002DCCC: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x8002DCD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DCD4: beq         $t7, $zero, L_8002DD3C
    if (ctx->r15 == 0) {
        // 0x8002DCD8: addiu       $a1, $sp, 0xDC
        ctx->r5 = ADD32(ctx->r29, 0XDC);
            goto L_8002DD3C;
    }
    // 0x8002DCD8: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    // 0x8002DCDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002DCE0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002DCE4: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    // 0x8002DCE8: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x8002DCEC: swc1        $f22, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f22.u32l;
    // 0x8002DCF0: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x8002DCF4: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x8002DCF8: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x8002DCFC: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8002DD00: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x8002DD04: addiu       $a2, $sp, 0xD0
    ctx->r6 = ADD32(ctx->r29, 0XD0);
    // 0x8002DD08: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x8002DD0C: jal         0x80009C2C
    // 0x8002DD10: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    func_80009C2C(rdram, ctx);
        goto after_33;
    // 0x8002DD10: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    after_33:
    // 0x8002DD14: lw          $t0, 0xFC($s4)
    ctx->r8 = MEM_W(ctx->r20, 0XFC);
    // 0x8002DD18: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x8002DD1C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8002DD20: jal         0x8002BC98
    // 0x8002DD24: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    func_8002BC98(rdram, ctx);
        goto after_34;
    // 0x8002DD24: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    after_34:
    // 0x8002DD28: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x8002DD2C: jal         0x8002B934
    // 0x8002DD30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8002B934(rdram, ctx);
        goto after_35;
    // 0x8002DD30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_35:
    // 0x8002DD34: b           L_8002DE04
    // 0x8002DD38: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8002DE04;
    // 0x8002DD38: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8002DD3C:
    // 0x8002DD3C: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x8002DD40: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    // 0x8002DD44: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x8002DD48: swc1        $f22, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f22.u32l;
    // 0x8002DD4C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8002DD50: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8002DD54: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002DD58: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8002DD5C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8002DD60: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x8002DD64: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8002DD68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DD6C: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8002DD70: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x8002DD74: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8002DD78: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8002DD7C: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x8002DD80: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8002DD84: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8002DD88: addiu       $t8, $t8, -0x6020
    ctx->r24 = ADD32(ctx->r24, -0X6020);
    // 0x8002DD8C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8002DD90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002DD94: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8002DD98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002DD9C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002DDA0: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x8002DDA4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8002DDA8: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8002DDAC: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x8002DDB0: addu        $s5, $t9, $t8
    ctx->r21 = ADD32(ctx->r25, ctx->r24);
    // 0x8002DDB4: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    // 0x8002DDB8: addiu       $a2, $sp, 0xD0
    ctx->r6 = ADD32(ctx->r29, 0XD0);
    // 0x8002DDBC: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x8002DDC0: jal         0x80009C2C
    // 0x8002DDC4: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    func_80009C2C(rdram, ctx);
        goto after_36;
    // 0x8002DDC4: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    after_36:
    // 0x8002DDC8: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x8002DDCC: jal         0x8002B934
    // 0x8002DDD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8002B934(rdram, ctx);
        goto after_37;
    // 0x8002DDD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_37:
    // 0x8002DDD4: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x8002DDD8: jal         0x80009D90
    // 0x8002DDDC: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    func_80009D90(rdram, ctx);
        goto after_38;
    // 0x8002DDDC: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_38:
    // 0x8002DDE0: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x8002DDE4: jal         0x80009DFC
    // 0x8002DDE8: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    func_80009DFC(rdram, ctx);
        goto after_39;
    // 0x8002DDE8: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_39:
    // 0x8002DDEC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002DDF0: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8002DDF4: nop

    // 0x8002DDF8: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8002DDFC: beq         $t7, $zero, L_8002DE14
    if (ctx->r15 == 0) {
        // 0x8002DE00: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8002DE14;
    }
    // 0x8002DE00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8002DE04:
    // 0x8002DE04: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002DE08: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002DE0C: bne         $s2, $at, L_8002DCB0
    if (ctx->r18 != ctx->r1) {
        // 0x8002DE10: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8002DCB0;
    }
    // 0x8002DE10: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_8002DE14:
    // 0x8002DE14: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8002DE18: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8002DE1C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002DE20: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8002DE24: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002DE28: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8002DE2C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8002DE30: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8002DE34: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8002DE38: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8002DE3C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8002DE40: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8002DE44: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8002DE48: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8002DE4C: jr          $ra
    // 0x8002DE50: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x8002DE50: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_8002DE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DE54: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8002DE58: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002DE5C: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8002DE60: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8002DE64: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8002DE68: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8002DE6C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002DE70: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002DE74: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8002DE78: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8002DE7C: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8002DE80: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8002DE84: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002DE88: bne         $t7, $zero, L_8002DE98
    if (ctx->r15 != 0) {
        // 0x8002DE8C: swc1        $f20, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
            goto L_8002DE98;
    }
    // 0x8002DE8C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8002DE90: jal         0x80040678
    // 0x8002DE94: nop

    func_80040678(rdram, ctx);
        goto after_0;
    // 0x8002DE94: nop

    after_0:
L_8002DE98:
    // 0x8002DE98: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DE9C: lw          $a0, -0xB34($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB34);
    // 0x8002DEA0: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8002DEA4: jal         0x8004A0A0
    // 0x8002DEA8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8002DEA8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x8002DEAC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DEB0: lw          $a0, -0x910($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X910);
    // 0x8002DEB4: nop

    // 0x8002DEB8: beq         $a0, $zero, L_8002DEE0
    if (ctx->r4 == 0) {
        // 0x8002DEBC: nop
    
            goto L_8002DEE0;
    }
    // 0x8002DEBC: nop

    // 0x8002DEC0: jal         0x800075A0
    // 0x8002DEC4: nop

    func_800075A0(rdram, ctx);
        goto after_2;
    // 0x8002DEC4: nop

    after_2:
    // 0x8002DEC8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8002DECC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002DED0: sw          $zero, -0x910($at)
    MEM_W(-0X910, ctx->r1) = 0;
    // 0x8002DED4: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x8002DED8: jal         0x8002B0A4
    // 0x8002DEDC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    func_8002B0A4(rdram, ctx);
        goto after_3;
    // 0x8002DEDC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    after_3:
L_8002DEE0:
    // 0x8002DEE0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002DEE4: addiu       $v0, $v0, -0x6020
    ctx->r2 = ADD32(ctx->r2, -0X6020);
    // 0x8002DEE8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8002DEEC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8002DEF0: jal         0x80009D28
    // 0x8002DEF4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80009D28(rdram, ctx);
        goto after_4;
    // 0x8002DEF4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_4:
    // 0x8002DEF8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002DEFC: addiu       $v0, $v0, -0x6020
    ctx->r2 = ADD32(ctx->r2, -0X6020);
    // 0x8002DF00: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x8002DF04: jal         0x800075A0
    // 0x8002DF08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_800075A0(rdram, ctx);
        goto after_5;
    // 0x8002DF08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_5:
    // 0x8002DF0C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8002DF10: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8002DF14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002DF18: lwc1        $f14, 0x5880($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5880);
    // 0x8002DF1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DF20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002DF24: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x8002DF28: lui         $a3, 0x45FA
    ctx->r7 = S32(0X45FA << 16);
    // 0x8002DF2C: jal         0x80008E30
    // 0x8002DF30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80008E30(rdram, ctx);
        goto after_6;
    // 0x8002DF30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x8002DF34: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002DF38: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002DF3C: jal         0x8001C568
    // 0x8002DF40: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x8002DF40: nop

    after_7:
    // 0x8002DF44: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002DF48: lw          $a0, -0x4320($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4320);
    // 0x8002DF4C: jal         0x80002C10
    // 0x8002DF50: nop

    func_80002C10(rdram, ctx);
        goto after_8;
    // 0x8002DF50: nop

    after_8:
    // 0x8002DF54: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DF58: lw          $a0, -0x904($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X904);
    // 0x8002DF5C: nop

    // 0x8002DF60: beq         $a0, $zero, L_8002DF8C
    if (ctx->r4 == 0) {
        // 0x8002DF64: nop
    
            goto L_8002DF8C;
    }
    // 0x8002DF64: nop

    // 0x8002DF68: jal         0x800195C4
    // 0x8002DF6C: nop

    func_800195C4(rdram, ctx);
        goto after_9;
    // 0x8002DF6C: nop

    after_9:
    // 0x8002DF70: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DF74: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002DF78: lw          $a0, -0x908($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X908);
    // 0x8002DF7C: jal         0x80002C10
    // 0x8002DF80: sw          $zero, -0x904($at)
    MEM_W(-0X904, ctx->r1) = 0;
    func_80002C10(rdram, ctx);
        goto after_10;
    // 0x8002DF80: sw          $zero, -0x904($at)
    MEM_W(-0X904, ctx->r1) = 0;
    after_10:
    // 0x8002DF84: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002DF88: sw          $zero, -0x908($at)
    MEM_W(-0X908, ctx->r1) = 0;
L_8002DF8C:
    // 0x8002DF8C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002DF90: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8002DF94: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8002DF98: andi        $t6, $t9, 0x20
    ctx->r14 = ctx->r25 & 0X20;
    // 0x8002DF9C: beq         $t6, $zero, L_8002DFB4
    if (ctx->r14 == 0) {
        // 0x8002DFA0: nop
    
            goto L_8002DFB4;
    }
    // 0x8002DFA0: nop

    // 0x8002DFA4: jal         0x80051418
    // 0x8002DFA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80051418(rdram, ctx);
        goto after_11;
    // 0x8002DFA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x8002DFAC: jal         0x80050FE8
    // 0x8002DFB0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80050FE8(rdram, ctx);
        goto after_12;
    // 0x8002DFB0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
L_8002DFB4:
    // 0x8002DFB4: jal         0x8004B874
    // 0x8002DFB8: nop

    func_8004B874(rdram, ctx);
        goto after_13;
    // 0x8002DFB8: nop

    after_13:
    // 0x8002DFBC: jal         0x8005CC10
    // 0x8002DFC0: nop

    func_8005CC10(rdram, ctx);
        goto after_14;
    // 0x8002DFC0: nop

    after_14:
    // 0x8002DFC4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DFC8: lw          $a0, -0xB44($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB44);
    // 0x8002DFCC: nop

    // 0x8002DFD0: beq         $a0, $zero, L_8002DFE8
    if (ctx->r4 == 0) {
        // 0x8002DFD4: nop
    
            goto L_8002DFE8;
    }
    // 0x8002DFD4: nop

    // 0x8002DFD8: jal         0x80002C10
    // 0x8002DFDC: nop

    func_80002C10(rdram, ctx);
        goto after_15;
    // 0x8002DFDC: nop

    after_15:
    // 0x8002DFE0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002DFE4: sw          $zero, -0xB44($at)
    MEM_W(-0XB44, ctx->r1) = 0;
L_8002DFE8:
    // 0x8002DFE8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DFEC: lw          $a0, -0xB50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB50);
    // 0x8002DFF0: jal         0x80006DC0
    // 0x8002DFF4: nop

    func_80006DC0(rdram, ctx);
        goto after_16;
    // 0x8002DFF4: nop

    after_16:
    // 0x8002DFF8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002DFFC: lw          $a0, -0xB4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB4C);
    // 0x8002E000: jal         0x80006DC0
    // 0x8002E004: nop

    func_80006DC0(rdram, ctx);
        goto after_17;
    // 0x8002E004: nop

    after_17:
    // 0x8002E008: jal         0x8002AFB4
    // 0x8002E00C: nop

    func_8002AFB4(rdram, ctx);
        goto after_18;
    // 0x8002E00C: nop

    after_18:
    // 0x8002E010: jal         0x8002AF60
    // 0x8002E014: nop

    func_8002AF60(rdram, ctx);
        goto after_19;
    // 0x8002E014: nop

    after_19:
    // 0x8002E018: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8002E01C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8002E020: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002E024: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8002E028: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002E02C: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8002E030: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002E034: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002E038: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002E03C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002E040: jr          $ra
    // 0x8002E044: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8002E044: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8002E048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002E04C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E050: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002E054: beq         $a1, $zero, L_8002E098
    if (ctx->r5 == 0) {
        // 0x8002E058: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8002E098;
    }
    // 0x8002E058: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002E05C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E060: bne         $a0, $at, L_8002E080
    if (ctx->r4 != ctx->r1) {
        // 0x8002E064: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8002E080;
    }
    // 0x8002E064: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8002E068: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002E06C: lw          $t6, -0x4320($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4320);
    // 0x8002E070: nop

    // 0x8002E074: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8002E078: b           L_8002E080
    // 0x8002E07C: nop

        goto L_8002E080;
    // 0x8002E07C: nop

L_8002E080:
    // 0x8002E080: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002E084: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002E088: jal         0x8001C468
    // 0x8002E08C: nop

    func_8001C468(rdram, ctx);
        goto after_0;
    // 0x8002E08C: nop

    after_0:
    // 0x8002E090: b           L_8002E0B4
    // 0x8002E094: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8002E0B4;
    // 0x8002E094: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8002E098:
    // 0x8002E098: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002E09C: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002E0A0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8002E0A4: jal         0x8001C424
    // 0x8002E0A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8001C424(rdram, ctx);
        goto after_1;
    // 0x8002E0A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8002E0AC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E0B0: nop

L_8002E0B4:
    // 0x8002E0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E0B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002E0BC: jr          $ra
    // 0x8002E0C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002E0C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8002E0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E0C4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8002E0C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8002E0CC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8002E0D0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8002E0D4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8002E0D8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8002E0DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8002E0E0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8002E0E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8002E0E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8002E0EC: jal         0x8004B91C
    // 0x8002E0F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_8004B91C(rdram, ctx);
        goto after_0;
    // 0x8002E0F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002E0F4: jal         0x8005CDDC
    // 0x8002E0F8: nop

    func_8005CDDC(rdram, ctx);
        goto after_1;
    // 0x8002E0F8: nop

    after_1:
    // 0x8002E0FC: jal         0x8004BCA8
    // 0x8002E100: nop

    func_8004BCA8(rdram, ctx);
        goto after_2;
    // 0x8002E100: nop

    after_2:
    // 0x8002E104: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002E108: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8002E10C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002E110: nop

    // 0x8002E114: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8002E118: beq         $t7, $zero, L_8002E148
    if (ctx->r15 == 0) {
        // 0x8002E11C: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_8002E148;
    }
    // 0x8002E11C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002E120: addiu       $a1, $a1, -0x948
    ctx->r5 = ADD32(ctx->r5, -0X948);
    // 0x8002E124: jal         0x8004BA34
    // 0x8002E128: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8004BA34(rdram, ctx);
        goto after_3;
    // 0x8002E128: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
    // 0x8002E12C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002E130: lw          $a1, -0x42B8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X42B8);
    // 0x8002E134: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8002E138: jal         0x800516BC
    // 0x8002E13C: addiu       $a1, $a1, -0x8AA
    ctx->r5 = ADD32(ctx->r5, -0X8AA);
    func_800516BC(rdram, ctx);
        goto after_4;
    // 0x8002E13C: addiu       $a1, $a1, -0x8AA
    ctx->r5 = ADD32(ctx->r5, -0X8AA);
    after_4:
    // 0x8002E140: b           L_8002E164
    // 0x8002E144: nop

        goto L_8002E164;
    // 0x8002E144: nop

L_8002E148:
    // 0x8002E148: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8002E14C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002E150: addiu       $a1, $a1, -0x948
    ctx->r5 = ADD32(ctx->r5, -0X948);
    // 0x8002E154: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x8002E158: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
    // 0x8002E15C: jal         0x8004BA34
    // 0x8002E160: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8004BA34(rdram, ctx);
        goto after_5;
    // 0x8002E160: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
L_8002E164:
    // 0x8002E164: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002E168: lw          $a0, -0x42B8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42B8);
    // 0x8002E16C: jal         0x80002F88
    // 0x8002E170: nop

    func_80002F88(rdram, ctx);
        goto after_6;
    // 0x8002E170: nop

    after_6:
    // 0x8002E174: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002E178: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8002E17C: addiu       $t0, $t0, -0x4308
    ctx->r8 = ADD32(ctx->r8, -0X4308);
    // 0x8002E180: addiu       $a3, $a3, -0x4320
    ctx->r7 = ADD32(ctx->r7, -0X4320);
    // 0x8002E184: addiu       $t6, $v0, 0x10
    ctx->r14 = ADD32(ctx->r2, 0X10);
    // 0x8002E188: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x8002E18C: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8002E190: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002E194: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002E198: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8002E19C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8002E1A0: sw          $t6, -0x4304($at)
    MEM_W(-0X4304, ctx->r1) = ctx->r14;
    // 0x8002E1A4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8002E1A8: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x8002E1AC: jal         0x8001D138
    // 0x8002E1B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_7;
    // 0x8002E1B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8002E1B4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002E1B8: addiu       $v1, $v1, -0x42F0
    ctx->r3 = ADD32(ctx->r3, -0X42F0);
    // 0x8002E1BC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002E1C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002E1C4: jal         0x800188F0
    // 0x8002E1C8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800188F0(rdram, ctx);
        goto after_8;
    // 0x8002E1C8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_8:
    // 0x8002E1CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002E1D0: lw          $t8, -0x4320($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4320);
    // 0x8002E1D4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002E1D8: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002E1DC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8002E1E0: jal         0x8001C468
    // 0x8002E1E4: nop

    func_8001C468(rdram, ctx);
        goto after_9;
    // 0x8002E1E4: nop

    after_9:
    // 0x8002E1E8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002E1EC: lw          $t7, -0x4320($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4320);
    // 0x8002E1F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002E1F4: sw          $v0, -0x42EC($at)
    MEM_W(-0X42EC, ctx->r1) = ctx->r2;
    // 0x8002E1F8: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x8002E1FC: jal         0x8002D418
    // 0x8002E200: nop

    func_8002D418(rdram, ctx);
        goto after_10;
    // 0x8002E200: nop

    after_10:
    // 0x8002E204: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8002E208: lw          $s5, -0x42B8($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X42B8);
    // 0x8002E20C: jal         0x8002D09C
    // 0x8002E210: nop

    func_8002D09C(rdram, ctx);
        goto after_11;
    // 0x8002E210: nop

    after_11:
    // 0x8002E214: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8002E218: addiu       $t0, $t0, -0x42C0
    ctx->r8 = ADD32(ctx->r8, -0X42C0);
    // 0x8002E21C: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x8002E220: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x8002E224: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002E228: beq         $t9, $at, L_8002E270
    if (ctx->r25 == ctx->r1) {
        // 0x8002E22C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8002E270;
    }
    // 0x8002E22C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8002E230: addiu       $at, $zero, 0x85A
    ctx->r1 = ADD32(0, 0X85A);
    // 0x8002E234: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E238: addiu       $at, $zero, 0x8B1
        ctx->r1 = ADD32(0, 0X8B1);
            goto L_8002E270;
    }
    // 0x8002E238: addiu       $at, $zero, 0x8B1
    ctx->r1 = ADD32(0, 0X8B1);
    // 0x8002E23C: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E240: addiu       $at, $zero, 0x875
        ctx->r1 = ADD32(0, 0X875);
            goto L_8002E270;
    }
    // 0x8002E240: addiu       $at, $zero, 0x875
    ctx->r1 = ADD32(0, 0X875);
    // 0x8002E244: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E248: addiu       $at, $zero, 0x882
        ctx->r1 = ADD32(0, 0X882);
            goto L_8002E270;
    }
    // 0x8002E248: addiu       $at, $zero, 0x882
    ctx->r1 = ADD32(0, 0X882);
    // 0x8002E24C: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E250: addiu       $at, $zero, 0x884
        ctx->r1 = ADD32(0, 0X884);
            goto L_8002E270;
    }
    // 0x8002E250: addiu       $at, $zero, 0x884
    ctx->r1 = ADD32(0, 0X884);
    // 0x8002E254: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E258: addiu       $at, $zero, 0x874
        ctx->r1 = ADD32(0, 0X874);
            goto L_8002E270;
    }
    // 0x8002E258: addiu       $at, $zero, 0x874
    ctx->r1 = ADD32(0, 0X874);
    // 0x8002E25C: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E260: addiu       $at, $zero, 0x885
        ctx->r1 = ADD32(0, 0X885);
            goto L_8002E270;
    }
    // 0x8002E260: addiu       $at, $zero, 0x885
    ctx->r1 = ADD32(0, 0X885);
    // 0x8002E264: beq         $v0, $at, L_8002E270
    if (ctx->r2 == ctx->r1) {
        // 0x8002E268: addiu       $at, $zero, 0x8B0
        ctx->r1 = ADD32(0, 0X8B0);
            goto L_8002E270;
    }
    // 0x8002E268: addiu       $at, $zero, 0x8B0
    ctx->r1 = ADD32(0, 0X8B0);
    // 0x8002E26C: bne         $v0, $at, L_8002E2D4
    if (ctx->r2 != ctx->r1) {
        // 0x8002E270: addiu       $at, $zero, 0x8B1
        ctx->r1 = ADD32(0, 0X8B1);
            goto L_8002E2D4;
    }
L_8002E270:
    // 0x8002E270: addiu       $at, $zero, 0x8B1
    ctx->r1 = ADD32(0, 0X8B1);
    // 0x8002E274: bne         $v1, $at, L_8002E284
    if (ctx->r3 != ctx->r1) {
        // 0x8002E278: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8002E284;
    }
    // 0x8002E278: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002E27C: b           L_8002E288
    // 0x8002E280: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8002E288;
    // 0x8002E280: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8002E284:
    // 0x8002E284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E288:
    // 0x8002E288: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x8002E28C: addiu       $a3, $a3, -0x984
    ctx->r7 = ADD32(ctx->r7, -0X984);
    // 0x8002E290: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8002E294: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8002E298: jal         0x80019F10
    // 0x8002E29C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80019F10(rdram, ctx);
        goto after_12;
    // 0x8002E29C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_12:
    // 0x8002E2A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002E2A4: sw          $v0, -0x904($at)
    MEM_W(-0X904, ctx->r1) = ctx->r2;
    // 0x8002E2A8: jal         0x80002F88
    // 0x8002E2AC: addiu       $a0, $zero, 0x932
    ctx->r4 = ADD32(0, 0X932);
    func_80002F88(rdram, ctx);
        goto after_13;
    // 0x8002E2AC: addiu       $a0, $zero, 0x932
    ctx->r4 = ADD32(0, 0X932);
    after_13:
    // 0x8002E2B0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002E2B4: lw          $v1, -0x904($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X904);
    // 0x8002E2B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002E2BC: sw          $v0, -0x908($at)
    MEM_W(-0X908, ctx->r1) = ctx->r2;
    // 0x8002E2C0: lhu         $t6, 0x38($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X38);
    // 0x8002E2C4: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8002E2C8: andi        $t8, $t6, 0xFBFF
    ctx->r24 = ctx->r14 & 0XFBFF;
    // 0x8002E2CC: addiu       $t0, $t0, -0x42C0
    ctx->r8 = ADD32(ctx->r8, -0X42C0);
    // 0x8002E2D0: sh          $t8, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r24;
L_8002E2D4:
    // 0x8002E2D4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002E2D8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002E2DC: lw          $t7, -0x4320($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4320);
    // 0x8002E2E0: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x8002E2E4: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x8002E2E8: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x8002E2EC: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x8002E2F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002E2F4: blez        $a1, L_8002E390
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002E2F8: mov.s       $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
            goto L_8002E390;
    }
    // 0x8002E2F8: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x8002E2FC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8002E300: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002E304: lw          $v0, -0x4304($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4304);
    // 0x8002E308: lw          $a2, -0x4308($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4308);
    // 0x8002E30C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
L_8002E310:
    // 0x8002E310: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002E314: nop

    // 0x8002E318: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8002E31C: addu        $v1, $a2, $t6
    ctx->r3 = ADD32(ctx->r6, ctx->r14);
    // 0x8002E320: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8002E324: nop

    // 0x8002E328: bne         $a3, $t8, L_8002E380
    if (ctx->r7 != ctx->r24) {
        // 0x8002E32C: nop
    
            goto L_8002E380;
    }
    // 0x8002E32C: nop

    // 0x8002E330: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x8002E334: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8002E338: nop

    // 0x8002E33C: bne         $t7, $t9, L_8002E380
    if (ctx->r15 != ctx->r25) {
        // 0x8002E340: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_8002E380;
    }
    // 0x8002E340: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002E344: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8002E348: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8002E34C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8002E350: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8002E354: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8002E358: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x8002E35C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8002E360: nop

    // 0x8002E364: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x8002E368: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8002E36C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8002E370: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8002E374: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002E378: b           L_8002E390
    // 0x8002E37C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
        goto L_8002E390;
    // 0x8002E37C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
L_8002E380:
    // 0x8002E380: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002E384: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8002E388: bne         $at, $zero, L_8002E310
    if (ctx->r1 != 0) {
        // 0x8002E38C: addiu       $v0, $v0, 0x4C
        ctx->r2 = ADD32(ctx->r2, 0X4C);
            goto L_8002E310;
    }
    // 0x8002E38C: addiu       $v0, $v0, 0x4C
    ctx->r2 = ADD32(ctx->r2, 0X4C);
L_8002E390:
    // 0x8002E390: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002E394: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8002E398: lw          $v1, 0xC($t0)
    ctx->r3 = MEM_W(ctx->r8, 0XC);
    // 0x8002E39C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002E3A0: lwc1        $f2, -0xB3C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0XB3C);
    // 0x8002E3A4: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x8002E3A8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8002E3AC: bne         $at, $zero, L_8002E3CC
    if (ctx->r1 != 0) {
        // 0x8002E3B0: mov.s       $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
            goto L_8002E3CC;
    }
    // 0x8002E3B0: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x8002E3B4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x8002E3B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002E3BC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002E3C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002E3C4: b           L_8002E554
    // 0x8002E3C8: nop

        goto L_8002E554;
    // 0x8002E3C8: nop

L_8002E3CC:
    // 0x8002E3CC: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x8002E3D0: bne         $at, $zero, L_8002E3EC
    if (ctx->r1 != 0) {
        // 0x8002E3D4: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8002E3EC;
    }
    // 0x8002E3D4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002E3D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002E3DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002E3E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002E3E4: b           L_8002E554
    // 0x8002E3E8: nop

        goto L_8002E554;
    // 0x8002E3E8: nop

L_8002E3EC:
    // 0x8002E3EC: slti        $at, $v1, 0x28
    ctx->r1 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x8002E3F0: bne         $at, $zero, L_8002E448
    if (ctx->r1 != 0) {
        // 0x8002E3F4: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8002E448;
    }
    // 0x8002E3F4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002E3F8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8002E3FC: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8002E400: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E404: lw          $t6, -0x4304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4304);
    // 0x8002E408: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8002E40C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E410: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x8002E414: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x8002E418: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002E41C: lw          $t8, -0x4308($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4308);
    // 0x8002E420: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8002E424: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8002E428: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8002E42C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x8002E430: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8002E434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002E438: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8002E43C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002E440: b           L_8002E554
    // 0x8002E444: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
        goto L_8002E554;
    // 0x8002E444: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
L_8002E448:
    // 0x8002E448: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x8002E44C: bne         $at, $zero, L_8002E4A0
    if (ctx->r1 != 0) {
        // 0x8002E450: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_8002E4A0;
    }
    // 0x8002E450: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002E454: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8002E458: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8002E45C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E460: lw          $t9, -0x4304($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4304);
    // 0x8002E464: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8002E468: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E46C: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x8002E470: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8002E474: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002E478: lw          $t8, -0x4308($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4308);
    // 0x8002E47C: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x8002E480: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8002E484: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8002E488: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8002E48C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8002E490: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002E494: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x8002E498: b           L_8002E554
    // 0x8002E49C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
        goto L_8002E554;
    // 0x8002E49C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
L_8002E4A0:
    // 0x8002E4A0: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x8002E4A4: bne         $at, $zero, L_8002E4FC
    if (ctx->r1 != 0) {
        // 0x8002E4A8: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8002E4FC;
    }
    // 0x8002E4A8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002E4AC: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8002E4B0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8002E4B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E4B8: lw          $t7, -0x4304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4304);
    // 0x8002E4BC: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8002E4C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E4C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002E4C8: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8002E4CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002E4D0: lw          $t8, -0x4308($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4308);
    // 0x8002E4D4: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8002E4D8: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8002E4DC: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8002E4E0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8002E4E4: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8002E4E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002E4EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8002E4F0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002E4F4: b           L_8002E554
    // 0x8002E4F8: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_8002E554;
    // 0x8002E4F8: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
L_8002E4FC:
    // 0x8002E4FC: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x8002E500: bne         $at, $zero, L_8002E554
    if (ctx->r1 != 0) {
        // 0x8002E504: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8002E554;
    }
    // 0x8002E504: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002E508: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8002E50C: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8002E510: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E514: lw          $t6, -0x4304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4304);
    // 0x8002E518: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8002E51C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002E520: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x8002E524: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x8002E528: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002E52C: lw          $t8, -0x4308($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4308);
    // 0x8002E530: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8002E534: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8002E538: lwc1        $f10, 0x10($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8002E53C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x8002E540: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8002E544: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002E548: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002E54C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002E550: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
L_8002E554:
    // 0x8002E554: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002E558: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002E55C: addiu       $v0, $v0, -0xB34
    ctx->r2 = ADD32(ctx->r2, -0XB34);
    // 0x8002E560: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002E564: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002E568: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8002E56C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002E570: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8002E574: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x8002E578: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8002E57C: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x8002E580: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x8002E584: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8002E588: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x8002E58C: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x8002E590: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8002E594: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8002E598: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x8002E59C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002E5A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002E5A4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x8002E5A8: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8002E5AC: jal         0x8004A0A0
    // 0x8002E5B0: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_14;
    // 0x8002E5B0: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    after_14:
    // 0x8002E5B4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002E5B8: addiu       $a3, $a3, -0x42C0
    ctx->r7 = ADD32(ctx->r7, -0X42C0);
    // 0x8002E5BC: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x8002E5C0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002E5C4: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002E5C8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002E5CC: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002E5D0: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x8002E5D4: bne         $at, $zero, L_8002E5F4
    if (ctx->r1 != 0) {
        // 0x8002E5D8: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_8002E5F4;
    }
    // 0x8002E5D8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002E5DC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002E5E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002E5E4: nop

    // 0x8002E5E8: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8002E5EC: b           L_8002E610
    // 0x8002E5F0: add.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f0.fl;
        goto L_8002E610;
    // 0x8002E5F0: add.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f0.fl;
L_8002E5F4:
    // 0x8002E5F4: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x8002E5F8: bne         $at, $zero, L_8002E610
    if (ctx->r1 != 0) {
        // 0x8002E5FC: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8002E610;
    }
    // 0x8002E5FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002E600: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002E604: nop

    // 0x8002E608: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8002E60C: add.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f0.fl;
L_8002E610:
    // 0x8002E610: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x8002E614: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002E618: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002E61C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002E620: addiu       $v1, $v1, -0xA8C
    ctx->r3 = ADD32(ctx->r3, -0XA8C);
    // 0x8002E624: lui         $at, 0x2C
    ctx->r1 = S32(0X2C << 16);
    // 0x8002E628: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x8002E62C: swc1        $f12, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f12.u32l;
    // 0x8002E630: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8002E634: beq         $t6, $zero, L_8002E644
    if (ctx->r14 == 0) {
        // 0x8002E638: swc1        $f6, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
            goto L_8002E644;
    }
    // 0x8002E638: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x8002E63C: b           L_8002E64C
    // 0x8002E640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E64C;
    // 0x8002E640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E644:
    // 0x8002E644: lbu         $v0, 0x20($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X20);
    // 0x8002E648: nop

L_8002E64C:
    // 0x8002E64C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002E650: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8002E654: lw          $t9, -0x9A8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X9A8);
    // 0x8002E658: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x8002E65C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002E660: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002E664: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x8002E668: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x8002E66C: jal         0x8004A0A0
    // 0x8002E670: sw          $t9, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_15;
    // 0x8002E670: sw          $t9, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r25;
    after_15:
    // 0x8002E674: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002E678: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002E67C: addiu       $v1, $v1, -0xA8C
    ctx->r3 = ADD32(ctx->r3, -0XA8C);
    // 0x8002E680: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8002E684: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002E688: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8002E68C: addiu       $a3, $a3, -0xB34
    ctx->r7 = ADD32(ctx->r7, -0XB34);
    // 0x8002E690: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8002E694: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8002E698: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x8002E69C: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x8002E6A0: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x8002E6A4: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x8002E6A8: jal         0x8004A0A0
    // 0x8002E6AC: sw          $t8, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r24;
    func_8004A0A0(rdram, ctx);
        goto after_16;
    // 0x8002E6AC: sw          $t8, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r24;
    after_16:
    // 0x8002E6B0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002E6B4: lw          $t6, -0x42B4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42B4);
    // 0x8002E6B8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002E6BC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002E6C0: slti        $at, $t6, 0x32
    ctx->r1 = SIGNED(ctx->r14) < 0X32 ? 1 : 0;
    // 0x8002E6C4: bne         $at, $zero, L_8002E6D0
    if (ctx->r1 != 0) {
        // 0x8002E6C8: addiu       $v1, $v1, -0xA8C
        ctx->r3 = ADD32(ctx->r3, -0XA8C);
            goto L_8002E6D0;
    }
    // 0x8002E6C8: addiu       $v1, $v1, -0xA8C
    ctx->r3 = ADD32(ctx->r3, -0XA8C);
    // 0x8002E6CC: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
L_8002E6D0:
    // 0x8002E6D0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002E6D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8002E6D8: jal         0x8004A0A0
    // 0x8002E6DC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_17;
    // 0x8002E6DC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_17:
    // 0x8002E6E0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002E6E4: lw          $v1, -0x42C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X42C0);
    // 0x8002E6E8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8002E6EC: ori         $at, $at, 0x1000
    ctx->r1 = ctx->r1 | 0X1000;
    // 0x8002E6F0: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x8002E6F4: bne         $t7, $zero, L_8002E714
    if (ctx->r15 != 0) {
        // 0x8002E6F8: andi        $t9, $v1, 0x20
        ctx->r25 = ctx->r3 & 0X20;
            goto L_8002E714;
    }
    // 0x8002E6F8: andi        $t9, $v1, 0x20
    ctx->r25 = ctx->r3 & 0X20;
    // 0x8002E6FC: jal         0x800406EC
    // 0x8002E700: nop

    func_800406EC(rdram, ctx);
        goto after_18;
    // 0x8002E700: nop

    after_18:
    // 0x8002E704: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002E708: lw          $v1, -0x42C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X42C0);
    // 0x8002E70C: nop

    // 0x8002E710: andi        $t9, $v1, 0x20
    ctx->r25 = ctx->r3 & 0X20;
L_8002E714:
    // 0x8002E714: beq         $t9, $zero, L_8002E79C
    if (ctx->r25 == 0) {
        // 0x8002E718: addiu       $t8, $zero, 0x31
        ctx->r24 = ADD32(0, 0X31);
            goto L_8002E79C;
    }
    // 0x8002E718: addiu       $t8, $zero, 0x31
    ctx->r24 = ADD32(0, 0X31);
    // 0x8002E71C: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x8002E720: jal         0x8002D000
    // 0x8002E724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_19;
    // 0x8002E724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_19:
    // 0x8002E728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002E72C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8002E730: jal         0x8004A0A0
    // 0x8002E734: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_20;
    // 0x8002E734: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_20:
    // 0x8002E738: lui         $at, 0xC36C
    ctx->r1 = S32(0XC36C << 16);
    // 0x8002E73C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002E740: lui         $at, 0x4422
    ctx->r1 = S32(0X4422 << 16);
    // 0x8002E744: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002E748: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002E74C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8002E750: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x8002E754: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x8002E758: jal         0x8002D000
    // 0x8002E75C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    func_8002D000(rdram, ctx);
        goto after_21;
    // 0x8002E75C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    after_21:
    // 0x8002E760: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002E764: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002E768: jal         0x8004A0A0
    // 0x8002E76C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_22;
    // 0x8002E76C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_22:
    // 0x8002E770: jal         0x8002D000
    // 0x8002E774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_23;
    // 0x8002E774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_23:
    // 0x8002E778: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002E77C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x8002E780: jal         0x8004A0A0
    // 0x8002E784: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_24;
    // 0x8002E784: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_24:
    // 0x8002E788: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8002E78C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002E790: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8002E794: nop

    // 0x8002E798: swc1        $f8, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f8.u32l;
L_8002E79C:
    // 0x8002E79C: jal         0x8002CAE0
    // 0x8002E7A0: nop

    func_8002CAE0(rdram, ctx);
        goto after_25;
    // 0x8002E7A0: nop

    after_25:
    // 0x8002E7A4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8002E7A8: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x8002E7AC: addiu       $t7, $zero, 0xE4
    ctx->r15 = ADD32(0, 0XE4);
    // 0x8002E7B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8002E7B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8002E7B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8002E7BC: jal         0x80008F90
    // 0x8002E7C0: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
    func_80008F90(rdram, ctx);
        goto after_26;
    // 0x8002E7C0: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
    after_26:
    // 0x8002E7C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002E7C8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8002E7CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002E7D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002E7D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002E7D8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8002E7DC: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x8002E7E0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x8002E7E4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x8002E7E8: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    // 0x8002E7EC: swc1        $f14, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f14.u32l;
    // 0x8002E7F0: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x8002E7F4: swc1        $f14, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f14.u32l;
    // 0x8002E7F8: swc1        $f14, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f14.u32l;
    // 0x8002E7FC: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    // 0x8002E800: swc1        $f14, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f14.u32l;
    // 0x8002E804: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x8002E808: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x8002E80C: jal         0x80009C2C
    // 0x8002E810: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    func_80009C2C(rdram, ctx);
        goto after_27;
    // 0x8002E810: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    after_27:
    // 0x8002E814: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8002E818: lw          $t0, -0xB34($t0)
    ctx->r8 = MEM_W(ctx->r8, -0XB34);
    // 0x8002E81C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8002E820: jal         0x8002BC98
    // 0x8002E824: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    func_8002BC98(rdram, ctx);
        goto after_28;
    // 0x8002E824: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    after_28:
    // 0x8002E828: jal         0x8002B934
    // 0x8002E82C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002B934(rdram, ctx);
        goto after_29;
    // 0x8002E82C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_29:
    // 0x8002E830: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002E834: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8002E838: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8002E83C: andi        $t8, $t9, 0x20
    ctx->r24 = ctx->r25 & 0X20;
    // 0x8002E840: beq         $t8, $zero, L_8002E850
    if (ctx->r24 == 0) {
        // 0x8002E844: nop
    
            goto L_8002E850;
    }
    // 0x8002E844: nop

    // 0x8002E848: jal         0x80051418
    // 0x8002E84C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_30;
    // 0x8002E84C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
L_8002E850:
    // 0x8002E850: jal         0x80051DE4
    // 0x8002E854: nop

    func_80051DE4(rdram, ctx);
        goto after_31;
    // 0x8002E854: nop

    after_31:
    // 0x8002E858: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8002E85C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8002E860: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8002E864: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8002E868: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E86C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8002E870: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8002E874: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8002E878: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8002E87C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8002E880: jr          $ra
    // 0x8002E884: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8002E884: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8002E888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E888: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002E88C: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8002E890: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8002E894: andi        $t7, $t6, 0x103
    ctx->r15 = ctx->r14 & 0X103;
    // 0x8002E898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E89C: bne         $t7, $zero, L_8002EFE0
    if (ctx->r15 != 0) {
        // 0x8002E8A0: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_8002EFE0;
    }
    // 0x8002E8A0: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8002E8A4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002E8A8: lw          $t8, -0x4320($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4320);
    // 0x8002E8AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002E8B0: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x8002E8B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002E8B8: blez        $v1, L_8002E8E8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002E8BC: lui         $t4, 0x800B
        ctx->r12 = S32(0X800B << 16);
            goto L_8002E8E8;
    }
    // 0x8002E8BC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x8002E8C0: lw          $v0, -0xB50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XB50);
    // 0x8002E8C4: nop

L_8002E8C8:
    // 0x8002E8C8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002E8CC: nop

    // 0x8002E8D0: beq         $t2, $t9, L_8002E8EC
    if (ctx->r10 == ctx->r25) {
        // 0x8002E8D4: slt         $at, $a3, $v1
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8002E8EC;
    }
    // 0x8002E8D4: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002E8D8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8002E8DC: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002E8E0: bne         $at, $zero, L_8002E8C8
    if (ctx->r1 != 0) {
        // 0x8002E8E4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8002E8C8;
    }
    // 0x8002E8E4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8002E8E8:
    // 0x8002E8E8: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
L_8002E8EC:
    // 0x8002E8EC: beq         $at, $zero, L_8002EFE0
    if (ctx->r1 == 0) {
        // 0x8002E8F0: sll         $t0, $a3, 2
        ctx->r8 = S32(ctx->r7 << 2);
            goto L_8002EFE0;
    }
    // 0x8002E8F0: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x8002E8F4: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x8002E8F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002E8FC: lw          $t4, -0x4304($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4304);
    // 0x8002E900: subu        $t0, $t0, $a3
    ctx->r8 = SUB32(ctx->r8, ctx->r7);
    // 0x8002E904: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002E908: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x8002E90C: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002E910: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x8002E914: andi        $t5, $v1, 0x40
    ctx->r13 = ctx->r3 & 0X40;
    // 0x8002E918: beq         $t5, $zero, L_8002E9E4
    if (ctx->r13 == 0) {
        // 0x8002E91C: sll         $t7, $v1, 0
        ctx->r15 = S32(ctx->r3 << 0);
            goto L_8002E9E4;
    }
    // 0x8002E91C: sll         $t7, $v1, 0
    ctx->r15 = S32(ctx->r3 << 0);
    // 0x8002E920: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8002E924: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x8002E928: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8002E92C: and         $a0, $t6, $t3
    ctx->r4 = ctx->r14 & ctx->r11;
    // 0x8002E930: beq         $t1, $a0, L_8002E940
    if (ctx->r9 == ctx->r4) {
        // 0x8002E934: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_8002E940;
    }
    // 0x8002E934: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8002E938: bne         $a0, $at, L_8002E954
    if (ctx->r4 != ctx->r1) {
        // 0x8002E93C: nop
    
            goto L_8002E954;
    }
    // 0x8002E93C: nop

L_8002E940:
    // 0x8002E940: lw          $t7, 0x30($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X30);
    // 0x8002E944: nop

    // 0x8002E948: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8002E94C: b           L_8002E964
    // 0x8002E950: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
        goto L_8002E964;
    // 0x8002E950: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
L_8002E954:
    // 0x8002E954: lw          $t9, 0x30($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X30);
    // 0x8002E958: nop

    // 0x8002E95C: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x8002E960: sw          $t4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r12;
L_8002E964:
    // 0x8002E964: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    // 0x8002E968: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8002E96C: and         $a0, $t5, $t3
    ctx->r4 = ctx->r13 & ctx->r11;
    // 0x8002E970: beq         $a0, $at, L_8002E984
    if (ctx->r4 == ctx->r1) {
        // 0x8002E974: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8002E984;
    }
    // 0x8002E974: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002E978: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8002E97C: bne         $a0, $at, L_8002E99C
    if (ctx->r4 != ctx->r1) {
        // 0x8002E980: nop
    
            goto L_8002E99C;
    }
    // 0x8002E980: nop

L_8002E984:
    // 0x8002E984: lw          $t6, -0x4304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4304);
    // 0x8002E988: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002E98C: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x8002E990: lw          $t8, 0x30($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X30);
    // 0x8002E994: nop

    // 0x8002E998: bne         $t8, $at, L_8002E9C8
    if (ctx->r24 != ctx->r1) {
        // 0x8002E99C: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_8002E9C8;
    }
L_8002E99C:
    // 0x8002E99C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002E9A0: lw          $t9, -0x4304($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4304);
    // 0x8002E9A4: beq         $t1, $a0, L_8002E9B8
    if (ctx->r9 == ctx->r4) {
        // 0x8002E9A8: addu        $v0, $t9, $t0
        ctx->r2 = ADD32(ctx->r25, ctx->r8);
            goto L_8002E9B8;
    }
    // 0x8002E9A8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8002E9AC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8002E9B0: bne         $a0, $at, L_8002E9DC
    if (ctx->r4 != ctx->r1) {
        // 0x8002E9B4: nop
    
            goto L_8002E9DC;
    }
    // 0x8002E9B4: nop

L_8002E9B8:
    // 0x8002E9B8: lw          $t4, 0x30($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X30);
    // 0x8002E9BC: nop

    // 0x8002E9C0: beq         $t4, $zero, L_8002E9DC
    if (ctx->r12 == 0) {
        // 0x8002E9C4: nop
    
            goto L_8002E9DC;
    }
    // 0x8002E9C4: nop

L_8002E9C8:
    // 0x8002E9C8: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x8002E9CC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8002E9D0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8002E9D4: b           L_8002EFE0
    // 0x8002E9D8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_8002EFE0;
    // 0x8002E9D8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_8002E9DC:
    // 0x8002E9DC: b           L_8002EA00
    // 0x8002E9E0: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
        goto L_8002EA00;
    // 0x8002E9E0: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
L_8002E9E4:
    // 0x8002E9E4: bgez        $t7, L_8002EA00
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002E9E8: lui         $a2, 0x8000
        ctx->r6 = S32(0X8000 << 16);
            goto L_8002EA00;
    }
    // 0x8002E9E8: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x8002E9EC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8002E9F0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8002E9F4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8002E9F8: b           L_8002EFE0
    // 0x8002E9FC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
        goto L_8002EFE0;
    // 0x8002E9FC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_8002EA00:
    // 0x8002EA00: lw          $t4, 0x8($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X8);
    // 0x8002EA04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002EA08: sw          $t4, -0x90C($at)
    MEM_W(-0X90C, ctx->r1) = ctx->r12;
    // 0x8002EA0C: lw          $t5, 0x24($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X24);
    // 0x8002EA10: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x8002EA14: andi        $t6, $t5, 0x20
    ctx->r14 = ctx->r13 & 0X20;
    // 0x8002EA18: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8002EA1C: bne         $t6, $zero, L_8002EA78
    if (ctx->r14 != 0) {
        // 0x8002EA20: addiu       $t1, $zero, 0x13
        ctx->r9 = ADD32(0, 0X13);
            goto L_8002EA78;
    }
    // 0x8002EA20: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x8002EA24: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8002EA28: nop

    // 0x8002EA2C: andi        $t7, $a0, 0x2
    ctx->r15 = ctx->r4 & 0X2;
    // 0x8002EA30: bne         $t7, $zero, L_8002EA78
    if (ctx->r15 != 0) {
        // 0x8002EA34: nop
    
            goto L_8002EA78;
    }
    // 0x8002EA34: nop

    // 0x8002EA38: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x8002EA3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002EA40: beq         $v1, $at, L_8002EA78
    if (ctx->r3 == ctx->r1) {
        // 0x8002EA44: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8002EA78;
    }
    // 0x8002EA44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002EA48: beq         $v1, $at, L_8002EA78
    if (ctx->r3 == ctx->r1) {
        // 0x8002EA4C: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8002EA78;
    }
    // 0x8002EA4C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002EA50: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8002EA54: lw          $t8, -0x4308($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4308);
    // 0x8002EA58: sll         $t4, $t9, 5
    ctx->r12 = S32(ctx->r25 << 5);
    // 0x8002EA5C: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x8002EA60: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8002EA64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002EA68: beq         $v1, $at, L_8002EA78
    if (ctx->r3 == ctx->r1) {
        // 0x8002EA6C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8002EA78;
    }
    // 0x8002EA6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002EA70: bne         $v1, $at, L_8002EFDC
    if (ctx->r3 != ctx->r1) {
        // 0x8002EA74: ori         $t9, $a0, 0x1
        ctx->r25 = ctx->r4 | 0X1;
            goto L_8002EFDC;
    }
    // 0x8002EA74: ori         $t9, $a0, 0x1
    ctx->r25 = ctx->r4 | 0X1;
L_8002EA78:
    // 0x8002EA78: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8002EA7C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8002EA80: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8002EA84: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8002EA88: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002EA8C: lw          $t9, -0x4304($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4304);
    // 0x8002EA90: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002EA94: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8002EA98: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EA9C: nop

    // 0x8002EAA0: andi        $t8, $v1, 0x40
    ctx->r24 = ctx->r3 & 0X40;
    // 0x8002EAA4: beq         $t8, $zero, L_8002EAF8
    if (ctx->r24 == 0) {
        // 0x8002EAA8: andi        $t9, $v1, 0x8
        ctx->r25 = ctx->r3 & 0X8;
            goto L_8002EAF8;
    }
    // 0x8002EAA8: andi        $t9, $v1, 0x8
    ctx->r25 = ctx->r3 & 0X8;
    // 0x8002EAAC: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x8002EAB0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8002EAB4: and         $a0, $t4, $t3
    ctx->r4 = ctx->r12 & ctx->r11;
    // 0x8002EAB8: beq         $t1, $a0, L_8002EAC8
    if (ctx->r9 == ctx->r4) {
        // 0x8002EABC: nop
    
            goto L_8002EAC8;
    }
    // 0x8002EABC: nop

    // 0x8002EAC0: bne         $a0, $at, L_8002EADC
    if (ctx->r4 != ctx->r1) {
        // 0x8002EAC4: or          $t6, $v1, $a2
        ctx->r14 = ctx->r3 | ctx->r6;
            goto L_8002EADC;
    }
    // 0x8002EAC4: or          $t6, $v1, $a2
    ctx->r14 = ctx->r3 | ctx->r6;
L_8002EAC8:
    // 0x8002EAC8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8002EACC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8002EAD0: and         $t5, $v1, $at
    ctx->r13 = ctx->r3 & ctx->r1;
    // 0x8002EAD4: b           L_8002EAE0
    // 0x8002EAD8: sw          $t5, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r13;
        goto L_8002EAE0;
    // 0x8002EAD8: sw          $t5, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r13;
L_8002EADC:
    // 0x8002EADC: sw          $t6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r14;
L_8002EAE0:
    // 0x8002EAE0: lw          $t7, -0x4304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4304);
    // 0x8002EAE4: nop

    // 0x8002EAE8: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x8002EAEC: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EAF0: b           L_8002EB20
    // 0x8002EAF4: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
        goto L_8002EB20;
    // 0x8002EAF4: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
L_8002EAF8:
    // 0x8002EAF8: bne         $t9, $zero, L_8002EB1C
    if (ctx->r25 != 0) {
        // 0x8002EAFC: or          $t8, $v1, $a2
        ctx->r24 = ctx->r3 | ctx->r6;
            goto L_8002EB1C;
    }
    // 0x8002EAFC: or          $t8, $v1, $a2
    ctx->r24 = ctx->r3 | ctx->r6;
    // 0x8002EB00: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x8002EB04: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x8002EB08: lw          $t4, -0x4304($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4304);
    // 0x8002EB0C: nop

    // 0x8002EB10: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x8002EB14: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EB18: nop

L_8002EB1C:
    // 0x8002EB1C: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
L_8002EB20:
    // 0x8002EB20: beq         $t5, $zero, L_8002EBA8
    if (ctx->r13 == 0) {
        // 0x8002EB24: andi        $t9, $v1, 0x10
        ctx->r25 = ctx->r3 & 0X10;
            goto L_8002EBA8;
    }
    // 0x8002EB24: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
    // 0x8002EB28: lw          $a1, 0x2C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2C);
    // 0x8002EB2C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8002EB30: bgez        $a1, L_8002EB74
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8002EB34: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8002EB74;
    }
    // 0x8002EB34: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002EB38: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8002EB3C: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    // 0x8002EB40: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    // 0x8002EB44: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002EB48: jal         0x8003E4FC
    // 0x8002EB4C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    func_8003E4FC(rdram, ctx);
        goto after_0;
    // 0x8002EB4C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    after_0:
    // 0x8002EB50: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002EB54: lw          $t6, -0x4304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4304);
    // 0x8002EB58: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002EB5C: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002EB60: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x8002EB64: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EB68: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002EB6C: b           L_8002EBA8
    // 0x8002EB70: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
        goto L_8002EBA8;
    // 0x8002EB70: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
L_8002EB74:
    // 0x8002EB74: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    // 0x8002EB78: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002EB7C: jal         0x8003E530
    // 0x8002EB80: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    func_8003E530(rdram, ctx);
        goto after_1;
    // 0x8002EB80: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    after_1:
    // 0x8002EB84: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002EB88: lw          $t7, -0x4304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4304);
    // 0x8002EB8C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002EB90: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002EB94: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x8002EB98: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EB9C: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002EBA0: nop

    // 0x8002EBA4: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
L_8002EBA8:
    // 0x8002EBA8: beq         $t9, $zero, L_8002ECA0
    if (ctx->r25 == 0) {
        // 0x8002EBAC: andi        $t5, $v1, 0x4
        ctx->r13 = ctx->r3 & 0X4;
            goto L_8002ECA0;
    }
    // 0x8002EBAC: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
    // 0x8002EBB0: lw          $a1, 0x34($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X34);
    // 0x8002EBB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002EBB8: bne         $a1, $at, L_8002EC28
    if (ctx->r5 != ctx->r1) {
        // 0x8002EBBC: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_8002EC28;
    }
    // 0x8002EBBC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002EBC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002EBC4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x8002EBC8: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x8002EBCC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8002EBD0: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x8002EBD4: lw          $t5, 0x30($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X30);
    // 0x8002EBD8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8002EBDC: lw          $t4, -0xB50($t4)
    ctx->r12 = MEM_W(ctx->r12, -0XB50);
    // 0x8002EBE0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002EBE4: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8002EBE8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8002EBEC: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x8002EBF0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002EBF4: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    // 0x8002EBF8: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8002EBFC: jal         0x8004A0A0
    // 0x8002EC00: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8002EC00: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_2:
    // 0x8002EC04: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002EC08: lw          $t9, -0x4304($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4304);
    // 0x8002EC0C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002EC10: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002EC14: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8002EC18: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EC1C: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002EC20: b           L_8002ECA0
    // 0x8002EC24: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
        goto L_8002ECA0;
    // 0x8002EC24: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
L_8002EC28:
    // 0x8002EC28: lw          $t5, 0x30($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X30);
    // 0x8002EC2C: lw          $t8, -0xB50($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB50);
    // 0x8002EC30: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8002EC34: addu        $t6, $t8, $t4
    ctx->r14 = ADD32(ctx->r24, ctx->r12);
    // 0x8002EC38: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002EC3C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x8002EC40: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002EC44: jal         0x8005C8FC
    // 0x8002EC48: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    func_8005C8FC(rdram, ctx);
        goto after_3;
    // 0x8002EC48: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_3:
    // 0x8002EC4C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002EC50: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002EC54: lw          $t9, -0x4304($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4304);
    // 0x8002EC58: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002EC5C: addu        $t5, $t9, $t0
    ctx->r13 = ADD32(ctx->r25, ctx->r8);
    // 0x8002EC60: lw          $t8, 0x30($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X30);
    // 0x8002EC64: lw          $t7, -0xB50($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XB50);
    // 0x8002EC68: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x8002EC6C: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x8002EC70: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8002EC74: jal         0x8005C864
    // 0x8002EC78: nop

    func_8005C864(rdram, ctx);
        goto after_4;
    // 0x8002EC78: nop

    after_4:
    // 0x8002EC7C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002EC80: lw          $t9, -0x4304($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4304);
    // 0x8002EC84: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002EC88: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002EC8C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8002EC90: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002EC94: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002EC98: nop

    // 0x8002EC9C: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
L_8002ECA0:
    // 0x8002ECA0: beq         $t5, $zero, L_8002ECF0
    if (ctx->r13 == 0) {
        // 0x8002ECA4: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_8002ECF0;
    }
    // 0x8002ECA4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002ECA8: lw          $t8, -0xB50($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB50);
    // 0x8002ECAC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8002ECB0: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x8002ECB4: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x8002ECB8: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x8002ECBC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002ECC0: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    // 0x8002ECC4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8002ECC8: jal         0x8004A0A0
    // 0x8002ECCC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8002ECCC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_5:
    // 0x8002ECD0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002ECD4: lw          $t6, -0x4304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4304);
    // 0x8002ECD8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002ECDC: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002ECE0: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x8002ECE4: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8002ECE8: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002ECEC: nop

L_8002ECF0:
    // 0x8002ECF0: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x8002ECF4: beq         $t9, $zero, L_8002ED28
    if (ctx->r25 == 0) {
        // 0x8002ECF8: nop
    
            goto L_8002ED28;
    }
    // 0x8002ECF8: nop

    // 0x8002ECFC: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x8002ED00: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x8002ED04: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002ED08: jal         0x8002BCF0
    // 0x8002ED0C: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    func_8002BCF0(rdram, ctx);
        goto after_6;
    // 0x8002ED0C: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_6:
    // 0x8002ED10: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8002ED14: lw          $t5, -0x4304($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4304);
    // 0x8002ED18: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002ED1C: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8002ED20: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002ED24: addu        $v0, $t5, $t0
    ctx->r2 = ADD32(ctx->r13, ctx->r8);
L_8002ED28:
    // 0x8002ED28: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x8002ED2C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8002ED30: beq         $t8, $zero, L_8002EE04
    if (ctx->r24 == 0) {
        // 0x8002ED34: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_8002EE04;
    }
    // 0x8002ED34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002ED38: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x8002ED3C: jal         0x8004A0A0
    // 0x8002ED40: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8002ED40: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_7:
    // 0x8002ED44: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002ED48: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002ED4C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8002ED50: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002ED54: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002ED58: lw          $t7, -0x4304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4304);
    // 0x8002ED5C: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8002ED60: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8002ED64: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8002ED68: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x8002ED6C: lw          $t4, 0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X14);
    // 0x8002ED70: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x8002ED74: andi        $t6, $t4, 0xFFFF
    ctx->r14 = ctx->r12 & 0XFFFF;
    // 0x8002ED78: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x8002ED7C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8002ED80: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x8002ED84: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002ED88: sll         $t5, $v1, 15
    ctx->r13 = S32(ctx->r3 << 15);
    // 0x8002ED8C: bgez        $t5, L_8002EDB8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8002ED90: sll         $t4, $v1, 14
        ctx->r12 = S32(ctx->r3 << 14);
            goto L_8002EDB8;
    }
    // 0x8002ED90: sll         $t4, $v1, 14
    ctx->r12 = S32(ctx->r3 << 14);
    // 0x8002ED94: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8002ED98: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8002ED9C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x8002EDA0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002EDA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002EDA8: jal         0x8004A0A0
    // 0x8002EDAC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x8002EDAC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_8:
    // 0x8002EDB0: b           L_8002EFE4
    // 0x8002EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002EFE4;
    // 0x8002EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002EDB8:
    // 0x8002EDB8: bgez        $t4, L_8002EDE8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8002EDBC: sll         $t5, $v1, 13
        ctx->r13 = S32(ctx->r3 << 13);
            goto L_8002EDE8;
    }
    // 0x8002EDBC: sll         $t5, $v1, 13
    ctx->r13 = S32(ctx->r3 << 13);
    // 0x8002EDC0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8002EDC4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002EDC8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8002EDCC: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8002EDD0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002EDD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002EDD8: jal         0x8004A0A0
    // 0x8002EDDC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x8002EDDC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_9:
    // 0x8002EDE0: b           L_8002EFE4
    // 0x8002EDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002EFE4;
    // 0x8002EDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002EDE8:
    // 0x8002EDE8: bgez        $t5, L_8002EFE4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8002EDEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002EFE4;
    }
    // 0x8002EDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EDF0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8002EDF4: jal         0x8005B358
    // 0x8002EDF8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_8005B358(rdram, ctx);
        goto after_10;
    // 0x8002EDF8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_10:
    // 0x8002EDFC: b           L_8002EFE4
    // 0x8002EE00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002EFE4;
    // 0x8002EE00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002EE04:
    // 0x8002EE04: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8002EE08: lw          $t8, -0xB4C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB4C);
    // 0x8002EE0C: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x8002EE10: addu        $t7, $t8, $t1
    ctx->r15 = ADD32(ctx->r24, ctx->r9);
    // 0x8002EE14: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x8002EE18: nop

    // 0x8002EE1C: beq         $t4, $zero, L_8002EFE4
    if (ctx->r12 == 0) {
        // 0x8002EE20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002EFE4;
    }
    // 0x8002EE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EE24: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8002EE28: jal         0x80027F1C
    // 0x8002EE2C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    func_80027F1C(rdram, ctx);
        goto after_11;
    // 0x8002EE2C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    after_11:
    // 0x8002EE30: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002EE34: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8002EE38: lw          $t6, -0xB4C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB4C);
    // 0x8002EE3C: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8002EE40: addu        $t9, $t6, $t1
    ctx->r25 = ADD32(ctx->r14, ctx->r9);
    // 0x8002EE44: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8002EE48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002EE4C: lw          $a1, 0xC($t0)
    ctx->r5 = MEM_W(ctx->r8, 0XC);
    // 0x8002EE50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002EE54: blez        $a1, L_8002EFE0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002EE58: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8002EFE0;
    }
    // 0x8002EE58: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002EE5C: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x8002EE60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002EE64: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x8002EE68: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8002EE6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002EE70: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8002EE74: nop

    // 0x8002EE78: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8002EE7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002EE80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002EE84: nop

    // 0x8002EE88: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8002EE8C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8002EE90: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8002EE94: nop

L_8002EE98:
    // 0x8002EE98: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x8002EE9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002EEA0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8002EEA4: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002EEA8: beq         $at, $zero, L_8002EFC8
    if (ctx->r1 == 0) {
        // 0x8002EEAC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8002EFC8;
    }
    // 0x8002EEAC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002EEB0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8002EEB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002EEB8: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x8002EEBC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8002EEC0: jal         0x8004A0A0
    // 0x8002EEC4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    func_8004A0A0(rdram, ctx);
        goto after_12;
    // 0x8002EEC4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    after_12:
    // 0x8002EEC8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002EECC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8002EED0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8002EED4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002EED8: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002EEDC: lw          $t7, -0xB4C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XB4C);
    // 0x8002EEE0: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8002EEE4: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8002EEE8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8002EEEC: addu        $v0, $t7, $t1
    ctx->r2 = ADD32(ctx->r15, ctx->r9);
    // 0x8002EEF0: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8002EEF4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8002EEF8: lw          $t6, 0x10($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X10);
    // 0x8002EEFC: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x8002EF00: addu        $t9, $t6, $a3
    ctx->r25 = ADD32(ctx->r14, ctx->r7);
    // 0x8002EF04: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x8002EF08: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x8002EF0C: andi        $t8, $t5, 0xFFFF
    ctx->r24 = ctx->r13 & 0XFFFF;
    // 0x8002EF10: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8002EF14: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8002EF18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002EF1C: lw          $t6, 0x10($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X10);
    // 0x8002EF20: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8002EF24: addu        $t9, $t6, $a3
    ctx->r25 = ADD32(ctx->r14, ctx->r7);
    // 0x8002EF28: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x8002EF2C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002EF30: sll         $t5, $v1, 15
    ctx->r13 = S32(ctx->r3 << 15);
    // 0x8002EF34: bgez        $t5, L_8002EF58
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8002EF38: sll         $t4, $v1, 14
        ctx->r12 = S32(ctx->r3 << 14);
            goto L_8002EF58;
    }
    // 0x8002EF38: sll         $t4, $v1, 14
    ctx->r12 = S32(ctx->r3 << 14);
    // 0x8002EF3C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8002EF40: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x8002EF44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002EF48: jal         0x8004A0A0
    // 0x8002EF4C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_8004A0A0(rdram, ctx);
        goto after_13;
    // 0x8002EF4C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_13:
    // 0x8002EF50: b           L_8002EF9C
    // 0x8002EF54: nop

        goto L_8002EF9C;
    // 0x8002EF54: nop

L_8002EF58:
    // 0x8002EF58: bgez        $t4, L_8002EF88
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8002EF5C: sll         $t5, $v1, 13
        ctx->r13 = S32(ctx->r3 << 13);
            goto L_8002EF88;
    }
    // 0x8002EF5C: sll         $t5, $v1, 13
    ctx->r13 = S32(ctx->r3 << 13);
    // 0x8002EF60: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8002EF64: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002EF68: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8002EF6C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8002EF70: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002EF74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002EF78: jal         0x8004A0A0
    // 0x8002EF7C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_8004A0A0(rdram, ctx);
        goto after_14;
    // 0x8002EF7C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_14:
    // 0x8002EF80: b           L_8002EF9C
    // 0x8002EF84: nop

        goto L_8002EF9C;
    // 0x8002EF84: nop

L_8002EF88:
    // 0x8002EF88: bgez        $t5, L_8002EF9C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8002EF8C: nop
    
            goto L_8002EF9C;
    }
    // 0x8002EF8C: nop

    // 0x8002EF90: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8002EF94: jal         0x8005B358
    // 0x8002EF98: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_8005B358(rdram, ctx);
        goto after_15;
    // 0x8002EF98: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_15:
L_8002EF9C:
    // 0x8002EF9C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002EFA0: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8002EFA4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002EFA8: andi        $t7, $t8, 0x4
    ctx->r15 = ctx->r24 & 0X4;
    // 0x8002EFAC: beq         $t7, $zero, L_8002EFE0
    if (ctx->r15 == 0) {
        // 0x8002EFB0: addiu       $v0, $v0, -0x4170
        ctx->r2 = ADD32(ctx->r2, -0X4170);
            goto L_8002EFE0;
    }
    // 0x8002EFB0: addiu       $v0, $v0, -0x4170
    ctx->r2 = ADD32(ctx->r2, -0X4170);
    // 0x8002EFB4: lw          $t4, 0x9C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X9C);
    // 0x8002EFB8: nop

    // 0x8002EFBC: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x8002EFC0: b           L_8002EFE0
    // 0x8002EFC4: sw          $t6, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r14;
        goto L_8002EFE0;
    // 0x8002EFC4: sw          $t6, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r14;
L_8002EFC8:
    // 0x8002EFC8: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8002EFCC: bne         $at, $zero, L_8002EE98
    if (ctx->r1 != 0) {
        // 0x8002EFD0: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_8002EE98;
    }
    // 0x8002EFD0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8002EFD4: b           L_8002EFE4
    // 0x8002EFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002EFE4;
    // 0x8002EFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002EFDC:
    // 0x8002EFDC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_8002EFE0:
    // 0x8002EFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002EFE4:
    // 0x8002EFE4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8002EFE8: jr          $ra
    // 0x8002EFEC: nop

    return;
    // 0x8002EFEC: nop

;}
RECOMP_FUNC void func_8002EFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EFF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EFF8: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x8002EFFC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002F000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F004: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002F008: jal         0x800188F0
    // 0x8002F00C: nop

    func_800188F0(rdram, ctx);
        goto after_0;
    // 0x8002F00C: nop

    after_0:
    // 0x8002F010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F018: jr          $ra
    // 0x8002F01C: nop

    return;
    // 0x8002F01C: nop

;}
RECOMP_FUNC void func_8002F020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F020: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002F024: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002F028: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8002F02C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F030: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8002F034: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002F038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F03C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002F040: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x8002F044: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8002F048: bne         $a2, $zero, L_8002F08C
    if (ctx->r6 != 0) {
        // 0x8002F04C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002F08C;
    }
    // 0x8002F04C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002F050: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8002F054:
    // 0x8002F054: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8002F058: nop

    // 0x8002F05C: beq         $t9, $zero, L_8002F080
    if (ctx->r25 == 0) {
        // 0x8002F060: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_8002F080;
    }
    // 0x8002F060: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8002F064: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8002F068: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002F06C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8002F070: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8002F074: lw          $a2, -0x601C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X601C);
    // 0x8002F078: b           L_8002F090
    // 0x8002F07C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
        goto L_8002F090;
    // 0x8002F07C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_8002F080:
    // 0x8002F080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002F084: bne         $v0, $a0, L_8002F054
    if (ctx->r2 != ctx->r4) {
        // 0x8002F088: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_8002F054;
    }
    // 0x8002F088: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_8002F08C:
    // 0x8002F08C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_8002F090:
    // 0x8002F090: jal         0x80009D90
    // 0x8002F094: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80009D90(rdram, ctx);
        goto after_0;
    // 0x8002F094: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002F098: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F09C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002F0A0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8002F0A4: lwc1        $f1, 0x5888($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5888);
    // 0x8002F0A8: lwc1        $f0, 0x588C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X588C);
    // 0x8002F0AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002F0B0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8002F0B4: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8002F0B8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002F0BC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002F0C0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002F0C4: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x8002F0C8: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x8002F0CC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8002F0D0: nop

    // 0x8002F0D4: bc1f        L_8002F0F8
    if (!c1cs) {
        // 0x8002F0D8: cvt.s.d     $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
            goto L_8002F0F8;
    }
    // 0x8002F0D8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x8002F0DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002F0E0: nop

L_8002F0E4:
    // 0x8002F0E4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8002F0E8: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8002F0EC: nop

    // 0x8002F0F0: bc1t        L_8002F0E4
    if (c1cs) {
        // 0x8002F0F4: nop
    
            goto L_8002F0E4;
    }
    // 0x8002F0F4: nop

L_8002F0F8:
    // 0x8002F0F8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002F0FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002F100: nop

    // 0x8002F104: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x8002F108: nop

    // 0x8002F10C: bc1f        L_8002F128
    if (!c1cs) {
        // 0x8002F110: nop
    
            goto L_8002F128;
    }
    // 0x8002F110: nop

L_8002F114:
    // 0x8002F114: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8002F118: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x8002F11C: nop

    // 0x8002F120: bc1t        L_8002F114
    if (c1cs) {
        // 0x8002F124: nop
    
            goto L_8002F114;
    }
    // 0x8002F124: nop

L_8002F128:
    // 0x8002F128: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8002F12C: nop

    // 0x8002F130: bc1f        L_8002F14C
    if (!c1cs) {
        // 0x8002F134: nop
    
            goto L_8002F14C;
    }
    // 0x8002F134: nop

L_8002F138:
    // 0x8002F138: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8002F13C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8002F140: nop

    // 0x8002F144: bc1t        L_8002F138
    if (c1cs) {
        // 0x8002F148: nop
    
            goto L_8002F138;
    }
    // 0x8002F148: nop

L_8002F14C:
    // 0x8002F14C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x8002F150: nop

    // 0x8002F154: bc1f        L_8002F170
    if (!c1cs) {
        // 0x8002F158: nop
    
            goto L_8002F170;
    }
    // 0x8002F158: nop

L_8002F15C:
    // 0x8002F15C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002F160: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x8002F164: nop

    // 0x8002F168: bc1t        L_8002F15C
    if (c1cs) {
        // 0x8002F16C: nop
    
            goto L_8002F15C;
    }
    // 0x8002F16C: nop

L_8002F170:
    // 0x8002F170: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x8002F174: swc1        $f12, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f12.u32l;
    // 0x8002F178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F17C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F180: jr          $ra
    // 0x8002F184: nop

    return;
    // 0x8002F184: nop

;}
RECOMP_FUNC void func_8002F188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F188: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002F18C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002F190: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8002F194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F198: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8002F19C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002F1A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F1A4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002F1A8: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x8002F1AC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8002F1B0: bne         $a2, $zero, L_8002F1F4
    if (ctx->r6 != 0) {
        // 0x8002F1B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002F1F4;
    }
    // 0x8002F1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002F1B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8002F1BC:
    // 0x8002F1BC: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8002F1C0: nop

    // 0x8002F1C4: beq         $t9, $zero, L_8002F1E8
    if (ctx->r25 == 0) {
        // 0x8002F1C8: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_8002F1E8;
    }
    // 0x8002F1C8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8002F1CC: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8002F1D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002F1D4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8002F1D8: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8002F1DC: lw          $a2, -0x601C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X601C);
    // 0x8002F1E0: b           L_8002F1F4
    // 0x8002F1E4: nop

        goto L_8002F1F4;
    // 0x8002F1E4: nop

L_8002F1E8:
    // 0x8002F1E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002F1EC: bne         $v0, $a0, L_8002F1BC
    if (ctx->r2 != ctx->r4) {
        // 0x8002F1F0: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_8002F1BC;
    }
    // 0x8002F1F0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_8002F1F4:
    // 0x8002F1F4: jal         0x80009D90
    // 0x8002F1F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80009D90(rdram, ctx);
        goto after_0;
    // 0x8002F1F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8002F1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F204: jr          $ra
    // 0x8002F208: nop

    return;
    // 0x8002F208: nop

;}
RECOMP_FUNC void func_8002F20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F20C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002F210: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002F214: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002F218: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002F21C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8002F220: lw          $v0, -0x6020($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6020);
    // 0x8002F224: jr          $ra
    // 0x8002F228: nop

    return;
    // 0x8002F228: nop

;}
RECOMP_FUNC void func_8002F22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F22C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002F230: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002F234: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002F238: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002F23C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8002F240: lw          $v0, -0x601C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X601C);
    // 0x8002F244: jr          $ra
    // 0x8002F248: nop

    return;
    // 0x8002F248: nop

;}
RECOMP_FUNC void func_8002F24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F24C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002F250: lw          $v0, -0xB44($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XB44);
    // 0x8002F254: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8002F258: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8002F25C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8002F260: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8002F264: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002F268: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002F26C: nop

    // 0x8002F270: bc1t        L_8002F304
    if (c1cs) {
        // 0x8002F274: nop
    
            goto L_8002F304;
    }
    // 0x8002F274: nop

    // 0x8002F278: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8002F27C: nop

    // 0x8002F280: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8002F284: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8002F288: nop

    // 0x8002F28C: bc1t        L_8002F304
    if (c1cs) {
        // 0x8002F290: nop
    
            goto L_8002F304;
    }
    // 0x8002F290: nop

    // 0x8002F294: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8002F298: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8002F29C: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x8002F2A0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8002F2A4: nop

    // 0x8002F2A8: bc1t        L_8002F304
    if (c1cs) {
        // 0x8002F2AC: nop
    
            goto L_8002F304;
    }
    // 0x8002F2AC: nop

    // 0x8002F2B0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8002F2B4: nop

    // 0x8002F2B8: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8002F2BC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8002F2C0: nop

    // 0x8002F2C4: bc1t        L_8002F304
    if (c1cs) {
        // 0x8002F2C8: nop
    
            goto L_8002F304;
    }
    // 0x8002F2C8: nop

    // 0x8002F2CC: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8002F2D0: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8002F2D4: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8002F2D8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8002F2DC: nop

    // 0x8002F2E0: bc1t        L_8002F304
    if (c1cs) {
        // 0x8002F2E4: nop
    
            goto L_8002F304;
    }
    // 0x8002F2E4: nop

    // 0x8002F2E8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8002F2EC: nop

    // 0x8002F2F0: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8002F2F4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8002F2F8: nop

    // 0x8002F2FC: bc1f        L_8002F324
    if (!c1cs) {
        // 0x8002F300: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002F324;
    }
    // 0x8002F300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002F304:
    // 0x8002F304: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8002F308: nop

    // 0x8002F30C: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x8002F310: bltz        $t7, L_8002F324
    if (SIGNED(ctx->r15) < 0) {
        // 0x8002F314: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002F324;
    }
    // 0x8002F314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002F318: jr          $ra
    // 0x8002F31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002F31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002F320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002F324:
    // 0x8002F324: jr          $ra
    // 0x8002F328: nop

    return;
    // 0x8002F328: nop

;}
RECOMP_FUNC void func_8002F32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F32C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002F330: lw          $v1, -0xB40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XB40);
    // 0x8002F334: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
    // 0x8002F338: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8002F33C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8002F340: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8002F344: nop

    // 0x8002F348: bc1t        L_8002F368
    if (c1cs) {
        // 0x8002F34C: nop
    
            goto L_8002F368;
    }
    // 0x8002F34C: nop

    // 0x8002F350: lwc1        $f2, 0x14($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8002F354: nop

    // 0x8002F358: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8002F35C: nop

    // 0x8002F360: bc1f        L_8002F370
    if (!c1cs) {
        // 0x8002F364: nop
    
            goto L_8002F370;
    }
    // 0x8002F364: nop

L_8002F368:
    // 0x8002F368: jr          $ra
    // 0x8002F36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002F36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002F370:
    // 0x8002F370: sub.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8002F374: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8002F378: sub.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x8002F37C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8002F380: nop

    // 0x8002F384: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8002F388: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002F38C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002F390: nop

    // 0x8002F394: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8002F398: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8002F39C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8002F3A0: sra         $a0, $v0, 8
    ctx->r4 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8002F3A4: slt         $at, $a0, $t8
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8002F3A8: beq         $at, $zero, L_8002F3E4
    if (ctx->r1 == 0) {
        // 0x8002F3AC: nop
    
            goto L_8002F3E4;
    }
    // 0x8002F3AC: nop

    // 0x8002F3B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8002F3B4: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x8002F3B8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8002F3BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002F3C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002F3C4: nop

    // 0x8002F3C8: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8002F3CC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8002F3D0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8002F3D4: sra         $t0, $a1, 8
    ctx->r8 = S32(SIGNED(ctx->r5) >> 8);
    // 0x8002F3D8: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8002F3DC: bne         $at, $zero, L_8002F3EC
    if (ctx->r1 != 0) {
        // 0x8002F3E0: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_8002F3EC;
    }
    // 0x8002F3E0: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_8002F3E4:
    // 0x8002F3E4: jr          $ra
    // 0x8002F3E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002F3E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002F3EC:
    // 0x8002F3EC: multu       $a2, $a0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002F3F0: lw          $t2, 0x18($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X18);
    // 0x8002F3F4: mflo        $t1
    ctx->r9 = lo;
    // 0x8002F3F8: addu        $a3, $t1, $a1
    ctx->r7 = ADD32(ctx->r9, ctx->r5);
    // 0x8002F3FC: sll         $t3, $a3, 3
    ctx->r11 = S32(ctx->r7 << 3);
    // 0x8002F400: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x8002F404: jr          $ra
    // 0x8002F408: nop

    return;
    // 0x8002F408: nop

;}
RECOMP_FUNC void func_8002F40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F40C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002F410: lw          $v1, -0x910($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X910);
    // 0x8002F414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F41C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002F420: bne         $v1, $zero, L_8002F478
    if (ctx->r3 != 0) {
        // 0x8002F424: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8002F478;
    }
    // 0x8002F424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002F428: jal         0x80006EC0
    // 0x8002F42C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80006EC0(rdram, ctx);
        goto after_0;
    // 0x8002F42C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8002F430: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002F434: addiu       $a0, $a0, -0x310
    ctx->r4 = ADD32(ctx->r4, -0X310);
    // 0x8002F438: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x8002F43C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002F440: jal         0x80007C3C
    // 0x8002F444: addiu       $a3, $v0, 0x40
    ctx->r7 = ADD32(ctx->r2, 0X40);
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x8002F444: addiu       $a3, $v0, 0x40
    ctx->r7 = ADD32(ctx->r2, 0X40);
    after_1:
    // 0x8002F448: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002F44C: addiu       $v1, $v1, -0x910
    ctx->r3 = ADD32(ctx->r3, -0X910);
    // 0x8002F450: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002F454: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8002F458: jal         0x8000701C
    // 0x8002F45C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8000701C(rdram, ctx);
        goto after_2;
    // 0x8002F45C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x8002F460: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002F464: lw          $t7, -0x910($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X910);
    // 0x8002F468: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8002F46C: sw          $v0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r2;
    // 0x8002F470: lw          $v1, -0x910($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X910);
    // 0x8002F474: nop

L_8002F478:
    // 0x8002F478: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x8002F47C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8002F480: nop

    // 0x8002F484: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8002F488: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002F48C: nop

    // 0x8002F490: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8002F494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F49C: jr          $ra
    // 0x8002F4A0: nop

    return;
    // 0x8002F4A0: nop

;}
RECOMP_FUNC void func_8002F4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F4A4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8002F4A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002F4AC: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x8002F4B0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8002F4B4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8002F4B8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8002F4BC: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x8002F4C0: ori         $t7, $t7, 0x1D00
    ctx->r15 = ctx->r15 | 0X1D00;
    // 0x8002F4C4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8002F4C8: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8002F4CC: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8002F4D0: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8002F4D4: lui         $t9, 0xEE00
    ctx->r25 = S32(0XEE00 << 16);
    // 0x8002F4D8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8002F4DC: lw          $t4, 0x40($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X40);
    // 0x8002F4E0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8002F4E4: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x8002F4E8: lui         $v1, 0xE200
    ctx->r3 = S32(0XE200 << 16);
    // 0x8002F4EC: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x8002F4F0: ori         $v1, $v1, 0x1E01
    ctx->r3 = ctx->r3 | 0X1E01;
    // 0x8002F4F4: addiu       $v0, $t1, 0x8
    ctx->r2 = ADD32(ctx->r9, 0X8);
    // 0x8002F4F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8002F4FC: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x8002F500: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x8002F504: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x8002F508: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x8002F50C: ori         $t8, $t8, 0x10C8
    ctx->r24 = ctx->r24 | 0X10C8;
    // 0x8002F510: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x8002F514: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8002F518: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8002F51C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8002F520: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x8002F524: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8002F528: lw          $a3, 0x3C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X3C);
    // 0x8002F52C: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x8002F530: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8002F534: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8002F538: sra         $t4, $a3, 24
    ctx->r12 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8002F53C: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x8002F540: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8002F544: sra         $t6, $a3, 8
    ctx->r14 = S32(SIGNED(ctx->r7) >> 8);
    // 0x8002F548: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8002F54C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8002F550: or          $t3, $t5, $t9
    ctx->r11 = ctx->r13 | ctx->r25;
    // 0x8002F554: or          $t5, $t3, $t8
    ctx->r13 = ctx->r11 | ctx->r24;
    // 0x8002F558: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x8002F55C: or          $t6, $t5, $t4
    ctx->r14 = ctx->r13 | ctx->r12;
    // 0x8002F560: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8002F564: lui         $t3, 0xFFFD
    ctx->r11 = S32(0XFFFD << 16);
    // 0x8002F568: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x8002F56C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8002F570: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x8002F574: ori         $t3, $t3, 0xF6FB
    ctx->r11 = ctx->r11 | 0XF6FB;
    // 0x8002F578: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x8002F57C: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8002F580: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8002F584: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x8002F588: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x8002F58C: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x8002F590: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8002F594: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8002F598: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8002F59C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002F5A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002F5A4: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8002F5A8: lw          $t6, 0x4C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4C);
    // 0x8002F5AC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002F5B0: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8002F5B4: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8002F5B8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8002F5BC: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8002F5C0: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x8002F5C4: andi        $t8, $t3, 0x3FF
    ctx->r24 = ctx->r11 & 0X3FF;
    // 0x8002F5C8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8002F5CC: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x8002F5D0: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x8002F5D4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8002F5D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002F5DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002F5E0: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8002F5E4: lw          $t7, 0x50($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X50);
    // 0x8002F5E8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8002F5EC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8002F5F0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8002F5F4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8002F5F8: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x8002F5FC: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x8002F600: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8002F604: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8002F608: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x8002F60C: or          $t6, $t5, $t4
    ctx->r14 = ctx->r13 | ctx->r12;
    // 0x8002F610: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8002F614: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002F618: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8002F61C: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8002F620: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002F624: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8002F628: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8002F62C: addiu       $a2, $t2, 0x8
    ctx->r6 = ADD32(ctx->r10, 0X8);
    // 0x8002F630: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8002F634: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x8002F638: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8002F63C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8002F640: andi        $t8, $t3, 0x3FF
    ctx->r24 = ctx->r11 & 0X3FF;
    // 0x8002F644: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8002F648: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002F64C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002F650: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x8002F654: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002F658: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8002F65C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8002F660: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x8002F664: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002F668: or          $t3, $t9, $t7
    ctx->r11 = ctx->r25 | ctx->r15;
    // 0x8002F66C: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x8002F670: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8002F674: jr          $ra
    // 0x8002F678: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    return;
    // 0x8002F678: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
;}
RECOMP_FUNC void func_8002F67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F67C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002F680: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F684: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002F688: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x8002F68C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x8002F690: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x8002F694: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x8002F698: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8002F69C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8002F6A0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8002F6A4: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8002F6A8: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8002F6AC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8002F6B0: addiu       $t7, $t7, -0x10D8
    ctx->r15 = ADD32(ctx->r15, -0X10D8);
    // 0x8002F6B4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F6B8: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x8002F6BC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8002F6C0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8002F6C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F6C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F6CC: lui         $s6, 0xE700
    ctx->r22 = S32(0XE700 << 16);
    // 0x8002F6D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002F6D4: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x8002F6D8: sw          $s6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r22;
    // 0x8002F6DC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8002F6E0: ori         $t8, $t8, 0xA01
    ctx->r24 = ctx->r24 | 0XA01;
    // 0x8002F6E4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F6E8: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8002F6EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002F6F0: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8002F6F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F6F8: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x8002F6FC: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x8002F700: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8002F704: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8002F708: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x8002F70C: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x8002F710: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x8002F714: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8002F718: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x8002F71C: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x8002F720: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002F724: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8002F728: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8002F72C: bne         $a1, $at, L_8002F770
    if (ctx->r5 != ctx->r1) {
        // 0x8002F730: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8002F770;
    }
    // 0x8002F730: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F734: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F738: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F73C: lui         $t9, 0xFC11
    ctx->r25 = S32(0XFC11 << 16);
    // 0x8002F740: ori         $t9, $t9, 0xFE23
    ctx->r25 = ctx->r25 | 0XFE23;
    // 0x8002F744: addiu       $t6, $zero, -0x805
    ctx->r14 = ADD32(0, -0X805);
    // 0x8002F748: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F74C: lui         $t8, 0xFFFF
    ctx->r24 = S32(0XFFFF << 16);
    // 0x8002F750: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8002F754: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002F758: ori         $t8, $t8, 0xFF
    ctx->r24 = ctx->r24 | 0XFF;
    // 0x8002F75C: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8002F760: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002F764: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8002F768: b           L_8002F818
    // 0x8002F76C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_8002F818;
    // 0x8002F76C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002F770:
    // 0x8002F770: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002F774: bne         $a1, $at, L_8002F7B4
    if (ctx->r5 != ctx->r1) {
        // 0x8002F778: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8002F7B4;
    }
    // 0x8002F778: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F77C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F780: lui         $t9, 0xFC11
    ctx->r25 = S32(0XFC11 << 16);
    // 0x8002F784: ori         $t9, $t9, 0xFE23
    ctx->r25 = ctx->r25 | 0XFE23;
    // 0x8002F788: addiu       $t6, $zero, -0x805
    ctx->r14 = ADD32(0, -0X805);
    // 0x8002F78C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F790: lui         $t8, 0x6464
    ctx->r24 = S32(0X6464 << 16);
    // 0x8002F794: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8002F798: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002F79C: ori         $t8, $t8, 0x64FF
    ctx->r24 = ctx->r24 | 0X64FF;
    // 0x8002F7A0: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8002F7A4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002F7A8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8002F7AC: b           L_8002F818
    // 0x8002F7B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_8002F818;
    // 0x8002F7B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002F7B4:
    // 0x8002F7B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002F7B8: bne         $a1, $at, L_8002F7FC
    if (ctx->r5 != ctx->r1) {
        // 0x8002F7BC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8002F7FC;
    }
    // 0x8002F7BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F7C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F7C4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F7C8: lui         $t9, 0xFC11
    ctx->r25 = S32(0XFC11 << 16);
    // 0x8002F7CC: ori         $t9, $t9, 0xFE23
    ctx->r25 = ctx->r25 | 0XFE23;
    // 0x8002F7D0: addiu       $t6, $zero, -0x805
    ctx->r14 = ADD32(0, -0X805);
    // 0x8002F7D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F7D8: lui         $t8, 0xFF
    ctx->r24 = S32(0XFF << 16);
    // 0x8002F7DC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8002F7E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002F7E4: ori         $t8, $t8, 0xFF
    ctx->r24 = ctx->r24 | 0XFF;
    // 0x8002F7E8: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8002F7EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002F7F0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8002F7F4: b           L_8002F818
    // 0x8002F7F8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_8002F818;
    // 0x8002F7F8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002F7FC:
    // 0x8002F7FC: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x8002F800: lui         $t6, 0xFFFC
    ctx->r14 = S32(0XFFFC << 16);
    // 0x8002F804: ori         $t6, $t6, 0xF87C
    ctx->r14 = ctx->r14 | 0XF87C;
    // 0x8002F808: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8002F80C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002F810: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8002F814: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002F818:
    // 0x8002F818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002F81C: bne         $a1, $at, L_8002F8C0
    if (ctx->r5 != ctx->r1) {
        // 0x8002F820: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8002F8C0;
    }
    // 0x8002F820: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8002F824: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8002F828: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F82C: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8002F830: addiu       $s3, $s3, -0x908
    ctx->r19 = ADD32(ctx->r19, -0X908);
    // 0x8002F834: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002F838: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8002F83C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F840: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002F844: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002F848: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8002F84C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8002F850: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F854: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002F858: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x8002F85C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8002F860: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F864: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8002F868: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8002F86C: lui         $s4, 0x700
    ctx->r20 = S32(0X700 << 16);
    // 0x8002F870: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x8002F874: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002F878: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F87C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8002F880: sw          $s4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r20;
    // 0x8002F884: lui         $s5, 0xE600
    ctx->r21 = S32(0XE600 << 16);
    // 0x8002F888: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8002F88C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F890: sw          $s5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r21;
    // 0x8002F894: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8002F898: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x8002F89C: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8002F8A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F8A4: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x8002F8A8: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8002F8AC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8002F8B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002F8B4: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8002F8B8: b           L_8002F958
    // 0x8002F8BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_8002F958;
    // 0x8002F8BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002F8C0:
    // 0x8002F8C0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8002F8C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F8C8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8002F8CC: addiu       $s3, $s3, -0x908
    ctx->r19 = ADD32(ctx->r19, -0X908);
    // 0x8002F8D0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8002F8D4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8002F8D8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F8DC: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8002F8E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002F8E4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8002F8E8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8002F8EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F8F0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002F8F4: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x8002F8F8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8002F8FC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F900: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8002F904: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8002F908: lui         $s4, 0x700
    ctx->r20 = S32(0X700 << 16);
    // 0x8002F90C: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8002F910: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002F914: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F918: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8002F91C: sw          $s4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r20;
    // 0x8002F920: lui         $s5, 0xE600
    ctx->r21 = S32(0XE600 << 16);
    // 0x8002F924: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8002F928: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F92C: sw          $s5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r21;
    // 0x8002F930: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8002F934: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x8002F938: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8002F93C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002F940: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8002F944: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8002F948: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8002F94C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002F950: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8002F954: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002F958:
    // 0x8002F958: lui         $ra, 0xF540
    ctx->r31 = S32(0XF540 << 16);
    // 0x8002F95C: lui         $fp, 0x713
    ctx->r30 = S32(0X713 << 16);
    // 0x8002F960: lui         $s2, 0x27
    ctx->r18 = S32(0X27 << 16);
    // 0x8002F964: ori         $s2, $s2, 0xC01C
    ctx->r18 = ctx->r18 | 0XC01C;
    // 0x8002F968: ori         $fp, $fp, 0xF0CD
    ctx->r30 = ctx->r30 | 0XF0CD;
    // 0x8002F96C: ori         $ra, $ra, 0x1400
    ctx->r31 = ctx->r31 | 0X1400;
    // 0x8002F970: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8002F974: addiu       $t2, $zero, 0x17
    ctx->r10 = ADD32(0, 0X17);
    // 0x8002F978: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x8002F97C: addiu       $s7, $zero, 0x280
    ctx->r23 = ADD32(0, 0X280);
    // 0x8002F980: lui         $s1, 0xF200
    ctx->r17 = S32(0XF200 << 16);
    // 0x8002F984: lui         $s0, 0xF300
    ctx->r16 = S32(0XF300 << 16);
    // 0x8002F988: lui         $t5, 0xF550
    ctx->r13 = S32(0XF550 << 16);
    // 0x8002F98C: lui         $t4, 0xFD50
    ctx->r12 = S32(0XFD50 << 16);
L_8002F990:
    // 0x8002F990: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8002F994: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002F998: bne         $t9, $at, L_8002FA2C
    if (ctx->r25 != ctx->r1) {
        // 0x8002F99C: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8002FA2C;
    }
    // 0x8002F99C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F9A0: multu       $t0, $s7
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002F9A4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002F9A8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8002F9AC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8002F9B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F9B4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002F9B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002F9BC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8002F9C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F9C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002F9C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F9CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002F9D0: mflo        $t8
    ctx->r24 = lo;
    // 0x8002F9D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002F9D8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8002F9DC: sw          $s4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r20;
    // 0x8002F9E0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8002F9E4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8002F9E8: sw          $s5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r21;
    // 0x8002F9EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F9F0: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8002F9F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002F9F8: sw          $fp, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r30;
    // 0x8002F9FC: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
    // 0x8002FA00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002FA04: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA08: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8002FA0C: sw          $s6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r22;
    // 0x8002FA10: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002FA14: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002FA18: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8002FA1C: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x8002FA20: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x8002FA24: b           L_8002FAC4
    // 0x8002FA28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_8002FAC4;
    // 0x8002FA28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002FA2C:
    // 0x8002FA2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8002FA30: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8002FA34: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8002FA38: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8002FA3C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x8002FA40: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x8002FA44: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8002FA48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002FA4C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA50: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002FA54: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8002FA58: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA5C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002FA60: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA64: sw          $s4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r20;
    // 0x8002FA68: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8002FA6C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002FA70: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA74: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8002FA78: sw          $s5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r21;
    // 0x8002FA7C: lui         $t6, 0x727
    ctx->r14 = S32(0X727 << 16);
    // 0x8002FA80: ori         $t6, $t6, 0xF067
    ctx->r14 = ctx->r14 | 0XF067;
    // 0x8002FA84: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8002FA88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA8C: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x8002FA90: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
    // 0x8002FA94: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002FA98: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FA9C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8002FAA0: sw          $s6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r22;
    // 0x8002FAA4: lui         $t7, 0xF548
    ctx->r15 = S32(0XF548 << 16);
    // 0x8002FAA8: ori         $t7, $t7, 0x2800
    ctx->r15 = ctx->r15 | 0X2800;
    // 0x8002FAAC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002FAB0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8002FAB4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002FAB8: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x8002FABC: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x8002FAC0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8002FAC4:
    // 0x8002FAC4: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8002FAC8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8002FACC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8002FAD0: lui         $at, 0xE450
    ctx->r1 = S32(0XE450 << 16);
    // 0x8002FAD4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8002FAD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FADC: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8002FAE0: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8002FAE4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002FAE8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8002FAEC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FAF0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8002FAF4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002FAF8: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x8002FAFC: lui         $t9, 0xE100
    ctx->r25 = S32(0XE100 << 16);
    // 0x8002FB00: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8002FB04: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8002FB08: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8002FB0C: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8002FB10: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8002FB14: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x8002FB18: addiu       $t3, $t3, 0x10
    ctx->r11 = ADD32(ctx->r11, 0X10);
    // 0x8002FB1C: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x8002FB20: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8002FB24: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8002FB28: bne         $t0, $at, L_8002F990
    if (ctx->r8 != ctx->r1) {
        // 0x8002FB2C: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8002F990;
    }
    // 0x8002FB2C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002FB30: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x8002FB34: ori         $t8, $t8, 0xC00
    ctx->r24 = ctx->r24 | 0XC00;
    // 0x8002FB38: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8002FB3C: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8002FB40: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8002FB44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002FB48: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x8002FB4C: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x8002FB50: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x8002FB54: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x8002FB58: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x8002FB5C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x8002FB60: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x8002FB64: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8002FB68: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8002FB6C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8002FB70: jr          $ra
    // 0x8002FB74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002FB74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002FB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FB78: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8002FB7C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002FB80: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8002FB84: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8002FB88: ori         $at, $at, 0x903
    ctx->r1 = ctx->r1 | 0X903;
    // 0x8002FB8C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8002FB90: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FB94: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8002FB98: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002FB9C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002FBA0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002FBA4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002FBA8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002FBAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002FBB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002FBB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002FBB8: bne         $t7, $zero, L_8002FCC0
    if (ctx->r15 != 0) {
        // 0x8002FBBC: sw          $a0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r4;
            goto L_8002FCC0;
    }
    // 0x8002FBBC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8002FBC0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002FBC4: lw          $t8, -0x4320($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4320);
    // 0x8002FBC8: lw          $s4, 0x0($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X0);
    // 0x8002FBCC: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x8002FBD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002FBD4: blez        $v1, L_8002FCC0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002FBD8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002FCC0;
    }
    // 0x8002FBD8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8002FBDC: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x8002FBE0: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8002FBE4: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002FBE8: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8002FBEC: addiu       $s2, $s2, -0x4308
    ctx->r18 = ADD32(ctx->r18, -0X4308);
    // 0x8002FBF0: addiu       $s3, $s3, -0x4304
    ctx->r19 = ADD32(ctx->r19, -0X4304);
    // 0x8002FBF4: addiu       $s6, $s6, -0xB50
    ctx->r22 = ADD32(ctx->r22, -0XB50);
    // 0x8002FBF8: addiu       $fp, $fp, -0xB3C
    ctx->r30 = ADD32(ctx->r30, -0XB3C);
    // 0x8002FBFC: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x8002FC00: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_8002FC04:
    // 0x8002FC04: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x8002FC08: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8002FC0C: addu        $t1, $t0, $s1
    ctx->r9 = ADD32(ctx->r8, ctx->r17);
    // 0x8002FC10: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8002FC14: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8002FC18: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x8002FC1C: addu        $v0, $t9, $t3
    ctx->r2 = ADD32(ctx->r25, ctx->r11);
    // 0x8002FC20: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8002FC24: nop

    // 0x8002FC28: bne         $s5, $t4, L_8002FCB0
    if (ctx->r21 != ctx->r12) {
        // 0x8002FC2C: nop
    
            goto L_8002FCB0;
    }
    // 0x8002FC2C: nop

    // 0x8002FC30: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x8002FC34: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8002FC38: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002FC3C: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x8002FC40: nop

    // 0x8002FC44: bne         $t5, $t0, L_8002FCB0
    if (ctx->r13 != ctx->r8) {
        // 0x8002FC48: nop
    
            goto L_8002FCB0;
    }
    // 0x8002FC48: nop

    // 0x8002FC4C: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x8002FC50: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8002FC54: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x8002FC58: bne         $at, $zero, L_8002FCB0
    if (ctx->r1 != 0) {
        // 0x8002FC5C: nop
    
            goto L_8002FCB0;
    }
    // 0x8002FC5C: nop

    // 0x8002FC60: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8002FC64: jal         0x8004A0A0
    // 0x8002FC68: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8002FC68: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x8002FC6C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8002FC70: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8002FC74: swc1        $f4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->f4.u32l;
    // 0x8002FC78: addu        $t3, $t9, $s1
    ctx->r11 = ADD32(ctx->r25, ctx->r17);
    // 0x8002FC7C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8002FC80: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8002FC84: sll         $t6, $t4, 5
    ctx->r14 = S32(ctx->r12 << 5);
    // 0x8002FC88: addu        $v0, $t2, $t6
    ctx->r2 = ADD32(ctx->r10, ctx->r14);
    // 0x8002FC8C: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x8002FC90: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x8002FC94: jal         0x800305D0
    // 0x8002FC98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800305D0(rdram, ctx);
        goto after_1;
    // 0x8002FC98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8002FC9C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002FCA0: lw          $t7, -0x4320($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4320);
    // 0x8002FCA4: nop

    // 0x8002FCA8: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x8002FCAC: nop

L_8002FCB0:
    // 0x8002FCB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8002FCB4: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002FCB8: bne         $at, $zero, L_8002FC04
    if (ctx->r1 != 0) {
        // 0x8002FCBC: addiu       $s1, $s1, 0x4C
        ctx->r17 = ADD32(ctx->r17, 0X4C);
            goto L_8002FC04;
    }
    // 0x8002FCBC: addiu       $s1, $s1, 0x4C
    ctx->r17 = ADD32(ctx->r17, 0X4C);
L_8002FCC0:
    // 0x8002FCC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FCC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002FCC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002FCCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002FCD0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002FCD4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002FCD8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002FCDC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002FCE0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002FCE4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8002FCE8: jr          $ra
    // 0x8002FCEC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8002FCEC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8002FCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FCF0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8002FCF4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8002FCF8: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x8002FCFC: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x8002FD00: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8002FD04: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x8002FD08: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8002FD0C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8002FD10: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8002FD14: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x8002FD18: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8002FD1C: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x8002FD20: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8002FD24: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x8002FD28: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8002FD2C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8002FD30: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8002FD34: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8002FD38: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002FD3C: jal         0x80007774
    // 0x8002FD40: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8002FD40: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8002FD44: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x8002FD48: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x8002FD4C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x8002FD50: addiu       $s5, $s5, -0x910
    ctx->r21 = ADD32(ctx->r21, -0X910);
    // 0x8002FD54: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
L_8002FD58:
    // 0x8002FD58: nop

    // 0x8002FD5C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002FD60: bgtz        $t7, L_8002FD84
    if (SIGNED(ctx->r15) > 0) {
        // 0x8002FD64: sw          $t7, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r15;
            goto L_8002FD84;
    }
    // 0x8002FD64: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x8002FD68: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8002FD6C: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x8002FD70: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x8002FD74: jal         0x8002B0A4
    // 0x8002FD78: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    func_8002B0A4(rdram, ctx);
        goto after_1;
    // 0x8002FD78: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    after_1:
    // 0x8002FD7C: jal         0x80007AE0
    // 0x8002FD80: nop

    func_80007AE0(rdram, ctx);
        goto after_2;
    // 0x8002FD80: nop

    after_2:
L_8002FD84:
    // 0x8002FD84: lwc1        $f26, 0x4($s4)
    ctx->f26.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8002FD88: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8002FD8C: bne         $s3, $zero, L_8002FDD0
    if (ctx->r19 != 0) {
        // 0x8002FD90: nop
    
            goto L_8002FDD0;
    }
    // 0x8002FD90: nop

    // 0x8002FD94: jal         0x80027F1C
    // 0x8002FD98: nop

    func_80027F1C(rdram, ctx);
        goto after_3;
    // 0x8002FD98: nop

    after_3:
    // 0x8002FD9C: jal         0x80027F1C
    // 0x8002FDA0: mov.d       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.d = ctx->f0.d;
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x8002FDA0: mov.d       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.d = ctx->f0.d;
    after_4:
    // 0x8002FDA4: jal         0x80027F1C
    // 0x8002FDA8: mov.d       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.d = ctx->f0.d;
    func_80027F1C(rdram, ctx);
        goto after_5;
    // 0x8002FDA8: mov.d       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.d = ctx->f0.d;
    after_5:
    // 0x8002FDAC: cvt.s.d     $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.d); 
    ctx->f4.fl = CVT_S_D(ctx->f28.d);
    // 0x8002FDB0: mul.s       $f20, $f4, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8002FDB4: cvt.s.d     $f6, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.d); 
    ctx->f6.fl = CVT_S_D(ctx->f30.d);
    // 0x8002FDB8: mul.s       $f22, $f6, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8002FDBC: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x8002FDC0: mul.s       $f24, $f8, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8002FDC4: jal         0x8002B0A4
    // 0x8002FDC8: nop

    func_8002B0A4(rdram, ctx);
        goto after_6;
    // 0x8002FDC8: nop

    after_6:
    // 0x8002FDCC: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_8002FDD0:
    // 0x8002FDD0: jal         0x80007AB0
    // 0x8002FDD4: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8002FDD4: nop

    after_7:
    // 0x8002FDD8: b           L_8002FD58
    // 0x8002FDDC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
        goto L_8002FD58;
    // 0x8002FDDC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8002FDE0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8002FDE4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8002FDE8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8002FDEC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8002FDF0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002FDF4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8002FDF8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002FDFC: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8002FE00: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002FE04: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8002FE08: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002FE0C: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8002FE10: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002FE14: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8002FE18: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8002FE1C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FE20: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x8002FE24: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x8002FE28: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x8002FE2C: jr          $ra
    // 0x8002FE30: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8002FE30: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8002FE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FE34: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8002FE38: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8002FE3C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x8002FE40: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8002FE44: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8002FE48: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8002FE4C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8002FE50: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8002FE54: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8002FE58: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8002FE5C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8002FE60: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8002FE64: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8002FE68: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8002FE6C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8002FE70: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8002FE74: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8002FE78: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8002FE7C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8002FE80: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8002FE84: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8002FE88: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002FE8C: jal         0x80007774
    // 0x8002FE90: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8002FE90: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8002FE94: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x8002FE98: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8002FE9C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8002FEA0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8002FEA4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8002FEA8: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x8002FEAC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8002FEB0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8002FEB4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002FEB8: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8002FEBC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8002FEC0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8002FEC4: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x8002FEC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002FECC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8002FED0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8002FED4: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x8002FED8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8002FEDC: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8002FEE0: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8002FEE4: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8002FEE8: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8002FEEC: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002FEF0: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x8002FEF4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8002FEF8: addiu       $s4, $s4, -0x42C0
    ctx->r20 = ADD32(ctx->r20, -0X42C0);
    // 0x8002FEFC: addiu       $s5, $s5, -0x42E0
    ctx->r21 = ADD32(ctx->r21, -0X42E0);
    // 0x8002FF00: addiu       $s6, $s6, -0x42D4
    ctx->r22 = ADD32(ctx->r22, -0X42D4);
    // 0x8002FF04: addiu       $s7, $s7, -0x42D0
    ctx->r23 = ADD32(ctx->r23, -0X42D0);
    // 0x8002FF08: addiu       $fp, $fp, -0x42D8
    ctx->r30 = ADD32(ctx->r30, -0X42D8);
    // 0x8002FF0C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8002FF10: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x8002FF14: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_8002FF18:
    // 0x8002FF18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FF1C: beq         $s3, $a0, L_80030068
    if (ctx->r19 == ctx->r4) {
        // 0x8002FF20: nop
    
            goto L_80030068;
    }
    // 0x8002FF20: nop

    // 0x8002FF24: jal         0x8004A0A0
    // 0x8002FF28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8002FF28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x8002FF2C: bne         $v0, $zero, L_80030068
    if (ctx->r2 != 0) {
        // 0x8002FF30: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80030068;
    }
    // 0x8002FF30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002FF34: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002FF38: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8002FF3C: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x8002FF40: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x8002FF44: bne         $t9, $zero, L_80030060
    if (ctx->r25 != 0) {
        // 0x8002FF48: swc1        $f14, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
            goto L_80030060;
    }
    // 0x8002FF48: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x8002FF4C: lwc1        $f2, 0x0($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X0);
    // 0x8002FF50: lwc1        $f0, 0x0($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8002FF54: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002FF58: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8002FF5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002FF60: c.le.s      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.fl <= ctx->f28.fl;
    // 0x8002FF64: nop

    // 0x8002FF68: bc1f        L_8002FF80
    if (!c1cs) {
        // 0x8002FF6C: nop
    
            goto L_8002FF80;
    }
    // 0x8002FF6C: nop

    // 0x8002FF70: mul.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x8002FF74: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8002FF78: b           L_8002FFB8
    // 0x8002FF7C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
        goto L_8002FFB8;
    // 0x8002FF7C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
L_8002FF80:
    // 0x8002FF80: add.s       $f12, $f0, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x8002FF84: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002FF88: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8002FF8C: nop

    // 0x8002FF90: bc1f        L_8002FFA0
    if (!c1cs) {
        // 0x8002FF94: nop
    
            goto L_8002FFA0;
    }
    // 0x8002FF94: nop

    // 0x8002FF98: b           L_8002FFB8
    // 0x8002FF9C: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
        goto L_8002FFB8;
    // 0x8002FF9C: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
L_8002FFA0:
    // 0x8002FFA0: sub.s       $f0, $f2, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f24.fl;
    // 0x8002FFA4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8002FFA8: nop

    // 0x8002FFAC: bc1f        L_8002FFB8
    if (!c1cs) {
        // 0x8002FFB0: nop
    
            goto L_8002FFB8;
    }
    // 0x8002FFB0: nop

    // 0x8002FFB4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
L_8002FFB8:
    // 0x8002FFB8: lwc1        $f0, 0x0($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X0);
    // 0x8002FFBC: nop

    // 0x8002FFC0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8002FFC4: nop

    // 0x8002FFC8: bc1f        L_8002FFD8
    if (!c1cs) {
        // 0x8002FFCC: nop
    
            goto L_8002FFD8;
    }
    // 0x8002FFCC: nop

    // 0x8002FFD0: b           L_8002FFF4
    // 0x8002FFD4: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
        goto L_8002FFF4;
    // 0x8002FFD4: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
L_8002FFD8:
    // 0x8002FFD8: lwc1        $f0, -0x42DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X42DC);
    // 0x8002FFDC: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x8002FFE0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8002FFE4: nop

    // 0x8002FFE8: bc1f        L_8002FFF4
    if (!c1cs) {
        // 0x8002FFEC: nop
    
            goto L_8002FFF4;
    }
    // 0x8002FFEC: nop

    // 0x8002FFF0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
L_8002FFF4:
    // 0x8002FFF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002FFF8: lwc1        $f0, -0x42CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X42CC);
    // 0x8002FFFC: lwc1        $f2, 0x0($fp)
    ctx->f2.u32l = MEM_W(ctx->r30, 0X0);
    // 0x80030000: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80030004: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80030008: c.le.s      $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f12.fl <= ctx->f30.fl;
    // 0x8003000C: nop

    // 0x80030010: bc1f        L_80030028
    if (!c1cs) {
        // 0x80030014: nop
    
            goto L_80030028;
    }
    // 0x80030014: nop

    // 0x80030018: mul.s       $f16, $f12, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x8003001C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80030020: b           L_80030060
    // 0x80030024: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
        goto L_80030060;
    // 0x80030024: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
L_80030028:
    // 0x80030028: add.s       $f12, $f0, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x8003002C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80030030: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80030034: nop

    // 0x80030038: bc1f        L_80030048
    if (!c1cs) {
        // 0x8003003C: nop
    
            goto L_80030048;
    }
    // 0x8003003C: nop

    // 0x80030040: b           L_80030060
    // 0x80030044: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
        goto L_80030060;
    // 0x80030044: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
L_80030048:
    // 0x80030048: sub.s       $f0, $f2, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x8003004C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80030050: nop

    // 0x80030054: bc1f        L_80030060
    if (!c1cs) {
        // 0x80030058: nop
    
            goto L_80030060;
    }
    // 0x80030058: nop

    // 0x8003005C: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
L_80030060:
    // 0x80030060: jal         0x80009F20
    // 0x80030064: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009F20(rdram, ctx);
        goto after_2;
    // 0x80030064: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_80030068:
    // 0x80030068: jal         0x80007AB0
    // 0x8003006C: nop

    func_80007AB0(rdram, ctx);
        goto after_3;
    // 0x8003006C: nop

    after_3:
    // 0x80030070: b           L_8002FF18
    // 0x80030074: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
        goto L_8002FF18;
    // 0x80030074: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80030078: nop

    // 0x8003007C: nop

    // 0x80030080: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80030084: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80030088: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003008C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80030090: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80030094: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80030098: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8003009C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800300A0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800300A4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800300A8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800300AC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800300B0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800300B4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800300B8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800300BC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800300C0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800300C4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800300C8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800300CC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800300D0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800300D4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x800300D8: jr          $ra
    // 0x800300DC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x800300DC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_800300E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800300E0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800300E4: lw          $t6, 0x120($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X120);
    // 0x800300E8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x800300EC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800300F0: lw          $t7, 0x128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X128);
    // 0x800300F4: jr          $ra
    // 0x800300F8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    return;
    // 0x800300F8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_800300FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800300FC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80030100: lw          $a1, -0xB48($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XB48);
    // 0x80030104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80030108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003010C: beq         $a1, $zero, L_8003011C
    if (ctx->r5 == 0) {
        // 0x80030110: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8003011C;
    }
    // 0x80030110: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80030114: jal         0x80002C10
    // 0x80030118: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80002C10(rdram, ctx);
        goto after_0;
    // 0x80030118: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_8003011C:
    // 0x8003011C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80030120: jal         0x80002F88
    // 0x80030124: nop

    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x80030124: nop

    after_1:
    // 0x80030128: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003012C: sw          $v0, -0xB48($at)
    MEM_W(-0XB48, ctx->r1) = ctx->r2;
    // 0x80030130: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80030134: lw          $a0, -0xB48($a1)
    ctx->r4 = MEM_W(ctx->r5, -0XB48);
    // 0x80030138: nop

    // 0x8003013C: addiu       $v1, $a0, 0x230
    ctx->r3 = ADD32(ctx->r4, 0X230);
    // 0x80030140: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80030144: nop

    // 0x80030148: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8003014C: jal         0x80010730
    // 0x80030150: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_80010730(rdram, ctx);
        goto after_2;
    // 0x80030150: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_2:
    // 0x80030154: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80030158: lw          $v1, 0x6280($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6280);
    // 0x8003015C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80030160: lhu         $a1, 0x60($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X60);
    // 0x80030164: lw          $a3, 0x64($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X64);
    // 0x80030168: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x8003016C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80030170: jal         0x8001B20C
    // 0x80030174: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    func_8001B20C(rdram, ctx);
        goto after_3;
    // 0x80030174: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    after_3:
    // 0x80030178: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8003017C: lw          $v0, 0x6280($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6280);
    // 0x80030180: nop

    // 0x80030184: lbu         $a2, 0x5A($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5A);
    // 0x80030188: lbu         $a1, 0x59($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X59);
    // 0x8003018C: lbu         $a0, 0x58($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X58);
    // 0x80030190: jal         0x80004634
    // 0x80030194: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    func_80004634(rdram, ctx);
        goto after_4;
    // 0x80030194: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    after_4:
    // 0x80030198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003019C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800301A0: jr          $ra
    // 0x800301A4: nop

    return;
    // 0x800301A4: nop

;}
RECOMP_FUNC void func_800301A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800301A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800301AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800301B0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800301B4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800301B8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800301BC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800301C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800301C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800301C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800301CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800301D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800301D4: jal         0x8002BF9C
    // 0x800301D8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_8002BF9C(rdram, ctx);
        goto after_0;
    // 0x800301D8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_0:
    // 0x800301DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800301E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800301E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800301E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800301EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800301F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800301F4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800301F8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800301FC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80030200: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80030204: jr          $ra
    // 0x80030208: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80030208: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003020C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003020C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80030210: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x80030214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80030218: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8003021C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030220: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80030224: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80030228: jal         0x8005C8FC
    // 0x8003022C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8005C8FC(rdram, ctx);
        goto after_0;
    // 0x8003022C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80030230: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80030234: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80030238: lw          $t8, -0xB50($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XB50);
    // 0x8003023C: nop

    // 0x80030240: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80030244: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80030248: jal         0x8005C864
    // 0x8003024C: nop

    func_8005C864(rdram, ctx);
        goto after_1;
    // 0x8003024C: nop

    after_1:
    // 0x80030250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80030258: jr          $ra
    // 0x8003025C: nop

    return;
    // 0x8003025C: nop

;}
RECOMP_FUNC void func_80030260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030260: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80030264: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x80030268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003026C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80030270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030274: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80030278: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8003027C: jal         0x8005C8FC
    // 0x80030280: nop

    func_8005C8FC(rdram, ctx);
        goto after_0;
    // 0x80030280: nop

    after_0:
    // 0x80030284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003028C: jr          $ra
    // 0x80030290: nop

    return;
    // 0x80030290: nop

;}
RECOMP_FUNC void func_80030294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030294: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80030298: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x8003029C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800302A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800302A4: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x800302A8: jr          $ra
    // 0x800302AC: nop

    return;
    // 0x800302AC: nop

;}
RECOMP_FUNC void func_800302B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800302B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800302B4: beq         $a0, $zero, L_800302E4
    if (ctx->r4 == 0) {
        // 0x800302B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800302E4;
    }
    // 0x800302B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800302BC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800302C0: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x800302C4: nop

    // 0x800302C8: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x800302CC: bne         $t7, $zero, L_80030308
    if (ctx->r15 != 0) {
        // 0x800302D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80030308;
    }
    // 0x800302D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800302D4: jal         0x800406EC
    // 0x800302D8: nop

    func_800406EC(rdram, ctx);
        goto after_0;
    // 0x800302D8: nop

    after_0:
    // 0x800302DC: b           L_80030308
    // 0x800302E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030308;
    // 0x800302E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800302E4:
    // 0x800302E4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800302E8: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x800302EC: nop

    // 0x800302F0: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x800302F4: bne         $t9, $zero, L_80030308
    if (ctx->r25 != 0) {
        // 0x800302F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80030308;
    }
    // 0x800302F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800302FC: jal         0x80040678
    // 0x80030300: nop

    func_80040678(rdram, ctx);
        goto after_1;
    // 0x80030300: nop

    after_1:
    // 0x80030304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030308:
    // 0x80030308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003030C: jr          $ra
    // 0x80030310: nop

    return;
    // 0x80030310: nop

;}
RECOMP_FUNC void func_80030314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030314: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80030318: lw          $v0, -0x90C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X90C);
    // 0x8003031C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80030324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003032C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80030330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030334: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x80030338: jal         0x8001C568
    // 0x8003033C: nop

    func_8001C568(rdram, ctx);
        goto after_0;
    // 0x8003033C: nop

    after_0:
    // 0x80030340: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80030344: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80030348: jal         0x8001D138
    // 0x8003034C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8003034C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80030350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030354: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80030358: addiu       $v1, $v1, -0x42F0
    ctx->r3 = ADD32(ctx->r3, -0X42F0);
    // 0x8003035C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80030360: jr          $ra
    // 0x80030364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80030364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80030370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030378: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003037C: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x80030380: jal         0x80073EF0
    // 0x80030384: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80030384: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x80030388: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8003038C: addiu       $a0, $a0, 0x7618
    ctx->r4 = ADD32(ctx->r4, 0X7618);
    // 0x80030390: ori         $a1, $zero, 0xFFF6
    ctx->r5 = 0 | 0XFFF6;
    // 0x80030394: addiu       $a2, $zero, 0x1800
    ctx->r6 = ADD32(0, 0X1800);
    // 0x80030398: jal         0x80007C3C
    // 0x8003039C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x8003039C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800303A0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800303A4: addiu       $a0, $a0, -0x42C0
    ctx->r4 = ADD32(ctx->r4, -0X42C0);
    // 0x800303A8: jal         0x80077310
    // 0x800303AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    _bzero(rdram, ctx);
        goto after_2;
    // 0x800303AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_2:
    // 0x800303B0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800303B4: addiu       $a0, $a0, -0x4298
    ctx->r4 = ADD32(ctx->r4, -0X4298);
    // 0x800303B8: jal         0x80077310
    // 0x800303BC: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    _bzero(rdram, ctx);
        goto after_3;
    // 0x800303BC: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    after_3:
    // 0x800303C0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800303C4: addiu       $a0, $a0, -0x4170
    ctx->r4 = ADD32(ctx->r4, -0X4170);
    // 0x800303C8: jal         0x80077310
    // 0x800303CC: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    _bzero(rdram, ctx);
        goto after_4;
    // 0x800303CC: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    after_4:
    // 0x800303D0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800303D4: addiu       $v0, $t6, -0x4298
    ctx->r2 = ADD32(ctx->r14, -0X4298);
    // 0x800303D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800303DC: addiu       $a1, $a1, -0x4258
    ctx->r5 = ADD32(ctx->r5, -0X4258);
    // 0x800303E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800303E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800303E8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_800303EC:
    // 0x800303EC: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x800303F0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800303F4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800303F8: sw          $v1, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r3;
    // 0x800303FC: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80030400: sw          $v1, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r3;
    // 0x80030404: bne         $v0, $a1, L_800303EC
    if (ctx->r2 != ctx->r5) {
        // 0x80030408: sw          $v1, 0x44($v0)
        MEM_W(0X44, ctx->r2) = ctx->r3;
            goto L_800303EC;
    }
    // 0x80030408: sw          $v1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r3;
    // 0x8003040C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80030410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030414: addiu       $v0, $v0, -0x4298
    ctx->r2 = ADD32(ctx->r2, -0X4298);
    // 0x80030418: sw          $a2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r6;
    // 0x8003041C: sw          $a2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r6;
    // 0x80030420: sw          $a2, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r6;
    // 0x80030424: jr          $ra
    // 0x80030428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80030428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003042C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003042C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80030430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030434: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80030438: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003043C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80030440: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80030444: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80030448: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x8003044C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80030450: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80030454: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80030458: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8003045C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80030460: jal         0x80057CA0
    // 0x80030464: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x80030464: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80030468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003046C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80030470: jr          $ra
    // 0x80030474: nop

    return;
    // 0x80030474: nop

;}
RECOMP_FUNC void func_80030478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030478: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003047C: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x80030480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030484: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80030488: beq         $t6, $zero, L_800304DC
    if (ctx->r14 == 0) {
        // 0x8003048C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800304DC;
    }
    // 0x8003048C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030490: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80030494: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80030498: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8003049C: lw          $v0, -0x4294($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4294);
    // 0x800304A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800304A4: beq         $v0, $at, L_800304B0
    if (ctx->r2 == ctx->r1) {
        // 0x800304A8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800304B0;
    }
    // 0x800304A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800304AC: bne         $v0, $at, L_80030514
    if (ctx->r2 != ctx->r1) {
        // 0x800304B0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_80030514;
    }
L_800304B0:
    // 0x800304B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800304B4: bne         $a1, $at, L_800304CC
    if (ctx->r5 != ctx->r1) {
        // 0x800304B8: nop
    
            goto L_800304CC;
    }
    // 0x800304B8: nop

    // 0x800304BC: jal         0x800568E0
    // 0x800304C0: nop

    func_800568E0(rdram, ctx);
        goto after_0;
    // 0x800304C0: nop

    after_0:
    // 0x800304C4: b           L_80030518
    // 0x800304C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030518;
    // 0x800304C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800304CC:
    // 0x800304CC: jal         0x800569B4
    // 0x800304D0: nop

    func_800569B4(rdram, ctx);
        goto after_1;
    // 0x800304D0: nop

    after_1:
    // 0x800304D4: b           L_80030518
    // 0x800304D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030518;
    // 0x800304D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800304DC:
    // 0x800304DC: beq         $a0, $zero, L_800304F0
    if (ctx->r4 == 0) {
        // 0x800304E0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800304F0;
    }
    // 0x800304E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800304E4: bne         $a0, $at, L_80030514
    if (ctx->r4 != ctx->r1) {
        // 0x800304E8: andi        $t8, $v0, 0x1000
        ctx->r24 = ctx->r2 & 0X1000;
            goto L_80030514;
    }
    // 0x800304E8: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x800304EC: beq         $t8, $zero, L_80030514
    if (ctx->r24 == 0) {
        // 0x800304F0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_80030514;
    }
L_800304F0:
    // 0x800304F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800304F4: bne         $a1, $at, L_8003050C
    if (ctx->r5 != ctx->r1) {
        // 0x800304F8: nop
    
            goto L_8003050C;
    }
    // 0x800304F8: nop

    // 0x800304FC: jal         0x800568E0
    // 0x80030500: nop

    func_800568E0(rdram, ctx);
        goto after_2;
    // 0x80030500: nop

    after_2:
    // 0x80030504: b           L_80030518
    // 0x80030508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030518;
    // 0x80030508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003050C:
    // 0x8003050C: jal         0x800569B4
    // 0x80030510: nop

    func_800569B4(rdram, ctx);
        goto after_3;
    // 0x80030510: nop

    after_3:
L_80030514:
    // 0x80030514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030518:
    // 0x80030518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003051C: jr          $ra
    // 0x80030520: nop

    return;
    // 0x80030520: nop

;}
RECOMP_FUNC void func_80030524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80030528: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003052C: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80030530: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80030534: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80030538: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x8003053C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80030540: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80030544: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80030548: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003054C: bltz        $t7, L_8003059C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80030550: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8003059C;
    }
    // 0x80030550: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80030554: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80030558: beq         $at, $zero, L_8003059C
    if (ctx->r1 == 0) {
        // 0x8003055C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8003059C;
    }
    // 0x8003055C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030560: bne         $a0, $at, L_80030594
    if (ctx->r4 != ctx->r1) {
        // 0x80030564: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80030594;
    }
    // 0x80030564: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80030568: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003056C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x80030570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80030574:
    // 0x80030574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80030578: jal         0x80030478
    // 0x8003057C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80030478(rdram, ctx);
        goto after_0;
    // 0x8003057C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x80030580: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80030584: bne         $s0, $s1, L_80030574
    if (ctx->r16 != ctx->r17) {
        // 0x80030588: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80030574;
    }
    // 0x80030588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003058C: b           L_800305A0
    // 0x80030590: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800305A0;
    // 0x80030590: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80030594:
    // 0x80030594: jal         0x80030478
    // 0x80030598: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80030478(rdram, ctx);
        goto after_1;
    // 0x80030598: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
L_8003059C:
    // 0x8003059C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800305A0:
    // 0x800305A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800305A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800305A8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800305AC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800305B0: jr          $ra
    // 0x800305B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800305B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800305B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800305B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800305BC: jr          $ra
    // 0x800305C0: addiu       $v0, $v0, -0x4298
    ctx->r2 = ADD32(ctx->r2, -0X4298);
    return;
    // 0x800305C0: addiu       $v0, $v0, -0x4298
    ctx->r2 = ADD32(ctx->r2, -0X4298);
;}
