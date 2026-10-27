#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8003BFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BFE8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003BFEC: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8003BFF0: addiu       $t0, $t0, -0x4170
    ctx->r8 = ADD32(ctx->r8, -0X4170);
    // 0x8003BFF4: lw          $t6, 0x9C($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X9C);
    // 0x8003BFF8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003BFFC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8003C000: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003C004: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8003C008: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8003C00C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8003C010: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8003C014: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003C018: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003C01C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003C020: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003C024: sw          $t7, 0x9C($t0)
    MEM_W(0X9C, ctx->r8) = ctx->r15;
    // 0x8003C028: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003C02C: jal         0x8004A0A0
    // 0x8003C030: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8003C030: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x8003C034: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8003C038: bne         $v0, $zero, L_8003C214
    if (ctx->r2 != 0) {
        // 0x8003C03C: addiu       $t0, $t0, -0x4170
        ctx->r8 = ADD32(ctx->r8, -0X4170);
            goto L_8003C214;
    }
    // 0x8003C03C: addiu       $t0, $t0, -0x4170
    ctx->r8 = ADD32(ctx->r8, -0X4170);
    // 0x8003C040: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003C044: lw          $t8, 0x16C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X16C);
    // 0x8003C048: nop

    // 0x8003C04C: bne         $t8, $zero, L_8003C148
    if (ctx->r24 != 0) {
        // 0x8003C050: nop
    
            goto L_8003C148;
    }
    // 0x8003C050: nop

    // 0x8003C054: lw          $t9, 0x98($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X98);
    // 0x8003C058: nop

    // 0x8003C05C: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x8003C060: beq         $at, $zero, L_8003C148
    if (ctx->r1 == 0) {
        // 0x8003C064: nop
    
            goto L_8003C148;
    }
    // 0x8003C064: nop

    // 0x8003C068: jal         0x80027F1C
    // 0x8003C06C: nop

    func_80027F1C(rdram, ctx);
        goto after_1;
    // 0x8003C06C: nop

    after_1:
    // 0x8003C070: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8003C074: addiu       $t0, $t0, -0x4170
    ctx->r8 = ADD32(ctx->r8, -0X4170);
    // 0x8003C078: lw          $v0, 0x9C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X9C);
    // 0x8003C07C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003C080: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8003C084: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003C088: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003C08C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003C090: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003C094: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8003C098: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8003C09C: addiu       $t8, $t8, -0x3D90
    ctx->r24 = ADD32(ctx->r24, -0X3D90);
    // 0x8003C0A0: addiu       $a0, $a0, -0x3DC0
    ctx->r4 = ADD32(ctx->r4, -0X3DC0);
    // 0x8003C0A4: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    // 0x8003C0A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003C0AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8003C0B0: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003C0B4: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8003C0B8: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x8003C0BC: nop

    // 0x8003C0C0: bc1t        L_8003C0D0
    if (c1cs) {
        // 0x8003C0C4: nop
    
            goto L_8003C0D0;
    }
    // 0x8003C0C4: nop

    // 0x8003C0C8: beq         $at, $zero, L_8003C148
    if (ctx->r1 == 0) {
        // 0x8003C0CC: nop
    
            goto L_8003C148;
    }
    // 0x8003C0CC: nop

L_8003C0D0:
    // 0x8003C0D0: lw          $t6, 0x98($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X98);
    // 0x8003C0D4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8003C0D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003C0DC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C0E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C0E4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8003C0E8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003C0EC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8003C0F0: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x8003C0F4: jal         0x80007C3C
    // 0x8003C0F8: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    func_80007C3C(rdram, ctx);
        goto after_2;
    // 0x8003C0F8: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    after_2:
    // 0x8003C0FC: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8003C100: addiu       $t0, $t0, -0x4170
    ctx->r8 = ADD32(ctx->r8, -0X4170);
    // 0x8003C104: lw          $v1, 0x98($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X98);
    // 0x8003C108: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003C10C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8003C110: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003C114: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8003C118: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x8003C11C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8003C120: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003C124: addiu       $t7, $t7, -0x3D90
    ctx->r15 = ADD32(ctx->r15, -0X3D90);
    // 0x8003C128: sw          $v0, 0x46C($at)
    MEM_W(0X46C, ctx->r1) = ctx->r2;
    // 0x8003C12C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003C130: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x8003C134: lw          $t9, 0x98($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X98);
    // 0x8003C138: nop

    // 0x8003C13C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8003C140: b           L_8003C214
    // 0x8003C144: sw          $t6, 0x98($t0)
    MEM_W(0X98, ctx->r8) = ctx->r14;
        goto L_8003C214;
    // 0x8003C144: sw          $t6, 0x98($t0)
    MEM_W(0X98, ctx->r8) = ctx->r14;
L_8003C148:
    // 0x8003C148: jal         0x8005AF70
    // 0x8003C14C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_8005AF70(rdram, ctx);
        goto after_3;
    // 0x8003C14C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_3:
    // 0x8003C150: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003C154: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x8003C158: nop

    // 0x8003C15C: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x8003C160: beq         $t8, $zero, L_8003C174
    if (ctx->r24 == 0) {
        // 0x8003C164: addiu       $v1, $zero, 0x19
        ctx->r3 = ADD32(0, 0X19);
            goto L_8003C174;
    }
    // 0x8003C164: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003C168: b           L_8003C174
    // 0x8003C16C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003C174;
    // 0x8003C16C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8003C170: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003C174:
    // 0x8003C174: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C178: bne         $at, $zero, L_8003C214
    if (ctx->r1 != 0) {
        // 0x8003C17C: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_8003C214;
    }
    // 0x8003C17C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C180: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8003C184: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8003C188: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8003C18C: addiu       $v1, $v1, 0x4B8
    ctx->r3 = ADD32(ctx->r3, 0X4B8);
    // 0x8003C190: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8003C194: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x8003C198: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x8003C19C: jal         0x80028AB8
    // 0x8003C1A0: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8003C1A0: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    after_4:
    // 0x8003C1A4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8003C1A8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003C1AC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8003C1B0: lw          $s4, 0x478($t6)
    ctx->r20 = MEM_W(ctx->r14, 0X478);
    // 0x8003C1B4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C1B8: addiu       $v1, $v1, 0x4B8
    ctx->r3 = ADD32(ctx->r3, 0X4B8);
    // 0x8003C1BC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8003C1C0: jal         0x8003BED0
    // 0x8003C1C4: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    func_8003BED0(rdram, ctx);
        goto after_5;
    // 0x8003C1C4: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    after_5:
    // 0x8003C1C8: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8003C1CC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003C1D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003C1D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003C1D8: lw          $t9, 0x498($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X498);
    // 0x8003C1DC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C1E0: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C1E4: bne         $at, $zero, L_8003C214
    if (ctx->r1 != 0) {
        // 0x8003C1E8: addiu       $v1, $v1, 0x4B8
        ctx->r3 = ADD32(ctx->r3, 0X4B8);
            goto L_8003C214;
    }
    // 0x8003C1E8: addiu       $v1, $v1, 0x4B8
    ctx->r3 = ADD32(ctx->r3, 0X4B8);
    // 0x8003C1EC: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x8003C1F0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003C1F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003C1F8: jal         0x8004A0A0
    // 0x8003C1FC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8003C1FC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_6:
    // 0x8003C200: beq         $v0, $zero, L_8003C214
    if (ctx->r2 == 0) {
        // 0x8003C204: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003C214;
    }
    // 0x8003C204: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003C208: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003C20C: jal         0x80000FA0
    // 0x8003C210: addiu       $a0, $a0, 0x5AE0
    ctx->r4 = ADD32(ctx->r4, 0X5AE0);
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x8003C210: addiu       $a0, $a0, 0x5AE0
    ctx->r4 = ADD32(ctx->r4, 0X5AE0);
    after_7:
L_8003C214:
    // 0x8003C214: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003C218: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8003C21C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8003C220: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C224: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003C228: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8003C22C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8003C230: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C234: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8003C238: jr          $ra
    // 0x8003C23C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8003C23C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8003C240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C240: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8003C244: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003C248: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8003C24C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8003C250: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003C254: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003C258: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003C25C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003C260: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003C264: jal         0x80007774
    // 0x8003C268: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8003C268: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003C26C: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x8003C270: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
    // 0x8003C274: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003C278: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8003C27C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x8003C280: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8003C284: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8003C288: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x8003C28C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8003C290: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x8003C294: jal         0x8005D1B4
    // 0x8003C298: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_1;
    // 0x8003C298: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8003C29C: jal         0x80027874
    // 0x8003C2A0: addiu       $a0, $zero, 0x370
    ctx->r4 = ADD32(0, 0X370);
    func_80027874(rdram, ctx);
        goto after_2;
    // 0x8003C2A0: addiu       $a0, $zero, 0x370
    ctx->r4 = ADD32(0, 0X370);
    after_2:
    // 0x8003C2A4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8003C2A8: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
    // 0x8003C2AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003C2B0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_8003C2B4:
    // 0x8003C2B4: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8003C2B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003C2BC: beq         $t6, $zero, L_8003C2CC
    if (ctx->r14 == 0) {
        // 0x8003C2C0: addiu       $a1, $zero, 0x31
        ctx->r5 = ADD32(0, 0X31);
            goto L_8003C2CC;
    }
    // 0x8003C2C0: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8003C2C4: jal         0x80030524
    // 0x8003C2C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_3;
    // 0x8003C2C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8003C2CC:
    // 0x8003C2CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003C2D0: bne         $s1, $s2, L_8003C2B4
    if (ctx->r17 != ctx->r18) {
        // 0x8003C2D4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8003C2B4;
    }
    // 0x8003C2D4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003C2D8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003C2DC: addiu       $s1, $s1, 0xBC
    ctx->r17 = ADD32(ctx->r17, 0XBC);
    // 0x8003C2E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003C2E4: addiu       $s5, $sp, 0x44
    ctx->r21 = ADD32(ctx->r29, 0X44);
    // 0x8003C2E8: addiu       $s4, $zero, 0xD
    ctx->r20 = ADD32(0, 0XD);
    // 0x8003C2EC: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x8003C2F0: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_8003C2F4:
    // 0x8003C2F4: bne         $s0, $s2, L_8003C30C
    if (ctx->r16 != ctx->r18) {
        // 0x8003C2F8: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_8003C30C;
    }
    // 0x8003C2F8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x8003C2FC: jal         0x8005D1B4
    // 0x8003C300: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_4;
    // 0x8003C300: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_4:
    // 0x8003C304: b           L_8003C340
    // 0x8003C308: nop

        goto L_8003C340;
    // 0x8003C308: nop

L_8003C30C:
    // 0x8003C30C: bne         $s0, $zero, L_8003C340
    if (ctx->r16 != 0) {
        // 0x8003C310: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003C340;
    }
    // 0x8003C310: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003C314: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8003C318: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8003C31C: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8003C320: sw          $s4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r20;
    // 0x8003C324: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8003C328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003C32C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8003C330: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x8003C334: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
    // 0x8003C338: jal         0x8004A0A0
    // 0x8003C33C: swc1        $f18, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f18.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8003C33C: swc1        $f18, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f18.u32l;
    after_5:
L_8003C340:
    // 0x8003C340: jal         0x80007AB0
    // 0x8003C344: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8003C344: nop

    after_6:
    // 0x8003C348: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003C34C: bne         $s0, $s3, L_8003C2F4
    if (ctx->r16 != ctx->r19) {
        // 0x8003C350: nop
    
            goto L_8003C2F4;
    }
    // 0x8003C350: nop

    // 0x8003C354: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003C358: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C35C: addiu       $v1, $v1, 0x478
    ctx->r3 = ADD32(ctx->r3, 0X478);
    // 0x8003C360: addiu       $v0, $v0, 0x46C
    ctx->r2 = ADD32(ctx->r2, 0X46C);
L_8003C364:
    // 0x8003C364: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8003C368: nop

    // 0x8003C36C: bne         $s7, $t7, L_8003C378
    if (ctx->r23 != ctx->r15) {
        // 0x8003C370: nop
    
            goto L_8003C378;
    }
    // 0x8003C370: nop

    // 0x8003C374: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8003C378:
    // 0x8003C378: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003C37C: bne         $v0, $v1, L_8003C364
    if (ctx->r2 != ctx->r3) {
        // 0x8003C380: nop
    
            goto L_8003C364;
    }
    // 0x8003C380: nop

    // 0x8003C384: jal         0x80007AE0
    // 0x8003C388: nop

    func_80007AE0(rdram, ctx);
        goto after_7;
    // 0x8003C388: nop

    after_7:
    // 0x8003C38C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003C390: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003C394: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003C398: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C39C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003C3A0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003C3A4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003C3A8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C3AC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8003C3B0: jr          $ra
    // 0x8003C3B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8003C3B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8003C3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C3B8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003C3BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003C3C0: addiu       $v0, $v0, -0x4170
    ctx->r2 = ADD32(ctx->r2, -0X4170);
    // 0x8003C3C4: lw          $t6, 0x9C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X9C);
    // 0x8003C3C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003C3CC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003C3D0: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8003C3D4: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8003C3D8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8003C3DC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8003C3E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003C3E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003C3E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003C3EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003C3F0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8003C3F4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8003C3F8: jal         0x80027F1C
    // 0x8003C3FC: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    func_80027F1C(rdram, ctx);
        goto after_0;
    // 0x8003C3FC: sw          $t7, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r15;
    after_0:
    // 0x8003C400: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003C404: lwc1        $f5, 0x5B68($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5B68);
    // 0x8003C408: lwc1        $f4, 0x5B6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B6C);
    // 0x8003C40C: nop

    // 0x8003C410: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x8003C414: nop

    // 0x8003C418: bc1t        L_8003C50C
    if (c1cs) {
        // 0x8003C41C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8003C50C;
    }
    // 0x8003C41C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003C420: jal         0x8005AF70
    // 0x8003C424: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_8005AF70(rdram, ctx);
        goto after_1;
    // 0x8003C424: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x8003C428: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003C42C: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8003C430: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003C434: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8003C438: beq         $t9, $zero, L_8003C448
    if (ctx->r25 == 0) {
        // 0x8003C43C: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8003C448;
    }
    // 0x8003C43C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003C440: b           L_8003C448
    // 0x8003C444: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003C448;
    // 0x8003C444: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003C448:
    // 0x8003C448: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C44C: bne         $at, $zero, L_8003C508
    if (ctx->r1 != 0) {
        // 0x8003C450: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_8003C508;
    }
    // 0x8003C450: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003C454: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x8003C458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C45C: bne         $t6, $at, L_8003C46C
    if (ctx->r14 != ctx->r1) {
        // 0x8003C460: addiu       $a2, $sp, 0x50
        ctx->r6 = ADD32(ctx->r29, 0X50);
            goto L_8003C46C;
    }
    // 0x8003C460: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x8003C464: b           L_8003C470
    // 0x8003C468: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
        goto L_8003C470;
    // 0x8003C468: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
L_8003C46C:
    // 0x8003C46C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
L_8003C470:
    // 0x8003C470: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8003C474: jal         0x8004A0A0
    // 0x8003C478: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003C478: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_2:
    // 0x8003C47C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8003C480: bne         $v0, $zero, L_8003C508
    if (ctx->r2 != 0) {
        // 0x8003C484: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_8003C508;
    }
    // 0x8003C484: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C488: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8003C48C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8003C490: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8003C494: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x8003C498: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8003C49C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x8003C4A0: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x8003C4A4: jal         0x80028AB8
    // 0x8003C4A8: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x8003C4A8: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    after_3:
    // 0x8003C4AC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8003C4B0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003C4B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003C4B8: lw          $s4, 0x424($t8)
    ctx->r20 = MEM_W(ctx->r24, 0X424);
    // 0x8003C4BC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C4C0: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x8003C4C4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8003C4C8: jal         0x8003BED0
    // 0x8003C4CC: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    func_8003BED0(rdram, ctx);
        goto after_4;
    // 0x8003C4CC: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    after_4:
    // 0x8003C4D0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8003C4D4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8003C4D8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8003C4DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C4E0: lw          $t7, 0x448($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X448);
    // 0x8003C4E4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C4E8: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C4EC: bne         $at, $zero, L_8003C508
    if (ctx->r1 != 0) {
        // 0x8003C4F0: addiu       $v1, $v1, 0xBC
        ctx->r3 = ADD32(ctx->r3, 0XBC);
            goto L_8003C508;
    }
    // 0x8003C4F0: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x8003C4F4: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x8003C4F8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003C4FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003C500: jal         0x8004A0A0
    // 0x8003C504: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8003C504: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_5:
L_8003C508:
    // 0x8003C508: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003C50C:
    // 0x8003C50C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8003C510: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8003C514: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C518: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003C51C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8003C520: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8003C524: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C528: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8003C52C: jr          $ra
    // 0x8003C530: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8003C530: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8003C534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C534: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003C538: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003C53C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8003C540: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8003C544: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8003C548: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8003C54C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8003C550: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003C554: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003C558: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003C55C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003C560: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003C564: jal         0x8004A0A0
    // 0x8003C568: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8003C568: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x8003C56C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8003C570: jal         0x8005AF70
    // 0x8003C574: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_8005AF70(rdram, ctx);
        goto after_1;
    // 0x8003C574: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x8003C578: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003C57C: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8003C580: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8003C584: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8003C588: beq         $t7, $zero, L_8003C598
    if (ctx->r15 == 0) {
        // 0x8003C58C: addiu       $v1, $zero, 0x19
        ctx->r3 = ADD32(0, 0X19);
            goto L_8003C598;
    }
    // 0x8003C58C: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003C590: b           L_8003C598
    // 0x8003C594: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003C598;
    // 0x8003C594: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003C598:
    // 0x8003C598: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003C59C: beq         $at, $zero, L_8003C66C
    if (ctx->r1 == 0) {
        // 0x8003C5A0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8003C66C;
    }
    // 0x8003C5A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003C5A4: bne         $t8, $zero, L_8003C66C
    if (ctx->r24 != 0) {
        // 0x8003C5A8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8003C66C;
    }
    // 0x8003C5A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003C5AC: jal         0x80027F1C
    // 0x8003C5B0: nop

    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x8003C5B0: nop

    after_2:
    // 0x8003C5B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003C5B8: lwc1        $f5, 0x5B70($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5B70);
    // 0x8003C5BC: lwc1        $f4, 0x5B74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B74);
    // 0x8003C5C0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C5C4: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x8003C5C8: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8003C5CC: bc1f        L_8003C5F0
    if (!c1cs) {
        // 0x8003C5D0: addiu       $v1, $v1, 0xBC
        ctx->r3 = ADD32(ctx->r3, 0XBC);
            goto L_8003C5F0;
    }
    // 0x8003C5D0: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x8003C5D4: jal         0x80028AB8
    // 0x8003C5D8: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x8003C5D8: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x8003C5DC: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x8003C5E0: jal         0x8005B0F4
    // 0x8003C5E4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_8005B0F4(rdram, ctx);
        goto after_4;
    // 0x8003C5E4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x8003C5E8: b           L_8003C66C
    // 0x8003C5EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003C66C;
    // 0x8003C5EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003C5F0:
    // 0x8003C5F0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8003C5F4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8003C5F8: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x8003C5FC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8003C600: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x8003C604: jal         0x80028AB8
    // 0x8003C608: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_5;
    // 0x8003C608: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    after_5:
    // 0x8003C60C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8003C610: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003C614: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8003C618: lw          $s4, 0x3C8($t6)
    ctx->r20 = MEM_W(ctx->r14, 0X3C8);
    // 0x8003C61C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C620: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x8003C624: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8003C628: jal         0x8003BED0
    // 0x8003C62C: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    func_8003BED0(rdram, ctx);
        goto after_6;
    // 0x8003C62C: sw          $s4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r20;
    after_6:
    // 0x8003C630: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8003C634: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003C638: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003C63C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003C640: lw          $t9, 0x3E8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3E8);
    // 0x8003C644: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003C648: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C64C: bne         $at, $zero, L_8003C668
    if (ctx->r1 != 0) {
        // 0x8003C650: addiu       $v1, $v1, 0xBC
        ctx->r3 = ADD32(ctx->r3, 0XBC);
            goto L_8003C668;
    }
    // 0x8003C650: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x8003C654: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x8003C658: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003C65C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003C660: jal         0x8004A0A0
    // 0x8003C664: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8003C664: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_7:
L_8003C668:
    // 0x8003C668: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003C66C:
    // 0x8003C66C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8003C670: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8003C674: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C678: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003C67C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8003C680: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8003C684: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C688: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8003C68C: jr          $ra
    // 0x8003C690: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8003C690: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8003C694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C694: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8003C698: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8003C69C: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x8003C6A0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8003C6A4: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8003C6A8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8003C6AC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8003C6B0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8003C6B4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8003C6B8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8003C6BC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003C6C0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8003C6C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8003C6C8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003C6CC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8003C6D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003C6D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8003C6D8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8003C6DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003C6E0: jal         0x8004A0A0
    // 0x8003C6E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8003C6E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x8003C6E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003C6EC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003C6F0: addiu       $t6, $t6, -0x4170
    ctx->r14 = ADD32(ctx->r14, -0X4170);
    // 0x8003C6F4: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8003C6F8: lwc1        $f23, 0x5B78($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X5B78);
    // 0x8003C6FC: lwc1        $f22, 0x5B7C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5B7C);
    // 0x8003C700: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8003C704: addiu       $s7, $s7, 0xBC
    ctx->r23 = ADD32(ctx->r23, 0XBC);
    // 0x8003C708: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
L_8003C70C:
    // 0x8003C70C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8003C710: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003C714:
    // 0x8003C714: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x8003C718: lw          $t8, 0x18($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X18);
    // 0x8003C71C: nop

    // 0x8003C720: bne         $t7, $t8, L_8003C80C
    if (ctx->r15 != ctx->r24) {
        // 0x8003C724: nop
    
            goto L_8003C80C;
    }
    // 0x8003C724: nop

    // 0x8003C728: jal         0x8005AF70
    // 0x8003C72C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    func_8005AF70(rdram, ctx);
        goto after_1;
    // 0x8003C72C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x8003C730: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003C734: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8003C738: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8003C73C: andi        $t6, $t9, 0x400
    ctx->r14 = ctx->r25 & 0X400;
    // 0x8003C740: beq         $t6, $zero, L_8003C750
    if (ctx->r14 == 0) {
        // 0x8003C744: addiu       $v1, $zero, 0x19
        ctx->r3 = ADD32(0, 0X19);
            goto L_8003C750;
    }
    // 0x8003C744: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003C748: b           L_8003C750
    // 0x8003C74C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003C750;
    // 0x8003C74C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003C750:
    // 0x8003C750: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003C754: beq         $at, $zero, L_8003C808
    if (ctx->r1 == 0) {
        // 0x8003C758: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_8003C808;
    }
    // 0x8003C758: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8003C75C: bne         $t7, $zero, L_8003C808
    if (ctx->r15 != 0) {
        // 0x8003C760: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_8003C808;
    }
    // 0x8003C760: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8003C764: jal         0x80027F1C
    // 0x8003C768: nop

    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x8003C768: nop

    after_2:
    // 0x8003C76C: c.lt.d      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.d < ctx->f22.d;
    // 0x8003C770: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8003C774: bc1f        L_8003C798
    if (!c1cs) {
        // 0x8003C778: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8003C798;
    }
    // 0x8003C778: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8003C77C: jal         0x80028AB8
    // 0x8003C780: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x8003C780: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x8003C784: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x8003C788: jal         0x8005B0F4
    // 0x8003C78C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005B0F4(rdram, ctx);
        goto after_4;
    // 0x8003C78C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8003C790: b           L_8003C808
    // 0x8003C794: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8003C808;
    // 0x8003C794: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8003C798:
    // 0x8003C798: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8003C79C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8003C7A0: swc1        $f4, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->f4.u32l;
    // 0x8003C7A4: swc1        $f6, 0x10($s7)
    MEM_W(0X10, ctx->r23) = ctx->f6.u32l;
    // 0x8003C7A8: jal         0x80028AB8
    // 0x8003C7AC: swc1        $f8, 0x14($s7)
    MEM_W(0X14, ctx->r23) = ctx->f8.u32l;
    func_80028AB8(rdram, ctx);
        goto after_5;
    // 0x8003C7AC: swc1        $f8, 0x14($s7)
    MEM_W(0X14, ctx->r23) = ctx->f8.u32l;
    after_5:
    // 0x8003C7B0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8003C7B4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003C7B8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003C7BC: lw          $s4, 0x328($t9)
    ctx->r20 = MEM_W(ctx->r25, 0X328);
    // 0x8003C7C0: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8003C7C4: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x8003C7C8: jal         0x8003BED0
    // 0x8003C7CC: sw          $s4, 0x18($s7)
    MEM_W(0X18, ctx->r23) = ctx->r20;
    func_8003BED0(rdram, ctx);
        goto after_6;
    // 0x8003C7CC: sw          $s4, 0x18($s7)
    MEM_W(0X18, ctx->r23) = ctx->r20;
    after_6:
    // 0x8003C7D0: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x8003C7D4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8003C7D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C7DC: lw          $t7, 0x348($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X348);
    // 0x8003C7E0: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x8003C7E4: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003C7E8: bne         $at, $zero, L_8003C804
    if (ctx->r1 != 0) {
        // 0x8003C7EC: addiu       $s1, $sp, 0x6C
        ctx->r17 = ADD32(ctx->r29, 0X6C);
            goto L_8003C804;
    }
    // 0x8003C7EC: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x8003C7F0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8003C7F4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003C7F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003C7FC: jal         0x8004A0A0
    // 0x8003C800: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8003C800: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
L_8003C804:
    // 0x8003C804: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8003C808:
    // 0x8003C808: sw          $t8, 0x18($fp)
    MEM_W(0X18, ctx->r30) = ctx->r24;
