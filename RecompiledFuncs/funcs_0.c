#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000400: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80000404: lui         $t1, 0x1
    ctx->r9 = S32(0X1 << 16);
    // 0x80000408: addiu       $t0, $t0, 0x7910
    ctx->r8 = ADD32(ctx->r8, 0X7910);
    // 0x8000040C: ori         $t1, $t1, 0x8BE0
    ctx->r9 = ctx->r9 | 0X8BE0;
L_80000410:
    // 0x80000410: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x80000414: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80000418: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8000041C: bne         $t1, $zero, L_80000410
    if (ctx->r9 != 0) {
        // 0x80000420: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_80000410;
    }
    // 0x80000420: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80000424: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80000428: lui         $sp, 0x800B
    ctx->r29 = S32(0X800B << 16);
    // 0x8000042C: addiu       $t2, $t2, 0x10D0
    ctx->r10 = ADD32(ctx->r10, 0X10D0);
    // 0x80000430: jr          $t2
    // 0x80000434: addiu       $sp, $sp, 0x44F0
    ctx->r29 = ADD32(ctx->r29, 0X44F0);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x80000434: addiu       $sp, $sp, 0x44F0
    ctx->r29 = ADD32(ctx->r29, 0X44F0);
;}
RECOMP_FUNC void func_80000450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80000454: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x80000458: lui         $a2, 0xA
    ctx->r6 = S32(0XA << 16);
    // 0x8000045C: lui         $t6, 0xA
    ctx->r14 = S32(0XA << 16);
    // 0x80000460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80000464: addiu       $t6, $t6, -0x79C0
    ctx->r14 = ADD32(ctx->r14, -0X79C0);
    // 0x80000468: addiu       $a2, $a2, -0x7AF0
    ctx->r6 = ADD32(ctx->r6, -0X7AF0);
    // 0x8000046C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80000470: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80000474: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80000478: jal         0x80000698
    // 0x8000047C: subu        $a1, $t6, $a2
    ctx->r5 = SUB32(ctx->r14, ctx->r6);
    func_80000698(rdram, ctx);
        goto after_0;
    // 0x8000047C: subu        $a1, $t6, $a2
    ctx->r5 = SUB32(ctx->r14, ctx->r6);
    after_0:
    // 0x80000480: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80000484: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80000488: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8000048C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80000490: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80000494: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80000498: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000049C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800004A0: lui         $a2, 0x1000
    ctx->r6 = S32(0X1000 << 16);
    // 0x800004A4: jal         0x800750D0
    // 0x800004A8: addu        $a3, $t0, $at
    ctx->r7 = ADD32(ctx->r8, ctx->r1);
    osMapTLB_recomp(rdram, ctx);
        goto after_1;
    // 0x800004A8: addu        $a3, $t0, $at
    ctx->r7 = ADD32(ctx->r8, ctx->r1);
    after_1:
    // 0x800004AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800004B0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800004B4: addiu       $t9, $t9, -0x19C0
    ctx->r25 = ADD32(ctx->r25, -0X19C0);
    // 0x800004B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800004BC: sw          $t9, 0x7910($at)
    MEM_W(0X7910, ctx->r1) = ctx->r25;
    // 0x800004C0: jr          $ra
    // 0x800004C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800004C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800004D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800004D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800004D4: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x800004D8: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x800004DC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800004E0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800004E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800004E8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800004EC: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x800004F0: addiu       $t6, $t6, 0x7D68
    ctx->r14 = ADD32(ctx->r14, 0X7D68);
    // 0x800004F4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800004F8: addiu       $a0, $a0, 0x7D50
    ctx->r4 = ADD32(ctx->r4, 0X7D50);
    // 0x800004FC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80000500: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80000504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000508: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8000050C: jal         0x80075470
    // 0x80000510: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    osPiStartDma_recomp(rdram, ctx);
        goto after_0;
    // 0x80000510: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x80000514: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80000518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000051C: jr          $ra
    // 0x80000520: nop

    return;
    // 0x80000520: nop

;}
RECOMP_FUNC void func_80000524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80000528: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000052C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80000530: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80000534: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80000538: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8000053C: addiu       $t6, $t6, 0x7D68
    ctx->r14 = ADD32(ctx->r14, 0X7D68);
    // 0x80000540: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000544: addiu       $a0, $a0, 0x7D50
    ctx->r4 = ADD32(ctx->r4, 0X7D50);
    // 0x80000548: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8000054C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80000550: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80000554: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80000558: jal         0x80075470
    // 0x8000055C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osPiStartDma_recomp(rdram, ctx);
        goto after_0;
    // 0x8000055C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80000560: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80000564: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80000568: jr          $ra
    // 0x8000056C: nop

    return;
    // 0x8000056C: nop

;}
RECOMP_FUNC void func_80000570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80000574: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80000578: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000057C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80000580: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80000584: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80000588: addiu       $t6, $t6, 0x7D68
    ctx->r14 = ADD32(ctx->r14, 0X7D68);
    // 0x8000058C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000590: addiu       $a0, $a0, 0x7D50
    ctx->r4 = ADD32(ctx->r4, 0X7D50);
    // 0x80000594: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80000598: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000059C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800005A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800005A4: jal         0x80075470
    // 0x800005A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    osPiStartDma_recomp(rdram, ctx);
        goto after_0;
    // 0x800005A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x800005AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800005B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800005B4: jr          $ra
    // 0x800005B8: nop

    return;
    // 0x800005B8: nop

;}
RECOMP_FUNC void func_800005BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800005BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800005C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800005C4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800005C8: addiu       $a0, $a0, 0x7D68
    ctx->r4 = ADD32(ctx->r4, 0X7D68);
    // 0x800005CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800005D0: jal         0x80075330
    // 0x800005D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800005D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800005D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800005DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800005E0: jr          $ra
    // 0x800005E4: nop

    return;
    // 0x800005E4: nop

;}
RECOMP_FUNC void func_800005E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800005E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800005EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800005F0: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x800005F4: addiu       $s0, $s0, 0x7D48
    ctx->r16 = ADD32(ctx->r16, 0X7D48);
    // 0x800005F8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800005FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80000600: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80000604: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80000608: beq         $t6, $zero, L_80000628
    if (ctx->r14 == 0) {
        // 0x8000060C: sw          $a2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r6;
            goto L_80000628;
    }
    // 0x8000060C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
L_80000610:
    bm64u2_yield_process(rdram, ctx);
    // 0x80000610: nop

    // 0x80000614: nop

    // 0x80000618: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8000061C: nop

    // 0x80000620: bne         $t7, $zero, L_80000610
    if (ctx->r15 != 0) {
        // 0x80000624: nop
    
            goto L_80000610;
    }
    // 0x80000624: nop

L_80000628:
    // 0x80000628: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000062C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80000630: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80000634: jal         0x80075580
    // 0x80000638: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80000638: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    after_0:
    // 0x8000063C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80000640: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80000644: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80000648: addiu       $t1, $t1, 0x7D68
    ctx->r9 = ADD32(ctx->r9, 0X7D68);
    // 0x8000064C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000650: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80000654: addiu       $a0, $a0, 0x7D50
    ctx->r4 = ADD32(ctx->r4, 0X7D50);
    // 0x80000658: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8000065C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80000664: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80000668: jal         0x80075470
    // 0x8000066C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    osPiStartDma_recomp(rdram, ctx);
        goto after_1;
    // 0x8000066C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x80000670: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000674: addiu       $a0, $a0, 0x7D68
    ctx->r4 = ADD32(ctx->r4, 0X7D68);
    // 0x80000678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000067C: jal         0x80075330
    // 0x80000680: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80000680: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80000684: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80000688: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8000068C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80000690: jr          $ra
    // 0x80000694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80000694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80000698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000698: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000069C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800006A0: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x800006A4: addiu       $s0, $s0, 0x7D48
    ctx->r16 = ADD32(ctx->r16, 0X7D48);
    // 0x800006A8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800006AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800006B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800006B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800006B8: beq         $t6, $zero, L_800006D8
    if (ctx->r14 == 0) {
        // 0x800006BC: sw          $a2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r6;
            goto L_800006D8;
    }
    // 0x800006BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
L_800006C0:
    bm64u2_yield_process(rdram, ctx);
    // 0x800006C0: nop

    // 0x800006C4: nop

    // 0x800006C8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x800006CC: nop

    // 0x800006D0: bne         $t7, $zero, L_800006C0
    if (ctx->r15 != 0) {
        // 0x800006D4: nop
    
            goto L_800006C0;
    }
    // 0x800006D4: nop

L_800006D8:
    // 0x800006D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800006DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800006E0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800006E4: jal         0x80075580
    // 0x800006E8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x800006E8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    after_0:
    // 0x800006EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800006F0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800006F4: jal         0x80075600
    // 0x800006F8: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x800006F8: nop

    after_1:
    // 0x800006FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80000700: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80000704: jal         0x800756B0
    // 0x80000708: nop

    osInvalICache_recomp(rdram, ctx);
        goto after_2;
    // 0x80000708: nop

    after_2:
    // 0x8000070C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80000710: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80000714: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80000718: addiu       $t1, $t1, 0x7D68
    ctx->r9 = ADD32(ctx->r9, 0X7D68);
    // 0x8000071C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000720: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80000724: addiu       $a0, $a0, 0x7D50
    ctx->r4 = ADD32(ctx->r4, 0X7D50);
    // 0x80000728: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8000072C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80000734: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80000738: jal         0x80075470
    // 0x8000073C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x8000073C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x80000740: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000744: addiu       $a0, $a0, 0x7D68
    ctx->r4 = ADD32(ctx->r4, 0X7D68);
    // 0x80000748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000074C: jal         0x80075330
    // 0x80000750: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80000750: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80000754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80000758: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8000075C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80000760: jr          $ra
    // 0x80000764: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80000764: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80000768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000076C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000770: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000774: addiu       $a0, $a0, 0x7D68
    ctx->r4 = ADD32(ctx->r4, 0X7D68);
    // 0x80000778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000077C: jal         0x80075330
    // 0x80000780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80000780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80000784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000078C: jr          $ra
    // 0x80000790: nop

    return;
    // 0x80000790: nop

;}
RECOMP_FUNC void func_80000794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000079C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800007A0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800007A4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800007A8: sw          $zero, 0x7D48($at)
    MEM_W(0X7D48, ctx->r1) = 0;
    // 0x800007AC: addiu       $a2, $a2, 0x7D10
    ctx->r6 = ADD32(ctx->r6, 0X7D10);
    // 0x800007B0: addiu       $a1, $a1, 0x7D30
    ctx->r5 = ADD32(ctx->r5, 0X7D30);
    // 0x800007B4: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x800007B8: jal         0x80075190
    // 0x800007BC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x800007BC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x800007C0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800007C4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800007C8: addiu       $a1, $a1, 0x7D80
    ctx->r5 = ADD32(ctx->r5, 0X7D80);
    // 0x800007CC: addiu       $a0, $a0, 0x7D68
    ctx->r4 = ADD32(ctx->r4, 0X7D68);
    // 0x800007D0: jal         0x80075300
    // 0x800007D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x800007D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800007D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800007DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800007E0: jr          $ra
    // 0x800007E4: nop

    return;
    // 0x800007E4: nop

