#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80052E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052E3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052E44: jal         0x80007774
    // 0x80052E48: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80052E48: nop

    after_0:
    // 0x80052E4C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80052E50: lw          $a0, 0x1BB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB8);
    // 0x80052E54: nop

    // 0x80052E58: beq         $a0, $zero, L_80052E8C
    if (ctx->r4 == 0) {
        // 0x80052E5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052E8C;
    }
    // 0x80052E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052E60: jal         0x80014BF4
    // 0x80052E64: nop

    func_80014BF4(rdram, ctx);
        goto after_1;
    // 0x80052E64: nop

    after_1:
    // 0x80052E68: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80052E6C: lw          $a0, 0x1BBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BBC);
    // 0x80052E70: jal         0x80014BF4
    // 0x80052E74: nop

    func_80014BF4(rdram, ctx);
        goto after_2;
    // 0x80052E74: nop

    after_2:
    // 0x80052E78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052E7C: sw          $zero, 0x1BB8($at)
    MEM_W(0X1BB8, ctx->r1) = 0;
    // 0x80052E80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052E84: sw          $zero, 0x1BBC($at)
    MEM_W(0X1BBC, ctx->r1) = 0;
    // 0x80052E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80052E8C:
    // 0x80052E8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052E90: sw          $zero, 0x1BC0($at)
    MEM_W(0X1BC0, ctx->r1) = 0;
    // 0x80052E94: jr          $ra
    // 0x80052E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80052E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80052E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80052EA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80052EA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80052EA8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80052EAC: jal         0x8000797C
    // 0x80052EB0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x80052EB0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x80052EB4: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80052EB8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80052EBC: addiu       $s0, $s0, -0x2B04
    ctx->r16 = ADD32(ctx->r16, -0X2B04);
    // 0x80052EC0: addiu       $s1, $s1, 0x2C8
    ctx->r17 = ADD32(ctx->r17, 0X2C8);
    // 0x80052EC4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_80052EC8:
    // 0x80052EC8: nop

    // 0x80052ECC: beq         $t6, $zero, L_80052FA4
    if (ctx->r14 == 0) {
        // 0x80052ED0: nop
    
            goto L_80052FA4;
    }
    // 0x80052ED0: nop

    // 0x80052ED4: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x80052ED8: nop

    // 0x80052EDC: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x80052EE0: beq         $t8, $zero, L_80052FA4
    if (ctx->r24 == 0) {
        // 0x80052EE4: nop
    
            goto L_80052FA4;
    }
    // 0x80052EE4: nop

    // 0x80052EE8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80052EEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80052EF0: sw          $s0, -0x2B0C($at)
    MEM_W(-0X2B0C, ctx->r1) = ctx->r16;
    // 0x80052EF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80052EFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80052F00: jal         0x80009534
    // 0x80052F04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80009534(rdram, ctx);
        goto after_1;
    // 0x80052F04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80052F08: jal         0x80056924
    // 0x80052F0C: nop

    func_80056924(rdram, ctx);
        goto after_2;
    // 0x80052F0C: nop

    after_2:
    // 0x80052F10: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80052F14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80052F18: addiu       $s1, $s1, -0x2B08
    ctx->r17 = ADD32(ctx->r17, -0X2B08);
    // 0x80052F1C: sw          $s0, -0x29B8($at)
    MEM_W(-0X29B8, ctx->r1) = ctx->r16;
    // 0x80052F20: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80052F24: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80052F28: bne         $t9, $zero, L_80052F84
    if (ctx->r25 != 0) {
        // 0x80052F2C: addiu       $s0, $s0, 0x1BC0
        ctx->r16 = ADD32(ctx->r16, 0X1BC0);
            goto L_80052F84;
    }
    // 0x80052F2C: addiu       $s0, $s0, 0x1BC0
    ctx->r16 = ADD32(ctx->r16, 0X1BC0);
L_80052F30:
    // 0x80052F30: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80052F34: nop

    // 0x80052F38: beq         $t0, $zero, L_80052F64
    if (ctx->r8 == 0) {
        // 0x80052F3C: nop
    
            goto L_80052F64;
    }
    // 0x80052F3C: nop

    // 0x80052F40: jal         0x80007AB0
    // 0x80052F44: nop

    func_80007AB0(rdram, ctx);
        goto after_3;
    // 0x80052F44: nop

    after_3:
    // 0x80052F48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80052F4C: nop

    // 0x80052F50: beq         $a0, $zero, L_80052F64
    if (ctx->r4 == 0) {
        // 0x80052F54: nop
    
            goto L_80052F64;
    }
    // 0x80052F54: nop

    // 0x80052F58: jal         0x800075A0
    // 0x80052F5C: nop

    func_800075A0(rdram, ctx);
        goto after_4;
    // 0x80052F5C: nop

    after_4:
    // 0x80052F60: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80052F64:
    // 0x80052F64: jal         0x8002A364
    // 0x80052F68: nop

    func_8002A364(rdram, ctx);
        goto after_5;
    // 0x80052F68: nop

    after_5:
    // 0x80052F6C: jal         0x80007AB0
    // 0x80052F70: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x80052F70: nop

    after_6:
    // 0x80052F74: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80052F78: nop

    // 0x80052F7C: beq         $t1, $zero, L_80052F30
    if (ctx->r9 == 0) {
        // 0x80052F80: nop
    
            goto L_80052F30;
    }
    // 0x80052F80: nop

L_80052F84:
    // 0x80052F84: jal         0x80027060
    // 0x80052F88: nop

    func_80027060(rdram, ctx);
        goto after_7;
    // 0x80052F88: nop

    after_7:
    // 0x80052F8C: jal         0x80056924
    // 0x80052F90: nop

    func_80056924(rdram, ctx);
        goto after_8;
    // 0x80052F90: nop

    after_8:
L_80052F94:
    // 0x80052F94: jal         0x80007AB0
    // 0x80052F98: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80052F98: nop

    after_9:
    // 0x80052F9C: b           L_80052F94
    // 0x80052FA0: nop

        goto L_80052F94;
    // 0x80052FA0: nop

L_80052FA4:
    // 0x80052FA4: jal         0x80007AB0
    // 0x80052FA8: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x80052FA8: nop

    after_10:
    // 0x80052FAC: b           L_80052EC8
    // 0x80052FB0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
        goto L_80052EC8;
    // 0x80052FB0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80052FB4: nop

    // 0x80052FB8: nop

    // 0x80052FBC: nop

    // 0x80052FC0: nop

    // 0x80052FC4: nop

    // 0x80052FC8: nop

    // 0x80052FCC: nop

    // 0x80052FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052FD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80052FD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80052FDC: jr          $ra
    // 0x80052FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80052FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80052FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052FE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80052FE8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80052FEC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80052FF0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80052FF4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80052FF8: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80052FFC: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80053000: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80053004: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80053008: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005300C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80053010: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80053014: jal         0x80007774
    // 0x80053018: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80053018: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005301C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80053020: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80053024: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80053028: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8005302C: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x80053030: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80053034: subu        $t7, $t6, $v1
    ctx->r15 = SUB32(ctx->r14, ctx->r3);
    // 0x80053038: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8005303C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80053040: addiu       $s2, $s2, 0x1BC8
    ctx->r18 = ADD32(ctx->r18, 0X1BC8);
    // 0x80053044: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80053048: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8005304C: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80053050: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80053054: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80053058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005305C: div.s       $f26, $f6, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80053060: bne         $t8, $zero, L_800530C4
    if (ctx->r24 != 0) {
        // 0x80053064: cvt.s.w     $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800530C4;
    }
    // 0x80053064: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80053068: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8005306C: jal         0x8001574C
    // 0x80053070: addiu       $a0, $a0, 0xBB4
    ctx->r4 = ADD32(ctx->r4, 0XBB4);
    func_8001574C(rdram, ctx);
        goto after_1;
    // 0x80053070: addiu       $a0, $a0, 0xBB4
    ctx->r4 = ADD32(ctx->r4, 0XBB4);
    after_1:
    // 0x80053074: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80053078: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8005307C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80053080: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80053084: addiu       $t1, $zero, 0x140
    ctx->r9 = ADD32(0, 0X140);
    // 0x80053088: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x8005308C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80053090: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x80053094: sw          $t1, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = ctx->r9;
    // 0x80053098: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8005309C: nop

    // 0x800530A0: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    // 0x800530A4: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x800530A8: nop

    // 0x800530AC: sw          $zero, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = 0;
    // 0x800530B0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800530B4: nop

    // 0x800530B8: sw          $zero, 0x40($t6)
    MEM_W(0X40, ctx->r14) = 0;
    // 0x800530BC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x800530C0: nop

L_800530C4:
    // 0x800530C4: blez        $a0, L_8005313C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800530C8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8005313C;
    }
    // 0x800530C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800530CC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800530D0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800530D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800530D8: lwc1        $f22, 0x5EE4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5EE4);
    // 0x800530DC: nop

L_800530E0:
    // 0x800530E0: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x800530E4: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x800530E8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800530EC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800530F0: mul.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x800530F4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800530F8: nop

    // 0x800530FC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80053100: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80053104: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80053108: nop

    // 0x8005310C: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80053110: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80053114: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80053118: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8005311C: sw          $t1, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r9;
    // 0x80053120: jal         0x80007AB0
    // 0x80053124: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x80053124: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    after_2:
    // 0x80053128: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x8005312C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80053130: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80053134: bne         $at, $zero, L_800530E0
    if (ctx->r1 != 0) {
        // 0x80053138: nop
    
            goto L_800530E0;
    }
    // 0x80053138: nop

L_8005313C:
    // 0x8005313C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80053140: lwc1        $f22, 0x5EE8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5EE8);
    // 0x80053144: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80053148: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8005314C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80053150: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80053154: bne         $v0, $zero, L_8005316C
    if (ctx->r2 != 0) {
        // 0x80053158: nop
    
            goto L_8005316C;
    }
    // 0x80053158: nop

    // 0x8005315C: jal         0x80014BF4
    // 0x80053160: nop

    func_80014BF4(rdram, ctx);
        goto after_3;
    // 0x80053160: nop

    after_3:
    // 0x80053164: b           L_800531B4
    // 0x80053168: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
        goto L_800531B4;
    // 0x80053168: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_8005316C:
    // 0x8005316C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80053170: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x80053174: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80053178: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8005317C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80053180: nop

    // 0x80053184: mul.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80053188: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8005318C: nop

    // 0x80053190: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80053194: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80053198: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005319C: nop

    // 0x800531A0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800531A4: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x800531A8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800531AC: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x800531B0: sw          $t9, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r25;
L_800531B4:
    // 0x800531B4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800531B8: jal         0x80007AB0
    // 0x800531BC: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
    func_80007AB0(rdram, ctx);
        goto after_4;
    // 0x800531BC: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
    after_4:
    // 0x800531C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800531C4: jal         0x80007AE0
    // 0x800531C8: sw          $zero, 0x1BCC($at)
    MEM_W(0X1BCC, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_5;
    // 0x800531C8: sw          $zero, 0x1BCC($at)
    MEM_W(0X1BCC, ctx->r1) = 0;
    after_5:
    // 0x800531CC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800531D0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800531D4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800531D8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800531DC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800531E0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800531E4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800531E8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800531EC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800531F0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800531F4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800531F8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800531FC: jr          $ra
    // 0x80053200: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80053200: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80053204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053204: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80053208: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005320C: bne         $v0, $at, L_80053250
    if (ctx->r2 != ctx->r1) {
        // 0x80053210: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80053250;
    }
    // 0x80053210: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80053214: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80053218: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005321C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80053220: nop

    // 0x80053224: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80053228: beq         $t8, $zero, L_80053240
    if (ctx->r24 == 0) {
        // 0x8005322C: nop
    
            goto L_80053240;
    }
    // 0x8005322C: nop

    // 0x80053230: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053234: lw          $v0, 0x1BA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BA4);
    // 0x80053238: jr          $ra
    // 0x8005323C: nop

    return;
    // 0x8005323C: nop

L_80053240:
    // 0x80053240: lw          $v0, 0x1BA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BA0);
    // 0x80053244: jr          $ra
    // 0x80053248: nop

    return;
    // 0x80053248: nop

    // 0x8005324C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_80053250:
    // 0x80053250: bne         $v0, $at, L_8005326C
    if (ctx->r2 != ctx->r1) {
        // 0x80053254: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_8005326C;
    }
    // 0x80053254: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80053258: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005325C: lw          $v0, 0x1BA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BA8);
    // 0x80053260: jr          $ra
    // 0x80053264: nop

    return;
    // 0x80053264: nop

    // 0x80053268: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_8005326C:
    // 0x8005326C: bne         $v0, $at, L_80053280
    if (ctx->r2 != ctx->r1) {
        // 0x80053270: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80053280;
    }
    // 0x80053270: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053274: lw          $v0, 0x1BB4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB4);
    // 0x80053278: jr          $ra
    // 0x8005327C: nop

    return;
    // 0x8005327C: nop

L_80053280:
    // 0x80053280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80053284: jr          $ra
    // 0x80053288: nop

    return;
    // 0x80053288: nop

    // 0x8005328C: jr          $ra
    // 0x80053290: nop

    return;
    // 0x80053290: nop

;}
RECOMP_FUNC void func_80053294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053294: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x80053298: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8005329C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x800532A0: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x800532A4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x800532A8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x800532AC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x800532B0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x800532B4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x800532B8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x800532BC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x800532C0: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x800532C4: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x800532C8: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x800532CC: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x800532D0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800532D4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x800532D8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800532DC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800532E0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800532E4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800532E8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800532EC: jal         0x80007774
    // 0x800532F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800532F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800532F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800532F8: lwc1        $f31, 0x5EF0($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, 0X5EF0);
    // 0x800532FC: lwc1        $f30, 0x5EF4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X5EF4);
    // 0x80053300: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80053304: lui         $s7, 0x7FFF
    ctx->r23 = S32(0X7FFF << 16);
    // 0x80053308: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8005330C: lwc1        $f25, 0x5EF8($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X5EF8);
    // 0x80053310: lwc1        $f24, 0x5EFC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5EFC);
    // 0x80053314: mtc1        $zero, $f29
    ctx->f_odd[(29 - 1) * 2] = 0;
    // 0x80053318: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8005331C: ori         $s7, $s7, 0xFFFF
    ctx->r23 = ctx->r23 | 0XFFFF;
    // 0x80053320: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x80053324: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x80053328: addiu       $s5, $sp, 0x10C
    ctx->r21 = ADD32(ctx->r29, 0X10C);
    // 0x8005332C: addiu       $s4, $sp, 0x124
    ctx->r20 = ADD32(ctx->r29, 0X124);
L_80053330:
    // 0x80053330: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
L_80053334:
    // 0x80053334: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80053338: bne         $v1, $v0, L_800543C0
    if (ctx->r3 != ctx->r2) {
        // 0x8005333C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800543C0;
    }
    // 0x8005333C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80053340: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80053344: lw          $t6, -0x2B08($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2B08);
    // 0x80053348: lw          $s1, 0x14($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X14);
    // 0x8005334C: beq         $t6, $zero, L_80053358
    if (ctx->r14 == 0) {
        // 0x80053350: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80053358;
    }
    // 0x80053350: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053354: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
L_80053358:
    // 0x80053358: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8005335C: lw          $t7, 0x1C($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X1C);
    // 0x80053360: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80053364: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80053368: lw          $s2, 0x0($t8)
    ctx->r18 = MEM_W(ctx->r24, 0X0);
    // 0x8005336C: nop

    // 0x80053370: andi        $t9, $s2, 0xFFFF
    ctx->r25 = ctx->r18 & 0XFFFF;
    // 0x80053374: bne         $t9, $zero, L_800538A4
    if (ctx->r25 != 0) {
        // 0x80053378: or          $s2, $t9, $zero
        ctx->r18 = ctx->r25 | 0;
            goto L_800538A4;
    }
    // 0x80053378: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x8005337C: lw          $t6, 0x20($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X20);
    // 0x80053380: or          $s2, $fp, $zero
    ctx->r18 = ctx->r30 | 0;
    // 0x80053384: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80053388: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8005338C: nop

    // 0x80053390: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80053394: beq         $at, $zero, L_800533A4
    if (ctx->r1 == 0) {
        // 0x80053398: nop
    
            goto L_800533A4;
    }
    // 0x80053398: nop

    // 0x8005339C: b           L_800533A4
    // 0x800533A0: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
        goto L_800533A4;
    // 0x800533A0: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
L_800533A4:
    // 0x800533A4: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x800533A8: jal         0x8005BA48
    // 0x800533AC: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    func_8005BA48(rdram, ctx);
        goto after_1;
    // 0x800533AC: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    after_1:
    // 0x800533B0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x800533B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800533B8: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x800533BC: beq         $t8, $zero, L_800535F0
    if (ctx->r24 == 0) {
        // 0x800533C0: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_800535F0;
    }
    // 0x800533C0: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x800533C4: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x800533C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x800533CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800533D0: mul.d       $f12, $f6, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f30.d); 
    ctx->f12.d = MUL_D(ctx->f6.d, ctx->f30.d);
    // 0x800533D4: c.lt.d      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.d < ctx->f28.d;
    // 0x800533D8: nop

    // 0x800533DC: bc1f        L_800533EC
    if (!c1cs) {
        // 0x800533E0: nop
    
            goto L_800533EC;
    }
    // 0x800533E0: nop

    // 0x800533E4: b           L_800533F0
    // 0x800533E8: neg.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f14.d = -ctx->f12.d;
        goto L_800533F0;
    // 0x800533E8: neg.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f14.d = -ctx->f12.d;
L_800533EC:
    // 0x800533EC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
L_800533F0:
    // 0x800533F0: lwc1        $f9, 0x5F00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5F00);
    // 0x800533F4: lwc1        $f8, 0x5F04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5F04);
    // 0x800533F8: nop

    // 0x800533FC: c.le.d      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.d <= ctx->f14.d;
    // 0x80053400: nop

    // 0x80053404: bc1f        L_8005343C
    if (!c1cs) {
        // 0x80053408: nop
    
            goto L_8005343C;
    }
    // 0x80053408: nop

    // 0x8005340C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80053410: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053414: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80053418: nop

    // 0x8005341C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80053420: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80053424: nop

    // 0x80053428: div.d       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f12.d, ctx->f6.d);
    // 0x8005342C: neg.d       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = -ctx->f8.d;
    // 0x80053430: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80053434: b           L_80053484
    // 0x80053438: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
        goto L_80053484;
    // 0x80053438: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_8005343C:
    // 0x8005343C: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80053440: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80053444: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80053448: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x8005344C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80053450: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80053454: nop

    // 0x80053458: div.d       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = DIV_D(ctx->f12.d, ctx->f10.d);
    // 0x8005345C: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x80053460: nop

    // 0x80053464: bc1f        L_8005347C
    if (!c1cs) {
        // 0x80053468: nop
    
            goto L_8005347C;
    }
    // 0x80053468: nop

    // 0x8005346C: neg.d       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = -ctx->f0.d;
    // 0x80053470: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80053474: b           L_80053484
    // 0x80053478: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
        goto L_80053484;
    // 0x80053478: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
L_8005347C:
    // 0x8005347C: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x80053480: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
L_80053484:
    // 0x80053484: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053488: jal         0x8004A0A0
    // 0x8005348C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005348C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80053490: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053494: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053498: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8005349C: mul.d       $f12, $f30, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.d); NAN_CHECK(ctx->f4.d); 
    ctx->f12.d = MUL_D(ctx->f30.d, ctx->f4.d);
    // 0x800534A0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800534A4: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x800534A8: add.d       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f8.d + ctx->f12.d;
    // 0x800534AC: c.le.d      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.d <= ctx->f10.d;
    // 0x800534B0: nop

    // 0x800534B4: bc1f        L_800534C8
    if (!c1cs) {
        // 0x800534B8: nop
    
            goto L_800534C8;
    }
    // 0x800534B8: nop

    // 0x800534BC: add.d       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f8.d + ctx->f12.d;
    // 0x800534C0: b           L_800534FC
    // 0x800534C4: sub.d       $f14, $f4, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f4.d - ctx->f24.d;
        goto L_800534FC;
    // 0x800534C4: sub.d       $f14, $f4, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f4.d - ctx->f24.d;
L_800534C8:
    // 0x800534C8: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800534CC: add.d       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f10.d + ctx->f12.d;
    // 0x800534D0: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x800534D4: c.lt.d      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.d < ctx->f28.d;
    // 0x800534D8: nop

    // 0x800534DC: bc1f        L_800534F0
    if (!c1cs) {
        // 0x800534E0: nop
    
            goto L_800534F0;
    }
    // 0x800534E0: nop

    // 0x800534E4: add.d       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f10.d + ctx->f12.d;
    // 0x800534E8: b           L_800534F8
    // 0x800534EC: add.d       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f4.d + ctx->f24.d;
        goto L_800534F8;
    // 0x800534EC: add.d       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f4.d + ctx->f24.d;
L_800534F0:
    // 0x800534F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800534F4: add.d       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f8.d + ctx->f12.d;
L_800534F8:
    // 0x800534F8: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
L_800534FC:
    // 0x800534FC: cvt.s.d     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f10.fl = CVT_S_D(ctx->f14.d);
    // 0x80053500: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053504: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
    // 0x80053508: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8005350C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80053510: swc1        $f4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f4.u32l;
    // 0x80053514: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80053518: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8005351C: jal         0x8005C3A8
    // 0x80053520: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    func_8005C3A8(rdram, ctx);
        goto after_3;
    // 0x80053520: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    after_3:
    // 0x80053524: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80053528: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x8005352C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80053530: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80053534: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x80053538: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8005353C: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x80053540: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x80053544: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053548: bne         $t8, $at, L_8005355C
    if (ctx->r24 != ctx->r1) {
        // 0x8005354C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_8005355C;
    }
    // 0x8005354C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80053550: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053554: jal         0x8004A0A0
    // 0x80053558: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x80053558: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_4:
L_8005355C:
    // 0x8005355C: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80053560: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80053564: sw          $t9, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r25;
    // 0x80053568: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x8005356C: nop

    // 0x80053570: blez        $t6, L_800535B4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80053574: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_800535B4;
    }
    // 0x80053574: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_80053578:
    // 0x80053578: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8005357C: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80053580: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80053584: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x80053588: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x8005358C: jal         0x8004A0A0
    // 0x80053590: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80053590: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_5:
    // 0x80053594: jal         0x80007AB0
    // 0x80053598: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x80053598: nop

    after_6:
    // 0x8005359C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x800535A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800535A4: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800535A8: bne         $at, $zero, L_80053578
    if (ctx->r1 != 0) {
        // 0x800535AC: nop
    
            goto L_80053578;
    }
    // 0x800535AC: nop

    // 0x800535B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_800535B4:
    // 0x800535B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800535B8: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x800535BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800535C0: jal         0x8005C3A8
    // 0x800535C4: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    func_8005C3A8(rdram, ctx);
        goto after_7;
    // 0x800535C4: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    after_7:
    // 0x800535C8: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x800535CC: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x800535D0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800535D4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800535D8: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x800535DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800535E0: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x800535E4: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x800535E8: b           L_800547F0
    // 0x800535EC: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
        goto L_800547F0;
    // 0x800535EC: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
L_800535F0:
    // 0x800535F0: beq         $t6, $zero, L_80053620
    if (ctx->r14 == 0) {
        // 0x800535F4: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80053620;
    }
    // 0x800535F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800535F8: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x800535FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80053600: jal         0x8004A0A0
    // 0x80053604: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x80053604: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_8:
    // 0x80053608: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8005360C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053610: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80053614: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x80053618: b           L_80053630
    // 0x8005361C: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
        goto L_80053630;
    // 0x8005361C: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
L_80053620:
    // 0x80053620: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80053624: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053628: nop

    // 0x8005362C: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
L_80053630:
    // 0x80053630: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80053634: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80053638: andi        $t6, $t9, 0x8
    ctx->r14 = ctx->r25 & 0X8;
    // 0x8005363C: beq         $t6, $zero, L_80053684
    if (ctx->r14 == 0) {
        // 0x80053640: nop
    
            goto L_80053684;
    }
    // 0x80053640: nop

    // 0x80053644: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053648: jal         0x8004A0A0
    // 0x8005364C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x8005364C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_9:
    // 0x80053650: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80053654: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053658: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8005365C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80053660: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x80053664: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80053668: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8005366C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80053670: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
    // 0x80053674: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80053678: nop

    // 0x8005367C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80053680: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
L_80053684:
    // 0x80053684: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053688: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005368C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80053690: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80053694: addiu       $a2, $sp, 0x118
    ctx->r6 = ADD32(ctx->r29, 0X118);
    // 0x80053698: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    // 0x8005369C: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x800536A0: jal         0x80028850
    // 0x800536A4: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    func_80028850(rdram, ctx);
        goto after_10;
    // 0x800536A4: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x800536A8: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x800536AC: lwc1        $f2, 0x14($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X14);
    // 0x800536B0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800536B4: nop

    // 0x800536B8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800536BC: jal         0x8007A500
    // 0x800536C0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_11;
    // 0x800536C0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_11:
    // 0x800536C4: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800536C8: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x800536CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800536D0: mul.d       $f12, $f8, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f12.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x800536D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800536D8: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x800536DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800536E0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800536E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800536E8: c.le.d      $f24, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f24.d <= ctx->f12.d;
    // 0x800536EC: nop

    // 0x800536F0: div.s       $f20, $f0, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800536F4: bc1f        L_80053708
    if (!c1cs) {
        // 0x800536F8: nop
    
            goto L_80053708;
    }
    // 0x800536F8: nop

    // 0x800536FC: sub.d       $f10, $f12, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = ctx->f12.d - ctx->f24.d;
    // 0x80053700: b           L_80053728
    // 0x80053704: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
        goto L_80053728;
    // 0x80053704: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
L_80053708:
    // 0x80053708: c.lt.d      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.d < ctx->f28.d;
    // 0x8005370C: nop

    // 0x80053710: bc1f        L_80053720
    if (!c1cs) {
        // 0x80053714: nop
    
            goto L_80053720;
    }
    // 0x80053714: nop

    // 0x80053718: b           L_80053724
    // 0x8005371C: add.d       $f14, $f12, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f12.d + ctx->f24.d;
        goto L_80053724;
    // 0x8005371C: add.d       $f14, $f12, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f12.d + ctx->f24.d;
L_80053720:
    // 0x80053720: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
L_80053724:
    // 0x80053724: cvt.s.d     $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f22.fl = CVT_S_D(ctx->f14.d);
L_80053728:
    // 0x80053728: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x8005372C: nop

    // 0x80053730: bc1t        L_80053750
    if (c1cs) {
        // 0x80053734: nop
    
            goto L_80053750;
    }
    // 0x80053734: nop

    // 0x80053738: swc1        $f22, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f22.u32l;
    // 0x8005373C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80053740: nop

    // 0x80053744: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80053748: nop

    // 0x8005374C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