L_8003C80C:
    // 0x8003C80C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003C810: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003C814: bne         $s0, $at, L_8003C714
    if (ctx->r16 != ctx->r1) {
        // 0x8003C818: addiu       $fp, $fp, 0x4
        ctx->r30 = ADD32(ctx->r30, 0X4);
            goto L_8003C714;
    }
    // 0x8003C818: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
    // 0x8003C81C: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x8003C820: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003C824: addiu       $t7, $t7, -0x4150
    ctx->r15 = ADD32(ctx->r15, -0X4150);
    // 0x8003C828: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8003C82C: bne         $t6, $t7, L_8003C70C
    if (ctx->r14 != ctx->r15) {
        // 0x8003C830: sw          $t6, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r14;
            goto L_8003C70C;
    }
    // 0x8003C830: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8003C834: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8003C838: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003C83C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003C840: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8003C844: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8003C848: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8003C84C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C850: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8003C854: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8003C858: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8003C85C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8003C860: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8003C864: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8003C868: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8003C86C: jr          $ra
    // 0x8003C870: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8003C870: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8003C874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C874: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003C878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C87C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8003C880: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8003C884: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    // 0x8003C888: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8003C88C: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x8003C890: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8003C894: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003C898: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003C89C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8003C8A0: addiu       $a1, $a1, 0xAC
    ctx->r5 = ADD32(ctx->r5, 0XAC);
    // 0x8003C8A4: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x8003C8A8: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8003C8AC: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    // 0x8003C8B0: jal         0x8005D1B4
    // 0x8003C8B4: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_0;
    // 0x8003C8B4: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    after_0:
    // 0x8003C8B8: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003C8BC: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x8003C8C0: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x8003C8C4: addu        $s2, $s6, $t6
    ctx->r18 = ADD32(ctx->r22, ctx->r14);
    // 0x8003C8C8: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8003C8CC: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8003C8D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C8D4: bne         $t7, $at, L_8003C8E8
    if (ctx->r15 != ctx->r1) {
        // 0x8003C8D8: swc1        $f6, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
            goto L_8003C8E8;
    }
    // 0x8003C8D8: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8003C8DC: addiu       $t8, $s4, 0x6
    ctx->r24 = ADD32(ctx->r20, 0X6);
    // 0x8003C8E0: b           L_8003C904
    // 0x8003C8E4: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
        goto L_8003C904;
    // 0x8003C8E4: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
L_8003C8E8:
    // 0x8003C8E8: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x8003C8EC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8003C8F0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8003C8F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C8F8: lw          $t7, 0x2DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2DC);
    // 0x8003C8FC: nop

    // 0x8003C900: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
L_8003C904:
    // 0x8003C904: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8003C908: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003C90C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003C910: jal         0x8004A0A0
    // 0x8003C914: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8003C914: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x8003C918: beq         $v0, $zero, L_8003C92C
    if (ctx->r2 == 0) {
        // 0x8003C91C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003C92C;
    }
    // 0x8003C91C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003C920: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003C924: jal         0x80000FA0
    // 0x8003C928: addiu       $a0, $a0, 0x5AB0
    ctx->r4 = ADD32(ctx->r4, 0X5AB0);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8003C928: addiu       $a0, $a0, 0x5AB0
    ctx->r4 = ADD32(ctx->r4, 0X5AB0);
    after_2:
L_8003C92C:
    // 0x8003C92C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8003C930: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x8003C934: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8003C938: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x8003C93C: bne         $s5, $t9, L_8003C954
    if (ctx->r21 != ctx->r25) {
        // 0x8003C940: sw          $t8, 0xFC($s2)
        MEM_W(0XFC, ctx->r18) = ctx->r24;
            goto L_8003C954;
    }
    // 0x8003C940: sw          $t8, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r24;
    // 0x8003C944: jal         0x80040508
    // 0x8003C948: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80040508(rdram, ctx);
        goto after_3;
    // 0x8003C948: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x8003C94C: b           L_8003C968
    // 0x8003C950: nop

        goto L_8003C968;
    // 0x8003C950: nop

L_8003C954:
    // 0x8003C954: jal         0x8002D000
    // 0x8003C958: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8002D000(rdram, ctx);
        goto after_4;
    // 0x8003C958: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x8003C95C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003C960: jal         0x8005B0A0
    // 0x8003C964: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005B0A0(rdram, ctx);
        goto after_5;
    // 0x8003C964: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_5:
L_8003C968:
    // 0x8003C968: jal         0x8005C3DC
    // 0x8003C96C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005C3DC(rdram, ctx);
        goto after_6;
    // 0x8003C96C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x8003C970: jal         0x8003B354
    // 0x8003C974: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_8003B354(rdram, ctx);
        goto after_7;
    // 0x8003C974: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_7:
    // 0x8003C978: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8003C97C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8003C980: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8003C984: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8003C988: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003C98C: jal         0x8005BE2C
    // 0x8003C990: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8005BE2C(rdram, ctx);
        goto after_8;
    // 0x8003C990: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x8003C994: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003C998: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x8003C99C: nop

    // 0x8003C9A0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8003C9A4: bne         $t9, $zero, L_8003C9B4
    if (ctx->r25 != 0) {
        // 0x8003C9A8: nop
    
            goto L_8003C9B4;
    }
    // 0x8003C9A8: nop

    // 0x8003C9AC: jal         0x8003B250
    // 0x8003C9B0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_8003B250(rdram, ctx);
        goto after_9;
    // 0x8003C9B0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_9:
L_8003C9B4:
    // 0x8003C9B4: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x8003C9B8: nop

    // 0x8003C9BC: bne         $s5, $t6, L_8003C9E0
    if (ctx->r21 != ctx->r14) {
        // 0x8003C9C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003C9E0;
    }
    // 0x8003C9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C9C4: jal         0x8005C3A8
    // 0x8003C9C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_10;
    // 0x8003C9C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_10:
    // 0x8003C9CC: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x8003C9D0: nop

    // 0x8003C9D4: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x8003C9D8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8003C9DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003C9E0:
    // 0x8003C9E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8003C9E4: jr          $ra
    // 0x8003C9E8: nop

    return;
    // 0x8003C9E8: nop

;}
RECOMP_FUNC void func_8003C9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C9EC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003C9F0: addiu       $t7, $t7, -0x4298
    ctx->r15 = ADD32(ctx->r15, -0X4298);
    // 0x8003C9F4: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8003C9F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003C9FC: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8003CA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CA04: lw          $a0, 0xFC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XFC);
    // 0x8003CA08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003CA0C: jal         0x8004A0A0
    // 0x8003CA10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8003CA10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x8003CA14: beq         $v0, $zero, L_8003CA58
    if (ctx->r2 == 0) {
        // 0x8003CA18: addiu       $a1, $zero, 0x31
        ctx->r5 = ADD32(0, 0X31);
            goto L_8003CA58;
    }
    // 0x8003CA18: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8003CA1C: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x8003CA20: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x8003CA24: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003CA28: addiu       $t9, $t9, -0x4170
    ctx->r25 = ADD32(ctx->r25, -0X4170);
    // 0x8003CA2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003CA30: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8003CA34: lwc1        $f4, 0xB0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XB0);
    // 0x8003CA38: nop

    // 0x8003CA3C: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x8003CA40: lwc1        $f6, 0xB4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB4);
    // 0x8003CA44: nop

    // 0x8003CA48: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x8003CA4C: lwc1        $f8, 0xB8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XB8);
    // 0x8003CA50: nop

    // 0x8003CA54: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
L_8003CA58:
    // 0x8003CA58: lw          $a0, 0xFC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XFC);
    // 0x8003CA5C: jal         0x8004A0A0
    // 0x8003CA60: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8003CA60: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8003CA64: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8003CA68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003CA6C: bne         $t6, $at, L_8003CA80
    if (ctx->r14 != ctx->r1) {
        // 0x8003CA70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003CA80;
    }
    // 0x8003CA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CA74: jal         0x80040470
    // 0x8003CA78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80040470(rdram, ctx);
        goto after_2;
    // 0x8003CA78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8003CA7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003CA80:
    // 0x8003CA80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8003CA84: jr          $ra
    // 0x8003CA88: nop

    return;
    // 0x8003CA88: nop

;}
RECOMP_FUNC void func_8003CA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CA8C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8003CA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CA94: jal         0x8005C3A8
    // 0x8003CA98: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x8003CA98: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_0:
    // 0x8003CA9C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003CAA0: addiu       $t7, $t7, -0x4298
    ctx->r15 = ADD32(ctx->r15, -0X4298);
    // 0x8003CAA4: sll         $t6, $fp, 2
    ctx->r14 = S32(ctx->r30 << 2);
    // 0x8003CAA8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8003CAAC: addiu       $s6, $sp, 0x34
    ctx->r22 = ADD32(ctx->r29, 0X34);
    // 0x8003CAB0: lw          $a0, 0xFC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XFC);
    // 0x8003CAB4: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8003CAB8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003CABC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8003CAC0: jal         0x8004A0A0
    // 0x8003CAC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8003CAC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8003CAC8: bne         $v0, $zero, L_8003CDD4
    if (ctx->r2 != 0) {
        // 0x8003CACC: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_8003CDD4;
    }
    // 0x8003CACC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003CAD0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8003CAD4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8003CAD8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8003CADC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003CAE0: addiu       $s3, $s3, 0xBC
    ctx->r19 = ADD32(ctx->r19, 0XBC);
    // 0x8003CAE4: swc1        $f4, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f4.u32l;
    // 0x8003CAE8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8003CAEC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8003CAF0: swc1        $f4, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f4.u32l;
    // 0x8003CAF4: swc1        $f10, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f10.u32l;
    // 0x8003CAF8: lw          $s2, 0x4($s7)
    ctx->r18 = MEM_W(ctx->r23, 0X4);
    // 0x8003CAFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003CB00: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8003CB04: blez        $s2, L_8003CB64
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8003CB08: addiu       $s5, $sp, 0x30
        ctx->r21 = ADD32(ctx->r29, 0X30);
            goto L_8003CB64;
    }
    // 0x8003CB08: addiu       $s5, $sp, 0x30
    ctx->r21 = ADD32(ctx->r29, 0X30);
    // 0x8003CB0C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003CB10: addiu       $s4, $s4, -0x42C0
    ctx->r20 = ADD32(ctx->r20, -0X42C0);
    // 0x8003CB14: ori         $s1, $zero, 0x9001
    ctx->r17 = 0 | 0X9001;
L_8003CB18:
    // 0x8003CB18: jal         0x8005AF70
    // 0x8003CB1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005AF70(rdram, ctx);
        goto after_2;
    // 0x8003CB1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_2:
    // 0x8003CB20: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8003CB24: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CB28: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8003CB2C: beq         $t9, $zero, L_8003CB3C
    if (ctx->r25 == 0) {
        // 0x8003CB30: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8003CB3C;
    }
    // 0x8003CB30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003CB34: b           L_8003CB40
    // 0x8003CB38: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003CB40;
    // 0x8003CB38: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003CB3C:
    // 0x8003CB3C: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003CB40:
    // 0x8003CB40: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003CB44: bne         $at, $zero, L_8003CB64
    if (ctx->r1 != 0) {
        // 0x8003CB48: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_8003CB64;
    }
    // 0x8003CB48: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003CB4C: sw          $s1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r17;
    // 0x8003CB50: jal         0x8004A0A0
    // 0x8003CB54: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8003CB54: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    after_3:
    // 0x8003CB58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003CB5C: bne         $s0, $s2, L_8003CB18
    if (ctx->r16 != ctx->r18) {
        // 0x8003CB60: nop
    
            goto L_8003CB18;
    }
    // 0x8003CB60: nop

L_8003CB64:
    // 0x8003CB64: lw          $s2, 0x0($s7)
    ctx->r18 = MEM_W(ctx->r23, 0X0);
    // 0x8003CB68: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003CB6C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8003CB70: addiu       $s4, $s4, -0x42C0
    ctx->r20 = ADD32(ctx->r20, -0X42C0);
    // 0x8003CB74: blez        $s2, L_8003CBDC
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8003CB78: addiu       $s5, $sp, 0x30
        ctx->r21 = ADD32(ctx->r29, 0X30);
            goto L_8003CBDC;
    }
    // 0x8003CB78: addiu       $s5, $sp, 0x30
    ctx->r21 = ADD32(ctx->r29, 0X30);
    // 0x8003CB7C: jal         0x8005AF70
    // 0x8003CB80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005AF70(rdram, ctx);
        goto after_4;
    // 0x8003CB80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x8003CB84: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8003CB88: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003CB8C: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8003CB90: beq         $t7, $zero, L_8003CBA0
    if (ctx->r15 == 0) {
        // 0x8003CB94: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8003CBA0;
    }
    // 0x8003CB94: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8003CB98: b           L_8003CBA0
    // 0x8003CB9C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003CBA0;
    // 0x8003CB9C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003CBA0:
    // 0x8003CBA0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003CBA4: bne         $at, $zero, L_8003CBDC
    if (ctx->r1 != 0) {
        // 0x8003CBA8: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003CBDC;
    }
    // 0x8003CBA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CBAC: bne         $s2, $s0, L_8003CBC0
    if (ctx->r18 != ctx->r16) {
        // 0x8003CBB0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8003CBC0;
    }
    // 0x8003CBB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003CBB4: ori         $t8, $zero, 0x9000
    ctx->r24 = 0 | 0X9000;
    // 0x8003CBB8: b           L_8003CBD0
    // 0x8003CBBC: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
        goto L_8003CBD0;
    // 0x8003CBBC: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
L_8003CBC0:
    // 0x8003CBC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003CBC4: bne         $s2, $at, L_8003CBD0
    if (ctx->r18 != ctx->r1) {
        // 0x8003CBC8: ori         $t9, $zero, 0x906A
        ctx->r25 = 0 | 0X906A;
            goto L_8003CBD0;
    }
    // 0x8003CBC8: ori         $t9, $zero, 0x906A
    ctx->r25 = 0 | 0X906A;
    // 0x8003CBCC: sw          $t9, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r25;
L_8003CBD0:
    // 0x8003CBD0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003CBD4: jal         0x8004A0A0
    // 0x8003CBD8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8003CBD8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_5:
L_8003CBDC:
    // 0x8003CBDC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8003CBE0: jal         0x8005AF70
    // 0x8003CBE4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005AF70(rdram, ctx);
        goto after_6;
    // 0x8003CBE4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_6:
    // 0x8003CBE8: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8003CBEC: lw          $s2, 0xC($s7)
    ctx->r18 = MEM_W(ctx->r23, 0XC);
    // 0x8003CBF0: andi        $t6, $a0, 0x400
    ctx->r14 = ctx->r4 & 0X400;
    // 0x8003CBF4: beq         $t6, $zero, L_8003CC04
    if (ctx->r14 == 0) {
        // 0x8003CBF8: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_8003CC04;
    }
    // 0x8003CBF8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8003CBFC: b           L_8003CC08
    // 0x8003CC00: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003CC08;
    // 0x8003CC00: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003CC04:
    // 0x8003CC04: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003CC08:
    // 0x8003CC08: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003CC0C: beq         $at, $zero, L_8003CC50
    if (ctx->r1 == 0) {
        // 0x8003CC10: andi        $t9, $a0, 0x8000
        ctx->r25 = ctx->r4 & 0X8000;
            goto L_8003CC50;
    }
    // 0x8003CC10: andi        $t9, $a0, 0x8000
    ctx->r25 = ctx->r4 & 0X8000;
    // 0x8003CC14: beq         $s2, $zero, L_8003CC4C
    if (ctx->r18 == 0) {
        // 0x8003CC18: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8003CC4C;
    }
    // 0x8003CC18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003CC1C: blez        $s2, L_8003CC30
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8003CC20: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003CC30;
    }
    // 0x8003CC20: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CC24: ori         $t7, $zero, 0x9002
    ctx->r15 = 0 | 0X9002;
    // 0x8003CC28: b           L_8003CC38
    // 0x8003CC2C: sw          $t7, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r15;
        goto L_8003CC38;
    // 0x8003CC2C: sw          $t7, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r15;
L_8003CC30:
    // 0x8003CC30: ori         $t8, $zero, 0x9003
    ctx->r24 = 0 | 0X9003;
    // 0x8003CC34: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
L_8003CC38:
    // 0x8003CC38: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003CC3C: jal         0x8004A0A0
    // 0x8003CC40: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8003CC40: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_7:
    // 0x8003CC44: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8003CC48: nop

L_8003CC4C:
    // 0x8003CC4C: andi        $t9, $a0, 0x8000
    ctx->r25 = ctx->r4 & 0X8000;
L_8003CC50:
    // 0x8003CC50: bne         $t9, $zero, L_8003CC80
    if (ctx->r25 != 0) {
        // 0x8003CC54: nop
    
            goto L_8003CC80;
    }
    // 0x8003CC54: nop

    // 0x8003CC58: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CC5C: sll         $t8, $fp, 4
    ctx->r24 = S32(ctx->r30 << 4);
    // 0x8003CC60: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8003CC64: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003CC68: bne         $s0, $t7, L_8003CC80
    if (ctx->r16 != ctx->r15) {
        // 0x8003CC6C: addu        $t9, $t9, $t8
        ctx->r25 = ADD32(ctx->r25, ctx->r24);
            goto L_8003CC80;
    }
    // 0x8003CC6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003CC70: lw          $t9, -0x4238($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4238);
    // 0x8003CC74: nop

    // 0x8003CC78: bgtz        $t9, L_8003CCD8
    if (SIGNED(ctx->r25) > 0) {
        // 0x8003CC7C: nop
    
            goto L_8003CCD8;
    }
    // 0x8003CC7C: nop

L_8003CC80:
    // 0x8003CC80: jal         0x8005AF70
    // 0x8003CC84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005AF70(rdram, ctx);
        goto after_8;
    // 0x8003CC84: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
    // 0x8003CC88: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8003CC8C: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003CC90: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8003CC94: beq         $t7, $zero, L_8003CCA4
    if (ctx->r15 == 0) {
        // 0x8003CC98: nop
    
            goto L_8003CCA4;
    }
    // 0x8003CC98: nop

    // 0x8003CC9C: b           L_8003CCA4
    // 0x8003CCA0: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003CCA4;
    // 0x8003CCA0: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003CCA4:
    // 0x8003CCA4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003CCA8: beq         $at, $zero, L_8003CCD8
    if (ctx->r1 == 0) {
        // 0x8003CCAC: nop
    
            goto L_8003CCD8;
    }
    // 0x8003CCAC: nop

    // 0x8003CCB0: lw          $t8, 0x10($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X10);
    // 0x8003CCB4: ori         $t6, $zero, 0x9005
    ctx->r14 = 0 | 0X9005;
    // 0x8003CCB8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8003CCBC: beq         $t9, $zero, L_8003CCD8
    if (ctx->r25 == 0) {
        // 0x8003CCC0: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003CCD8;
    }
    // 0x8003CCC0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CCC4: sw          $t6, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r14;
    // 0x8003CCC8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003CCCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003CCD0: jal         0x8004A0A0
    // 0x8003CCD4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x8003CCD4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_9:
L_8003CCD8:
    // 0x8003CCD8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003CCDC: lw          $t7, -0x4298($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4298);
    // 0x8003CCE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003CCE4: beq         $t7, $at, L_8003CD7C
    if (ctx->r15 == ctx->r1) {
        // 0x8003CCE8: nop
    
            goto L_8003CD7C;
    }
    // 0x8003CCE8: nop

    // 0x8003CCEC: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8003CCF0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CCF4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8003CCF8: bne         $t9, $zero, L_8003CD24
    if (ctx->r25 != 0) {
        // 0x8003CCFC: nop
    
            goto L_8003CD24;
    }
    // 0x8003CCFC: nop

    // 0x8003CD00: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8003CD04: sll         $t8, $fp, 4
    ctx->r24 = S32(ctx->r30 << 4);
    // 0x8003CD08: bne         $s0, $t7, L_8003CD24
    if (ctx->r16 != ctx->r15) {
        // 0x8003CD0C: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_8003CD24;
    }
    // 0x8003CD0C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003CD10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003CD14: lw          $t9, -0x423C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X423C);
    // 0x8003CD18: nop

    // 0x8003CD1C: bgtz        $t9, L_8003CD7C
    if (SIGNED(ctx->r25) > 0) {
        // 0x8003CD20: nop
    
            goto L_8003CD7C;
    }
    // 0x8003CD20: nop

L_8003CD24:
    // 0x8003CD24: jal         0x8005AF70
    // 0x8003CD28: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005AF70(rdram, ctx);
        goto after_10;
    // 0x8003CD28: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_10:
    // 0x8003CD2C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8003CD30: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003CD34: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8003CD38: beq         $t7, $zero, L_8003CD48
    if (ctx->r15 == 0) {
        // 0x8003CD3C: nop
    
            goto L_8003CD48;
    }
    // 0x8003CD3C: nop

    // 0x8003CD40: b           L_8003CD48
    // 0x8003CD44: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003CD48;
    // 0x8003CD44: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003CD48:
    // 0x8003CD48: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003CD4C: beq         $at, $zero, L_8003CD7C
    if (ctx->r1 == 0) {
        // 0x8003CD50: nop
    
            goto L_8003CD7C;
    }
    // 0x8003CD50: nop

    // 0x8003CD54: lw          $t8, 0x10($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X10);
    // 0x8003CD58: ori         $t6, $zero, 0x9004
    ctx->r14 = 0 | 0X9004;
    // 0x8003CD5C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8003CD60: beq         $t9, $zero, L_8003CD7C
    if (ctx->r25 == 0) {
        // 0x8003CD64: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003CD7C;
    }
    // 0x8003CD64: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CD68: sw          $t6, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r14;
    // 0x8003CD6C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003CD70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003CD74: jal         0x8004A0A0
    // 0x8003CD78: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_11;
    // 0x8003CD78: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_11:
L_8003CD7C:
    // 0x8003CD7C: jal         0x8005AF70
    // 0x8003CD80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005AF70(rdram, ctx);
        goto after_12;
    // 0x8003CD80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_12:
    // 0x8003CD84: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8003CD88: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003CD8C: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x8003CD90: beq         $t8, $zero, L_8003CDA0
    if (ctx->r24 == 0) {
        // 0x8003CD94: nop
    
            goto L_8003CDA0;
    }
    // 0x8003CD94: nop

    // 0x8003CD98: b           L_8003CDA0
    // 0x8003CD9C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003CDA0;
    // 0x8003CD9C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003CDA0:
    // 0x8003CDA0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003CDA4: beq         $at, $zero, L_8003CDD8
    if (ctx->r1 == 0) {
        // 0x8003CDA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003CDD8;
    }
    // 0x8003CDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CDAC: lw          $t9, 0x10($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X10);
    // 0x8003CDB0: ori         $t7, $zero, 0x9006
    ctx->r15 = 0 | 0X9006;
    // 0x8003CDB4: andi        $t6, $t9, 0x4
    ctx->r14 = ctx->r25 & 0X4;
    // 0x8003CDB8: beq         $t6, $zero, L_8003CDD4
    if (ctx->r14 == 0) {
        // 0x8003CDBC: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003CDD4;
    }
    // 0x8003CDBC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CDC0: sw          $t7, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r15;
    // 0x8003CDC4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003CDC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003CDCC: jal         0x8004A0A0
    // 0x8003CDD0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_13;
    // 0x8003CDD0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_13:
L_8003CDD4:
    // 0x8003CDD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003CDD8:
    // 0x8003CDD8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8003CDDC: jr          $ra
    // 0x8003CDE0: nop

    return;
    // 0x8003CDE0: nop

;}
RECOMP_FUNC void func_8003CDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CDE4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8003CDE8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003CDEC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003CDF0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003CDF4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003CDF8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003CDFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003CE00: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003CE04: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003CE08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003CE0C: jal         0x80007774
    // 0x8003CE10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8003CE10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003CE14: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x8003CE18: jal         0x8003CA8C
    // 0x8003CE1C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    func_8003CA8C(rdram, ctx);
        goto after_1;
    // 0x8003CE1C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    after_1:
    // 0x8003CE20: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003CE24: addiu       $v1, $v1, -0x4298
    ctx->r3 = ADD32(ctx->r3, -0X4298);
    // 0x8003CE28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003CE2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003CE30: bne         $v0, $at, L_8003CF2C
    if (ctx->r2 != ctx->r1) {
        // 0x8003CE34: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8003CF2C;
    }
    // 0x8003CE34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003CE38: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8003CE3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003CE40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003CE44: addu        $s7, $v1, $t7
    ctx->r23 = ADD32(ctx->r3, ctx->r15);
    // 0x8003CE48: lw          $a0, 0xFC($s7)
    ctx->r4 = MEM_W(ctx->r23, 0XFC);
    // 0x8003CE4C: jal         0x8004A0A0
    // 0x8003CE50: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003CE50: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_2:
    // 0x8003CE54: beq         $v0, $zero, L_8003CEA4
    if (ctx->r2 == 0) {
        // 0x8003CE58: lui         $s1, 0x8009
        ctx->r17 = S32(0X8009 << 16);
            goto L_8003CEA4;
    }
    // 0x8003CE58: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003CE5C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8003CE60: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003CE64: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003CE68: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CE6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CE70: addiu       $t6, $t6, -0x4170
    ctx->r14 = ADD32(ctx->r14, -0X4170);
    // 0x8003CE74: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8003CE78: lwc1        $f4, 0xB0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XB0);
    // 0x8003CE7C: addiu       $s1, $s1, 0xBC
    ctx->r17 = ADD32(ctx->r17, 0XBC);
    // 0x8003CE80: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003CE84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003CE88: lwc1        $f6, 0xB4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB4);
    // 0x8003CE8C: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x8003CE90: lwc1        $f4, 0xB8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XB8);
    // 0x8003CE94: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8003CE98: swc1        $f4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f4.u32l;
    // 0x8003CE9C: b           L_8003CED0
    // 0x8003CEA0: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
        goto L_8003CED0;
    // 0x8003CEA0: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