;}
RECOMP_FUNC void func_800007F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800007F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800007F4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800007F8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800007FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80000800: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80000804: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80000808: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000080C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80000810: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x80000814: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x80000818: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x8000081C: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x80000820: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x80000824: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80000828: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000082C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80000830: addiu       $s7, $s7, -0x4E28
    ctx->r23 = ADD32(ctx->r23, -0X4E28);
    // 0x80000834: addiu       $s5, $s5, -0x21F0
    ctx->r21 = ADD32(ctx->r21, -0X21F0);
    // 0x80000838: addiu       $s4, $s4, -0x4E20
    ctx->r20 = ADD32(ctx->r20, -0X4E20);
    // 0x8000083C: addiu       $s3, $s3, -0x4E24
    ctx->r19 = ADD32(ctx->r19, -0X4E24);
    // 0x80000840: addiu       $s2, $s2, -0x4DF8
    ctx->r18 = ADD32(ctx->r18, -0X4DF8);
    // 0x80000844: addiu       $s6, $sp, 0x44
    ctx->r22 = ADD32(ctx->r29, 0X44);
    // 0x80000848: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8000084C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80000850: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80000854:
    // 0x80000854: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80000858: jal         0x80075330
    // 0x8000085C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8000085C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_0:
    // 0x80000860: jal         0x800760C0
    // 0x80000864: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_1;
    // 0x80000864: nop

    after_1:
    // 0x80000868: jal         0x80075ED0
    // 0x8000086C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x8000086C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80000870: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80000874: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80000878: beq         $t6, $zero, L_800008AC
    if (ctx->r14 == 0) {
        // 0x8000087C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800008AC;
    }
    // 0x8000087C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80000880: jal         0x80075ED0
    // 0x80000884: sw          $fp, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r30;
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x80000884: sw          $fp, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r30;
    after_3:
    // 0x80000888: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8000088C: addiu       $a0, $a0, -0x4DF0
    ctx->r4 = ADD32(ctx->r4, -0X4DF0);
    // 0x80000890: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000894: jal         0x80075330
    // 0x80000898: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80000898: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_4:
    // 0x8000089C: jal         0x80075ED0
    // 0x800008A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_5;
    // 0x800008A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x800008A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800008A8: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_800008AC:
    // 0x800008AC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800008B0: jal         0x8007627C
    // 0x800008B4: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_6;
    // 0x800008B4: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    after_6:
    // 0x800008B8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800008BC: jal         0x800763E4
    // 0x800008C0: nop

    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_7;
    // 0x800008C0: nop

    after_7:
    // 0x800008C4: jal         0x80075ED0
    // 0x800008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_8;
    // 0x800008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800008CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800008D0: addiu       $a0, $a0, -0x5FA8
    ctx->r4 = ADD32(ctx->r4, -0X5FA8);
    // 0x800008D4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800008D8: jal         0x80075330
    // 0x800008DC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x800008DC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_9:
    // 0x800008E0: jal         0x80075ED0
    // 0x800008E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_10;
    // 0x800008E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x800008E8: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x800008EC: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x800008F0: jal         0x80075ED0
    // 0x800008F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_11;
    // 0x800008F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x800008F8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800008FC: addiu       $a0, $a0, -0x5F70
    ctx->r4 = ADD32(ctx->r4, -0X5F70);
    // 0x80000900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000904: jal         0x80075330
    // 0x80000908: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x80000908: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_12:
    // 0x8000090C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80000910: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80000914: lw          $a0, 0x40($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X40);
    // 0x80000918: lw          $a1, 0x44($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X44);
    // 0x8000091C: jal         0x80075F70
    // 0x80000920: nop

    osSendMesg_recomp(rdram, ctx);
        goto after_13;
    // 0x80000920: nop

    after_13:
    // 0x80000924: b           L_80000854
    // 0x80000928: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80000854;
    // 0x80000928: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8000092C: nop

    // 0x80000930: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80000934: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80000938: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000093C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80000940: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80000944: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80000948: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000094C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80000950: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80000954: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80000958: jr          $ra
    // 0x8000095C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8000095C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80000960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000968: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000096C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80000970: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80000974: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80000978: jal         0x80075ED0
    // 0x8000097C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8000097C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80000980: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80000984: addiu       $v1, $v1, 0x7D90
    ctx->r3 = ADD32(ctx->r3, 0X7D90);
    // 0x80000988: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8000098C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80000990: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80000994: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80000998: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000099C: nop

    // 0x800009A0: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x800009A4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800009A8: nop

    // 0x800009AC: sw          $t8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r24;
    // 0x800009B0: jal         0x80075ED0
    // 0x800009B4: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x800009B4: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    after_1:
    // 0x800009B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800009BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800009C0: jr          $ra
    // 0x800009C4: nop

    return;
    // 0x800009C4: nop

;}
RECOMP_FUNC void func_800009C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800009C8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800009CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800009D0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800009D4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800009D8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800009DC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800009E0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800009E4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800009E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800009EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800009F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800009F4: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x800009F8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800009FC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80000A00: jal         0x80075300
    // 0x80000A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80000A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80000A08: jal         0x80075ED0
    // 0x80000A0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80000A0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80000A10: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80000A14: lw          $t6, 0x7D90($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7D90);
    // 0x80000A18: addiu       $t7, $sp, 0x60
    ctx->r15 = ADD32(ctx->r29, 0X60);
    // 0x80000A1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80000A20: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x80000A24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80000A28: sw          $t9, 0x7D90($at)
    MEM_W(0X7D90, ctx->r1) = ctx->r25;
    // 0x80000A2C: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x80000A30: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x80000A34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80000A38: jal         0x80075ED0
    // 0x80000A3C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80000A3C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    after_2:
    // 0x80000A40: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x80000A44: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x80000A48: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x80000A4C: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x80000A50: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x80000A54: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x80000A58: addiu       $s2, $s2, -0x5FA8
    ctx->r18 = ADD32(ctx->r18, -0X5FA8);
    // 0x80000A5C: addiu       $s3, $s3, -0x4E28
    ctx->r19 = ADD32(ctx->r19, -0X4E28);
    // 0x80000A60: addiu       $s4, $s4, -0x21D8
    ctx->r20 = ADD32(ctx->r20, -0X21D8);
    // 0x80000A64: addiu       $s6, $s6, -0x4E24
    ctx->r22 = ADD32(ctx->r22, -0X4E24);
    // 0x80000A68: addiu       $s7, $s7, -0x4E20
    ctx->r23 = ADD32(ctx->r23, -0X4E20);
    // 0x80000A6C: addiu       $fp, $fp, -0x4DF8
    ctx->r30 = ADD32(ctx->r30, -0X4DF8);
    // 0x80000A70: addiu       $s5, $sp, 0x8C
    ctx->r21 = ADD32(ctx->r29, 0X8C);
    // 0x80000A74: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
L_80000A78:
    // 0x80000A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000A7C: jal         0x80075330
    // 0x80000A80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80000A80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80000A84: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80000A88: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80000A8C: jal         0x80075330
    // 0x80000A90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80000A90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80000A94: bne         $v0, $zero, L_80000A78
    if (ctx->r2 != 0) {
        // 0x80000A98: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_80000A78;
    }
    // 0x80000A98: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80000A9C: jal         0x800760C0
    // 0x80000AA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_5;
    // 0x80000AA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_5:
    // 0x80000AA4: lw          $s1, 0x0($s6)
    ctx->r17 = MEM_W(ctx->r22, 0X0);
    // 0x80000AA8: nop

    // 0x80000AAC: beq         $s1, $zero, L_80000AF8
    if (ctx->r17 == 0) {
        // 0x80000AB0: lw          $a0, 0x8C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X8C);
            goto L_80000AF8;
    }
    // 0x80000AB0: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80000AB4: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x80000AB8: nop

    // 0x80000ABC: bne         $t0, $zero, L_80000AF8
    if (ctx->r8 != 0) {
        // 0x80000AC0: lw          $a0, 0x8C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X8C);
            goto L_80000AF8;
    }
    // 0x80000AC0: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80000AC4: jal         0x800760F0
    // 0x80000AC8: nop

    osSpTaskYield_recomp(rdram, ctx);
        goto after_6;
    // 0x80000AC8: nop

    after_6:
    // 0x80000ACC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80000AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000AD4: jal         0x80075330
    // 0x80000AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x80000AD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80000ADC: jal         0x80076110
    // 0x80000AE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_8;
    // 0x80000AE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80000AE4: beq         $v0, $zero, L_80000AF4
    if (ctx->r2 == 0) {
        // 0x80000AE8: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80000AF4;
    }
    // 0x80000AE8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80000AEC: b           L_80000AF4
    // 0x80000AF0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80000AF4;
    // 0x80000AF0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80000AF4:
    // 0x80000AF4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
L_80000AF8:
    // 0x80000AF8: jal         0x8007627C
    // 0x80000AFC: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_9;
    // 0x80000AFC: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    after_9:
    // 0x80000B00: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80000B04: jal         0x800763E4
    // 0x80000B08: nop

    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_10;
    // 0x80000B08: nop

    after_10:
    // 0x80000B0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80000B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000B14: jal         0x80075330
    // 0x80000B18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x80000B18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80000B1C: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x80000B20: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80000B24: beq         $t1, $zero, L_80000B3C
    if (ctx->r9 == 0) {
        // 0x80000B28: lui         $a0, 0x800E
        ctx->r4 = S32(0X800E << 16);
            goto L_80000B3C;
    }
    // 0x80000B28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000B2C: addiu       $a0, $a0, -0x4DF0
    ctx->r4 = ADD32(ctx->r4, -0X4DF0);
    // 0x80000B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80000B34: jal         0x80075F70
    // 0x80000B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x80000B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
L_80000B3C:
    // 0x80000B3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80000B40: beq         $s0, $at, L_80000B58
    if (ctx->r16 == ctx->r1) {
        // 0x80000B44: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80000B58;
    }
    // 0x80000B44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80000B48: beq         $s0, $at, L_80000B70
    if (ctx->r16 == ctx->r1) {
        // 0x80000B4C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80000B70;
    }
    // 0x80000B4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80000B50: b           L_80000B80
    // 0x80000B54: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
        goto L_80000B80;
    // 0x80000B54: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
L_80000B58:
    // 0x80000B58: jal         0x8007627C
    // 0x80000B5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_13;
    // 0x80000B5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80000B60: jal         0x800763E4
    // 0x80000B64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_14;
    // 0x80000B64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80000B68: b           L_80000B80
    // 0x80000B6C: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
        goto L_80000B80;
    // 0x80000B6C: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
L_80000B70:
    // 0x80000B70: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    // 0x80000B74: jal         0x80075F70
    // 0x80000B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_15;
    // 0x80000B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80000B7C: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
L_80000B80:
    // 0x80000B80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80000B84: lw          $a0, 0x40($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X40);
    // 0x80000B88: lw          $a1, 0x44($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X44);
    // 0x80000B8C: jal         0x80075F70
    // 0x80000B90: nop

    osSendMesg_recomp(rdram, ctx);
        goto after_16;
    // 0x80000B90: nop

    after_16:
    // 0x80000B94: b           L_80000A78
    // 0x80000B98: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
        goto L_80000A78;
    // 0x80000B98: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80000B9C: nop

    // 0x80000BA0: nop

    // 0x80000BA4: nop

    // 0x80000BA8: nop

    // 0x80000BAC: nop

    // 0x80000BB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80000BB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80000BB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80000BBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80000BC0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80000BC4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80000BC8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80000BCC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80000BD0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80000BD4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80000BD8: jr          $ra
    // 0x80000BDC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80000BDC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_80000BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000BE0: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80000BE4: lw          $s0, 0x7D90($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7D90);
    // 0x80000BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000BEC: beq         $s0, $zero, L_80000C24
    if (ctx->r16 == 0) {
        // 0x80000BF0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80000C24;
    }
    // 0x80000BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_80000BF4:
    // 0x80000BF4: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80000BF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80000BFC: and         $t7, $t6, $s1
    ctx->r15 = ctx->r14 & ctx->r17;
    // 0x80000C00: beq         $t7, $zero, L_80000C14
    if (ctx->r15 == 0) {
        // 0x80000C04: nop
    
            goto L_80000C14;
    }
    // 0x80000C04: nop

    // 0x80000C08: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80000C0C: jal         0x80075F70
    // 0x80000C10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80000C10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_80000C14:
    // 0x80000C14: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80000C18: nop

    // 0x80000C1C: bne         $s0, $zero, L_80000BF4
    if (ctx->r16 != 0) {
        // 0x80000C20: nop
    
            goto L_80000BF4;
    }
    // 0x80000C20: nop

L_80000C24:
    // 0x80000C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000C2C: jr          $ra
    // 0x80000C30: nop

    return;
    // 0x80000C30: nop

;}
RECOMP_FUNC void func_80000C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000C34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80000C38: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80000C3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80000C40: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80000C44: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80000C48: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80000C4C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80000C50: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x80000C54: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80000C58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80000C5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80000C60: addiu       $s3, $s3, -0x5FE0
    ctx->r19 = ADD32(ctx->r19, -0X5FE0);
    // 0x80000C64: addiu       $s2, $s2, 0x7D94
    ctx->r18 = ADD32(ctx->r18, 0X7D94);
    // 0x80000C68: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
    // 0x80000C6C: addiu       $s5, $zero, 0x29A
    ctx->r21 = ADD32(0, 0X29A);
    // 0x80000C70: addiu       $s6, $zero, 0x29D
    ctx->r22 = ADD32(0, 0X29D);
    // 0x80000C74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80000C78:
    // 0x80000C78: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80000C7C: jal         0x80075330
    // 0x80000C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80000C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80000C84: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80000C88: nop

    // 0x80000C8C: beq         $v0, $s5, L_80000CA4
    if (ctx->r2 == ctx->r21) {
        // 0x80000C90: nop
    
            goto L_80000CA4;
    }
    // 0x80000C90: nop

    // 0x80000C94: beq         $v0, $s6, L_80000CC0
    if (ctx->r2 == ctx->r22) {
        // 0x80000C98: nop
    
            goto L_80000CC0;
    }
    // 0x80000C98: nop

    // 0x80000C9C: b           L_80000C78
    // 0x80000CA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80000C78;
    // 0x80000CA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80000CA4:
    // 0x80000CA4: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80000CA8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80000CAC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80000CB0: jal         0x80000BE0
    // 0x80000CB4: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    func_80000BE0(rdram, ctx);
        goto after_1;
    // 0x80000CB4: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    after_1:
    // 0x80000CB8: b           L_80000C78
    // 0x80000CBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80000C78;
    // 0x80000CBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80000CC0:
    // 0x80000CC0: jal         0x80000BE0
    // 0x80000CC4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_80000BE0(rdram, ctx);
        goto after_2;
    // 0x80000CC4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_2:
    // 0x80000CC8: b           L_80000C78
    // 0x80000CCC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80000C78;
    // 0x80000CCC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80000CD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80000CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80000CD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80000CDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80000CE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80000CE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80000CE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80000CEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80000CF0: jr          $ra
    // 0x80000CF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80000CF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80000CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000CF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000D00: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80000D04: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80000D08: jal         0x80075ED0
    // 0x80000D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80000D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80000D10: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80000D14: addiu       $a3, $a3, 0x7D90
    ctx->r7 = ADD32(ctx->r7, 0X7D90);
    // 0x80000D18: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80000D1C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80000D20: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80000D24: beq         $v1, $zero, L_80000D68
    if (ctx->r3 == 0) {
        // 0x80000D28: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80000D68;
    }
    // 0x80000D28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80000D2C:
    // 0x80000D2C: bne         $v1, $a1, L_80000D54
    if (ctx->r3 != ctx->r5) {
        // 0x80000D30: nop
    
            goto L_80000D54;
    }
    // 0x80000D30: nop

    // 0x80000D34: beq         $a0, $zero, L_80000D48
    if (ctx->r4 == 0) {
        // 0x80000D38: nop
    
            goto L_80000D48;
    }
    // 0x80000D38: nop

    // 0x80000D3C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80000D40: b           L_80000D68
    // 0x80000D44: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
        goto L_80000D68;
    // 0x80000D44: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_80000D48:
    // 0x80000D48: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80000D4C: b           L_80000D68
    // 0x80000D50: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
        goto L_80000D68;
    // 0x80000D50: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_80000D54:
    // 0x80000D54: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80000D58: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80000D5C: nop

    // 0x80000D60: bne         $v1, $zero, L_80000D2C
    if (ctx->r3 != 0) {
        // 0x80000D64: nop
    
            goto L_80000D2C;
    }
    // 0x80000D64: nop