L_80053750:
    // 0x80053750: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053754: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053758: div.s       $f26, $f8, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8005375C: jal         0x8005C3A8
    // 0x80053760: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    func_8005C3A8(rdram, ctx);
        goto after_12;
    // 0x80053760: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    after_12:
    // 0x80053764: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x80053768: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x8005376C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80053770: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x80053774: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x80053778: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8005377C: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x80053780: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80053784: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80053788: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x8005378C: bne         $t8, $zero, L_80053798
    if (ctx->r24 != 0) {
        // 0x80053790: or          $t6, $t6, $at
        ctx->r14 = ctx->r14 | ctx->r1;
            goto L_80053798;
    }
    // 0x80053790: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
    // 0x80053794: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_80053798:
    // 0x80053798: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8005379C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800537A0: blez        $t7, L_80053814
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800537A4: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80053814;
    }
    // 0x800537A4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_800537A8:
    // 0x800537A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800537AC: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x800537B0: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x800537B4: nop

    // 0x800537B8: bc1t        L_800537C8
    if (c1cs) {
        // 0x800537BC: lw          $t9, 0x104($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X104);
            goto L_800537C8;
    }
    // 0x800537BC: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x800537C0: swc1        $f22, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f22.u32l;
    // 0x800537C4: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_800537C8:
    // 0x800537C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800537CC: lwc1        $f4, 0x30($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X30);
    // 0x800537D0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800537D4: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x800537D8: swc1        $f6, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f6.u32l;
    // 0x800537DC: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x800537E0: nop

    // 0x800537E4: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x800537E8: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x800537EC: jal         0x8004A0A0
    // 0x800537F0: nop

    func_8004A0A0(rdram, ctx);
        goto after_13;
    // 0x800537F0: nop

    after_13:
    // 0x800537F4: jal         0x80007AB0
    // 0x800537F8: nop

    func_80007AB0(rdram, ctx);
        goto after_14;
    // 0x800537F8: nop

    after_14:
    // 0x800537FC: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80053800: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80053804: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80053808: bne         $at, $zero, L_800537A8
    if (ctx->r1 != 0) {
        // 0x8005380C: nop
    
            goto L_800537A8;
    }
    // 0x8005380C: nop

    // 0x80053810: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_80053814:
    // 0x80053814: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80053818: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x8005381C: nop

    // 0x80053820: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x80053824: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80053828: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8005382C: andi        $t6, $t9, 0x2
    ctx->r14 = ctx->r25 & 0X2;
    // 0x80053830: beq         $t6, $zero, L_80053864
    if (ctx->r14 == 0) {
        // 0x80053834: nop
    
            goto L_80053864;
    }
    // 0x80053834: nop

    // 0x80053838: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x8005383C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80053840: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
    // 0x80053844: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053848: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8005384C: lwc1        $f4, 0x10($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80053850: nop

    // 0x80053854: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x80053858: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x8005385C: jal         0x8004A0A0
    // 0x80053860: nop

    func_8004A0A0(rdram, ctx);
        goto after_15;
    // 0x80053860: nop

    after_15:
L_80053864:
    // 0x80053864: jal         0x8005C3A8
    // 0x80053868: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_16;
    // 0x80053868: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_16:
    // 0x8005386C: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80053870: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x80053874: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80053878: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8005387C: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x80053880: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80053884: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80053888: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x8005388C: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x80053890: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80053894: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x80053898: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x8005389C: b           L_800547F0
    // 0x800538A0: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
        goto L_800547F0;
    // 0x800538A0: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_800538A4:
    // 0x800538A4: beq         $s2, $at, L_800538B4
    if (ctx->r18 == ctx->r1) {
        // 0x800538A8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800538B4;
    }
    // 0x800538A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800538AC: bne         $s2, $at, L_80053B98
    if (ctx->r18 != ctx->r1) {
        // 0x800538B0: nop
    
            goto L_80053B98;
    }
    // 0x800538B0: nop

L_800538B4:
    // 0x800538B4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x800538B8: nop

    // 0x800538BC: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x800538C0: beq         $t7, $zero, L_800539B4
    if (ctx->r15 == 0) {
        // 0x800538C4: andi        $t7, $v0, 0x8
        ctx->r15 = ctx->r2 & 0X8;
            goto L_800539B4;
    }
    // 0x800538C4: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x800538C8: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x800538CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800538D0: blez        $t8, L_800547F4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800538D4: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x800538D4: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_800538D8:
    // 0x800538D8: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x800538DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x800538E0: jal         0x8004A0A0
    // 0x800538E4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_17;
    // 0x800538E4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_17:
    // 0x800538E8: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x800538EC: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x800538F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800538F4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800538F8: mul.d       $f10, $f30, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f30.d, ctx->f8.d);
    // 0x800538FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80053900: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053904: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80053908: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8005390C: nop

    // 0x80053910: div.d       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x80053914: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80053918: add.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f6.d + ctx->f0.d;
    // 0x8005391C: c.le.d      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.d <= ctx->f10.d;
    // 0x80053920: nop

    // 0x80053924: bc1f        L_80053940
    if (!c1cs) {
        // 0x80053928: nop
    
            goto L_80053940;
    }
    // 0x80053928: nop

    // 0x8005392C: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x80053930: sub.d       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = ctx->f8.d - ctx->f24.d;
    // 0x80053934: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x80053938: b           L_80053980
    // 0x8005393C: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
        goto L_80053980;
    // 0x8005393C: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
L_80053940:
    // 0x80053940: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053944: nop

    // 0x80053948: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8005394C: add.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f8.d + ctx->f0.d;
    // 0x80053950: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053954: c.lt.d      $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f4.d < ctx->f28.d;
    // 0x80053958: nop

    // 0x8005395C: bc1f        L_80053970
    if (!c1cs) {
        // 0x80053960: nop
    
            goto L_80053970;
    }
    // 0x80053960: nop

    // 0x80053964: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x80053968: b           L_80053978
    // 0x8005396C: add.d       $f14, $f10, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f10.d + ctx->f24.d;
        goto L_80053978;
    // 0x8005396C: add.d       $f14, $f10, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f10.d + ctx->f24.d;
L_80053970:
    // 0x80053970: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80053974: add.d       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f14.d = ctx->f4.d + ctx->f0.d;
L_80053978:
    // 0x80053978: cvt.s.d     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f8.fl = CVT_S_D(ctx->f14.d);
    // 0x8005397C: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
L_80053980:
    // 0x80053980: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053984: jal         0x8004A0A0
    // 0x80053988: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_18;
    // 0x80053988: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_18:
    // 0x8005398C: jal         0x80007AB0
    // 0x80053990: nop

    func_80007AB0(rdram, ctx);
        goto after_19;
    // 0x80053990: nop

    after_19:
    // 0x80053994: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x80053998: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005399C: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800539A0: bne         $at, $zero, L_800538D8
    if (ctx->r1 != 0) {
        // 0x800539A4: nop
    
            goto L_800538D8;
    }
    // 0x800539A4: nop

    // 0x800539A8: b           L_800547F4
    // 0x800539AC: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
        goto L_800547F4;
    // 0x800539AC: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x800539B0: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
L_800539B4:
    // 0x800539B4: beq         $t7, $zero, L_800539FC
    if (ctx->r15 == 0) {
        // 0x800539B8: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_800539FC;
    }
    // 0x800539B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800539BC: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x800539C0: jal         0x8004A0A0
    // 0x800539C4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_20;
    // 0x800539C4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_20:
    // 0x800539C8: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x800539CC: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x800539D0: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x800539D4: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x800539D8: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x800539DC: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x800539E0: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x800539E4: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800539E8: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x800539EC: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800539F0: nop

    // 0x800539F4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800539F8: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
L_800539FC:
    // 0x800539FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80053A00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053A04: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80053A08: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80053A0C: addiu       $a2, $sp, 0x118
    ctx->r6 = ADD32(ctx->r29, 0X118);
    // 0x80053A10: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x80053A14: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x80053A18: jal         0x80028850
    // 0x80053A1C: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    func_80028850(rdram, ctx);
        goto after_21;
    // 0x80053A1C: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x80053A20: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x80053A24: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80053A28: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80053A2C: bne         $t9, $zero, L_80053AA0
    if (ctx->r25 != 0) {
        // 0x80053A30: nop
    
            goto L_80053AA0;
    }
    // 0x80053A30: nop

    // 0x80053A34: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053A38: jal         0x8004A0A0
    // 0x80053A3C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_22;
    // 0x80053A3C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_22:
    // 0x80053A40: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80053A44: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80053A48: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80053A4C: mul.d       $f12, $f10, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f12.d = MUL_D(ctx->f10.d, ctx->f30.d);
    // 0x80053A50: c.le.d      $f24, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f24.d <= ctx->f12.d;
    // 0x80053A54: nop

    // 0x80053A58: bc1f        L_80053A70
    if (!c1cs) {
        // 0x80053A5C: nop
    
            goto L_80053A70;
    }
    // 0x80053A5C: nop

    // 0x80053A60: sub.d       $f6, $f12, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = ctx->f12.d - ctx->f24.d;
    // 0x80053A64: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x80053A68: b           L_80053A94
    // 0x80053A6C: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
        goto L_80053A94;
    // 0x80053A6C: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
L_80053A70:
    // 0x80053A70: c.lt.d      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.d < ctx->f28.d;
    // 0x80053A74: nop

    // 0x80053A78: bc1f        L_80053A88
    if (!c1cs) {
        // 0x80053A7C: nop
    
            goto L_80053A88;
    }
    // 0x80053A7C: nop

    // 0x80053A80: b           L_80053A8C
    // 0x80053A84: add.d       $f14, $f12, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f12.d + ctx->f24.d;
        goto L_80053A8C;
    // 0x80053A84: add.d       $f14, $f12, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f12.d + ctx->f24.d;
L_80053A88:
    // 0x80053A88: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
L_80053A8C:
    // 0x80053A8C: cvt.s.d     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f8.fl = CVT_S_D(ctx->f14.d);
    // 0x80053A90: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
L_80053A94:
    // 0x80053A94: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053A98: jal         0x8004A0A0
    // 0x80053A9C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_23;
    // 0x80053A9C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_23:
L_80053AA0:
    // 0x80053AA0: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053AA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80053AA8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80053AAC: jal         0x8004A0A0
    // 0x80053AB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_24;
    // 0x80053AB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_24:
    // 0x80053AB4: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x80053AB8: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80053ABC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80053AC0: nop

    // 0x80053AC4: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80053AC8: nop

    // 0x80053ACC: div.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80053AD0: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x80053AD4: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80053AD8: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053ADC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80053AE0: nop

    // 0x80053AE4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80053AE8: nop

    // 0x80053AEC: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80053AF0: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x80053AF4: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x80053AF8: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80053AFC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80053B00: nop

    // 0x80053B04: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80053B08: nop

    // 0x80053B0C: div.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80053B10: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x80053B14: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80053B18: nop

    // 0x80053B1C: blez        $t9, L_800547F4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80053B20: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x80053B20: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_80053B24:
    // 0x80053B24: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053B28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80053B2C: jal         0x8004A0A0
    // 0x80053B30: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_25;
    // 0x80053B30: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_25:
    // 0x80053B34: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053B38: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80053B3C: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80053B40: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80053B44: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80053B48: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x80053B4C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80053B50: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80053B54: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80053B58: swc1        $f10, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f10.u32l;
    // 0x80053B5C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80053B60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80053B64: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    // 0x80053B68: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053B6C: jal         0x8004A0A0
    // 0x80053B70: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_26;
    // 0x80053B70: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_26:
    // 0x80053B74: jal         0x80007AB0
    // 0x80053B78: nop

    func_80007AB0(rdram, ctx);
        goto after_27;
    // 0x80053B78: nop

    after_27:
    // 0x80053B7C: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x80053B80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80053B84: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80053B88: bne         $at, $zero, L_80053B24
    if (ctx->r1 != 0) {
        // 0x80053B8C: nop
    
            goto L_80053B24;
    }
    // 0x80053B8C: nop

    // 0x80053B90: b           L_800547F4
    // 0x80053B94: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
        goto L_800547F4;
    // 0x80053B94: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_80053B98:
    // 0x80053B98: beq         $s2, $fp, L_80053BB0
    if (ctx->r18 == ctx->r30) {
        // 0x80053B9C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80053BB0;
    }
    // 0x80053B9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80053BA0: beq         $s2, $at, L_80053BB0
    if (ctx->r18 == ctx->r1) {
        // 0x80053BA4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80053BB0;
    }
    // 0x80053BA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80053BA8: bne         $s2, $at, L_80054064
    if (ctx->r18 != ctx->r1) {
        // 0x80053BAC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80054064;
    }
    // 0x80053BAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_80053BB0:
    // 0x80053BB0: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053BB4: jal         0x8005A774
    // 0x80053BB8: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    func_8005A774(rdram, ctx);
        goto after_28;
    // 0x80053BB8: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    after_28:
    // 0x80053BBC: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80053BC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80053BC4: lwc1        $f10, 0xC($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80053BC8: nop

    // 0x80053BCC: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x80053BD0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80053BD4: nop

    // 0x80053BD8: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x80053BDC: beq         $t8, $zero, L_80053E34
    if (ctx->r24 == 0) {
        // 0x80053BE0: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_80053E34;
    }
    // 0x80053BE0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80053BE4: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053BE8: jal         0x8004A0A0
    // 0x80053BEC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_29;
    // 0x80053BEC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_29:
    // 0x80053BF0: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053BF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80053BF8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80053BFC: mul.d       $f12, $f8, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f12.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x80053C00: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80053C04: c.lt.d      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.d < ctx->f28.d;
    // 0x80053C08: nop

    // 0x80053C0C: bc1f        L_80053C1C
    if (!c1cs) {
        // 0x80053C10: nop
    
            goto L_80053C1C;
    }
    // 0x80053C10: nop

    // 0x80053C14: b           L_80053C20
    // 0x80053C18: neg.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f14.d = -ctx->f12.d;
        goto L_80053C20;
    // 0x80053C18: neg.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f14.d = -ctx->f12.d;
L_80053C1C:
    // 0x80053C1C: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
L_80053C20:
    // 0x80053C20: lwc1        $f7, 0x5F08($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5F08);
    // 0x80053C24: lwc1        $f6, 0x5F0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5F0C);
    // 0x80053C28: nop

    // 0x80053C2C: c.le.d      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.d <= ctx->f14.d;
    // 0x80053C30: nop

    // 0x80053C34: bc1f        L_80053C6C
    if (!c1cs) {
        // 0x80053C38: nop
    
            goto L_80053C6C;
    }
    // 0x80053C38: nop

    // 0x80053C3C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80053C40: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053C44: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80053C48: nop

    // 0x80053C4C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80053C50: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80053C54: nop

    // 0x80053C58: div.d       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f12.d, ctx->f8.d);
    // 0x80053C5C: neg.d       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = -ctx->f6.d;
    // 0x80053C60: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80053C64: b           L_80053C94
    // 0x80053C68: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
        goto L_80053C94;
    // 0x80053C68: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_80053C6C:
    // 0x80053C6C: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80053C70: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053C74: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80053C78: nop

    // 0x80053C7C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80053C80: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80053C84: nop

    // 0x80053C88: div.d       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f12.d, ctx->f10.d);
    // 0x80053C8C: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80053C90: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
L_80053C94:
    // 0x80053C94: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053C98: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053C9C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80053CA0: mul.d       $f12, $f30, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = MUL_D(ctx->f30.d, ctx->f10.d);
    // 0x80053CA4: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80053CA8: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053CAC: add.d       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = ctx->f8.d + ctx->f12.d;
    // 0x80053CB0: c.le.d      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.d <= ctx->f6.d;
    // 0x80053CB4: nop

    // 0x80053CB8: bc1f        L_80053CCC
    if (!c1cs) {
        // 0x80053CBC: nop
    
            goto L_80053CCC;
    }
    // 0x80053CBC: nop

    // 0x80053CC0: add.d       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f8.d + ctx->f12.d;
    // 0x80053CC4: b           L_80053D00
    // 0x80053CC8: sub.d       $f14, $f10, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f10.d - ctx->f24.d;
        goto L_80053D00;
    // 0x80053CC8: sub.d       $f14, $f10, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f10.d - ctx->f24.d;
L_80053CCC:
    // 0x80053CCC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80053CD0: add.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f6.d + ctx->f12.d;
    // 0x80053CD4: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053CD8: c.lt.d      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.d < ctx->f28.d;
    // 0x80053CDC: nop

    // 0x80053CE0: bc1f        L_80053CF4
    if (!c1cs) {
        // 0x80053CE4: nop
    
            goto L_80053CF4;
    }
    // 0x80053CE4: nop

    // 0x80053CE8: add.d       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f6.d + ctx->f12.d;
    // 0x80053CEC: b           L_80053CFC
    // 0x80053CF0: add.d       $f2, $f10, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f10.d + ctx->f24.d;
        goto L_80053CFC;
    // 0x80053CF0: add.d       $f2, $f10, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f10.d + ctx->f24.d;
L_80053CF4:
    // 0x80053CF4: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80053CF8: add.d       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f8.d + ctx->f12.d;
L_80053CFC:
    // 0x80053CFC: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
L_80053D00:
    // 0x80053D00: cvt.s.d     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f6.fl = CVT_S_D(ctx->f14.d);
    // 0x80053D04: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80053D08: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x80053D0C: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053D10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80053D14: swc1        $f10, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f10.u32l;
    // 0x80053D18: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053D1C: lwc1        $f4, 0x5F10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5F10);
    // 0x80053D20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053D24: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x80053D28: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80053D2C: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80053D30: nop

    // 0x80053D34: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x80053D38: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x80053D3C: nop

    // 0x80053D40: bne         $t8, $at, L_80053D58
    if (ctx->r24 != ctx->r1) {
        // 0x80053D44: lw          $t9, 0x104($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X104);
            goto L_80053D58;
    }
    // 0x80053D44: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80053D48: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053D4C: jal         0x8004A0A0
    // 0x80053D50: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_30;
    // 0x80053D50: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_30:
    // 0x80053D54: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_80053D58:
    // 0x80053D58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80053D5C: sw          $t9, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r25;
    // 0x80053D60: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x80053D64: nop

    // 0x80053D68: blez        $t6, L_80053E24
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80053D6C: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80053E24;
    }
    // 0x80053D6C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_80053D70:
    // 0x80053D70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053D74: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80053D78: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80053D7C: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x80053D80: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053D84: jal         0x8004A0A0
    // 0x80053D88: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_31;
    // 0x80053D88: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_31:
    // 0x80053D8C: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053D90: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053D94: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80053D98: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80053D9C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80053DA0: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80053DA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80053DA8: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80053DAC: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053DB0: bc1f        L_80053DC8
    if (!c1cs) {
        // 0x80053DB4: nop
    
            goto L_80053DC8;
    }
    // 0x80053DB4: nop

    // 0x80053DB8: add.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80053DBC: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x80053DC0: b           L_80053DF8
    // 0x80053DC4: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
        goto L_80053DF8;
    // 0x80053DC4: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
L_80053DC8:
    // 0x80053DC8: add.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80053DCC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80053DD0: nop

    // 0x80053DD4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80053DD8: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053DDC: bc1f        L_80053DF0
    if (!c1cs) {
        // 0x80053DE0: nop
    
            goto L_80053DF0;
    }
    // 0x80053DE0: nop

    // 0x80053DE4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80053DE8: b           L_80053DF4
    // 0x80053DEC: add.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f12.fl;
        goto L_80053DF4;
    // 0x80053DEC: add.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f12.fl;
L_80053DF0:
    // 0x80053DF0: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
L_80053DF4:
    // 0x80053DF4: swc1        $f2, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f2.u32l;
L_80053DF8:
    // 0x80053DF8: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053DFC: jal         0x8004A0A0
    // 0x80053E00: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_32;
    // 0x80053E00: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_32:
    // 0x80053E04: jal         0x80007AB0
    // 0x80053E08: nop

    func_80007AB0(rdram, ctx);
        goto after_33;
    // 0x80053E08: nop

    after_33:
    // 0x80053E0C: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80053E10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80053E14: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80053E18: bne         $at, $zero, L_80053D70
    if (ctx->r1 != 0) {
        // 0x80053E1C: nop
    
            goto L_80053D70;
    }
    // 0x80053E1C: nop

    // 0x80053E20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_80053E24:
    // 0x80053E24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80053E28: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053E2C: b           L_800547F0
    // 0x80053E30: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
        goto L_800547F0;
    // 0x80053E30: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
L_80053E34:
    // 0x80053E34: beq         $t7, $zero, L_80053E64
    if (ctx->r15 == 0) {
        // 0x80053E38: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80053E64;
    }
    // 0x80053E38: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80053E3C: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053E40: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80053E44: jal         0x8004A0A0
    // 0x80053E48: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_34;
    // 0x80053E48: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_34:
    // 0x80053E4C: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053E50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053E54: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053E58: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x80053E5C: b           L_80053E74
    // 0x80053E60: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
        goto L_80053E74;
    // 0x80053E60: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
L_80053E64:
    // 0x80053E64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80053E68: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80053E6C: nop

    // 0x80053E70: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
L_80053E74:
    // 0x80053E74: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x80053E78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80053E7C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80053E80: beq         $t7, $zero, L_80053EC8
    if (ctx->r15 == 0) {
        // 0x80053E84: nop
    
            goto L_80053EC8;
    }
    // 0x80053E84: nop

    // 0x80053E88: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053E8C: jal         0x8004A0A0
    // 0x80053E90: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_35;
    // 0x80053E90: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_35:
    // 0x80053E94: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80053E98: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80053E9C: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053EA0: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80053EA4: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x80053EA8: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80053EAC: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80053EB0: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80053EB4: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
    // 0x80053EB8: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80053EBC: nop

    // 0x80053EC0: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80053EC4: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
L_80053EC8:
    // 0x80053EC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053ECC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80053ED0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80053ED4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80053ED8: addiu       $a2, $sp, 0x118
    ctx->r6 = ADD32(ctx->r29, 0X118);
    // 0x80053EDC: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    // 0x80053EE0: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x80053EE4: jal         0x80028850
    // 0x80053EE8: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    func_80028850(rdram, ctx);
        goto after_36;
    // 0x80053EE8: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    after_36:
    // 0x80053EEC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80053EF0: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053EF4: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80053EF8: mul.d       $f12, $f8, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f12.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x80053EFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80053F00: c.le.d      $f24, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f24.d <= ctx->f12.d;
    // 0x80053F04: nop

    // 0x80053F08: bc1f        L_80053F18
    if (!c1cs) {
        // 0x80053F0C: nop
    
            goto L_80053F18;
    }
    // 0x80053F0C: nop

    // 0x80053F10: b           L_80053F3C
    // 0x80053F14: sub.d       $f14, $f12, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f12.d - ctx->f24.d;
        goto L_80053F3C;
    // 0x80053F14: sub.d       $f14, $f12, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f12.d - ctx->f24.d;
L_80053F18:
    // 0x80053F18: c.lt.d      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.d < ctx->f28.d;
    // 0x80053F1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80053F20: bc1f        L_80053F34
    if (!c1cs) {
        // 0x80053F24: nop
    
            goto L_80053F34;
    }
    // 0x80053F24: nop

    // 0x80053F28: add.d       $f2, $f12, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f12.d + ctx->f24.d;
    // 0x80053F2C: b           L_80053F38
    // 0x80053F30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80053F38;
    // 0x80053F30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80053F34:
    // 0x80053F34: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_80053F38:
    // 0x80053F38: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
L_80053F3C:
    // 0x80053F3C: cvt.s.d     $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f22.fl = CVT_S_D(ctx->f14.d);
    // 0x80053F40: swc1        $f22, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f22.u32l;
    // 0x80053F44: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80053F48: lwc1        $f2, 0x14($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80053F4C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80053F50: nop

    // 0x80053F54: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80053F58: jal         0x8007A500
    // 0x80053F5C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_37;
    // 0x80053F5C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_37:
    // 0x80053F60: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80053F64: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053F68: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80053F6C: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80053F70: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80053F74: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    // 0x80053F78: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80053F7C: div.s       $f20, $f0, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80053F80: blez        $t7, L_80053FE8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80053F84: div.s       $f26, $f8, $f2
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
            goto L_80053FE8;
    }
    // 0x80053F84: div.s       $f26, $f8, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80053F88: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
L_80053F8C:
    // 0x80053F8C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80053F90: lwc1        $f4, 0x30($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X30);
    // 0x80053F94: nop

    // 0x80053F98: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x80053F9C: swc1        $f6, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f6.u32l;
    // 0x80053FA0: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80053FA4: nop

    // 0x80053FA8: swc1        $f22, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f22.u32l;
    // 0x80053FAC: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80053FB0: beq         $s2, $at, L_80053FCC
    if (ctx->r18 == ctx->r1) {
        // 0x80053FB4: swc1        $f20, 0xC($t6)
        MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
            goto L_80053FCC;
    }
    // 0x80053FB4: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x80053FB8: beq         $s2, $fp, L_80053FCC
    if (ctx->r18 == ctx->r30) {
        // 0x80053FBC: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_80053FCC;
    }
    // 0x80053FBC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80053FC0: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053FC4: jal         0x8004A0A0
    // 0x80053FC8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_38;
    // 0x80053FC8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_38:
L_80053FCC:
    // 0x80053FCC: jal         0x80007AB0
    // 0x80053FD0: nop

    func_80007AB0(rdram, ctx);
        goto after_39;
    // 0x80053FD0: nop

    after_39:
    // 0x80053FD4: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80053FD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80053FDC: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80053FE0: bne         $at, $zero, L_80053F8C
    if (ctx->r1 != 0) {
        // 0x80053FE4: lw          $t8, 0x104($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X104);
            goto L_80053F8C;
    }
    // 0x80053FE4: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