L_8003CEA4:
    // 0x8003CEA4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8003CEA8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003CEAC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003CEB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003CEB4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8003CEB8: addiu       $s1, $s1, 0xBC
    ctx->r17 = ADD32(ctx->r17, 0XBC);
    // 0x8003CEBC: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x8003CEC0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8003CEC4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8003CEC8: swc1        $f6, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f6.u32l;
    // 0x8003CECC: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
L_8003CED0:
    // 0x8003CED0: lw          $t7, 0xA4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0XA4);
    // 0x8003CED4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003CED8: blez        $t7, L_8003CF20
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8003CEDC: ori         $t8, $zero, 0x900D
        ctx->r24 = 0 | 0X900D;
            goto L_8003CF20;
    }
    // 0x8003CEDC: ori         $t8, $zero, 0x900D
    ctx->r24 = 0 | 0X900D;
L_8003CEE0:
    // 0x8003CEE0: sw          $t8, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r24;
    // 0x8003CEE4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8003CEE8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003CEEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003CEF0: jal         0x8004A0A0
    // 0x8003CEF4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8003CEF4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_3:
    // 0x8003CEF8: beq         $v0, $zero, L_8003CF0C
    if (ctx->r2 == 0) {
        // 0x8003CEFC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003CF0C;
    }
    // 0x8003CEFC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003CF00: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003CF04: jal         0x80000FA0
    // 0x8003CF08: addiu       $a0, $a0, 0x5AC8
    ctx->r4 = ADD32(ctx->r4, 0X5AC8);
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x8003CF08: addiu       $a0, $a0, 0x5AC8
    ctx->r4 = ADD32(ctx->r4, 0X5AC8);
    after_4:
L_8003CF0C:
    // 0x8003CF0C: lw          $t9, 0xA4($s7)
    ctx->r25 = MEM_W(ctx->r23, 0XA4);
    // 0x8003CF10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003CF14: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003CF18: bne         $at, $zero, L_8003CEE0
    if (ctx->r1 != 0) {
        // 0x8003CF1C: ori         $t8, $zero, 0x900D
        ctx->r24 = 0 | 0X900D;
            goto L_8003CEE0;
    }
    // 0x8003CF1C: ori         $t8, $zero, 0x900D
    ctx->r24 = 0 | 0X900D;
L_8003CF20:
    // 0x8003CF20: b           L_8003D034
    // 0x8003CF24: sw          $zero, 0xA4($s7)
    MEM_W(0XA4, ctx->r23) = 0;
        goto L_8003D034;
    // 0x8003CF24: sw          $zero, 0xA4($s7)
    MEM_W(0XA4, ctx->r23) = 0;
    // 0x8003CF28: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8003CF2C:
    // 0x8003CF2C: bne         $v0, $at, L_8003D038
    if (ctx->r2 != ctx->r1) {
        // 0x8003CF30: lw          $v0, 0x80($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X80);
            goto L_8003D038;
    }
    // 0x8003CF30: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x8003CF34: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8003CF38: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003CF3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003CF40: addu        $s7, $v1, $t7
    ctx->r23 = ADD32(ctx->r3, ctx->r15);
    // 0x8003CF44: lw          $v0, 0xA4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XA4);
    // 0x8003CF48: lwc1        $f5, 0x5B80($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5B80);
    // 0x8003CF4C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8003CF50: lwc1        $f4, 0x5B84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B84);
    // 0x8003CF54: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8003CF58: lw          $a0, 0xFC($s7)
    ctx->r4 = MEM_W(ctx->r23, 0XFC);
    // 0x8003CF5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003CF60: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8003CF64: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x8003CF68: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8003CF6C: nop

    // 0x8003CF70: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8003CF74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8003CF78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8003CF7C: nop

    // 0x8003CF80: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x8003CF84: swc1        $f8, 0xA4($s7)
    MEM_W(0XA4, ctx->r23) = ctx->f8.u32l;
    // 0x8003CF88: lw          $t9, 0xA4($s7)
    ctx->r25 = MEM_W(ctx->r23, 0XA4);
    // 0x8003CF8C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8003CF90: jal         0x8004A0A0
    // 0x8003CF94: subu        $s0, $v0, $t9
    ctx->r16 = SUB32(ctx->r2, ctx->r25);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8003CF94: subu        $s0, $v0, $t9
    ctx->r16 = SUB32(ctx->r2, ctx->r25);
    after_5:
    // 0x8003CF98: beq         $v0, $zero, L_8003CFE0
    if (ctx->r2 == 0) {
        // 0x8003CF9C: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003CFE0;
    }
    // 0x8003CF9C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003CFA0: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8003CFA4: addiu       $t8, $t8, -0x4170
    ctx->r24 = ADD32(ctx->r24, -0X4170);
    // 0x8003CFA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003CFAC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CFB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CFB4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003CFB8: lwc1        $f10, 0xB0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XB0);
    // 0x8003CFBC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003CFC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003CFC4: lwc1        $f4, 0xB4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XB4);
    // 0x8003CFC8: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x8003CFCC: lwc1        $f10, 0xB8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XB8);
    // 0x8003CFD0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8003CFD4: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x8003CFD8: b           L_8003CFF8
    // 0x8003CFDC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
        goto L_8003CFF8;
    // 0x8003CFDC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
L_8003CFE0:
    // 0x8003CFE0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003CFE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003CFE8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8003CFEC: nop

    // 0x8003CFF0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8003CFF4: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
L_8003CFF8:
    // 0x8003CFF8: jal         0x8005AF70
    // 0x8003CFFC: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_8005AF70(rdram, ctx);
        goto after_6;
    // 0x8003CFFC: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_6:
    // 0x8003D000: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003D004: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x8003D008: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003D00C: andi        $t6, $t9, 0x400
    ctx->r14 = ctx->r25 & 0X400;
    // 0x8003D010: beq         $t6, $zero, L_8003D020
    if (ctx->r14 == 0) {
        // 0x8003D014: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8003D020;
    }
    // 0x8003D014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003D018: b           L_8003D020
    // 0x8003D01C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003D020;
    // 0x8003D01C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003D020:
    // 0x8003D020: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003D024: beq         $at, $zero, L_8003D038
    if (ctx->r1 == 0) {
        // 0x8003D028: lw          $v0, 0x80($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X80);
            goto L_8003D038;
    }
    // 0x8003D028: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x8003D02C: jal         0x8005B0F4
    // 0x8003D030: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_8005B0F4(rdram, ctx);
        goto after_7;
    // 0x8003D030: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_7:
L_8003D034:
    // 0x8003D034: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
L_8003D038:
    // 0x8003D038: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003D03C: addiu       $v1, $v1, -0x4298
    ctx->r3 = ADD32(ctx->r3, -0X4298);
    // 0x8003D040: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8003D044: addu        $s7, $v1, $t7
    ctx->r23 = ADD32(ctx->r3, ctx->r15);
    // 0x8003D048: lw          $a0, 0xFC($s7)
    ctx->r4 = MEM_W(ctx->r23, 0XFC);
    // 0x8003D04C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8003D050: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x8003D054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D058: jal         0x8005B5C8
    // 0x8003D05C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8005B5C8(rdram, ctx);
        goto after_8;
    // 0x8003D05C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8003D060: jal         0x8000797C
    // 0x8003D064: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8000797C(rdram, ctx);
        goto after_9;
    // 0x8003D064: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_9:
    // 0x8003D068: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003D06C: lw          $v0, -0x4298($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4298);
    // 0x8003D070: nop

    // 0x8003D074: bne         $v0, $zero, L_8003D0F8
    if (ctx->r2 != 0) {
        // 0x8003D078: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003D0F8;
    }
    // 0x8003D078: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003D07C: lw          $t8, -0x425C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X425C);
    // 0x8003D080: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003D084: bne         $t8, $zero, L_8003D140
    if (ctx->r24 != 0) {
        // 0x8003D088: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003D140;
    }
    // 0x8003D088: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003D08C: lw          $v1, -0x415C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X415C);
    // 0x8003D090: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x8003D094: slti        $at, $v1, 0x385
    ctx->r1 = SIGNED(ctx->r3) < 0X385 ? 1 : 0;
    // 0x8003D098: beq         $at, $zero, L_8003D0A4
    if (ctx->r1 == 0) {
        // 0x8003D09C: addiu       $s1, $sp, 0x64
        ctx->r17 = ADD32(ctx->r29, 0X64);
            goto L_8003D0A4;
    }
    // 0x8003D09C: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    // 0x8003D0A0: bgez        $v1, L_8003D13C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003D0A4: sll         $t6, $s2, 2
        ctx->r14 = S32(ctx->r18 << 2);
            goto L_8003D13C;
    }
L_8003D0A4:
    // 0x8003D0A4: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8003D0A8: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x8003D0AC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003D0B0: addiu       $t7, $t7, -0x4170
    ctx->r15 = ADD32(ctx->r15, -0X4170);
    // 0x8003D0B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D0B8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8003D0BC: jal         0x8003C9EC
    // 0x8003D0C0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_8003C9EC(rdram, ctx);
        goto after_10;
    // 0x8003D0C0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_10:
    // 0x8003D0C4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8003D0C8: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x8003D0CC: jal         0x8003C874
    // 0x8003D0D0: addiu       $s1, $v0, 0xB0
    ctx->r17 = ADD32(ctx->r2, 0XB0);
    func_8003C874(rdram, ctx);
        goto after_11;
    // 0x8003D0D0: addiu       $s1, $v0, 0xB0
    ctx->r17 = ADD32(ctx->r2, 0XB0);
    after_11:
    // 0x8003D0D4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8003D0D8: jal         0x8005C760
    // 0x8003D0DC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_8005C760(rdram, ctx);
        goto after_12;
    // 0x8003D0DC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_12:
    // 0x8003D0E0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8003D0E4: sw          $t8, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r24;
    // 0x8003D0E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003D0EC: lw          $v0, -0x4298($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4298);
    // 0x8003D0F0: b           L_8003D140
    // 0x8003D0F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
        goto L_8003D140;
    // 0x8003D0F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8003D0F8:
    // 0x8003D0F8: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x8003D0FC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003D100: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8003D104: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x8003D108: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D10C: addiu       $t7, $t7, -0x4170
    ctx->r15 = ADD32(ctx->r15, -0X4170);
    // 0x8003D110: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8003D114: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8003D118: jal         0x8003C9EC
    // 0x8003D11C: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    func_8003C9EC(rdram, ctx);
        goto after_13;
    // 0x8003D11C: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    after_13:
    // 0x8003D120: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8003D124: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x8003D128: jal         0x8003C874
    // 0x8003D12C: addiu       $s1, $v0, 0xB0
    ctx->r17 = ADD32(ctx->r2, 0XB0);
    func_8003C874(rdram, ctx);
        goto after_14;
    // 0x8003D12C: addiu       $s1, $v0, 0xB0
    ctx->r17 = ADD32(ctx->r2, 0XB0);
    after_14:
    // 0x8003D130: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003D134: lw          $v0, -0x4298($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4298);
    // 0x8003D138: nop

L_8003D13C:
    // 0x8003D13C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8003D140:
    // 0x8003D140: beq         $v0, $at, L_8003D150
    if (ctx->r2 == ctx->r1) {
        // 0x8003D144: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8003D150;
    }
    // 0x8003D144: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003D148: bne         $v0, $at, L_8003D164
    if (ctx->r2 != ctx->r1) {
        // 0x8003D14C: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_8003D164;
    }
    // 0x8003D14C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_8003D150:
    // 0x8003D150: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8003D154: lw          $a1, 0xFC($s7)
    ctx->r5 = MEM_W(ctx->r23, 0XFC);
    // 0x8003D158: jal         0x8002B4A8
    // 0x8003D15C: nop

    func_8002B4A8(rdram, ctx);
        goto after_15;
    // 0x8003D15C: nop

    after_15:
    // 0x8003D160: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_8003D164:
    // 0x8003D164: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003D168: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003D16C: jal         0x80007AE0
    // 0x8003D170: sw          $zero, 0x15C($at)
    MEM_W(0X15C, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_16;
    // 0x8003D170: sw          $zero, 0x15C($at)
    MEM_W(0X15C, ctx->r1) = 0;
    after_16:
    // 0x8003D174: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003D178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003D17C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D180: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003D184: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003D188: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003D18C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D190: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003D194: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003D198: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003D19C: jr          $ra
    // 0x8003D1A0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8003D1A0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8003D1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D1A4: jr          $ra
    // 0x8003D1A8: nop

    return;
    // 0x8003D1A8: nop

;}
RECOMP_FUNC void func_8003D1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D1AC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8003D1B0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003D1B4: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8003D1B8: addiu       $fp, $fp, -0x42C0
    ctx->r30 = ADD32(ctx->r30, -0X42C0);
    // 0x8003D1BC: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x8003D1C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003D1C4: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8003D1C8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003D1CC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003D1D0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003D1D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003D1D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003D1DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003D1E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003D1E4: beq         $t7, $zero, L_8003D398
    if (ctx->r15 == 0) {
        // 0x8003D1E8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8003D398;
    }
    // 0x8003D1E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003D1EC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003D1F0: lw          $t8, -0x4298($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4298);
    // 0x8003D1F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003D1F8: sw          $zero, -0x3D6C($at)
    MEM_W(-0X3D6C, ctx->r1) = 0;
    // 0x8003D1FC: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x8003D200: beq         $at, $zero, L_8003D398
    if (ctx->r1 == 0) {
        // 0x8003D204: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8003D398;
    }
    // 0x8003D204: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003D208: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003D20C: addu        $at, $at, $t8
    gpr jr_addend_8003D218 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003D210: lw          $t8, 0x5B88($at)
    ctx->r24 = ADD32(ctx->r1, 0X5B88);
    // 0x8003D214: nop

    // 0x8003D218: jr          $t8
    // 0x8003D21C: nop

    switch (jr_addend_8003D218 >> 2) {
        case 0: goto L_8003D378; break;
        case 1: goto L_8003D378; break;
        case 2: goto L_8003D220; break;
        case 3: goto L_8003D398; break;
        case 4: goto L_8003D398; break;
        default: switch_error(__func__, 0x8003D218, 0x80095B88);
    }
    // 0x8003D21C: nop

L_8003D220:
    // 0x8003D220: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003D224: addiu       $t9, $t9, 0x630
    ctx->r25 = ADD32(ctx->r25, 0X630);
    // 0x8003D228: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8003D22C: addiu       $s6, $sp, 0x80
    ctx->r22 = ADD32(ctx->r29, 0X80);
    // 0x8003D230: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x8003D234: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x8003D238: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003D23C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8003D240: addiu       $s7, $s7, 0x610
    ctx->r23 = ADD32(ctx->r23, 0X610);
    // 0x8003D244: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x8003D248: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003D24C: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x8003D250: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x8003D254: sw          $t8, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r24;
L_8003D258:
    // 0x8003D258: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x8003D25C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003D260: beq         $t7, $zero, L_8003D2FC
    if (ctx->r15 == 0) {
        // 0x8003D264: nop
    
            goto L_8003D2FC;
    }
    // 0x8003D264: nop

    // 0x8003D268: jal         0x8005C3A8
    // 0x8003D26C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x8003D26C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8003D270: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x8003D274: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8003D278: ori         $t9, $t6, 0x2
    ctx->r25 = ctx->r14 | 0X2;
    // 0x8003D27C: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x8003D280: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8003D284: lw          $v1, 0x94($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X94);
    // 0x8003D288: andi        $t8, $a0, 0x8000
    ctx->r24 = ctx->r4 & 0X8000;
    // 0x8003D28C: lw          $a3, -0x4178($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4178);
    // 0x8003D290: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_8003D294:
    // 0x8003D294: beq         $a0, $zero, L_8003D2B4
    if (ctx->r4 == 0) {
        // 0x8003D298: nop
    
            goto L_8003D2B4;
    }
    // 0x8003D298: nop

    // 0x8003D29C: bne         $s5, $a3, L_8003D2B4
    if (ctx->r21 != ctx->r7) {
        // 0x8003D2A0: nop
    
            goto L_8003D2B4;
    }
    // 0x8003D2A0: nop

    // 0x8003D2A4: beq         $s0, $v1, L_8003D2BC
    if (ctx->r16 == ctx->r3) {
        // 0x8003D2A8: nop
    
            goto L_8003D2BC;
    }
    // 0x8003D2A8: nop

    // 0x8003D2AC: b           L_8003D2CC
    // 0x8003D2B0: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
        goto L_8003D2CC;
    // 0x8003D2B0: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
L_8003D2B4:
    // 0x8003D2B4: beq         $s0, $v1, L_8003D2CC
    if (ctx->r16 == ctx->r3) {
        // 0x8003D2B8: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_8003D2CC;
    }
    // 0x8003D2B8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
L_8003D2BC:
    // 0x8003D2BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D2C0: bne         $s0, $s2, L_8003D294
    if (ctx->r16 != ctx->r18) {
        // 0x8003D2C4: nop
    
            goto L_8003D294;
    }
    // 0x8003D2C4: nop

    // 0x8003D2C8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
L_8003D2CC:
    // 0x8003D2CC: addu        $t9, $s7, $t6
    ctx->r25 = ADD32(ctx->r23, ctx->r14);
    // 0x8003D2D0: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8003D2D4: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8003D2D8: addu        $s1, $s6, $t7
    ctx->r17 = ADD32(ctx->r22, ctx->r15);
    // 0x8003D2DC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8003D2E0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003D2E4: jalr        $t9
    // 0x8003D2E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003D2E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8003D2EC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8003D2F0: nop

    // 0x8003D2F4: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8003D2F8: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
L_8003D2FC:
    // 0x8003D2FC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003D300: bne         $s4, $s5, L_8003D258
    if (ctx->r20 != ctx->r21) {
        // 0x8003D304: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8003D258;
    }
    // 0x8003D304: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8003D308: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003D30C: lw          $t6, -0x4178($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4178);
    // 0x8003D310: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003D314: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8003D318: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8003D31C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003D320: addiu       $t8, $t8, 0x4F0
    ctx->r24 = ADD32(ctx->r24, 0X4F0);
    // 0x8003D324: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x8003D328: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003D32C: addiu       $v1, $v1, 0x4D4
    ctx->r3 = ADD32(ctx->r3, 0X4D4);
    // 0x8003D330: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8003D334: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8003D338: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8003D33C: addiu       $t7, $zero, 0x11E
    ctx->r15 = ADD32(0, 0X11E);
    // 0x8003D340: sw          $t7, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r15;
    // 0x8003D344: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x8003D348: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003D34C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D350: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8003D354: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x8003D358: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8003D35C: jal         0x8004A0A0
    // 0x8003D360: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003D360: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    after_2:
    // 0x8003D364: beq         $v0, $zero, L_8003D378
    if (ctx->r2 == 0) {
        // 0x8003D368: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003D378;
    }
    // 0x8003D368: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003D36C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003D370: jal         0x80000FA0
    // 0x8003D374: addiu       $a0, $a0, 0x5AEC
    ctx->r4 = ADD32(ctx->r4, 0X5AEC);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x8003D374: addiu       $a0, $a0, 0x5AEC
    ctx->r4 = ADD32(ctx->r4, 0X5AEC);
    after_3:
L_8003D378:
    // 0x8003D378: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003D37C: addiu       $a0, $a0, -0x48BC
    ctx->r4 = ADD32(ctx->r4, -0X48BC);
    // 0x8003D380: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x8003D384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D388: jal         0x80007C3C
    // 0x8003D38C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_4;
    // 0x8003D38C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x8003D390: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003D394: sw          $v0, -0x3D6C($at)
    MEM_W(-0X3D6C, ctx->r1) = ctx->r2;
L_8003D398:
    // 0x8003D398: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x8003D39C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8003D3A0:
    // 0x8003D3A0: jal         0x8003B354
    // 0x8003D3A4: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_8003B354(rdram, ctx);
        goto after_5;
    // 0x8003D3A4: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_5:
    // 0x8003D3A8: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x8003D3AC: nop

    // 0x8003D3B0: andi        $t9, $t6, 0x8000
    ctx->r25 = ctx->r14 & 0X8000;
    // 0x8003D3B4: bne         $t9, $zero, L_8003D3C4
    if (ctx->r25 != 0) {
        // 0x8003D3B8: nop
    
            goto L_8003D3C4;
    }
    // 0x8003D3B8: nop

    // 0x8003D3BC: jal         0x8003B250
    // 0x8003D3C0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_8003B250(rdram, ctx);
        goto after_6;
    // 0x8003D3C0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_6:
L_8003D3C4:
    // 0x8003D3C4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003D3C8: bne         $s4, $s5, L_8003D3A0
    if (ctx->r20 != ctx->r21) {
        // 0x8003D3CC: nop
    
            goto L_8003D3A0;
    }
    // 0x8003D3CC: nop

    // 0x8003D3D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003D3D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003D3D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D3DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003D3E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003D3E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003D3E8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D3EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003D3F0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003D3F4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003D3F8: jr          $ra
    // 0x8003D3FC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8003D3FC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8003D400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D400: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003D404: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8003D408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D40C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8003D410: beq         $t7, $zero, L_8003D420
    if (ctx->r15 == 0) {
        // 0x8003D414: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8003D420;
    }
    // 0x8003D414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D418: jal         0x80030B08
    // 0x8003D41C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80030B08(rdram, ctx);
        goto after_0;
    // 0x8003D41C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_8003D420:
    // 0x8003D420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D428: jr          $ra
    // 0x8003D42C: nop

    return;
    // 0x8003D42C: nop

;}
RECOMP_FUNC void func_8003D430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D430: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8003D434: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003D438: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x8003D43C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003D440: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x8003D444: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003D448: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003D44C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003D450: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003D454: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003D458: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003D45C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003D460: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003D464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003D468: beq         $t6, $zero, L_8003D5A0
    if (ctx->r14 == 0) {
        // 0x8003D46C: sw          $a0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r4;
            goto L_8003D5A0;
    }
    // 0x8003D46C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8003D470: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8003D474: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003D478: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003D47C: lw          $t9, -0x4294($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4294);
    // 0x8003D480: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8003D484: beq         $t9, $zero, L_8003D5A0
    if (ctx->r25 == 0) {
        // 0x8003D488: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_8003D5A0;
    }
    // 0x8003D488: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8003D48C: beq         $t6, $zero, L_8003D49C
    if (ctx->r14 == 0) {
        // 0x8003D490: addiu       $s4, $s4, 0x638
        ctx->r20 = ADD32(ctx->r20, 0X638);
            goto L_8003D49C;
    }
    // 0x8003D490: addiu       $s4, $s4, 0x638
    ctx->r20 = ADD32(ctx->r20, 0X638);
    // 0x8003D494: b           L_8003D4A0
    // 0x8003D498: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
        goto L_8003D4A0;
    // 0x8003D498: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
L_8003D49C:
    // 0x8003D49C: addiu       $s6, $zero, 0x7
    ctx->r22 = ADD32(0, 0X7);
L_8003D4A0:
    // 0x8003D4A0: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8003D4A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003D4A8: beq         $t7, $zero, L_8003D4C4
    if (ctx->r15 == 0) {
        // 0x8003D4AC: lui         $s1, 0x800B
        ctx->r17 = S32(0X800B << 16);
            goto L_8003D4C4;
    }
    // 0x8003D4AC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003D4B0: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x8003D4B4: addiu       $fp, $zero, 0x8
    ctx->r30 = ADD32(0, 0X8);
    // 0x8003D4B8: addiu       $s7, $sp, 0x50
    ctx->r23 = ADD32(ctx->r29, 0X50);
    // 0x8003D4BC: b           L_8003D544
    // 0x8003D4C0: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
        goto L_8003D544;
    // 0x8003D4C0: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
L_8003D4C4:
    // 0x8003D4C4: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003D4C8: addiu       $fp, $zero, 0x8
    ctx->r30 = ADD32(0, 0X8);
    // 0x8003D4CC: addiu       $s7, $sp, 0x50
    ctx->r23 = ADD32(ctx->r29, 0X50);
    // 0x8003D4D0: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
    // 0x8003D4D4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8003D4D8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_8003D4DC:
    // 0x8003D4DC: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x8003D4E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003D4E4: beq         $t8, $zero, L_8003D538
    if (ctx->r24 == 0) {
        // 0x8003D4E8: nop
    
            goto L_8003D538;
    }
    // 0x8003D4E8: nop

    // 0x8003D4EC: jal         0x8005BCB4
    // 0x8003D4F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x8003D4F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x8003D4F4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8003D4F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003D4FC: andi        $t6, $t9, 0x400
    ctx->r14 = ctx->r25 & 0X400;
    // 0x8003D500: beq         $t6, $zero, L_8003D510
    if (ctx->r14 == 0) {
        // 0x8003D504: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8003D510;
    }
    // 0x8003D504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003D508: b           L_8003D510
    // 0x8003D50C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_8003D510;
    // 0x8003D50C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8003D510:
    // 0x8003D510: beq         $v0, $zero, L_8003D538
    if (ctx->r2 == 0) {
        // 0x8003D514: nop
    
            goto L_8003D538;
    }
    // 0x8003D514: nop

    // 0x8003D518: jal         0x8005BB84
    // 0x8003D51C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8005BB84(rdram, ctx);
        goto after_1;
    // 0x8003D51C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_1:
    // 0x8003D520: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8003D524: nop

    // 0x8003D528: bne         $t7, $fp, L_8003D538
    if (ctx->r15 != ctx->r30) {
        // 0x8003D52C: nop
    
            goto L_8003D538;
    }
    // 0x8003D52C: nop

    // 0x8003D530: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x8003D534: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