L_80000D68:
    // 0x80000D68: jal         0x80075ED0
    // 0x80000D6C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80000D6C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80000D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000D78: jr          $ra
    // 0x80000D7C: nop

    return;
    // 0x80000D7C: nop

;}
RECOMP_FUNC void func_80000D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000D80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80000D84: sw          $zero, 0x7D94($at)
    MEM_W(0X7D94, ctx->r1) = 0;
    // 0x80000D88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80000D8C: sw          $zero, 0x7D90($at)
    MEM_W(0X7D90, ctx->r1) = 0;
    // 0x80000D90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80000D94: sw          $zero, -0x4E28($at)
    MEM_W(-0X4E28, ctx->r1) = 0;
    // 0x80000D98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80000D9C: sw          $zero, -0x4E24($at)
    MEM_W(-0X4E24, ctx->r1) = 0;
    // 0x80000DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80000DA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80000DA8: sw          $zero, -0x4E20($at)
    MEM_W(-0X4E20, ctx->r1) = 0;
    // 0x80000DAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80000DB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80000DB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80000DB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80000DBC: sw          $zero, -0x4DF8($at)
    MEM_W(-0X4DF8, ctx->r1) = 0;
    // 0x80000DC0: jal         0x80075730
    // 0x80000DC4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_0;
    // 0x80000DC4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_0:
    // 0x80000DC8: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80000DCC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80000DD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80000DD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80000DD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80000DDC: addiu       $t8, $t8, 0x2AE0
    ctx->r24 = ADD32(ctx->r24, 0X2AE0);
    // 0x80000DE0: jal         0x80075A40
    // 0x80000DE4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osViSetMode_recomp(rdram, ctx);
        goto after_1;
    // 0x80000DE4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_1:
    // 0x80000DE8: jal         0x80075AA0
    // 0x80000DEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80075AA0(rdram, ctx);
        goto after_2;
    // 0x80000DEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80000DF0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000DF4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000DF8: addiu       $a1, $a1, -0x5FC8
    ctx->r5 = ADD32(ctx->r5, -0X5FC8);
    // 0x80000DFC: addiu       $a0, $a0, -0x5FE0
    ctx->r4 = ADD32(ctx->r4, -0X5FE0);
    // 0x80000E00: jal         0x80075300
    // 0x80000E04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80000E04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80000E08: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000E0C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000E10: addiu       $a1, $a1, -0x5F90
    ctx->r5 = ADD32(ctx->r5, -0X5F90);
    // 0x80000E14: addiu       $a0, $a0, -0x5FA8
    ctx->r4 = ADD32(ctx->r4, -0X5FA8);
    // 0x80000E18: jal         0x80075300
    // 0x80000E1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x80000E1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80000E20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000E24: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000E28: addiu       $a1, $a1, -0x5F58
    ctx->r5 = ADD32(ctx->r5, -0X5F58);
    // 0x80000E2C: addiu       $a0, $a0, -0x5F70
    ctx->r4 = ADD32(ctx->r4, -0X5F70);
    // 0x80000E30: jal         0x80075300
    // 0x80000E34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x80000E34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80000E38: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000E3C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000E40: addiu       $a1, $a1, -0x4E18
    ctx->r5 = ADD32(ctx->r5, -0X4E18);
    // 0x80000E44: addiu       $a0, $a0, -0x21F0
    ctx->r4 = ADD32(ctx->r4, -0X21F0);
    // 0x80000E48: jal         0x80075300
    // 0x80000E4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_6;
    // 0x80000E4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80000E50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000E54: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000E58: addiu       $a1, $a1, -0x4DD8
    ctx->r5 = ADD32(ctx->r5, -0X4DD8);
    // 0x80000E5C: addiu       $a0, $a0, -0x4DF0
    ctx->r4 = ADD32(ctx->r4, -0X4DF0);
    // 0x80000E60: jal         0x80075300
    // 0x80000E64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_7;
    // 0x80000E64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80000E68: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000E6C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000E70: addiu       $a1, $a1, -0x4DD0
    ctx->r5 = ADD32(ctx->r5, -0X4DD0);
    // 0x80000E74: addiu       $a0, $a0, -0x21D8
    ctx->r4 = ADD32(ctx->r4, -0X21D8);
    // 0x80000E78: jal         0x80075300
    // 0x80000E7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x80000E7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80000E80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000E84: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x80000E88: addiu       $a0, $a0, -0x5FE0
    ctx->r4 = ADD32(ctx->r4, -0X5FE0);
    // 0x80000E8C: jal         0x80075B10
    // 0x80000E90: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    osViSetEvent_recomp(rdram, ctx);
        goto after_9;
    // 0x80000E90: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    after_9:
    // 0x80000E94: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000E98: addiu       $a1, $a1, -0x5FA8
    ctx->r5 = ADD32(ctx->r5, -0X5FA8);
    // 0x80000E9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80000EA0: jal         0x80075B70
    // 0x80000EA4: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x80000EA4: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_10:
    // 0x80000EA8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000EAC: addiu       $a1, $a1, -0x5F70
    ctx->r5 = ADD32(ctx->r5, -0X5F70);
    // 0x80000EB0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80000EB4: jal         0x80075B70
    // 0x80000EB8: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x80000EB8: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_11:
    // 0x80000EBC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80000EC0: addiu       $a1, $a1, -0x5FE0
    ctx->r5 = ADD32(ctx->r5, -0X5FE0);
    // 0x80000EC4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80000EC8: jal         0x80075B70
    // 0x80000ECC: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x80000ECC: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_12:
    // 0x80000ED0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80000ED4: addiu       $t9, $t9, -0x5988
    ctx->r25 = ADD32(ctx->r25, -0X5988);
    // 0x80000ED8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000EDC: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80000EE0: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x80000EE4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80000EE8: addiu       $a2, $a2, 0xC34
    ctx->r6 = ADD32(ctx->r6, 0XC34);
    // 0x80000EEC: addiu       $a0, $a0, -0x5F38
    ctx->r4 = ADD32(ctx->r4, -0X5F38);
    // 0x80000EF0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80000EF4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80000EF8: jal         0x80075C30
    // 0x80000EFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_13;
    // 0x80000EFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x80000F00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000F04: jal         0x80075D80
    // 0x80000F08: addiu       $a0, $a0, -0x5F38
    ctx->r4 = ADD32(ctx->r4, -0X5F38);
    osStartThread_recomp(rdram, ctx);
        goto after_14;
    // 0x80000F08: addiu       $a0, $a0, -0x5F38
    ctx->r4 = ADD32(ctx->r4, -0X5F38);
    after_14:
    // 0x80000F0C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80000F10: addiu       $t1, $t1, -0x53D8
    ctx->r9 = ADD32(ctx->r9, -0X53D8);
    // 0x80000F14: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000F18: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80000F1C: addiu       $t2, $zero, 0x6F
    ctx->r10 = ADD32(0, 0X6F);
    // 0x80000F20: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80000F24: addiu       $a2, $a2, 0x9C8
    ctx->r6 = ADD32(ctx->r6, 0X9C8);
    // 0x80000F28: addiu       $a0, $a0, -0x5988
    ctx->r4 = ADD32(ctx->r4, -0X5988);
    // 0x80000F2C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80000F30: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80000F34: jal         0x80075C30
    // 0x80000F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_15;
    // 0x80000F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x80000F3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000F40: jal         0x80075D80
    // 0x80000F44: addiu       $a0, $a0, -0x5988
    ctx->r4 = ADD32(ctx->r4, -0X5988);
    osStartThread_recomp(rdram, ctx);
        goto after_16;
    // 0x80000F44: addiu       $a0, $a0, -0x5988
    ctx->r4 = ADD32(ctx->r4, -0X5988);
    after_16:
    // 0x80000F48: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80000F4C: addiu       $t3, $t3, -0x4E28
    ctx->r11 = ADD32(ctx->r11, -0X4E28);
    // 0x80000F50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000F54: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80000F58: addiu       $t4, $zero, 0x65
    ctx->r12 = ADD32(0, 0X65);
    // 0x80000F5C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80000F60: addiu       $a2, $a2, 0x7F0
    ctx->r6 = ADD32(ctx->r6, 0X7F0);
    // 0x80000F64: addiu       $a0, $a0, -0x53D8
    ctx->r4 = ADD32(ctx->r4, -0X53D8);
    // 0x80000F68: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80000F6C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80000F70: jal         0x80075C30
    // 0x80000F74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_17;
    // 0x80000F74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x80000F78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80000F7C: jal         0x80075D80
    // 0x80000F80: addiu       $a0, $a0, -0x53D8
    ctx->r4 = ADD32(ctx->r4, -0X53D8);
    osStartThread_recomp(rdram, ctx);
        goto after_18;
    // 0x80000F80: addiu       $a0, $a0, -0x53D8
    ctx->r4 = ADD32(ctx->r4, -0X53D8);
    after_18:
    // 0x80000F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80000F88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000F8C: jr          $ra
    // 0x80000F90: nop

    return;
    // 0x80000F90: nop

;}
RECOMP_FUNC void osSyncPrintf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000FA0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80000FA4: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80000FA8: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80000FAC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80000FB0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80000FB4: jr          $ra
    // 0x80000FB8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80000FB8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80000FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000FBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80000FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000FC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80000FC8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80000FCC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80000FD0: jal         0x80000FA0
    // 0x80000FD4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80000FD4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
L_80000FD8:
    // 0x80000FD8: b           L_80000FD8
    pause_self(rdram);
    // 0x80000FDC: nop

    // 0x80000FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000FE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000FE8: jr          $ra
    // 0x80000FEC: nop

    return;
    // 0x80000FEC: nop

;}
RECOMP_FUNC void osLogFloat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000FF0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x80000FF4: jr          $ra
    // 0x80000FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80000FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void osFlushLog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000FFC: jr          $ra
    // 0x80001000: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80001000: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void osLogEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001004: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80001008: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8000100C: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80001010: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80001014: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80001018: jr          $ra
    // 0x8000101C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000101C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void osCreateLog(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001020: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80001024: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80001028: jr          $ra
    // 0x8000102C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x8000102C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void osReadHost(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001030: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80001034: jr          $ra
    // 0x80001038: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80001038: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void osWriteHost(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000103C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80001040: jr          $ra
    // 0x80001044: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80001044: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80001048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000104C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80001050: jal         0x80000794
    // 0x80001054: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80000794(rdram, ctx);
        goto after_0;
    // 0x80001054: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80001058: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000105C: addiu       $t6, $t6, 0x100
    ctx->r14 = ADD32(ctx->r14, 0X100);
    // 0x80001060: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80001064: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80001068: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000106C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80001070: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80001074: addiu       $a2, $a2, 0x119C
    ctx->r6 = ADD32(ctx->r6, 0X119C);
    // 0x80001078: addiu       $a0, $a0, -0x40B0
    ctx->r4 = ADD32(ctx->r4, -0X40B0);
    // 0x8000107C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80001080: jal         0x80075C30
    // 0x80001084: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x80001084: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80001088: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000108C: jal         0x80075D80
    // 0x80001090: addiu       $a0, $a0, -0x40B0
    ctx->r4 = ADD32(ctx->r4, -0X40B0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x80001090: addiu       $a0, $a0, -0x40B0
    ctx->r4 = ADD32(ctx->r4, -0X40B0);
    after_2:
    // 0x80001094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80001098: jal         0x800767D0
    // 0x8000109C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_3;
    // 0x8000109C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_800010A0:
    // 0x800010A0: b           L_800010A0
    pause_self(rdram);
    // 0x800010A4: nop

    // 0x800010A8: nop

    // 0x800010AC: nop

    // 0x800010B0: nop

    // 0x800010B4: nop

    // 0x800010B8: nop

    // 0x800010BC: nop

    // 0x800010C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800010C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800010C8: jr          $ra
    // 0x800010CC: nop

    return;
    // 0x800010CC: nop

;}
RECOMP_FUNC void func_800010D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800010D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800010D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800010D8: jal         0x80073EE0
    // 0x800010DC: nop

    func_80073EE0(rdram, ctx);
        goto after_0;
    // 0x800010DC: nop

    after_0:
    // 0x800010E0: jal         0x80076430
    // 0x800010E4: nop

    osUnmapTLBAll_recomp(rdram, ctx);
        goto after_1;
    // 0x800010E4: nop

    after_1:
    // 0x800010E8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800010EC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800010F0: addiu       $a0, $a0, 0x7910
    ctx->r4 = ADD32(ctx->r4, 0X7910);
    // 0x800010F4: addiu       $t6, $t6, 0x4F0
    ctx->r14 = ADD32(ctx->r14, 0X4F0);
    // 0x800010F8: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    // 0x800010FC: jal         0x8000167C
    // 0x80001100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8000167C(rdram, ctx);
        goto after_2;
    // 0x80001100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80001104: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80001108: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8000110C: addiu       $a0, $a0, 0x44F0
    ctx->r4 = ADD32(ctx->r4, 0X44F0);
    // 0x80001110: addiu       $t7, $t7, -0x21C0
    ctx->r15 = ADD32(ctx->r15, -0X21C0);
    // 0x80001114: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    // 0x80001118: jal         0x8000167C
    // 0x8000111C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8000167C(rdram, ctx);
        goto after_3;
    // 0x8000111C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80001120: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80001124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80001128: jal         0x8000167C
    // 0x8000112C: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    func_8000167C(rdram, ctx);
        goto after_4;
    // 0x8000112C: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    after_4:
    // 0x80001130: jal         0x800760C0
    // 0x80001134: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_5;
    // 0x80001134: nop

    after_5:
    // 0x80001138: jal         0x80076480
    // 0x8000113C: nop

    osInitialize_recomp(rdram, ctx);
        goto after_6;
    // 0x8000113C: nop

    after_6:
    // 0x80001140: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80001144: addiu       $t8, $t8, -0x40B0
    ctx->r24 = ADD32(ctx->r24, -0X40B0);
    // 0x80001148: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000114C: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80001150: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80001154: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80001158: addiu       $a2, $a2, 0x1048
    ctx->r6 = ADD32(ctx->r6, 0X1048);
    // 0x8000115C: addiu       $a0, $a0, 0x7DA0
    ctx->r4 = ADD32(ctx->r4, 0X7DA0);
    // 0x80001160: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80001164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80001168: jal         0x80075C30
    // 0x8000116C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_7;
    // 0x8000116C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x80001170: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80001174: jal         0x80075D80
    // 0x80001178: addiu       $a0, $a0, 0x7DA0
    ctx->r4 = ADD32(ctx->r4, 0X7DA0);
    osStartThread_recomp(rdram, ctx);
        goto after_8;
    // 0x80001178: addiu       $a0, $a0, 0x7DA0
    ctx->r4 = ADD32(ctx->r4, 0X7DA0);
    after_8:
    // 0x8000117C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80001180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80001184: jr          $ra
    // 0x80001188: nop

    return;
    // 0x80001188: nop