L_80053FE8:
    // 0x80053FE8: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80053FEC: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80053FF0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80053FF4: swc1        $f10, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f10.u32l;
    // 0x80053FF8: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80053FFC: jal         0x8004A0A0
    // 0x80054000: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_40;
    // 0x80054000: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_40:
    // 0x80054004: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80054008: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005400C: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x80054010: nop

    // 0x80054014: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x80054018: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8005401C: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80054020: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80054024: beq         $t7, $zero, L_800547F4
    if (ctx->r15 == 0) {
        // 0x80054028: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x80054028: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x8005402C: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x80054030: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80054034: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
    // 0x80054038: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x8005403C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80054040: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80054044: nop

    // 0x80054048: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x8005404C: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80054050: jal         0x8004A0A0
    // 0x80054054: nop

    func_8004A0A0(rdram, ctx);
        goto after_41;
    // 0x80054054: nop

    after_41:
    // 0x80054058: b           L_800547F4
    // 0x8005405C: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
        goto L_800547F4;
    // 0x8005405C: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x80054060: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_80054064:
    // 0x80054064: bne         $s2, $at, L_800547F4
    if (ctx->r18 != ctx->r1) {
        // 0x80054068: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x80054068: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x8005406C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80054070: nop

    // 0x80054074: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80054078: beq         $t6, $zero, L_8005422C
    if (ctx->r14 == 0) {
        // 0x8005407C: andi        $t6, $v0, 0x8
        ctx->r14 = ctx->r2 & 0X8;
            goto L_8005422C;
    }
    // 0x8005407C: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x80054080: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80054084: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80054088: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005408C: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x80054090: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x80054094: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x80054098: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8005409C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800540A0: blez        $v0, L_800547F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800540A4: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x800540A4: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_800540A8:
    // 0x800540A8: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x800540AC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800540B0: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800540B4: mul.d       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f30.d);
    // 0x800540B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800540BC: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x800540C0: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800540C4: nop

    // 0x800540C8: div.d       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x800540CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800540D0: c.le.d      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.d <= ctx->f0.d;
    // 0x800540D4: nop

    // 0x800540D8: bc1f        L_800540E8
    if (!c1cs) {
        // 0x800540DC: nop
    
            goto L_800540E8;
    }
    // 0x800540DC: nop

    // 0x800540E0: b           L_80054108
    // 0x800540E4: sub.d       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f0.d - ctx->f24.d;
        goto L_80054108;
    // 0x800540E4: sub.d       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f0.d - ctx->f24.d;
L_800540E8:
    // 0x800540E8: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x800540EC: nop

    // 0x800540F0: bc1f        L_80054100
    if (!c1cs) {
        // 0x800540F4: nop
    
            goto L_80054100;
    }
    // 0x800540F4: nop

    // 0x800540F8: b           L_80054104
    // 0x800540FC: add.d       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f0.d + ctx->f24.d;
        goto L_80054104;
    // 0x800540FC: add.d       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f0.d + ctx->f24.d;
L_80054100:
    // 0x80054100: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_80054104:
    // 0x80054104: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
L_80054108:
    // 0x80054108: add.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f6.d + ctx->f14.d;
    // 0x8005410C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80054110: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
    // 0x80054114: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80054118: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8005411C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80054120: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80054124: mul.d       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f30.d);
    // 0x80054128: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8005412C: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80054130: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80054134: nop

    // 0x80054138: div.d       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x8005413C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80054140: c.le.d      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.d <= ctx->f0.d;
    // 0x80054144: nop

    // 0x80054148: bc1f        L_80054158
    if (!c1cs) {
        // 0x8005414C: nop
    
            goto L_80054158;
    }
    // 0x8005414C: nop

    // 0x80054150: b           L_80054178
    // 0x80054154: sub.d       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f0.d - ctx->f24.d;
        goto L_80054178;
    // 0x80054154: sub.d       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f0.d - ctx->f24.d;
L_80054158:
    // 0x80054158: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x8005415C: nop

    // 0x80054160: bc1f        L_80054170
    if (!c1cs) {
        // 0x80054164: nop
    
            goto L_80054170;
    }
    // 0x80054164: nop

    // 0x80054168: b           L_80054174
    // 0x8005416C: add.d       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f0.d + ctx->f24.d;
        goto L_80054174;
    // 0x8005416C: add.d       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f0.d + ctx->f24.d;
L_80054170:
    // 0x80054170: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_80054174:
    // 0x80054174: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
L_80054178:
    // 0x80054178: add.d       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f4.d + ctx->f14.d;
    // 0x8005417C: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80054180: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x80054184: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x80054188: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8005418C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80054190: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80054194: mul.d       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f30.d);
    // 0x80054198: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005419C: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x800541A0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x800541A4: nop

    // 0x800541A8: div.d       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = DIV_D(ctx->f8.d, ctx->f4.d);
    // 0x800541AC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800541B0: c.le.d      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.d <= ctx->f0.d;
    // 0x800541B4: nop

    // 0x800541B8: bc1f        L_800541C8
    if (!c1cs) {
        // 0x800541BC: nop
    
            goto L_800541C8;
    }
    // 0x800541BC: nop

    // 0x800541C0: b           L_800541E8
    // 0x800541C4: sub.d       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f0.d - ctx->f24.d;
        goto L_800541E8;
    // 0x800541C4: sub.d       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f14.d = ctx->f0.d - ctx->f24.d;
L_800541C8:
    // 0x800541C8: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x800541CC: nop

    // 0x800541D0: bc1f        L_800541E0
    if (!c1cs) {
        // 0x800541D4: nop
    
            goto L_800541E0;
    }
    // 0x800541D4: nop

    // 0x800541D8: b           L_800541E4
    // 0x800541DC: add.d       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f0.d + ctx->f24.d;
        goto L_800541E4;
    // 0x800541DC: add.d       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = ctx->f0.d + ctx->f24.d;
L_800541E0:
    // 0x800541E0: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_800541E4:
    // 0x800541E4: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
L_800541E8:
    // 0x800541E8: add.d       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f10.d + ctx->f14.d;
    // 0x800541EC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800541F0: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x800541F4: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    // 0x800541F8: lw          $t9, 0x10($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X10);
    // 0x800541FC: jal         0x8005CF20
    // 0x80054200: and         $a0, $t9, $s7
    ctx->r4 = ctx->r25 & ctx->r23;
    func_8005CF20(rdram, ctx);
        goto after_42;
    // 0x80054200: and         $a0, $t9, $s7
    ctx->r4 = ctx->r25 & ctx->r23;
    after_42:
    // 0x80054204: jal         0x80007AB0
    // 0x80054208: nop

    func_80007AB0(rdram, ctx);
        goto after_43;
    // 0x80054208: nop

    after_43:
    // 0x8005420C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80054210: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80054214: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80054218: bne         $at, $zero, L_800540A8
    if (ctx->r1 != 0) {
        // 0x8005421C: nop
    
            goto L_800540A8;
    }
    // 0x8005421C: nop

    // 0x80054220: b           L_800547F4
    // 0x80054224: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
        goto L_800547F4;
    // 0x80054224: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x80054228: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
L_8005422C:
    // 0x8005422C: beq         $t6, $zero, L_80054294
    if (ctx->r14 == 0) {
        // 0x80054230: nop
    
            goto L_80054294;
    }
    // 0x80054230: nop

    // 0x80054234: multu       $v1, $s6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054238: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x8005423C: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80054240: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80054244: mflo        $v0
    ctx->r2 = lo;
    // 0x80054248: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8005424C: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80054250: nop

    // 0x80054254: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80054258: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x8005425C: lw          $t9, 0x24($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X24);
    // 0x80054260: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80054264: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x80054268: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8005426C: nop

    // 0x80054270: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80054274: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    // 0x80054278: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x8005427C: nop

    // 0x80054280: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80054284: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80054288: nop

    // 0x8005428C: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80054290: swc1        $f6, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f6.u32l;
L_80054294:
    // 0x80054294: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80054298: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8005429C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800542A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800542A4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800542A8: nop

    // 0x800542AC: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800542B0: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x800542B4: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x800542B8: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x800542BC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800542C0: nop

    // 0x800542C4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800542C8: nop

    // 0x800542CC: div.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800542D0: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x800542D4: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x800542D8: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x800542DC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800542E0: nop

    // 0x800542E4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800542E8: nop

    // 0x800542EC: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800542F0: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x800542F4: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x800542F8: nop

    // 0x800542FC: blez        $t8, L_800547F4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80054300: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x80054300: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_80054304:
    // 0x80054304: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80054308: lw          $t9, 0x10($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X10);
    // 0x8005430C: multu       $t7, $s6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054310: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80054314: and         $a0, $t9, $s7
    ctx->r4 = ctx->r25 & ctx->r23;
    // 0x80054318: mflo        $t8
    ctx->r24 = lo;
    // 0x8005431C: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x80054320: jal         0x8005CFA4
    // 0x80054324: nop

    func_8005CFA4(rdram, ctx);
        goto after_44;
    // 0x80054324: nop

    after_44:
    // 0x80054328: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8005432C: lw          $t9, 0x24($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X24);
    // 0x80054330: multu       $t7, $s6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054334: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80054338: mflo        $t6
    ctx->r14 = lo;
    // 0x8005433C: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x80054340: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80054344: nop

    // 0x80054348: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005434C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80054350: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80054354: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80054358: multu       $t7, $s6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005435C: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80054360: mflo        $t9
    ctx->r25 = lo;
    // 0x80054364: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80054368: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005436C: nop

    // 0x80054370: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80054374: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80054378: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8005437C: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80054380: multu       $t7, $s6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054384: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80054388: mflo        $t8
    ctx->r24 = lo;
    // 0x8005438C: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x80054390: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80054394: nop

    // 0x80054398: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005439C: jal         0x80007AB0
    // 0x800543A0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    func_80007AB0(rdram, ctx);
        goto after_45;
    // 0x800543A0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    after_45:
    // 0x800543A4: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x800543A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800543AC: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800543B0: bne         $at, $zero, L_80054304
    if (ctx->r1 != 0) {
        // 0x800543B4: nop
    
            goto L_80054304;
    }
    // 0x800543B4: nop

    // 0x800543B8: b           L_800547F4
    // 0x800543BC: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
        goto L_800547F4;
    // 0x800543BC: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_800543C0:
    // 0x800543C0: bne         $v0, $at, L_8005468C
    if (ctx->r2 != ctx->r1) {
        // 0x800543C4: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_8005468C;
    }
    // 0x800543C4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x800543C8: lw          $s2, 0x14($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X14);
    // 0x800543CC: jal         0x8002F22C
    // 0x800543D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F22C(rdram, ctx);
        goto after_46;
    // 0x800543D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_46:
    // 0x800543D4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800543D8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800543DC: andi        $t6, $t7, 0x2
    ctx->r14 = ctx->r15 & 0X2;
    // 0x800543E0: beq         $t6, $zero, L_80054508
    if (ctx->r14 == 0) {
        // 0x800543E4: nop
    
            goto L_80054508;
    }
    // 0x800543E4: nop

    // 0x800543E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800543EC: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x800543F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800543F4: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x800543F8: nop

    // 0x800543FC: bc1f        L_8005443C
    if (!c1cs) {
        // 0x80054400: nop
    
            goto L_8005443C;
    }
    // 0x80054400: nop

    // 0x80054404: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80054408: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x8005440C: nop

    // 0x80054410: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80054414: nop

    // 0x80054418: bc1f        L_8005443C
    if (!c1cs) {
        // 0x8005441C: nop
    
            goto L_8005443C;
    }
    // 0x8005441C: nop

    // 0x80054420: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80054424: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80054428: nop

    // 0x8005442C: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x80054430: nop

    // 0x80054434: bc1t        L_80054478
    if (c1cs) {
        // 0x80054438: nop
    
            goto L_80054478;
    }
    // 0x80054438: nop

L_8005443C:
    // 0x8005443C: jal         0x80009DD8
    // 0x80054440: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    func_80009DD8(rdram, ctx);
        goto after_47;
    // 0x80054440: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    after_47:
    // 0x80054444: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80054448: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8005444C: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80054450: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80054454: swc1        $f10, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f10.u32l;
    // 0x80054458: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8005445C: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80054460: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80054464: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x80054468: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8005446C: nop

    // 0x80054470: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80054474: swc1        $f6, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f6.u32l;
L_80054478:
    // 0x80054478: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8005447C: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
    // 0x80054480: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80054484: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80054488: nop

    // 0x8005448C: bc1f        L_800544CC
    if (!c1cs) {
        // 0x80054490: nop
    
            goto L_800544CC;
    }
    // 0x80054490: nop

    // 0x80054494: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80054498: lwc1        $f6, 0x18($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X18);
    // 0x8005449C: nop

    // 0x800544A0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800544A4: nop

    // 0x800544A8: bc1f        L_800544CC
    if (!c1cs) {
        // 0x800544AC: nop
    
            goto L_800544CC;
    }
    // 0x800544AC: nop

    // 0x800544B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800544B4: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x800544B8: nop

    // 0x800544BC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800544C0: nop

    // 0x800544C4: bc1t        L_80054508
    if (c1cs) {
        // 0x800544C8: nop
    
            goto L_80054508;
    }
    // 0x800544C8: nop

L_800544CC:
    // 0x800544CC: jal         0x80009DB4
    // 0x800544D0: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    func_80009DB4(rdram, ctx);
        goto after_48;
    // 0x800544D0: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    after_48:
    // 0x800544D4: lwc1        $f4, 0x14($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14);
    // 0x800544D8: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800544DC: lwc1        $f10, 0x18($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X18);
    // 0x800544E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800544E4: swc1        $f8, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f8.u32l;
    // 0x800544E8: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x800544EC: lwc1        $f8, 0x1C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x800544F0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800544F4: swc1        $f6, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f6.u32l;
    // 0x800544F8: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x800544FC: nop

    // 0x80054500: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80054504: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_80054508:
    // 0x80054508: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8005450C: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80054510: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80054514: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80054518: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005451C: nop

    // 0x80054520: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80054524: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80054528: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x8005452C: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80054530: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80054534: nop

    // 0x80054538: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005453C: nop

    // 0x80054540: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80054544: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x80054548: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8005454C: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80054550: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80054554: nop

    // 0x80054558: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005455C: nop

    // 0x80054560: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80054564: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x80054568: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x8005456C: lwc1        $f8, 0x14($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X14);
    // 0x80054570: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80054574: nop

    // 0x80054578: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005457C: nop

    // 0x80054580: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80054584: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x80054588: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8005458C: lwc1        $f6, 0x18($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X18);
    // 0x80054590: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80054594: nop

    // 0x80054598: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005459C: nop

    // 0x800545A0: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800545A4: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x800545A8: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x800545AC: lwc1        $f8, 0x1C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x800545B0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800545B4: nop

    // 0x800545B8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800545BC: nop

    // 0x800545C0: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800545C4: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x800545C8: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x800545CC: nop

    // 0x800545D0: blez        $t7, L_800547F0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800545D4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800547F0;
    }
    // 0x800545D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800545D8:
    // 0x800545D8: jal         0x80009DD8
    // 0x800545DC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80009DD8(rdram, ctx);
        goto after_49;
    // 0x800545DC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_49:
    // 0x800545E0: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x800545E4: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x800545E8: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800545EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800545F0: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x800545F4: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
    // 0x800545F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800545FC: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80054600: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80054604: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x80054608: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005460C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80054610: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x80054614: jal         0x80009FD8
    // 0x80054618: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80009FD8(rdram, ctx);
        goto after_50;
    // 0x80054618: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_50:
    // 0x8005461C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80054620: jal         0x80009DB4
    // 0x80054624: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80009DB4(rdram, ctx);
        goto after_51;
    // 0x80054624: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_51:
    // 0x80054628: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8005462C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80054630: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80054634: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80054638: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x8005463C: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x80054640: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80054644: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80054648: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8005464C: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x80054650: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80054654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80054658: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x8005465C: jal         0x80009F20
    // 0x80054660: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80009F20(rdram, ctx);
        goto after_52;
    // 0x80054660: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_52:
    // 0x80054664: jal         0x80007AB0
    // 0x80054668: nop

    func_80007AB0(rdram, ctx);
        goto after_53;
    // 0x80054668: nop

    after_53:
    // 0x8005466C: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x80054670: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80054674: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80054678: bne         $at, $zero, L_800545D8
    if (ctx->r1 != 0) {
        // 0x8005467C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800545D8;
    }
    // 0x8005467C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80054680: b           L_800547F4
    // 0x80054684: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
        goto L_800547F4;
    // 0x80054684: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x80054688: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_8005468C:
    // 0x8005468C: bne         $v0, $at, L_800547F4
    if (ctx->r2 != ctx->r1) {
        // 0x80054690: addiu       $a0, $s3, 0xC
        ctx->r4 = ADD32(ctx->r19, 0XC);
            goto L_800547F4;
    }
    // 0x80054690: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
    // 0x80054694: lw          $s1, 0x14($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X14);
    // 0x80054698: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005469C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x800546A0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800546A4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x800546A8: subu        $t8, $a0, $v0
    ctx->r24 = SUB32(ctx->r4, ctx->r2);
    // 0x800546AC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800546B0: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x800546B4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800546B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800546BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800546C0: nop

    // 0x800546C4: div.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800546C8: blez        $v1, L_80054760
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800546CC: cvt.s.w     $f20, $f10
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80054760;
    }
    // 0x800546CC: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800546D0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_800546D4:
    // 0x800546D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800546D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800546DC: lwc1        $f4, 0x5F14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5F14);
    // 0x800546E0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800546E4: mul.s       $f8, $f20, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x800546E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800546EC: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x800546F0: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x800546F4: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800546F8: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x800546FC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80054700: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80054704: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80054708: nop

    // 0x8005470C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80054710: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80054714: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80054718: nop

    // 0x8005471C: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80054720: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80054724: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80054728: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8005472C: sw          $t9, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r25;
    // 0x80054730: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x80054734: jal         0x8004A0A0
    // 0x80054738: nop

    func_8004A0A0(rdram, ctx);
        goto after_54;
    // 0x80054738: nop

    after_54:
    // 0x8005473C: jal         0x80007AB0
    // 0x80054740: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    func_80007AB0(rdram, ctx);
        goto after_55;
    // 0x80054740: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_55:
    // 0x80054744: lw          $t6, 0x10($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X10);
    // 0x80054748: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005474C: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80054750: bne         $at, $zero, L_800546D4
    if (ctx->r1 != 0) {
        // 0x80054754: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_800546D4;
    }
    // 0x80054754: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80054758: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x8005475C: nop

L_80054760:
    // 0x80054760: bne         $a0, $zero, L_80054780
    if (ctx->r4 != 0) {
        // 0x80054764: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80054780;
    }
    // 0x80054764: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80054768: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8005476C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80054770: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80054774: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
    // 0x80054778: b           L_800547E4
    // 0x8005477C: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
        goto L_800547E4;
    // 0x8005477C: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
L_80054780:
    // 0x80054780: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80054784: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80054788: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005478C: swc1        $f10, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f10.u32l;
    // 0x80054790: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x80054794: lwc1        $f8, 0x5F18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5F18);
    // 0x80054798: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8005479C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800547A0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800547A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800547A8: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x800547AC: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800547B0: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x800547B4: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800547B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800547BC: nop

    // 0x800547C0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800547C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800547C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800547CC: nop

    // 0x800547D0: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800547D4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800547D8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800547DC: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x800547E0: sw          $t9, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r25;
L_800547E4:
    // 0x800547E4: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x800547E8: jal         0x8004A0A0
    // 0x800547EC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_56;
    // 0x800547EC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_56:
L_800547F0:
    // 0x800547F0: addiu       $a0, $s3, 0xC
    ctx->r4 = ADD32(ctx->r19, 0XC);
L_800547F4:
    // 0x800547F4: jal         0x80053204
    // 0x800547F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80053204(rdram, ctx);
        goto after_57;
    // 0x800547F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_57:
    // 0x800547FC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80054800: lw          $t8, 0x10($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X10);
    // 0x80054804: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x80054808: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8005480C: beq         $t8, $t6, L_80054838
    if (ctx->r24 == ctx->r14) {
        // 0x80054810: nop
    
            goto L_80054838;
    }
    // 0x80054810: nop

    // 0x80054814: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
    // 0x80054818: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8005481C:
    // 0x8005481C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80054820: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80054824: nop

    // 0x80054828: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8005482C: nop

    // 0x80054830: bne         $a0, $t9, L_8005481C
    if (ctx->r4 != ctx->r25) {
        // 0x80054834: nop
    
            goto L_8005481C;
    }
    // 0x80054834: nop

L_80054838:
    // 0x80054838: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8005483C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054840: beq         $v0, $zero, L_80054878
    if (ctx->r2 == 0) {
        // 0x80054844: nop
    
            goto L_80054878;
    }
    // 0x80054844: nop

    // 0x80054848: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8005484C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054850: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80054854: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x80054858: nop

    // 0x8005485C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80054860: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x80054864: jal         0x80006DC0
    // 0x80054868: sw          $t6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r14;
    func_80006DC0(rdram, ctx);
        goto after_58;
    // 0x80054868: sw          $t6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r14;
    after_58:
    // 0x8005486C: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x80054870: b           L_80054888
    // 0x80054874: nop

        goto L_80054888;
    // 0x80054874: nop

L_80054878:
    // 0x80054878: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8005487C: jal         0x80006DC0
    // 0x80054880: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    func_80006DC0(rdram, ctx);
        goto after_59;
    // 0x80054880: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_59:
    // 0x80054884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80054888:
    // 0x80054888: bne         $v0, $zero, L_80053330
    if (ctx->r2 != 0) {
        // 0x8005488C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80053330;
    }
    // 0x8005488C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80054890: jal         0x80007AE0
    // 0x80054894: nop

    func_80007AE0(rdram, ctx);
        goto after_60;
    // 0x80054894: nop

    after_60:
    // 0x80054898: b           L_80053334
    // 0x8005489C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
        goto L_80053334;
    // 0x8005489C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x800548A0: nop

    // 0x800548A4: nop

    // 0x800548A8: nop

    // 0x800548AC: nop

    // 0x800548B0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800548B4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800548B8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800548BC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800548C0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800548C4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800548C8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800548CC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800548D0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800548D4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800548D8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800548DC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800548E0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800548E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800548E8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800548EC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800548F0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800548F4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800548F8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800548FC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80054900: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80054904: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80054908: jr          $ra
    // 0x8005490C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    // 0x8005490C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_80054910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054910: jr          $ra
    // 0x80054914: nop

    return;
    // 0x80054914: nop

;}
RECOMP_FUNC void func_80054918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005491C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80054920: jal         0x80053204
    // 0x80054924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80053204(rdram, ctx);
        goto after_0;
    // 0x80054924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80054928: beq         $v0, $zero, L_80054960
    if (ctx->r2 == 0) {
        // 0x8005492C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80054960;
    }
    // 0x8005492C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80054930: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80054934: nop

L_80054938:
    // 0x80054938: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x8005493C: nop

    // 0x80054940: bne         $v0, $t6, L_80054950
    if (ctx->r2 != ctx->r14) {
        // 0x80054944: nop
    
            goto L_80054950;
    }
    // 0x80054944: nop

    // 0x80054948: b           L_80054964
    // 0x8005494C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80054964;
    // 0x8005494C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80054950:
    // 0x80054950: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80054954: nop

    // 0x80054958: bne         $v1, $zero, L_80054938
    if (ctx->r3 != 0) {
        // 0x8005495C: nop
    
            goto L_80054938;
    }
    // 0x8005495C: nop

L_80054960:
    // 0x80054960: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80054964:
    // 0x80054964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80054968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005496C: jr          $ra
    // 0x80054970: nop

    return;
    // 0x80054970: nop

    // 0x80054974: jr          $ra
    // 0x80054978: nop

    return;
    // 0x80054978: nop

    // 0x8005497C: jr          $ra
    // 0x80054980: nop

    return;
    // 0x80054980: nop

;}
RECOMP_FUNC void func_80054984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005498C: jal         0x80054918
    // 0x80054990: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80054918(rdram, ctx);
        goto after_0;
    // 0x80054990: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80054994: beq         $v0, $zero, L_80054A2C
    if (ctx->r2 == 0) {
        // 0x80054998: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80054A2C;
    }
    // 0x80054998: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8005499C: jal         0x80053204
    // 0x800549A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80053204(rdram, ctx);
        goto after_1;
    // 0x800549A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800549A4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800549A8: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x800549AC: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x800549B0: nop

    // 0x800549B4: beq         $t6, $t7, L_800549E0
    if (ctx->r14 == ctx->r15) {
        // 0x800549B8: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_800549E0;
    }
    // 0x800549B8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800549BC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x800549C0: nop

L_800549C4:
    // 0x800549C4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800549C8: nop

    // 0x800549CC: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x800549D0: nop

    // 0x800549D4: bne         $v0, $t8, L_800549C4
    if (ctx->r2 != ctx->r24) {
        // 0x800549D8: nop
    
            goto L_800549C4;
    }
    // 0x800549D8: nop

    // 0x800549DC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_800549E0:
    // 0x800549E0: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x800549E4: nop

    // 0x800549E8: beq         $v1, $zero, L_80054A04
    if (ctx->r3 == 0) {
        // 0x800549EC: nop
    
            goto L_80054A04;
    }
    // 0x800549EC: nop

L_800549F0:
    // 0x800549F0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800549F4: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x800549F8: nop

    // 0x800549FC: bne         $v1, $zero, L_800549F0
    if (ctx->r3 != 0) {
        // 0x80054A00: nop
    
            goto L_800549F0;
    }
    // 0x80054A00: nop

L_80054A04:
    // 0x80054A04: jal         0x80006DFC
    // 0x80054A08: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80006DFC(rdram, ctx);
        goto after_2;
    // 0x80054A08: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_2:
    // 0x80054A0C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80054A10: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80054A14: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x80054A18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80054A1C: jal         0x80076BF8
    // 0x80054A20: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80054A20: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_3:
    // 0x80054A24: b           L_80054AA4
    // 0x80054A28: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
        goto L_80054AA4;
    // 0x80054A28: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80054A2C:
    // 0x80054A2C: jal         0x80053204
    // 0x80054A30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80053204(rdram, ctx);
        goto after_4;
    // 0x80054A30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80054A34: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x80054A38: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80054A3C: beq         $s0, $zero, L_80054A58
    if (ctx->r16 == 0) {
        // 0x80054A40: nop
    
            goto L_80054A58;
    }
    // 0x80054A40: nop

L_80054A44:
    // 0x80054A44: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80054A48: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80054A4C: nop

    // 0x80054A50: bne         $s0, $zero, L_80054A44
    if (ctx->r16 != 0) {
        // 0x80054A54: nop
    
            goto L_80054A44;
    }
    // 0x80054A54: nop