L_8003D538:
    // 0x8003D538: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D53C: bne         $s0, $s2, L_8003D4DC
    if (ctx->r16 != ctx->r18) {
        // 0x8003D540: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003D4DC;
    }
    // 0x8003D540: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8003D544:
    // 0x8003D544: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8003D548: jal         0x8005BCB4
    // 0x8003D54C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_2;
    // 0x8003D54C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x8003D550: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8003D554: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8003D558: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8003D55C: beq         $t9, $zero, L_8003D56C
    if (ctx->r25 == 0) {
        // 0x8003D560: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003D56C;
    }
    // 0x8003D560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003D564: b           L_8003D56C
    // 0x8003D568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003D56C;
    // 0x8003D568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D56C:
    // 0x8003D56C: beq         $v0, $zero, L_8003D58C
    if (ctx->r2 == 0) {
        // 0x8003D570: nop
    
            goto L_8003D58C;
    }
    // 0x8003D570: nop

    // 0x8003D574: jal         0x8005BB84
    // 0x8003D578: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8005BB84(rdram, ctx);
        goto after_3;
    // 0x8003D578: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_3:
    // 0x8003D57C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8003D580: nop

    // 0x8003D584: beq         $t6, $fp, L_8003D5A4
    if (ctx->r14 == ctx->r30) {
        // 0x8003D588: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8003D5A4;
    }
    // 0x8003D588: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8003D58C:
    // 0x8003D58C: jal         0x80028AB8
    // 0x8003D590: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8003D590: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_4:
    // 0x8003D594: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x8003D598: jal         0x80039A04
    // 0x8003D59C: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    func_80039A04(rdram, ctx);
        goto after_5;
    // 0x8003D59C: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    after_5:
L_8003D5A0:
    // 0x8003D5A0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8003D5A4:
    // 0x8003D5A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003D5A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D5AC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003D5B0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003D5B4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003D5B8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D5BC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003D5C0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003D5C4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003D5C8: jr          $ra
    // 0x8003D5CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8003D5CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8003D5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D5D0: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8003D5D4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003D5D8: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8003D5DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003D5E0: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8003D5E4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003D5E8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003D5EC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003D5F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003D5F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003D5F8: beq         $t7, $zero, L_8003DA94
    if (ctx->r15 == 0) {
        // 0x8003D5FC: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8003DA94;
    }
    // 0x8003D5FC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003D600: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8003D604: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
    // 0x8003D608: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x8003D60C: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_8003D610:
    // 0x8003D610: jal         0x80028AB8
    // 0x8003D614: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8003D614: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8003D618: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003D61C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8003D620: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003D624: beq         $a0, $at, L_8003D634
    if (ctx->r4 == ctx->r1) {
        // 0x8003D628: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_8003D634;
    }
    // 0x8003D628: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x8003D62C: beq         $v1, $s5, L_8003D610
    if (ctx->r3 == ctx->r21) {
        // 0x8003D630: nop
    
            goto L_8003D610;
    }
    // 0x8003D630: nop

L_8003D634:
    // 0x8003D634: beq         $s5, $a0, L_8003D644
    if (ctx->r21 == ctx->r4) {
        // 0x8003D638: nop
    
            goto L_8003D644;
    }
    // 0x8003D638: nop

    // 0x8003D63C: beq         $v1, $s1, L_8003D610
    if (ctx->r3 == ctx->r17) {
        // 0x8003D640: nop
    
            goto L_8003D610;
    }
    // 0x8003D640: nop

L_8003D644:
    // 0x8003D644: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003D648: lw          $v1, -0x4088($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4088);
    // 0x8003D64C: nop

    // 0x8003D650: beq         $v1, $zero, L_8003D660
    if (ctx->r3 == 0) {
        // 0x8003D654: addiu       $t8, $s2, -0x1
        ctx->r24 = ADD32(ctx->r18, -0X1);
            goto L_8003D660;
    }
    // 0x8003D654: addiu       $t8, $s2, -0x1
    ctx->r24 = ADD32(ctx->r18, -0X1);
    // 0x8003D658: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8003D65C: addiu       $t8, $s2, -0x1
    ctx->r24 = ADD32(ctx->r18, -0X1);
L_8003D660:
    // 0x8003D660: sltiu       $at, $t8, 0xB
    ctx->r1 = ctx->r24 < 0XB ? 1 : 0;
    // 0x8003D664: beq         $at, $zero, L_8003DA94
    if (ctx->r1 == 0) {
        // 0x8003D668: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8003DA94;
    }
    // 0x8003D668: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003D66C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003D670: addu        $at, $at, $t8
    gpr jr_addend_8003D67C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003D674: lw          $t8, 0x5B9C($at)
    ctx->r24 = ADD32(ctx->r1, 0X5B9C);
    // 0x8003D678: nop

    // 0x8003D67C: jr          $t8
    // 0x8003D680: nop

    switch (jr_addend_8003D67C >> 2) {
        case 0: goto L_8003D684; break;
        case 1: goto L_8003D9AC; break;
        case 2: goto L_8003D6C0; break;
        case 3: goto L_8003D960; break;
        case 4: goto L_8003D6E8; break;
        case 5: goto L_8003D808; break;
        case 6: goto L_8003D724; break;
        case 7: goto L_8003D938; break;
        case 8: goto L_8003D7E0; break;
        case 9: goto L_8003DA1C; break;
        case 10: goto L_8003DA60; break;
        default: switch_error(__func__, 0x8003D67C, 0x80095B9C);
    }
    // 0x8003D680: nop

L_8003D684:
    // 0x8003D684: bne         $v1, $zero, L_8003DA94
    if (ctx->r3 != 0) {
        // 0x8003D688: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8003DA94;
    }
    // 0x8003D688: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003D68C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003D690: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
L_8003D694:
    // 0x8003D694: lw          $t9, 0x4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X4);
    // 0x8003D698: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8003D69C: beq         $t9, $zero, L_8003D6AC
    if (ctx->r25 == 0) {
        // 0x8003D6A0: nop
    
            goto L_8003D6AC;
    }
    // 0x8003D6A0: nop

    // 0x8003D6A4: jal         0x80039A04
    // 0x8003D6A8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    func_80039A04(rdram, ctx);
        goto after_1;
    // 0x8003D6A8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    after_1:
L_8003D6AC:
    // 0x8003D6AC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D6B0: bne         $s3, $s5, L_8003D694
    if (ctx->r19 != ctx->r21) {
        // 0x8003D6B4: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003D694;
    }
    // 0x8003D6B4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003D6B8: b           L_8003DA98
    // 0x8003D6BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003D6BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003D6C0:
    // 0x8003D6C0: jal         0x80027874
    // 0x8003D6C4: addiu       $a0, $zero, 0x374
    ctx->r4 = ADD32(0, 0X374);
    func_80027874(rdram, ctx);
        goto after_2;
    // 0x8003D6C4: addiu       $a0, $zero, 0x374
    ctx->r4 = ADD32(0, 0X374);
    after_2:
    // 0x8003D6C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8003D6CC:
    // 0x8003D6CC: jal         0x8003D430
    // 0x8003D6D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8003D430(rdram, ctx);
        goto after_3;
    // 0x8003D6D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8003D6D4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D6D8: bne         $s3, $s5, L_8003D6CC
    if (ctx->r19 != ctx->r21) {
        // 0x8003D6DC: nop
    
            goto L_8003D6CC;
    }
    // 0x8003D6DC: nop

    // 0x8003D6E0: b           L_8003DA98
    // 0x8003D6E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003D6E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003D6E8:
    // 0x8003D6E8: bne         $v1, $zero, L_8003DA94
    if (ctx->r3 != 0) {
        // 0x8003D6EC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8003DA94;
    }
    // 0x8003D6EC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003D6F0: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003D6F4: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
L_8003D6F8:
    // 0x8003D6F8: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x8003D6FC: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8003D700: beq         $t6, $zero, L_8003D710
    if (ctx->r14 == 0) {
        // 0x8003D704: nop
    
            goto L_8003D710;
    }
    // 0x8003D704: nop

    // 0x8003D708: jal         0x80039A04
    // 0x8003D70C: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    func_80039A04(rdram, ctx);
        goto after_4;
    // 0x8003D70C: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    after_4:
L_8003D710:
    // 0x8003D710: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D714: bne         $s3, $s5, L_8003D6F8
    if (ctx->r19 != ctx->r21) {
        // 0x8003D718: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003D6F8;
    }
    // 0x8003D718: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003D71C: b           L_8003DA98
    // 0x8003D720: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003D720: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003D724:
    // 0x8003D724: jal         0x80027874
    // 0x8003D728: addiu       $a0, $zero, 0x36A
    ctx->r4 = ADD32(0, 0X36A);
    func_80027874(rdram, ctx);
        goto after_5;
    // 0x8003D728: addiu       $a0, $zero, 0x36A
    ctx->r4 = ADD32(0, 0X36A);
    after_5:
    // 0x8003D72C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003D730: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8003D734: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003D738: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003D73C:
    // 0x8003D73C: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x8003D740: nop

    // 0x8003D744: beq         $t7, $zero, L_8003D790
    if (ctx->r15 == 0) {
        // 0x8003D748: nop
    
            goto L_8003D790;
    }
    // 0x8003D748: nop

    // 0x8003D74C: lw          $t8, 0xC8($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC8);
    // 0x8003D750: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003D754: bne         $t8, $zero, L_8003D790
    if (ctx->r24 != 0) {
        // 0x8003D758: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_8003D790;
    }
    // 0x8003D758: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x8003D75C: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x8003D760: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003D764: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x8003D768: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x8003D76C: jal         0x8002D000
    // 0x8003D770: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_8002D000(rdram, ctx);
        goto after_6;
    // 0x8003D770: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_6:
    // 0x8003D774: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8003D778: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D77C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8003D780: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003D784: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003D788: jal         0x8004A0A0
    // 0x8003D78C: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8003D78C: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    after_7:
L_8003D790:
    // 0x8003D790: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D794: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8003D798: bne         $at, $zero, L_8003D73C
    if (ctx->r1 != 0) {
        // 0x8003D79C: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003D73C;
    }
    // 0x8003D79C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003D7A0: jal         0x80028AB8
    // 0x8003D7A4: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    func_80028AB8(rdram, ctx);
        goto after_8;
    // 0x8003D7A4: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    after_8:
    // 0x8003D7A8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8003D7AC: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8003D7B0: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x8003D7B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003D7B8: addu        $a0, $s2, $t7
    ctx->r4 = ADD32(ctx->r18, ctx->r15);
    // 0x8003D7BC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8003D7C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003D7C4: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8003D7C8: nop

    // 0x8003D7CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8003D7D0: jal         0x8005A538
    // 0x8003D7D4: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    func_8005A538(rdram, ctx);
        goto after_9;
    // 0x8003D7D4: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    after_9:
    // 0x8003D7D8: b           L_8003DA98
    // 0x8003D7DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003D7DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003D7E0:
    // 0x8003D7E0: bne         $v1, $zero, L_8003DA94
    if (ctx->r3 != 0) {
        // 0x8003D7E4: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8003DA94;
    }
    // 0x8003D7E4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003D7E8: addiu       $a0, $a0, -0x4190
    ctx->r4 = ADD32(ctx->r4, -0X4190);
    // 0x8003D7EC: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x8003D7F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D7F4: jal         0x80007C3C
    // 0x8003D7F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_10;
    // 0x8003D7F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x8003D7FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003D800: b           L_8003DA94
    // 0x8003D804: sw          $v0, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = ctx->r2;
        goto L_8003DA94;
    // 0x8003D804: sw          $v0, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = ctx->r2;
L_8003D808:
    // 0x8003D808: bne         $v1, $zero, L_8003DA98
    if (ctx->r3 != 0) {
        // 0x8003D80C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8003DA98;
    }
    // 0x8003D80C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D810: jal         0x80027874
    // 0x8003D814: addiu       $a0, $zero, 0x367
    ctx->r4 = ADD32(0, 0X367);
    func_80027874(rdram, ctx);
        goto after_11;
    // 0x8003D814: addiu       $a0, $zero, 0x367
    ctx->r4 = ADD32(0, 0X367);
    after_11:
    // 0x8003D818: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003D81C: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8003D820: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003D824: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003D828: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
L_8003D82C:
    // 0x8003D82C: lw          $t8, 0x4($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X4);
    // 0x8003D830: nop

    // 0x8003D834: beq         $t8, $zero, L_8003D87C
    if (ctx->r24 == 0) {
        // 0x8003D838: nop
    
            goto L_8003D87C;
    }
    // 0x8003D838: nop

    // 0x8003D83C: lw          $t9, 0xC8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XC8);
    // 0x8003D840: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003D844: bne         $t9, $zero, L_8003D87C
    if (ctx->r25 != 0) {
        // 0x8003D848: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_8003D87C;
    }
    // 0x8003D848: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8003D84C: addiu       $t7, $sp, 0xA4
    ctx->r15 = ADD32(ctx->r29, 0XA4);
    // 0x8003D850: jal         0x8002D000
    // 0x8003D854: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    func_8002D000(rdram, ctx);
        goto after_12;
    // 0x8003D854: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_12:
    // 0x8003D858: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D85C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003D860: jal         0x8004A0A0
    // 0x8003D864: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_13;
    // 0x8003D864: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_13:
    // 0x8003D868: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8003D86C: jal         0x8005D1B4
    // 0x8003D870: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_14;
    // 0x8003D870: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_14:
    // 0x8003D874: sw          $s3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r19;
    // 0x8003D878: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8003D87C:
    // 0x8003D87C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D880: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8003D884: bne         $at, $zero, L_8003D82C
    if (ctx->r1 != 0) {
        // 0x8003D888: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003D82C;
    }
    // 0x8003D888: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003D88C: blez        $s1, L_8003DA94
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8003D890: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8003DA94;
    }
    // 0x8003D890: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003D894: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    // 0x8003D898: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8003D89C: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x8003D8A0: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
L_8003D8A4:
    // 0x8003D8A4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8003D8A8: jal         0x80028AB8
    // 0x8003D8AC: nop

    func_80028AB8(rdram, ctx);
        goto after_15;
    // 0x8003D8AC: nop

    after_15:
    // 0x8003D8B0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8003D8B4: addu        $s4, $sp, $t8
    ctx->r20 = ADD32(ctx->r29, ctx->r24);
    // 0x8003D8B8: lw          $s4, 0xA4($s4)
    ctx->r20 = MEM_W(ctx->r20, 0XA4);
    // 0x8003D8BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003D8C0: jal         0x8002D000
    // 0x8003D8C4: nop

    func_8002D000(rdram, ctx);
        goto after_16;
    // 0x8003D8C4: nop

    after_16:
    // 0x8003D8C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D8CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003D8D0: jal         0x8004A0A0
    // 0x8003D8D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_17;
    // 0x8003D8D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x8003D8D8: jal         0x8002D000
    // 0x8003D8DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8002D000(rdram, ctx);
        goto after_18;
    // 0x8003D8DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_18:
    // 0x8003D8E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D8E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003D8E8: jal         0x8004A0A0
    // 0x8003D8EC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_19;
    // 0x8003D8EC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_19:
    // 0x8003D8F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003D8F4: jal         0x8002D000
    // 0x8003D8F8: nop

    func_8002D000(rdram, ctx);
        goto after_20;
    // 0x8003D8F8: nop

    after_20:
    // 0x8003D8FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D900: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003D904: jal         0x8004A0A0
    // 0x8003D908: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_21;
    // 0x8003D908: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_21:
    // 0x8003D90C: jal         0x8002D000
    // 0x8003D910: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8002D000(rdram, ctx);
        goto after_22;
    // 0x8003D910: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_22:
    // 0x8003D914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D918: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003D91C: jal         0x8004A0A0
    // 0x8003D920: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_23;
    // 0x8003D920: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_23:
    // 0x8003D924: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D928: bne         $s3, $s1, L_8003D8A4
    if (ctx->r19 != ctx->r17) {
        // 0x8003D92C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8003D8A4;
    }
    // 0x8003D92C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003D930: b           L_8003DA98
    // 0x8003D934: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003D934: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003D938:
    // 0x8003D938: bne         $v1, $zero, L_8003DA94
    if (ctx->r3 != 0) {
        // 0x8003D93C: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8003DA94;
    }
    // 0x8003D93C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003D940: addiu       $a0, $a0, -0x4390
    ctx->r4 = ADD32(ctx->r4, -0X4390);
    // 0x8003D944: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x8003D948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D94C: jal         0x80007C3C
    // 0x8003D950: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_24;
    // 0x8003D950: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_24:
    // 0x8003D954: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003D958: b           L_8003DA94
    // 0x8003D95C: sw          $v0, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = ctx->r2;
        goto L_8003DA94;
    // 0x8003D95C: sw          $v0, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = ctx->r2;
L_8003D960:
    // 0x8003D960: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003D964: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8003D968: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8003D96C:
    // 0x8003D96C: lw          $t9, 0x4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X4);
    // 0x8003D970: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8003D974: beq         $t9, $zero, L_8003D98C
    if (ctx->r25 == 0) {
        // 0x8003D978: addiu       $s0, $zero, 0xB
        ctx->r16 = ADD32(0, 0XB);
            goto L_8003D98C;
    }
    // 0x8003D978: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    // 0x8003D97C: jal         0x80039A04
    // 0x8003D980: sw          $s2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r18;
    func_80039A04(rdram, ctx);
        goto after_25;
    // 0x8003D980: sw          $s2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r18;
    after_25:
    // 0x8003D984: lw          $s2, 0xBC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XBC);
    // 0x8003D988: nop

L_8003D98C:
    // 0x8003D98C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003D990: bne         $s3, $s5, L_8003D96C
    if (ctx->r19 != ctx->r21) {
        // 0x8003D994: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003D96C;
    }
    // 0x8003D994: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003D998: jal         0x80027874
    // 0x8003D99C: addiu       $a0, $zero, 0x367
    ctx->r4 = ADD32(0, 0X367);
    func_80027874(rdram, ctx);
        goto after_26;
    // 0x8003D99C: addiu       $a0, $zero, 0x367
    ctx->r4 = ADD32(0, 0X367);
    after_26:
    // 0x8003D9A0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003D9A4: lw          $v1, -0x4088($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4088);
    // 0x8003D9A8: nop

L_8003D9AC:
    // 0x8003D9AC: bne         $v1, $zero, L_8003DA94
    if (ctx->r3 != 0) {
        // 0x8003D9B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003DA94;
    }
    // 0x8003D9B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003D9B4: bne         $s2, $at, L_8003D9D8
    if (ctx->r18 != ctx->r1) {
        // 0x8003D9B8: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8003D9D8;
    }
    // 0x8003D9B8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003D9BC: addiu       $a0, $a0, -0x44C0
    ctx->r4 = ADD32(ctx->r4, -0X44C0);
    // 0x8003D9C0: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x8003D9C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D9C8: jal         0x80007C3C
    // 0x8003D9CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_27;
    // 0x8003D9CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_27:
    // 0x8003D9D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003D9D4: sw          $v0, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = ctx->r2;
L_8003D9D8:
    // 0x8003D9D8: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003D9DC: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8003D9E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003D9E4: addiu       $s0, $sp, 0xC0
    ctx->r16 = ADD32(ctx->r29, 0XC0);
L_8003D9E8:
    // 0x8003D9E8: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x8003D9EC: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x8003D9F0: beq         $t6, $zero, L_8003DA08
    if (ctx->r14 == 0) {
        // 0x8003D9F4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8003DA08;
    }
    // 0x8003D9F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003D9F8: sw          $t7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r15;
    // 0x8003D9FC: sw          $s2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r18;
    // 0x8003DA00: jal         0x8005BE2C
    // 0x8003DA04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_28;
    // 0x8003DA04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_28:
L_8003DA08:
    // 0x8003DA08: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003DA0C: bne         $s3, $s5, L_8003D9E8
    if (ctx->r19 != ctx->r21) {
        // 0x8003DA10: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003D9E8;
    }
    // 0x8003DA10: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003DA14: b           L_8003DA98
    // 0x8003DA18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003DA18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003DA1C:
    // 0x8003DA1C: bne         $v1, $zero, L_8003DA98
    if (ctx->r3 != 0) {
        // 0x8003DA20: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8003DA98;
    }
    // 0x8003DA20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003DA24: jal         0x80027874
    // 0x8003DA28: addiu       $a0, $zero, 0x37F
    ctx->r4 = ADD32(0, 0X37F);
    func_80027874(rdram, ctx);
        goto after_29;
    // 0x8003DA28: addiu       $a0, $zero, 0x37F
    ctx->r4 = ADD32(0, 0X37F);
    after_29:
    // 0x8003DA2C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003DA30: addiu       $a0, $a0, -0x46C8
    ctx->r4 = ADD32(ctx->r4, -0X46C8);
    // 0x8003DA34: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x8003DA38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003DA3C: jal         0x80007C3C
    // 0x8003DA40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_30;
    // 0x8003DA40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x8003DA44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003DA48: sw          $v0, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = ctx->r2;
    // 0x8003DA4C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x8003DA50: jal         0x8002F40C
    // 0x8003DA54: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_8002F40C(rdram, ctx);
        goto after_31;
    // 0x8003DA54: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_31:
    // 0x8003DA58: b           L_8003DA98
    // 0x8003DA5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8003DA98;
    // 0x8003DA5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003DA60:
    // 0x8003DA60: bne         $v1, $zero, L_8003DA94
    if (ctx->r3 != 0) {
        // 0x8003DA64: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8003DA94;
    }
    // 0x8003DA64: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003DA68: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003DA6C: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
L_8003DA70:
    // 0x8003DA70: lw          $t8, 0x4($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X4);
    // 0x8003DA74: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8003DA78: beq         $t8, $zero, L_8003DA88
    if (ctx->r24 == 0) {
        // 0x8003DA7C: nop
    
            goto L_8003DA88;
    }
    // 0x8003DA7C: nop

    // 0x8003DA80: jal         0x80039A04
    // 0x8003DA84: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    func_80039A04(rdram, ctx);
        goto after_32;
    // 0x8003DA84: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    after_32:
L_8003DA88:
    // 0x8003DA88: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003DA8C: bne         $s3, $s5, L_8003DA70
    if (ctx->r19 != ctx->r21) {
        // 0x8003DA90: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8003DA70;
    }
    // 0x8003DA90: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8003DA94:
    // 0x8003DA94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003DA98:
    // 0x8003DA98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003DA9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003DAA0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DAA4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003DAA8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003DAAC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003DAB0: jr          $ra
    // 0x8003DAB4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8003DAB4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8003DAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DAB8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003DABC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8003DAC0: addiu       $a3, $a3, -0x4298
    ctx->r7 = ADD32(ctx->r7, -0X4298);
    // 0x8003DAC4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8003DAC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003DACC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003DAD0: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8003DAD4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8003DAD8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8003DADC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8003DAE0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8003DAE4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8003DAE8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003DAEC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8003DAF0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003DAF4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8003DAF8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003DAFC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003DB00: bne         $v0, $at, L_8003DB68
    if (ctx->r2 != ctx->r1) {
        // 0x8003DB04: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8003DB68;
    }
    // 0x8003DB04: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8003DB08: bne         $a0, $a1, L_8003DB34
    if (ctx->r4 != ctx->r5) {
        // 0x8003DB0C: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_8003DB34;
    }
    // 0x8003DB0C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003DB10: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003DB14: addu        $v0, $a3, $t6
    ctx->r2 = ADD32(ctx->r7, ctx->r14);
    // 0x8003DB18: lw          $t7, 0xA4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA4);
    // 0x8003DB1C: nop

    // 0x8003DB20: addiu       $t8, $t7, -0xF
    ctx->r24 = ADD32(ctx->r15, -0XF);
    // 0x8003DB24: bgez        $t8, L_8003DC2C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8003DB28: sw          $t8, 0xA4($v0)
        MEM_W(0XA4, ctx->r2) = ctx->r24;
            goto L_8003DC2C;
    }
    // 0x8003DB28: sw          $t8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r24;
    // 0x8003DB2C: b           L_8003DC2C
    // 0x8003DB30: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
        goto L_8003DC2C;
    // 0x8003DB30: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
L_8003DB34:
    // 0x8003DB34: addu        $v0, $a3, $t6
    ctx->r2 = ADD32(ctx->r7, ctx->r14);
    // 0x8003DB38: lw          $t7, 0xA4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA4);
    // 0x8003DB3C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8003DB40: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x8003DB44: sw          $t8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r24;
    // 0x8003DB48: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x8003DB4C: lw          $t6, 0xA4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XA4);
    // 0x8003DB50: nop

    // 0x8003DB54: addiu       $t7, $t6, -0x5
    ctx->r15 = ADD32(ctx->r14, -0X5);
    // 0x8003DB58: bgez        $t7, L_8003DC2C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8003DB5C: sw          $t7, 0xA4($v1)
        MEM_W(0XA4, ctx->r3) = ctx->r15;
            goto L_8003DC2C;
    }
    // 0x8003DB5C: sw          $t7, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r15;
    // 0x8003DB60: b           L_8003DC2C
    // 0x8003DB64: sw          $zero, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = 0;
        goto L_8003DC2C;
    // 0x8003DB64: sw          $zero, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = 0;