;}
RECOMP_FUNC void func_80001190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001190: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80001194: jr          $ra
    // 0x80001198: sw          $a0, -0x19A8($at)
    MEM_W(-0X19A8, ctx->r1) = ctx->r4;
    return;
    // 0x80001198: sw          $a0, -0x19A8($at)
    MEM_W(-0X19A8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8000119C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000119C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800011A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800011A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800011A8: jal         0x80000450
    // 0x800011AC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    func_80000450(rdram, ctx);
        goto after_0;
    // 0x800011AC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    after_0:
    // 0x800011B0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800011B4: addiu       $a1, $a1, -0x197C
    ctx->r5 = ADD32(ctx->r5, -0X197C);
    // 0x800011B8: jal         0x80073EF0
    // 0x800011BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80073EF0(rdram, ctx);
        goto after_1;
    // 0x800011BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800011C0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800011C4: addiu       $a1, $a1, -0x1958
    ctx->r5 = ADD32(ctx->r5, -0X1958);
    // 0x800011C8: jal         0x80073EF0
    // 0x800011CC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80073EF0(rdram, ctx);
        goto after_2;
    // 0x800011CC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
    // 0x800011D0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800011D4: addiu       $a1, $a1, -0x190C
    ctx->r5 = ADD32(ctx->r5, -0X190C);
    // 0x800011D8: jal         0x80073EF0
    // 0x800011DC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80073EF0(rdram, ctx);
        goto after_3;
    // 0x800011DC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_3:
    // 0x800011E0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800011E4: addiu       $a1, $a1, -0x18E8
    ctx->r5 = ADD32(ctx->r5, -0X18E8);
    // 0x800011E8: jal         0x80073EF0
    // 0x800011EC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80073EF0(rdram, ctx);
        goto after_4;
    // 0x800011EC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
    // 0x800011F0: jal         0x80073EE0
    // 0x800011F4: nop

    func_80073EE0(rdram, ctx);
        goto after_5;
    // 0x800011F4: nop

    after_5:
    // 0x800011F8: lui         $a0, 0x802D
    ctx->r4 = S32(0X802D << 16);
    // 0x800011FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80001200: jal         0x80006E48
    // 0x80001204: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    func_80006E48(rdram, ctx);
        goto after_6;
    // 0x80001204: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    after_6:
    // 0x80001208: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8000120C: lw          $v0, 0x300($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X300);
    // 0x80001210: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80001214: beq         $v0, $at, L_80001230
    if (ctx->r2 == ctx->r1) {
        // 0x80001218: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80001230;
    }
    // 0x80001218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000121C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80001220: bne         $v0, $at, L_80001238
    if (ctx->r2 != ctx->r1) {
        // 0x80001224: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80001238;
    }
    // 0x80001224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80001228: b           L_80001248
    // 0x8000122C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
        goto L_80001248;
    // 0x8000122C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80001230:
    // 0x80001230: b           L_80001248
    // 0x80001234: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80001248;
    // 0x80001234: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80001238:
    // 0x80001238: jal         0x800767D0
    // 0x8000123C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_7;
    // 0x8000123C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80001240:
    // 0x80001240: b           L_80001240
    pause_self(rdram);
    // 0x80001244: nop

L_80001248:
    // 0x80001248: jal         0x80000D80
    // 0x8000124C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80000D80(rdram, ctx);
        goto after_8;
    // 0x8000124C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_8:
    // 0x80001250: jal         0x800053B8
    // 0x80001254: nop

    func_800053B8(rdram, ctx);
        goto after_9;
    // 0x80001254: nop

    after_9:
    // 0x80001258: jal         0x80003D70
    // 0x8000125C: nop

    func_80003D70(rdram, ctx);
        goto after_10;
    // 0x8000125C: nop

    after_10:
    // 0x80001260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80001264: jal         0x80003C84
    // 0x80001268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80003C84(rdram, ctx);
        goto after_11;
    // 0x80001268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8000126C: jal         0x80006138
    // 0x80001270: nop

    func_80006138(rdram, ctx);
        goto after_12;
    // 0x80001270: nop

    after_12:
    // 0x80001274: jal         0x800067BC
    // 0x80001278: nop

    func_800067BC(rdram, ctx);
        goto after_13;
    // 0x80001278: nop

    after_13:
    // 0x8000127C: jal         0x80007E50
    // 0x80001280: nop

    func_80007E50(rdram, ctx);
        goto after_14;
    // 0x80001280: nop

    after_14:
    // 0x80001284: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80001288: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8000128C: jal         0x80075300
    // 0x80001290: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_15;
    // 0x80001290: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x80001294: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x80001298: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8000129C: jal         0x80000960
    // 0x800012A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80000960(rdram, ctx);
        goto after_16;
    // 0x800012A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x800012A4: jal         0x80005660
    // 0x800012A8: nop

    func_80005660(rdram, ctx);
        goto after_17;
    // 0x800012A8: nop

    after_17:
    // 0x800012AC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800012B0: addiu       $a1, $a1, -0x19A4
    ctx->r5 = ADD32(ctx->r5, -0X19A4);
    // 0x800012B4: jal         0x80073EF0
    // 0x800012B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80073EF0(rdram, ctx);
        goto after_18;
    // 0x800012B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
    // 0x800012BC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800012C0: addiu       $a1, $a1, -0x1984
    ctx->r5 = ADD32(ctx->r5, -0X1984);
    // 0x800012C4: jal         0x80073EF0
    // 0x800012C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80073EF0(rdram, ctx);
        goto after_19;
    // 0x800012C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_19:
    // 0x800012CC: jal         0x80076A30
    // 0x800012D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_20;
    // 0x800012D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_20:
    // 0x800012D4: jal         0x80076A30
    // 0x800012D8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_21;
    // 0x800012D8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_21:
    // 0x800012DC: jal         0x80076A30
    // 0x800012E0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_22;
    // 0x800012E0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_22:
    // 0x800012E4: jal         0x80076A30
    // 0x800012E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_23;
    // 0x800012E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_23:
    // 0x800012EC: jal         0x80028220
    // 0x800012F0: nop

    func_80028220(rdram, ctx);
        goto after_24;
    // 0x800012F0: nop

    after_24:
    // 0x800012F4: jal         0x800033A0
    // 0x800012F8: nop

    func_800033A0(rdram, ctx);
        goto after_25;
    // 0x800012F8: nop

    after_25:
    // 0x800012FC: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80001300: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80001304: jal         0x80075330
    // 0x80001308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_26;
    // 0x80001308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x8000130C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80001310: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80001314: jal         0x80075330
    // 0x80001318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_27;
    // 0x80001318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_27:
    // 0x8000131C: jal         0x80002228
    // 0x80001320: nop

    func_80002228(rdram, ctx);
        goto after_28;
    // 0x80001320: nop

    after_28:
    // 0x80001324: jal         0x80027B14
    // 0x80001328: nop

    func_80027B14(rdram, ctx);
        goto after_29;
    // 0x80001328: nop

    after_29:
    // 0x8000132C: jal         0x80014124
    // 0x80001330: nop

    func_80014124(rdram, ctx);
        goto after_30;
    // 0x80001330: nop

    after_30:
    // 0x80001334: lui         $s0, 0x4
    ctx->r16 = S32(0X4 << 16);
    // 0x80001338: ori         $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 | 0X1000;
    // 0x8000133C: jal         0x80006DFC
    // 0x80001340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80006DFC(rdram, ctx);
        goto after_31;
    // 0x80001340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80001344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80001348: jal         0x80016BE0
    // 0x8000134C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80016BE0(rdram, ctx);
        goto after_32;
    // 0x8000134C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_32:
    // 0x80001350: jal         0x8001BE00
    // 0x80001354: nop

    func_8001BE00(rdram, ctx);
        goto after_33;
    // 0x80001354: nop

    after_33:
    // 0x80001358: jal         0x8001B560
    // 0x8000135C: nop

    func_8001B560(rdram, ctx);
        goto after_34;
    // 0x8000135C: nop

    after_34:
    // 0x80001360: jal         0x80014910
    // 0x80001364: nop

    func_80014910(rdram, ctx);
        goto after_35;
    // 0x80001364: nop

    after_35:
    // 0x80001368: jal         0x80008004
    // 0x8000136C: nop

    func_80008004(rdram, ctx);
        goto after_36;
    // 0x8000136C: nop

    after_36:
    // 0x80001370: jal         0x80004414
    // 0x80001374: nop

    func_80004414(rdram, ctx);
        goto after_37;
    // 0x80001374: nop

    after_37:
    // 0x80001378: jal         0x800028F0
    // 0x8000137C: nop

    func_800028F0(rdram, ctx);
        goto after_38;
    // 0x8000137C: nop

    after_38:
    // 0x80001380: jal         0x80056860
    // 0x80001384: nop

    func_80056860(rdram, ctx);
        goto after_39;
    // 0x80001384: nop

    after_39:
    // 0x80001388: jal         0x80009070
    // 0x8000138C: nop

    func_80009070(rdram, ctx);
        goto after_40;
    // 0x8000138C: nop

    after_40:
    // 0x80001390: jal         0x80076930
    // 0x80001394: nop

    osGetTime_recomp(rdram, ctx);
        goto after_41;
    // 0x80001394: nop

    after_41:
    // 0x80001398: jal         0x80027F84
    // 0x8000139C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    func_80027F84(rdram, ctx);
        goto after_42;
    // 0x8000139C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_42:
    // 0x800013A0: jal         0x80009B50
    // 0x800013A4: nop

    func_80009B50(rdram, ctx);
        goto after_43;
    // 0x800013A4: nop

    after_43:
    // 0x800013A8: jal         0x80002050
    // 0x800013AC: nop

    func_80002050(rdram, ctx);
        goto after_44;
    // 0x800013AC: nop

    after_44:
    // 0x800013B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800013B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800013B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800013BC: jal         0x8000960C
    // 0x800013C0: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    func_8000960C(rdram, ctx);
        goto after_45;
    // 0x800013C0: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    after_45:
    // 0x800013C4: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800013C8: lw          $t6, 0x380($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X380);
    // 0x800013CC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800013D0: bne         $t6, $zero, L_800013E8
    if (ctx->r14 != 0) {
        // 0x800013D4: nop
    
            goto L_800013E8;
    }
    // 0x800013D4: nop

    // 0x800013D8: lw          $t7, 0x3C7C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3C7C);
    // 0x800013DC: nop

    // 0x800013E0: beq         $t7, $zero, L_800013F4
    if (ctx->r15 == 0) {
        // 0x800013E4: addiu       $a0, $sp, 0x7C
        ctx->r4 = ADD32(ctx->r29, 0X7C);
            goto L_800013F4;
    }
    // 0x800013E4: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
L_800013E8:
    // 0x800013E8: b           L_800013E8
    pause_self(rdram);
    // 0x800013EC: nop

L_800013F0:
    // 0x800013F0: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
L_800013F4:
    // 0x800013F4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x800013F8: jal         0x80075330
    // 0x800013FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_46;
    // 0x800013FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_46:
    // 0x80001400: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80001404: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80001408: bne         $t8, $at, L_800013F4
    if (ctx->r24 != ctx->r1) {
        // 0x8000140C: addiu       $a0, $sp, 0x7C
        ctx->r4 = ADD32(ctx->r29, 0X7C);
            goto L_800013F4;
    }
    // 0x8000140C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80001410: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80001414: lw          $v0, 0x7D94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7D94);
    // 0x80001418: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8000141C: nop

    // 0x80001420: subu        $t0, $v0, $t9
    ctx->r8 = SUB32(ctx->r2, ctx->r25);
    // 0x80001424: sltiu       $at, $t0, 0x2
    ctx->r1 = ctx->r8 < 0X2 ? 1 : 0;
    // 0x80001428: bne         $at, $zero, L_800013F4
    if (ctx->r1 != 0) {
        // 0x8000142C: addiu       $a0, $sp, 0x7C
        ctx->r4 = ADD32(ctx->r29, 0X7C);
            goto L_800013F4;
    }
    // 0x8000142C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80001430: jal         0x800036DC
    // 0x80001434: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_800036DC(rdram, ctx);
        goto after_47;
    // 0x80001434: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_47:
    // 0x80001438: jal         0x80005460
    // 0x8000143C: nop

    func_80005460(rdram, ctx);
        goto after_48;
    // 0x8000143C: nop

    after_48:
    // 0x80001440: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80001444: lw          $t1, 0x380($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X380);
    // 0x80001448: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000144C: bne         $t1, $zero, L_80001464
    if (ctx->r9 != 0) {
        // 0x80001450: nop
    
            goto L_80001464;
    }
    // 0x80001450: nop

    // 0x80001454: jal         0x800077B4
    // 0x80001458: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800077B4(rdram, ctx);
        goto after_49;
    // 0x80001458: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_49:
    // 0x8000145C: b           L_80001468
    // 0x80001460: nop

        goto L_80001468;
    // 0x80001460: nop

L_80001464:
    // 0x80001464: sw          $zero, -0x19A8($at)
    MEM_W(-0X19A8, ctx->r1) = 0;
L_80001468:
    // 0x80001468: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8000146C: lw          $t2, -0x19A8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X19A8);
    // 0x80001470: nop

    // 0x80001474: beq         $t2, $zero, L_80001484
    if (ctx->r10 == 0) {
        // 0x80001478: nop
    
            goto L_80001484;
    }
    // 0x80001478: nop

    // 0x8000147C: jal         0x80018450
    // 0x80001480: nop

    func_80018450(rdram, ctx);
        goto after_50;
    // 0x80001480: nop

    after_50:
L_80001484:
    // 0x80001484: jal         0x80027438
    // 0x80001488: nop

    func_80027438(rdram, ctx);
        goto after_51;
    // 0x80001488: nop

    after_51:
    // 0x8000148C: jal         0x8000498C
    // 0x80001490: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_8000498C(rdram, ctx);
        goto after_52;
    // 0x80001490: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_52:
    // 0x80001494: beq         $v0, $zero, L_800013F0
    if (ctx->r2 == 0) {
        // 0x80001498: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800013F0;
    }
    // 0x80001498: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8000149C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800014A0: addiu       $v0, $v0, -0x19AC
    ctx->r2 = ADD32(ctx->r2, -0X19AC);
    // 0x800014A4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800014A8: nop

    // 0x800014AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800014B0: jal         0x80014734
    // 0x800014B4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    func_80014734(rdram, ctx);
        goto after_53;
    // 0x800014B4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    after_53:
    // 0x800014B8: jal         0x80004D34
    // 0x800014BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80004D34(rdram, ctx);
        goto after_54;
    // 0x800014BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_54:
    // 0x800014C0: jal         0x80018288
    // 0x800014C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80018288(rdram, ctx);
        goto after_55;
    // 0x800014C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_55:
    // 0x800014C8: jal         0x800181B0
    // 0x800014CC: nop

    func_800181B0(rdram, ctx);
        goto after_56;
    // 0x800014CC: nop

    after_56:
    // 0x800014D0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800014D4: lw          $a0, 0x128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X128);
    // 0x800014D8: jal         0x800047E0
    // 0x800014DC: nop

    func_800047E0(rdram, ctx);
        goto after_57;
    // 0x800014DC: nop

    after_57:
    // 0x800014E0: jal         0x80014434
    // 0x800014E4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_80014434(rdram, ctx);
        goto after_58;
    // 0x800014E4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_58:
    // 0x800014E8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800014EC: lw          $a1, 0x6280($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6280);
    // 0x800014F0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800014F4: jal         0x8000D844
    // 0x800014F8: nop

    func_8000D844(rdram, ctx);
        goto after_59;
    // 0x800014F8: nop

    after_59:
    // 0x800014FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80001500: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x80001504: jal         0x80014160
    // 0x80001508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80014160(rdram, ctx);
        goto after_60;
    // 0x80001508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x8000150C: lui         $t5, 0xDF00
    ctx->r13 = S32(0XDF00 << 16);
    // 0x80001510: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80001514: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80001518: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000151C: lw          $a0, 0x128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X128);
    // 0x80001520: jal         0x80004688
    // 0x80001524: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    func_80004688(rdram, ctx);
        goto after_61;
    // 0x80001524: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    after_61:
    // 0x80001528: jal         0x80008A68
    // 0x8000152C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80008A68(rdram, ctx);
        goto after_62;
    // 0x8000152C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_62:
    // 0x80001530: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80001534: jal         0x800082AC
    // 0x80001538: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_800082AC(rdram, ctx);
        goto after_63;
    // 0x80001538: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_63:
    // 0x8000153C: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x80001540: ori         $t7, $t7, 0x3C0
    ctx->r15 = ctx->r15 | 0X3C0;
    // 0x80001544: lui         $t6, 0xED00
    ctx->r14 = S32(0XED00 << 16);
    // 0x80001548: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000154C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80001550: jal         0x800090B0
    // 0x80001554: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    func_800090B0(rdram, ctx);
        goto after_64;
    // 0x80001554: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    after_64:
    // 0x80001558: jal         0x80003DB4
    // 0x8000155C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80003DB4(rdram, ctx);
        goto after_65;
    // 0x8000155C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_65:
    // 0x80001560: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80001564: jal         0x800048FC
    // 0x80001568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800048FC(rdram, ctx);
        goto after_66;
    // 0x80001568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_66:
    // 0x8000156C: jal         0x80012168
    // 0x80001570: nop

    func_80012168(rdram, ctx);
        goto after_67;
    // 0x80001570: nop

    after_67:
    // 0x80001574: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80001578: lw          $t8, -0x19B0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19B0);
    // 0x8000157C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80001580: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80001584: b           L_800013F0
    // 0x80001588: sw          $t9, -0x19B0($at)
    MEM_W(-0X19B0, ctx->r1) = ctx->r25;
        goto L_800013F0;
    // 0x80001588: sw          $t9, -0x19B0($at)
    MEM_W(-0X19B0, ctx->r1) = ctx->r25;
    // 0x8000158C: nop

    // 0x80001590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80001594: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001598: jr          $ra
    // 0x8000159C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8000159C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_800015A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800015A0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800015A4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800015A8: beq         $t6, $zero, L_800015C0
    if (ctx->r14 == 0) {
        // 0x800015AC: nop
    
            goto L_800015C0;
    }
    // 0x800015AC: nop

L_800015B0:
    // 0x800015B0: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    // 0x800015B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800015B8: bne         $t7, $zero, L_800015B0
    if (ctx->r15 != 0) {
        // 0x800015BC: nop
    
            goto L_800015B0;
    }
    // 0x800015BC: nop

L_800015C0:
    // 0x800015C0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800015C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800015C8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800015CC: beq         $v0, $zero, L_800015E8
    if (ctx->r2 == 0) {
        // 0x800015D0: sb          $v0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r2;
            goto L_800015E8;
    }
    // 0x800015D0: sb          $v0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r2;
L_800015D4:
    // 0x800015D4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800015D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800015DC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800015E0: bne         $v0, $zero, L_800015D4
    if (ctx->r2 != 0) {
        // 0x800015E4: sb          $v0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r2;
            goto L_800015D4;
    }
    // 0x800015E4: sb          $v0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r2;
L_800015E8:
    // 0x800015E8: jr          $ra
    // 0x800015EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800015EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800015F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800015F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800015F4: beq         $a2, $zero, L_80001674
    if (ctx->r6 == 0) {
        // 0x800015F8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80001674;
    }
    // 0x800015F8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800015FC: beq         $a0, $a1, L_80001674
    if (ctx->r4 == ctx->r5) {
        // 0x80001600: sltu        $at, $a1, $a0
        ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
            goto L_80001674;
    }
    // 0x80001600: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x80001604: beq         $at, $zero, L_8000164C
    if (ctx->r1 == 0) {
        // 0x80001608: addu        $t0, $a1, $a2
        ctx->r8 = ADD32(ctx->r5, ctx->r6);
            goto L_8000164C;
    }
    // 0x80001608: addu        $t0, $a1, $a2
    ctx->r8 = ADD32(ctx->r5, ctx->r6);
    // 0x8000160C: sltu        $at, $a0, $t0
    ctx->r1 = ctx->r4 < ctx->r8 ? 1 : 0;
    // 0x80001610: beq         $at, $zero, L_8000164C
    if (ctx->r1 == 0) {
        // 0x80001614: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_8000164C;
    }
    // 0x80001614: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80001618: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8000161C: beq         $a2, $zero, L_80001674
    if (ctx->r6 == 0) {
        // 0x80001620: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80001674;
    }
    // 0x80001620: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80001624: addu        $v0, $a2, $a0
    ctx->r2 = ADD32(ctx->r6, ctx->r4);
L_80001628:
    // 0x80001628: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x8000162C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80001630: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80001634: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80001638: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x8000163C: bne         $a2, $zero, L_80001628
    if (ctx->r6 != 0) {
        // 0x80001640: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80001628;
    }
    // 0x80001640: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80001644: jr          $ra
    // 0x80001648: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80001648: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000164C:
    // 0x8000164C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80001650: beq         $a2, $zero, L_80001674
    if (ctx->r6 == 0) {
        // 0x80001654: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80001674;
    }
    // 0x80001654: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_80001658:
    // 0x80001658: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x8000165C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80001660: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80001664: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80001668: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8000166C: bne         $a2, $zero, L_80001658
    if (ctx->r6 != 0) {
        // 0x80001670: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80001658;
    }
    // 0x80001670: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_80001674:
    // 0x80001674: jr          $ra
    // 0x80001678: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80001678: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000167C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000167C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80001680: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80001684: beq         $a2, $zero, L_800016A0
    if (ctx->r6 == 0) {
        // 0x80001688: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_800016A0;
    }
    // 0x80001688: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000168C:
    // 0x8000168C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80001690: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x80001694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80001698: bne         $a2, $zero, L_8000168C
    if (ctx->r6 != 0) {
        // 0x8000169C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000168C;
    }
    // 0x8000169C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_800016A0:
    // 0x800016A0: jr          $ra
    // 0x800016A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800016A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_800016B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800016B4: jr          $ra
    // 0x800016B8: nop

    return;
    // 0x800016B8: nop

;}
RECOMP_FUNC void func_800016BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016BC: beq         $a2, $zero, L_800016E0
    if (ctx->r6 == 0) {
        // 0x800016C0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800016E0;
    }
    // 0x800016C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800016C4: beq         $a2, $at, L_800016FC
    if (ctx->r6 == ctx->r1) {
        // 0x800016C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800016FC;
    }
    // 0x800016C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800016CC: beq         $a2, $at, L_80001734
    if (ctx->r6 == ctx->r1) {
        // 0x800016D0: nop
    
            goto L_80001734;
    }
    // 0x800016D0: nop

    // 0x800016D4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800016D8: b           L_8000176C
    // 0x800016DC: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
        goto L_8000176C;
    // 0x800016DC: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