L_80054A58:
    // 0x80054A58: jal         0x80006DFC
    // 0x80054A5C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80006DFC(rdram, ctx);
        goto after_5;
    // 0x80054A5C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x80054A60: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80054A64: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80054A68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80054A6C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80054A70: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80054A74: addiu       $a0, $a0, 0x3294
    ctx->r4 = ADD32(ctx->r4, 0X3294);
    // 0x80054A78: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x80054A7C: addiu       $a2, $zero, 0x3000
    ctx->r6 = ADD32(0, 0X3000);
    // 0x80054A80: jal         0x80007C3C
    // 0x80054A84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_6;
    // 0x80054A84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x80054A88: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80054A8C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x80054A90: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80054A94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80054A98: jal         0x80076BF8
    // 0x80054A9C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80054A9C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_7:
    // 0x80054AA0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80054AA4:
    // 0x80054AA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80054AA8: bne         $v0, $at, L_80054ACC
    if (ctx->r2 != ctx->r1) {
        // 0x80054AAC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80054ACC;
    }
    // 0x80054AAC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80054AB0: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x80054AB4: nop

    // 0x80054AB8: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x80054ABC: nop

    // 0x80054AC0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80054AC4: bne         $t7, $zero, L_80054B14
    if (ctx->r15 != 0) {
        // 0x80054AC8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80054B14;
    }
    // 0x80054AC8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_80054ACC:
    // 0x80054ACC: bne         $v0, $at, L_80054AF0
    if (ctx->r2 != ctx->r1) {
        // 0x80054AD0: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_80054AF0;
    }
    // 0x80054AD0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80054AD4: lw          $t8, 0x8($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X8);
    // 0x80054AD8: nop

    // 0x80054ADC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80054AE0: nop

    // 0x80054AE4: andi        $t6, $t9, 0x1
    ctx->r14 = ctx->r25 & 0X1;
    // 0x80054AE8: bne         $t6, $zero, L_80054B14
    if (ctx->r14 != 0) {
        // 0x80054AEC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_80054B14;
    }
    // 0x80054AEC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_80054AF0:
    // 0x80054AF0: bne         $v0, $at, L_80054B40
    if (ctx->r2 != ctx->r1) {
        // 0x80054AF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80054B40;
    }
    // 0x80054AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80054AF8: lw          $t7, 0x8($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X8);
    // 0x80054AFC: nop

    // 0x80054B00: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80054B04: nop

    // 0x80054B08: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80054B0C: beq         $t9, $zero, L_80054B40
    if (ctx->r25 == 0) {
        // 0x80054B10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80054B40;
    }
    // 0x80054B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80054B14:
    // 0x80054B14: jal         0x80054918
    // 0x80054B18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80054918(rdram, ctx);
        goto after_8;
    // 0x80054B18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_8:
    // 0x80054B1C: beq         $v0, $zero, L_80054B40
    if (ctx->r2 == 0) {
        // 0x80054B20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80054B40;
    }
    // 0x80054B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80054B24:
    // 0x80054B24: jal         0x80007AB0
    // 0x80054B28: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80054B28: nop

    after_9:
    // 0x80054B2C: jal         0x80054918
    // 0x80054B30: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80054918(rdram, ctx);
        goto after_10;
    // 0x80054B30: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
    // 0x80054B34: bne         $v0, $zero, L_80054B24
    if (ctx->r2 != 0) {
        // 0x80054B38: nop
    
            goto L_80054B24;
    }
    // 0x80054B38: nop

    // 0x80054B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80054B40:
    // 0x80054B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80054B44: jr          $ra
    // 0x80054B48: nop

    return;
    // 0x80054B48: nop

;}
RECOMP_FUNC void func_80054B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054B4C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80054B50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80054B54: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80054B58: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80054B5C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80054B60: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80054B64: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80054B68: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80054B6C: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x80054B70: beq         $at, $zero, L_800554E4
    if (ctx->r1 == 0) {
        // 0x80054B74: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800554E4;
    }
    // 0x80054B74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80054B78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80054B7C: addu        $at, $at, $t6
    gpr jr_addend_80054B88 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80054B80: lw          $t6, 0x5F1C($at)
    ctx->r14 = ADD32(ctx->r1, 0X5F1C);
    // 0x80054B84: nop

    // 0x80054B88: jr          $t6
    // 0x80054B8C: nop

    switch (jr_addend_80054B88 >> 2) {
        case 0: goto L_80054B90; break;
        case 1: goto L_80055100; break;
        case 2: goto L_80055138; break;
        case 3: goto L_80054FCC; break;
        case 4: goto L_800554E4; break;
        case 5: goto L_800554E4; break;
        case 6: goto L_800554E4; break;
        case 7: goto L_800554E4; break;
        case 8: goto L_800554E4; break;
        case 9: goto L_800554E4; break;
        case 10: goto L_800554E4; break;
        case 11: goto L_800554E4; break;
        case 12: goto L_800554E4; break;
        case 13: goto L_800554E4; break;
        case 14: goto L_800554E4; break;
        case 15: goto L_800554E4; break;
        case 16: goto L_800554E4; break;
        case 17: goto L_800554E4; break;
        case 18: goto L_800554B0; break;
        default: switch_error(__func__, 0x80054B88, 0x80095F1C);
    }
    // 0x80054B8C: nop

L_80054B90:
    // 0x80054B90: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x80054B94: nop

    // 0x80054B98: addiu       $t7, $v1, 0x24
    ctx->r15 = ADD32(ctx->r3, 0X24);
    // 0x80054B9C: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
    // 0x80054BA0: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x80054BA4: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80054BA8: nop

    // 0x80054BAC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80054BB0: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x80054BB4: beq         $at, $zero, L_800554E4
    if (ctx->r1 == 0) {
        // 0x80054BB8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_800554E4;
    }
    // 0x80054BB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80054BBC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80054BC0: addu        $at, $at, $t9
    gpr jr_addend_80054BCC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80054BC4: lw          $t9, 0x5F68($at)
    ctx->r25 = ADD32(ctx->r1, 0X5F68);
    // 0x80054BC8: nop

    // 0x80054BCC: jr          $t9
    // 0x80054BD0: nop

    switch (jr_addend_80054BCC >> 2) {
        case 0: goto L_80054BD4; break;
        case 1: goto L_80054DF8; break;
        case 2: goto L_80054E64; break;
        case 3: goto L_80054ED8; break;
        case 4: goto L_80054F44; break;
        case 5: goto L_80054F60; break;
        case 6: goto L_80054FB0; break;
        default: switch_error(__func__, 0x80054BCC, 0x80095F68);
    }
    // 0x80054BD0: nop

L_80054BD4:
    // 0x80054BD4: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x80054BD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80054BDC: beq         $a0, $zero, L_80054BEC
    if (ctx->r4 == 0) {
        // 0x80054BE0: nop
    
            goto L_80054BEC;
    }
    // 0x80054BE0: nop

    // 0x80054BE4: bne         $a2, $a0, L_80054CE0
    if (ctx->r6 != ctx->r4) {
        // 0x80054BE8: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_80054CE0;
    }
    // 0x80054BE8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
L_80054BEC:
    // 0x80054BEC: jal         0x8002D000
    // 0x80054BF0: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80054BF0: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80054BF4: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054BF8: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x80054BFC: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80054C00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80054C04: sll         $t7, $t6, 0
    ctx->r15 = S32(ctx->r14 << 0);
    // 0x80054C08: bltz        $t7, L_80054CD4
    if (SIGNED(ctx->r15) < 0) {
        // 0x80054C0C: nop
    
            goto L_80054CD4;
    }
    // 0x80054C0C: nop

    // 0x80054C10: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80054C14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80054C18: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x80054C1C: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80054C20: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054C24: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x80054C28: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80054C2C: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80054C30: jal         0x8004A0A0
    // 0x80054C34: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80054C34: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80054C38: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054C3C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80054C40: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80054C44: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80054C48: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80054C4C: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80054C50: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054C54: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x80054C58: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80054C5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054C60: jal         0x8004A0A0
    // 0x80054C64: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80054C64: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80054C68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054C6C: jal         0x8005BA48
    // 0x80054C70: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_8005BA48(rdram, ctx);
        goto after_3;
    // 0x80054C70: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_3:
    // 0x80054C74: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80054C78: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80054C7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054C80: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x80054C84: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x80054C88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80054C8C: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054C90: jal         0x8004A0A0
    // 0x80054C94: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x80054C94: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    after_4:
    // 0x80054C98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054C9C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80054CA0: jal         0x8004A0A0
    // 0x80054CA4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80054CA4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_5:
    // 0x80054CA8: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80054CAC: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x80054CB0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80054CB4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80054CB8: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x80054CBC: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x80054CC0: sw          $t9, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r25;
    // 0x80054CC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054CC8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80054CCC: jal         0x8004A0A0
    // 0x80054CD0: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x80054CD0: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_6:
L_80054CD4:
    // 0x80054CD4: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x80054CD8: b           L_800554EC
    // 0x80054CDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054CDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054CE0:
    // 0x80054CE0: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x80054CE4: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x80054CE8: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80054CEC: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x80054CF0: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x80054CF4: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80054CF8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80054CFC: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x80054D00: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80054D04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80054D08: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x80054D0C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80054D10: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x80054D14: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80054D18: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054D1C: jal         0x8004A0A0
    // 0x80054D20: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x80054D20: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    after_7:
    // 0x80054D24: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054D28: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80054D2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80054D30: jal         0x8004A0A0
    // 0x80054D34: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x80054D34: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    after_8:
    // 0x80054D38: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80054D3C: jal         0x8005BA48
    // 0x80054D40: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_8005BA48(rdram, ctx);
        goto after_9;
    // 0x80054D40: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_9:
    // 0x80054D44: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80054D48: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x80054D4C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80054D50: swc1        $f2, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f2.u32l;
    // 0x80054D54: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x80054D58: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054D5C: swc1        $f2, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f2.u32l;
    // 0x80054D60: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x80054D64: nop

    // 0x80054D68: swc1        $f2, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f2.u32l;
    // 0x80054D6C: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80054D70: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80054D74: jal         0x8004A0A0
    // 0x80054D78: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    func_8004A0A0(rdram, ctx);
        goto after_10;
    // 0x80054D78: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    after_10:
    // 0x80054D7C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80054D80: addiu       $s3, $s3, -0x2B00
    ctx->r19 = ADD32(ctx->r19, -0X2B00);
    // 0x80054D84: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80054D88: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80054D8C: jal         0x80056C2C
    // 0x80054D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80056C2C(rdram, ctx);
        goto after_11;
    // 0x80054D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x80054D94: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80054D98: lw          $t9, -0x2B00($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2B00);
    // 0x80054D9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80054DA0: ori         $t6, $t9, 0x100
    ctx->r14 = ctx->r25 | 0X100;
    // 0x80054DA4: sw          $t6, -0x2B00($at)
    MEM_W(-0X2B00, ctx->r1) = ctx->r14;
    // 0x80054DA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80054DAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80054DB0: jal         0x80056C2C
    // 0x80054DB4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80056C2C(rdram, ctx);
        goto after_12;
    // 0x80054DB4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_12:
    // 0x80054DB8: jal         0x8005C3A8
    // 0x80054DBC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8005C3A8(rdram, ctx);
        goto after_13;
    // 0x80054DBC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x80054DC0: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x80054DC4: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x80054DC8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80054DCC: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x80054DD0: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80054DD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80054DD8: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
    // 0x80054DDC: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x80054DE0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80054DE4: jal         0x8005BE2C
    // 0x80054DE8: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    func_8005BE2C(rdram, ctx);
        goto after_14;
    // 0x80054DE8: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_14:
    // 0x80054DEC: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80054DF0: b           L_800554EC
    // 0x80054DF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054DF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054DF8:
    // 0x80054DF8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80054DFC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80054E00: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x80054E04: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x80054E08: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80054E0C: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x80054E10: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x80054E14: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80054E18: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80054E1C: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x80054E20: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80054E24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80054E28: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80054E2C: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x80054E30: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    // 0x80054E34: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80054E38: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054E3C: jal         0x8004A0A0
    // 0x80054E40: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_15;
    // 0x80054E40: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    after_15:
    // 0x80054E44: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054E48: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80054E4C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80054E50: jal         0x8004A0A0
    // 0x80054E54: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_16;
    // 0x80054E54: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    after_16:
    // 0x80054E58: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80054E5C: b           L_800554EC
    // 0x80054E60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054E60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054E64:
    // 0x80054E64: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80054E68: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80054E6C: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x80054E70: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x80054E74: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80054E78: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x80054E7C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x80054E80: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80054E84: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80054E88: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x80054E8C: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80054E90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80054E94: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x80054E98: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x80054E9C: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    // 0x80054EA0: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80054EA4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054EA8: jal         0x8004A0A0
    // 0x80054EAC: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_17;
    // 0x80054EAC: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    after_17:
    // 0x80054EB0: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054EB4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80054EB8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80054EBC: jal         0x8004A0A0
    // 0x80054EC0: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_18;
    // 0x80054EC0: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    after_18:
    // 0x80054EC4: jal         0x8005A3DC
    // 0x80054EC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8005A3DC(rdram, ctx);
        goto after_19;
    // 0x80054EC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_19:
    // 0x80054ECC: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80054ED0: b           L_800554EC
    // 0x80054ED4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054ED4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054ED8:
    // 0x80054ED8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80054EDC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80054EE0: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x80054EE4: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x80054EE8: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80054EEC: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x80054EF0: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x80054EF4: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80054EF8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80054EFC: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x80054F00: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80054F04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80054F08: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x80054F0C: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x80054F10: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    // 0x80054F14: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80054F18: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054F1C: jal         0x8004A0A0
    // 0x80054F20: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_20;
    // 0x80054F20: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    after_20:
    // 0x80054F24: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054F28: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80054F2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80054F30: jal         0x8004A0A0
    // 0x80054F34: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_21;
    // 0x80054F34: addiu       $a2, $v1, 0x18
    ctx->r6 = ADD32(ctx->r3, 0X18);
    after_21:
    // 0x80054F38: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80054F3C: b           L_800554EC
    // 0x80054F40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054F40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054F44:
    // 0x80054F44: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x80054F48: jal         0x8005D1B4
    // 0x80054F4C: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    func_8005D1B4(rdram, ctx);
        goto after_22;
    // 0x80054F4C: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    after_22:
    // 0x80054F50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80054F54: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x80054F58: b           L_800554E8
    // 0x80054F5C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_800554E8;
    // 0x80054F5C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80054F60:
    // 0x80054F60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054F64: jal         0x8002D000
    // 0x80054F68: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    func_8002D000(rdram, ctx);
        goto after_23;
    // 0x80054F68: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    after_23:
    // 0x80054F6C: jal         0x800598C0
    // 0x80054F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800598C0(rdram, ctx);
        goto after_24;
    // 0x80054F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_24:
    // 0x80054F74: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80054F78: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80054F7C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80054F80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80054F84: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80054F88: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80054F8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80054F90: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x80054F94: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80054F98: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80054F9C: jal         0x8004A0A0
    // 0x80054FA0: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_25;
    // 0x80054FA0: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    after_25:
    // 0x80054FA4: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80054FA8: b           L_800554EC
    // 0x80054FAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054FAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054FB0:
    // 0x80054FB0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80054FB4: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x80054FB8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80054FBC: jal         0x8005A8BC
    // 0x80054FC0: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    func_8005A8BC(rdram, ctx);
        goto after_26;
    // 0x80054FC0: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    after_26:
    // 0x80054FC4: b           L_800554EC
    // 0x80054FC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800554EC;
    // 0x80054FC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80054FCC:
    // 0x80054FCC: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80054FD0: lw          $t8, 0xC($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC);
    // 0x80054FD4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80054FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054FDC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80054FE0: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80054FE4: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x80054FE8: nop

    // 0x80054FEC: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x80054FF0: jal         0x8002F20C
    // 0x80054FF4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    func_8002F20C(rdram, ctx);
        goto after_27;
    // 0x80054FF4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    after_27:
    // 0x80054FF8: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x80054FFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80055000: bne         $v0, $t8, L_80055014
    if (ctx->r2 != ctx->r24) {
        // 0x80055004: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_80055014;
    }
    // 0x80055004: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x80055008: jal         0x8002B4A8
    // 0x8005500C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8002B4A8(rdram, ctx);
        goto after_28;
    // 0x8005500C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_28:
    // 0x80055010: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_80055014:
    // 0x80055014: lw          $t9, 0x10($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X10);
    // 0x80055018: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8005501C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80055020: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80055024: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80055028: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8005502C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80055030: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80055034: bne         $t6, $at, L_80055060
    if (ctx->r14 != ctx->r1) {
        // 0x80055038: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80055060;
    }
    // 0x80055038: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8005503C: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x80055040: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80055044: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80055048: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8005504C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x80055050: jal         0x8005D128
    // 0x80055054: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_8005D128(rdram, ctx);
        goto after_29;
    // 0x80055054: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_29:
    // 0x80055058: b           L_800550B4
    // 0x8005505C: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
        goto L_800550B4;
    // 0x8005505C: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
L_80055060:
    // 0x80055060: bne         $v1, $zero, L_8005508C
    if (ctx->r3 != 0) {
        // 0x80055064: addiu       $t7, $zero, 0x7
        ctx->r15 = ADD32(0, 0X7);
            goto L_8005508C;
    }
    // 0x80055064: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80055068: lw          $t8, 0x14($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X14);
    // 0x8005506C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80055070: addu        $t6, $t8, $v0
    ctx->r14 = ADD32(ctx->r24, ctx->r2);
    // 0x80055074: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x80055078: nop

    // 0x8005507C: beq         $v1, $zero, L_800550B0
    if (ctx->r3 == 0) {
        // 0x80055080: nop
    
            goto L_800550B0;
    }
    // 0x80055080: nop

    // 0x80055084: beq         $a2, $v1, L_800550B0
    if (ctx->r6 == ctx->r3) {
        // 0x80055088: nop
    
            goto L_800550B0;
    }
    // 0x80055088: nop

L_8005508C:
    // 0x8005508C: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x80055090: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x80055094: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80055098: jal         0x8005BE2C
    // 0x8005509C: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    func_8005BE2C(rdram, ctx);
        goto after_30;
    // 0x8005509C: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_30:
    // 0x800550A0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x800550A4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x800550A8: jal         0x8004A0A0
    // 0x800550AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_31;
    // 0x800550AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_31:
L_800550B0:
    // 0x800550B0: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
L_800550B4:
    // 0x800550B4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800550B8: lw          $a0, 0x1BA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BA0);
    // 0x800550BC: jal         0x800526A4
    // 0x800550C0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_800526A4(rdram, ctx);
        goto after_32;
    // 0x800550C0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_32:
    // 0x800550C4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800550C8: lw          $a0, 0x1BA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BA4);
    // 0x800550CC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800550D0: jal         0x800526A4
    // 0x800550D4: nop

    func_800526A4(rdram, ctx);
        goto after_33;
    // 0x800550D4: nop

    after_33:
    // 0x800550D8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800550DC: lw          $a0, 0x1BB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB4);
    // 0x800550E0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800550E4: jal         0x800526A4
    // 0x800550E8: nop

    func_800526A4(rdram, ctx);
        goto after_34;
    // 0x800550E8: nop

    after_34:
    // 0x800550EC: lw          $t9, 0x8($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8);
    // 0x800550F0: nop

    // 0x800550F4: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x800550F8: b           L_800554E4
    // 0x800550FC: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
        goto L_800554E4;
    // 0x800550FC: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
L_80055100:
    // 0x80055100: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80055104: lw          $t6, 0xC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XC);
    // 0x80055108: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005510C: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x80055110: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80055114: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x80055118: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x8005511C: jal         0x80054984
    // 0x80055120: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    func_80054984(rdram, ctx);
        goto after_35;
    // 0x80055120: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    after_35:
    // 0x80055124: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x80055128: nop

    // 0x8005512C: addiu       $t9, $t6, 0x18
    ctx->r25 = ADD32(ctx->r14, 0X18);
    // 0x80055130: b           L_800554E4
    // 0x80055134: sw          $t9, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r25;
        goto L_800554E4;
    // 0x80055134: sw          $t9, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r25;
L_80055138:
    // 0x80055138: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x8005513C: lw          $t8, 0xC($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC);
    // 0x80055140: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80055144: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80055148: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8005514C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80055150: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80055154: nop

    // 0x80055158: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x8005515C: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x80055160: nop

    // 0x80055164: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x80055168: beq         $t8, $zero, L_80055208
    if (ctx->r24 == 0) {
        // 0x8005516C: andi        $t8, $a0, 0x60
        ctx->r24 = ctx->r4 & 0X60;
            goto L_80055208;
    }
    // 0x8005516C: andi        $t8, $a0, 0x60
    ctx->r24 = ctx->r4 & 0X60;
    // 0x80055170: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80055174: lw          $t9, 0x10($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X10);
    // 0x80055178: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8005517C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80055180: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80055184: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80055188: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x8005518C: bne         $t6, $zero, L_800554A8
    if (ctx->r14 != 0) {
        // 0x80055190: addiu       $t7, $a1, 0xC
        ctx->r15 = ADD32(ctx->r5, 0XC);
            goto L_800554A8;
    }
    // 0x80055190: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
    // 0x80055194: lw          $t9, 0x14($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X14);
    // 0x80055198: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8005519C: addu        $t7, $t9, $a0
    ctx->r15 = ADD32(ctx->r25, ctx->r4);
    // 0x800551A0: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x800551A4: addiu       $t6, $zero, 0x45
    ctx->r14 = ADD32(0, 0X45);
    // 0x800551A8: beq         $v0, $zero, L_800551D8
    if (ctx->r2 == 0) {
        // 0x800551AC: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_800551D8;
    }
    // 0x800551AC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x800551B0: beq         $v0, $a2, L_800551E0
    if (ctx->r2 == ctx->r6) {
        // 0x800551B4: addiu       $t9, $zero, 0x32
        ctx->r25 = ADD32(0, 0X32);
            goto L_800551E0;
    }
    // 0x800551B4: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x800551B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800551BC: beq         $v0, $at, L_800551E8
    if (ctx->r2 == ctx->r1) {
        // 0x800551C0: addiu       $t7, $zero, 0x37
        ctx->r15 = ADD32(0, 0X37);
            goto L_800551E8;
    }
    // 0x800551C0: addiu       $t7, $zero, 0x37
    ctx->r15 = ADD32(0, 0X37);
    // 0x800551C4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800551C8: beq         $v0, $at, L_800551E8
    if (ctx->r2 == ctx->r1) {
        // 0x800551CC: addiu       $t8, $zero, 0x3D
        ctx->r24 = ADD32(0, 0X3D);
            goto L_800551E8;
    }
    // 0x800551CC: addiu       $t8, $zero, 0x3D
    ctx->r24 = ADD32(0, 0X3D);
    // 0x800551D0: b           L_800551EC
    // 0x800551D4: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
        goto L_800551EC;
    // 0x800551D4: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
L_800551D8:
    // 0x800551D8: b           L_800551EC
    // 0x800551DC: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
        goto L_800551EC;
    // 0x800551DC: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
L_800551E0:
    // 0x800551E0: b           L_800551EC
    // 0x800551E4: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
        goto L_800551EC;
    // 0x800551E4: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
L_800551E8:
    // 0x800551E8: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_800551EC:
    // 0x800551EC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x800551F0: jal         0x8004A0A0
    // 0x800551F4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_36;
    // 0x800551F4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_36:
    // 0x800551F8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x800551FC: b           L_800554A8
    // 0x80055200: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x80055200: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
    // 0x80055204: andi        $t8, $a0, 0x60
    ctx->r24 = ctx->r4 & 0X60;
L_80055208:
    // 0x80055208: beq         $t8, $zero, L_80055288
    if (ctx->r24 == 0) {
        // 0x8005520C: addiu       $a2, $sp, 0x50
        ctx->r6 = ADD32(ctx->r29, 0X50);
            goto L_80055288;
    }
    // 0x8005520C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80055210: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055214: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x80055218: jal         0x8004A0A0
    // 0x8005521C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8004A0A0(rdram, ctx);
        goto after_37;
    // 0x8005521C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_37:
    // 0x80055220: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x80055224: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80055228: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x8005522C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80055230: andi        $t9, $t6, 0x20
    ctx->r25 = ctx->r14 & 0X20;
    // 0x80055234: beq         $t9, $zero, L_8005525C
    if (ctx->r25 == 0) {
        // 0x80055238: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_8005525C;
    }
    // 0x80055238: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8005523C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80055240: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80055244: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x80055248: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005524C: and         $t9, $t6, $at
    ctx->r25 = ctx->r14 & ctx->r1;
    // 0x80055250: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x80055254: b           L_80055270
    // 0x80055258: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
        goto L_80055270;
    // 0x80055258: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
L_8005525C:
    // 0x8005525C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80055260: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80055264: ori         $t9, $t6, 0x20
    ctx->r25 = ctx->r14 | 0X20;
    // 0x80055268: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x8005526C: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
L_80055270:
    // 0x80055270: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055274: jal         0x8004A0A0
    // 0x80055278: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_38;
    // 0x80055278: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_38:
    // 0x8005527C: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80055280: b           L_800554A8
    // 0x80055284: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x80055284: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_80055288:
    // 0x80055288: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8005528C: lw          $t7, 0x10($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X10);
    // 0x80055290: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80055294: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80055298: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8005529C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800552A0: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x800552A4: beq         $t8, $zero, L_800552D0
    if (ctx->r24 == 0) {
        // 0x800552A8: nop
    
            goto L_800552D0;
    }
    // 0x800552A8: nop

    // 0x800552AC: beq         $t8, $a2, L_800552F4
    if (ctx->r24 == ctx->r6) {
        // 0x800552B0: andi        $t6, $a0, 0x10
        ctx->r14 = ctx->r4 & 0X10;
            goto L_800552F4;
    }
    // 0x800552B0: andi        $t6, $a0, 0x10
    ctx->r14 = ctx->r4 & 0X10;
    // 0x800552B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800552B8: beq         $t8, $at, L_80055340
    if (ctx->r24 == ctx->r1) {
        // 0x800552BC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80055340;
    }
    // 0x800552BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800552C0: beq         $t8, $at, L_80055478
    if (ctx->r24 == ctx->r1) {
        // 0x800552C4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80055478;
    }
    // 0x800552C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800552C8: b           L_800554A8
    // 0x800552CC: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x800552CC: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_800552D0:
    // 0x800552D0: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x800552D4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x800552D8: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x800552DC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x800552E0: jal         0x8004A0A0
    // 0x800552E4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_39;
    // 0x800552E4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_39:
    // 0x800552E8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x800552EC: b           L_800554A8
    // 0x800552F0: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x800552F0: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_800552F4:
    // 0x800552F4: bne         $t6, $zero, L_80055320
    if (ctx->r14 != 0) {
        // 0x800552F8: andi        $t9, $a0, 0x8
        ctx->r25 = ctx->r4 & 0X8;
            goto L_80055320;
    }
    // 0x800552F8: andi        $t9, $a0, 0x8
    ctx->r25 = ctx->r4 & 0X8;
    // 0x800552FC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055300: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x80055304: jal         0x8005C8FC
    // 0x80055308: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    func_8005C8FC(rdram, ctx);
        goto after_40;
    // 0x80055308: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    after_40:
    // 0x8005530C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x80055310: nop

    // 0x80055314: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x80055318: nop

    // 0x8005531C: andi        $t9, $a0, 0x8
    ctx->r25 = ctx->r4 & 0X8;