L_8003DB68:
    // 0x8003DB68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003DB6C: bne         $v0, $at, L_8003DC2C
    if (ctx->r2 != ctx->r1) {
        // 0x8003DB70: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_8003DC2C;
    }
    // 0x8003DB70: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8003DB74: beq         $at, $zero, L_8003DBB8
    if (ctx->r1 == 0) {
        // 0x8003DB78: sll         $t9, $a2, 2
        ctx->r25 = S32(ctx->r6 << 2);
            goto L_8003DBB8;
    }
    // 0x8003DB78: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8003DB7C: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x8003DB80: lw          $t6, 0xC8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC8);
    // 0x8003DB84: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003DB88: bne         $t6, $zero, L_8003DBBC
    if (ctx->r14 != 0) {
        // 0x8003DB8C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_8003DBBC;
    }
    // 0x8003DB8C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8003DB90: lw          $t7, 0x94($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X94);
    // 0x8003DB94: addiu       $t9, $t9, -0x4170
    ctx->r25 = ADD32(ctx->r25, -0X4170);
    // 0x8003DB98: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003DB9C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8003DBA0: lw          $t6, 0xE0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XE0);
    // 0x8003DBA4: nop

    // 0x8003DBA8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003DBAC: bgez        $t7, L_8003DBB8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8003DBB0: sw          $t7, 0xE0($v0)
        MEM_W(0XE0, ctx->r2) = ctx->r15;
            goto L_8003DBB8;
    }
    // 0x8003DBB0: sw          $t7, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r15;
    // 0x8003DBB4: sw          $zero, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = 0;
L_8003DBB8:
    // 0x8003DBB8: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_8003DBBC:
    // 0x8003DBBC: bne         $at, $zero, L_8003DC2C
    if (ctx->r1 != 0) {
        // 0x8003DBC0: sll         $v1, $a2, 2
        ctx->r3 = S32(ctx->r6 << 2);
            goto L_8003DC2C;
    }
    // 0x8003DBC0: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x8003DBC4: addu        $t9, $a3, $v1
    ctx->r25 = ADD32(ctx->r7, ctx->r3);
    // 0x8003DBC8: lw          $t6, 0x100($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X100);
    // 0x8003DBCC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003DBD0: bne         $t6, $zero, L_8003DC2C
    if (ctx->r14 != 0) {
        // 0x8003DBD4: addiu       $t7, $t7, -0x4170
        ctx->r15 = ADD32(ctx->r15, -0X4170);
            goto L_8003DC2C;
    }
    // 0x8003DBD4: addiu       $t7, $t7, -0x4170
    ctx->r15 = ADD32(ctx->r15, -0X4170);
    // 0x8003DBD8: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x8003DBDC: lw          $t8, 0xD0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XD0);
    // 0x8003DBE0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003DBE4: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x8003DBE8: bgez        $t9, L_8003DBF4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8003DBEC: sw          $t9, 0xD0($v0)
        MEM_W(0XD0, ctx->r2) = ctx->r25;
            goto L_8003DBF4;
    }
    // 0x8003DBEC: sw          $t9, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r25;
    // 0x8003DBF0: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
L_8003DBF4:
    // 0x8003DBF4: bne         $a2, $at, L_8003DC14
    if (ctx->r6 != ctx->r1) {
        // 0x8003DBF8: addiu       $a0, $zero, 0x380
        ctx->r4 = ADD32(0, 0X380);
            goto L_8003DC14;
    }
    // 0x8003DBF8: addiu       $a0, $zero, 0x380
    ctx->r4 = ADD32(0, 0X380);
    // 0x8003DBFC: addiu       $a0, $zero, 0x382
    ctx->r4 = ADD32(0, 0X382);
    // 0x8003DC00: jal         0x80027874
    // 0x8003DC04: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80027874(rdram, ctx);
        goto after_0;
    // 0x8003DC04: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003DC08: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8003DC0C: b           L_8003DC24
    // 0x8003DC10: nop

        goto L_8003DC24;
    // 0x8003DC10: nop

L_8003DC14:
    // 0x8003DC14: jal         0x80027874
    // 0x8003DC18: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80027874(rdram, ctx);
        goto after_1;
    // 0x8003DC18: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_1:
    // 0x8003DC1C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8003DC20: nop

L_8003DC24:
    // 0x8003DC24: jal         0x80039FB4
    // 0x8003DC28: addiu       $s5, $a2, -0x4
    ctx->r21 = ADD32(ctx->r6, -0X4);
    func_80039FB4(rdram, ctx);
        goto after_2;
    // 0x8003DC28: addiu       $s5, $a2, -0x4
    ctx->r21 = ADD32(ctx->r6, -0X4);
    after_2:
L_8003DC2C:
    // 0x8003DC2C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003DC30: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8003DC34: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8003DC38: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003DC3C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003DC40: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8003DC44: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8003DC48: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8003DC4C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8003DC50: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8003DC54: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8003DC58: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8003DC5C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8003DC60: jr          $ra
    // 0x8003DC64: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8003DC64: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8003DC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DC68: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003DC6C: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x8003DC70: nop

    // 0x8003DC74: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8003DC78: beq         $at, $zero, L_8003DCF4
    if (ctx->r1 == 0) {
        // 0x8003DC7C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8003DCF4;
    }
    // 0x8003DC7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003DC80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003DC84: addu        $at, $at, $t6
    gpr jr_addend_8003DC90 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8003DC88: lw          $t6, 0x5BC8($at)
    ctx->r14 = ADD32(ctx->r1, 0X5BC8);
    // 0x8003DC8C: nop

    // 0x8003DC90: jr          $t6
    // 0x8003DC94: nop

    switch (jr_addend_8003DC90 >> 2) {
        case 0: goto L_8003DCE0; break;
        case 1: goto L_8003DCE0; break;
        case 2: goto L_8003DCE0; break;
        case 3: goto L_8003DC98; break;
        case 4: goto L_8003DCB0; break;
        default: switch_error(__func__, 0x8003DC90, 0x80095BC8);
    }
    // 0x8003DC94: nop

L_8003DC98:
    // 0x8003DC98: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8003DC9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003DCA0: addiu       $t7, $t7, -0x4018
    ctx->r15 = ADD32(ctx->r15, -0X4018);
    // 0x8003DCA4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8003DCA8: jr          $ra
    // 0x8003DCAC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8003DCAC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_8003DCB0:
    // 0x8003DCB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003DCB4: bne         $a1, $v0, L_8003DCD0
    if (ctx->r5 != ctx->r2) {
        // 0x8003DCB8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_8003DCD0;
    }
    // 0x8003DCB8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8003DCBC: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x8003DCC0: addiu       $t8, $t8, -0x3ACC
    ctx->r24 = ADD32(ctx->r24, -0X3ACC);
    // 0x8003DCC4: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8003DCC8: jr          $ra
    // 0x8003DCCC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8003DCCC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_8003DCD0:
    // 0x8003DCD0: addiu       $t9, $t9, -0x3C48
    ctx->r25 = ADD32(ctx->r25, -0X3C48);
    // 0x8003DCD4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8003DCD8: jr          $ra
    // 0x8003DCDC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8003DCDC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_8003DCE0:
    // 0x8003DCE0: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8003DCE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003DCE8: addiu       $t0, $t0, -0x3C48
    ctx->r8 = ADD32(ctx->r8, -0X3C48);
    // 0x8003DCEC: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x8003DCF0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_8003DCF4:
    // 0x8003DCF4: jr          $ra
    // 0x8003DCF8: nop

    return;
    // 0x8003DCF8: nop

;}
RECOMP_FUNC void func_8003DCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DCFC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8003DD00: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003DD04: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8003DD08: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8003DD0C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8003DD10: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003DD14: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003DD18: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003DD1C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003DD20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003DD24: jal         0x8005C3A8
    // 0x8003DD28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x8003DD28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003DD2C: slti        $at, $s6, 0x4
    ctx->r1 = SIGNED(ctx->r22) < 0X4 ? 1 : 0;
    // 0x8003DD30: beq         $at, $zero, L_8003E104
    if (ctx->r1 == 0) {
        // 0x8003DD34: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8003E104;
    }
    // 0x8003DD34: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8003DD38: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003DD3C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003DD40: addiu       $v1, $v1, 0x2DC
    ctx->r3 = ADD32(ctx->r3, 0X2DC);
    // 0x8003DD44: addiu       $v0, $v0, 0x2C8
    ctx->r2 = ADD32(ctx->r2, 0X2C8);
    // 0x8003DD48: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
L_8003DD4C:
    // 0x8003DD4C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003DD50: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003DD54: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003DD58: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003DD5C: bne         $at, $zero, L_8003DD4C
    if (ctx->r1 != 0) {
        // 0x8003DD60: sw          $t6, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r14;
            goto L_8003DD4C;
    }
    // 0x8003DD60: sw          $t6, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r14;
    // 0x8003DD64: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8003DD68: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
L_8003DD6C:
    // 0x8003DD6C: jal         0x80028AB8
    // 0x8003DD70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8003DD70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x8003DD74: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8003DD78: addu        $v1, $s1, $t7
    ctx->r3 = ADD32(ctx->r17, ctx->r15);
    // 0x8003DD7C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003DD80: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003DD84: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003DD88: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x8003DD8C: sltu        $at, $s0, $t9
    ctx->r1 = ctx->r16 < ctx->r25 ? 1 : 0;
    // 0x8003DD90: sw          $t8, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r24;
    // 0x8003DD94: bne         $at, $zero, L_8003DD6C
    if (ctx->r1 != 0) {
        // 0x8003DD98: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_8003DD6C;
    }
    // 0x8003DD98: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8003DD9C: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8003DDA0: addiu       $s5, $s5, -0x4298
    ctx->r21 = ADD32(ctx->r21, -0X4298);
    // 0x8003DDA4: sll         $t0, $s6, 2
    ctx->r8 = S32(ctx->r22 << 2);
    // 0x8003DDA8: addu        $s7, $s5, $t0
    ctx->r23 = ADD32(ctx->r21, ctx->r8);
    // 0x8003DDAC: addiu       $s3, $sp, 0x68
    ctx->r19 = ADD32(ctx->r29, 0X68);
    // 0x8003DDB0: lw          $a0, 0xFC($s7)
    ctx->r4 = MEM_W(ctx->r23, 0XFC);
    // 0x8003DDB4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8003DDB8: jal         0x8004A0A0
    // 0x8003DDBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003DDBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x8003DDC0: bne         $v0, $zero, L_8003E104
    if (ctx->r2 != 0) {
        // 0x8003DDC4: lui         $s1, 0x8009
        ctx->r17 = S32(0X8009 << 16);
            goto L_8003E104;
    }
    // 0x8003DDC4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003DDC8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003DDCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003DDD0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8003DDD4: addiu       $s1, $s1, 0xBC
    ctx->r17 = ADD32(ctx->r17, 0XBC);
    // 0x8003DDD8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8003DDDC: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8003DDE0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8003DDE4: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8003DDE8: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    // 0x8003DDEC: addiu       $s2, $s2, -0x42C0
    ctx->r18 = ADD32(ctx->r18, -0X42C0);
    // 0x8003DDF0: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8003DDF4: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x8003DDF8: swc1        $f16, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f16.u32l;
L_8003DDFC:
    // 0x8003DDFC: jal         0x8005AF70
    // 0x8003DE00: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_8005AF70(rdram, ctx);
        goto after_3;
    // 0x8003DE00: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x8003DE04: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8003DE08: nop

    // 0x8003DE0C: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x8003DE10: beq         $at, $zero, L_8003E0F4
    if (ctx->r1 == 0) {
        // 0x8003DE14: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_8003E0F4;
    }
    // 0x8003DE14: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003DE18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003DE1C: addu        $at, $at, $t1
    gpr jr_addend_8003DE28 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8003DE20: lw          $t1, 0x5BDC($at)
    ctx->r9 = ADD32(ctx->r1, 0X5BDC);
    // 0x8003DE24: nop

    // 0x8003DE28: jr          $t1
    // 0x8003DE2C: nop

    switch (jr_addend_8003DE28 >> 2) {
        case 0: goto L_8003DEA8; break;
        case 1: goto L_8003DE30; break;
        case 2: goto L_8003DF20; break;
        case 3: goto L_8003E0F4; break;
        case 4: goto L_8003E044; break;
        case 5: goto L_8003DFA4; break;
        default: switch_error(__func__, 0x8003DE28, 0x80095BDC);
    }
    // 0x8003DE2C: nop

L_8003DE30:
    // 0x8003DE30: lw          $a0, 0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4);
    // 0x8003DE34: ori         $t4, $zero, 0x9001
    ctx->r12 = 0 | 0X9001;
    // 0x8003DE38: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8003DE3C: blez        $a0, L_8003E0F4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8003DE40: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8003E0F4;
    }
    // 0x8003DE40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003DE44: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8003DE48: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003DE4C: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    // 0x8003DE50: beq         $t3, $zero, L_8003DE60
    if (ctx->r11 == 0) {
        // 0x8003DE54: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_8003DE60;
    }
    // 0x8003DE54: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8003DE58: b           L_8003DE64
    // 0x8003DE5C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003DE64;
    // 0x8003DE5C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003DE60:
    // 0x8003DE60: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003DE64:
    // 0x8003DE64: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003DE68: beq         $at, $zero, L_8003DE84
    if (ctx->r1 == 0) {
        // 0x8003DE6C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8003DE84;
    }
    // 0x8003DE6C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003DE70: sw          $t4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r12;
    // 0x8003DE74: jal         0x8004A0A0
    // 0x8003DE78: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x8003DE78: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    after_4:
    // 0x8003DE7C: bne         $v0, $zero, L_8003E0F4
    if (ctx->r2 != 0) {
        // 0x8003DE80: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8003E0F4;
    }
    // 0x8003DE80: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_8003DE84:
    // 0x8003DE84: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x8003DE88: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x8003DE8C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003DE90: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003DE94: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x8003DE98: jal         0x8005BE2C
    // 0x8003DE9C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8005BE2C(rdram, ctx);
        goto after_5;
    // 0x8003DE9C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_5:
    // 0x8003DEA0: b           L_8003E108
    // 0x8003DEA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003E108;
    // 0x8003DEA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003DEA8:
    // 0x8003DEA8: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8003DEAC: ori         $t0, $zero, 0x9000
    ctx->r8 = 0 | 0X9000;
    // 0x8003DEB0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8003DEB4: blez        $a0, L_8003E0F4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8003DEB8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8003E0F4;
    }
    // 0x8003DEB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003DEBC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8003DEC0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003DEC4: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8003DEC8: beq         $t9, $zero, L_8003DED8
    if (ctx->r25 == 0) {
        // 0x8003DECC: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_8003DED8;
    }
    // 0x8003DECC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8003DED0: b           L_8003DEDC
    // 0x8003DED4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003DEDC;
    // 0x8003DED4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003DED8:
    // 0x8003DED8: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003DEDC:
    // 0x8003DEDC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003DEE0: beq         $at, $zero, L_8003DEFC
    if (ctx->r1 == 0) {
        // 0x8003DEE4: nop
    
            goto L_8003DEFC;
    }
    // 0x8003DEE4: nop

    // 0x8003DEE8: sw          $t0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r8;
    // 0x8003DEEC: jal         0x8004A0A0
    // 0x8003DEF0: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8003DEF0: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    after_6:
    // 0x8003DEF4: bne         $v0, $zero, L_8003E0F8
    if (ctx->r2 != 0) {
        // 0x8003DEF8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8003E0F8;
    }
    // 0x8003DEF8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8003DEFC:
    // 0x8003DEFC: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x8003DF00: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8003DF04: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003DF08: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8003DF0C: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x8003DF10: jal         0x8005BE2C
    // 0x8003DF14: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8005BE2C(rdram, ctx);
        goto after_7;
    // 0x8003DF14: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_7:
    // 0x8003DF18: b           L_8003E108
    // 0x8003DF1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003E108;
    // 0x8003DF1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003DF20:
    // 0x8003DF20: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x8003DF24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003DF28: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8003DF2C: beq         $a0, $zero, L_8003E0F4
    if (ctx->r4 == 0) {
        // 0x8003DF30: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_8003E0F4;
    }
    // 0x8003DF30: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8003DF34: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8003DF38: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003DF3C: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x8003DF40: beq         $t4, $zero, L_8003DF50
    if (ctx->r12 == 0) {
        // 0x8003DF44: ori         $t6, $zero, 0x9003
        ctx->r14 = 0 | 0X9003;
            goto L_8003DF50;
    }
    // 0x8003DF44: ori         $t6, $zero, 0x9003
    ctx->r14 = 0 | 0X9003;
    // 0x8003DF48: b           L_8003DF50
    // 0x8003DF4C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003DF50;
    // 0x8003DF4C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003DF50:
    // 0x8003DF50: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003DF54: beq         $at, $zero, L_8003DF80
    if (ctx->r1 == 0) {
        // 0x8003DF58: ori         $t5, $zero, 0x9002
        ctx->r13 = 0 | 0X9002;
            goto L_8003DF80;
    }
    // 0x8003DF58: ori         $t5, $zero, 0x9002
    ctx->r13 = 0 | 0X9002;
    // 0x8003DF5C: blez        $a0, L_8003DF6C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8003DF60: nop
    
            goto L_8003DF6C;
    }
    // 0x8003DF60: nop

    // 0x8003DF64: b           L_8003DF70
    // 0x8003DF68: sw          $t5, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r13;
        goto L_8003DF70;
    // 0x8003DF68: sw          $t5, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r13;
L_8003DF6C:
    // 0x8003DF6C: sw          $t6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r14;
L_8003DF70:
    // 0x8003DF70: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x8003DF74: jal         0x8004A0A0
    // 0x8003DF78: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x8003DF78: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_8:
    // 0x8003DF7C: bne         $v0, $zero, L_8003E0F4
    if (ctx->r2 != 0) {
        // 0x8003DF80: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_8003E0F4;
    }
L_8003DF80:
    // 0x8003DF80: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8003DF84: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003DF88: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x8003DF8C: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x8003DF90: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003DF94: jal         0x8005BE2C
    // 0x8003DF98: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8005BE2C(rdram, ctx);
        goto after_9;
    // 0x8003DF98: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_9:
    // 0x8003DF9C: b           L_8003E108
    // 0x8003DFA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003E108;
    // 0x8003DFA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003DFA4:
    // 0x8003DFA4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8003DFA8: nop

    // 0x8003DFAC: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x8003DFB0: bne         $t9, $zero, L_8003DFDC
    if (ctx->r25 != 0) {
        // 0x8003DFB4: nop
    
            goto L_8003DFDC;
    }
    // 0x8003DFB4: nop

    // 0x8003DFB8: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    // 0x8003DFBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003DFC0: bne         $t0, $at, L_8003DFDC
    if (ctx->r8 != ctx->r1) {
        // 0x8003DFC4: sll         $t1, $s6, 4
        ctx->r9 = S32(ctx->r22 << 4);
            goto L_8003DFDC;
    }
    // 0x8003DFC4: sll         $t1, $s6, 4
    ctx->r9 = S32(ctx->r22 << 4);
    // 0x8003DFC8: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x8003DFCC: lw          $t3, 0x60($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X60);
    // 0x8003DFD0: nop

    // 0x8003DFD4: bgtz        $t3, L_8003E0F4
    if (SIGNED(ctx->r11) > 0) {
        // 0x8003DFD8: nop
    
            goto L_8003E0F4;
    }
    // 0x8003DFD8: nop

L_8003DFDC:
    // 0x8003DFDC: lw          $t4, 0x10($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X10);
    // 0x8003DFE0: andi        $t6, $v1, 0x400
    ctx->r14 = ctx->r3 & 0X400;
    // 0x8003DFE4: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8003DFE8: beq         $t5, $zero, L_8003E0F4
    if (ctx->r13 == 0) {
        // 0x8003DFEC: ori         $t7, $zero, 0x9005
        ctx->r15 = 0 | 0X9005;
            goto L_8003E0F4;
    }
    // 0x8003DFEC: ori         $t7, $zero, 0x9005
    ctx->r15 = 0 | 0X9005;
    // 0x8003DFF0: beq         $t6, $zero, L_8003E000
    if (ctx->r14 == 0) {
        // 0x8003DFF4: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003E000;
    }
    // 0x8003DFF4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003DFF8: b           L_8003E004
    // 0x8003DFFC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003E004;
    // 0x8003DFFC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003E000:
    // 0x8003E000: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003E004:
    // 0x8003E004: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003E008: beq         $at, $zero, L_8003E024
    if (ctx->r1 == 0) {
        // 0x8003E00C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8003E024;
    }
    // 0x8003E00C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003E010: sw          $t7, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r15;
    // 0x8003E014: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x8003E018: jal         0x8004A0A0
    // 0x8003E01C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_10;
    // 0x8003E01C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_10:
    // 0x8003E020: bne         $v0, $zero, L_8003E0F4
    if (ctx->r2 != 0) {
        // 0x8003E024: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_8003E0F4;
    }
L_8003E024:
    // 0x8003E024: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8003E028: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8003E02C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x8003E030: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003E034: jal         0x8005BE2C
    // 0x8003E038: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8005BE2C(rdram, ctx);
        goto after_11;
    // 0x8003E038: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_11:
    // 0x8003E03C: b           L_8003E108
    // 0x8003E040: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003E108;
    // 0x8003E040: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003E044:
    // 0x8003E044: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8003E048: nop

    // 0x8003E04C: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x8003E050: bne         $t9, $zero, L_8003E07C
    if (ctx->r25 != 0) {
        // 0x8003E054: nop
    
            goto L_8003E07C;
    }
    // 0x8003E054: nop

    // 0x8003E058: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    // 0x8003E05C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003E060: bne         $t0, $at, L_8003E07C
    if (ctx->r8 != ctx->r1) {
        // 0x8003E064: sll         $t1, $s6, 4
        ctx->r9 = S32(ctx->r22 << 4);
            goto L_8003E07C;
    }
    // 0x8003E064: sll         $t1, $s6, 4
    ctx->r9 = S32(ctx->r22 << 4);
    // 0x8003E068: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x8003E06C: lw          $t3, 0x5C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X5C);
    // 0x8003E070: nop

    // 0x8003E074: bgtz        $t3, L_8003E0F4
    if (SIGNED(ctx->r11) > 0) {
        // 0x8003E078: nop
    
            goto L_8003E0F4;
    }
    // 0x8003E078: nop

L_8003E07C:
    // 0x8003E07C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x8003E080: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003E084: beq         $t4, $at, L_8003E0F4
    if (ctx->r12 == ctx->r1) {
        // 0x8003E088: nop
    
            goto L_8003E0F4;
    }
    // 0x8003E088: nop

    // 0x8003E08C: lw          $t5, 0x10($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X10);
    // 0x8003E090: andi        $t7, $v1, 0x400
    ctx->r15 = ctx->r3 & 0X400;
    // 0x8003E094: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x8003E098: beq         $t6, $zero, L_8003E0F4
    if (ctx->r14 == 0) {
        // 0x8003E09C: ori         $t8, $zero, 0x9004
        ctx->r24 = 0 | 0X9004;
            goto L_8003E0F4;
    }
    // 0x8003E09C: ori         $t8, $zero, 0x9004
    ctx->r24 = 0 | 0X9004;
    // 0x8003E0A0: beq         $t7, $zero, L_8003E0B0
    if (ctx->r15 == 0) {
        // 0x8003E0A4: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003E0B0;
    }
    // 0x8003E0A4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003E0A8: b           L_8003E0B4
    // 0x8003E0AC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003E0B4;
    // 0x8003E0AC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003E0B0:
    // 0x8003E0B0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8003E0B4:
    // 0x8003E0B4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003E0B8: beq         $at, $zero, L_8003E0D4
    if (ctx->r1 == 0) {
        // 0x8003E0BC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8003E0D4;
    }
    // 0x8003E0BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003E0C0: sw          $t8, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r24;
    // 0x8003E0C4: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x8003E0C8: jal         0x8004A0A0
    // 0x8003E0CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_12;
    // 0x8003E0CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_12:
    // 0x8003E0D0: bne         $v0, $zero, L_8003E0F4
    if (ctx->r2 != 0) {
        // 0x8003E0D4: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_8003E0F4;
    }
L_8003E0D4:
    // 0x8003E0D4: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8003E0D8: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    // 0x8003E0DC: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x8003E0E0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003E0E4: jal         0x8005BE2C
    // 0x8003E0E8: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8005BE2C(rdram, ctx);
        goto after_13;
    // 0x8003E0E8: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_13:
    // 0x8003E0EC: b           L_8003E108
    // 0x8003E0F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003E108;
    // 0x8003E0F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003E0F4:
    // 0x8003E0F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8003E0F8:
    // 0x8003E0F8: addiu       $t0, $sp, 0x68
    ctx->r8 = ADD32(ctx->r29, 0X68);
    // 0x8003E0FC: bne         $s0, $t0, L_8003DDFC
    if (ctx->r16 != ctx->r8) {
        // 0x8003E100: nop
    
            goto L_8003DDFC;
    }
    // 0x8003E100: nop

L_8003E104:
    // 0x8003E104: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003E108:
    // 0x8003E108: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003E10C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003E110: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E114: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003E118: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003E11C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003E120: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E124: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8003E128: jr          $ra
    // 0x8003E12C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8003E12C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8003E130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E130: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003E134: lw          $a0, 0x150($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X150);
    // 0x8003E138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E13C: beq         $a0, $zero, L_8003E14C
    if (ctx->r4 == 0) {
        // 0x8003E140: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8003E14C;
    }
    // 0x8003E140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E144: jal         0x8002A310
    // 0x8003E148: nop

    func_8002A310(rdram, ctx);
        goto after_0;
    // 0x8003E148: nop

    after_0:
L_8003E14C:
    // 0x8003E14C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E154: jr          $ra
    // 0x8003E158: nop

    return;
    // 0x8003E158: nop