L_800016E0:
    // 0x800016E0: bgez        $a1, L_800016F0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800016E4: nop
    
            goto L_800016F0;
    }
    // 0x800016E4: nop

    // 0x800016E8: jr          $ra
    // 0x800016EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800016EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800016F0:
    // 0x800016F0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800016F4: b           L_80001768
    // 0x800016F8: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
        goto L_80001768;
    // 0x800016F8: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
L_800016FC:
    // 0x800016FC: bgez        $a1, L_80001720
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80001700: nop
    
            goto L_80001720;
    }
    // 0x80001700: nop

    // 0x80001704: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80001708: negu        $t7, $a1
    ctx->r15 = SUB32(0, ctx->r5);
    // 0x8000170C: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x80001710: beq         $at, $zero, L_80001720
    if (ctx->r1 == 0) {
        // 0x80001714: nop
    
            goto L_80001720;
    }
    // 0x80001714: nop

    // 0x80001718: jr          $ra
    // 0x8000171C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8000171C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001720:
    // 0x80001720: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80001724: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80001728: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8000172C: b           L_80001768
    // 0x80001730: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
        goto L_80001768;
    // 0x80001730: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
L_80001734:
    // 0x80001734: bgez        $a1, L_80001758
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80001738: nop
    
            goto L_80001758;
    }
    // 0x80001738: nop

    // 0x8000173C: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x80001740: negu        $t1, $a1
    ctx->r9 = SUB32(0, ctx->r5);
    // 0x80001744: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x80001748: beq         $at, $zero, L_80001758
    if (ctx->r1 == 0) {
        // 0x8000174C: nop
    
            goto L_80001758;
    }
    // 0x8000174C: nop

    // 0x80001750: jr          $ra
    // 0x80001754: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80001754: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001758:
    // 0x80001758: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8000175C: nop

    // 0x80001760: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x80001764: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