L_80055320:
    // 0x80055320: bne         $t9, $zero, L_80055334
    if (ctx->r25 != 0) {
        // 0x80055324: nop
    
            goto L_80055334;
    }
    // 0x80055324: nop

    // 0x80055328: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8005532C: jal         0x8005C864
    // 0x80055330: nop

    func_8005C864(rdram, ctx);
        goto after_41;
    // 0x80055330: nop

    after_41:
L_80055334:
    // 0x80055334: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80055338: b           L_800554A8
    // 0x8005533C: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x8005533C: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_80055340:
    // 0x80055340: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80055344: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80055348: beq         $v0, $zero, L_80055360
    if (ctx->r2 == 0) {
        // 0x8005534C: addiu       $t7, $zero, 0x16
        ctx->r15 = ADD32(0, 0X16);
            goto L_80055360;
    }
    // 0x8005534C: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x80055350: beq         $v0, $a2, L_8005538C
    if (ctx->r2 == ctx->r6) {
        // 0x80055354: nop
    
            goto L_8005538C;
    }
    // 0x80055354: nop

    // 0x80055358: b           L_800554A8
    // 0x8005535C: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x8005535C: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_80055360:
    // 0x80055360: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x80055364: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x80055368: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8005536C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x80055370: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055374: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x80055378: jal         0x8004A0A0
    // 0x8005537C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_42;
    // 0x8005537C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_42:
    // 0x80055380: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80055384: b           L_800554A8
    // 0x80055388: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x80055388: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_8005538C:
    // 0x8005538C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055390: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80055394: jal         0x8004A0A0
    // 0x80055398: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_43;
    // 0x80055398: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_43:
    // 0x8005539C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800553A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800553A4: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800553A8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800553AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800553B0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800553B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800553B8: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x800553BC: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800553C0: bc1f        L_800553D8
    if (!c1cs) {
        // 0x800553C4: nop
    
            goto L_800553D8;
    }
    // 0x800553C4: nop

    // 0x800553C8: add.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x800553CC: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x800553D0: b           L_80055408
    // 0x800553D4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
        goto L_80055408;
    // 0x800553D4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
L_800553D8:
    // 0x800553D8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800553DC: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800553E0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800553E4: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x800553E8: nop

    // 0x800553EC: bc1f        L_80055400
    if (!c1cs) {
        // 0x800553F0: nop
    
            goto L_80055400;
    }
    // 0x800553F0: nop

    // 0x800553F4: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x800553F8: b           L_80055404
    // 0x800553FC: add.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f12.fl;
        goto L_80055404;
    // 0x800553FC: add.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f12.fl;
L_80055400:
    // 0x80055400: add.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f0.fl;
L_80055404:
    // 0x80055404: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
L_80055408:
    // 0x80055408: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8005540C: lwc1        $f1, 0x5F88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5F88);
    // 0x80055410: lwc1        $f0, 0x5F8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5F8C);
    // 0x80055414: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80055418: mul.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8005541C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80055420: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80055424: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80055428: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8005542C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80055430: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80055434: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80055438: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8005543C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80055440: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80055444: jal         0x800289B4
    // 0x80055448: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_800289B4(rdram, ctx);
        goto after_44;
    // 0x80055448: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_44:
    // 0x8005544C: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x80055450: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x80055454: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x80055458: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8005545C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055460: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x80055464: jal         0x8004A0A0
    // 0x80055468: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_45;
    // 0x80055468: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_45:
    // 0x8005546C: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80055470: b           L_800554A8
    // 0x80055474: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
        goto L_800554A8;
    // 0x80055474: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_80055478:
    // 0x80055478: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x8005547C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80055480: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x80055484: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80055488: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8005548C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80055490: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x80055494: jal         0x8004A0A0
    // 0x80055498: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_46;
    // 0x80055498: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_46:
    // 0x8005549C: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x800554A0: nop

    // 0x800554A4: addiu       $t7, $a1, 0xC
    ctx->r15 = ADD32(ctx->r5, 0XC);
L_800554A8:
    // 0x800554A8: b           L_800554E4
    // 0x800554AC: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
        goto L_800554E4;
    // 0x800554AC: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
L_800554B0:
    // 0x800554B0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x800554B4: lw          $t6, 0xC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XC);
    // 0x800554B8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800554BC: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x800554C0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800554C4: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x800554C8: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x800554CC: jal         0x80054984
    // 0x800554D0: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    func_80054984(rdram, ctx);
        goto after_47;
    // 0x800554D0: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    after_47:
    // 0x800554D4: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x800554D8: nop

    // 0x800554DC: addiu       $t8, $t6, 0x18
    ctx->r24 = ADD32(ctx->r14, 0X18);
    // 0x800554E0: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
L_800554E4:
    // 0x800554E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800554E8:
    // 0x800554E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800554EC:
    // 0x800554EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800554F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800554F4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800554F8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800554FC: jr          $ra
    // 0x80055500: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x80055500: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80055504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80055508: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005550C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80055510: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80055514: addiu       $s0, $s0, 0x1BCC
    ctx->r16 = ADD32(ctx->r16, 0X1BCC);
    // 0x80055518: sw          $zero, -0x2AF8($at)
    MEM_W(-0X2AF8, ctx->r1) = 0;
    // 0x8005551C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80055520: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80055524: beq         $a1, $zero, L_80055540
    if (ctx->r5 == 0) {
        // 0x80055528: or          $t1, $a0, $zero
        ctx->r9 = ctx->r4 | 0;
            goto L_80055540;
    }
    // 0x80055528: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8005552C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80055530: jal         0x800075A0
    // 0x80055534: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80055534: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_0:
    // 0x80055538: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005553C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80055540:
    // 0x80055540: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80055544: lw          $v1, 0x8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8);
    // 0x80055548: lw          $t6, -0x2B08($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2B08);
    // 0x8005554C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80055550: bne         $t6, $zero, L_8005558C
    if (ctx->r14 != 0) {
        // 0x80055554: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_8005558C;
    }
    // 0x80055554: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80055558: addiu       $a0, $a0, 0x2FE4
    ctx->r4 = ADD32(ctx->r4, 0X2FE4);
    // 0x8005555C: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x80055560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80055564: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80055568: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005556C: jal         0x80007C3C
    // 0x80055570: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x80055570: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_1:
    // 0x80055574: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80055578: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005557C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055580: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x80055584: lw          $v1, 0x8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8);
    // 0x80055588: nop

L_8005558C:
    // 0x8005558C: addiu       $t8, $v1, 0x14
    ctx->r24 = ADD32(ctx->r3, 0X14);
    // 0x80055590: sw          $t8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r24;
    // 0x80055594: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80055598: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8005559C: andi        $t2, $t9, 0x2
    ctx->r10 = ctx->r25 & 0X2;
    // 0x800555A0: beq         $t2, $zero, L_800555B0
    if (ctx->r10 == 0) {
        // 0x800555A4: lui         $t4, 0x800B
        ctx->r12 = S32(0X800B << 16);
            goto L_800555B0;
    }
    // 0x800555A4: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x800555A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800555AC: sw          $t3, -0x2AF8($at)
    MEM_W(-0X2AF8, ctx->r1) = ctx->r11;
L_800555B0:
    // 0x800555B0: lw          $t4, -0x2B08($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2B08);
    // 0x800555B4: nop

    // 0x800555B8: bne         $t4, $zero, L_80055600
    if (ctx->r12 != 0) {
        // 0x800555BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80055600;
    }
    // 0x800555BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800555C0: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x800555C4: nop

    // 0x800555C8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x800555CC: beq         $t6, $zero, L_80055600
    if (ctx->r14 == 0) {
        // 0x800555D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80055600;
    }
    // 0x800555D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800555D4: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_800555D8:
    // 0x800555D8: nop

    // 0x800555DC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x800555E0: nop

    // 0x800555E4: beq         $t8, $zero, L_80055600
    if (ctx->r24 == 0) {
        // 0x800555E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80055600;
    }
    // 0x800555E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800555EC: jal         0x80007AB0
    // 0x800555F0: nop

    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x800555F0: nop

    after_2:
    // 0x800555F4: b           L_800555D8
    // 0x800555F8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
        goto L_800555D8;
    // 0x800555F8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x800555FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80055600:
    // 0x80055600: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80055608: jr          $ra
    // 0x8005560C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8005560C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80055610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055610: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80055614: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80055618: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8005561C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80055620: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80055624: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80055628: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005562C: jal         0x8002F22C
    // 0x80055630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F22C(rdram, ctx);
        goto after_0;
    // 0x80055630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80055634: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80055638: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005563C: beq         $v1, $at, L_80055660
    if (ctx->r3 == ctx->r1) {
        // 0x80055640: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80055660;
    }
    // 0x80055640: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80055644: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80055648: beq         $v1, $at, L_8005569C
    if (ctx->r3 == ctx->r1) {
        // 0x8005564C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8005569C;
    }
    // 0x8005564C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80055650: beq         $v1, $at, L_80055780
    if (ctx->r3 == ctx->r1) {
        // 0x80055654: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_80055780;
    }
    // 0x80055654: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x80055658: b           L_8005579C
    // 0x8005565C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8005579C;
    // 0x8005565C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80055660:
    // 0x80055660: lw          $a3, 0x8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X8);
    // 0x80055664: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x80055668: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8005566C: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    // 0x80055670: jal         0x80009F20
    // 0x80055674: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_80009F20(rdram, ctx);
        goto after_1;
    // 0x80055674: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_1:
    // 0x80055678: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8005567C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80055680: jal         0x80009FD8
    // 0x80055684: nop

    func_80009FD8(rdram, ctx);
        goto after_2;
    // 0x80055684: nop

    after_2:
    // 0x80055688: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x8005568C: nop

    // 0x80055690: addiu       $t7, $t6, 0x18
    ctx->r15 = ADD32(ctx->r14, 0X18);
    // 0x80055694: b           L_80055798
    // 0x80055698: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
        goto L_80055798;
    // 0x80055698: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
L_8005569C:
    // 0x8005569C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x800556A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800556A4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800556A8: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
    // 0x800556AC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800556B0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800556B4: andi        $t6, $t9, 0x1
    ctx->r14 = ctx->r25 & 0X1;
    // 0x800556B8: beq         $t6, $zero, L_800556F4
    if (ctx->r14 == 0) {
        // 0x800556BC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800556F4;
    }
    // 0x800556BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800556C0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800556C4: lw          $t7, 0xC($s3)
    ctx->r15 = MEM_W(ctx->r19, 0XC);
    // 0x800556C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800556CC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x800556D0: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x800556D4: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x800556D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800556DC: jal         0x8002B4A8
    // 0x800556E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002B4A8(rdram, ctx);
        goto after_3;
    // 0x800556E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800556E4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800556E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800556EC: b           L_80055710
    // 0x800556F0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
        goto L_80055710;
    // 0x800556F0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
L_800556F4:
    // 0x800556F4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x800556F8: jal         0x8002B4A8
    // 0x800556FC: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_8002B4A8(rdram, ctx);
        goto after_4;
    // 0x800556FC: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_4:
    // 0x80055700: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80055704: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80055708: nop

    // 0x8005570C: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
L_80055710:
    // 0x80055710: nop

    // 0x80055714: andi        $t7, $t8, 0x4
    ctx->r15 = ctx->r24 & 0X4;
    // 0x80055718: beq         $t7, $zero, L_80055734
    if (ctx->r15 == 0) {
        // 0x8005571C: nop
    
            goto L_80055734;
    }
    // 0x8005571C: nop

    // 0x80055720: lw          $t9, 0x44($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X44);
    // 0x80055724: nop

    // 0x80055728: ori         $t6, $t9, 0x2
    ctx->r14 = ctx->r25 | 0X2;
    // 0x8005572C: b           L_80055744
    // 0x80055730: sw          $t6, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r14;
        goto L_80055744;
    // 0x80055730: sw          $t6, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r14;
L_80055734:
    // 0x80055734: lw          $t8, 0x44($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X44);
    // 0x80055738: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005573C: and         $t7, $t8, $at
    ctx->r15 = ctx->r24 & ctx->r1;
    // 0x80055740: sw          $t7, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r15;
L_80055744:
    // 0x80055744: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80055748: nop

    // 0x8005574C: andi        $t6, $t9, 0x10
    ctx->r14 = ctx->r25 & 0X10;
    // 0x80055750: beq         $t6, $zero, L_8005576C
    if (ctx->r14 == 0) {
        // 0x80055754: nop
    
            goto L_8005576C;
    }
    // 0x80055754: nop

    // 0x80055758: lw          $t8, 0x44($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X44);
    // 0x8005575C: nop

    // 0x80055760: ori         $t7, $t8, 0x1
    ctx->r15 = ctx->r24 | 0X1;
    // 0x80055764: b           L_80055798
    // 0x80055768: sw          $t7, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r15;
        goto L_80055798;
    // 0x80055768: sw          $t7, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r15;
L_8005576C:
    // 0x8005576C: lw          $t9, 0x44($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X44);
    // 0x80055770: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80055774: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80055778: b           L_80055798
    // 0x8005577C: sw          $t6, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r14;
        goto L_80055798;
    // 0x8005577C: sw          $t6, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r14;
L_80055780:
    // 0x80055780: jal         0x80054984
    // 0x80055784: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    func_80054984(rdram, ctx);
        goto after_5;
    // 0x80055784: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    after_5:
    // 0x80055788: lw          $t8, 0x8($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X8);
    // 0x8005578C: nop

    // 0x80055790: addiu       $t7, $t8, 0x2C
    ctx->r15 = ADD32(ctx->r24, 0X2C);
    // 0x80055794: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
L_80055798:
    // 0x80055798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8005579C:
    // 0x8005579C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800557A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800557A4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800557A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800557AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800557B0: jr          $ra
    // 0x800557B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800557B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800557B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800557B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800557BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800557C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800557C4: nop

    // 0x800557C8: addiu       $t6, $v0, 0xC
    ctx->r14 = ADD32(ctx->r2, 0XC);
    // 0x800557CC: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x800557D0: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x800557D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800557D8: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x800557DC: beq         $t7, $zero, L_800557F8
    if (ctx->r15 == 0) {
        // 0x800557E0: andi        $t8, $a1, 0x2
        ctx->r24 = ctx->r5 & 0X2;
            goto L_800557F8;
    }
    // 0x800557E0: andi        $t8, $a1, 0x2
    ctx->r24 = ctx->r5 & 0X2;
    // 0x800557E4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800557E8: jal         0x8003E530
    // 0x800557EC: nop

    func_8003E530(rdram, ctx);
        goto after_0;
    // 0x800557EC: nop

    after_0:
    // 0x800557F0: b           L_80055810
    // 0x800557F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80055810;
    // 0x800557F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800557F8:
    // 0x800557F8: beq         $t8, $zero, L_80055810
    if (ctx->r24 == 0) {
        // 0x800557FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80055810;
    }
    // 0x800557FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055800: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80055804: jal         0x8003E3BC
    // 0x80055808: nop

    func_8003E3BC(rdram, ctx);
        goto after_1;
    // 0x80055808: nop

    after_1:
    // 0x8005580C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80055810:
    // 0x80055810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80055814: jr          $ra
    // 0x80055818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80055818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8005581C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005581C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055824: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80055828: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8005582C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80055830: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80055834: bne         $a1, $zero, L_80055860
    if (ctx->r5 != 0) {
        // 0x80055838: nop
    
            goto L_80055860;
    }
    // 0x80055838: nop

    // 0x8005583C: lbu         $t6, -0x3D57($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3D57);
    // 0x80055840: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80055844: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80055848: beq         $t7, $zero, L_8005587C
    if (ctx->r15 == 0) {
        // 0x8005584C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_8005587C;
    }
    // 0x8005584C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80055850: sw          $t8, -0x2B04($at)
    MEM_W(-0X2B04, ctx->r1) = ctx->r24;
    // 0x80055854: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80055858: b           L_80055880
    // 0x8005585C: addiu       $t9, $v1, 0x4
    ctx->r25 = ADD32(ctx->r3, 0X4);
        goto L_80055880;
    // 0x8005585C: addiu       $t9, $v1, 0x4
    ctx->r25 = ADD32(ctx->r3, 0X4);
L_80055860:
    // 0x80055860: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80055864: jal         0x8002BCF0
    // 0x80055868: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8002BCF0(rdram, ctx);
        goto after_0;
    // 0x80055868: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8005586C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80055870: nop

    // 0x80055874: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80055878: nop

L_8005587C:
    // 0x8005587C: addiu       $t9, $v1, 0x4
    ctx->r25 = ADD32(ctx->r3, 0X4);
L_80055880:
    // 0x80055880: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x80055884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005588C: jr          $ra
    // 0x80055890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80055890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80055894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055894: jr          $ra
    // 0x80055898: nop

    return;
    // 0x80055898: nop

;}
RECOMP_FUNC void func_8005589C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005589C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x800558A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800558A4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800558A8: addiu       $s1, $s1, -0x2B08
    ctx->r17 = ADD32(ctx->r17, -0X2B08);
    // 0x800558AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800558B0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800558B4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800558B8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800558BC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800558C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800558C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800558C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800558CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800558D0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800558D4: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800558D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800558DC: beq         $t7, $zero, L_8005592C
    if (ctx->r15 == 0) {
        // 0x800558E0: sw          $t6, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->r14;
            goto L_8005592C;
    }
    // 0x800558E0: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x800558E4: jal         0x800094EC
    // 0x800558E8: nop

    func_800094EC(rdram, ctx);
        goto after_0;
    // 0x800558E8: nop

    after_0:
    // 0x800558EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800558F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800558F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800558F8: jal         0x80009A84
    // 0x800558FC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_80009A84(rdram, ctx);
        goto after_1;
    // 0x800558FC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_1:
    // 0x80055900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80055904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80055908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005590C: jal         0x8000960C
    // 0x80055910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8000960C(rdram, ctx);
        goto after_2;
    // 0x80055910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80055914: jal         0x80052784
    // 0x80055918: nop

    func_80052784(rdram, ctx);
        goto after_3;
    // 0x80055918: nop

    after_3:
    // 0x8005591C: jal         0x80056924
    // 0x80055920: nop

    func_80056924(rdram, ctx);
        goto after_4;
    // 0x80055920: nop

    after_4:
    // 0x80055924: jal         0x8002A364
    // 0x80055928: nop

    func_8002A364(rdram, ctx);
        goto after_5;
    // 0x80055928: nop

    after_5:
L_8005592C:
    // 0x8005592C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80055930: sw          $zero, -0x2B04($at)
    MEM_W(-0X2B04, ctx->r1) = 0;
    // 0x80055934: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80055938: sw          $zero, -0x2B0C($at)
    MEM_W(-0X2B0C, ctx->r1) = 0;
    // 0x8005593C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80055940: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80055944: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80055948: addiu       $t9, $t8, 0xC
    ctx->r25 = ADD32(ctx->r24, 0XC);
    // 0x8005594C: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
    // 0x80055950: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80055954: lw          $v1, -0x42B8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X42B8);
    // 0x80055958: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8005595C: nop

    // 0x80055960: beq         $v1, $a0, L_80055B18
    if (ctx->r3 == ctx->r4) {
        // 0x80055964: lui         $s7, 0x8009
        ctx->r23 = S32(0X8009 << 16);
            goto L_80055B18;
    }
    // 0x80055964: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80055968: addiu       $s7, $s7, 0x1BD0
    ctx->r23 = ADD32(ctx->r23, 0X1BD0);
    // 0x8005596C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x80055970: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80055974: beq         $v0, $zero, L_80055990
    if (ctx->r2 == 0) {
        // 0x80055978: addiu       $s2, $s2, -0x2AF0
        ctx->r18 = ADD32(ctx->r18, -0X2AF0);
            goto L_80055990;
    }
    // 0x80055978: addiu       $s2, $s2, -0x2AF0
    ctx->r18 = ADD32(ctx->r18, -0X2AF0);
    // 0x8005597C: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x80055980: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80055984: lw          $t9, -0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X20);
    // 0x80055988: nop

    // 0x8005598C: beq         $a0, $t9, L_80055B18
    if (ctx->r4 == ctx->r25) {
        // 0x80055990: lui         $s2, 0x800B
        ctx->r18 = S32(0X800B << 16);
            goto L_80055B18;
    }
L_80055990:
    // 0x80055990: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80055994: addiu       $s2, $s2, -0x2AF0
    ctx->r18 = ADD32(ctx->r18, -0X2AF0);
    // 0x80055998: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x8005599C: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x800559A0: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x800559A4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800559A8: lw          $t8, -0x4320($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4320);
    // 0x800559AC: nop

    // 0x800559B0: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x800559B4: nop

    // 0x800559B8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800559BC: jal         0x80006DFC
    // 0x800559C0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80006DFC(rdram, ctx);
        goto after_6;
    // 0x800559C0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_6:
    // 0x800559C4: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x800559C8: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x800559CC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x800559D0: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x800559D4: sw          $v0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->r2;
    // 0x800559D8: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x800559DC: addiu       $s5, $s5, -0xB50
    ctx->r21 = ADD32(ctx->r21, -0XB50);
    // 0x800559E0: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x800559E4: addiu       $s6, $sp, 0xA0
    ctx->r22 = ADD32(ctx->r29, 0XA0);
    // 0x800559E8: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x800559EC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_800559F0:
    // 0x800559F0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800559F4: jal         0x8002D000
    // 0x800559F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_7;
    // 0x800559F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_7:
    // 0x800559FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80055A00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80055A04: jal         0x8004A0A0
    // 0x80055A08: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x80055A08: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    after_8:
    // 0x80055A0C: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80055A10: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80055A14: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x80055A18: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x80055A1C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80055A20: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80055A24: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80055A28: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80055A2C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80055A30: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80055A34: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x80055A38: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80055A3C: lw          $t9, -0x4320($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4320);
    // 0x80055A40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80055A44: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x80055A48: nop

    // 0x80055A4C: blez        $t6, L_80055AE4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80055A50: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_80055AE4;
    }
    // 0x80055A50: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_80055A54:
    // 0x80055A54: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80055A58: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x80055A5C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80055A60: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x80055A64: lw          $t6, 0x1C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X1C);
    // 0x80055A68: nop

    // 0x80055A6C: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80055A70: sw          $s3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r19;
    // 0x80055A74: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80055A78: nop

    // 0x80055A7C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80055A80: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80055A84: nop

    // 0x80055A88: beq         $s4, $a0, L_80055AC0
    if (ctx->r20 == ctx->r4) {
        // 0x80055A8C: nop
    
            goto L_80055AC0;
    }
    // 0x80055A8C: nop

    // 0x80055A90: jal         0x8004A0A0
    // 0x80055A94: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x80055A94: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_9:
    // 0x80055A98: bne         $v0, $zero, L_80055AC0
    if (ctx->r2 != 0) {
        // 0x80055A9C: nop
    
            goto L_80055AC0;
    }
    // 0x80055A9C: nop

    // 0x80055AA0: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80055AA4: nop

    // 0x80055AA8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80055AAC: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80055AB0: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x80055AB4: nop

    // 0x80055AB8: addu        $t6, $t9, $s0
    ctx->r14 = ADD32(ctx->r25, ctx->r16);
    // 0x80055ABC: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_80055AC0:
    // 0x80055AC0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80055AC4: lw          $t7, -0x4320($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4320);
    // 0x80055AC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80055ACC: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x80055AD0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80055AD4: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80055AD8: bne         $at, $zero, L_80055A54
    if (ctx->r1 != 0) {
        // 0x80055ADC: nop
    
            goto L_80055A54;
    }
    // 0x80055ADC: nop

    // 0x80055AE0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_80055AE4:
    // 0x80055AE4: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80055AE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80055AEC: addiu       $t6, $t9, 0xC
    ctx->r14 = ADD32(ctx->r25, 0XC);
    // 0x80055AF0: bne         $fp, $at, L_800559F0
    if (ctx->r30 != ctx->r1) {
        // 0x80055AF4: sw          $t6, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r14;
            goto L_800559F0;
    }
    // 0x80055AF4: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x80055AF8: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x80055AFC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80055B00: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80055B04: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x80055B08: bne         $at, $zero, L_80055B18
    if (ctx->r1 != 0) {
        // 0x80055B0C: sw          $t7, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r15;
            goto L_80055B18;
    }
    // 0x80055B0C: sw          $t7, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r15;
    // 0x80055B10: jal         0x80000FBC
    // 0x80055B14: addiu       $a0, $a0, 0x5E80
    ctx->r4 = ADD32(ctx->r4, 0X5E80);
    func_80000FBC(rdram, ctx);
        goto after_10;
    // 0x80055B14: addiu       $a0, $a0, 0x5E80
    ctx->r4 = ADD32(ctx->r4, 0X5E80);
    after_10:
L_80055B18:
    // 0x80055B18: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80055B1C: addiu       $s0, $s0, 0x1BC4
    ctx->r16 = ADD32(ctx->r16, 0X1BC4);
    // 0x80055B20: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80055B24: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80055B28: beq         $a0, $zero, L_80055B3C
    if (ctx->r4 == 0) {
        // 0x80055B2C: addiu       $s7, $s7, 0x1BD0
        ctx->r23 = ADD32(ctx->r23, 0X1BD0);
            goto L_80055B3C;
    }
    // 0x80055B2C: addiu       $s7, $s7, 0x1BD0
    ctx->r23 = ADD32(ctx->r23, 0X1BD0);
    // 0x80055B30: jal         0x800075A0
    // 0x80055B34: nop

    func_800075A0(rdram, ctx);
        goto after_11;
    // 0x80055B34: nop

    after_11:
    // 0x80055B38: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80055B3C:
    // 0x80055B3C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x80055B40: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x80055B44: lw          $t6, 0x8($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X8);
    // 0x80055B48: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80055B4C: beq         $t6, $zero, L_80055B60
    if (ctx->r14 == 0) {
        // 0x80055B50: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80055B60;
    }
    // 0x80055B50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80055B54: b           L_80055B60
    // 0x80055B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80055B60;
    // 0x80055B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80055B5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80055B60:
    // 0x80055B60: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x80055B64: jal         0x800305D0
    // 0x80055B68: nop

    func_800305D0(rdram, ctx);
        goto after_12;
    // 0x80055B68: nop

    after_12:
    // 0x80055B6C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80055B70: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x80055B74: nop

    // 0x80055B78: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80055B7C: beq         $t9, $zero, L_80055BA4
    if (ctx->r25 == 0) {
        // 0x80055B80: nop
    
            goto L_80055BA4;
    }
    // 0x80055B80: nop

L_80055B84:
    // 0x80055B84: jal         0x80007AB0
    // 0x80055B88: nop

    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x80055B88: nop

    after_13:
    // 0x80055B8C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80055B90: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80055B94: nop

    // 0x80055B98: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80055B9C: bne         $t7, $zero, L_80055B84
    if (ctx->r15 != 0) {
        // 0x80055BA0: nop
    
            goto L_80055B84;
    }
    // 0x80055BA0: nop