;}
RECOMP_FUNC void func_8003E16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E16C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E174: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8003E178: jal         0x8002D000
    // 0x8003E17C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8003E17C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003E180: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003E184: lw          $t6, -0x4178($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4178);
    // 0x8003E188: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8003E18C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8003E190: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E194: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003E198: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8003E19C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E1A0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003E1A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003E1A8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E1AC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8003E1B0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8003E1B4: addiu       $t1, $t1, 0x550
    ctx->r9 = ADD32(ctx->r9, 0X550);
    // 0x8003E1B8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8003E1BC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003E1C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003E1C4: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x8003E1C8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003E1CC: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8003E1D0: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8003E1D4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8003E1D8: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8003E1DC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8003E1E0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8003E1E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003E1E8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8003E1EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003E1F0: jal         0x8004A0A0
    // 0x8003E1F4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8003E1F4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x8003E1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E1FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003E200: jr          $ra
    // 0x8003E204: nop

    return;
    // 0x8003E204: nop

;}
RECOMP_FUNC void func_8003E208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E208: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E20C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E210: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8003E214: jal         0x8002D000
    // 0x8003E218: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8003E218: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003E21C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8003E220: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8003E224: bne         $a1, $zero, L_8003E284
    if (ctx->r5 != 0) {
        // 0x8003E228: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8003E284;
    }
    // 0x8003E228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003E22C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003E230: lw          $t6, -0x4178($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4178);
    // 0x8003E234: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x8003E238: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8003E23C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003E240: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003E244: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003E24C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8003E250: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E254: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E258: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003E25C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8003E260: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8003E264: addiu       $t0, $t0, 0x550
    ctx->r8 = ADD32(ctx->r8, 0X550);
    // 0x8003E268: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E26C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8003E270: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8003E274: nop

    // 0x8003E278: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8003E27C: b           L_8003E2D8
    // 0x8003E280: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_8003E2D8;
    // 0x8003E280: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_8003E284:
    // 0x8003E284: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8003E288: lw          $t1, -0x4178($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4178);
    // 0x8003E28C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8003E290: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x8003E294: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003E298: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003E29C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8003E2A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003E2A4: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8003E2A8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8003E2AC: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003E2B0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003E2B4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8003E2B8: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8003E2BC: addiu       $t5, $t5, 0x550
    ctx->r13 = ADD32(ctx->r13, 0X550);
    // 0x8003E2C0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8003E2C4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x8003E2C8: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8003E2CC: nop

    // 0x8003E2D0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8003E2D4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_8003E2D8:
    // 0x8003E2D8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8003E2DC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8003E2E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003E2E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8003E2E8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8003E2EC: jal         0x8004A0A0
    // 0x8003E2F0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8003E2F0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8003E2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E2F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003E2FC: jr          $ra
    // 0x8003E300: nop

    return;
    // 0x8003E300: nop

;}
RECOMP_FUNC void func_8003E310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E318: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003E31C: addiu       $a0, $a0, -0x3D44
    ctx->r4 = ADD32(ctx->r4, -0X3D44);
    // 0x8003E320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E324: jal         0x8000167C
    // 0x8003E328: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8000167C(rdram, ctx);
        goto after_0;
    // 0x8003E328: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_0:
    // 0x8003E32C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003E330: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003E334: addiu       $a1, $a1, 0x6D0
    ctx->r5 = ADD32(ctx->r5, 0X6D0);
    // 0x8003E338: addiu       $a0, $a0, -0x3D40
    ctx->r4 = ADD32(ctx->r4, -0X3D40);
    // 0x8003E33C: jal         0x80076BF8
    // 0x8003E340: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8003E340: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8003E344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E34C: jr          $ra
    // 0x8003E350: nop

    return;
    // 0x8003E350: nop

;}
RECOMP_FUNC void func_8003E354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E35C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003E360: addiu       $a0, $a0, -0x3D50
    ctx->r4 = ADD32(ctx->r4, -0X3D50);
    // 0x8003E364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E368: jal         0x8000167C
    // 0x8003E36C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8000167C(rdram, ctx);
        goto after_0;
    // 0x8003E36C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x8003E370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E378: jr          $ra
    // 0x8003E37C: nop

    return;
    // 0x8003E37C: nop

;}
RECOMP_FUNC void func_8003E380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E388: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003E38C: addiu       $a0, $a0, -0x3D60
    ctx->r4 = ADD32(ctx->r4, -0X3D60);
    // 0x8003E390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E394: jal         0x8000167C
    // 0x8003E398: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8000167C(rdram, ctx);
        goto after_0;
    // 0x8003E398: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x8003E39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E3A0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003E3A4: addiu       $a0, $a0, -0x3D60
    ctx->r4 = ADD32(ctx->r4, -0X3D60);
    // 0x8003E3A8: addiu       $t7, $zero, 0x69
    ctx->r15 = ADD32(0, 0X69);
    // 0x8003E3AC: sb          $t7, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r15;
    // 0x8003E3B0: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x8003E3B4: jr          $ra
    // 0x8003E3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003E3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003E3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E3BC: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8003E3C0: beq         $t6, $zero, L_8003E3F0
    if (ctx->r14 == 0) {
        // 0x8003E3C4: andi        $t7, $a0, 0x2
        ctx->r15 = ctx->r4 & 0X2;
            goto L_8003E3F0;
    }
    // 0x8003E3C4: andi        $t7, $a0, 0x2
    ctx->r15 = ctx->r4 & 0X2;
    // 0x8003E3C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003E3CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E3D0: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x8003E3D4: addiu       $v1, $v1, -0x3D50
    ctx->r3 = ADD32(ctx->r3, -0X3D50);
L_8003E3D8:
    // 0x8003E3D8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8003E3DC: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x8003E3E0: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x8003E3E4: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x8003E3E8: bne         $v1, $v0, L_8003E3D8
    if (ctx->r3 != ctx->r2) {
        // 0x8003E3EC: sw          $zero, 0xC($v1)
        MEM_W(0XC, ctx->r3) = 0;
            goto L_8003E3D8;
    }
    // 0x8003E3EC: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_8003E3F0:
    // 0x8003E3F0: beq         $t7, $zero, L_8003E414
    if (ctx->r15 == 0) {
        // 0x8003E3F4: andi        $t8, $a0, 0x4
        ctx->r24 = ctx->r4 & 0X4;
            goto L_8003E414;
    }
    // 0x8003E3F4: andi        $t8, $a0, 0x4
    ctx->r24 = ctx->r4 & 0X4;
    // 0x8003E3F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003E3FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E400: addiu       $v0, $v0, -0x3D48
    ctx->r2 = ADD32(ctx->r2, -0X3D48);
    // 0x8003E404: addiu       $v1, $v1, -0x3D50
    ctx->r3 = ADD32(ctx->r3, -0X3D50);
L_8003E408:
    // 0x8003E408: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003E40C: bne         $v1, $v0, L_8003E408
    if (ctx->r3 != ctx->r2) {
        // 0x8003E410: sw          $zero, 0x38($v1)
        MEM_W(0X38, ctx->r3) = 0;
            goto L_8003E408;
    }
    // 0x8003E410: sw          $zero, 0x38($v1)
    MEM_W(0X38, ctx->r3) = 0;
L_8003E414:
    // 0x8003E414: beq         $t8, $zero, L_8003E438
    if (ctx->r24 == 0) {
        // 0x8003E418: andi        $t9, $a0, 0x8
        ctx->r25 = ctx->r4 & 0X8;
            goto L_8003E438;
    }
    // 0x8003E418: andi        $t9, $a0, 0x8
    ctx->r25 = ctx->r4 & 0X8;
    // 0x8003E41C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003E420: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E424: addiu       $v0, $v0, -0x3D48
    ctx->r2 = ADD32(ctx->r2, -0X3D48);
    // 0x8003E428: addiu       $v1, $v1, -0x3D50
    ctx->r3 = ADD32(ctx->r3, -0X3D50);
L_8003E42C:
    // 0x8003E42C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003E430: bne         $v1, $v0, L_8003E42C
    if (ctx->r3 != ctx->r2) {
        // 0x8003E434: sw          $zero, 0x40($v1)
        MEM_W(0X40, ctx->r3) = 0;
            goto L_8003E42C;
    }
    // 0x8003E434: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
L_8003E438:
    // 0x8003E438: beq         $t9, $zero, L_8003E458
    if (ctx->r25 == 0) {
        // 0x8003E43C: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_8003E458;
    }
    // 0x8003E43C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003E440: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E444: addiu       $v0, $v0, -0x3D48
    ctx->r2 = ADD32(ctx->r2, -0X3D48);
    // 0x8003E448: addiu       $v1, $v1, -0x3D50
    ctx->r3 = ADD32(ctx->r3, -0X3D50);
L_8003E44C:
    // 0x8003E44C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003E450: bne         $v1, $v0, L_8003E44C
    if (ctx->r3 != ctx->r2) {
        // 0x8003E454: sw          $zero, 0x48($v1)
        MEM_W(0X48, ctx->r3) = 0;
            goto L_8003E44C;
    }
    // 0x8003E454: sw          $zero, 0x48($v1)
    MEM_W(0X48, ctx->r3) = 0;
L_8003E458:
    // 0x8003E458: jr          $ra
    // 0x8003E45C: nop

    return;
    // 0x8003E45C: nop

;}
RECOMP_FUNC void func_8003E460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E468: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003E46C: addiu       $a1, $a1, 0x6DC
    ctx->r5 = ADD32(ctx->r5, 0X6DC);
    // 0x8003E470: jal         0x80073EF0
    // 0x8003E474: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8003E474: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x8003E478: jal         0x8003E3BC
    // 0x8003E47C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8003E3BC(rdram, ctx);
        goto after_1;
    // 0x8003E47C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x8003E480: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8003E484: addiu       $a0, $a3, -0x3D60
    ctx->r4 = ADD32(ctx->r7, -0X3D60);
    // 0x8003E488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E48C: jal         0x8000167C
    // 0x8003E490: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8000167C(rdram, ctx);
        goto after_2;
    // 0x8003E490: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x8003E494: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8003E498: addiu       $a3, $a3, -0x3D60
    ctx->r7 = ADD32(ctx->r7, -0X3D60);
    // 0x8003E49C: addiu       $t7, $zero, 0x69
    ctx->r15 = ADD32(0, 0X69);
    // 0x8003E4A0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003E4A4: sb          $t7, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r15;
    // 0x8003E4A8: sb          $t7, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r15;
    // 0x8003E4AC: addiu       $a0, $a0, -0x3D50
    ctx->r4 = ADD32(ctx->r4, -0X3D50);
    // 0x8003E4B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E4B4: jal         0x8000167C
    // 0x8003E4B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8000167C(rdram, ctx);
        goto after_3;
    // 0x8003E4B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x8003E4BC: jal         0x8003E310
    // 0x8003E4C0: nop

    func_8003E310(rdram, ctx);
        goto after_4;
    // 0x8003E4C0: nop

    after_4:
    // 0x8003E4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E4CC: jr          $ra
    // 0x8003E4D0: nop

    return;
    // 0x8003E4D0: nop

;}
RECOMP_FUNC void func_8003E4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E4D4: sra         $t6, $a0, 5
    ctx->r14 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8003E4D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E4DC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003E4E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003E4E4: lw          $t8, -0x3D34($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3D34);
    // 0x8003E4E8: andi        $t9, $a0, 0x1F
    ctx->r25 = ctx->r4 & 0X1F;
    // 0x8003E4EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003E4F0: sllv        $t1, $t0, $t9
    ctx->r9 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x8003E4F4: jr          $ra
    // 0x8003E4F8: and         $v0, $t8, $t1
    ctx->r2 = ctx->r24 & ctx->r9;
    return;
    // 0x8003E4F8: and         $v0, $t8, $t1
    ctx->r2 = ctx->r24 & ctx->r9;
;}
RECOMP_FUNC void func_8003E4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E4FC: sra         $t6, $a0, 5
    ctx->r14 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8003E500: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003E504: addiu       $t8, $t8, -0x3D50
    ctx->r24 = ADD32(ctx->r24, -0X3D50);
    // 0x8003E508: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E50C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E510: andi        $t0, $a0, 0x1F
    ctx->r8 = ctx->r4 & 0X1F;
    // 0x8003E514: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003E518: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8003E51C: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x8003E520: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x8003E524: and         $t4, $t9, $t3
    ctx->r12 = ctx->r25 & ctx->r11;
    // 0x8003E528: jr          $ra
    // 0x8003E52C: sw          $t4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r12;
    return;
    // 0x8003E52C: sw          $t4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r12;
;}
RECOMP_FUNC void func_8003E530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E530: sra         $t6, $a0, 5
    ctx->r14 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8003E534: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003E538: addiu       $t8, $t8, -0x3D50
    ctx->r24 = ADD32(ctx->r24, -0X3D50);
    // 0x8003E53C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E540: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E544: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8003E548: andi        $t0, $a0, 0x1F
    ctx->r8 = ctx->r4 & 0X1F;
    // 0x8003E54C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003E550: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x8003E554: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x8003E558: jr          $ra
    // 0x8003E55C: sw          $t3, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r11;
    return;
    // 0x8003E55C: sw          $t3, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_8003E560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E560: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E564: jr          $ra
    // 0x8003E568: addiu       $v0, $v0, -0x3D60
    ctx->r2 = ADD32(ctx->r2, -0X3D60);
    return;
    // 0x8003E568: addiu       $v0, $v0, -0x3D60
    ctx->r2 = ADD32(ctx->r2, -0X3D60);
;}
RECOMP_FUNC void func_8003E56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E56C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E570: jr          $ra
    // 0x8003E574: addiu       $v0, $v0, -0x3D50
    ctx->r2 = ADD32(ctx->r2, -0X3D50);
    return;
    // 0x8003E574: addiu       $v0, $v0, -0x3D50
    ctx->r2 = ADD32(ctx->r2, -0X3D50);
;}
RECOMP_FUNC void func_8003E578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E578: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003E57C: jr          $ra
    // 0x8003E580: addiu       $v0, $v0, -0x3D44
    ctx->r2 = ADD32(ctx->r2, -0X3D44);
    return;
    // 0x8003E580: addiu       $v0, $v0, -0x3D44
    ctx->r2 = ADD32(ctx->r2, -0X3D44);
;}
RECOMP_FUNC void func_8003E590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E598: jal         0x80006DFC
    // 0x8003E59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80006DFC(rdram, ctx);
        goto after_0;
    // 0x8003E59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8003E5A0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8003E5A4: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x8003E5A8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003E5AC: jal         0x80006948
    // 0x8003E5B0: andi        $a2, $s0, 0xFFFF
    ctx->r6 = ctx->r16 & 0XFFFF;
    func_80006948(rdram, ctx);
        goto after_1;
    // 0x8003E5B0: andi        $a2, $s0, 0xFFFF
    ctx->r6 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x8003E5B4: bne         $v0, $zero, L_8003E5F0
    if (ctx->r2 != 0) {
        // 0x8003E5B8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8003E5F0;
    }
    // 0x8003E5B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003E5BC: blez        $s0, L_8003E5F0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8003E5C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003E5F0;
    }
    // 0x8003E5C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003E5C4: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x8003E5C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8003E5CC:
    // 0x8003E5CC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8003E5D0: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E5D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003E5D8: beq         $t6, $t7, L_8003E5E8
    if (ctx->r14 == ctx->r15) {
        // 0x8003E5DC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8003E5E8;
    }
    // 0x8003E5DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003E5E0: b           L_8003E5F0
    // 0x8003E5E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_8003E5F0;
    // 0x8003E5E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003E5E8:
    // 0x8003E5E8: bne         $v0, $s0, L_8003E5CC
    if (ctx->r2 != ctx->r16) {
        // 0x8003E5EC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8003E5CC;
    }
    // 0x8003E5EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8003E5F0:
    // 0x8003E5F0: jal         0x80006DC0
    // 0x8003E5F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80006DC0(rdram, ctx);
        goto after_2;
    // 0x8003E5F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8003E5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E600: jr          $ra
    // 0x8003E604: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    return;
    // 0x8003E604: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
;}
RECOMP_FUNC void func_8003E608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E608: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8003E60C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003E610: blez        $a2, L_8003E67C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8003E614: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8003E67C;
    }
    // 0x8003E614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E618: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x8003E61C: beq         $a3, $zero, L_8003E648
    if (ctx->r7 == 0) {
        // 0x8003E620: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8003E648;
    }
    // 0x8003E620: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_8003E624:
    // 0x8003E624: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8003E628: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003E62C: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8003E630: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8003E634: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8003E638: bne         $a0, $a1, L_8003E624
    if (ctx->r4 != ctx->r5) {
        // 0x8003E63C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8003E624;
    }
    // 0x8003E63C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003E640: beq         $a1, $a2, L_8003E680
    if (ctx->r5 == ctx->r6) {
        // 0x8003E644: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_8003E680;
    }
    // 0x8003E644: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
L_8003E648:
    // 0x8003E648: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8003E64C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x8003E650: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8003E654: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8003E658: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8003E65C: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x8003E660: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E664: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x8003E668: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8003E66C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003E670: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8003E674: bne         $a1, $a2, L_8003E648
    if (ctx->r5 != ctx->r6) {
        // 0x8003E678: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8003E648;
    }
    // 0x8003E678: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8003E67C:
    // 0x8003E67C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
L_8003E680:
    // 0x8003E680: subu        $v0, $t8, $v1
    ctx->r2 = SUB32(ctx->r24, ctx->r3);
    // 0x8003E684: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8003E688: jr          $ra
    // 0x8003E68C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x8003E68C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void func_8003E690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E690: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003E694: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003E698: lw          $v1, 0x714($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X714);
    // 0x8003E69C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003E6A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003E6A4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003E6A8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003E6AC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003E6B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003E6B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003E6B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003E6BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003E6C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003E6C4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8003E6C8: beq         $v1, $zero, L_8003E6D8
    if (ctx->r3 == 0) {
        // 0x8003E6CC: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_8003E6D8;
    }
    // 0x8003E6CC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8003E6D0: b           L_8003E8B4
    // 0x8003E6D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8003E8B4;
    // 0x8003E6D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003E6D8:
    // 0x8003E6D8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8003E6DC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003E6E0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8003E6E4: beq         $t7, $zero, L_8003E7D4
    if (ctx->r15 == 0) {
        // 0x8003E6E8: addiu       $t8, $t8, -0x3CAB
        ctx->r24 = ADD32(ctx->r24, -0X3CAB);
            goto L_8003E7D4;
    }
    // 0x8003E6E8: addiu       $t8, $t8, -0x3CAB
    ctx->r24 = ADD32(ctx->r24, -0X3CAB);
    // 0x8003E6EC: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8003E6F0: addiu       $fp, $fp, -0x3CE0
    ctx->r30 = ADD32(ctx->r30, -0X3CE0);
    // 0x8003E6F4: subu        $a2, $t8, $fp
    ctx->r6 = SUB32(ctx->r24, ctx->r30);
    // 0x8003E6F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003E6FC: jal         0x8003E608
    // 0x8003E700: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8003E608(rdram, ctx);
        goto after_0;
    // 0x8003E700: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_0:
    // 0x8003E704: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x8003E708: sb          $v0, 0x35($fp)
    MEM_B(0X35, ctx->r30) = ctx->r2;
    // 0x8003E70C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003E710: addiu       $s5, $s5, 0x718
    ctx->r21 = ADD32(ctx->r21, 0X718);
    // 0x8003E714: addiu       $s6, $zero, 0x36
    ctx->r22 = ADD32(0, 0X36);
L_8003E718:
    // 0x8003E718: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_8003E71C:
    // 0x8003E71C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8003E720: bne         $s4, $zero, L_8003E740
    if (ctx->r20 != 0) {
        // 0x8003E724: nop
    
            goto L_8003E740;
    }
    // 0x8003E724: nop

    // 0x8003E728: bne         $s2, $zero, L_8003E738
    if (ctx->r18 != 0) {
        // 0x8003E72C: nop
    
            goto L_8003E738;
    }
    // 0x8003E72C: nop

    // 0x8003E730: b           L_8003E718
    // 0x8003E734: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8003E718;
    // 0x8003E734: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003E738:
    // 0x8003E738: b           L_8003E8B4
    // 0x8003E73C: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
        goto L_8003E8B4;
    // 0x8003E73C: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
L_8003E740:
    // 0x8003E740: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8003E744: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8003E748: multu       $t9, $s6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E74C: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x8003E750: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E754: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x8003E758: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E75C: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x8003E760: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8003E764: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8003E768: andi        $a2, $s6, 0xFFFF
    ctx->r6 = ctx->r22 & 0XFFFF;
    // 0x8003E76C: mflo        $t6
    ctx->r14 = lo;
    // 0x8003E770: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8003E774: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8003E778: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x8003E77C: jal         0x80006998
    // 0x8003E780: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80006998(rdram, ctx);
        goto after_1;
    // 0x8003E780: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x8003E784: bne         $v0, $zero, L_8003E71C
    if (ctx->r2 != 0) {
        // 0x8003E788: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_8003E71C;
    }
    // 0x8003E788: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8003E78C: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8003E790: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8003E794: multu       $t9, $s6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E798: addiu       $s0, $zero, 0x36
    ctx->r16 = ADD32(0, 0X36);
    // 0x8003E79C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8003E7A0: mflo        $s1
    ctx->r17 = lo;
    // 0x8003E7A4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8003E7A8: jal         0x8003E590
    // 0x8003E7AC: nop

    func_8003E590(rdram, ctx);
        goto after_2;
    // 0x8003E7AC: nop

    after_2:
    // 0x8003E7B0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8003E7B4: beq         $v0, $zero, L_8003E7C4
    if (ctx->r2 == 0) {
        // 0x8003E7B8: nop
    
            goto L_8003E7C4;
    }
    // 0x8003E7B8: nop

    // 0x8003E7BC: b           L_8003E71C
    // 0x8003E7C0: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
        goto L_8003E71C;
    // 0x8003E7C0: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_8003E7C4:
    // 0x8003E7C4: bne         $s2, $zero, L_8003E7D8
    if (ctx->r18 != 0) {
        // 0x8003E7C8: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_8003E7D8;
    }
    // 0x8003E7C8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8003E7CC: b           L_8003E718
    // 0x8003E7D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8003E718;
    // 0x8003E7D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003E7D4:
    // 0x8003E7D4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_8003E7D8:
    // 0x8003E7D8: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8003E7DC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8003E7E0: beq         $t7, $zero, L_8003E8B0
    if (ctx->r15 == 0) {
        // 0x8003E7E4: addiu       $s5, $s5, -0x3CF0
        ctx->r21 = ADD32(ctx->r21, -0X3CF0);
            goto L_8003E8B0;
    }
    // 0x8003E7E4: addiu       $s5, $s5, -0x3CF0
    ctx->r21 = ADD32(ctx->r21, -0X3CF0);
    // 0x8003E7E8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003E7EC: lw          $a1, 0x7DC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7DC);
    // 0x8003E7F0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8003E7F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8003E7F8: jal         0x80076BF8
    // 0x8003E7FC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8003E7FC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_3:
    // 0x8003E800: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003E804: addiu       $t9, $t9, -0x3CE5
    ctx->r25 = ADD32(ctx->r25, -0X3CE5);
    // 0x8003E808: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003E80C: subu        $a2, $t9, $s5
    ctx->r6 = SUB32(ctx->r25, ctx->r21);
    // 0x8003E810: sb          $t8, 0x4($s5)
    MEM_B(0X4, ctx->r21) = ctx->r24;
    // 0x8003E814: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003E818: jal         0x8003E608
    // 0x8003E81C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8003E608(rdram, ctx);
        goto after_4;
    // 0x8003E81C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x8003E820: sb          $v0, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r2;
L_8003E824:
    // 0x8003E824: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_8003E828:
    // 0x8003E828: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8003E82C: bne         $s4, $zero, L_8003E84C
    if (ctx->r20 != 0) {
        // 0x8003E830: sll         $s1, $s2, 2
        ctx->r17 = S32(ctx->r18 << 2);
            goto L_8003E84C;
    }
    // 0x8003E830: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x8003E834: bne         $s2, $zero, L_8003E844
    if (ctx->r18 != 0) {
        // 0x8003E838: nop
    
            goto L_8003E844;
    }
    // 0x8003E838: nop

    // 0x8003E83C: b           L_8003E824
    // 0x8003E840: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8003E824;
    // 0x8003E840: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003E844:
    // 0x8003E844: b           L_8003E8B4
    // 0x8003E848: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
        goto L_8003E8B4;
    // 0x8003E848: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
L_8003E84C:
    // 0x8003E84C: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x8003E850: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8003E854: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x8003E858: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x8003E85C: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x8003E860: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x8003E864: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x8003E868: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8003E86C: jal         0x80006998
    // 0x8003E870: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80006998(rdram, ctx);
        goto after_5;
    // 0x8003E870: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_5:
    // 0x8003E874: bne         $v0, $zero, L_8003E828
    if (ctx->r2 != 0) {
        // 0x8003E878: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_8003E828;
    }
    // 0x8003E878: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8003E87C: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x8003E880: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
    // 0x8003E884: jal         0x8003E590
    // 0x8003E888: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    func_8003E590(rdram, ctx);
        goto after_6;
    // 0x8003E888: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    after_6:
    // 0x8003E88C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8003E890: beq         $v0, $zero, L_8003E8A0
    if (ctx->r2 == 0) {
        // 0x8003E894: nop
    
            goto L_8003E8A0;
    }
    // 0x8003E894: nop

    // 0x8003E898: b           L_8003E828
    // 0x8003E89C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
        goto L_8003E828;
    // 0x8003E89C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_8003E8A0:
    // 0x8003E8A0: bne         $s2, $zero, L_8003E8B4
    if (ctx->r18 != 0) {
        // 0x8003E8A4: or          $v0, $s7, $zero
        ctx->r2 = ctx->r23 | 0;
            goto L_8003E8B4;
    }
    // 0x8003E8A4: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x8003E8A8: b           L_8003E824
    // 0x8003E8AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8003E824;
    // 0x8003E8AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003E8B0:
    // 0x8003E8B0: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