L_80001768:
    // 0x80001768: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
L_8000176C:
    // 0x8000176C: nop

    // 0x80001770: sltu        $at, $v0, $t3
    ctx->r1 = ctx->r2 < ctx->r11 ? 1 : 0;
    // 0x80001774: beq         $at, $zero, L_80001784
    if (ctx->r1 == 0) {
        // 0x80001778: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80001784;
    }
    // 0x80001778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000177C: jr          $ra
    // 0x80001780: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80001780: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001784:
    // 0x80001784: jr          $ra
    // 0x80001788: nop

    return;
    // 0x80001788: nop

;}
RECOMP_FUNC void func_8000179C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000179C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x800017A0: addiu       $s1, $s1, 0x110
    ctx->r17 = ADD32(ctx->r17, 0X110);
    // 0x800017A4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800017A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800017AC: beq         $s0, $v0, L_8000180C
    if (ctx->r16 == ctx->r2) {
        // 0x800017B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000180C;
    }
    // 0x800017B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800017B4: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x800017B8: addiu       $s2, $s2, 0x10C
    ctx->r18 = ADD32(ctx->r18, 0X10C);
    // 0x800017BC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800017C0: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x800017C4: beq         $t6, $zero, L_800017E4
    if (ctx->r14 == 0) {
        // 0x800017C8: lui         $t8, 0x800A
        ctx->r24 = S32(0X800A << 16);
            goto L_800017E4;
    }
    // 0x800017C8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800017CC: lw          $t8, 0x100($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X100);
    // 0x800017D0: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x800017D4: addiu       $a2, $a2, 0x468
    ctx->r6 = ADD32(ctx->r6, 0X468);
    // 0x800017D8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x800017DC: jal         0x800005E8
    // 0x800017E0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_800005E8(rdram, ctx);
        goto after_0;
    // 0x800017E0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
L_800017E4:
    // 0x800017E4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x800017E8: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x800017EC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800017F0: lw          $t6, 0x100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X100);
    // 0x800017F4: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x800017F8: sll         $t9, $s0, 11
    ctx->r25 = S32(ctx->r16 << 11);
    // 0x800017FC: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, 0X468);
    // 0x80001800: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x80001804: jal         0x80000698
    // 0x80001808: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    func_80000698(rdram, ctx);
        goto after_1;
    // 0x80001808: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    after_1:
L_8000180C:
    // 0x8000180C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001814: jr          $ra
    // 0x80001818: nop

    return;
    // 0x80001818: nop

    // 0x8000181C: jr          $ra
    // 0x80001820: nop

    return;
    // 0x80001820: nop

;}
RECOMP_FUNC void func_80001824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001824: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80001828: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000182C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80001830: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80001834: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80001838: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000183C: lw          $t6, 0x10($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X10);
    // 0x80001840: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80001844: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80001848: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8000184C: bne         $t7, $zero, L_8000185C
    if (ctx->r15 != 0) {
        // 0x80001850: or          $t1, $a2, $zero
        ctx->r9 = ctx->r6 | 0;
            goto L_8000185C;
    }
    // 0x80001850: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
    // 0x80001854: b           L_800019A0
    // 0x80001858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800019A0;
    // 0x80001858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000185C:
    // 0x8000185C: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80001860: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80001864: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80001868: sw          $t8, 0x10C($at)
    MEM_W(0X10C, ctx->r1) = ctx->r24;
    // 0x8000186C: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x80001870: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x80001874: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80001878: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8000187C: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80001880: mflo        $a1
    ctx->r5 = lo;
    // 0x80001884: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80001888: jal         0x800005E8
    // 0x8000188C: nop

    func_800005E8(rdram, ctx);
        goto after_0;
    // 0x8000188C: nop

    after_0:
    // 0x80001890: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80001894: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80001898: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x8000189C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800018A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800018A4: lui         $t8, 0x800F
    ctx->r24 = S32(0X800F << 16);
    // 0x800018A8: sw          $t9, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r25;
    // 0x800018AC: sw          $t9, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r25;
    // 0x800018B0: lw          $t8, 0x460($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X460);
    // 0x800018B4: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x800018B8: addiu       $s3, $s3, -0x18CC
    ctx->r19 = ADD32(ctx->r19, -0X18CC);
    // 0x800018BC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x800018C0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800018C4: lw          $t6, 0xC($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XC);
    // 0x800018C8: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x800018CC: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x800018D0: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x800018D4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800018D8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800018DC: beq         $t9, $zero, L_800018FC
    if (ctx->r25 == 0) {
        // 0x800018E0: sw          $t7, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r15;
            goto L_800018FC;
    }
    // 0x800018E0: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_800018E4:
    bm64u2_yield_process(rdram, ctx);
    // 0x800018E4: nop

    // 0x800018E8: nop

    // 0x800018EC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x800018F0: nop

    // 0x800018F4: bne         $t6, $zero, L_800018E4
    if (ctx->r14 != 0) {
        // 0x800018F8: nop
    
            goto L_800018E4;
    }
    // 0x800018F8: nop

L_800018FC:
    // 0x800018FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80001900: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80001904: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x80001908: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000190C: lw          $a0, 0x110($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X110);
    // 0x80001910: srl         $t8, $v0, 8
    ctx->r24 = S32(U32(ctx->r2) >> 8);
    // 0x80001914: beq         $t8, $a0, L_80001934
    if (ctx->r24 == ctx->r4) {
        // 0x80001918: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80001934;
    }
    // 0x80001918: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000191C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x80001920: jal         0x8000179C
    // 0x80001924: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    func_8000179C(rdram, ctx);
        goto after_1;
    // 0x80001924: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    after_1:
    // 0x80001928: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000192C: lw          $v1, 0x110($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X110);
    // 0x80001930: nop

L_80001934:
    // 0x80001934: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80001938: lui         $a3, 0x800F
    ctx->r7 = S32(0X800F << 16);
    // 0x8000193C: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x80001940: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80001944: lui         $t9, 0x800F
    ctx->r25 = S32(0X800F << 16);
    // 0x80001948: lw          $t9, 0x460($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X460);
    // 0x8000194C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80001950: addiu       $a2, $a3, 0x468
    ctx->r6 = ADD32(ctx->r7, 0X468);
    // 0x80001954: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x80001958: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8000195C: subu        $t6, $t8, $t9
    ctx->r14 = SUB32(ctx->r24, ctx->r25);
    // 0x80001960: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80001964: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80001968: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000196C: lw          $t9, 0x100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X100);
    // 0x80001970: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80001974: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x80001978: jal         0x800005E8
    // 0x8000197C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    func_800005E8(rdram, ctx);
        goto after_2;
    // 0x8000197C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    after_2:
    // 0x80001980: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80001984: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80001988: beq         $t6, $at, L_8000199C
    if (ctx->r14 == ctx->r1) {
        // 0x8000198C: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_8000199C;
    }
    // 0x8000198C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80001990: jal         0x8000179C
    // 0x80001994: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    func_8000179C(rdram, ctx);
        goto after_3;
    // 0x80001994: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    after_3:
    // 0x80001998: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8000199C:
    // 0x8000199C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
L_800019A0:
    // 0x800019A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800019A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800019A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800019AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800019B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800019B4: jr          $ra
    // 0x800019B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800019B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800019BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800019BC: jr          $ra
    // 0x800019C0: nop

    return;
    // 0x800019C0: nop

;}
RECOMP_FUNC void func_800019C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800019C4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800019C8: addiu       $v0, $v0, 0x104
    ctx->r2 = ADD32(ctx->r2, 0X104);
    // 0x800019CC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800019D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800019D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800019D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800019DC: beq         $a0, $t6, L_80001A08
    if (ctx->r4 == ctx->r14) {
        // 0x800019E0: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80001A08;
    }
    // 0x800019E0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800019E4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800019E8: addiu       $v1, $v1, 0x108
    ctx->r3 = ADD32(ctx->r3, 0X108);
    // 0x800019EC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800019F0: bgez        $a2, L_80001A00
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800019F4: sra         $t7, $a2, 11
        ctx->r15 = S32(SIGNED(ctx->r6) >> 11);
            goto L_80001A00;
    }
    // 0x800019F4: sra         $t7, $a2, 11
    ctx->r15 = S32(SIGNED(ctx->r6) >> 11);
    // 0x800019F8: addiu       $at, $a2, 0x7FF
    ctx->r1 = ADD32(ctx->r6, 0X7FF);
    // 0x800019FC: sra         $t7, $at, 11
    ctx->r15 = S32(SIGNED(ctx->r1) >> 11);
L_80001A00:
    // 0x80001A00: b           L_80001A30
    // 0x80001A04: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_80001A30;
    // 0x80001A04: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80001A08:
    // 0x80001A08: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80001A0C: addiu       $v1, $v1, 0x108
    ctx->r3 = ADD32(ctx->r3, 0X108);
    // 0x80001A10: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80001A14: bgez        $a2, L_80001A24
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80001A18: sra         $v0, $a2, 11
        ctx->r2 = S32(SIGNED(ctx->r6) >> 11);
            goto L_80001A24;
    }
    // 0x80001A18: sra         $v0, $a2, 11
    ctx->r2 = S32(SIGNED(ctx->r6) >> 11);
    // 0x80001A1C: addiu       $at, $a2, 0x7FF
    ctx->r1 = ADD32(ctx->r6, 0X7FF);
    // 0x80001A20: sra         $v0, $at, 11
    ctx->r2 = S32(SIGNED(ctx->r1) >> 11);
L_80001A24:
    // 0x80001A24: beq         $t8, $v0, L_80001A7C
    if (ctx->r24 == ctx->r2) {
        // 0x80001A28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80001A7C;
    }
    // 0x80001A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001A2C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80001A30:
    // 0x80001A30: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80001A34: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x80001A38: sltiu       $at, $v0, 0x801
    ctx->r1 = ctx->r2 < 0X801 ? 1 : 0;
    // 0x80001A3C: bne         $at, $zero, L_80001A54
    if (ctx->r1 != 0) {
        // 0x80001A40: addiu       $a0, $a0, 0xCB8
        ctx->r4 = ADD32(ctx->r4, 0XCB8);
            goto L_80001A54;
    }
    // 0x80001A40: addiu       $a0, $a0, 0xCB8
    ctx->r4 = ADD32(ctx->r4, 0XCB8);
    // 0x80001A44: addiu       $t9, $a2, 0x800
    ctx->r25 = ADD32(ctx->r6, 0X800);
    // 0x80001A48: sltu        $at, $v0, $t9
    ctx->r1 = ctx->r2 < ctx->r25 ? 1 : 0;
    // 0x80001A4C: bne         $at, $zero, L_80001A5C
    if (ctx->r1 != 0) {
        // 0x80001A50: subu        $a1, $v0, $a2
        ctx->r5 = SUB32(ctx->r2, ctx->r6);
            goto L_80001A5C;
    }
    // 0x80001A50: subu        $a1, $v0, $a2
    ctx->r5 = SUB32(ctx->r2, ctx->r6);
L_80001A54:
    // 0x80001A54: b           L_80001A64
    // 0x80001A58: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
        goto L_80001A64;
    // 0x80001A58: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
L_80001A5C:
    // 0x80001A5C: andi        $t0, $a1, 0x1
    ctx->r8 = ctx->r5 & 0X1;
    // 0x80001A60: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
L_80001A64:
    // 0x80001A64: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80001A68: lw          $t1, 0x4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X4);
    // 0x80001A6C: sll         $t3, $t2, 11
    ctx->r11 = S32(ctx->r10 << 11);
    // 0x80001A70: jal         0x80000698
    // 0x80001A74: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    func_80000698(rdram, ctx);
        goto after_0;
    // 0x80001A74: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    after_0:
    // 0x80001A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80001A7C:
    // 0x80001A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001A80: jr          $ra
    // 0x80001A84: nop

    return;
    // 0x80001A84: nop

;}
RECOMP_FUNC void func_80001A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001A88: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80001A8C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80001A90: lw          $t6, -0x18C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18C0);
    // 0x80001A94: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80001A98: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80001A9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80001AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80001AA4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80001AA8: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80001AAC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80001AB0: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80001AB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80001AB8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80001ABC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80001AC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80001AC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80001AC8: beq         $t6, $zero, L_80001AEC
    if (ctx->r14 == 0) {
        // 0x80001ACC: sw          $s2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r18;
            goto L_80001AEC;
    }
    // 0x80001ACC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
L_80001AD0:
    bm64u2_yield_process(rdram, ctx);
    // 0x80001AD0: nop

    // 0x80001AD4: nop

    // 0x80001AD8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80001ADC: lw          $t7, -0x18C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18C0);
    // 0x80001AE0: nop

    // 0x80001AE4: bne         $t7, $zero, L_80001AD0
    if (ctx->r15 != 0) {
        // 0x80001AE8: nop
    
            goto L_80001AD0;
    }
    // 0x80001AE8: nop