L_80055BA4:
    // 0x80055BA4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80055BA8: nop

    // 0x80055BAC: bne         $t8, $zero, L_80055BCC
    if (ctx->r24 != 0) {
        // 0x80055BB0: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80055BCC;
    }
    // 0x80055BB0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80055BB4: addiu       $a0, $a0, 0x2E9C
    ctx->r4 = ADD32(ctx->r4, 0X2E9C);
    // 0x80055BB8: ori         $a1, $zero, 0xFED0
    ctx->r5 = 0 | 0XFED0;
    // 0x80055BBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80055BC0: jal         0x80007C3C
    // 0x80055BC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_14;
    // 0x80055BC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x80055BC8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80055BCC:
    // 0x80055BCC: jal         0x80051EA8
    // 0x80055BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80051EA8(rdram, ctx);
        goto after_15;
    // 0x80055BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x80055BD4: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80055BD8: addiu       $s0, $s0, 0x1BC8
    ctx->r16 = ADD32(ctx->r16, 0X1BC8);
    // 0x80055BDC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80055BE0: nop

    // 0x80055BE4: beq         $a0, $zero, L_80055BF8
    if (ctx->r4 == 0) {
        // 0x80055BE8: nop
    
            goto L_80055BF8;
    }
    // 0x80055BE8: nop

    // 0x80055BEC: jal         0x80014BF4
    // 0x80055BF0: nop

    func_80014BF4(rdram, ctx);
        goto after_16;
    // 0x80055BF0: nop

    after_16:
    // 0x80055BF4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80055BF8:
    // 0x80055BF8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80055BFC: addiu       $s0, $s0, 0x1BCC
    ctx->r16 = ADD32(ctx->r16, 0X1BCC);
    // 0x80055C00: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80055C04: nop

    // 0x80055C08: beq         $a0, $zero, L_80055C1C
    if (ctx->r4 == 0) {
        // 0x80055C0C: nop
    
            goto L_80055C1C;
    }
    // 0x80055C0C: nop

    // 0x80055C10: jal         0x800075A0
    // 0x80055C14: nop

    func_800075A0(rdram, ctx);
        goto after_17;
    // 0x80055C14: nop

    after_17:
    // 0x80055C18: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80055C1C:
    // 0x80055C1C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x80055C20: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x80055C24: blez        $v0, L_80055C58
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80055C28: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_80055C58;
    }
    // 0x80055C28: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80055C2C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80055C30: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80055C34: addiu       $s0, $s0, -0x2AF0
    ctx->r16 = ADD32(ctx->r16, -0X2AF0);
L_80055C38:
    // 0x80055C38: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80055C3C: nop

    // 0x80055C40: beq         $a0, $t6, L_80055C5C
    if (ctx->r4 == ctx->r14) {
        // 0x80055C44: slt         $at, $fp, $v0
        ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80055C5C;
    }
    // 0x80055C44: slt         $at, $fp, $v0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80055C48: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80055C4C: slt         $at, $fp, $v0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80055C50: bne         $at, $zero, L_80055C38
    if (ctx->r1 != 0) {
        // 0x80055C54: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_80055C38;
    }
    // 0x80055C54: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_80055C58:
    // 0x80055C58: slt         $at, $fp, $v0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
L_80055C5C:
    // 0x80055C5C: beq         $at, $zero, L_80055D2C
    if (ctx->r1 == 0) {
        // 0x80055C60: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_80055D2C;
    }
    // 0x80055C60: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x80055C64: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80055C68: addiu       $t9, $t9, -0x2AF0
    ctx->r25 = ADD32(ctx->r25, -0X2AF0);
    // 0x80055C6C: sll         $t8, $fp, 5
    ctx->r24 = S32(ctx->r30 << 5);
    // 0x80055C70: sw          $t7, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r15;
    // 0x80055C74: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80055C78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80055C7C:
    // 0x80055C7C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80055C80: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80055C84: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80055C88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80055C8C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x80055C90: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x80055C94: jal         0x8002D000
    // 0x80055C98: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    func_8002D000(rdram, ctx);
        goto after_18;
    // 0x80055C98: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x80055C9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80055CA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80055CA4: jal         0x8004A0A0
    // 0x80055CA8: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    func_8004A0A0(rdram, ctx);
        goto after_19;
    // 0x80055CA8: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    after_19:
    // 0x80055CAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80055CB0: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80055CB4: bne         $at, $zero, L_80055C7C
    if (ctx->r1 != 0) {
        // 0x80055CB8: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80055C7C;
    }
    // 0x80055CB8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80055CBC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80055CC0: lw          $t6, -0x4320($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4320);
    // 0x80055CC4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80055CC8: lw          $v1, 0xC($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XC);
    // 0x80055CCC: sll         $t7, $fp, 5
    ctx->r15 = S32(ctx->r30 << 5);
    // 0x80055CD0: blez        $v1, L_80055D2C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80055CD4: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80055D2C;
    }
    // 0x80055CD4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80055CD8: addiu       $t8, $t8, -0x2AF0
    ctx->r24 = ADD32(ctx->r24, -0X2AF0);
    // 0x80055CDC: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
L_80055CE0:
    // 0x80055CE0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80055CE4: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80055CE8: beq         $v0, $zero, L_80055D1C
    if (ctx->r2 == 0) {
        // 0x80055CEC: addu        $t6, $v0, $t9
        ctx->r14 = ADD32(ctx->r2, ctx->r25);
            goto L_80055D1C;
    }
    // 0x80055CEC: addu        $t6, $v0, $t9
    ctx->r14 = ADD32(ctx->r2, ctx->r25);
    // 0x80055CF0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80055CF4: nop

    // 0x80055CF8: beq         $t7, $zero, L_80055D1C
    if (ctx->r15 == 0) {
        // 0x80055CFC: nop
    
            goto L_80055D1C;
    }
    // 0x80055CFC: nop

    // 0x80055D00: jal         0x8002AB68
    // 0x80055D04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002AB68(rdram, ctx);
        goto after_20;
    // 0x80055D04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x80055D08: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80055D0C: lw          $t8, -0x4320($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4320);
    // 0x80055D10: nop

    // 0x80055D14: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x80055D18: nop

L_80055D1C:
    // 0x80055D1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80055D20: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80055D24: bne         $at, $zero, L_80055CE0
    if (ctx->r1 != 0) {
        // 0x80055D28: nop
    
            goto L_80055CE0;
    }
    // 0x80055D28: nop

L_80055D2C:
    // 0x80055D2C: jal         0x8002F22C
    // 0x80055D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F22C(rdram, ctx);
        goto after_21;
    // 0x80055D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x80055D34: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80055D38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80055D3C: addiu       $a0, $a0, -0x2B58
    ctx->r4 = ADD32(ctx->r4, -0X2B58);
    // 0x80055D40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80055D44: jal         0x80076BF8
    // 0x80055D48: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x80055D48: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_22:
    // 0x80055D4C: jal         0x8002F20C
    // 0x80055D50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F20C(rdram, ctx);
        goto after_23;
    // 0x80055D50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x80055D54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80055D58: sw          $v0, -0x2B10($at)
    MEM_W(-0X2B10, ctx->r1) = ctx->r2;
    // 0x80055D5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80055D60: jal         0x8002B4A8
    // 0x80055D64: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8002B4A8(rdram, ctx);
        goto after_24;
    // 0x80055D64: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_24:
    // 0x80055D68: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80055D6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80055D70: ori         $t6, $t9, 0x3
    ctx->r14 = ctx->r25 | 0X3;
    // 0x80055D74: jal         0x8002D000
    // 0x80055D78: sw          $t6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r14;
    func_8002D000(rdram, ctx);
        goto after_25;
    // 0x80055D78: sw          $t6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r14;
    after_25:
    // 0x80055D7C: addiu       $s4, $sp, 0x54
    ctx->r20 = ADD32(ctx->r29, 0X54);
    // 0x80055D80: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80055D84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80055D88: jal         0x8004A0A0
    // 0x80055D8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_26;
    // 0x80055D8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_26:
    // 0x80055D90: jal         0x8005A3A8
    // 0x80055D94: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    func_8005A3A8(rdram, ctx);
        goto after_27;
    // 0x80055D94: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    after_27:
    // 0x80055D98: blez        $v0, L_80055E14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80055D9C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80055E14;
    }
    // 0x80055D9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80055DA0: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x80055DA4: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
    // 0x80055DA8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80055DAC:
    // 0x80055DAC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80055DB0: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x80055DB4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80055DB8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80055DBC: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x80055DC0: jal         0x8004A0A0
    // 0x80055DC4: nop

    func_8004A0A0(rdram, ctx);
        goto after_28;
    // 0x80055DC4: nop

    after_28:
    // 0x80055DC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80055DCC: jal         0x8002848C
    // 0x80055DD0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8002848C(rdram, ctx);
        goto after_29;
    // 0x80055DD0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_29:
    // 0x80055DD4: lui         $at, 0x42CC
    ctx->r1 = S32(0X42CC << 16);
    // 0x80055DD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80055DDC: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80055DE0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80055DE4: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80055DE8: bc1f        L_80055E04
    if (!c1cs) {
        // 0x80055DEC: nop
    
            goto L_80055E04;
    }
    // 0x80055DEC: nop

    // 0x80055DF0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80055DF4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x80055DF8: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x80055DFC: jal         0x8004A0A0
    // 0x80055E00: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_30;
    // 0x80055E00: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_30:
L_80055E04:
    // 0x80055E04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80055E08: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80055E0C: bne         $at, $zero, L_80055DAC
    if (ctx->r1 != 0) {
        // 0x80055E10: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_80055DAC;
    }
    // 0x80055E10: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_80055E14:
    // 0x80055E14: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80055E18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055E1C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80055E20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80055E24: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80055E28: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80055E2C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80055E30: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80055E34: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80055E38: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80055E3C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x80055E40: jr          $ra
    // 0x80055E44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80055E44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80055E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055E48: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80055E4C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80055E50: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80055E54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80055E58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80055E5C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80055E60: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80055E64: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80055E68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80055E6C: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x80055E70: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80055E74: jal         0x80076BD0
    // 0x80055E78: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    strlen_recomp(rdram, ctx);
        goto after_0;
    // 0x80055E78: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_0:
    // 0x80055E7C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80055E80: jal         0x80076BD0
    // 0x80055E84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    strlen_recomp(rdram, ctx);
        goto after_1;
    // 0x80055E84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_1:
    // 0x80055E88: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80055E8C: subu        $t8, $s1, $t7
    ctx->r24 = SUB32(ctx->r17, ctx->r15);
    // 0x80055E90: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80055E94: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80055E98: srl         $t0, $t9, 2
    ctx->r8 = S32(U32(ctx->r25) >> 2);
    // 0x80055E9C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80055EA0: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x80055EA4: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x80055EA8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80055EAC: lw          $a0, 0x1BC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BC0);
    // 0x80055EB0: nop

    // 0x80055EB4: beq         $a0, $zero, L_80055ED0
    if (ctx->r4 == 0) {
        // 0x80055EB8: lw          $t3, 0x64($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X64);
            goto L_80055ED0;
    }
    // 0x80055EB8: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80055EBC: jal         0x800075A0
    // 0x80055EC0: nop

    func_800075A0(rdram, ctx);
        goto after_2;
    // 0x80055EC0: nop

    after_2:
    // 0x80055EC4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80055EC8: sw          $zero, 0x1BC0($at)
    MEM_W(0X1BC0, ctx->r1) = 0;
    // 0x80055ECC: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
L_80055ED0:
    // 0x80055ED0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80055ED4: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80055ED8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80055EDC: beq         $v0, $at, L_80056178
    if (ctx->r2 == ctx->r1) {
        // 0x80055EE0: addiu       $s1, $s1, 0x1BB8
        ctx->r17 = ADD32(ctx->r17, 0X1BB8);
            goto L_80056178;
    }
    // 0x80055EE0: addiu       $s1, $s1, 0x1BB8
    ctx->r17 = ADD32(ctx->r17, 0X1BB8);
    // 0x80055EE4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80055EE8: nop

    // 0x80055EEC: beq         $a0, $zero, L_80055F24
    if (ctx->r4 == 0) {
        // 0x80055EF0: nop
    
            goto L_80055F24;
    }
    // 0x80055EF0: nop

    // 0x80055EF4: jal         0x80014BF4
    // 0x80055EF8: nop

    func_80014BF4(rdram, ctx);
        goto after_3;
    // 0x80055EF8: nop

    after_3:
    // 0x80055EFC: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80055F00: addiu       $s2, $s2, 0x1BBC
    ctx->r18 = ADD32(ctx->r18, 0X1BBC);
    // 0x80055F04: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80055F08: jal         0x80014BF4
    // 0x80055F0C: nop

    func_80014BF4(rdram, ctx);
        goto after_4;
    // 0x80055F0C: nop

    after_4:
    // 0x80055F10: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x80055F14: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80055F18: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x80055F1C: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80055F20: nop

L_80055F24:
    // 0x80055F24: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80055F28: slti        $at, $v0, 0xB39
    ctx->r1 = SIGNED(ctx->r2) < 0XB39 ? 1 : 0;
    // 0x80055F2C: bne         $at, $zero, L_80055F74
    if (ctx->r1 != 0) {
        // 0x80055F30: addiu       $s2, $s2, 0x1BBC
        ctx->r18 = ADD32(ctx->r18, 0X1BBC);
            goto L_80055F74;
    }
    // 0x80055F30: addiu       $s2, $s2, 0x1BBC
    ctx->r18 = ADD32(ctx->r18, 0X1BBC);
    // 0x80055F34: slti        $at, $v0, 0xB3D
    ctx->r1 = SIGNED(ctx->r2) < 0XB3D ? 1 : 0;
    // 0x80055F38: beq         $at, $zero, L_80055F74
    if (ctx->r1 == 0) {
        // 0x80055F3C: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80055F74;
    }
    // 0x80055F3C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80055F40: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80055F44: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80055F48: lui         $at, 0x2C
    ctx->r1 = S32(0X2C << 16);
    // 0x80055F4C: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x80055F50: beq         $t7, $zero, L_80055F60
    if (ctx->r15 == 0) {
        // 0x80055F54: sll         $t8, $zero, 2
        ctx->r24 = S32(0 << 2);
            goto L_80055F60;
    }
    // 0x80055F54: sll         $t8, $zero, 2
    ctx->r24 = S32(0 << 2);
    // 0x80055F58: b           L_80055F78
    // 0x80055F5C: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
        goto L_80055F78;
    // 0x80055F5C: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
L_80055F60:
    // 0x80055F60: lbu         $a1, 0x20($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X20);
    // 0x80055F64: nop

    // 0x80055F68: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80055F6C: b           L_80055F78
    // 0x80055F70: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
        goto L_80055F78;
    // 0x80055F70: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
L_80055F74:
    // 0x80055F74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80055F78:
    // 0x80055F78: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x80055F7C: jal         0x80015784
    // 0x80055F80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015784(rdram, ctx);
        goto after_5;
    // 0x80055F80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80055F84: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80055F88: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80055F8C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80055F90: lui         $at, 0x4284
    ctx->r1 = S32(0X4284 << 16);
    // 0x80055F94: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x80055F98: beq         $t0, $zero, L_80055FB0
    if (ctx->r8 == 0) {
        // 0x80055F9C: addiu       $a1, $sp, 0x50
        ctx->r5 = ADD32(ctx->r29, 0X50);
            goto L_80055FB0;
    }
    // 0x80055F9C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80055FA0: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x80055FA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80055FA8: b           L_80055FC0
    // 0x80055FAC: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
        goto L_80055FC0;
    // 0x80055FAC: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
L_80055FB0:
    // 0x80055FB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80055FB4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80055FB8: nop

    // 0x80055FBC: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
L_80055FC0:
    // 0x80055FC0: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x80055FC4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80055FC8: andi        $t3, $t2, 0x10
    ctx->r11 = ctx->r10 & 0X10;
    // 0x80055FCC: beq         $t3, $zero, L_80055FE8
    if (ctx->r11 == 0) {
        // 0x80055FD0: nop
    
            goto L_80055FE8;
    }
    // 0x80055FD0: nop

    // 0x80055FD4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x80055FD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80055FDC: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80055FE0: b           L_80055FF8
    // 0x80055FE4: swc1        $f8, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f8.u32l;
        goto L_80055FF8;
    // 0x80055FE4: swc1        $f8, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f8.u32l;
L_80055FE8:
    // 0x80055FE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80055FEC: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80055FF0: nop

    // 0x80055FF4: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
L_80055FF8:
    // 0x80055FF8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80055FFC: jal         0x80015880
    // 0x80056000: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_80015880(rdram, ctx);
        goto after_6;
    // 0x80056000: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_6:
    // 0x80056004: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80056008: addiu       $a0, $a0, 0xBB4
    ctx->r4 = ADD32(ctx->r4, 0XBB4);
    // 0x8005600C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80056010: jal         0x8001574C
    // 0x80056014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001574C(rdram, ctx);
        goto after_7;
    // 0x80056014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80056018: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8005601C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80056020: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80056024: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x80056028: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8005602C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80056030: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80056034: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80056038: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x8005603C: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80056040: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x80056044: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x80056048: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8005604C: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80056050: lwc1        $f6, 0x20($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80056054: lui         $t4, 0xAAAA
    ctx->r12 = S32(0XAAAA << 16);
    // 0x80056058: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8005605C: ori         $t4, $t4, 0xAAFF
    ctx->r12 = ctx->r12 | 0XAAFF;
    // 0x80056060: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80056064: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80056068: swc1        $f10, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f10.u32l;
    // 0x8005606C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80056070: nop

    // 0x80056074: sw          $t6, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r14;
    // 0x80056078: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8005607C: nop

    // 0x80056080: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    // 0x80056084: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80056088: nop

    // 0x8005608C: sw          $t4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r12;
    // 0x80056090: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80056094: nop

    // 0x80056098: sw          $zero, 0x40($t7)
    MEM_W(0X40, ctx->r15) = 0;
L_8005609C:
    // 0x8005609C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800560A0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800560A4: beq         $a0, $zero, L_80056154
    if (ctx->r4 == 0) {
        // 0x800560A8: nop
    
            goto L_80056154;
    }
    // 0x800560A8: nop

    // 0x800560AC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800560B0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800560B4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800560B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800560BC: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x800560C0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800560C4: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800560C8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800560CC: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800560D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800560D4: nop

    // 0x800560D8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800560DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800560E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800560E4: nop

    // 0x800560E8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800560EC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800560F0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800560F4: jal         0x80015898
    // 0x800560F8: nop

    func_80015898(rdram, ctx);
        goto after_8;
    // 0x800560F8: nop

    after_8:
    // 0x800560FC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80056100: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80056104: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80056108: mul.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8005610C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80056110: nop

    // 0x80056114: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80056118: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005611C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80056120: nop

    // 0x80056124: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80056128: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8005612C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80056130: jal         0x80007AB0
    // 0x80056134: sw          $t6, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r14;
    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80056134: sw          $t6, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r14;
    after_9:
    // 0x80056138: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005613C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80056140: bne         $s0, $at, L_8005609C
    if (ctx->r16 != ctx->r1) {
        // 0x80056144: nop
    
            goto L_8005609C;
    }
    // 0x80056144: nop

    // 0x80056148: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005614C: lw          $a0, 0x1BB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB8);
    // 0x80056150: nop

L_80056154:
    // 0x80056154: beq         $a0, $zero, L_80056178
    if (ctx->r4 == 0) {
        // 0x80056158: nop
    
            goto L_80056178;
    }
    // 0x80056158: nop

    // 0x8005615C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80056160: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80056164: jal         0x80015898
    // 0x80056168: nop

    func_80015898(rdram, ctx);
        goto after_10;
    // 0x80056168: nop

    after_10:
    // 0x8005616C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80056170: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x80056174: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
L_80056178:
    // 0x80056178: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8005617C: addiu       $a0, $a0, 0x2DF0
    ctx->r4 = ADD32(ctx->r4, 0X2DF0);
    // 0x80056180: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x80056184: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80056188: jal         0x80007C3C
    // 0x8005618C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_11;
    // 0x8005618C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x80056190: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x80056194: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056198: sw          $v0, 0x1BC0($at)
    MEM_W(0X1BC0, ctx->r1) = ctx->r2;
    // 0x8005619C: lw          $v1, 0x4($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X4);
    // 0x800561A0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x800561A4: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
    // 0x800561A8: beq         $t5, $zero, L_800561B8
    if (ctx->r13 == 0) {
        // 0x800561AC: andi        $t8, $v1, 0x10
        ctx->r24 = ctx->r3 & 0X10;
            goto L_800561B8;
    }
    // 0x800561AC: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    // 0x800561B0: b           L_800561C8
    // 0x800561B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800561C8;
    // 0x800561B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800561B8:
    // 0x800561B8: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x800561BC: nop

    // 0x800561C0: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x800561C4: nop

L_800561C8:
    // 0x800561C8: beq         $t8, $zero, L_800561D8
    if (ctx->r24 == 0) {
        // 0x800561CC: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_800561D8;
    }
    // 0x800561CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x800561D0: b           L_800561DC
    // 0x800561D4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
        goto L_800561DC;
    // 0x800561D4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
L_800561D8:
    // 0x800561D8: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
L_800561DC:
    // 0x800561DC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800561E0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800561E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800561E8: jal         0x800290C0
    // 0x800561EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_800290C0(rdram, ctx);
        goto after_12;
    // 0x800561EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x800561F0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800561F4: lw          $t0, 0x1BC0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1BC0);
    // 0x800561F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800561FC: sw          $v0, -0x29D8($at)
    MEM_W(-0X29D8, ctx->r1) = ctx->r2;
    // 0x80056200: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80056204: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80056208: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005620C: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x80056210: nop

    // 0x80056214: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80056218: beq         $t2, $zero, L_8005622C
    if (ctx->r10 == 0) {
        // 0x8005621C: nop
    
            goto L_8005622C;
    }
    // 0x8005621C: nop

    // 0x80056220: lw          $a0, -0x29D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X29D8);
    // 0x80056224: jal         0x80029250
    // 0x80056228: nop

    func_80029250(rdram, ctx);
        goto after_13;
    // 0x80056228: nop

    after_13:
L_8005622C:
    // 0x8005622C: jal         0x80007AB0
    // 0x80056230: nop

    func_80007AB0(rdram, ctx);
        goto after_14;
    // 0x80056230: nop

    after_14:
    // 0x80056234: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80056238: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005623C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80056240: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80056244: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80056248: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8005624C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80056250: jr          $ra
    // 0x80056254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80056254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80056258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005625C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056260: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80056264: nop

    // 0x80056268: addiu       $t6, $v0, 0x4
    ctx->r14 = ADD32(ctx->r2, 0X4);
    // 0x8005626C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80056270: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80056274: jal         0x8000797C
    // 0x80056278: nop

    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x80056278: nop

    after_0:
    // 0x8005627C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80056280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80056284: jr          $ra
    // 0x80056288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80056288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8005628C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005628C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80056290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056294: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80056298: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005629C: addiu       $t6, $v0, 0xC
    ctx->r14 = ADD32(ctx->r2, 0XC);
    // 0x800562A0: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x800562A4: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800562A8: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800562AC: beq         $a1, $v1, L_80056328
    if (ctx->r5 == ctx->r3) {
        // 0x800562B0: sll         $t7, $v1, 0
        ctx->r15 = S32(ctx->r3 << 0);
            goto L_80056328;
    }
    // 0x800562B0: sll         $t7, $v1, 0
    ctx->r15 = S32(ctx->r3 << 0);
    // 0x800562B4: bgez        $t7, L_80056328
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800562B8: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80056328;
    }
    // 0x800562B8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800562BC: lw          $a0, 0x1BD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BD4);
    // 0x800562C0: nop

    // 0x800562C4: beq         $a0, $zero, L_800562DC
    if (ctx->r4 == 0) {
        // 0x800562C8: nop
    
            goto L_800562DC;
    }
    // 0x800562C8: nop

    // 0x800562CC: jal         0x800075A0
    // 0x800562D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x800562D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x800562D4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800562D8: nop

L_800562DC:
    // 0x800562DC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800562E0: addiu       $a0, $a0, -0x29D0
    ctx->r4 = ADD32(ctx->r4, -0X29D0);
    // 0x800562E4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800562E8: jal         0x80076BF8
    // 0x800562EC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800562EC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
    // 0x800562F0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800562F4: addiu       $a0, $a0, 0x2C10
    ctx->r4 = ADD32(ctx->r4, 0X2C10);
    // 0x800562F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x800562FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80056300: jal         0x80007C3C
    // 0x80056304: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_2;
    // 0x80056304: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80056308: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005630C: sw          $v0, 0x1BD4($at)
    MEM_W(0X1BD4, ctx->r1) = ctx->r2;
    // 0x80056310: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80056314: lw          $t9, 0x1BD4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1BD4);
    // 0x80056318: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005631C: addiu       $t8, $t8, -0x29D0
    ctx->r24 = ADD32(ctx->r24, -0X29D0);
    // 0x80056320: b           L_80056438
    // 0x80056324: sw          $t8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->r24;
        goto L_80056438;
    // 0x80056324: sw          $t8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->r24;