L_8003E8B4:
    // 0x8003E8B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003E8B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E8BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E8C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003E8C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003E8C8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003E8CC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E8D0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003E8D4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003E8D8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003E8DC: jr          $ra
    // 0x8003E8E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8003E8E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8003E8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E8E4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8003E8E8: subu        $v0, $t6, $a1
    ctx->r2 = SUB32(ctx->r14, ctx->r5);
    // 0x8003E8EC: sra         $v1, $v0, 3
    ctx->r3 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8003E8F0: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x8003E8F4: subu        $t0, $v0, $t7
    ctx->r8 = SUB32(ctx->r2, ctx->r15);
    // 0x8003E8F8: andi        $t8, $t0, 0x7
    ctx->r24 = ctx->r8 & 0X7;
    // 0x8003E8FC: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8003E900: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003E904: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8003E908: beq         $at, $zero, L_8003E9B4
    if (ctx->r1 == 0) {
        // 0x8003E90C: or          $t1, $t8, $zero
        ctx->r9 = ctx->r24 | 0;
            goto L_8003E9B4;
    }
    // 0x8003E90C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8003E910: addu        $t0, $a1, $t8
    ctx->r8 = ADD32(ctx->r5, ctx->r24);
    // 0x8003E914: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8003E918: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8003E91C: addiu       $a3, $a3, -0x3CA4
    ctx->r7 = ADD32(ctx->r7, -0X3CA4);
    // 0x8003E920: addiu       $t2, $t2, -0x3CA8
    ctx->r10 = ADD32(ctx->r10, -0X3CA8);
    // 0x8003E924: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_8003E928:
    // 0x8003E928: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8003E92C: andi        $a0, $t1, 0x7
    ctx->r4 = ctx->r9 & 0X7;
    // 0x8003E930: bne         $a1, $v0, L_8003E95C
    if (ctx->r5 != ctx->r2) {
        // 0x8003E934: subu        $t9, $a1, $a0
        ctx->r25 = SUB32(ctx->r5, ctx->r4);
            goto L_8003E95C;
    }
    // 0x8003E934: subu        $t9, $a1, $a0
    ctx->r25 = SUB32(ctx->r5, ctx->r4);
    // 0x8003E938: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x8003E93C: andi        $a0, $t1, 0x7
    ctx->r4 = ctx->r9 & 0X7;
    // 0x8003E940: subu        $t7, $a1, $a0
    ctx->r15 = SUB32(ctx->r5, ctx->r4);
    // 0x8003E944: srav        $t8, $t6, $t7
    ctx->r24 = S32(SIGNED(ctx->r14) >> (ctx->r15 & 31));
    // 0x8003E948: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x8003E94C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8003E950: sllv        $t6, $t9, $v0
    ctx->r14 = S32(ctx->r25 << (ctx->r2 & 31));
    // 0x8003E954: b           L_8003E97C
    // 0x8003E958: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
        goto L_8003E97C;
    // 0x8003E958: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
L_8003E95C:
    // 0x8003E95C: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8003E960: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8003E964: srav        $t6, $t8, $t9
    ctx->r14 = S32(SIGNED(ctx->r24) >> (ctx->r25 & 31));
    // 0x8003E968: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8003E96C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8003E970: sllv        $t8, $t7, $v0
    ctx->r24 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x8003E974: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8003E978: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8003E97C:
    // 0x8003E97C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8003E980: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8003E984: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8003E988: bgez        $t9, L_8003E9A0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8003E98C: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_8003E9A0;
    }
    // 0x8003E98C: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8003E990: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x8003E994: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x8003E998: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8003E99C: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_8003E9A0:
    // 0x8003E9A0: bne         $a1, $a0, L_8003E9AC
    if (ctx->r5 != ctx->r4) {
        // 0x8003E9A4: slt         $at, $t1, $t0
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_8003E9AC;
    }
    // 0x8003E9A4: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003E9A8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8003E9AC:
    // 0x8003E9AC: bne         $at, $zero, L_8003E928
    if (ctx->r1 != 0) {
        // 0x8003E9B0: nop
    
            goto L_8003E928;
    }
    // 0x8003E9B0: nop

L_8003E9B4:
    // 0x8003E9B4: jr          $ra
    // 0x8003E9B8: nop

    return;
    // 0x8003E9B8: nop

    // 0x8003E9BC: jr          $ra
    // 0x8003E9C0: nop

    return;
    // 0x8003E9C0: nop

;}
RECOMP_FUNC void func_8003E9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E9C8: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8003E9CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E9D0: beq         $t6, $zero, L_8003EA34
    if (ctx->r14 == 0) {
        // 0x8003E9D4: or          $t5, $a0, $zero
        ctx->r13 = ctx->r4 | 0;
            goto L_8003EA34;
    }
    // 0x8003E9D4: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x8003E9D8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003E9DC: addiu       $t7, $t7, -0x3CEA
    ctx->r15 = ADD32(ctx->r15, -0X3CEA);
    // 0x8003E9E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003E9E4: sw          $t7, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r15;
    // 0x8003E9E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003E9EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003E9F0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8003E9F4: addiu       $t3, $v0, 0x71C
    ctx->r11 = ADD32(ctx->r2, 0X71C);
    // 0x8003E9F8: sw          $t8, -0x3CA4($at)
    MEM_W(-0X3CA4, ctx->r1) = ctx->r24;
    // 0x8003E9FC: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8003EA00: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003EA04: beq         $t9, $zero, L_8003EA34
    if (ctx->r25 == 0) {
        // 0x8003EA08: addiu       $t6, $t6, 0x71C
        ctx->r14 = ADD32(ctx->r14, 0X71C);
            goto L_8003EA34;
    }
    // 0x8003EA08: addiu       $t6, $t6, 0x71C
    ctx->r14 = ADD32(ctx->r14, 0X71C);
    // 0x8003EA0C: lw          $t4, 0x0($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X0);
    // 0x8003EA10: nop

L_8003EA14:
    // 0x8003EA14: lhu         $a0, 0x4($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X4);
    // 0x8003EA18: lhu         $a1, 0x6($t3)
    ctx->r5 = MEM_HU(ctx->r11, 0X6);
    // 0x8003EA1C: jal         0x8003E8E4
    // 0x8003EA20: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8003E8E4(rdram, ctx);
        goto after_0;
    // 0x8003EA20: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_0:
    // 0x8003EA24: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8003EA28: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x8003EA2C: bne         $t4, $zero, L_8003EA14
    if (ctx->r12 != 0) {
        // 0x8003EA30: nop
    
            goto L_8003EA14;
    }
    // 0x8003EA30: nop

L_8003EA34:
    // 0x8003EA34: andi        $t7, $t5, 0x2
    ctx->r15 = ctx->r13 & 0X2;
    // 0x8003EA38: beq         $t7, $zero, L_8003EAD0
    if (ctx->r15 == 0) {
        // 0x8003EA3C: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8003EAD0;
    }
    // 0x8003EA3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003EA40: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003EA44: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x8003EA48: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8003EA4C: addiu       $v0, $v0, -0x3D50
    ctx->r2 = ADD32(ctx->r2, -0X3D50);
    // 0x8003EA50: lbu         $t9, 0x20($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X20);
    // 0x8003EA54: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003EA58: lbu         $t6, 0x21($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X21);
    // 0x8003EA5C: lbu         $t7, 0x22($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X22);
    // 0x8003EA60: lbu         $t8, 0x23($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X23);
    // 0x8003EA64: sb          $t9, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r25;
    // 0x8003EA68: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003EA6C: addiu       $t9, $t9, -0x3CE0
    ctx->r25 = ADD32(ctx->r25, -0X3CE0);
    // 0x8003EA70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003EA74: sb          $t6, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r14;
    // 0x8003EA78: sb          $t7, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r15;
    // 0x8003EA7C: sb          $t8, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r24;
    // 0x8003EA80: sw          $t9, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r25;
    // 0x8003EA84: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003EA88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003EA8C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8003EA90: addiu       $t3, $a0, 0x774
    ctx->r11 = ADD32(ctx->r4, 0X774);
    // 0x8003EA94: sw          $t6, -0x3CA4($at)
    MEM_W(-0X3CA4, ctx->r1) = ctx->r14;
    // 0x8003EA98: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x8003EA9C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003EAA0: beq         $t7, $zero, L_8003EAD0
    if (ctx->r15 == 0) {
        // 0x8003EAA4: addiu       $t8, $t8, 0x774
        ctx->r24 = ADD32(ctx->r24, 0X774);
            goto L_8003EAD0;
    }
    // 0x8003EAA4: addiu       $t8, $t8, 0x774
    ctx->r24 = ADD32(ctx->r24, 0X774);
    // 0x8003EAA8: lw          $t4, 0x0($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X0);
    // 0x8003EAAC: nop

L_8003EAB0:
    // 0x8003EAB0: lhu         $a0, 0x4($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X4);
    // 0x8003EAB4: lhu         $a1, 0x6($t3)
    ctx->r5 = MEM_HU(ctx->r11, 0X6);
    // 0x8003EAB8: jal         0x8003E8E4
    // 0x8003EABC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8003E8E4(rdram, ctx);
        goto after_1;
    // 0x8003EABC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_1:
    // 0x8003EAC0: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8003EAC4: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x8003EAC8: bne         $t4, $zero, L_8003EAB0
    if (ctx->r12 != 0) {
        // 0x8003EACC: nop
    
            goto L_8003EAB0;
    }
    // 0x8003EACC: nop

L_8003EAD0:
    // 0x8003EAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EAD8: jr          $ra
    // 0x8003EADC: nop

    return;
    // 0x8003EADC: nop

;}
RECOMP_FUNC void func_8003EAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EAE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EAE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EAE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003EAEC: jal         0x8003E460
    // 0x8003EAF0: sb          $zero, -0x3CEB($at)
    MEM_B(-0X3CEB, ctx->r1) = 0;
    func_8003E460(rdram, ctx);
        goto after_0;
    // 0x8003EAF0: sb          $zero, -0x3CEB($at)
    MEM_B(-0X3CEB, ctx->r1) = 0;
    after_0:
    // 0x8003EAF4: jal         0x8003E9C4
    // 0x8003EAF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E9C4(rdram, ctx);
        goto after_1;
    // 0x8003EAF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003EAFC: jal         0x8003E690
    // 0x8003EB00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E690(rdram, ctx);
        goto after_2;
    // 0x8003EB00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8003EB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EB0C: jr          $ra
    // 0x8003EB10: nop

    return;
    // 0x8003EB10: nop

;}
RECOMP_FUNC void func_8003EB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EB1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003EB20: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003EB24: lw          $a1, 0x714($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X714);
    // 0x8003EB28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003EB2C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8003EB30: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003EB34: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8003EB38: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8003EB3C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003EB40: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003EB44: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003EB48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003EB4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003EB50: beq         $a1, $zero, L_8003EB60
    if (ctx->r5 == 0) {
        // 0x8003EB54: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003EB60;
    }
    // 0x8003EB54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003EB58: b           L_8003ECD4
    // 0x8003EB5C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_8003ECD4;
    // 0x8003EB5C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8003EB60:
    // 0x8003EB60: andi        $t6, $s4, 0x1
    ctx->r14 = ctx->r20 & 0X1;
    // 0x8003EB64: beq         $t6, $zero, L_8003EC10
    if (ctx->r14 == 0) {
        // 0x8003EB68: addiu       $s2, $zero, 0x3
        ctx->r18 = ADD32(0, 0X3);
            goto L_8003EC10;
    }
    // 0x8003EB68: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8003EB6C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003EB70: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003EB74: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EB78: addiu       $s1, $s1, -0x3CF0
    ctx->r17 = ADD32(ctx->r17, -0X3CF0);
    // 0x8003EB7C: addiu       $s3, $s3, -0x3CE5
    ctx->r19 = ADD32(ctx->r19, -0X3CE5);
    // 0x8003EB80: addiu       $s7, $zero, 0xAE
    ctx->r23 = ADD32(0, 0XAE);
    // 0x8003EB84: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
L_8003EB88:
    // 0x8003EB88: bne         $s0, $s6, L_8003EBBC
    if (ctx->r16 != ctx->r22) {
        // 0x8003EB8C: nop
    
            goto L_8003EBBC;
    }
    // 0x8003EB8C: nop

    // 0x8003EB90: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8003EB94: bne         $s2, $zero, L_8003EBBC
    if (ctx->r18 != 0) {
        // 0x8003EB98: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003EBBC;
    }
    // 0x8003EB98: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EB9C: jal         0x8003E460
    // 0x8003EBA0: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    func_8003E460(rdram, ctx);
        goto after_0;
    // 0x8003EBA0: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    after_0:
    // 0x8003EBA4: jal         0x8003E9C4
    // 0x8003EBA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E9C4(rdram, ctx);
        goto after_1;
    // 0x8003EBA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003EBAC: jal         0x8003E690
    // 0x8003EBB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E690(rdram, ctx);
        goto after_2;
    // 0x8003EBB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8003EBB4: b           L_8003ECD8
    // 0x8003EBB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8003ECD8;
    // 0x8003EBB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003EBBC:
    // 0x8003EBBC: multu       $s0, $s7
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003EBC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003EBC4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8003EBC8: mflo        $a0
    ctx->r4 = lo;
    // 0x8003EBCC: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x8003EBD0: jal         0x80006948
    // 0x8003EBD4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80006948(rdram, ctx);
        goto after_3;
    // 0x8003EBD4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x8003EBD8: beq         $v0, $zero, L_8003EBE8
    if (ctx->r2 == 0) {
        // 0x8003EBDC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8003EBE8;
    }
    // 0x8003EBDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003EBE0: b           L_8003EB88
    // 0x8003EBE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003EB88;
    // 0x8003EBE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003EBE8:
    // 0x8003EBE8: subu        $a2, $s3, $s1
    ctx->r6 = SUB32(ctx->r19, ctx->r17);
    // 0x8003EBEC: jal         0x8003E608
    // 0x8003EBF0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    func_8003E608(rdram, ctx);
        goto after_4;
    // 0x8003EBF0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_4:
    // 0x8003EBF4: lbu         $t8, 0xB($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XB);
    // 0x8003EBF8: nop

    // 0x8003EBFC: beq         $v0, $t8, L_8003EC10
    if (ctx->r2 == ctx->r24) {
        // 0x8003EC00: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003EC10;
    }
    // 0x8003EC00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003EC04: b           L_8003EB88
    // 0x8003EC08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003EB88;
    // 0x8003EC08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EC0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003EC10:
    // 0x8003EC10: andi        $t9, $s4, 0x2
    ctx->r25 = ctx->r20 & 0X2;
    // 0x8003EC14: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8003EC18: beq         $t9, $zero, L_8003ECD0
    if (ctx->r25 == 0) {
        // 0x8003EC1C: addiu       $s7, $zero, 0xAE
        ctx->r23 = ADD32(0, 0XAE);
            goto L_8003ECD0;
    }
    // 0x8003EC1C: addiu       $s7, $zero, 0xAE
    ctx->r23 = ADD32(0, 0XAE);
    // 0x8003EC20: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8003EC24: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8003EC28: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003EC2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EC30: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8003EC34: addiu       $s1, $s1, -0x3CE0
    ctx->r17 = ADD32(ctx->r17, -0X3CE0);
    // 0x8003EC38: addiu       $s3, $s3, 0x718
    ctx->r19 = ADD32(ctx->r19, 0X718);
    // 0x8003EC3C: addiu       $s5, $s5, -0x3CAB
    ctx->r21 = ADD32(ctx->r21, -0X3CAB);
    // 0x8003EC40: addiu       $s4, $zero, 0x36
    ctx->r20 = ADD32(0, 0X36);
L_8003EC44:
    // 0x8003EC44: bne         $s0, $s6, L_8003EC60
    if (ctx->r16 != ctx->r22) {
        // 0x8003EC48: nop
    
            goto L_8003EC60;
    }
    // 0x8003EC48: nop

    // 0x8003EC4C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8003EC50: bne         $s2, $zero, L_8003EC60
    if (ctx->r18 != 0) {
        // 0x8003EC54: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003EC60;
    }
    // 0x8003EC54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EC58: b           L_8003ECD4
    // 0x8003EC5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8003ECD4;
    // 0x8003EC5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003EC60:
    // 0x8003EC60: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8003EC64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003EC68: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003EC6C: andi        $a2, $s4, 0xFFFF
    ctx->r6 = ctx->r20 & 0XFFFF;
    // 0x8003EC70: mflo        $t7
    ctx->r15 = lo;
    // 0x8003EC74: nop

    // 0x8003EC78: nop

    // 0x8003EC7C: multu       $s0, $s7
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003EC80: mflo        $t8
    ctx->r24 = lo;
    // 0x8003EC84: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8003EC88: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8003EC8C: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8003EC90: jal         0x80006948
    // 0x8003EC94: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80006948(rdram, ctx);
        goto after_5;
    // 0x8003EC94: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_5:
    // 0x8003EC98: beq         $v0, $zero, L_8003ECA8
    if (ctx->r2 == 0) {
        // 0x8003EC9C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8003ECA8;
    }
    // 0x8003EC9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8003ECA0: b           L_8003EC44
    // 0x8003ECA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003EC44;
    // 0x8003ECA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003ECA8:
    // 0x8003ECA8: subu        $a2, $s5, $s1
    ctx->r6 = SUB32(ctx->r21, ctx->r17);
    // 0x8003ECAC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003ECB0: jal         0x8003E608
    // 0x8003ECB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003E608(rdram, ctx);
        goto after_6;
    // 0x8003ECB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x8003ECB8: lbu         $t6, 0x35($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X35);
    // 0x8003ECBC: or          $v1, $s6, $zero
    ctx->r3 = ctx->r22 | 0;
    // 0x8003ECC0: beq         $v0, $t6, L_8003ECD4
    if (ctx->r2 == ctx->r14) {
        // 0x8003ECC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003ECD4;
    }
    // 0x8003ECC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003ECC8: b           L_8003EC44
    // 0x8003ECCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003EC44;
    // 0x8003ECCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003ECD0:
    // 0x8003ECD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003ECD4:
    // 0x8003ECD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003ECD8:
    // 0x8003ECD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003ECDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003ECE0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003ECE4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003ECE8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003ECEC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003ECF0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8003ECF4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8003ECF8: jr          $ra
    // 0x8003ECFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003ECFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ED00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ED04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ED08: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003ED0C: addiu       $a1, $a1, 0x7E0
    ctx->r5 = ADD32(ctx->r5, 0X7E0);
    // 0x8003ED10: jal         0x80073EF0
    // 0x8003ED14: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8003ED14: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x8003ED18: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003ED1C: jal         0x80006CEC
    // 0x8003ED20: addiu       $a0, $a0, 0x710
    ctx->r4 = ADD32(ctx->r4, 0X710);
    func_80006CEC(rdram, ctx);
        goto after_1;
    // 0x8003ED20: addiu       $a0, $a0, 0x710
    ctx->r4 = ADD32(ctx->r4, 0X710);
    after_1:
    // 0x8003ED24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003ED28: sw          $v0, 0x714($at)
    MEM_W(0X714, ctx->r1) = ctx->r2;
    // 0x8003ED2C: jal         0x8003EB1C
    // 0x8003ED30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003EB1C(rdram, ctx);
        goto after_2;
    // 0x8003ED30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8003ED34: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8003ED38: addiu       $a2, $a2, 0x714
    ctx->r6 = ADD32(ctx->r6, 0X714);
    // 0x8003ED3C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8003ED40: beq         $v0, $zero, L_8003ED7C
    if (ctx->r2 == 0) {
        // 0x8003ED44: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003ED7C;
    }
    // 0x8003ED44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003ED48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003ED4C: jal         0x8003E460
    // 0x8003ED50: sb          $zero, -0x3CEB($at)
    MEM_B(-0X3CEB, ctx->r1) = 0;
    func_8003E460(rdram, ctx);
        goto after_3;
    // 0x8003ED50: sb          $zero, -0x3CEB($at)
    MEM_B(-0X3CEB, ctx->r1) = 0;
    after_3:
    // 0x8003ED54: jal         0x8003E9C4
    // 0x8003ED58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E9C4(rdram, ctx);
        goto after_4;
    // 0x8003ED58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8003ED5C: jal         0x8003E690
    // 0x8003ED60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E690(rdram, ctx);
        goto after_5;
    // 0x8003ED60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8003ED64: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003ED68: sw          $v0, 0x714($at)
    MEM_W(0X714, ctx->r1) = ctx->r2;
    // 0x8003ED6C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003ED70: lw          $a1, 0x714($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X714);
    // 0x8003ED74: b           L_8003EE04
    // 0x8003ED78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003EE04;
    // 0x8003ED78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ED7C:
    // 0x8003ED7C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003ED80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003ED84: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003ED88: lw          $v1, 0x7DC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7DC);
    // 0x8003ED8C: addiu       $a0, $a0, -0x3CEC
    ctx->r4 = ADD32(ctx->r4, -0X3CEC);
    // 0x8003ED90: addiu       $v0, $v0, -0x3CF0
    ctx->r2 = ADD32(ctx->r2, -0X3CF0);
L_8003ED94:
    // 0x8003ED94: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8003ED98: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x8003ED9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003EDA0: beq         $t6, $t7, L_8003EDB0
    if (ctx->r14 == ctx->r15) {
        // 0x8003EDA4: nop
    
            goto L_8003EDB0;
    }
    // 0x8003EDA4: nop

    // 0x8003EDA8: b           L_8003EDBC
    // 0x8003EDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003EDBC;
    // 0x8003EDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003EDB0:
    // 0x8003EDB0: bne         $v0, $a0, L_8003ED94
    if (ctx->r2 != ctx->r4) {
        // 0x8003EDB4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8003ED94;
    }
    // 0x8003EDB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003EDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003EDBC:
    // 0x8003EDBC: bne         $v0, $zero, L_8003EDD0
    if (ctx->r2 != 0) {
        // 0x8003EDC0: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003EDD0;
    }
    // 0x8003EDC0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003EDC4: lbu         $t8, -0x3CEC($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3CEC);
    // 0x8003EDC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EDCC: beq         $t8, $at, L_8003EE00
    if (ctx->r24 == ctx->r1) {
        // 0x8003EDD0: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_8003EE00;
    }
L_8003EDD0:
    // 0x8003EDD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003EDD4: jal         0x8003E460
    // 0x8003EDD8: sb          $zero, -0x3CEB($at)
    MEM_B(-0X3CEB, ctx->r1) = 0;
    func_8003E460(rdram, ctx);
        goto after_6;
    // 0x8003EDD8: sb          $zero, -0x3CEB($at)
    MEM_B(-0X3CEB, ctx->r1) = 0;
    after_6:
    // 0x8003EDDC: jal         0x8003E9C4
    // 0x8003EDE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E9C4(rdram, ctx);
        goto after_7;
    // 0x8003EDE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x8003EDE4: jal         0x8003E690
    // 0x8003EDE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E690(rdram, ctx);
        goto after_8;
    // 0x8003EDE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x8003EDEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003EDF0: sw          $v0, 0x714($at)
    MEM_W(0X714, ctx->r1) = ctx->r2;
    // 0x8003EDF4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003EDF8: lw          $a1, 0x714($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X714);
    // 0x8003EDFC: nop

L_8003EE00:
    // 0x8003EE00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EE04:
    // 0x8003EE04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EE08: jr          $ra
    // 0x8003EE0C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8003EE0C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_8003EE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EE10: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003EE14: lw          $t6, 0x714($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X714);
    // 0x8003EE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EE1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003EE20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EE24: beq         $t6, $zero, L_8003EE34
    if (ctx->r14 == 0) {
        // 0x8003EE28: sw          $a0, 0x718($at)
        MEM_W(0X718, ctx->r1) = ctx->r4;
            goto L_8003EE34;
    }
    // 0x8003EE28: sw          $a0, 0x718($at)
    MEM_W(0X718, ctx->r1) = ctx->r4;
    // 0x8003EE2C: b           L_8003EE58
    // 0x8003EE30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003EE58;
    // 0x8003EE30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003EE34:
    // 0x8003EE34: jal         0x8003EB1C
    // 0x8003EE38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003EB1C(rdram, ctx);
        goto after_0;
    // 0x8003EE38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003EE3C: beq         $v0, $zero, L_8003EE4C
    if (ctx->r2 == 0) {
        // 0x8003EE40: nop
    
            goto L_8003EE4C;
    }
    // 0x8003EE40: nop

    // 0x8003EE44: b           L_8003EE58
    // 0x8003EE48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003EE58;
    // 0x8003EE48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003EE4C:
    // 0x8003EE4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003EE50: lbu         $v0, -0x3CEB($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3CEB);
    // 0x8003EE54: nop

L_8003EE58:
    // 0x8003EE58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EE60: jr          $ra
    // 0x8003EE64: nop

    return;
    // 0x8003EE64: nop