L_80001AEC:
    // 0x80001AEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80001AF0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80001AF4: sw          $t8, -0x18C0($at)
    MEM_W(-0X18C0, ctx->r1) = ctx->r24;
    // 0x80001AF8: lw          $t9, 0x10($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X10);
    // 0x80001AFC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80001B00: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80001B04: bne         $t0, $zero, L_80001B14
    if (ctx->r8 != 0) {
        // 0x80001B08: nop
    
            goto L_80001B14;
    }
    // 0x80001B08: nop

    // 0x80001B0C: b           L_80001BF0
    // 0x80001B10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80001BF0;
    // 0x80001B10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001B14:
    // 0x80001B14: multu       $s0, $s1
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80001B18: lw          $v0, 0x8($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X8);
    // 0x80001B1C: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80001B20: lui         $s6, 0x800F
    ctx->r22 = S32(0X800F << 16);
    // 0x80001B24: addiu       $s6, $s6, 0xCB8
    ctx->r22 = ADD32(ctx->r22, 0XCB8);
    // 0x80001B28: addiu       $s7, $zero, 0x800
    ctx->r23 = ADD32(0, 0X800);
    // 0x80001B2C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80001B30: srl         $t6, $v0, 11
    ctx->r14 = S32(U32(ctx->r2) >> 11);
    // 0x80001B34: mflo        $v1
    ctx->r3 = lo;
    // 0x80001B38: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x80001B3C: sltu        $at, $a0, $t1
    ctx->r1 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x80001B40: beq         $at, $zero, L_80001B54
    if (ctx->r1 == 0) {
        // 0x80001B44: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80001B54;
    }
    // 0x80001B44: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80001B48: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x80001B4C: subu        $t3, $t2, $v1
    ctx->r11 = SUB32(ctx->r10, ctx->r3);
    // 0x80001B50: addu        $a2, $t3, $a0
    ctx->r6 = ADD32(ctx->r11, ctx->r4);
L_80001B54:
    // 0x80001B54: addu        $v1, $v0, $a2
    ctx->r3 = ADD32(ctx->r2, ctx->r6);
    // 0x80001B58: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x80001B5C: srl         $t5, $t4, 11
    ctx->r13 = S32(U32(ctx->r12) >> 11);
    // 0x80001B60: subu        $s5, $t5, $t6
    ctx->r21 = SUB32(ctx->r13, ctx->r14);
    // 0x80001B64: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80001B68: beq         $s5, $zero, L_80001BE0
    if (ctx->r21 == 0) {
        // 0x80001B6C: or          $s2, $a2, $zero
        ctx->r18 = ctx->r6 | 0;
            goto L_80001BE0;
    }
    // 0x80001B6C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80001B70: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
L_80001B74:
    // 0x80001B74: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80001B78: jal         0x800019C4
    // 0x80001B7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800019C4(rdram, ctx);
        goto after_0;
    // 0x80001B7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80001B80: andi        $v0, $s1, 0x7FF
    ctx->r2 = ctx->r17 & 0X7FF;
    // 0x80001B84: addu        $t7, $v0, $s2
    ctx->r15 = ADD32(ctx->r2, ctx->r18);
    // 0x80001B88: sltiu       $at, $t7, 0x800
    ctx->r1 = ctx->r15 < 0X800 ? 1 : 0;
    // 0x80001B8C: beq         $at, $zero, L_80001B9C
    if (ctx->r1 == 0) {
        // 0x80001B90: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80001B9C;
    }
    // 0x80001B90: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80001B94: b           L_80001BA0
    // 0x80001B98: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_80001BA0;
    // 0x80001B98: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80001B9C:
    // 0x80001B9C: subu        $s0, $s7, $v0
    ctx->r16 = SUB32(ctx->r23, ctx->r2);
L_80001BA0:
    // 0x80001BA0: addu        $a1, $s6, $v0
    ctx->r5 = ADD32(ctx->r22, ctx->r2);
    // 0x80001BA4: jal         0x80076BF8
    // 0x80001BA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80001BA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x80001BAC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80001BB0: jal         0x80075580
    // 0x80001BB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80001BB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80001BB8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80001BBC: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x80001BC0: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x80001BC4: addu        $s4, $s4, $s0
    ctx->r20 = ADD32(ctx->r20, ctx->r16);
    // 0x80001BC8: bne         $at, $zero, L_80001B74
    if (ctx->r1 != 0) {
        // 0x80001BCC: subu        $s2, $s2, $s0
        ctx->r18 = SUB32(ctx->r18, ctx->r16);
            goto L_80001B74;
    }
    // 0x80001BCC: subu        $s2, $s2, $s0
    ctx->r18 = SUB32(ctx->r18, ctx->r16);
    // 0x80001BD0: lw          $t8, 0x8($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X8);
    // 0x80001BD4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80001BD8: nop

    // 0x80001BDC: addu        $v1, $t8, $a2
    ctx->r3 = ADD32(ctx->r24, ctx->r6);
L_80001BE0:
    // 0x80001BE0: sw          $v1, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r3;
    // 0x80001BE4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80001BE8: sw          $zero, -0x18C0($at)
    MEM_W(-0X18C0, ctx->r1) = 0;
    // 0x80001BEC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_80001BF0:
    // 0x80001BF0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80001BF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001BF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80001BFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80001C00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80001C04: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80001C08: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80001C0C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80001C10: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80001C14: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80001C18: jr          $ra
    // 0x80001C1C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80001C1C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80001C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001C28: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80001C2C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80001C30: nop

    // 0x80001C34: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x80001C38: bne         $at, $zero, L_80001C48
    if (ctx->r1 != 0) {
        // 0x80001C3C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80001C48;
    }
    // 0x80001C3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80001C40: b           L_80001C74
    // 0x80001C44: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_80001C74;
    // 0x80001C44: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80001C48:
    // 0x80001C48: jal         0x800019C4
    // 0x80001C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800019C4(rdram, ctx);
        goto after_0;
    // 0x80001C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80001C50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80001C54: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x80001C58: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80001C5C: nop

    // 0x80001C60: andi        $t7, $v0, 0x7FF
    ctx->r15 = ctx->r2 & 0X7FF;
    // 0x80001C64: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80001C68: lbu         $v1, 0xCB8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XCB8);
    // 0x80001C6C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80001C70: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
L_80001C74:
    // 0x80001C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001C7C: jr          $ra
    // 0x80001C80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80001C80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80001C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001C84: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80001C88: addiu       $v0, $v0, 0x104
    ctx->r2 = ADD32(ctx->r2, 0X104);
    // 0x80001C8C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80001C90: nop

    // 0x80001C94: bne         $a0, $t6, L_80001CA0
    if (ctx->r4 != ctx->r14) {
        // 0x80001C98: nop
    
            goto L_80001CA0;
    }
    // 0x80001C98: nop

    // 0x80001C9C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80001CA0:
    // 0x80001CA0: jr          $ra
    // 0x80001CA4: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    return;
    // 0x80001CA4: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80001CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001CA8: jr          $ra
    // 0x80001CAC: nop

    return;
    // 0x80001CAC: nop

;}
RECOMP_FUNC void func_80001CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001CB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80001CB4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80001CB8: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80001CBC: addiu       $s6, $s6, -0x18C4
    ctx->r22 = ADD32(ctx->r22, -0X18C4);
    // 0x80001CC0: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80001CC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80001CC8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80001CCC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80001CD0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80001CD4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80001CD8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80001CDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80001CE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80001CE4: beq         $t6, $zero, L_80001D04
    if (ctx->r14 == 0) {
        // 0x80001CE8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80001D04;
    }
    // 0x80001CE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_80001CEC:
    bm64u2_yield_process(rdram, ctx);
    // 0x80001CEC: nop

    // 0x80001CF0: nop

    // 0x80001CF4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80001CF8: nop

    // 0x80001CFC: bne         $t7, $zero, L_80001CEC
    if (ctx->r15 != 0) {
        // 0x80001D00: nop
    
            goto L_80001CEC;
    }
    // 0x80001D00: nop

L_80001D04:
    // 0x80001D04: lui         $fp, 0x800F
    ctx->r30 = S32(0X800F << 16);
    // 0x80001D08: addiu       $fp, $fp, 0x460
    ctx->r30 = ADD32(ctx->r30, 0X460);
    // 0x80001D0C: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x80001D10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80001D14: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x80001D18: beq         $t9, $zero, L_80001E2C
    if (ctx->r25 == 0) {
        // 0x80001D1C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80001E2C;
    }
    // 0x80001D1C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80001D20: lui         $s7, 0x800F
    ctx->r23 = S32(0X800F << 16);
    // 0x80001D24: addiu       $s7, $s7, 0x468
    ctx->r23 = ADD32(ctx->r23, 0X468);
    // 0x80001D28: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_80001D2C:
    // 0x80001D2C: jal         0x8000179C
    // 0x80001D30: srl         $s0, $s3, 8
    ctx->r16 = S32(U32(ctx->r19) >> 8);
    func_8000179C(rdram, ctx);
        goto after_0;
    // 0x80001D30: srl         $s0, $s3, 8
    ctx->r16 = S32(U32(ctx->r19) >> 8);
    after_0:
    // 0x80001D34: andi        $t6, $s3, 0xFF
    ctx->r14 = ctx->r19 & 0XFF;
    // 0x80001D38: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80001D3C: addu        $s5, $s7, $t7
    ctx->r21 = ADD32(ctx->r23, ctx->r15);
    // 0x80001D40: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80001D44: nop

    // 0x80001D48: bne         $s4, $t8, L_80001E18
    if (ctx->r20 != ctx->r24) {
        // 0x80001D4C: nop
    
            goto L_80001E18;
    }
    // 0x80001D4C: nop

    // 0x80001D50: bne         $s3, $zero, L_80001D70
    if (ctx->r19 != 0) {
        // 0x80001D54: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_80001D70;
    }
    // 0x80001D54: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80001D58: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x80001D5C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80001D60: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x80001D64: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80001D68: b           L_80001E34
    // 0x80001D6C: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
        goto L_80001E34;
    // 0x80001D6C: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
L_80001D70:
    // 0x80001D70: addiu       $s4, $s4, -0x18D0
    ctx->r20 = ADD32(ctx->r20, -0X18D0);
    // 0x80001D74: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80001D78: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80001D7C: beq         $t9, $zero, L_80001D9C
    if (ctx->r25 == 0) {
        // 0x80001D80: sw          $t8, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r24;
            goto L_80001D9C;
    }
    // 0x80001D80: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_80001D84:
    bm64u2_yield_process(rdram, ctx);
    // 0x80001D84: nop

    // 0x80001D88: nop

    // 0x80001D8C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80001D90: nop

    // 0x80001D94: bne         $t6, $zero, L_80001D84
    if (ctx->r14 != 0) {
        // 0x80001D98: nop
    
            goto L_80001D84;
    }
    // 0x80001D98: nop

L_80001D9C:
    // 0x80001D9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80001DA0: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x80001DA4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80001DA8: lw          $v0, 0x110($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X110);
    // 0x80001DAC: addiu       $s6, $s3, -0x1
    ctx->r22 = ADD32(ctx->r19, -0X1);
    // 0x80001DB0: srl         $v1, $s6, 8
    ctx->r3 = S32(U32(ctx->r22) >> 8);
    // 0x80001DB4: beq         $v1, $v0, L_80001DC4
    if (ctx->r3 == ctx->r2) {
        // 0x80001DB8: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_80001DC4;
    }
    // 0x80001DB8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80001DBC: jal         0x8000179C
    // 0x80001DC0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_8000179C(rdram, ctx);
        goto after_1;
    // 0x80001DC0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
L_80001DC4:
    // 0x80001DC4: andi        $t8, $s6, 0xFF
    ctx->r24 = ctx->r22 & 0XFF;
    // 0x80001DC8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80001DCC: addu        $v0, $s7, $t9
    ctx->r2 = ADD32(ctx->r23, ctx->r25);
    // 0x80001DD0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80001DD4: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80001DD8: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80001DDC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80001DE0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80001DE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80001DE8: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80001DEC: beq         $t6, $at, L_80001DFC
    if (ctx->r14 == ctx->r1) {
        // 0x80001DF0: sw          $t9, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r25;
            goto L_80001DFC;
    }
    // 0x80001DF0: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80001DF4: jal         0x8000179C
    // 0x80001DF8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    func_8000179C(rdram, ctx);
        goto after_2;
    // 0x80001DF8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    after_2:
L_80001DFC:
    // 0x80001DFC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80001E00: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80001E04: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x80001E08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80001E0C: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x80001E10: b           L_80001E34
    // 0x80001E14: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_80001E34;
    // 0x80001E14: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_80001E18:
    // 0x80001E18: lw          $t6, 0x4($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X4);
    // 0x80001E1C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80001E20: sltu        $at, $s3, $t6
    ctx->r1 = ctx->r19 < ctx->r14 ? 1 : 0;
    // 0x80001E24: bne         $at, $zero, L_80001D2C
    if (ctx->r1 != 0) {
        // 0x80001E28: nop
    
            goto L_80001D2C;
    }
    // 0x80001E28: nop

L_80001E2C:
    // 0x80001E2C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x80001E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001E34:
    // 0x80001E34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80001E38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001E3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80001E40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80001E44: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80001E48: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80001E4C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80001E50: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80001E54: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80001E58: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80001E5C: jr          $ra
    // 0x80001E60: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80001E60: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80001E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001E64: jr          $ra
    // 0x80001E68: nop

    return;
    // 0x80001E68: nop