L_80056328:
    // 0x80056328: beq         $a1, $v1, L_80056378
    if (ctx->r5 == ctx->r3) {
        // 0x8005632C: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_80056378;
    }
    // 0x8005632C: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80056330: bgez        $t2, L_80056378
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80056334: lui         $t3, 0x800B
        ctx->r11 = S32(0X800B << 16);
            goto L_80056378;
    }
    // 0x80056334: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80056338: lw          $t3, -0x2B08($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2B08);
    // 0x8005633C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80056340: bne         $t3, $zero, L_80056438
    if (ctx->r11 != 0) {
        // 0x80056344: sll         $t8, $a3, 16
        ctx->r24 = S32(ctx->r7 << 16);
            goto L_80056438;
    }
    // 0x80056344: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x80056348: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005634C: lh          $a0, 0x2($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X2);
    // 0x80056350: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80056354: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80056358: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8005635C: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80056360: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80056364: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80056368: jal         0x800201B4
    // 0x8005636C: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    func_800201B4(rdram, ctx);
        goto after_3;
    // 0x8005636C: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    after_3:
    // 0x80056370: b           L_8005643C
    // 0x80056374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005643C;
    // 0x80056374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056378:
    // 0x80056378: beq         $a1, $v1, L_800563C8
    if (ctx->r5 == ctx->r3) {
        // 0x8005637C: sll         $t2, $v1, 1
        ctx->r10 = S32(ctx->r3 << 1);
            goto L_800563C8;
    }
    // 0x8005637C: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x80056380: bgez        $t2, L_800563C8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80056384: lui         $t3, 0x800B
        ctx->r11 = S32(0X800B << 16);
            goto L_800563C8;
    }
    // 0x80056384: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80056388: lw          $t3, -0x2B08($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2B08);
    // 0x8005638C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80056390: beq         $t3, $zero, L_800563B0
    if (ctx->r11 == 0) {
        // 0x80056394: sll         $t4, $a2, 16
        ctx->r12 = S32(ctx->r6 << 16);
            goto L_800563B0;
    }
    // 0x80056394: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x80056398: lh          $a0, 0x2($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X2);
    // 0x8005639C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800563A0: jal         0x8001FFE4
    // 0x800563A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FFE4(rdram, ctx);
        goto after_4;
    // 0x800563A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x800563A8: b           L_8005643C
    // 0x800563AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005643C;
    // 0x800563AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800563B0:
    // 0x800563B0: lh          $a0, 0x2($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X2);
    // 0x800563B4: lh          $a1, 0x6($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X6);
    // 0x800563B8: jal         0x8001FFE4
    // 0x800563BC: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    func_8001FFE4(rdram, ctx);
        goto after_5;
    // 0x800563BC: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    after_5:
    // 0x800563C0: b           L_8005643C
    // 0x800563C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005643C;
    // 0x800563C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800563C8:
    // 0x800563C8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800563CC: lw          $t6, -0x2B08($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2B08);
    // 0x800563D0: nop

    // 0x800563D4: bne         $t6, $zero, L_800563FC
    if (ctx->r14 != 0) {
        // 0x800563D8: nop
    
            goto L_800563FC;
    }
    // 0x800563D8: nop

    // 0x800563DC: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x800563E0: nop

    // 0x800563E4: beq         $a1, $a0, L_800563FC
    if (ctx->r5 == ctx->r4) {
        // 0x800563E8: nop
    
            goto L_800563FC;
    }
    // 0x800563E8: nop

    // 0x800563EC: jal         0x80027874
    // 0x800563F0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_80027874(rdram, ctx);
        goto after_6;
    // 0x800563F0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_6:
    // 0x800563F4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800563F8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_800563FC:
    // 0x800563FC: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x80056400: nop

    // 0x80056404: beq         $a1, $t0, L_8005641C
    if (ctx->r5 == ctx->r8) {
        // 0x80056408: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8005641C;
    }
    // 0x80056408: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8005640C: jal         0x80027CEC
    // 0x80056410: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_80027CEC(rdram, ctx);
        goto after_7;
    // 0x80056410: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_7:
    // 0x80056414: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80056418: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_8005641C:
    // 0x8005641C: lw          $v1, 0x8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8);
    // 0x80056420: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80056424: beq         $a1, $v1, L_80056438
    if (ctx->r5 == ctx->r3) {
        // 0x80056428: addu        $a0, $a0, $v1
        ctx->r4 = ADD32(ctx->r4, ctx->r3);
            goto L_80056438;
    }
    // 0x80056428: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8005642C: lb          $a0, 0x1BD8($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X1BD8);
    // 0x80056430: jal         0x80027118
    // 0x80056434: nop

    func_80027118(rdram, ctx);
        goto after_8;
    // 0x80056434: nop

    after_8:
L_80056438:
    // 0x80056438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005643C:
    // 0x8005643C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80056440: jr          $ra
    // 0x80056444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80056444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80056448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005644C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056450: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80056454: nop

    // 0x80056458: addiu       $t6, $v1, 0x10
    ctx->r14 = ADD32(ctx->r3, 0X10);
    // 0x8005645C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80056460: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80056464: jal         0x8005D1B4
    // 0x80056468: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    func_8005D1B4(rdram, ctx);
        goto after_0;
    // 0x80056468: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    after_0:
    // 0x8005646C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80056470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80056474: jr          $ra
    // 0x80056478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80056478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8005647C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005647C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056484: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80056488: nop

    // 0x8005648C: addiu       $t6, $v0, 0xC
    ctx->r14 = ADD32(ctx->r2, 0XC);
    // 0x80056490: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80056494: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80056498: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8005649C: andi        $t7, $a1, 0x4
    ctx->r15 = ctx->r5 & 0X4;
    // 0x800564A0: beq         $t7, $zero, L_800564D8
    if (ctx->r15 == 0) {
        // 0x800564A4: andi        $t3, $a1, 0x1
        ctx->r11 = ctx->r5 & 0X1;
            goto L_800564D8;
    }
    // 0x800564A4: andi        $t3, $a1, 0x1
    ctx->r11 = ctx->r5 & 0X1;
    // 0x800564A8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x800564AC: lh          $a3, 0x6($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X6);
    // 0x800564B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800564B4: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800564B8: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x800564BC: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x800564C0: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800564C4: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800564C8: jal         0x80006170
    // 0x800564CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80006170(rdram, ctx);
        goto after_0;
    // 0x800564CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800564D0: b           L_80056534
    // 0x800564D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80056534;
    // 0x800564D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800564D8:
    // 0x800564D8: beq         $t3, $zero, L_80056520
    if (ctx->r11 == 0) {
        // 0x800564DC: andi        $t5, $a1, 0x2
        ctx->r13 = ctx->r5 & 0X2;
            goto L_80056520;
    }
    // 0x800564DC: andi        $t5, $a1, 0x2
    ctx->r13 = ctx->r5 & 0X2;
    // 0x800564E0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800564E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800564E8: bne         $v0, $at, L_800564F8
    if (ctx->r2 != ctx->r1) {
        // 0x800564EC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800564F8;
    }
    // 0x800564EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800564F0: b           L_800564F8
    // 0x800564F4: ori         $a0, $zero, 0xFFFF
    ctx->r4 = 0 | 0XFFFF;
        goto L_800564F8;
    // 0x800564F4: ori         $a0, $zero, 0xFFFF
    ctx->r4 = 0 | 0XFFFF;
L_800564F8:
    // 0x800564F8: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x800564FC: nop

    // 0x80056500: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80056504: nop

    // 0x80056508: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005650C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80056510: jal         0x8002F40C
    // 0x80056514: nop

    func_8002F40C(rdram, ctx);
        goto after_1;
    // 0x80056514: nop

    after_1:
    // 0x80056518: b           L_80056534
    // 0x8005651C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80056534;
    // 0x8005651C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056520:
    // 0x80056520: beq         $t5, $zero, L_80056534
    if (ctx->r13 == 0) {
        // 0x80056524: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80056534;
    }
    // 0x80056524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80056528: jal         0x8002B118
    // 0x8005652C: nop

    func_8002B118(rdram, ctx);
        goto after_2;
    // 0x8005652C: nop

    after_2:
    // 0x80056530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056534:
    // 0x80056534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80056538: jr          $ra
    // 0x8005653C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8005653C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80056540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056540: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80056544: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056548: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8005654C: lhu         $v0, 0x2B8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2B8);
    // 0x80056550: jr          $ra
    // 0x80056554: nop

    return;
    // 0x80056554: nop

;}
RECOMP_FUNC void func_80056558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056558: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8005655C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056560: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80056564: lhu         $v0, 0x2C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2C8);
    // 0x80056568: jr          $ra
    // 0x8005656C: nop

    return;
    // 0x8005656C: nop

;}
RECOMP_FUNC void func_80056570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056570: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80056574: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056578: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8005657C: lhu         $v0, 0x2D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2D0);
    // 0x80056580: jr          $ra
    // 0x80056584: nop

    return;
    // 0x80056584: nop

;}
RECOMP_FUNC void func_80056588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056588: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8005658C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80056590: lb          $v0, 0x2D8($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2D8);
    // 0x80056594: jr          $ra
    // 0x80056598: nop

    return;
    // 0x80056598: nop

;}
RECOMP_FUNC void func_8005659C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005659C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800565A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800565A4: lb          $v0, 0x2DC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2DC);
    // 0x800565A8: jr          $ra
    // 0x800565AC: nop

    return;
    // 0x800565AC: nop

;}
RECOMP_FUNC void func_800565B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800565B0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800565B4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800565B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800565BC: lh          $v0, 0x2E0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2E0);
    // 0x800565C0: jr          $ra
    // 0x800565C4: nop

    return;
    // 0x800565C4: nop

;}
RECOMP_FUNC void func_800565C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800565C8: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800565CC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800565D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800565D4: lh          $v0, 0x2E8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2E8);
    // 0x800565D8: jr          $ra
    // 0x800565DC: nop

    return;
    // 0x800565DC: nop

;}
RECOMP_FUNC void func_800565E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800565E0: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800565E4: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x800565E8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800565EC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800565F0: lb          $v0, 0x300($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X300);
    // 0x800565F4: jr          $ra
    // 0x800565F8: nop

    return;
    // 0x800565F8: nop

;}
RECOMP_FUNC void func_800565FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800565FC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80056600: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80056604: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056608: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8005660C: lb          $v0, 0x320($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X320);
    // 0x80056610: jr          $ra
    // 0x80056614: nop

    return;
    // 0x80056614: nop

;}
RECOMP_FUNC void func_80056618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056618: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8005661C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056620: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80056624: lhu         $v0, 0x5290($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5290);
    // 0x80056628: jr          $ra
    // 0x8005662C: nop

    return;
    // 0x8005662C: nop

;}
RECOMP_FUNC void func_80056630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056630: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80056634: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056638: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8005663C: lhu         $v0, 0x52A0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X52A0);
    // 0x80056640: jr          $ra
    // 0x80056644: nop

    return;
    // 0x80056644: nop

;}
RECOMP_FUNC void func_80056648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056648: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8005664C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80056650: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80056654: lhu         $v0, 0x52A8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X52A8);
    // 0x80056658: jr          $ra
    // 0x8005665C: nop

    return;
    // 0x8005665C: nop

;}
RECOMP_FUNC void func_80056660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056664: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80056668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005666C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056670: jal         0x80003350
    // 0x80056674: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80003350(rdram, ctx);
        goto after_0;
    // 0x80056674: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80056678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005667C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80056680: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80056684: jr          $ra
    // 0x80056688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80056688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80056690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056690: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80056694: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80056698: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005669C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800566A0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800566A4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800566A8: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x800566AC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800566B0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800566B4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800566B8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800566BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800566C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800566C4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800566C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800566CC: addiu       $s3, $s3, -0x29C0
    ctx->r19 = ADD32(ctx->r19, -0X29C0);
    // 0x800566D0: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_800566D4:
    // 0x800566D4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800566D8: addiu       $s0, $s0, -0x29B0
    ctx->r16 = ADD32(ctx->r16, -0X29B0);
    // 0x800566DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800566E0:
    // 0x800566E0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800566E4: nop

    // 0x800566E8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800566EC: beq         $t7, $zero, L_800567FC
    if (ctx->r15 == 0) {
        // 0x800566F0: nop
    
            goto L_800567FC;
    }
    // 0x800566F0: nop

    // 0x800566F4: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x800566F8: nop

    // 0x800566FC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80056700: bne         $t9, $zero, L_800567FC
    if (ctx->r25 != 0) {
        // 0x80056704: sw          $t9, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r25;
            goto L_800567FC;
    }
    // 0x80056704: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80056708: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x8005670C: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80056710: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80056714: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80056718: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x8005671C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80056720: lhu         $v0, 0x2($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X2);
    // 0x80056724: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x80056728: beq         $v0, $zero, L_800567F0
    if (ctx->r2 == 0) {
        // 0x8005672C: sra         $t9, $a0, 16
        ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
            goto L_800567F0;
    }
    // 0x8005672C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056730: sll         $s1, $s2, 16
    ctx->r17 = S32(ctx->r18 << 16);
    // 0x80056734: sra         $t9, $s1, 16
    ctx->r25 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80056738: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8005673C: sll         $a0, $t9, 16
    ctx->r4 = S32(ctx->r25 << 16);
    // 0x80056740: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80056744: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056748: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x8005674C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80056750: jal         0x800061D0
    // 0x80056754: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    func_800061D0(rdram, ctx);
        goto after_0;
    // 0x80056754: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    after_0:
    // 0x80056758: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x8005675C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80056760: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80056764: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
    // 0x80056768: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x8005676C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80056770: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80056774: bgez        $t3, L_8005678C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80056778: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8005678C;
    }
    // 0x80056778: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005677C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80056780: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80056784: nop

    // 0x80056788: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8005678C:
    // 0x8005678C: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80056790: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80056794: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056798: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x8005679C: nop

    // 0x800567A0: bc1f        L_800567B0
    if (!c1cs) {
        // 0x800567A4: nop
    
            goto L_800567B0;
    }
    // 0x800567A4: nop

    // 0x800567A8: b           L_800567B4
    // 0x800567AC: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_800567B4;
    // 0x800567AC: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_800567B0:
    // 0x800567B0: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_800567B4:
    // 0x800567B4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800567B8: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x800567BC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800567C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800567C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800567C8: lh          $a3, 0x2($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X2);
    // 0x800567CC: cvt.w.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = CVT_W_S(ctx->f2.fl);
    // 0x800567D0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800567D4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800567D8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800567DC: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x800567E0: jal         0x80006170
    // 0x800567E4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_80006170(rdram, ctx);
        goto after_1;
    // 0x800567E4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
    // 0x800567E8: b           L_80056800
    // 0x800567EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80056800;
    // 0x800567EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800567F0:
    // 0x800567F0: jal         0x800061D0
    // 0x800567F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800061D0(rdram, ctx);
        goto after_2;
    // 0x800567F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x800567F8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_800567FC:
    // 0x800567FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80056800:
    // 0x80056800: bne         $s2, $s4, L_800566E0
    if (ctx->r18 != ctx->r20) {
        // 0x80056804: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_800566E0;
    }
    // 0x80056804: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80056808: jal         0x80007AB0
    // 0x8005680C: nop

    func_80007AB0(rdram, ctx);
        goto after_3;
    // 0x8005680C: nop

    after_3:
    // 0x80056810: b           L_800566D4
    // 0x80056814: nop

        goto L_800566D4;
    // 0x80056814: nop

    // 0x80056818: nop

    // 0x8005681C: nop

    // 0x80056820: nop

    // 0x80056824: nop

    // 0x80056828: nop

    // 0x8005682C: nop

    // 0x80056830: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80056834: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80056838: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005683C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80056840: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80056844: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80056848: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8005684C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80056850: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80056854: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80056858: jr          $ra
    // 0x8005685C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8005685C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80056860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056860: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056864: sw          $zero, -0x29B0($at)
    MEM_W(-0X29B0, ctx->r1) = 0;
    // 0x80056868: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005686C: sw          $zero, -0x29A0($at)
    MEM_W(-0X29A0, ctx->r1) = 0;
    // 0x80056870: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056878: sw          $zero, -0x2990($at)
    MEM_W(-0X2990, ctx->r1) = 0;
    // 0x8005687C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056880: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056884: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80056888: sw          $zero, -0x2980($at)
    MEM_W(-0X2980, ctx->r1) = 0;
    // 0x8005688C: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    // 0x80056890: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x80056894: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80056898: jal         0x80007C3C
    // 0x8005689C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x8005689C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800568A0: jal         0x80002F88
    // 0x800568A4: addiu       $a0, $zero, 0xBE4
    ctx->r4 = ADD32(0, 0XBE4);
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x800568A4: addiu       $a0, $zero, 0xBE4
    ctx->r4 = ADD32(0, 0XBE4);
    after_1:
    // 0x800568A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800568AC: addiu       $v1, $v1, -0x29BC
    ctx->r3 = ADD32(ctx->r3, -0X29BC);
    // 0x800568B0: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x800568B4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800568B8: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x800568BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800568C0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800568C4: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x800568C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800568CC: sw          $t0, -0x29C0($at)
    MEM_W(-0X29C0, ctx->r1) = ctx->r8;
    // 0x800568D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800568D4: sw          $zero, -0x29B8($at)
    MEM_W(-0X29B8, ctx->r1) = 0;
    // 0x800568D8: jr          $ra
    // 0x800568DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800568DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800568E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800568E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800568E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800568E8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800568EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800568F0: jal         0x800061D0
    // 0x800568F4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800061D0(rdram, ctx);
        goto after_0;
    // 0x800568F4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800568F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800568FC: jal         0x80006248
    // 0x80056900: nop

    func_80006248(rdram, ctx);
        goto after_1;
    // 0x80056900: nop

    after_1:
    // 0x80056904: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80056908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005690C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056910: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80056914: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80056918: sw          $zero, -0x29B0($at)
    MEM_W(-0X29B0, ctx->r1) = 0;
    // 0x8005691C: jr          $ra
    // 0x80056920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80056920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80056924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056924: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80056928: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005692C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80056930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80056934: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80056938: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005693C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80056940: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80056944: addiu       $s3, $s3, -0x29B0
    ctx->r19 = ADD32(ctx->r19, -0X29B0);
    // 0x80056948: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005694C: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_80056950:
    // 0x80056950: sll         $s1, $s0, 16
    ctx->r17 = S32(ctx->r16 << 16);
    // 0x80056954: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80056958: sll         $a0, $t6, 16
    ctx->r4 = S32(ctx->r14 << 16);
    // 0x8005695C: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056960: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80056964: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80056968: jal         0x800061D0
    // 0x8005696C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    func_800061D0(rdram, ctx);
        goto after_0;
    // 0x8005696C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    after_0:
    // 0x80056970: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80056974: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056978: jal         0x80006248
    // 0x8005697C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80006248(rdram, ctx);
        goto after_1;
    // 0x8005697C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x80056980: sll         $t9, $s2, 4
    ctx->r25 = S32(ctx->r18 << 4);
    // 0x80056984: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80056988: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8005698C: bne         $s0, $s4, L_80056950
    if (ctx->r16 != ctx->r20) {
        // 0x80056990: sw          $zero, 0x0($t0)
        MEM_W(0X0, ctx->r8) = 0;
            goto L_80056950;
    }
    // 0x80056990: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80056994: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80056998: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005699C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800569A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800569A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800569A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800569AC: jr          $ra
    // 0x800569B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800569B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800569B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800569B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800569B8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800569BC: lw          $t6, -0x29B8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X29B8);
    // 0x800569C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800569C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800569C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800569CC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800569D0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800569D4: bne         $t6, $zero, L_80056BD0
    if (ctx->r14 != 0) {
        // 0x800569D8: sw          $a2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r6;
            goto L_80056BD0;
    }
    // 0x800569D8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800569DC: beq         $a2, $zero, L_80056A28
    if (ctx->r6 == 0) {
        // 0x800569E0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80056A28;
    }
    // 0x800569E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800569E4: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_800569E8:
    // 0x800569E8: jal         0x8002F22C
    // 0x800569EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002F22C(rdram, ctx);
        goto after_0;
    // 0x800569EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800569F0: bne         $v0, $zero, L_80056A04
    if (ctx->r2 != 0) {
        // 0x800569F4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80056A04;
    }
    // 0x800569F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800569F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800569FC: bne         $s0, $s1, L_800569E8
    if (ctx->r16 != ctx->r17) {
        // 0x80056A00: nop
    
            goto L_800569E8;
    }
    // 0x80056A00: nop

L_80056A04:
    // 0x80056A04: beq         $v0, $zero, L_80056BD0
    if (ctx->r2 == 0) {
        // 0x80056A08: addiu       $s0, $sp, 0x44
        ctx->r16 = ADD32(ctx->r29, 0X44);
            goto L_80056BD0;
    }
    // 0x80056A08: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x80056A0C: jal         0x80009DB4
    // 0x80056A10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009DB4(rdram, ctx);
        goto after_1;
    // 0x80056A10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80056A14: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80056A18: jal         0x8002848C
    // 0x80056A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002848C(rdram, ctx);
        goto after_2;
    // 0x80056A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80056A20: b           L_80056A30
    // 0x80056A24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80056A30;
    // 0x80056A24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80056A28:
    // 0x80056A28: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80056A2C: nop

L_80056A30:
    // 0x80056A30: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80056A34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80056A38: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80056A3C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80056A40: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80056A44: bc1f        L_80056A5C
    if (!c1cs) {
        // 0x80056A48: sll         $t9, $t8, 4
        ctx->r25 = S32(ctx->r24 << 4);
            goto L_80056A5C;
    }
    // 0x80056A48: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80056A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80056A50: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80056A54: b           L_80056A94
    // 0x80056A58: nop

        goto L_80056A94;
    // 0x80056A58: nop

L_80056A5C:
    // 0x80056A5C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80056A60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80056A64: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056A68: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80056A6C: nop

    // 0x80056A70: bc1t        L_80056BD4
    if (c1cs) {
        // 0x80056A74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80056BD4;
    }
    // 0x80056A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80056A78: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80056A7C: lwc1        $f8, 0x5F90($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5F90);
    // 0x80056A80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80056A84: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80056A88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80056A8C: nop

    // 0x80056A90: sub.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f10.fl;
L_80056A94:
    // 0x80056A94: addiu       $t0, $t0, -0x29B0
    ctx->r8 = ADD32(ctx->r8, -0X29B0);
    // 0x80056A98: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80056A9C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80056AA0: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x80056AA4: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80056AA8: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80056AAC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80056AB0: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80056AB4: lw          $t4, -0x29BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X29BC);
    // 0x80056AB8: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x80056ABC: addu        $v1, $t4, $t3
    ctx->r3 = ADD32(ctx->r12, ctx->r11);
    // 0x80056AC0: lhu         $t5, 0x0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X0);
    // 0x80056AC4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80056AC8: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80056ACC: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80056AD0: lw          $t6, -0x29C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X29C0);
    // 0x80056AD4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80056AD8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80056ADC: lhu         $a0, 0x2($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X2);
    // 0x80056AE0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80056AE4: bne         $a0, $at, L_80056AF8
    if (ctx->r4 != ctx->r1) {
        // 0x80056AE8: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_80056AF8;
    }
    // 0x80056AE8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80056AEC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80056AF0: b           L_80056B04
    // 0x80056AF4: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
        goto L_80056B04;
    // 0x80056AF4: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_80056AF8:
    // 0x80056AF8: sra         $t1, $a0, 1
    ctx->r9 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80056AFC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80056B00: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
L_80056B04:
    // 0x80056B04: lh          $s1, 0x52($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X52);
    // 0x80056B08: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x80056B0C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80056B10: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056B14: jal         0x800061D0
    // 0x80056B18: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_800061D0(rdram, ctx);
        goto after_3;
    // 0x80056B18: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x80056B1C: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80056B20: lw          $t5, -0x29BC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X29BC);
    // 0x80056B24: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80056B28: addu        $t7, $t5, $s0
    ctx->r15 = ADD32(ctx->r13, ctx->r16);
    // 0x80056B2C: lhu         $t6, 0x0($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X0);
    // 0x80056B30: lw          $t4, -0x29C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X29C0);
    // 0x80056B34: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80056B38: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x80056B3C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80056B40: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80056B44: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80056B48: bgez        $t9, L_80056B60
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80056B4C: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80056B60;
    }
    // 0x80056B4C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80056B50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80056B54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80056B58: nop

    // 0x80056B5C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80056B60:
    // 0x80056B60: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80056B64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80056B68: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80056B6C: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80056B70: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80056B74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80056B78: bc1f        L_80056B90
    if (!c1cs) {
        // 0x80056B7C: nop
    
            goto L_80056B90;
    }
    // 0x80056B7C: nop

    // 0x80056B80: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80056B84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80056B88: b           L_80056B9C
    // 0x80056B8C: add.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f16.fl;
        goto L_80056B9C;
    // 0x80056B8C: add.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f16.fl;
L_80056B90:
    // 0x80056B90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80056B94: nop

    // 0x80056B98: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
L_80056B9C:
    // 0x80056B9C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80056BA0: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x80056BA4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80056BA8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056BAC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80056BB0: lh          $a3, 0x2($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X2);
    // 0x80056BB4: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80056BB8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80056BBC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80056BC0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80056BC4: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x80056BC8: jal         0x80006170
    // 0x80056BCC: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    func_80006170(rdram, ctx);
        goto after_4;
    // 0x80056BCC: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    after_4:
L_80056BD0:
    // 0x80056BD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80056BD4:
    // 0x80056BD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80056BD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80056BDC: jr          $ra
    // 0x80056BE0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80056BE0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80056BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056BF0: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x80056BF4: nop

    // 0x80056BF8: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80056BFC: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x80056C00: nop

    // 0x80056C04: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x80056C08: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x80056C0C: nop

    // 0x80056C10: sh          $t8, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r24;
    // 0x80056C14: lb          $t9, 0x6($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X6);
    // 0x80056C18: nop

    // 0x80056C1C: sb          $t9, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r25;
    // 0x80056C20: lb          $t6, 0x7($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X7);
    // 0x80056C24: jr          $ra
    // 0x80056C28: sb          $t6, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r14;
    return;
    // 0x80056C28: sb          $t6, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80056C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056C34: beq         $a1, $zero, L_80056C68
    if (ctx->r5 == 0) {
        // 0x80056C38: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80056C68;
    }
    // 0x80056C38: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80056C3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80056C40: beq         $a1, $at, L_80056C94
    if (ctx->r5 == ctx->r1) {
        // 0x80056C44: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_80056C94;
    }
    // 0x80056C44: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80056C48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80056C4C: beq         $a1, $at, L_80056CBC
    if (ctx->r5 == ctx->r1) {
        // 0x80056C50: sll         $t8, $a3, 2
        ctx->r24 = S32(ctx->r7 << 2);
            goto L_80056CBC;
    }
    // 0x80056C50: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80056C54: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80056C58: beq         $a1, $at, L_80056CD8
    if (ctx->r5 == ctx->r1) {
        // 0x80056C5C: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_80056CD8;
    }
    // 0x80056C5C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80056C60: b           L_80056CF4
    // 0x80056C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80056CF4;
    // 0x80056C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056C68:
    // 0x80056C68: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80056C6C: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x80056C70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80056C74: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80056C78: addiu       $t8, $t8, -0x2970
    ctx->r24 = ADD32(ctx->r24, -0X2970);
    // 0x80056C7C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80056C80: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80056C84: jal         0x80056BF0
    // 0x80056C88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80056BF0(rdram, ctx);
        goto after_0;
    // 0x80056C88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80056C8C: b           L_80056CF4
    // 0x80056C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80056CF4;
    // 0x80056C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056C94:
    // 0x80056C94: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x80056C98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80056C9C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80056CA0: addiu       $t7, $t7, -0x2970
    ctx->r15 = ADD32(ctx->r15, -0X2970);
    // 0x80056CA4: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x80056CA8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80056CAC: jal         0x80056BF0
    // 0x80056CB0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80056BF0(rdram, ctx);
        goto after_1;
    // 0x80056CB0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x80056CB4: b           L_80056CF4
    // 0x80056CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80056CF4;
    // 0x80056CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056CBC:
    // 0x80056CBC: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x80056CC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80056CC4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80056CC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80056CCC: lw          $t9, -0x2970($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2970);
    // 0x80056CD0: b           L_80056CF0
    // 0x80056CD4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
        goto L_80056CF0;
    // 0x80056CD4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_80056CD8:
    // 0x80056CD8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80056CDC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80056CE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80056CE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056CE8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80056CEC: sw          $t6, -0x2970($at)
    MEM_W(-0X2970, ctx->r1) = ctx->r14;