;}
RECOMP_FUNC void func_8003EE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EE68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003EE6C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003EE70: addiu       $v0, $v0, -0x3CF0
    ctx->r2 = ADD32(ctx->r2, -0X3CF0);
    // 0x8003EE74: sw          $a0, 0x718($at)
    MEM_W(0X718, ctx->r1) = ctx->r4;
    // 0x8003EE78: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x8003EE7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003EE80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EE84: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x8003EE88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EE8C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8003EE90: jal         0x8003E354
    // 0x8003EE94: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    func_8003E354(rdram, ctx);
        goto after_0;
    // 0x8003EE94: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    after_0:
    // 0x8003EE98: jal         0x8003E310
    // 0x8003EE9C: nop

    func_8003E310(rdram, ctx);
        goto after_1;
    // 0x8003EE9C: nop

    after_1:
    // 0x8003EEA0: jal         0x8003E3BC
    // 0x8003EEA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E3BC(rdram, ctx);
        goto after_2;
    // 0x8003EEA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8003EEA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003EEAC: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8003EEB0: sb          $zero, 0x20($v0)
    MEM_B(0X20, ctx->r2) = 0;
    // 0x8003EEB4: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x8003EEB8: sb          $zero, 0x21($v0)
    MEM_B(0X21, ctx->r2) = 0;
    // 0x8003EEBC: sb          $zero, 0x22($v0)
    MEM_B(0X22, ctx->r2) = 0;
    // 0x8003EEC0: sb          $zero, 0x23($v0)
    MEM_B(0X23, ctx->r2) = 0;
    // 0x8003EEC4: jal         0x8003E9C4
    // 0x8003EEC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003E9C4(rdram, ctx);
        goto after_3;
    // 0x8003EEC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x8003EECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EED4: jr          $ra
    // 0x8003EED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003EED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8003EEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EEDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003EEE0: addiu       $v0, $v0, -0x3CF0
    ctx->r2 = ADD32(ctx->r2, -0X3CF0);
    // 0x8003EEE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003EEE8: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x8003EEEC: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x8003EEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EEF4: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x8003EEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EEFC: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x8003EF00: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x8003EF04: jal         0x8003E690
    // 0x8003EF08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E690(rdram, ctx);
        goto after_0;
    // 0x8003EF08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003EF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EF10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EF14: jr          $ra
    // 0x8003EF18: nop

    return;
    // 0x8003EF18: nop

;}
RECOMP_FUNC void func_8003EF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EF1C: blez        $a0, L_8003EF6C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8003EF20: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003EF6C;
    }
    // 0x8003EF20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003EF24: andi        $t0, $a0, 0x3
    ctx->r8 = ctx->r4 & 0X3;
    // 0x8003EF28: beq         $t0, $zero, L_8003EF48
    if (ctx->r8 == 0) {
        // 0x8003EF2C: or          $a3, $t0, $zero
        ctx->r7 = ctx->r8 | 0;
            goto L_8003EF48;
    }
    // 0x8003EF2C: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8003EF30: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_8003EF34:
    // 0x8003EF34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003EF38: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8003EF3C: bne         $a3, $v0, L_8003EF34
    if (ctx->r7 != ctx->r2) {
        // 0x8003EF40: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8003EF34;
    }
    // 0x8003EF40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003EF44: beq         $v0, $a0, L_8003EF68
    if (ctx->r2 == ctx->r4) {
        // 0x8003EF48: addu        $v1, $a1, $v0
        ctx->r3 = ADD32(ctx->r5, ctx->r2);
            goto L_8003EF68;
    }
L_8003EF48:
    // 0x8003EF48: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
L_8003EF4C:
    // 0x8003EF4C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003EF50: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x8003EF54: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x8003EF58: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8003EF5C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003EF60: bne         $v0, $a0, L_8003EF4C
    if (ctx->r2 != ctx->r4) {
        // 0x8003EF64: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_8003EF4C;
    }
    // 0x8003EF64: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_8003EF68:
    // 0x8003EF68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003EF6C:
    // 0x8003EF6C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8003EF70: subu        $a3, $t6, $a2
    ctx->r7 = SUB32(ctx->r14, ctx->r6);
    // 0x8003EF74: sra         $t0, $a3, 3
    ctx->r8 = S32(SIGNED(ctx->r7) >> 3);
    // 0x8003EF78: blez        $t0, L_8003EF98
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8003EF7C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_8003EF98;
    }
    // 0x8003EF7C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8003EF80: sra         $a0, $v1, 3
    ctx->r4 = S32(SIGNED(ctx->r3) >> 3);
L_8003EF84:
    // 0x8003EF84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003EF88: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003EF8C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x8003EF90: bne         $at, $zero, L_8003EF84
    if (ctx->r1 != 0) {
        // 0x8003EF94: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8003EF84;
    }
    // 0x8003EF94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8003EF98:
    // 0x8003EF98: sll         $t7, $t0, 3
    ctx->r15 = S32(ctx->r8 << 3);
    // 0x8003EF9C: subu        $a0, $a3, $t7
    ctx->r4 = SUB32(ctx->r7, ctx->r15);
    // 0x8003EFA0: andi        $t8, $a0, 0x7
    ctx->r24 = ctx->r4 & 0X7;
    // 0x8003EFA4: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8003EFA8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003EFAC: beq         $at, $zero, L_8003F060
    if (ctx->r1 == 0) {
        // 0x8003EFB0: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8003F060;
    }
    // 0x8003EFB0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8003EFB4: addu        $a3, $a2, $t8
    ctx->r7 = ADD32(ctx->r6, ctx->r24);
    // 0x8003EFB8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8003EFBC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8003EFC0: addiu       $t1, $t1, -0x3CA4
    ctx->r9 = ADD32(ctx->r9, -0X3CA4);
    // 0x8003EFC4: addiu       $a2, $a2, -0x3CA8
    ctx->r6 = ADD32(ctx->r6, -0X3CA8);
    // 0x8003EFC8: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8003EFCC: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
L_8003EFD0:
    // 0x8003EFD0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8003EFD4: beq         $v1, $zero, L_8003F008
    if (ctx->r3 == 0) {
        // 0x8003EFD8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8003F008;
    }
    // 0x8003EFD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003EFDC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003EFE0: subu        $t8, $t0, $a0
    ctx->r24 = SUB32(ctx->r8, ctx->r4);
    // 0x8003EFE4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003EFE8: nop

    // 0x8003EFEC: sllv        $t9, $t7, $t8
    ctx->r25 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x8003EFF0: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x8003EFF4: andi        $t6, $t9, 0x80
    ctx->r14 = ctx->r25 & 0X80;
    // 0x8003EFF8: srav        $t7, $t6, $v1
    ctx->r15 = S32(SIGNED(ctx->r14) >> (ctx->r3 & 31));
    // 0x8003EFFC: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8003F000: b           L_8003F028
    // 0x8003F004: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
        goto L_8003F028;
    // 0x8003F004: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
L_8003F008:
    // 0x8003F008: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003F00C: subu        $t7, $t0, $a0
    ctx->r15 = SUB32(ctx->r8, ctx->r4);
    // 0x8003F010: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x8003F014: nop

    // 0x8003F018: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x8003F01C: andi        $t6, $t9, 0x80
    ctx->r14 = ctx->r25 & 0X80;
    // 0x8003F020: srav        $t8, $t6, $v1
    ctx->r24 = S32(SIGNED(ctx->r14) >> (ctx->r3 & 31));
    // 0x8003F024: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
L_8003F028:
    // 0x8003F028: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8003F02C: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8003F030: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8003F034: bgez        $t9, L_8003F04C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8003F038: sw          $t9, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r25;
            goto L_8003F04C;
    }
    // 0x8003F038: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8003F03C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8003F040: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8003F044: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8003F048: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_8003F04C:
    // 0x8003F04C: bne         $t0, $v1, L_8003F058
    if (ctx->r8 != ctx->r3) {
        // 0x8003F050: nop
    
            goto L_8003F058;
    }
    // 0x8003F050: nop

    // 0x8003F054: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8003F058:
    // 0x8003F058: bne         $at, $zero, L_8003EFD0
    if (ctx->r1 != 0) {
        // 0x8003F05C: andi        $v1, $v0, 0x7
        ctx->r3 = ctx->r2 & 0X7;
            goto L_8003EFD0;
    }
    // 0x8003F05C: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
L_8003F060:
    // 0x8003F060: jr          $ra
    // 0x8003F064: nop

    return;
    // 0x8003F064: nop

;}
RECOMP_FUNC void func_8003F068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F06C: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8003F070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F074: beq         $t6, $zero, L_8003F0D8
    if (ctx->r14 == 0) {
        // 0x8003F078: or          $t4, $a0, $zero
        ctx->r12 = ctx->r4 | 0;
            goto L_8003F0D8;
    }
    // 0x8003F078: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x8003F07C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003F080: addiu       $t7, $t7, -0x3CEA
    ctx->r15 = ADD32(ctx->r15, -0X3CEA);
    // 0x8003F084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003F088: sw          $t7, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r15;
    // 0x8003F08C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003F090: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003F094: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8003F098: addiu       $t2, $v0, 0x71C
    ctx->r10 = ADD32(ctx->r2, 0X71C);
    // 0x8003F09C: sw          $t8, -0x3CA4($at)
    MEM_W(-0X3CA4, ctx->r1) = ctx->r24;
    // 0x8003F0A0: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8003F0A4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003F0A8: beq         $t9, $zero, L_8003F0D8
    if (ctx->r25 == 0) {
        // 0x8003F0AC: addiu       $t6, $t6, 0x71C
        ctx->r14 = ADD32(ctx->r14, 0X71C);
            goto L_8003F0D8;
    }
    // 0x8003F0AC: addiu       $t6, $t6, 0x71C
    ctx->r14 = ADD32(ctx->r14, 0X71C);
    // 0x8003F0B0: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x8003F0B4: nop

L_8003F0B8:
    // 0x8003F0B8: lhu         $a0, 0x4($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X4);
    // 0x8003F0BC: lhu         $a2, 0x6($t2)
    ctx->r6 = MEM_HU(ctx->r10, 0X6);
    // 0x8003F0C0: jal         0x8003EF1C
    // 0x8003F0C4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8003EF1C(rdram, ctx);
        goto after_0;
    // 0x8003F0C4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x8003F0C8: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8003F0CC: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x8003F0D0: bne         $t3, $zero, L_8003F0B8
    if (ctx->r11 != 0) {
        // 0x8003F0D4: nop
    
            goto L_8003F0B8;
    }
    // 0x8003F0D4: nop

L_8003F0D8:
    // 0x8003F0D8: andi        $t7, $t4, 0x2
    ctx->r15 = ctx->r12 & 0X2;
    // 0x8003F0DC: beq         $t7, $zero, L_8003F174
    if (ctx->r15 == 0) {
        // 0x8003F0E0: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8003F174;
    }
    // 0x8003F0E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003F0E4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003F0E8: addiu       $t8, $t8, -0x3CE0
    ctx->r24 = ADD32(ctx->r24, -0X3CE0);
    // 0x8003F0EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003F0F0: sw          $t8, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r24;
    // 0x8003F0F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003F0F8: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x8003F0FC: addiu       $t2, $v0, 0x774
    ctx->r10 = ADD32(ctx->r2, 0X774);
    // 0x8003F100: sw          $t9, -0x3CA4($at)
    MEM_W(-0X3CA4, ctx->r1) = ctx->r25;
    // 0x8003F104: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x8003F108: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8003F10C: beq         $t6, $zero, L_8003F13C
    if (ctx->r14 == 0) {
        // 0x8003F110: addiu       $t7, $t7, 0x774
        ctx->r15 = ADD32(ctx->r15, 0X774);
            goto L_8003F13C;
    }
    // 0x8003F110: addiu       $t7, $t7, 0x774
    ctx->r15 = ADD32(ctx->r15, 0X774);
    // 0x8003F114: lw          $t3, 0x0($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X0);
    // 0x8003F118: nop

L_8003F11C:
    // 0x8003F11C: lhu         $a0, 0x4($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X4);
    // 0x8003F120: lhu         $a2, 0x6($t2)
    ctx->r6 = MEM_HU(ctx->r10, 0X6);
    // 0x8003F124: jal         0x8003EF1C
    // 0x8003F128: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8003EF1C(rdram, ctx);
        goto after_1;
    // 0x8003F128: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x8003F12C: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8003F130: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x8003F134: bne         $t3, $zero, L_8003F11C
    if (ctx->r11 != 0) {
        // 0x8003F138: nop
    
            goto L_8003F11C;
    }
    // 0x8003F138: nop

L_8003F13C:
    // 0x8003F13C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003F140: addiu       $v1, $v1, -0x3D50
    ctx->r3 = ADD32(ctx->r3, -0X3D50);
    // 0x8003F144: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003F148: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8003F14C: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8003F150: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8003F154: lbu         $t9, 0x8($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X8);
    // 0x8003F158: lbu         $t6, 0x9($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X9);
    // 0x8003F15C: lbu         $t7, 0xA($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XA);
    // 0x8003F160: lbu         $t8, 0xB($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XB);
    // 0x8003F164: sb          $t9, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r25;
    // 0x8003F168: sb          $t6, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r14;
    // 0x8003F16C: sb          $t7, 0x22($v0)
    MEM_B(0X22, ctx->r2) = ctx->r15;
    // 0x8003F170: sb          $t8, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r24;
L_8003F174:
    // 0x8003F174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F17C: jr          $ra
    // 0x8003F180: nop

    return;
    // 0x8003F180: nop

;}
RECOMP_FUNC void func_8003F190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F190: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003F194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003F198: blez        $t6, L_8003F1CC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003F19C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003F1CC;
    }
    // 0x8003F19C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003F1A0:
    // 0x8003F1A0: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F1A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003F1A8: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x8003F1AC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F1B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003F1B4: sw          $a1, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r5;
    // 0x8003F1B8: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x8003F1BC: nop

    // 0x8003F1C0: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003F1C4: bne         $at, $zero, L_8003F1A0
    if (ctx->r1 != 0) {
        // 0x8003F1C8: nop
    
            goto L_8003F1A0;
    }
    // 0x8003F1C8: nop

L_8003F1CC:
    // 0x8003F1CC: jr          $ra
    // 0x8003F1D0: nop

    return;
    // 0x8003F1D0: nop

;}
RECOMP_FUNC void func_8003F1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F1D4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8003F1D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003F1DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003F1E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003F1E4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003F1E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003F1EC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003F1F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003F1F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003F1F8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8003F1FC: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8003F200: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8003F204: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8003F208: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x8003F20C: lw          $a2, 0x4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4);
    // 0x8003F210: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x8003F214: jal         0x8007E5F0
    // 0x8003F218: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    guRotateRPYF(rdram, ctx);
        goto after_0;
    // 0x8003F218: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x8003F21C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8003F220: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003F224: blez        $t6, L_8003F370
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003F228: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8003F370;
    }
    // 0x8003F228: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003F22C: addiu       $s5, $zero, 0x24
    ctx->r21 = ADD32(0, 0X24);
L_8003F230:
    // 0x8003F230: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003F234:
    // 0x8003F234: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x8003F238: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x8003F23C: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8003F240: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F244: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x8003F248: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8003F24C: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x8003F250: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x8003F254: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8003F258: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    // 0x8003F25C: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x8003F260: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x8003F264: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8003F268: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8003F26C: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8003F270: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8003F274: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8003F278: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8003F27C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8003F280: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x8003F284: lw          $t5, 0x4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X4);
    // 0x8003F288: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x8003F28C: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x8003F290: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8003F294: addu        $t1, $t9, $s1
    ctx->r9 = ADD32(ctx->r25, ctx->r17);
    // 0x8003F298: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8003F29C: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x8003F2A0: lwc1        $f8, 0x14($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8003F2A4: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8003F2A8: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x8003F2AC: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8003F2B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003F2B4: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x8003F2B8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8003F2BC: nop

    // 0x8003F2C0: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
    // 0x8003F2C4: jal         0x800284E0
    // 0x8003F2C8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800284E0(rdram, ctx);
        goto after_1;
    // 0x8003F2C8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_1:
    // 0x8003F2CC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8003F2D0: bne         $s0, $s5, L_8003F234
    if (ctx->r16 != ctx->r21) {
        // 0x8003F2D4: nop
    
            goto L_8003F234;
    }
    // 0x8003F2D4: nop

    // 0x8003F2D8: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x8003F2DC: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x8003F2E0: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8003F2E4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F2E8: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8003F2EC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8003F2F0: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8003F2F4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003F2F8: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x8003F2FC: lw          $t4, 0x4($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X4);
    // 0x8003F300: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8003F304: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x8003F308: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8003F30C: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8003F310: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F314: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8003F318: nop

    // 0x8003F31C: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x8003F320: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x8003F324: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8003F328: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8003F32C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8003F330: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x8003F334: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8003F338: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8003F33C: nop

    // 0x8003F340: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x8003F344: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8003F348: nop

    // 0x8003F34C: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8003F350: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8003F354: jal         0x800284E0
    // 0x8003F358: nop

    func_800284E0(rdram, ctx);
        goto after_2;
    // 0x8003F358: nop

    after_2:
    // 0x8003F35C: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8003F360: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003F364: slt         $at, $s6, $t9
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003F368: bne         $at, $zero, L_8003F230
    if (ctx->r1 != 0) {
        // 0x8003F36C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003F230;
    }
    // 0x8003F36C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8003F370:
    // 0x8003F370: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003F374: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003F378: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F37C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003F380: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003F384: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003F388: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F38C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003F390: jr          $ra
    // 0x8003F394: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8003F394: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8003F398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F398: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003F39C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003F3A0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003F3A4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003F3A8: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8003F3AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003F3B0: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    // 0x8003F3B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8003F3B8: jal         0x8003F1D4
    // 0x8003F3BC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_8003F1D4(rdram, ctx);
        goto after_0;
    // 0x8003F3BC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x8003F3C0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8003F3C4: lui         $at, 0xC6FA
    ctx->r1 = S32(0XC6FA << 16);
    // 0x8003F3C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8003F3CC: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x8003F3D0: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x8003F3D4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8003F3D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8003F3DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003F3E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003F3E4: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x8003F3E8: blez        $v1, L_8003F4BC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8003F3EC: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8003F4BC;
    }
    // 0x8003F3EC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8003F3F0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x8003F3F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003F3F8: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x8003F3FC: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
L_8003F400:
    // 0x8003F400: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8003F404: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003F408:
    // 0x8003F408: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8003F40C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8003F410: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8003F414: nop

    // 0x8003F418: bc1f        L_8003F428
    if (!c1cs) {
        // 0x8003F41C: nop
    
            goto L_8003F428;
    }
    // 0x8003F41C: nop

    // 0x8003F420: b           L_8003F43C
    // 0x8003F424: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_8003F43C;
    // 0x8003F424: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8003F428:
    // 0x8003F428: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8003F42C: nop

    // 0x8003F430: bc1f        L_8003F43C
    if (!c1cs) {
        // 0x8003F434: nop
    
            goto L_8003F43C;
    }
    // 0x8003F434: nop

    // 0x8003F438: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8003F43C:
    // 0x8003F43C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8003F440: nop

    // 0x8003F444: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8003F448: nop

    // 0x8003F44C: bc1f        L_8003F45C
    if (!c1cs) {
        // 0x8003F450: nop
    
            goto L_8003F45C;
    }
    // 0x8003F450: nop

    // 0x8003F454: b           L_8003F470
    // 0x8003F458: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_8003F470;
    // 0x8003F458: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_8003F45C:
    // 0x8003F45C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8003F460: nop

    // 0x8003F464: bc1f        L_8003F470
    if (!c1cs) {
        // 0x8003F468: nop
    
            goto L_8003F470;
    }
    // 0x8003F468: nop

    // 0x8003F46C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8003F470:
    // 0x8003F470: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8003F474: nop

    // 0x8003F478: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8003F47C: nop

    // 0x8003F480: bc1f        L_8003F490
    if (!c1cs) {
        // 0x8003F484: nop
    
            goto L_8003F490;
    }
    // 0x8003F484: nop

    // 0x8003F488: b           L_8003F4A4
    // 0x8003F48C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
        goto L_8003F4A4;
    // 0x8003F48C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_8003F490:
    // 0x8003F490: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8003F494: nop

    // 0x8003F498: bc1f        L_8003F4A4
    if (!c1cs) {
        // 0x8003F49C: nop
    
            goto L_8003F4A4;
    }
    // 0x8003F49C: nop

    // 0x8003F4A0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8003F4A4:
    // 0x8003F4A4: bne         $v1, $a0, L_8003F408
    if (ctx->r3 != ctx->r4) {
        // 0x8003F4A8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_8003F408;
    }
    // 0x8003F4A8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8003F4AC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8003F4B0: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003F4B4: bne         $at, $zero, L_8003F400
    if (ctx->r1 != 0) {
        // 0x8003F4B8: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_8003F400;
    }
    // 0x8003F4B8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_8003F4BC:
    // 0x8003F4BC: swc1        $f20, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f20.u32l;
    // 0x8003F4C0: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x8003F4C4: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
    // 0x8003F4C8: swc1        $f14, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f14.u32l;
    // 0x8003F4CC: swc1        $f12, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f12.u32l;
    // 0x8003F4D0: swc1        $f2, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f2.u32l;
    // 0x8003F4D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F4D8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8003F4DC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8003F4E0: jr          $ra
    // 0x8003F4E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003F4E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003F4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F4E8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003F4EC: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8003F4F0: blez        $t6, L_8003F5B8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003F4F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003F5B8;
    }
    // 0x8003F4F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003F4F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003F4FC: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
L_8003F500:
    // 0x8003F500: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8003F504:
    // 0x8003F504: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F508: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8003F50C: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8003F510: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F514: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8003F518: addu        $t2, $t9, $a3
    ctx->r10 = ADD32(ctx->r25, ctx->r7);
    // 0x8003F51C: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8003F520: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003F524: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003F528: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F52C: nop

    // 0x8003F530: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8003F534: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    // 0x8003F538: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F53C: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8003F540: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8003F544: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F548: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8003F54C: addu        $t2, $t9, $a3
    ctx->r10 = ADD32(ctx->r25, ctx->r7);
    // 0x8003F550: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x8003F554: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003F558: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8003F55C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F560: nop

    // 0x8003F564: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8003F568: swc1        $f18, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f18.u32l;
    // 0x8003F56C: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F570: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8003F574: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8003F578: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F57C: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8003F580: addu        $t2, $t9, $a3
    ctx->r10 = ADD32(ctx->r25, ctx->r7);
    // 0x8003F584: lwc1        $f4, 0x14($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8003F588: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003F58C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F590: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003F594: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8003F598: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8003F59C: bne         $a3, $t1, L_8003F504
    if (ctx->r7 != ctx->r9) {
        // 0x8003F5A0: swc1        $f8, 0x14($t6)
        MEM_W(0X14, ctx->r14) = ctx->f8.u32l;
            goto L_8003F504;
    }
    // 0x8003F5A0: swc1        $f8, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f8.u32l;
    // 0x8003F5A4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8003F5A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003F5AC: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003F5B0: bne         $at, $zero, L_8003F500
    if (ctx->r1 != 0) {
        // 0x8003F5B4: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8003F500;
    }
    // 0x8003F5B4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_8003F5B8:
    // 0x8003F5B8: jr          $ra
    // 0x8003F5BC: nop

    return;
    // 0x8003F5BC: nop

;}
RECOMP_FUNC void func_8003F5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F5C8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8003F5CC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003F5D0: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x8003F5D4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8003F5D8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8003F5DC: jal         0x8003F4E8
    // 0x8003F5E0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8003F4E8(rdram, ctx);
        goto after_0;
    // 0x8003F5E0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003F5E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F5E8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8003F5EC: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003F5F0: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8003F5F4: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x8003F5F8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003F5FC: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x8003F600: swc1        $f8, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f8.u32l;
    // 0x8003F604: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003F608: nop

    // 0x8003F60C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8003F610: lwc1        $f10, 0x14($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X14);
    // 0x8003F614: swc1        $f18, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f18.u32l;
    // 0x8003F618: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003F61C: nop

    // 0x8003F620: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003F624: lwc1        $f4, 0x18($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X18);
    // 0x8003F628: swc1        $f8, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f8.u32l;
    // 0x8003F62C: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003F630: nop

    // 0x8003F634: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8003F638: lwc1        $f10, 0x1C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x8003F63C: swc1        $f18, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f18.u32l;
    // 0x8003F640: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003F644: nop

    // 0x8003F648: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003F64C: swc1        $f8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f8.u32l;
    // 0x8003F650: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003F654: nop

    // 0x8003F658: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8003F65C: swc1        $f18, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->f18.u32l;
    // 0x8003F660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F668: jr          $ra
    // 0x8003F66C: nop

    return;
    // 0x8003F66C: nop

;}
RECOMP_FUNC void func_8003F670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F670: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003F674: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8003F678: blez        $t6, L_8003F738
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003F67C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003F738;
    }
    // 0x8003F67C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003F680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003F684: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
L_8003F688:
    // 0x8003F688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8003F68C:
    // 0x8003F68C: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F690: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8003F694: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8003F698: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F69C: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8003F6A0: addu        $t2, $t9, $a3
    ctx->r10 = ADD32(ctx->r25, ctx->r7);
    // 0x8003F6A4: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8003F6A8: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003F6AC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F6B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8003F6B4: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8003F6B8: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    // 0x8003F6BC: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F6C0: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8003F6C4: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8003F6C8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F6CC: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8003F6D0: addu        $t2, $t9, $a3
    ctx->r10 = ADD32(ctx->r25, ctx->r7);
    // 0x8003F6D4: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x8003F6D8: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003F6DC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F6E0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8003F6E4: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8003F6E8: swc1        $f18, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f18.u32l;
    // 0x8003F6EC: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003F6F0: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8003F6F4: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8003F6F8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F6FC: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8003F700: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F704: addu        $t2, $t9, $a3
    ctx->r10 = ADD32(ctx->r25, ctx->r7);
    // 0x8003F708: lwc1        $f4, 0x14($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8003F70C: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8003F710: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x8003F714: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8003F718: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8003F71C: bne         $a3, $t1, L_8003F68C
    if (ctx->r7 != ctx->r9) {
        // 0x8003F720: swc1        $f8, 0x14($t6)
        MEM_W(0X14, ctx->r14) = ctx->f8.u32l;
            goto L_8003F68C;
    }
    // 0x8003F720: swc1        $f8, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f8.u32l;
    // 0x8003F724: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8003F728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003F72C: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003F730: bne         $at, $zero, L_8003F688
    if (ctx->r1 != 0) {
        // 0x8003F734: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8003F688;
    }
    // 0x8003F734: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_8003F738:
    // 0x8003F738: jr          $ra
    // 0x8003F73C: nop

    return;
    // 0x8003F73C: nop

;}