;}
RECOMP_FUNC void func_80001E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001E6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80001E70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80001E74: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80001E78: addiu       $s3, $s3, -0x18C8
    ctx->r19 = ADD32(ctx->r19, -0X18C8);
    // 0x80001E7C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80001E80: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80001E84: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80001E88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80001E8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80001E90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80001E94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80001E98: beq         $t6, $zero, L_80001EB8
    if (ctx->r14 == 0) {
        // 0x80001E9C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_80001EB8;
    }
    // 0x80001E9C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
L_80001EA0:
    bm64u2_yield_process(rdram, ctx);
    // 0x80001EA0: nop

    // 0x80001EA4: nop

    // 0x80001EA8: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80001EAC: nop

    // 0x80001EB0: bne         $t7, $zero, L_80001EA0
    if (ctx->r15 != 0) {
        // 0x80001EB4: nop
    
            goto L_80001EA0;
    }
    // 0x80001EB4: nop

L_80001EB8:
    // 0x80001EB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80001EBC: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x80001EC0: jal         0x8000179C
    // 0x80001EC4: srl         $s0, $s4, 8
    ctx->r16 = S32(U32(ctx->r20) >> 8);
    func_8000179C(rdram, ctx);
        goto after_0;
    // 0x80001EC4: srl         $s0, $s4, 8
    ctx->r16 = S32(U32(ctx->r20) >> 8);
    after_0:
    // 0x80001EC8: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x80001ECC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x80001ED0: andi        $t9, $s4, 0xFF
    ctx->r25 = ctx->r20 & 0XFF;
    // 0x80001ED4: addiu       $v0, $v0, 0xCB8
    ctx->r2 = ADD32(ctx->r2, 0XCB8);
    // 0x80001ED8: addiu       $v1, $v1, 0xC68
    ctx->r3 = ADD32(ctx->r3, 0XC68);
    // 0x80001EDC: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
L_80001EE0:
    // 0x80001EE0: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x80001EE4: nop

    // 0x80001EE8: bne         $t6, $zero, L_80001EF8
    if (ctx->r14 != 0) {
        // 0x80001EEC: nop
    
            goto L_80001EF8;
    }
    // 0x80001EEC: nop

    // 0x80001EF0: b           L_80001F08
    // 0x80001EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80001F08;
    // 0x80001EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80001EF8:
    // 0x80001EF8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80001EFC: bne         $v1, $v0, L_80001EE0
    if (ctx->r3 != ctx->r2) {
        // 0x80001F00: nop
    
            goto L_80001EE0;
    }
    // 0x80001F00: nop

    // 0x80001F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001F08:
    // 0x80001F08: beq         $v0, $zero, L_80001F68
    if (ctx->r2 == 0) {
        // 0x80001F0C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80001F68;
    }
    // 0x80001F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80001F10: lui         $t8, 0x800F
    ctx->r24 = S32(0X800F << 16);
    // 0x80001F14: addiu       $t8, $t8, 0x468
    ctx->r24 = ADD32(ctx->r24, 0X468);
    // 0x80001F18: sll         $t7, $s4, 3
    ctx->r15 = S32(ctx->r20 << 3);
    // 0x80001F1C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80001F20: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80001F24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80001F28: bne         $t9, $at, L_80001F38
    if (ctx->r25 != ctx->r1) {
        // 0x80001F2C: lui         $t7, 0x800F
        ctx->r15 = S32(0X800F << 16);
            goto L_80001F38;
    }
    // 0x80001F2C: lui         $t7, 0x800F
    ctx->r15 = S32(0X800F << 16);
    // 0x80001F30: b           L_80001F70
    // 0x80001F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80001F70;
    // 0x80001F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001F38:
    // 0x80001F38: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x80001F3C: lw          $t7, 0x460($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X460);
    // 0x80001F40: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80001F44: nop

    // 0x80001F48: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80001F4C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80001F50: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80001F54: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80001F58: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x80001F5C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80001F60: nop

    // 0x80001F64: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_80001F68:
    // 0x80001F68: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80001F6C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80001F70:
    // 0x80001F70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80001F74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001F78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80001F7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80001F80: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80001F84: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80001F88: jr          $ra
    // 0x80001F8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80001F8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80001F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001F90: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80001F94: jr          $ra
    // 0x80001F98: nop

    return;
    // 0x80001F98: nop

;}
RECOMP_FUNC void func_80001F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001F9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80001FA0: sw          $zero, 0x10C($at)
    MEM_W(0X10C, ctx->r1) = 0;
    // 0x80001FA4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x80001FA8: sw          $zero, 0xC78($at)
    MEM_W(0XC78, ctx->r1) = 0;
    // 0x80001FAC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x80001FB0: sw          $zero, 0xC8C($at)
    MEM_W(0XC8C, ctx->r1) = 0;
    // 0x80001FB4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x80001FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001FBC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80001FC0: sw          $zero, 0xCA0($at)
    MEM_W(0XCA0, ctx->r1) = 0;
    // 0x80001FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001FC8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x80001FCC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x80001FD0: sw          $zero, 0xCB4($at)
    MEM_W(0XCB4, ctx->r1) = 0;
    // 0x80001FD4: addiu       $a0, $a0, 0x460
    ctx->r4 = ADD32(ctx->r4, 0X460);
    // 0x80001FD8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80001FDC: jal         0x80000698
    // 0x80001FE0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80000698(rdram, ctx);
        goto after_0;
    // 0x80001FE0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80001FE4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80001FE8: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x80001FEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80001FF0: addiu       $t6, $a2, 0x8
    ctx->r14 = ADD32(ctx->r6, 0X8);
    // 0x80001FF4: addiu       $v0, $v0, 0x460
    ctx->r2 = ADD32(ctx->r2, 0X460);
    // 0x80001FF8: sw          $t6, 0x100($at)
    MEM_W(0X100, ctx->r1) = ctx->r14;
    // 0x80001FFC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80002000: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80002004: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80002008: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000200C: sw          $zero, -0x18D0($at)
    MEM_W(-0X18D0, ctx->r1) = 0;
    // 0x80002010: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80002014: sw          $zero, -0x18CC($at)
    MEM_W(-0X18CC, ctx->r1) = 0;
    // 0x80002018: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000201C: sw          $zero, -0x18C8($at)
    MEM_W(-0X18C8, ctx->r1) = 0;
    // 0x80002020: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80002024: sw          $zero, -0x18C4($at)
    MEM_W(-0X18C4, ctx->r1) = 0;
    // 0x80002028: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000202C: sw          $zero, -0x18C0($at)
    MEM_W(-0X18C0, ctx->r1) = 0;
    // 0x80002030: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002034: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80002038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000203C: sw          $t9, 0x110($at)
    MEM_W(0X110, ctx->r1) = ctx->r25;
    // 0x80002040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002044: sw          $zero, 0x104($at)
    MEM_W(0X104, ctx->r1) = 0;
    // 0x80002048: jr          $ra
    // 0x8000204C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8000204C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80002050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002050: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80002054: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80002058: jal         0x80008FBC
    // 0x8000205C: nop

    func_80008FBC(rdram, ctx);
        goto after_0;
    // 0x8000205C: nop

    after_0:
    // 0x80002060: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002064: jal         0x80008FBC
    // 0x80002068: sw          $v0, 0x120($at)
    MEM_W(0X120, ctx->r1) = ctx->r2;
    func_80008FBC(rdram, ctx);
        goto after_1;
    // 0x80002068: sw          $v0, 0x120($at)
    MEM_W(0X120, ctx->r1) = ctx->r2;
    after_1:
    // 0x8000206C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002070: sw          $v0, 0x124($at)
    MEM_W(0X124, ctx->r1) = ctx->r2;
    // 0x80002074: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80002078: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000207C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80002080: lwc1        $f14, 0x4A88($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4A88);
    // 0x80002084: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80002088: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000208C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80002090: lui         $a3, 0x45FA
    ctx->r7 = S32(0X45FA << 16);
    // 0x80002094: jal         0x80008E30
    // 0x80002098: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80008E30(rdram, ctx);
        goto after_2;
    // 0x80002098: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8000209C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800020A0: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x800020A4: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x800020A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800020AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800020B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800020B4: jal         0x80008F90
    // 0x800020B8: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_80008F90(rdram, ctx);
        goto after_3;
    // 0x800020B8: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_3:
    // 0x800020BC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800020C0: lw          $a0, 0x124($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X124);
    // 0x800020C4: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x800020C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800020CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800020D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800020D4: jal         0x80008F90
    // 0x800020D8: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_80008F90(rdram, ctx);
        goto after_4;
    // 0x800020D8: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_4:
    // 0x800020DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800020E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800020E4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x800020E8: jal         0x80004E48
    // 0x800020EC: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_80004E48(rdram, ctx);
        goto after_5;
    // 0x800020EC: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_5:
    // 0x800020F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800020F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800020F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800020FC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80002100: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x80002104: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80002108: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x8000210C: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    // 0x80002110: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80002114: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80002118: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8000211C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80002120: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80002124: jal         0x80008E8C
    // 0x80002128: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_80008E8C(rdram, ctx);
        goto after_6;
    // 0x80002128: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x8000212C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80002130: addiu       $a1, $a1, 0x4A60
    ctx->r5 = ADD32(ctx->r5, 0X4A60);
    // 0x80002134: jal         0x8000486C
    // 0x80002138: addiu       $a0, $zero, 0x1800
    ctx->r4 = ADD32(0, 0X1800);
    func_8000486C(rdram, ctx);
        goto after_7;
    // 0x80002138: addiu       $a0, $zero, 0x1800
    ctx->r4 = ADD32(0, 0X1800);
    after_7:
    // 0x8000213C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80002140: addiu       $v1, $v1, 0x128
    ctx->r3 = ADD32(ctx->r3, 0X128);
    // 0x80002144: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80002148: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000214C: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x80002150: jal         0x80008E84
    // 0x80002154: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80008E84(rdram, ctx);
        goto after_8;
    // 0x80002154: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x80002158: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000215C: addiu       $a1, $a1, 0x4A74
    ctx->r5 = ADD32(ctx->r5, 0X4A74);
    // 0x80002160: jal         0x8000486C
    // 0x80002164: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
    func_8000486C(rdram, ctx);
        goto after_9;
    // 0x80002164: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
    after_9:
    // 0x80002168: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000216C: addiu       $v1, $v1, 0x12C
    ctx->r3 = ADD32(ctx->r3, 0X12C);
    // 0x80002170: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80002174: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80002178: lw          $a0, 0x124($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X124);
    // 0x8000217C: jal         0x80008E7C
    // 0x80002180: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80008E7C(rdram, ctx);
        goto after_10;
    // 0x80002180: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_10:
    // 0x80002184: jal         0x80030370
    // 0x80002188: nop

    func_80030370(rdram, ctx);
        goto after_11;
    // 0x80002188: nop

    after_11:
    // 0x8000218C: jal         0x8003E460
    // 0x80002190: nop

    func_8003E460(rdram, ctx);
        goto after_12;
    // 0x80002190: nop

    after_12:
    // 0x80002194: jal         0x8002AA60
    // 0x80002198: nop

    func_8002AA60(rdram, ctx);
        goto after_13;
    // 0x80002198: nop

    after_13:
    // 0x8000219C: jal         0x80050E60
    // 0x800021A0: nop

    func_80050E60(rdram, ctx);
        goto after_14;
    // 0x800021A0: nop

    after_14:
    // 0x800021A4: jal         0x8004BA00
    // 0x800021A8: nop

    func_8004BA00(rdram, ctx);
        goto after_15;
    // 0x800021A8: nop

    after_15:
    // 0x800021AC: jal         0x8005C550
    // 0x800021B0: nop

    func_8005C550(rdram, ctx);
        goto after_16;
    // 0x800021B0: nop

    after_16:
    // 0x800021B4: jal         0x80051CB0
    // 0x800021B8: nop

    func_80051CB0(rdram, ctx);
        goto after_17;
    // 0x800021B8: nop

    after_17:
    // 0x800021BC: jal         0x80029070
    // 0x800021C0: nop

    func_80029070(rdram, ctx);
        goto after_18;
    // 0x800021C0: nop

    after_18:
    // 0x800021C4: jal         0x8002A3D0
    // 0x800021C8: nop

    func_8002A3D0(rdram, ctx);
        goto after_19;
    // 0x800021C8: nop

    after_19:
    // 0x800021CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800021D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800021D4: jr          $ra
    // 0x800021D8: nop

    return;
    // 0x800021D8: nop

;}
RECOMP_FUNC void func_800021E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800021E0: jr          $ra
    // 0x800021E4: nop

    return;
    // 0x800021E4: nop

;}
RECOMP_FUNC void func_800021E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800021E8: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800021EC: lw          $t6, 0x134($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X134);
    // 0x800021F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800021F4: sll         $a1, $a0, 17
    ctx->r5 = S32(ctx->r4 << 17);
    // 0x800021F8: beq         $a1, $t6, L_80002210
    if (ctx->r5 == ctx->r14) {
        // 0x800021FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80002210;
    }
    // 0x800021FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002200: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002204: sw          $a1, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r5;
    // 0x80002208: jal         0x80001F9C
    // 0x8000220C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80001F9C(rdram, ctx);
        goto after_0;
    // 0x8000220C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_80002210:
    // 0x80002210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002218: jr          $ra
    // 0x8000221C: nop

    return;
    // 0x8000221C: nop

;}