L_80056CF0:
    // 0x80056CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056CF4:
    // 0x80056CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80056CF8: jr          $ra
    // 0x80056CFC: nop

    return;
    // 0x80056CFC: nop

    // 0x80056D00: jr          $ra
    // 0x80056D04: nop

    return;
    // 0x80056D04: nop

    // 0x80056D08: jr          $ra
    // 0x80056D0C: nop

    return;
    // 0x80056D0C: nop

;}
RECOMP_FUNC void func_80056D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056D10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80056D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056D18: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x80056D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056D20: bc1f        L_80056D44
    if (!c1cs) {
        // 0x80056D24: mov.s       $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
            goto L_80056D44;
    }
    // 0x80056D24: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x80056D28: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80056D2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056D30: bc1f        L_80056D44
    if (!c1cs) {
        // 0x80056D34: nop
    
            goto L_80056D44;
    }
    // 0x80056D34: nop

    // 0x80056D38: lwc1        $f0, 0x5FC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5FC4);
    // 0x80056D3C: b           L_80056EB8
    // 0x80056D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80056EB8;
    // 0x80056D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056D44:
    // 0x80056D44: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80056D48: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x80056D4C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80056D50: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80056D54: jal         0x8007A500
    // 0x80056D58: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80056D58: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80056D5C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80056D60: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80056D64: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80056D68: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80056D6C: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x80056D70: nop

    // 0x80056D74: div.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80056D78: bc1f        L_80056E28
    if (!c1cs) {
        // 0x80056D7C: nop
    
            goto L_80056E28;
    }
    // 0x80056D7C: nop

    // 0x80056D80: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x80056D84: nop

    // 0x80056D88: bc1f        L_80056DD0
    if (!c1cs) {
        // 0x80056D8C: nop
    
            goto L_80056DD0;
    }
    // 0x80056D8C: nop

    // 0x80056D90: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80056D94: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80056D98: bc1f        L_80056DAC
    if (!c1cs) {
        // 0x80056D9C: nop
    
            goto L_80056DAC;
    }
    // 0x80056D9C: nop

    // 0x80056DA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80056DA4: b           L_80056EB4
    // 0x80056DA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80056EB4;
    // 0x80056DA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80056DAC:
    // 0x80056DAC: jal         0x80028248
    // 0x80056DB0: div.s       $f12, $f16, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f14.fl);
    func_80028248(rdram, ctx);
        goto after_1;
    // 0x80056DB0: div.s       $f12, $f16, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f14.fl);
    after_1:
    // 0x80056DB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056DB8: lwc1        $f11, 0x5FC8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5FC8);
    // 0x80056DBC: lwc1        $f10, 0x5FCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5FCC);
    // 0x80056DC0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80056DC4: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80056DC8: b           L_80056EB0
    // 0x80056DCC: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
        goto L_80056EB0;
    // 0x80056DCC: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80056DD0:
    // 0x80056DD0: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x80056DD4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80056DD8: bc1f        L_80056DEC
    if (!c1cs) {
        // 0x80056DDC: nop
    
            goto L_80056DEC;
    }
    // 0x80056DDC: nop

    // 0x80056DE0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80056DE4: b           L_80056EB4
    // 0x80056DE8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80056EB4;
    // 0x80056DE8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80056DEC:
    // 0x80056DEC: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x80056DF0: jal         0x80028248
    // 0x80056DF4: div.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    func_80028248(rdram, ctx);
        goto after_2;
    // 0x80056DF4: div.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    after_2:
    // 0x80056DF8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056DFC: lwc1        $f9, 0x5FD0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5FD0);
    // 0x80056E00: lwc1        $f8, 0x5FD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5FD4);
    // 0x80056E04: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80056E08: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80056E0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056E10: lwc1        $f19, 0x5FD8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5FD8);
    // 0x80056E14: lwc1        $f18, 0x5FDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5FDC);
    // 0x80056E18: nop

    // 0x80056E1C: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x80056E20: b           L_80056EB0
    // 0x80056E24: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
        goto L_80056EB0;
    // 0x80056E24: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_80056E28:
    // 0x80056E28: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80056E2C: nop

    // 0x80056E30: bc1f        L_80056E78
    if (!c1cs) {
        // 0x80056E34: nop
    
            goto L_80056E78;
    }
    // 0x80056E34: nop

    // 0x80056E38: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    // 0x80056E3C: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x80056E40: jal         0x80028248
    // 0x80056E44: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    func_80028248(rdram, ctx);
        goto after_3;
    // 0x80056E44: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    after_3:
    // 0x80056E48: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056E4C: lwc1        $f19, 0x5FE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5FE0);
    // 0x80056E50: lwc1        $f18, 0x5FE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5FE4);
    // 0x80056E54: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80056E58: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80056E5C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056E60: lwc1        $f7, 0x5FE8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5FE8);
    // 0x80056E64: lwc1        $f6, 0x5FEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5FEC);
    // 0x80056E68: nop

    // 0x80056E6C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80056E70: b           L_80056EB0
    // 0x80056E74: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
        goto L_80056EB0;
    // 0x80056E74: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_80056E78:
    // 0x80056E78: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x80056E7C: jal         0x80028248
    // 0x80056E80: div.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    func_80028248(rdram, ctx);
        goto after_4;
    // 0x80056E80: div.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    after_4:
    // 0x80056E84: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056E88: lwc1        $f5, 0x5FF0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5FF0);
    // 0x80056E8C: lwc1        $f4, 0x5FF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5FF4);
    // 0x80056E90: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80056E94: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80056E98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80056E9C: lwc1        $f9, 0x5FF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5FF8);
    // 0x80056EA0: lwc1        $f8, 0x5FFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5FFC);
    // 0x80056EA4: nop

    // 0x80056EA8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80056EAC: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_80056EB0:
    // 0x80056EB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80056EB4:
    // 0x80056EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056EB8:
    // 0x80056EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80056EBC: jr          $ra
    // 0x80056EC0: nop

    return;
    // 0x80056EC0: nop

;}
RECOMP_FUNC void func_80056EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056EC4: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x80056EC8: nop

    // 0x80056ECC: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x80056ED0: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x80056ED4: nop

    // 0x80056ED8: sh          $t7, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r15;
    // 0x80056EDC: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x80056EE0: nop

    // 0x80056EE4: sh          $t8, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r24;
    // 0x80056EE8: lb          $t9, 0x6($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X6);
    // 0x80056EEC: nop

    // 0x80056EF0: sb          $t9, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r25;
    // 0x80056EF4: lb          $t6, 0x7($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X7);
    // 0x80056EF8: jr          $ra
    // 0x80056EFC: sb          $t6, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r14;
    return;
    // 0x80056EFC: sb          $t6, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80056F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056F00: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80056F04: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80056F08: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80056F0C: addiu       $t7, $t7, -0x2970
    ctx->r15 = ADD32(ctx->r15, -0X2970);
    // 0x80056F10: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80056F14: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80056F18: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80056F1C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80056F20: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x80056F24: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80056F28: jr          $ra
    // 0x80056F2C: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    return;
    // 0x80056F2C: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80056F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056F30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80056F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056F38: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80056F3C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80056F40: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80056F44: beq         $at, $zero, L_80056F70
    if (ctx->r1 == 0) {
        // 0x80056F48: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80056F70;
    }
    // 0x80056F48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80056F4C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80056F50: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80056F54: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x80056F58: jal         0x8002F020
    // 0x80056F5C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_8002F020(rdram, ctx);
        goto after_0;
    // 0x80056F5C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_0:
    // 0x80056F60: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80056F64: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80056F68: b           L_80056F90
    // 0x80056F6C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
        goto L_80056F90;
    // 0x80056F6C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
L_80056F70:
    // 0x80056F70: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80056F74: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x80056F78: jal         0x8002F020
    // 0x80056F7C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_8002F020(rdram, ctx);
        goto after_1;
    // 0x80056F7C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_1:
    // 0x80056F80: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80056F84: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80056F88: nop

    // 0x80056F8C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
L_80056F90:
    // 0x80056F90: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80056F94: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80056F98: addiu       $t7, $t7, -0x2970
    ctx->r15 = ADD32(ctx->r15, -0X2970);
    // 0x80056F9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80056FA0: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80056FA4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80056FA8: nop

    // 0x80056FAC: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x80056FB0: bne         $t8, $zero, L_8005705C
    if (ctx->r24 != 0) {
        // 0x80056FB4: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8005705C;
    }
    // 0x80056FB4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80056FB8: beq         $v0, $zero, L_80056FE0
    if (ctx->r2 == 0) {
        // 0x80056FBC: lui         $t9, 0x800A
        ctx->r25 = S32(0X800A << 16);
            goto L_80056FE0;
    }
    // 0x80056FBC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80056FC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80056FC4: beq         $v0, $at, L_80057034
    if (ctx->r2 == ctx->r1) {
        // 0x80056FC8: addiu       $a1, $t0, 0x4
        ctx->r5 = ADD32(ctx->r8, 0X4);
            goto L_80057034;
    }
    // 0x80056FC8: addiu       $a1, $t0, 0x4
    ctx->r5 = ADD32(ctx->r8, 0X4);
    // 0x80056FCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80056FD0: beq         $v0, $at, L_8005704C
    if (ctx->r2 == ctx->r1) {
        // 0x80056FD4: addiu       $a1, $t0, 0x4
        ctx->r5 = ADD32(ctx->r8, 0X4);
            goto L_8005704C;
    }
    // 0x80056FD4: addiu       $a1, $t0, 0x4
    ctx->r5 = ADD32(ctx->r8, 0X4);
    // 0x80056FD8: b           L_80057074
    // 0x80056FDC: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
        goto L_80057074;
    // 0x80056FDC: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
L_80056FE0:
    // 0x80056FE0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80056FE4: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80056FE8: lhu         $t9, 0x2B8($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X2B8);
    // 0x80056FEC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80056FF0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80056FF4: sh          $t9, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r25;
    // 0x80056FF8: lhu         $t6, 0x52A0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X52A0);
    // 0x80056FFC: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80057000: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80057004: sh          $t6, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r14;
    // 0x80057008: lhu         $t7, 0x52A8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X52A8);
    // 0x8005700C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80057010: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x80057014: sh          $t7, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r15;
    // 0x80057018: lb          $t8, 0x2D8($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X2D8);
    // 0x8005701C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80057020: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x80057024: sb          $t8, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r24;
    // 0x80057028: lb          $t9, 0x2DC($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X2DC);
    // 0x8005702C: b           L_80057070
    // 0x80057030: sb          $t9, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r25;
        goto L_80057070;
    // 0x80057030: sb          $t9, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r25;
L_80057034:
    // 0x80057034: jal         0x80056EC4
    // 0x80057038: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80056EC4(rdram, ctx);
        goto after_2;
    // 0x80057038: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8005703C: jal         0x80056F00
    // 0x80057040: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80056F00(rdram, ctx);
        goto after_3;
    // 0x80057040: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x80057044: b           L_80057074
    // 0x80057048: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
        goto L_80057074;
    // 0x80057048: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
L_8005704C:
    // 0x8005704C: jal         0x80056EC4
    // 0x80057050: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80056EC4(rdram, ctx);
        goto after_4;
    // 0x80057050: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x80057054: b           L_80057074
    // 0x80057058: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
        goto L_80057074;
    // 0x80057058: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
L_8005705C:
    // 0x8005705C: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    // 0x80057060: sh          $zero, 0x6($a3)
    MEM_H(0X6, ctx->r7) = 0;
    // 0x80057064: sh          $zero, 0x8($a3)
    MEM_H(0X8, ctx->r7) = 0;
    // 0x80057068: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
    // 0x8005706C: sb          $zero, 0xB($a3)
    MEM_B(0XB, ctx->r7) = 0;
L_80057070:
    // 0x80057070: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
L_80057074:
    // 0x80057074: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80057078: andi        $t6, $v0, 0xF00
    ctx->r14 = ctx->r2 & 0XF00;
    // 0x8005707C: beq         $t6, $zero, L_800570F4
    if (ctx->r14 == 0) {
        // 0x80057080: andi        $t7, $v0, 0x200
        ctx->r15 = ctx->r2 & 0X200;
            goto L_800570F4;
    }
    // 0x80057080: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x80057084: beq         $t7, $zero, L_8005709C
    if (ctx->r15 == 0) {
        // 0x80057088: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_8005709C;
    }
    // 0x80057088: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x8005708C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80057090: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80057094: b           L_800570BC
    // 0x80057098: nop

        goto L_800570BC;
    // 0x80057098: nop

L_8005709C:
    // 0x8005709C: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x800570A0: beq         $t8, $zero, L_800570B4
    if (ctx->r24 == 0) {
        // 0x800570A4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_800570B4;
    }
    // 0x800570A4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800570A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800570AC: b           L_800570BC
    // 0x800570B0: nop

        goto L_800570BC;
    // 0x800570B0: nop

L_800570B4:
    // 0x800570B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800570B8: nop

L_800570BC:
    // 0x800570BC: beq         $t9, $zero, L_800570D4
    if (ctx->r25 == 0) {
        // 0x800570C0: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_800570D4;
    }
    // 0x800570C0: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x800570C4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x800570C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800570CC: b           L_80057110
    // 0x800570D0: nop

        goto L_80057110;
    // 0x800570D0: nop

L_800570D4:
    // 0x800570D4: beq         $t6, $zero, L_800570E8
    if (ctx->r14 == 0) {
        // 0x800570D8: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_800570E8;
    }
    // 0x800570D8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800570DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800570E0: b           L_80057110
    // 0x800570E4: nop

        goto L_80057110;
    // 0x800570E4: nop

L_800570E8:
    // 0x800570E8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800570EC: b           L_80057110
    // 0x800570F0: nop

        goto L_80057110;
    // 0x800570F0: nop

L_800570F4:
    // 0x800570F4: lb          $t8, 0xB($a3)
    ctx->r24 = MEM_B(ctx->r7, 0XB);
    // 0x800570F8: lb          $t7, 0xA($a3)
    ctx->r15 = MEM_B(ctx->r7, 0XA);
    // 0x800570FC: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80057100: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80057104: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80057108: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005710C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
L_80057110:
    // 0x80057110: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80057114: lwc1        $f5, 0x6000($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6000);
    // 0x80057118: lwc1        $f4, 0x6004($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6004);
    // 0x8005711C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80057120: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80057124: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x80057128: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8005712C: swc1        $f8, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f8.u32l;
    // 0x80057130: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80057134: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x80057138: jal         0x80056D10
    // 0x8005713C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_80056D10(rdram, ctx);
        goto after_5;
    // 0x8005713C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_5:
    // 0x80057140: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80057144: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80057148: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005714C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80057150: swc1        $f0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f0.u32l;
    // 0x80057154: lwc1        $f10, 0x6008($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6008);
    // 0x80057158: lui         $at, 0x4134
    ctx->r1 = S32(0X4134 << 16);
    // 0x8005715C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80057160: addiu       $v0, $a3, 0x10
    ctx->r2 = ADD32(ctx->r7, 0X10);
    // 0x80057164: bc1t        L_800571B4
    if (c1cs) {
        // 0x80057168: nop
    
            goto L_800571B4;
    }
    // 0x80057168: nop

    // 0x8005716C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80057170: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80057174: nop

    // 0x80057178: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8005717C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80057180: nop

    // 0x80057184: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80057188: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005718C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80057190: nop

    // 0x80057194: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80057198: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8005719C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800571A0: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x800571A4: nop

    // 0x800571A8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800571AC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800571B0: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_800571B4:
    // 0x800571B4: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800571B8: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x800571BC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800571C0: jal         0x8007A500
    // 0x800571C4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_6;
    // 0x800571C4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_6:
    // 0x800571C8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800571CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800571D0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800571D4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800571D8: addiu       $v0, $a3, 0x14
    ctx->r2 = ADD32(ctx->r7, 0X14);
    // 0x800571DC: bc1f        L_800571F4
    if (!c1cs) {
        // 0x800571E0: swc1        $f0, 0x14($a3)
        MEM_W(0X14, ctx->r7) = ctx->f0.u32l;
            goto L_800571F4;
    }
    // 0x800571E0: swc1        $f0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f0.u32l;
    // 0x800571E4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800571E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800571EC: b           L_80057254
    // 0x800571F0: swc1        $f6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f6.u32l;
        goto L_80057254;
    // 0x800571F0: swc1        $f6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f6.u32l;
L_800571F4:
    // 0x800571F4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800571F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800571FC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80057200: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80057204: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80057208: nop

    // 0x8005720C: bc1f        L_80057224
    if (!c1cs) {
        // 0x80057210: nop
    
            goto L_80057224;
    }
    // 0x80057210: nop

    // 0x80057214: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80057218: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005721C: b           L_80057254
    // 0x80057220: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_80057254;
    // 0x80057220: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_80057224:
    // 0x80057224: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80057228: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005722C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80057230: nop

    // 0x80057234: bc1f        L_80057248
    if (!c1cs) {
        // 0x80057238: nop
    
            goto L_80057248;
    }
    // 0x80057238: nop

    // 0x8005723C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80057240: b           L_80057254
    // 0x80057244: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_80057254;
    // 0x80057244: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_80057248:
    // 0x80057248: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8005724C: nop

    // 0x80057250: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_80057254:
    // 0x80057254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057258: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8005725C: jr          $ra
    // 0x80057260: nop

    return;
    // 0x80057260: nop

;}
RECOMP_FUNC void func_80057264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005726C: jal         0x8005B990
    // 0x80057270: nop

    func_8005B990(rdram, ctx);
        goto after_0;
    // 0x80057270: nop

    after_0:
    // 0x80057274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005727C: jr          $ra
    // 0x80057280: nop

    return;
    // 0x80057280: nop

;}
RECOMP_FUNC void func_80057284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005728C: jal         0x8005BE2C
    // 0x80057290: nop

    func_8005BE2C(rdram, ctx);
        goto after_0;
    // 0x80057290: nop

    after_0:
    // 0x80057294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005729C: jr          $ra
    // 0x800572A0: nop

    return;
    // 0x800572A0: nop

;}
RECOMP_FUNC void func_800572A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800572A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800572A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800572AC: jal         0x8005C3A8
    // 0x800572B0: nop

    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x800572B0: nop

    after_0:
    // 0x800572B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800572B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800572BC: jr          $ra
    // 0x800572C0: nop

    return;
    // 0x800572C0: nop

;}
RECOMP_FUNC void func_800572EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800572EC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800572F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800572F4: jal         0x8002D000
    // 0x800572F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800572F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800572FC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80057300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80057304: sltiu       $at, $t6, 0xC
    ctx->r1 = ctx->r14 < 0XC ? 1 : 0;
    // 0x80057308: beq         $at, $zero, L_80057540
    if (ctx->r1 == 0) {
        // 0x8005730C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80057540;
    }
    // 0x8005730C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80057310: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80057314: addu        $at, $at, $t6
    gpr jr_addend_80057320 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80057318: lw          $t6, 0x600C($at)
    ctx->r14 = ADD32(ctx->r1, 0X600C);
    // 0x8005731C: nop

    // 0x80057320: jr          $t6
    // 0x80057324: nop

    switch (jr_addend_80057320 >> 2) {
        case 0: goto L_80057328; break;
        case 1: goto L_8005735C; break;
        case 2: goto L_8005738C; break;
        case 3: goto L_800573B4; break;
        case 4: goto L_800573DC; break;
        case 5: goto L_800573DC; break;
        case 6: goto L_800573DC; break;
        case 7: goto L_800573DC; break;
        case 8: goto L_800573DC; break;
        case 9: goto L_80057414; break;
        case 10: goto L_80057478; break;
        case 11: goto L_800574F4; break;
        default: switch_error(__func__, 0x80057320, 0x8009600C);
    }
    // 0x80057324: nop

L_80057328:
    // 0x80057328: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x8005732C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80057330: jal         0x8004A0A0
    // 0x80057334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80057334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80057338: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8005733C: nop

    // 0x80057340: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80057344: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80057348: nop

    // 0x8005734C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x80057350: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80057354: b           L_80057540
    // 0x80057358: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
        goto L_80057540;
    // 0x80057358: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_8005735C:
    // 0x8005735C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80057360: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x80057364: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80057368: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8005736C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80057370: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x80057374: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80057378: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005737C: jal         0x8004A0A0
    // 0x80057380: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80057380: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80057384: b           L_80057544
    // 0x80057388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80057544;
    // 0x80057388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005738C:
    // 0x8005738C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80057390: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x80057394: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x80057398: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8005739C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800573A0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x800573A4: jal         0x8004A0A0
    // 0x800573A8: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x800573A8: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    after_3:
    // 0x800573AC: b           L_80057544
    // 0x800573B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80057544;
    // 0x800573B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800573B4:
    // 0x800573B4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x800573B8: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x800573BC: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x800573C0: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x800573C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800573C8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x800573CC: jal         0x8004A0A0
    // 0x800573D0: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x800573D0: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    after_4:
    // 0x800573D4: b           L_80057544
    // 0x800573D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80057544;
    // 0x800573D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800573DC:
    // 0x800573DC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800573E0: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x800573E4: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x800573E8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800573EC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800573F0: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x800573F4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800573F8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x800573FC: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x80057400: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80057404: jal         0x8004A0A0
    // 0x80057408: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80057408: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8005740C: b           L_80057544
    // 0x80057410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80057544;
    // 0x80057410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80057414:
    // 0x80057414: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x80057418: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8005741C: jal         0x8004A0A0
    // 0x80057420: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x80057420: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x80057424: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80057428: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8005742C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80057430: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80057434: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80057438: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8005743C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80057440: nop

    // 0x80057444: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x80057448: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8005744C: jal         0x8004A0A0
    // 0x80057450: nop

    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x80057450: nop

    after_7:
    // 0x80057454: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80057458: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8005745C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80057460: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80057464: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80057468: jal         0x80056D10
    // 0x8005746C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_80056D10(rdram, ctx);
        goto after_8;
    // 0x8005746C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_8:
    // 0x80057470: b           L_80057540
    // 0x80057474: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
        goto L_80057540;
    // 0x80057474: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
L_80057478:
    // 0x80057478: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x8005747C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80057480: jal         0x8004A0A0
    // 0x80057484: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x80057484: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x80057488: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8005748C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80057490: jal         0x8004A0A0
    // 0x80057494: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_8004A0A0(rdram, ctx);
        goto after_10;
    // 0x80057494: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_10:
    // 0x80057498: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8005749C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800574A0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800574A4: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800574A8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800574AC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800574B0: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800574B4: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800574B8: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x800574BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800574C0: jal         0x80056D10
    // 0x800574C4: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    func_80056D10(rdram, ctx);
        goto after_11;
    // 0x800574C4: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    after_11:
    // 0x800574C8: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x800574CC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800574D0: jal         0x80056D10
    // 0x800574D4: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    func_80056D10(rdram, ctx);
        goto after_12;
    // 0x800574D4: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    after_12:
    // 0x800574D8: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x800574DC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x800574E0: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x800574E4: jal         0x8007A500
    // 0x800574E8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_13;
    // 0x800574E8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_13:
    // 0x800574EC: b           L_80057540
    // 0x800574F0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
        goto L_80057540;
    // 0x800574F0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_800574F4:
    // 0x800574F4: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x800574F8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800574FC: jal         0x8004A0A0
    // 0x80057500: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_14;
    // 0x80057500: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x80057504: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80057508: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8005750C: jal         0x8004A0A0
    // 0x80057510: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_15;
    // 0x80057510: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_15:
    // 0x80057514: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80057518: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8005751C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80057520: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80057524: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80057528: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8005752C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80057530: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80057534: jal         0x8007A500
    // 0x80057538: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_16;
    // 0x80057538: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_16:
    // 0x8005753C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_80057540:
    // 0x80057540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80057544:
    // 0x80057544: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80057548: jr          $ra
    // 0x8005754C: nop

    return;
    // 0x8005754C: nop

    // 0x80057550: jr          $ra
    // 0x80057554: nop

    return;
    // 0x80057554: nop

;}
RECOMP_FUNC void func_80057558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005755C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057560: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80057564: jal         0x80028C2C
    // 0x80057568: nop

    func_80028C2C(rdram, ctx);
        goto after_0;
    // 0x80057568: nop

    after_0:
    // 0x8005756C: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80057570: jal         0x80028C00
    // 0x80057574: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    func_80028C00(rdram, ctx);
        goto after_1;
    // 0x80057574: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x80057578: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x8005757C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057584: jr          $ra
    // 0x80057588: nop

    return;
    // 0x80057588: nop

;}
RECOMP_FUNC void func_8005758C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005758C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80057590: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80057594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057598: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005759C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800575A0: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800575A4: addiu       $s0, $sp, 0x1C
    ctx->r16 = ADD32(ctx->r29, 0X1C);
    // 0x800575A8: jal         0x80057558
    // 0x800575AC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_80057558(rdram, ctx);
        goto after_0;
    // 0x800575AC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800575B0: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800575B4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800575B8: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x800575BC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800575C0: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x800575C4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800575C8: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800575CC: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x800575D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800575D4: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x800575D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800575DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800575E0: jr          $ra
    // 0x800575E4: nop

    return;
    // 0x800575E4: nop

    // 0x800575E8: jr          $ra
    // 0x800575EC: nop

    return;
    // 0x800575EC: nop

    // 0x800575F0: jr          $ra
    // 0x800575F4: nop

    return;
    // 0x800575F4: nop

    // 0x800575F8: jr          $ra
    // 0x800575FC: nop

    return;
    // 0x800575FC: nop

    // 0x80057600: jr          $ra
    // 0x80057604: nop

    return;
    // 0x80057604: nop

    // 0x80057608: jr          $ra
    // 0x8005760C: nop

    return;
    // 0x8005760C: nop

    // 0x80057610: jr          $ra
    // 0x80057614: nop

    return;
    // 0x80057614: nop

    // 0x80057618: jr          $ra
    // 0x8005761C: nop

    return;
    // 0x8005761C: nop

    // 0x80057620: jr          $ra
    // 0x80057624: nop

    return;
    // 0x80057624: nop

    // 0x80057628: jr          $ra
    // 0x8005762C: nop

    return;
    // 0x8005762C: nop

    // 0x80057630: jr          $ra
    // 0x80057634: nop

    return;
    // 0x80057634: nop

    // 0x80057638: jr          $ra
    // 0x8005763C: nop

    return;
    // 0x8005763C: nop

    // 0x80057640: jr          $ra
    // 0x80057644: nop

    return;
    // 0x80057644: nop

    // 0x80057648: jr          $ra
    // 0x8005764C: nop

    return;
    // 0x8005764C: nop

;}
