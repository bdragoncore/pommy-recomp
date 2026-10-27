#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80026398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026398: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002639C: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x800263A0: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x800263A4: nop

    // 0x800263A8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x800263AC: lw          $t7, 0x3C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X3C);
    // 0x800263B0: nop

    // 0x800263B4: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x800263B8: lw          $t8, 0x40($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X40);
    // 0x800263BC: nop

    // 0x800263C0: sb          $t8, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r24;
    // 0x800263C4: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x800263C8: nop

    // 0x800263CC: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    // 0x800263D0: lw          $t0, 0x60($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X60);
    // 0x800263D4: nop

    // 0x800263D8: sw          $t0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r8;
    // 0x800263DC: lw          $t1, 0x64($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X64);
    // 0x800263E0: nop

    // 0x800263E4: sw          $t1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r9;
    // 0x800263E8: lw          $t2, 0x68($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X68);
    // 0x800263EC: nop

    // 0x800263F0: sw          $t2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r10;
    // 0x800263F4: lw          $t3, 0x6C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X6C);
    // 0x800263F8: nop

    // 0x800263FC: sw          $t3, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r11;
    // 0x80026400: lw          $t4, 0x70($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X70);
    // 0x80026404: nop

    // 0x80026408: sw          $t4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r12;
    // 0x8002640C: lw          $t5, 0x4C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4C);
    // 0x80026410: nop

    // 0x80026414: sh          $t5, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r13;
    // 0x80026418: lw          $t6, 0x50($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X50);
    // 0x8002641C: nop

    // 0x80026420: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x80026424: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x80026428: nop

    // 0x8002642C: sw          $t7, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r15;
    // 0x80026430: lw          $t8, 0x48($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X48);
    // 0x80026434: nop

    // 0x80026438: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
    // 0x8002643C: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x80026440: jr          $ra
    // 0x80026444: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    return;
    // 0x80026444: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80026448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026448: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8002644C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80026450: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x80026454: sw          $t6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r14;
    // 0x80026458: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8002645C: nop

    // 0x80026460: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x80026464: lbu         $t8, 0x10($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X10);
    // 0x80026468: nop

    // 0x8002646C: sw          $t8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r24;
    // 0x80026470: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80026474: nop

    // 0x80026478: sw          $t9, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r25;
    // 0x8002647C: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x80026480: nop

    // 0x80026484: sw          $t0, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r8;
    // 0x80026488: lw          $t1, 0x1C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X1C);
    // 0x8002648C: nop

    // 0x80026490: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x80026494: lw          $t2, 0x20($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X20);
    // 0x80026498: nop

    // 0x8002649C: sw          $t2, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r10;
    // 0x800264A0: lw          $t3, 0x24($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X24);
    // 0x800264A4: nop

    // 0x800264A8: sw          $t3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r11;
    // 0x800264AC: lw          $t4, 0x28($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X28);
    // 0x800264B0: nop

    // 0x800264B4: sw          $t4, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r12;
    // 0x800264B8: lhu         $t5, 0x2C($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X2C);
    // 0x800264BC: nop

    // 0x800264C0: sw          $t5, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r13;
    // 0x800264C4: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x800264C8: nop

    // 0x800264CC: sw          $t6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r14;
    // 0x800264D0: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x800264D4: nop

    // 0x800264D8: sw          $t7, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r15;
    // 0x800264DC: lw          $t8, 0x38($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X38);
    // 0x800264E0: nop

    // 0x800264E4: sw          $t8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r24;
    // 0x800264E8: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x800264EC: jr          $ra
    // 0x800264F0: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    return;
    // 0x800264F0: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800264F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800264F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800264F8: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x800264FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026504: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80026508: sw          $a0, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r4;
    // 0x8002650C: sw          $a1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r5;
    // 0x80026510: sw          $t6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r14;
    // 0x80026514: sw          $a2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r6;
    // 0x80026518: jal         0x80026328
    // 0x8002651C: sw          $a3, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r7;
    func_80026328(rdram, ctx);
        goto after_0;
    // 0x8002651C: sw          $a3, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r7;
    after_0:
    // 0x80026520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026528: jr          $ra
    // 0x8002652C: nop

    return;
    // 0x8002652C: nop

;}
RECOMP_FUNC void func_80026530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026530: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026534: jr          $ra
    // 0x80026538: sw          $a0, -0x58BC($at)
    MEM_W(-0X58BC, ctx->r1) = ctx->r4;
    return;
    // 0x80026538: sw          $a0, -0x58BC($at)
    MEM_W(-0X58BC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80026540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026540: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80026544: addiu       $t6, $t6, -0x44B0
    ctx->r14 = ADD32(ctx->r14, -0X44B0);
    // 0x80026548: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x8002654C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80026550: jr          $ra
    // 0x80026554: addiu       $v0, $v0, 0x6AC0
    ctx->r2 = ADD32(ctx->r2, 0X6AC0);
    return;
    // 0x80026554: addiu       $v0, $v0, 0x6AC0
    ctx->r2 = ADD32(ctx->r2, 0X6AC0);
;}
RECOMP_FUNC void func_80026558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026558: jr          $ra
    // 0x8002655C: nop

    return;
    // 0x8002655C: nop

;}
RECOMP_FUNC void func_80026578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026578: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8002657C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80026580: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80026584: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80026588: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002658C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80026590: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80026594: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80026598: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002659C: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800265A0: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800265A4: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x800265A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800265AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800265B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800265B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800265B8: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x800265BC: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x800265C0: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x800265C4: addiu       $fp, $fp, -0x449C
    ctx->r30 = ADD32(ctx->r30, -0X449C);
    // 0x800265C8: addiu       $s6, $s6, -0x4480
    ctx->r22 = ADD32(ctx->r22, -0X4480);
    // 0x800265CC: addiu       $s5, $s5, -0x44A4
    ctx->r21 = ADD32(ctx->r21, -0X44A4);
    // 0x800265D0: addiu       $s4, $s4, -0x44A8
    ctx->r20 = ADD32(ctx->r20, -0X44A8);
    // 0x800265D4: addiu       $s2, $s2, -0x44B0
    ctx->r18 = ADD32(ctx->r18, -0X44B0);
    // 0x800265D8: addiu       $s7, $sp, 0x68
    ctx->r23 = ADD32(ctx->r29, 0X68);
L_800265DC:
    // 0x800265DC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800265E0: addiu       $a0, $a0, -0x4570
    ctx->r4 = ADD32(ctx->r4, -0X4570);
    // 0x800265E4: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x800265E8: jal         0x80075330
    // 0x800265EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800265EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800265F0: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x800265F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800265F8: beq         $v1, $at, L_8002661C
    if (ctx->r3 == ctx->r1) {
        // 0x800265FC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8002661C;
    }
    // 0x800265FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80026600: beq         $v1, $at, L_800268F8
    if (ctx->r3 == ctx->r1) {
        // 0x80026604: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_800268F8;
    }
    // 0x80026604: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80026608: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8002660C: beq         $v1, $at, L_80026910
    if (ctx->r3 == ctx->r1) {
        // 0x80026610: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80026910;
    }
    // 0x80026610: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80026614: b           L_80026918
    // 0x80026618: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
        goto L_80026918;
    // 0x80026618: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
L_8002661C:
    // 0x8002661C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80026620: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80026624: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x80026628: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002662C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80026630: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80026634: mfhi        $t7
    ctx->r15 = hi;
    // 0x80026638: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002663C: addu        $s3, $s3, $t8
    ctx->r19 = ADD32(ctx->r19, ctx->r24);
    // 0x80026640: lw          $s3, -0x4730($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X4730);
    // 0x80026644: beq         $s0, $zero, L_80026660
    if (ctx->r16 == 0) {
        // 0x80026648: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80026660;
    }
    // 0x80026648: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8002664C:
    // 0x8002664C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80026650: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80026654: bne         $s0, $zero, L_8002664C
    if (ctx->r16 != 0) {
        // 0x80026658: nop
    
            goto L_8002664C;
    }
    // 0x80026658: nop

    // 0x8002665C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80026660:
    // 0x80026660: jal         0x80026530
    // 0x80026664: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80026530(rdram, ctx);
        goto after_1;
    // 0x80026664: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x80026668: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8002666C: nop

    // 0x80026670: beq         $t9, $zero, L_80026698
    if (ctx->r25 == 0) {
        // 0x80026674: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80026698;
    }
    // 0x80026674: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80026678:
    // 0x80026678: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8002667C: jal         0x80075330
    // 0x80026680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80026680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80026684: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x80026688: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002668C: sltu        $at, $s1, $t0
    ctx->r1 = ctx->r17 < ctx->r8 ? 1 : 0;
    // 0x80026690: bne         $at, $zero, L_80026678
    if (ctx->r1 != 0) {
        // 0x80026694: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80026678;
    }
    // 0x80026694: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80026698:
    // 0x80026698: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x8002669C: nop

    // 0x800266A0: beq         $s0, $zero, L_80026718
    if (ctx->r16 == 0) {
        // 0x800266A4: nop
    
            goto L_80026718;
    }
    // 0x800266A4: nop

L_800266A8:
    // 0x800266A8: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x800266AC: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x800266B0: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x800266B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800266B8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800266BC: sltu        $at, $t3, $t4
    ctx->r1 = ctx->r11 < ctx->r12 ? 1 : 0;
    // 0x800266C0: beq         $at, $zero, L_80026710
    if (ctx->r1 == 0) {
        // 0x800266C4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80026710;
    }
    // 0x800266C4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800266C8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x800266CC: nop

    // 0x800266D0: bne         $s0, $t5, L_800266DC
    if (ctx->r16 != ctx->r13) {
        // 0x800266D4: nop
    
            goto L_800266DC;
    }
    // 0x800266D4: nop

    // 0x800266D8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_800266DC:
    // 0x800266DC: jal         0x8007DE20
    // 0x800266E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_3;
    // 0x800266E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800266E4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x800266E8: nop

    // 0x800266EC: beq         $a1, $zero, L_80026704
    if (ctx->r5 == 0) {
        // 0x800266F0: nop
    
            goto L_80026704;
    }
    // 0x800266F0: nop

    // 0x800266F4: jal         0x8007DDFC
    // 0x800266F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_4;
    // 0x800266F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800266FC: b           L_80026710
    // 0x80026700: nop

        goto L_80026710;
    // 0x80026700: nop

L_80026704:
    // 0x80026704: sw          $s0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r16;
    // 0x80026708: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8002670C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80026710:
    // 0x80026710: bne         $s1, $zero, L_800266A8
    if (ctx->r17 != 0) {
        // 0x80026714: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800266A8;
    }
    // 0x80026714: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80026718:
    // 0x80026718: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8002671C: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x80026720: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80026724: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x80026728: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002672C: jal         0x8007DE50
    // 0x80026730: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x80026730: nop

    after_5:
    // 0x80026734: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x80026738: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8002673C: beq         $t8, $zero, L_80026758
    if (ctx->r24 == 0) {
        // 0x80026740: nop
    
            goto L_80026758;
    }
    // 0x80026740: nop

    // 0x80026744: lh          $a1, 0x4($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X4);
    // 0x80026748: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8002674C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80026750: jal         0x8007DED0
    // 0x80026754: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_6;
    // 0x80026754: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_6:
L_80026758:
    // 0x80026758: jal         0x8007DF60
    // 0x8002675C: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_7;
    // 0x8002675C: nop

    after_7:
    // 0x80026760: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80026764: lw          $t0, -0x448C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X448C);
    // 0x80026768: srl         $t1, $v0, 2
    ctx->r9 = S32(U32(ctx->r2) >> 2);
    // 0x8002676C: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80026770: addiu       $t3, $t2, 0x50
    ctx->r11 = ADD32(ctx->r10, 0X50);
    // 0x80026774: andi        $t4, $t3, 0xFFF0
    ctx->r12 = ctx->r11 & 0XFFF0;
    // 0x80026778: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x8002677C: sh          $t5, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r13;
    // 0x80026780: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80026784: lw          $v1, -0x4494($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4494);
    // 0x80026788: lh          $a3, 0x4($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X4);
    // 0x8002678C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80026790: sltu        $at, $a3, $v1
    ctx->r1 = ctx->r7 < ctx->r3 ? 1 : 0;
    // 0x80026794: beq         $at, $zero, L_800267A8
    if (ctx->r1 == 0) {
        // 0x80026798: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_800267A8;
    }
    // 0x80026798: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002679C: sh          $v1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r3;
    // 0x800267A0: lh          $a3, 0x4($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X4);
    // 0x800267A4: nop

L_800267A8:
    // 0x800267A8: lw          $t6, -0x4498($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4498);
    // 0x800267AC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x800267B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800267B4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800267B8: lw          $a0, -0x4738($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4738);
    // 0x800267BC: jal         0x8007E270
    // 0x800267C0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    alAudioFrame(rdram, ctx);
        goto after_8;
    // 0x800267C0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x800267C4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x800267C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800267CC: bne         $t8, $zero, L_800267DC
    if (ctx->r24 != 0) {
        // 0x800267D0: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_800267DC;
    }
    // 0x800267D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800267D4: b           L_800268BC
    // 0x800267D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800268BC;
    // 0x800267D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800267DC:
    // 0x800267DC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800267E0: addiu       $t9, $t9, -0x4538
    ctx->r25 = ADD32(ctx->r25, -0X4538);
    // 0x800267E4: addiu       $t0, $s3, 0x50
    ctx->r8 = ADD32(ctx->r19, 0X50);
    // 0x800267E8: addiu       $v0, $v0, -0x4498
    ctx->r2 = ADD32(ctx->r2, -0X4498);
    // 0x800267EC: sw          $t9, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r25;
    // 0x800267F0: sw          $t0, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = ctx->r8;
    // 0x800267F4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800267F8: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x800267FC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80026800: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80026804: lw          $t3, -0x4738($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4738);
    // 0x80026808: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002680C: sw          $t3, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->r11;
    // 0x80026810: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80026814: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80026818: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002681C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80026820: lw          $t6, -0x4738($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4738);
    // 0x80026824: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80026828: subu        $t7, $v1, $t6
    ctx->r15 = SUB32(ctx->r3, ctx->r14);
    // 0x8002682C: addiu       $a3, $a3, -0x5500
    ctx->r7 = ADD32(ctx->r7, -0X5500);
    // 0x80026830: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80026834: addiu       $t1, $t1, -0x5430
    ctx->r9 = ADD32(ctx->r9, -0X5430);
    // 0x80026838: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8002683C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80026840: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80026844: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80026848: subu        $t2, $t1, $a3
    ctx->r10 = SUB32(ctx->r9, ctx->r7);
    // 0x8002684C: addiu       $t3, $t3, -0x27E0
    ctx->r11 = ADD32(ctx->r11, -0X27E0);
    // 0x80026850: addiu       $t4, $t4, 0x7650
    ctx->r12 = ADD32(ctx->r12, 0X7650);
    // 0x80026854: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x80026858: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002685C: sw          $t9, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r25;
    // 0x80026860: sw          $t0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r8;
    // 0x80026864: sw          $a3, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r7;
    // 0x80026868: sw          $t2, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r10;
    // 0x8002686C: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    // 0x80026870: sw          $t3, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r11;
    // 0x80026874: sw          $t4, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r12;
    // 0x80026878: sw          $t5, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r13;
    // 0x8002687C: sw          $zero, 0x28($s3)
    MEM_W(0X28, ctx->r19) = 0;
    // 0x80026880: sw          $zero, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = 0;
    // 0x80026884: sw          $zero, 0x30($s3)
    MEM_W(0X30, ctx->r19) = 0;
    // 0x80026888: sw          $zero, 0x34($s3)
    MEM_W(0X34, ctx->r19) = 0;
    // 0x8002688C: sw          $zero, 0x40($s3)
    MEM_W(0X40, ctx->r19) = 0;
    // 0x80026890: sw          $zero, 0x44($s3)
    MEM_W(0X44, ctx->r19) = 0;
    // 0x80026894: lw          $a0, -0x4740($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4740);
    // 0x80026898: addiu       $a1, $s3, 0x8
    ctx->r5 = ADD32(ctx->r19, 0X8);
    // 0x8002689C: jal         0x80075F70
    // 0x800268A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x800268A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800268A4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800268A8: lw          $t6, -0x4498($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4498);
    // 0x800268AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800268B0: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x800268B4: sw          $t7, -0x4498($at)
    MEM_W(-0X4498, ctx->r1) = ctx->r15;
    // 0x800268B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800268BC:
    // 0x800268BC: beq         $v0, $zero, L_80026914
    if (ctx->r2 == 0) {
        // 0x800268C0: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_80026914;
    }
    // 0x800268C0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800268C4: addiu       $a0, $a0, -0x4538
    ctx->r4 = ADD32(ctx->r4, -0X4538);
    // 0x800268C8: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x800268CC: jal         0x80075330
    // 0x800268D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x800268D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x800268D4: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x800268D8: nop

    // 0x800268DC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800268E0: jal         0x80024C68
    // 0x800268E4: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    func_80024C68(rdram, ctx);
        goto after_11;
    // 0x800268E4: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    after_11:
    // 0x800268E8: jal         0x8002226C
    // 0x800268EC: nop

    func_8002226C(rdram, ctx);
        goto after_12;
    // 0x800268EC: nop

    after_12:
    // 0x800268F0: b           L_80026918
    // 0x800268F4: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
        goto L_80026918;
    // 0x800268F4: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
L_800268F8:
    // 0x800268F8: jal         0x800248F8
    // 0x800268FC: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    func_800248F8(rdram, ctx);
        goto after_13;
    // 0x800268FC: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    after_13:
    // 0x80026900: jal         0x8001FFB4
    // 0x80026904: nop

    func_8001FFB4(rdram, ctx);
        goto after_14;
    // 0x80026904: nop

    after_14:
    // 0x80026908: b           L_80026918
    // 0x8002690C: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
        goto L_80026918;
    // 0x8002690C: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
L_80026910:
    // 0x80026910: sw          $t1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r9;
L_80026914:
    // 0x80026914: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
L_80026918:
    // 0x80026918: nop

    // 0x8002691C: beq         $t2, $zero, L_800265DC
    if (ctx->r10 == 0) {
        // 0x80026920: nop
    
            goto L_800265DC;
    }
    // 0x80026920: nop

    // 0x80026924: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026928: jal         0x8007DDC4
    // 0x8002692C: addiu       $a0, $a0, -0x4500
    ctx->r4 = ADD32(ctx->r4, -0X4500);
    alClose(rdram, ctx);
        goto after_15;
    // 0x8002692C: addiu       $a0, $a0, -0x4500
    ctx->r4 = ADD32(ctx->r4, -0X4500);
    after_15:
    // 0x80026930: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80026934: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026938: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002693C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80026940: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80026944: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80026948: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002694C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80026950: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80026954: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80026958: jr          $ra
    // 0x8002695C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8002695C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80026960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026964: beq         $a0, $zero, L_80026980
    if (ctx->r4 == 0) {
        // 0x80026968: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80026980;
    }
    // 0x80026968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002696C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026970: jal         0x80000CF8
    // 0x80026974: addiu       $a0, $a0, -0x4468
    ctx->r4 = ADD32(ctx->r4, -0X4468);
    func_80000CF8(rdram, ctx);
        goto after_0;
    // 0x80026974: addiu       $a0, $a0, -0x4468
    ctx->r4 = ADD32(ctx->r4, -0X4468);
    after_0:
    // 0x80026978: b           L_800269C4
    // 0x8002697C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800269C4;
    // 0x8002697C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80026980:
    // 0x80026980: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80026984: addiu       $s0, $s0, -0x4570
    ctx->r16 = ADD32(ctx->r16, -0X4570);
    // 0x80026988: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002698C: addiu       $a1, $a1, -0x4558
    ctx->r5 = ADD32(ctx->r5, -0X4558);
    // 0x80026990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80026994: jal         0x80075300
    // 0x80026998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80026998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8002699C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800269A0: addiu       $t6, $t6, -0x21D8
    ctx->r14 = ADD32(ctx->r14, -0X21D8);
    // 0x800269A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800269A8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800269AC: sw          $t6, -0x4740($at)
    MEM_W(-0X4740, ctx->r1) = ctx->r14;
    // 0x800269B0: addiu       $a0, $a0, -0x4468
    ctx->r4 = ADD32(ctx->r4, -0X4468);
    // 0x800269B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800269B8: jal         0x80000960
    // 0x800269BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80000960(rdram, ctx);
        goto after_2;
    // 0x800269BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800269C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800269C4:
    // 0x800269C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800269C8: jr          $ra
    // 0x800269CC: nop

    return;
    // 0x800269CC: nop

;}
RECOMP_FUNC void func_800269D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800269D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800269D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800269D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800269DC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800269E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800269E4: jal         0x80077200
    // 0x800269E8: addiu       $a0, $a0, -0x4720
    ctx->r4 = ADD32(ctx->r4, -0X4720);
    osDestroyThread_recomp(rdram, ctx);
        goto after_0;
    // 0x800269E8: addiu       $a0, $a0, -0x4720
    ctx->r4 = ADD32(ctx->r4, -0X4720);
    after_0:
    // 0x800269EC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800269F0: jal         0x8007DDC4
    // 0x800269F4: addiu       $a0, $a0, -0x4500
    ctx->r4 = ADD32(ctx->r4, -0X4500);
    alClose(rdram, ctx);
        goto after_1;
    // 0x800269F4: addiu       $a0, $a0, -0x4500
    ctx->r4 = ADD32(ctx->r4, -0X4500);
    after_1:
    // 0x800269F8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800269FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80026A00: lw          $t7, 0x7C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X7C);
    // 0x80026A04: jal         0x80026960
    // 0x80026A08: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    func_80026960(rdram, ctx);
        goto after_2;
    // 0x80026A08: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    after_2:
    // 0x80026A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80026A10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026A14: jr          $ra
    // 0x80026A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80026A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80026A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026A1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80026A20: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80026A24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80026A28: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026A2C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80026A30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80026A34: addiu       $a1, $a1, -0x4520
    ctx->r5 = ADD32(ctx->r5, -0X4520);
    // 0x80026A38: addiu       $a0, $a0, -0x4538
    ctx->r4 = ADD32(ctx->r4, -0X4538);
    // 0x80026A3C: jal         0x80075300
    // 0x80026A40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80026A40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80026A44: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026A48: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80026A4C: addiu       $a1, $a1, 0x21B0
    ctx->r5 = ADD32(ctx->r5, 0X21B0);
    // 0x80026A50: addiu       $a0, $a0, -0x4480
    ctx->r4 = ADD32(ctx->r4, -0X4480);
    // 0x80026A54: jal         0x80075300
    // 0x80026A58: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80026A58: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
    // 0x80026A5C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80026A60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80026A64: lw          $t7, 0x7C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X7C);
    // 0x80026A68: jal         0x80026960
    // 0x80026A6C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    func_80026960(rdram, ctx);
        goto after_2;
    // 0x80026A6C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    after_2:
    // 0x80026A70: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80026A74: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80026A78: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x80026A7C: lw          $a1, 0x78($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X78);
    // 0x80026A80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80026A84: lw          $t6, 0x74($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X74);
    // 0x80026A88: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026A8C: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x80026A90: addiu       $a2, $a2, 0x6578
    ctx->r6 = ADD32(ctx->r6, 0X6578);
    // 0x80026A94: addiu       $a0, $a0, -0x4720
    ctx->r4 = ADD32(ctx->r4, -0X4720);
    // 0x80026A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80026A9C: jal         0x80075C30
    // 0x80026AA0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    osCreateThread_recomp(rdram, ctx);
        goto after_3;
    // 0x80026AA0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_3:
    // 0x80026AA4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026AA8: jal         0x80075D80
    // 0x80026AAC: addiu       $a0, $a0, -0x4720
    ctx->r4 = ADD32(ctx->r4, -0X4720);
    osStartThread_recomp(rdram, ctx);
        goto after_4;
    // 0x80026AAC: addiu       $a0, $a0, -0x4720
    ctx->r4 = ADD32(ctx->r4, -0X4720);
    after_4:
    // 0x80026AB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80026AB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80026AB8: jr          $ra
    // 0x80026ABC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80026ABC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80026AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026AC0: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80026AC4: addiu       $t2, $t2, -0x44B0
    ctx->r10 = ADD32(ctx->r10, -0X44B0);
    // 0x80026AC8: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x80026ACC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80026AD0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80026AD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80026AD8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80026ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80026AE0: beq         $t1, $zero, L_80026B44
    if (ctx->r9 == 0) {
        // 0x80026AE4: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_80026B44;
    }
    // 0x80026AE4: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x80026AE8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026AEC: lw          $a0, -0x44A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X44A0);
    // 0x80026AF0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
L_80026AF4:
    // 0x80026AF4: lw          $v0, 0x8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X8);
    // 0x80026AF8: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x80026AFC: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x80026B00: bne         $at, $zero, L_80026B44
    if (ctx->r1 != 0) {
        // 0x80026B04: addu        $v1, $v0, $a0
        ctx->r3 = ADD32(ctx->r2, ctx->r4);
            goto L_80026B44;
    }
    // 0x80026B04: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x80026B08: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80026B0C: bne         $at, $zero, L_80026B34
    if (ctx->r1 != 0) {
        // 0x80026B10: or          $a2, $t0, $zero
        ctx->r6 = ctx->r8 | 0;
            goto L_80026B34;
    }
    // 0x80026B10: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80026B14: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x80026B18: lw          $t7, -0x44A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X44A8);
    // 0x80026B1C: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80026B20: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x80026B24: jal         0x8007DE50
    // 0x80026B28: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80026B28: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
    after_0:
    // 0x80026B2C: b           L_80026C7C
    // 0x80026B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80026C7C;
    // 0x80026B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80026B34:
    // 0x80026B34: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80026B38: nop

    // 0x80026B3C: bne         $t0, $zero, L_80026AF4
    if (ctx->r8 != 0) {
        // 0x80026B40: nop
    
            goto L_80026AF4;
    }
    // 0x80026B40: nop

L_80026B44:
    // 0x80026B44: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x80026B48: nop

    // 0x80026B4C: bne         $t0, $zero, L_80026B64
    if (ctx->r8 != 0) {
        // 0x80026B50: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_80026B64;
    }
    // 0x80026B50: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80026B54: jal         0x8007DE50
    // 0x80026B58: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80026B58: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_1:
    // 0x80026B5C: b           L_80026C7C
    // 0x80026B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80026C7C;
    // 0x80026B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80026B64:
    // 0x80026B64: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80026B68: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80026B6C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x80026B70: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80026B74: jal         0x8007DE20
    // 0x80026B78: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    alUnlink(rdram, ctx);
        goto after_2;
    // 0x80026B78: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    after_2:
    // 0x80026B7C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80026B80: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80026B84: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80026B88: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80026B8C: beq         $a2, $zero, L_80026BB8
    if (ctx->r6 == 0) {
        // 0x80026B90: addiu       $t2, $t2, -0x44B0
        ctx->r10 = ADD32(ctx->r10, -0X44B0);
            goto L_80026BB8;
    }
    // 0x80026B90: addiu       $t2, $t2, -0x44B0
    ctx->r10 = ADD32(ctx->r10, -0X44B0);
    // 0x80026B94: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80026B98: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80026B9C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x80026BA0: jal         0x8007DDFC
    // 0x80026BA4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    alLink(rdram, ctx);
        goto after_3;
    // 0x80026BA4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_3:
    // 0x80026BA8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80026BAC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80026BB0: b           L_80026BEC
    // 0x80026BB4: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
        goto L_80026BEC;
    // 0x80026BB4: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
L_80026BB8:
    // 0x80026BB8: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x80026BBC: nop

    // 0x80026BC0: beq         $t1, $zero, L_80026BDC
    if (ctx->r9 == 0) {
        // 0x80026BC4: nop
    
            goto L_80026BDC;
    }
    // 0x80026BC4: nop

    // 0x80026BC8: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x80026BCC: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x80026BD0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80026BD4: b           L_80026BE8
    // 0x80026BD8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
        goto L_80026BE8;
    // 0x80026BD8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
L_80026BDC:
    // 0x80026BDC: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x80026BE0: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80026BE4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
L_80026BE8:
    // 0x80026BE8: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
L_80026BEC:
    // 0x80026BEC: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80026BF0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80026BF4: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80026BF8: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    // 0x80026BFC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80026C00: lw          $t4, -0x44A8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X44A8);
    // 0x80026C04: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80026C08: addiu       $t2, $t2, -0x44A4
    ctx->r10 = ADD32(ctx->r10, -0X44A4);
    // 0x80026C0C: sw          $t4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r12;
    // 0x80026C10: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80026C14: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80026C18: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x80026C1C: lw          $t7, -0x44A0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X44A0);
    // 0x80026C20: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80026C24: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80026C28: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x80026C2C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80026C30: addiu       $t8, $t8, -0x4480
    ctx->r24 = ADD32(ctx->r24, -0X4480);
    // 0x80026C34: addiu       $t6, $t6, 0x1F70
    ctx->r14 = ADD32(ctx->r14, 0X1F70);
    // 0x80026C38: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x80026C3C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80026C40: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80026C44: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80026C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80026C4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80026C50: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80026C54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80026C58: jal         0x80075470
    // 0x80026C5C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osPiStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x80026C5C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
    // 0x80026C60: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80026C64: jal         0x8007DE50
    // 0x80026C68: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x80026C68: nop

    after_5:
    // 0x80026C6C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80026C70: nop

    // 0x80026C74: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80026C78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80026C7C:
    // 0x80026C7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80026C80: jr          $ra
    // 0x80026C84: nop

    return;
    // 0x80026C84: nop

;}
RECOMP_FUNC void func_80026C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026C88: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80026C8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80026C90: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80026C94: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80026C98: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80026C9C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80026CA0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80026CA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80026CA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80026CAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80026CB0: lw          $a0, 0x34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X34);
    // 0x80026CB4: jal         0x8007DC40
    // 0x80026CB8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_0;
    // 0x80026CB8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    after_0:
    // 0x80026CBC: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x80026CC0: lw          $t6, 0x58($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X58);
    // 0x80026CC4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80026CC8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80026CCC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026CD0: lw          $t7, 0x5C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X5C);
    // 0x80026CD4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026CD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80026CDC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80026CE0: addiu       $a0, $a0, -0x448C
    ctx->r4 = ADD32(ctx->r4, -0X448C);
    // 0x80026CE4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80026CE8: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80026CEC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80026CF0: addiu       $s6, $s6, -0x4490
    ctx->r22 = ADD32(ctx->r22, -0X4490);
    // 0x80026CF4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80026CF8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80026CFC: addiu       $t7, $t7, -0xD40
    ctx->r15 = ADD32(ctx->r15, -0XD40);
    // 0x80026D00: div.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80026D04: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80026D08: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80026D0C: nop

    // 0x80026D10: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80026D14: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80026D18: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80026D1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80026D20: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80026D24: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x80026D28: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80026D2C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80026D30: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80026D34: bgez        $v1, L_80026D48
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80026D38: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80026D48;
    }
    // 0x80026D38: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80026D3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80026D40: nop

    // 0x80026D44: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_80026D48:
    // 0x80026D48: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80026D4C: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x80026D50: bc1f        L_80026D60
    if (!c1cs) {
        // 0x80026D54: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_80026D60;
    }
    // 0x80026D54: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80026D58: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80026D5C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80026D60:
    // 0x80026D60: andi        $t1, $v1, 0xF
    ctx->r9 = ctx->r3 & 0XF;
    // 0x80026D64: beq         $t1, $zero, L_80026D74
    if (ctx->r9 == 0) {
        // 0x80026D68: and         $t2, $v1, $at
        ctx->r10 = ctx->r3 & ctx->r1;
            goto L_80026D74;
    }
    // 0x80026D68: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x80026D6C: addiu       $v1, $t2, 0x10
    ctx->r3 = ADD32(ctx->r10, 0X10);
    // 0x80026D70: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_80026D74:
    // 0x80026D74: addiu       $t4, $v1, -0x10
    ctx->r12 = ADD32(ctx->r3, -0X10);
    // 0x80026D78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026D7C: sw          $t4, -0x4494($at)
    MEM_W(-0X4494, ctx->r1) = ctx->r12;
    // 0x80026D80: addiu       $t5, $v1, 0x60
    ctx->r13 = ADD32(ctx->r3, 0X60);
    // 0x80026D84: sw          $t5, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r13;
    // 0x80026D88: sb          $t6, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r14;
    // 0x80026D8C: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x80026D90: lw          $t8, 0x38($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X38);
    // 0x80026D94: lui         $t1, 0x8002
    ctx->r9 = S32(0X8002 << 16);
    // 0x80026D98: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80026D9C: lw          $t9, 0x38($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X38);
    // 0x80026DA0: addiu       $t1, $t1, 0x6540
    ctx->r9 = ADD32(ctx->r9, 0X6540);
    // 0x80026DA4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80026DA8: lw          $t0, 0x3C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X3C);
    // 0x80026DAC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026DB0: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x80026DB4: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x80026DB8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80026DBC: addiu       $a0, $a0, -0x4500
    ctx->r4 = ADD32(ctx->r4, -0X4500);
    // 0x80026DC0: jal         0x8007DD90
    // 0x80026DC4: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    alInit(rdram, ctx);
        goto after_1;
    // 0x80026DC4: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    after_1:
    // 0x80026DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80026DCC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80026DD0: addiu       $v1, $v1, -0x44A4
    ctx->r3 = ADD32(ctx->r3, -0X44A4);
    // 0x80026DD4: addiu       $v0, $v0, -0x4498
    ctx->r2 = ADD32(ctx->r2, -0X4498);
    // 0x80026DD8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80026DDC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80026DE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026DE4: sw          $zero, -0x44A8($at)
    MEM_W(-0X44A8, ctx->r1) = 0;
    // 0x80026DE8: lw          $t4, 0x50($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X50);
    // 0x80026DEC: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80026DF0: addiu       $s5, $s5, -0x44A0
    ctx->r21 = ADD32(ctx->r21, -0X44A0);
    // 0x80026DF4: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x80026DF8: lw          $t5, 0x54($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X54);
    // 0x80026DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026E00: sw          $t5, -0x449C($at)
    MEM_W(-0X449C, ctx->r1) = ctx->r13;
    // 0x80026E04: lw          $a0, 0x4C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4C);
    // 0x80026E08: nop

    // 0x80026E0C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80026E10: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026E14: jal         0x80025154
    // 0x80026E18: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    func_80025154(rdram, ctx);
        goto after_2;
    // 0x80026E18: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    after_2:
    // 0x80026E1C: bne         $v0, $zero, L_80026E2C
    if (ctx->r2 != 0) {
        // 0x80026E20: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80026E2C;
    }
    // 0x80026E20: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80026E24: b           L_80026FFC
    // 0x80026E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026FFC;
    // 0x80026E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026E2C:
    // 0x80026E2C: lw          $t7, 0x4C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4C);
    // 0x80026E30: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80026E34: multu       $t7, $a0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026E38: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80026E3C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80026E40: addiu       $s1, $a2, 0x14
    ctx->r17 = ADD32(ctx->r6, 0X14);
    // 0x80026E44: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80026E48: mflo        $t8
    ctx->r24 = lo;
    // 0x80026E4C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80026E50: sw          $zero, -0x14($t9)
    MEM_W(-0X14, ctx->r25) = 0;
    // 0x80026E54: lw          $t0, 0x4C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4C);
    // 0x80026E58: nop

    // 0x80026E5C: multu       $t0, $a0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026E60: mflo        $t1
    ctx->r9 = lo;
    // 0x80026E64: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x80026E68: lw          $v1, -0x14($t2)
    ctx->r3 = MEM_W(ctx->r10, -0X14);
    // 0x80026E6C: nop

    // 0x80026E70: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80026E74: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80026E78: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    // 0x80026E7C: lw          $t3, 0x4C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X4C);
    // 0x80026E80: nop

    // 0x80026E84: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80026E88: blez        $t4, L_80026EE0
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80026E8C: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_80026EE0;
    }
    // 0x80026E8C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x80026E90: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
L_80026E94:
    // 0x80026E94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80026E98: jal         0x8007DDFC
    // 0x80026E9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_3;
    // 0x80026E9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80026EA0: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80026EA4: jal         0x80025154
    // 0x80026EA8: nop

    func_80025154(rdram, ctx);
        goto after_4;
    // 0x80026EA8: nop

    after_4:
    // 0x80026EAC: bne         $v0, $zero, L_80026EBC
    if (ctx->r2 != 0) {
        // 0x80026EB0: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_80026EBC;
    }
    // 0x80026EB0: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80026EB4: b           L_80026FFC
    // 0x80026EB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026FFC;
    // 0x80026EB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026EBC:
    // 0x80026EBC: lw          $t5, 0x4C($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X4C);
    // 0x80026EC0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80026EC4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80026EC8: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80026ECC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80026ED0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80026ED4: bne         $at, $zero, L_80026E94
    if (ctx->r1 != 0) {
        // 0x80026ED8: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_80026E94;
    }
    // 0x80026ED8: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80026EDC: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
L_80026EE0:
    // 0x80026EE0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80026EE4: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x80026EE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80026EEC: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80026EF0: jal         0x80025154
    // 0x80026EF4: addu        $s2, $a2, $t7
    ctx->r18 = ADD32(ctx->r6, ctx->r15);
    func_80025154(rdram, ctx);
        goto after_5;
    // 0x80026EF4: addu        $s2, $a2, $t7
    ctx->r18 = ADD32(ctx->r6, ctx->r15);
    after_5:
    // 0x80026EF8: bne         $v0, $zero, L_80026F08
    if (ctx->r2 != 0) {
        // 0x80026EFC: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_80026F08;
    }
    // 0x80026EFC: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80026F00: b           L_80026FFC
    // 0x80026F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026FFC;
    // 0x80026F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026F08:
    // 0x80026F08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80026F0C: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80026F10: addiu       $v0, $v0, -0x44B0
    ctx->r2 = ADD32(ctx->r2, -0X44B0);
    // 0x80026F14: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80026F18: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80026F1C: lw          $t9, 0x48($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X48);
    // 0x80026F20: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80026F24: addiu       $s1, $s1, -0x4488
    ctx->r17 = ADD32(ctx->r17, -0X4488);
    // 0x80026F28: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80026F2C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80026F30: addiu       $s2, $s2, -0x4730
    ctx->r18 = ADD32(ctx->r18, -0X4730);
    // 0x80026F34: addiu       $s0, $s0, -0x4738
    ctx->r16 = ADD32(ctx->r16, -0X4738);
    // 0x80026F38: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
L_80026F3C:
    // 0x80026F3C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80026F40: nop

    // 0x80026F44: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x80026F48: jal         0x80025154
    // 0x80026F4C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80025154(rdram, ctx);
        goto after_6;
    // 0x80026F4C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_6:
    // 0x80026F50: bne         $v0, $zero, L_80026F60
    if (ctx->r2 != 0) {
        // 0x80026F54: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_80026F60;
    }
    // 0x80026F54: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80026F58: b           L_80026FFC
    // 0x80026F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026FFC;
    // 0x80026F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026F60:
    // 0x80026F60: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80026F64: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80026F68: bne         $at, $zero, L_80026F3C
    if (ctx->r1 != 0) {
        // 0x80026F6C: nop
    
            goto L_80026F3C;
    }
    // 0x80026F6C: nop

    // 0x80026F70: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80026F74: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80026F78: addiu       $s1, $s1, -0x472C
    ctx->r17 = ADD32(ctx->r17, -0X472C);
    // 0x80026F7C: addiu       $s0, $s0, -0x4738
    ctx->r16 = ADD32(ctx->r16, -0X4738);
L_80026F80:
    // 0x80026F80: jal         0x80025154
    // 0x80026F84: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_80025154(rdram, ctx);
        goto after_7;
    // 0x80026F84: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_7:
    // 0x80026F88: bne         $v0, $zero, L_80026F98
    if (ctx->r2 != 0) {
        // 0x80026F8C: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_80026F98;
    }
    // 0x80026F8C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80026F90: b           L_80026FFC
    // 0x80026F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026FFC;
    // 0x80026F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026F98:
    // 0x80026F98: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x80026F9C: nop

    // 0x80026FA0: sh          $zero, 0x50($t1)
    MEM_H(0X50, ctx->r9) = 0;
    // 0x80026FA4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80026FA8: nop

    // 0x80026FAC: sw          $v0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r2;
    // 0x80026FB0: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80026FB4: nop

    // 0x80026FB8: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80026FBC: jal         0x80025154
    // 0x80026FC0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80025154(rdram, ctx);
        goto after_8;
    // 0x80026FC0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_8:
    // 0x80026FC4: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x80026FC8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80026FCC: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x80026FD0: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80026FD4: nop

    // 0x80026FD8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80026FDC: nop

    // 0x80026FE0: bne         $t5, $zero, L_80026FF0
    if (ctx->r13 != 0) {
        // 0x80026FE4: nop
    
            goto L_80026FF0;
    }
    // 0x80026FE4: nop

    // 0x80026FE8: b           L_80026FFC
    // 0x80026FEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026FFC;
    // 0x80026FEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026FF0:
    // 0x80026FF0: bne         $s0, $s1, L_80026F80
    if (ctx->r16 != ctx->r17) {
        // 0x80026FF4: nop
    
            goto L_80026F80;
    }
    // 0x80026FF4: nop

    // 0x80026FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80026FFC:
    // 0x80026FFC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80027000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80027004: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80027008: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002700C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80027010: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80027014: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80027018: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002701C: jr          $ra
    // 0x80027020: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80027020: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80027030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027034: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027038: beq         $a0, $at, L_80027050
    if (ctx->r4 == ctx->r1) {
        // 0x8002703C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80027050;
    }
    // 0x8002703C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027040: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80027044: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80027048: jal         0x8001EA98
    // 0x8002704C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001EA98(rdram, ctx);
        goto after_0;
    // 0x8002704C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
L_80027050:
    // 0x80027050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027058: jr          $ra
    // 0x8002705C: nop

    return;
    // 0x8002705C: nop

;}
RECOMP_FUNC void func_80027060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80027064: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80027068: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002706C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80027070: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80027074: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x80027078: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002707C: addiu       $s1, $s1, -0x7908
    ctx->r17 = ADD32(ctx->r17, -0X7908);
    // 0x80027080: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80027084: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80027088: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_8002708C:
    // 0x8002708C: lw          $t6, 0x10($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X10);
    // 0x80027090: nop

    // 0x80027094: beq         $s2, $t6, L_800270B0
    if (ctx->r18 == ctx->r14) {
        // 0x80027098: nop
    
            goto L_800270B0;
    }
    // 0x80027098: nop

    // 0x8002709C: beq         $s0, $s2, L_800270B0
    if (ctx->r16 == ctx->r18) {
        // 0x800270A0: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_800270B0;
    }
    // 0x800270A0: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x800270A4: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800270A8: jal         0x8001EA98
    // 0x800270AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001EA98(rdram, ctx);
        goto after_0;
    // 0x800270AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
L_800270B0:
    // 0x800270B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800270B4: bne         $s0, $s3, L_8002708C
    if (ctx->r16 != ctx->r19) {
        // 0x800270B8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8002708C;
    }
    // 0x800270B8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x800270BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800270C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800270C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800270C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800270CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800270D0: jr          $ra
    // 0x800270D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800270D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800270D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800270D8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800270DC: lw          $t6, -0x444C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X444C);
    // 0x800270E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800270E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800270E8: beq         $t6, $zero, L_800270F8
    if (ctx->r14 == 0) {
        // 0x800270EC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800270F8;
    }
    // 0x800270EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800270F0: jal         0x80027060
    // 0x800270F4: nop

    func_80027060(rdram, ctx);
        goto after_0;
    // 0x800270F4: nop

    after_0:
L_800270F8:
    // 0x800270F8: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x800270FC: jal         0x8001D914
    // 0x80027100: nop

    func_8001D914(rdram, ctx);
        goto after_1;
    // 0x80027100: nop

    after_1:
    // 0x80027104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027108: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002710C: sw          $zero, -0x444C($at)
    MEM_W(-0X444C, ctx->r1) = 0;
    // 0x80027110: jr          $ra
    // 0x80027114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80027114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80027118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002711C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027120: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80027124: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80027128: jal         0x8001D494
    // 0x8002712C: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    func_8001D494(rdram, ctx);
        goto after_0;
    // 0x8002712C: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    after_0:
    // 0x80027130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027138: jr          $ra
    // 0x8002713C: nop

    return;
    // 0x8002713C: nop

;}
RECOMP_FUNC void func_80027140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027140: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80027144: lw          $t8, -0x4450($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4450);
    // 0x80027148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002714C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80027150: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80027154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80027158: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002715C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80027160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027164: beq         $t8, $zero, L_8002717C
    if (ctx->r24 == 0) {
        // 0x80027168: sw          $t7, -0x4448($at)
        MEM_W(-0X4448, ctx->r1) = ctx->r15;
            goto L_8002717C;
    }
    // 0x80027168: sw          $t7, -0x4448($at)
    MEM_W(-0X4448, ctx->r1) = ctx->r15;
    // 0x8002716C: jal         0x800244E0
    // 0x80027170: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
    func_800244E0(rdram, ctx);
        goto after_0;
    // 0x80027170: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
    after_0:
    // 0x80027174: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80027178: nop

L_8002717C:
    // 0x8002717C: jal         0x80024280
    // 0x80027180: nop

    func_80024280(rdram, ctx);
        goto after_1;
    // 0x80027180: nop

    after_1:
    // 0x80027184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027188: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002718C: sw          $zero, -0x4450($at)
    MEM_W(-0X4450, ctx->r1) = 0;
    // 0x80027190: jr          $ra
    // 0x80027194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80027194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80027198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002719C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800271A0: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x800271A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800271A8: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800271AC: beq         $a0, $at, L_800271C4
    if (ctx->r4 == ctx->r1) {
        // 0x800271B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800271C4;
    }
    // 0x800271B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800271B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800271B8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800271BC: jal         0x8001DDF8
    // 0x800271C0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8001DDF8(rdram, ctx);
        goto after_0;
    // 0x800271C0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
L_800271C4:
    // 0x800271C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800271C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800271CC: jr          $ra
    // 0x800271D0: nop

    return;
    // 0x800271D0: nop

;}
RECOMP_FUNC void func_800271D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800271D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800271D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800271DC: sll         $s4, $a0, 24
    ctx->r20 = S32(ctx->r4 << 24);
    // 0x800271E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800271E4: sra         $t6, $s4, 24
    ctx->r14 = S32(SIGNED(ctx->r20) >> 24);
    // 0x800271E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800271EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800271F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800271F4: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x800271F8: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x800271FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80027200: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80027204: addiu       $s1, $s1, -0x7908
    ctx->r17 = ADD32(ctx->r17, -0X7908);
    // 0x80027208: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002720C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80027210: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_80027214:
    // 0x80027214: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x80027218: nop

    // 0x8002721C: beq         $s2, $t7, L_80027244
    if (ctx->r18 == ctx->r15) {
        // 0x80027220: nop
    
            goto L_80027244;
    }
    // 0x80027220: nop

    // 0x80027224: beq         $s0, $s2, L_80027244
    if (ctx->r16 == ctx->r18) {
        // 0x80027228: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80027244;
    }
    // 0x80027228: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8002722C: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x80027230: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80027234: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80027238: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8002723C: jal         0x8001DDF8
    // 0x80027240: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8001DDF8(rdram, ctx);
        goto after_0;
    // 0x80027240: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
L_80027244:
    // 0x80027244: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80027248: bne         $s0, $s3, L_80027214
    if (ctx->r16 != ctx->r19) {
        // 0x8002724C: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80027214;
    }
    // 0x8002724C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80027250: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80027254: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80027258: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002725C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80027260: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80027264: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80027268: jr          $ra
    // 0x8002726C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002726C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80027270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027270: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80027274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027278: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002727C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_80027280:
    // 0x80027280: jal         0x8002F22C
    // 0x80027284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002F22C(rdram, ctx);
        goto after_0;
    // 0x80027284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80027288: bne         $v0, $zero, L_8002729C
    if (ctx->r2 != 0) {
        // 0x8002728C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8002729C;
    }
    // 0x8002728C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80027290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80027294: bne         $s0, $s1, L_80027280
    if (ctx->r16 != ctx->r17) {
        // 0x80027298: nop
    
            goto L_80027280;
    }
    // 0x80027298: nop

L_8002729C:
    // 0x8002729C: bne         $v0, $zero, L_800272AC
    if (ctx->r2 != 0) {
        // 0x800272A0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800272AC;
    }
    // 0x800272A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800272A4: b           L_80027428
    // 0x800272A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80027428;
    // 0x800272A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800272AC:
    // 0x800272AC: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    // 0x800272B0: jal         0x80009DB4
    // 0x800272B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80009DB4(rdram, ctx);
        goto after_1;
    // 0x800272B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800272B8: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x800272BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800272C0: jal         0x80009D90
    // 0x800272C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80009D90(rdram, ctx);
        goto after_2;
    // 0x800272C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x800272C8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800272CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800272D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800272D4: lwc1        $f20, 0x4C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800272D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800272DC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x800272E0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x800272E4: jal         0x800289B4
    // 0x800272E8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    func_800289B4(rdram, ctx);
        goto after_3;
    // 0x800272E8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800272EC: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800272F0: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800272F4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800272F8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800272FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80027300: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80027304: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80027308: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8002730C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80027310: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80027314: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80027318: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002731C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x80027320: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80027324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80027328: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x8002732C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80027330: jal         0x80028850
    // 0x80027334: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80028850(rdram, ctx);
        goto after_4;
    // 0x80027334: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x80027338: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8002733C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80027340: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80027344: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80027348: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8002734C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80027350: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80027354: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80027358: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8002735C: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80027360: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80027364: nop

    // 0x80027368: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8002736C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80027370: jal         0x8007A500
    // 0x80027374: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_5;
    // 0x80027374: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_5:
    // 0x80027378: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x8002737C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027380: lwc1        $f2, -0x4444($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4444);
    // 0x80027384: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80027388: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8002738C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80027390: bc1f        L_8002739C
    if (!c1cs) {
        // 0x80027394: nop
    
            goto L_8002739C;
    }
    // 0x80027394: nop

    // 0x80027398: swc1        $f2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f2.u32l;
L_8002739C:
    // 0x8002739C: lwc1        $f3, 0x5530($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X5530);
    // 0x800273A0: lwc1        $f2, 0x5534($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5534);
    // 0x800273A4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800273A8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800273AC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800273B0: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x800273B4: lwc1        $f13, 0x5538($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5538);
    // 0x800273B8: lwc1        $f12, 0x553C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X553C);
    // 0x800273BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800273C0: lwc1        $f5, 0x5540($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5540);
    // 0x800273C4: lwc1        $f4, 0x5544($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5544);
    // 0x800273C8: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x800273CC: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x800273D0: mul.d       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f6.d);
    // 0x800273D4: add.d       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f10.d + ctx->f4.d;
    // 0x800273D8: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x800273DC: nop

    // 0x800273E0: bc1f        L_800273F8
    if (!c1cs) {
        // 0x800273E4: nop
    
            goto L_800273F8;
    }
    // 0x800273E4: nop

    // 0x800273E8: sub.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f0.d - ctx->f12.d;
    // 0x800273EC: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x800273F0: b           L_80027428
    // 0x800273F4: swc1        $f6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f6.u32l;
        goto L_80027428;
    // 0x800273F4: swc1        $f6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f6.u32l;
L_800273F8:
    // 0x800273F8: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x800273FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80027400: nop

    // 0x80027404: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x80027408: nop

    // 0x8002740C: bc1f        L_8002741C
    if (!c1cs) {
        // 0x80027410: nop
    
            goto L_8002741C;
    }
    // 0x80027410: nop

    // 0x80027414: b           L_80027420
    // 0x80027418: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_80027420;
    // 0x80027418: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_8002741C:
    // 0x8002741C: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_80027420:
    // 0x80027420: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x80027424: swc1        $f4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f4.u32l;
L_80027428:
    // 0x80027428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002742C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80027430: jr          $ra
    // 0x80027434: nop

    return;
    // 0x80027434: nop

;}
RECOMP_FUNC void func_80027438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027438: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8002743C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80027440: lw          $t6, -0xC88($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XC88);
    // 0x80027444: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80027448: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8002744C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80027450: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80027454: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x80027458: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8002745C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80027460: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80027464: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80027468: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8002746C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80027470: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80027474: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80027478: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8002747C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80027480: sw          $t7, -0xC88($at)
    MEM_W(-0XC88, ctx->r1) = ctx->r15;
    // 0x80027484: addiu       $s6, $s6, -0x7908
    ctx->r22 = ADD32(ctx->r22, -0X7908);
    // 0x80027488: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8002748C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80027490:
    // 0x80027490: lw          $t8, 0x10($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X10);
    // 0x80027494: sll         $fp, $s7, 16
    ctx->r30 = S32(ctx->r23 << 16);
    // 0x80027498: beq         $s0, $t8, L_80027530
    if (ctx->r16 == ctx->r24) {
        // 0x8002749C: sra         $t9, $fp, 16
        ctx->r25 = S32(SIGNED(ctx->r30) >> 16);
            goto L_80027530;
    }
    // 0x8002749C: sra         $t9, $fp, 16
    ctx->r25 = S32(SIGNED(ctx->r30) >> 16);
    // 0x800274A0: sll         $a0, $t9, 16
    ctx->r4 = S32(ctx->r25 << 16);
    // 0x800274A4: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800274A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800274AC: jal         0x8001ECA0
    // 0x800274B0: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    func_8001ECA0(rdram, ctx);
        goto after_0;
    // 0x800274B0: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    after_0:
    // 0x800274B4: bne         $v0, $zero, L_800274C4
    if (ctx->r2 != 0) {
        // 0x800274B8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_800274C4;
    }
    // 0x800274B8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800274BC: b           L_80027530
    // 0x800274C0: sw          $s0, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r16;
        goto L_80027530;
    // 0x800274C0: sw          $s0, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r16;
L_800274C4:
    // 0x800274C4: lw          $t7, -0xC8C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XC8C);
    // 0x800274C8: nop

    // 0x800274CC: bne         $s7, $t7, L_80027530
    if (ctx->r23 != ctx->r15) {
        // 0x800274D0: nop
    
            goto L_80027530;
    }
    // 0x800274D0: nop

    // 0x800274D4: lw          $t8, 0xC($s6)
    ctx->r24 = MEM_W(ctx->r22, 0XC);
    // 0x800274D8: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x800274DC: beq         $t8, $zero, L_80027530
    if (ctx->r24 == 0) {
        // 0x800274E0: addiu       $s5, $sp, 0x58
        ctx->r21 = ADD32(ctx->r29, 0X58);
            goto L_80027530;
    }
    // 0x800274E0: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x800274E4: jal         0x80027270
    // 0x800274E8: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    func_80027270(rdram, ctx);
        goto after_1;
    // 0x800274E8: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    after_1:
    // 0x800274EC: beq         $v0, $zero, L_80027530
    if (ctx->r2 == 0) {
        // 0x800274F0: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_80027530;
    }
    // 0x800274F0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x800274F4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800274F8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800274FC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80027500: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80027504: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80027508: sll         $a0, $fp, 16
    ctx->r4 = S32(ctx->r30 << 16);
    // 0x8002750C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80027510: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80027514: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80027518: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8002751C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80027520: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80027524: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80027528: jal         0x8001DFD0
    // 0x8002752C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8001DFD0(rdram, ctx);
        goto after_2;
    // 0x8002752C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
L_80027530:
    // 0x80027530: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80027534: slti        $at, $s7, 0xC
    ctx->r1 = SIGNED(ctx->r23) < 0XC ? 1 : 0;
    // 0x80027538: bne         $at, $zero, L_80027490
    if (ctx->r1 != 0) {
        // 0x8002753C: addiu       $s6, $s6, 0x14
        ctx->r22 = ADD32(ctx->r22, 0X14);
            goto L_80027490;
    }
    // 0x8002753C: addiu       $s6, $s6, 0x14
    ctx->r22 = ADD32(ctx->r22, 0X14);
    // 0x80027540: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80027544: lw          $t9, -0xC8C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XC8C);
    // 0x80027548: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002754C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80027550: sw          $t6, -0xC8C($at)
    MEM_W(-0XC8C, ctx->r1) = ctx->r14;
    // 0x80027554: slti        $at, $t6, 0xC
    ctx->r1 = SIGNED(ctx->r14) < 0XC ? 1 : 0;
    // 0x80027558: bne         $at, $zero, L_80027568
    if (ctx->r1 != 0) {
        // 0x8002755C: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_80027568;
    }
    // 0x8002755C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80027560: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80027564: sw          $zero, -0xC8C($at)
    MEM_W(-0XC8C, ctx->r1) = 0;
L_80027568:
    // 0x80027568: lw          $v0, -0x7928($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7928);
    // 0x8002756C: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x80027570: beq         $v0, $zero, L_80027584
    if (ctx->r2 == 0) {
        // 0x80027574: sll         $t7, $s7, 2
        ctx->r15 = S32(ctx->r23 << 2);
            goto L_80027584;
    }
    // 0x80027574: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x80027578: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002757C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80027580: sw          $v0, -0x7928($at)
    MEM_W(-0X7928, ctx->r1) = ctx->r2;
L_80027584:
    // 0x80027584: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80027588: lw          $v0, -0x7924($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7924);
    // 0x8002758C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x80027590: beq         $v0, $zero, L_800275A4
    if (ctx->r2 == 0) {
        // 0x80027594: addiu       $t8, $t8, -0x7928
        ctx->r24 = ADD32(ctx->r24, -0X7928);
            goto L_800275A4;
    }
    // 0x80027594: addiu       $t8, $t8, -0x7928
    ctx->r24 = ADD32(ctx->r24, -0X7928);
    // 0x80027598: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002759C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800275A0: sw          $v0, -0x7924($at)
    MEM_W(-0X7924, ctx->r1) = ctx->r2;
L_800275A4:
    // 0x800275A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800275A8: lw          $v0, -0x7920($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7920);
    // 0x800275AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800275B0: beq         $v0, $zero, L_800275BC
    if (ctx->r2 == 0) {
        // 0x800275B4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_800275BC;
    }
    // 0x800275B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800275B8: sw          $v0, -0x7920($at)
    MEM_W(-0X7920, ctx->r1) = ctx->r2;
L_800275BC:
    // 0x800275BC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800275C0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800275C4: nop

    // 0x800275C8: beq         $v1, $zero, L_800275D4
    if (ctx->r3 == 0) {
        // 0x800275CC: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_800275D4;
    }
    // 0x800275CC: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x800275D0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_800275D4:
    // 0x800275D4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x800275D8: nop

    // 0x800275DC: beq         $v1, $zero, L_800275E8
    if (ctx->r3 == 0) {
        // 0x800275E0: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_800275E8;
    }
    // 0x800275E0: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x800275E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_800275E8:
    // 0x800275E8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800275EC: nop

    // 0x800275F0: beq         $v1, $zero, L_800275FC
    if (ctx->r3 == 0) {
        // 0x800275F4: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_800275FC;
    }
    // 0x800275F4: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x800275F8: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
L_800275FC:
    // 0x800275FC: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80027600: nop

    // 0x80027604: beq         $v1, $zero, L_80027610
    if (ctx->r3 == 0) {
        // 0x80027608: addiu       $t8, $v1, -0x1
        ctx->r24 = ADD32(ctx->r3, -0X1);
            goto L_80027610;
    }
    // 0x80027608: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8002760C: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
L_80027610:
    // 0x80027610: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80027614: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80027618: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002761C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80027620: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80027624: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80027628: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8002762C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80027630: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80027634: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80027638: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8002763C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80027640: jr          $ra
    // 0x80027644: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80027644: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80027648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027648: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8002764C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80027650: addiu       $a0, $a0, -0x7818
    ctx->r4 = ADD32(ctx->r4, -0X7818);
    // 0x80027654: addiu       $v1, $v1, -0x7908
    ctx->r3 = ADD32(ctx->r3, -0X7908);
    // 0x80027658: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002765C:
    // 0x8002765C: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x80027660: nop

    // 0x80027664: beq         $v0, $t6, L_80027670
    if (ctx->r2 == ctx->r14) {
        // 0x80027668: nop
    
            goto L_80027670;
    }
    // 0x80027668: nop

    // 0x8002766C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_80027670:
    // 0x80027670: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x80027674: nop

    // 0x80027678: beq         $v0, $t7, L_80027684
    if (ctx->r2 == ctx->r15) {
        // 0x8002767C: nop
    
            goto L_80027684;
    }
    // 0x8002767C: nop

    // 0x80027680: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
L_80027684:
    // 0x80027684: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x80027688: nop

    // 0x8002768C: beq         $v0, $t8, L_80027698
    if (ctx->r2 == ctx->r24) {
        // 0x80027690: nop
    
            goto L_80027698;
    }
    // 0x80027690: nop

    // 0x80027694: sw          $zero, 0x34($v1)
    MEM_W(0X34, ctx->r3) = 0;
L_80027698:
    // 0x80027698: lw          $t9, 0x4C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4C);
    // 0x8002769C: nop

    // 0x800276A0: beq         $v0, $t9, L_800276AC
    if (ctx->r2 == ctx->r25) {
        // 0x800276A4: nop
    
            goto L_800276AC;
    }
    // 0x800276A4: nop

    // 0x800276A8: sw          $zero, 0x48($v1)
    MEM_W(0X48, ctx->r3) = 0;
L_800276AC:
    // 0x800276AC: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x800276B0: bne         $v1, $a0, L_8002765C
    if (ctx->r3 != ctx->r4) {
        // 0x800276B4: nop
    
            goto L_8002765C;
    }
    // 0x800276B4: nop

    // 0x800276B8: jr          $ra
    // 0x800276BC: nop

    return;
    // 0x800276BC: nop

;}
RECOMP_FUNC void func_800276C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800276C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800276C4: beq         $a0, $at, L_80027710
    if (ctx->r4 == ctx->r1) {
        // 0x800276C8: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_80027710;
    }
    // 0x800276C8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800276CC: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x800276D0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800276D4: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x800276D8: bne         $t7, $zero, L_80027710
    if (ctx->r15 != 0) {
        // 0x800276DC: addu        $t8, $t8, $a0
        ctx->r24 = ADD32(ctx->r24, ctx->r4);
            goto L_80027710;
    }
    // 0x800276DC: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800276E0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x800276E4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800276E8: addiu       $t9, $t9, -0x7908
    ctx->r25 = ADD32(ctx->r25, -0X7908);
    // 0x800276EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800276F0: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x800276F4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x800276F8: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800276FC: nop

    // 0x80027700: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80027704: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80027708: nop

    // 0x8002770C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
L_80027710:
    // 0x80027710: jr          $ra
    // 0x80027714: nop

    return;
    // 0x80027714: nop

;}
RECOMP_FUNC void func_80027718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027718: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8002771C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80027720: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80027724: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027728: beq         $a0, $at, L_80027760
    if (ctx->r4 == ctx->r1) {
        // 0x8002772C: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_80027760;
    }
    // 0x8002772C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80027730: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80027734: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80027738: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8002773C: bne         $t7, $zero, L_80027760
    if (ctx->r15 != 0) {
        // 0x80027740: addu        $t8, $t8, $a0
        ctx->r24 = ADD32(ctx->r24, ctx->r4);
            goto L_80027760;
    }
    // 0x80027740: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80027744: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80027748: addiu       $t9, $t9, -0x7908
    ctx->r25 = ADD32(ctx->r25, -0X7908);
    // 0x8002774C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80027750: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80027754: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x80027758: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8002775C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
L_80027760:
    // 0x80027760: jr          $ra
    // 0x80027764: nop

    return;
    // 0x80027764: nop

;}
RECOMP_FUNC void func_80027768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027768: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002776C: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80027770: slti        $at, $a0, 0x86
    ctx->r1 = SIGNED(ctx->r4) < 0X86 ? 1 : 0;
    // 0x80027774: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80027778: bgez        $t7, L_80027788
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002777C: nop
    
            goto L_80027788;
    }
    // 0x8002777C: nop

    // 0x80027780: jr          $ra
    // 0x80027784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80027784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80027788:
    // 0x80027788: bne         $at, $zero, L_800277A8
    if (ctx->r1 != 0) {
        // 0x8002778C: addiu       $at, $zero, 0xB4
        ctx->r1 = ADD32(0, 0XB4);
            goto L_800277A8;
    }
    // 0x8002778C: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80027790: beq         $a0, $at, L_800277F4
    if (ctx->r4 == ctx->r1) {
        // 0x80027794: addiu       $at, $zero, 0xDF
        ctx->r1 = ADD32(0, 0XDF);
            goto L_800277F4;
    }
    // 0x80027794: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80027798: beq         $a0, $at, L_8002781C
    if (ctx->r4 == ctx->r1) {
        // 0x8002779C: nop
    
            goto L_8002781C;
    }
    // 0x8002779C: nop

    // 0x800277A0: b           L_80027828
    // 0x800277A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80027828;
    // 0x800277A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800277A8:
    // 0x800277A8: slti        $at, $a0, 0x4F
    ctx->r1 = SIGNED(ctx->r4) < 0X4F ? 1 : 0;
    // 0x800277AC: bne         $at, $zero, L_800277C8
    if (ctx->r1 != 0) {
        // 0x800277B0: addiu       $t8, $a0, -0x28
        ctx->r24 = ADD32(ctx->r4, -0X28);
            goto L_800277C8;
    }
    // 0x800277B0: addiu       $t8, $a0, -0x28
    ctx->r24 = ADD32(ctx->r4, -0X28);
    // 0x800277B4: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
    // 0x800277B8: beq         $a0, $at, L_80027814
    if (ctx->r4 == ctx->r1) {
        // 0x800277BC: nop
    
            goto L_80027814;
    }
    // 0x800277BC: nop

    // 0x800277C0: b           L_80027828
    // 0x800277C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80027828;
    // 0x800277C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800277C8:
    // 0x800277C8: sltiu       $at, $t8, 0x27
    ctx->r1 = ctx->r24 < 0X27 ? 1 : 0;
    // 0x800277CC: beq         $at, $zero, L_80027824
    if (ctx->r1 == 0) {
        // 0x800277D0: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80027824;
    }
    // 0x800277D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800277D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800277D8: addu        $at, $at, $t8
    gpr jr_addend_800277E4 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800277DC: lw          $t8, 0x5548($at)
    ctx->r24 = ADD32(ctx->r1, 0X5548);
    // 0x800277E0: nop

    // 0x800277E4: jr          $t8
    // 0x800277E8: nop

    switch (jr_addend_800277E4 >> 2) {
        case 0: goto L_800277FC; break;
        case 1: goto L_80027804; break;
        case 2: goto L_8002780C; break;
        case 3: goto L_80027824; break;
        case 4: goto L_80027824; break;
        case 5: goto L_80027824; break;
        case 6: goto L_80027824; break;
        case 7: goto L_80027824; break;
        case 8: goto L_80027824; break;
        case 9: goto L_80027824; break;
        case 10: goto L_80027824; break;
        case 11: goto L_80027824; break;
        case 12: goto L_80027824; break;
        case 13: goto L_80027824; break;
        case 14: goto L_80027824; break;
        case 15: goto L_800277EC; break;
        case 16: goto L_800277EC; break;
        case 17: goto L_800277EC; break;
        case 18: goto L_800277EC; break;
        case 19: goto L_800277EC; break;
        case 20: goto L_800277EC; break;
        case 21: goto L_800277EC; break;
        case 22: goto L_800277EC; break;
        case 23: goto L_800277EC; break;
        case 24: goto L_800277EC; break;
        case 25: goto L_800277EC; break;
        case 26: goto L_800277EC; break;
        case 27: goto L_80027824; break;
        case 28: goto L_80027824; break;
        case 29: goto L_80027824; break;
        case 30: goto L_80027824; break;
        case 31: goto L_80027824; break;
        case 32: goto L_80027824; break;
        case 33: goto L_80027824; break;
        case 34: goto L_80027824; break;
        case 35: goto L_800277EC; break;
        case 36: goto L_800277EC; break;
        case 37: goto L_800277EC; break;
        case 38: goto L_800277EC; break;
        default: switch_error(__func__, 0x800277E4, 0x80095548);
    }
    // 0x800277E8: nop

L_800277EC:
    // 0x800277EC: b           L_80027828
    // 0x800277F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80027828;
    // 0x800277F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_800277F4:
    // 0x800277F4: b           L_80027828
    // 0x800277F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80027828;
    // 0x800277F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800277FC:
    // 0x800277FC: b           L_80027828
    // 0x80027800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80027828;
    // 0x80027800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80027804:
    // 0x80027804: b           L_80027828
    // 0x80027808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80027828;
    // 0x80027808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8002780C:
    // 0x8002780C: b           L_80027828
    // 0x80027810: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80027828;
    // 0x80027810: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80027814:
    // 0x80027814: b           L_80027828
    // 0x80027818: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80027828;
    // 0x80027818: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8002781C:
    // 0x8002781C: b           L_80027828
    // 0x80027820: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80027828;
    // 0x80027820: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80027824:
    // 0x80027824: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80027828:
    // 0x80027828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002782C: bne         $v0, $at, L_8002783C
    if (ctx->r2 != ctx->r1) {
        // 0x80027830: sll         $v1, $v0, 2
        ctx->r3 = S32(ctx->r2 << 2);
            goto L_8002783C;
    }
    // 0x80027830: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80027834: jr          $ra
    // 0x80027838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80027838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002783C:
    // 0x8002783C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80027840: addiu       $t9, $t9, -0x7928
    ctx->r25 = ADD32(ctx->r25, -0X7928);
    // 0x80027844: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x80027848: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8002784C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80027850: bne         $t6, $zero, L_80027868
    if (ctx->r14 != 0) {
        // 0x80027854: addu        $t7, $t7, $v1
        ctx->r15 = ADD32(ctx->r15, ctx->r3);
            goto L_80027868;
    }
    // 0x80027854: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80027858: lw          $t7, -0xCA8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XCA8);
    // 0x8002785C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80027860: jr          $ra
    // 0x80027864: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x80027864: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_80027868:
    // 0x80027868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002786C: jr          $ra
    // 0x80027870: nop

    return;
    // 0x80027870: nop

;}
RECOMP_FUNC void func_80027874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002787C: jal         0x80027768
    // 0x80027880: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80027768(rdram, ctx);
        goto after_0;
    // 0x80027880: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_0:
    // 0x80027884: beq         $v0, $zero, L_800278CC
    if (ctx->r2 == 0) {
        // 0x80027888: sll         $a0, $a1, 16
        ctx->r4 = S32(ctx->r5 << 16);
            goto L_800278CC;
    }
    // 0x80027888: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8002788C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80027890: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80027894: jal         0x8001FED8
    // 0x80027898: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8001FED8(rdram, ctx);
        goto after_1;
    // 0x80027898: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x8002789C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800278A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800278A4: beq         $v0, $at, L_800278CC
    if (ctx->r2 == ctx->r1) {
        // 0x800278A8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_800278CC;
    }
    // 0x800278A8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800278AC: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x800278B0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x800278B4: addiu       $t8, $t8, -0x7908
    ctx->r24 = ADD32(ctx->r24, -0X7908);
    // 0x800278B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800278BC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800278C0: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x800278C4: b           L_800278D0
    // 0x800278C8: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
        goto L_800278D0;
    // 0x800278C8: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_800278CC:
    // 0x800278CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800278D0:
    // 0x800278D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800278D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800278D8: jr          $ra
    // 0x800278DC: nop

    return;
    // 0x800278DC: nop

;}
RECOMP_FUNC void func_800278E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800278E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800278E4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800278E8: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x800278EC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800278F0: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x800278F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800278F8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800278FC: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80027900: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80027904: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80027908: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8002790C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80027910: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80027914: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80027918: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8002791C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80027920: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80027924: beq         $t7, $zero, L_8002793C
    if (ctx->r15 == 0) {
        // 0x80027928: sw          $a2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r6;
            goto L_8002793C;
    }
    // 0x80027928: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8002792C: jal         0x80027874
    // 0x80027930: nop

    func_80027874(rdram, ctx);
        goto after_0;
    // 0x80027930: nop

    after_0:
    // 0x80027934: b           L_80027A10
    // 0x80027938: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80027A10;
    // 0x80027938: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8002793C:
    // 0x8002793C: jal         0x80027768
    // 0x80027940: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80027768(rdram, ctx);
        goto after_1;
    // 0x80027940: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x80027944: beq         $v0, $zero, L_80027A08
    if (ctx->r2 == 0) {
        // 0x80027948: addiu       $s3, $sp, 0x38
        ctx->r19 = ADD32(ctx->r29, 0X38);
            goto L_80027A08;
    }
    // 0x80027948: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x8002794C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80027950: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80027954: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80027958: addiu       $s5, $sp, 0x48
    ctx->r21 = ADD32(ctx->r29, 0X48);
    // 0x8002795C: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x80027960: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x80027964: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80027968: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8002796C: jal         0x80027270
    // 0x80027970: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_80027270(rdram, ctx);
        goto after_2;
    // 0x80027970: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80027974: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80027978: beq         $v0, $zero, L_80027A08
    if (ctx->r2 == 0) {
        // 0x8002797C: sll         $a0, $a3, 16
        ctx->r4 = S32(ctx->r7 << 16);
            goto L_80027A08;
    }
    // 0x8002797C: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80027980: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80027984: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80027988: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8002798C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80027990: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80027994: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80027998: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8002799C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x800279A0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800279A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800279A8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800279AC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800279B0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800279B4: jal         0x8001FC10
    // 0x800279B8: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    func_8001FC10(rdram, ctx);
        goto after_3;
    // 0x800279B8: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_3:
    // 0x800279BC: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800279C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800279C4: beq         $v0, $at, L_80027A08
    if (ctx->r2 == ctx->r1) {
        // 0x800279C8: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_80027A08;
    }
    // 0x800279C8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800279CC: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x800279D0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x800279D4: addiu       $t9, $t9, -0x7908
    ctx->r25 = ADD32(ctx->r25, -0X7908);
    // 0x800279D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800279DC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800279E0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800279E4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800279E8: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800279EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800279F0: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x800279F4: sw          $a3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r7;
    // 0x800279F8: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x800279FC: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x80027A00: b           L_80027A0C
    // 0x80027A04: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
        goto L_80027A0C;
    // 0x80027A04: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_80027A08:
    // 0x80027A08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80027A0C:
    // 0x80027A0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80027A10:
    // 0x80027A10: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80027A14: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80027A18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80027A1C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80027A20: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80027A24: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80027A28: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80027A2C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80027A30: jr          $ra
    // 0x80027A34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80027A34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80027A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027A40: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80027A44: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80027A48: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80027A4C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80027A50: jal         0x800278E0
    // 0x80027A54: nop

    func_800278E0(rdram, ctx);
        goto after_0;
    // 0x80027A54: nop

    after_0:
    // 0x80027A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027A60: jr          $ra
    // 0x80027A64: nop

    return;
    // 0x80027A64: nop

;}
RECOMP_FUNC void func_80027A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80027A6C: beq         $a0, $zero, L_80027A88
    if (ctx->r4 == 0) {
        // 0x80027A70: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80027A88;
    }
    // 0x80027A70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80027A74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80027A78: beq         $a0, $at, L_80027AC4
    if (ctx->r4 == ctx->r1) {
        // 0x80027A7C: lui         $a2, 0x459C
        ctx->r6 = S32(0X459C << 16);
            goto L_80027AC4;
    }
    // 0x80027A7C: lui         $a2, 0x459C
    ctx->r6 = S32(0X459C << 16);
    // 0x80027A80: b           L_80027B00
    // 0x80027A84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80027B00;
    // 0x80027A84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80027A88:
    // 0x80027A88: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80027A8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80027A90: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80027A94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80027A98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80027A9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80027AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80027AA4: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x80027AA8: jal         0x8001FCE4
    // 0x80027AAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8001FCE4(rdram, ctx);
        goto after_0;
    // 0x80027AAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80027AB0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80027AB4: lwc1        $f6, 0x55E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55E4);
    // 0x80027AB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027ABC: b           L_80027AFC
    // 0x80027AC0: swc1        $f6, -0x4444($at)
    MEM_W(-0X4444, ctx->r1) = ctx->f6.u32l;
        goto L_80027AFC;
    // 0x80027AC0: swc1        $f6, -0x4444($at)
    MEM_W(-0X4444, ctx->r1) = ctx->f6.u32l;
L_80027AC4:
    // 0x80027AC4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80027AC8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80027ACC: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80027AD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80027AD4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80027AD8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80027ADC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80027AE0: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x80027AE4: jal         0x8001FCE4
    // 0x80027AE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8001FCE4(rdram, ctx);
        goto after_1;
    // 0x80027AE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80027AEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80027AF0: lwc1        $f10, 0x55E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X55E8);
    // 0x80027AF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027AF8: swc1        $f10, -0x4444($at)
    MEM_W(-0X4444, ctx->r1) = ctx->f10.u32l;
L_80027AFC:
    // 0x80027AFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80027B00:
    // 0x80027B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80027B04: jr          $ra
    // 0x80027B08: nop

    return;
    // 0x80027B08: nop

    // 0x80027B0C: jr          $ra
    // 0x80027B10: nop

    return;
    // 0x80027B10: nop

;}
RECOMP_FUNC void func_80027B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027B14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80027B18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80027B1C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80027B20: addiu       $a1, $a1, -0xCEC
    ctx->r5 = ADD32(ctx->r5, -0XCEC);
    // 0x80027B24: jal         0x80073EF0
    // 0x80027B28: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80027B28: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x80027B2C: jal         0x800021E8
    // 0x80027B30: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_800021E8(rdram, ctx);
        goto after_1;
    // 0x80027B30: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_1:
    // 0x80027B34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80027B38: jal         0x80001E6C
    // 0x80027B3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001E6C(rdram, ctx);
        goto after_2;
    // 0x80027B3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80027B40: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80027B44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80027B48: jal         0x80001C84
    // 0x80027B4C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_80001C84(rdram, ctx);
        goto after_3;
    // 0x80027B4C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_3:
    // 0x80027B50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80027B54: jal         0x80001E6C
    // 0x80027B58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001E6C(rdram, ctx);
        goto after_4;
    // 0x80027B58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80027B5C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80027B60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80027B64: jal         0x80001C84
    // 0x80027B68: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_80001C84(rdram, ctx);
        goto after_5;
    // 0x80027B68: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_5:
    // 0x80027B6C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80027B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80027B74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80027B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80027B7C: jal         0x800248D4
    // 0x80027B80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800248D4(rdram, ctx);
        goto after_6;
    // 0x80027B80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80027B84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80027B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80027B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80027B90: jal         0x8001FF98
    // 0x80027B94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8001FF98(rdram, ctx);
        goto after_7;
    // 0x80027B94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x80027B98: lui         $a2, 0x8014
    ctx->r6 = S32(0X8014 << 16);
    // 0x80027B9C: lui         $a3, 0x6
    ctx->r7 = S32(0X6 << 16);
    // 0x80027BA0: ori         $a3, $a3, 0x1A80
    ctx->r7 = ctx->r7 | 0X1A80;
    // 0x80027BA4: addiu       $a2, $a2, 0x1D40
    ctx->r6 = ADD32(ctx->r6, 0X1D40);
    // 0x80027BA8: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    // 0x80027BAC: jal         0x800264F4
    // 0x80027BB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800264F4(rdram, ctx);
        goto after_8;
    // 0x80027BB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x80027BB4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80027BB8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80027BBC: addiu       $a0, $a0, -0x7818
    ctx->r4 = ADD32(ctx->r4, -0X7818);
    // 0x80027BC0: addiu       $v1, $v1, -0x7908
    ctx->r3 = ADD32(ctx->r3, -0X7908);
    // 0x80027BC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80027BC8:
    // 0x80027BC8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80027BCC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80027BD0: bne         $at, $zero, L_80027BC8
    if (ctx->r1 != 0) {
        // 0x80027BD4: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_80027BC8;
    }
    // 0x80027BD4: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x80027BD8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80027BDC: sw          $zero, -0x7928($at)
    MEM_W(-0X7928, ctx->r1) = 0;
    // 0x80027BE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80027BE4: sw          $zero, -0x7924($at)
    MEM_W(-0X7924, ctx->r1) = 0;
    // 0x80027BE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80027BEC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80027BF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80027BF4: addiu       $t9, $t9, -0x7928
    ctx->r25 = ADD32(ctx->r25, -0X7928);
    // 0x80027BF8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80027BFC: sw          $zero, -0x7920($at)
    MEM_W(-0X7920, ctx->r1) = 0;
    // 0x80027C00: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80027C04: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80027C08: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80027C0C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80027C10: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80027C14: jal         0x80027A68
    // 0x80027C18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80027A68(rdram, ctx);
        goto after_9;
    // 0x80027C18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80027C1C: jal         0x8001D494
    // 0x80027C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D494(rdram, ctx);
        goto after_10;
    // 0x80027C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x80027C24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80027C2C: sw          $zero, -0x4450($at)
    MEM_W(-0X4450, ctx->r1) = 0;
    // 0x80027C30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027C34: sw          $zero, -0x444C($at)
    MEM_W(-0X444C, ctx->r1) = 0;
    // 0x80027C38: jr          $ra
    // 0x80027C3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80027C3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80027C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027C40: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80027C44: lw          $v0, -0xCF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XCF0);
    // 0x80027C48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80027C4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027C50: sw          $t6, -0x444C($at)
    MEM_W(-0X444C, ctx->r1) = ctx->r14;
    // 0x80027C54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027C58: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80027C5C: beq         $at, $zero, L_80027C74
    if (ctx->r1 == 0) {
        // 0x80027C60: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80027C74;
    }
    // 0x80027C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027C64: jal         0x8001EAF0
    // 0x80027C68: nop

    func_8001EAF0(rdram, ctx);
        goto after_0;
    // 0x80027C68: nop

    after_0:
    // 0x80027C6C: b           L_80027C88
    // 0x80027C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80027C88;
    // 0x80027C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80027C74:
    // 0x80027C74: addiu       $a0, $v0, -0x4
    ctx->r4 = ADD32(ctx->r2, -0X4);
    // 0x80027C78: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x80027C7C: jal         0x8001EA50
    // 0x80027C80: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    func_8001EA50(rdram, ctx);
        goto after_1;
    // 0x80027C80: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
    // 0x80027C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80027C88:
    // 0x80027C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027C8C: jr          $ra
    // 0x80027C90: nop

    return;
    // 0x80027C90: nop

;}
RECOMP_FUNC void func_80027C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027C94: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80027C98: lw          $v0, -0xCF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XCF0);
    // 0x80027C9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80027CA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027CA4: sw          $t6, -0x4450($at)
    MEM_W(-0X4450, ctx->r1) = ctx->r14;
    // 0x80027CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027CAC: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80027CB0: beq         $at, $zero, L_80027CC8
    if (ctx->r1 == 0) {
        // 0x80027CB4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80027CC8;
    }
    // 0x80027CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027CB8: jal         0x800244E0
    // 0x80027CBC: nop

    func_800244E0(rdram, ctx);
        goto after_0;
    // 0x80027CBC: nop

    after_0:
    // 0x80027CC0: b           L_80027CE0
    // 0x80027CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80027CE0;
    // 0x80027CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80027CC8:
    // 0x80027CC8: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x80027CCC: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80027CD0: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x80027CD4: jal         0x80024460
    // 0x80027CD8: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    func_80024460(rdram, ctx);
        goto after_1;
    // 0x80027CD8: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
    // 0x80027CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80027CE0:
    // 0x80027CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027CE4: jr          $ra
    // 0x80027CE8: nop

    return;
    // 0x80027CE8: nop

;}
RECOMP_FUNC void func_80027CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027CEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80027CF0: addiu       $v0, $v0, -0x4448
    ctx->r2 = ADD32(ctx->r2, -0X4448);
    // 0x80027CF4: lb          $a1, 0x3($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3);
    // 0x80027CF8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80027CFC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80027D00: lw          $t6, -0x4450($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4450);
    // 0x80027D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80027D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027D0C: beq         $t6, $zero, L_80027D24
    if (ctx->r14 == 0) {
        // 0x80027D10: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80027D24;
    }
    // 0x80027D10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80027D14: jal         0x800244E0
    // 0x80027D18: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    func_800244E0(rdram, ctx);
        goto after_0;
    // 0x80027D18: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    after_0:
    // 0x80027D1C: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x80027D20: nop

L_80027D24:
    // 0x80027D24: sll         $a0, $a1, 24
    ctx->r4 = S32(ctx->r5 << 24);
    // 0x80027D28: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80027D2C: jal         0x80024280
    // 0x80027D30: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80024280(rdram, ctx);
        goto after_1;
    // 0x80027D30: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80027D34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027D38: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80027D3C: jal         0x800248A4
    // 0x80027D40: sw          $zero, -0x4450($at)
    MEM_W(-0X4450, ctx->r1) = 0;
    func_800248A4(rdram, ctx);
        goto after_2;
    // 0x80027D40: sw          $zero, -0x4450($at)
    MEM_W(-0X4450, ctx->r1) = 0;
    after_2:
    // 0x80027D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027D48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80027D4C: jr          $ra
    // 0x80027D50: nop

    return;
    // 0x80027D50: nop

;}
RECOMP_FUNC void func_80027D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027D5C: jal         0x800244E0
    // 0x80027D60: nop

    func_800244E0(rdram, ctx);
        goto after_0;
    // 0x80027D60: nop

    after_0:
    // 0x80027D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027D6C: jr          $ra
    // 0x80027D70: nop

    return;
    // 0x80027D70: nop

;}
RECOMP_FUNC void func_80027D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027D80: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80027D84: lui         $a2, 0x3B9A
    ctx->r6 = S32(0X3B9A << 16);
    // 0x80027D88: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80027D8C: addiu       $v0, $v0, -0x43D4
    ctx->r2 = ADD32(ctx->r2, -0X43D4);
    // 0x80027D90: ori         $a2, $a2, 0xCA00
    ctx->r6 = ctx->r6 | 0XCA00;
    // 0x80027D94: addiu       $a0, $a0, -0x4434
    ctx->r4 = ADD32(ctx->r4, -0X4434);
L_80027D98:
    // 0x80027D98: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80027D9C: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x80027DA0: nop

    // 0x80027DA4: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80027DA8: bgez        $v1, L_80027DB4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80027DAC: nop
    
            goto L_80027DB4;
    }
    // 0x80027DAC: nop

    // 0x80027DB0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_80027DB4:
    // 0x80027DB4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80027DB8: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80027DBC: bne         $at, $zero, L_80027D98
    if (ctx->r1 != 0) {
        // 0x80027DC0: sw          $v1, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r3;
            goto L_80027D98;
    }
    // 0x80027DC0: sw          $v1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r3;
    // 0x80027DC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80027DC8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80027DCC: lw          $a0, -0x4434($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4434);
    // 0x80027DD0: lw          $v0, -0x43D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X43D4);
    // 0x80027DD4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80027DD8: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x80027DDC: bgez        $a1, L_80027DE8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80027DE0: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80027DE8;
    }
    // 0x80027DE0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80027DE4: addu        $v1, $a1, $a2
    ctx->r3 = ADD32(ctx->r5, ctx->r6);
L_80027DE8:
    // 0x80027DE8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80027DEC: lw          $t9, -0x4430($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4430);
    // 0x80027DF0: lw          $t8, -0x43D0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X43D0);
    // 0x80027DF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80027DF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027DFC: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x80027E00: bgez        $v1, L_80027E0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80027E04: sw          $v0, -0x43D4($at)
        MEM_W(-0X43D4, ctx->r1) = ctx->r2;
            goto L_80027E0C;
    }
    // 0x80027E04: sw          $v0, -0x43D4($at)
    MEM_W(-0X43D4, ctx->r1) = ctx->r2;
    // 0x80027E08: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_80027E0C:
    // 0x80027E0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027E10: sw          $v1, -0x43D0($at)
    MEM_W(-0X43D0, ctx->r1) = ctx->r3;
    // 0x80027E14: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80027E18: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80027E1C: lw          $t7, -0x442C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X442C);
    // 0x80027E20: lw          $t6, -0x43CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X43CC);
    // 0x80027E24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80027E28: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80027E2C: bgez        $v1, L_80027E38
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80027E30: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_80027E38;
    }
    // 0x80027E30: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80027E34: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_80027E38:
    // 0x80027E38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80027E3C: addiu       $a1, $a1, -0x4358
    ctx->r5 = ADD32(ctx->r5, -0X4358);
    // 0x80027E40: sw          $v1, -0x43CC($at)
    MEM_W(-0X43CC, ctx->r1) = ctx->r3;
    // 0x80027E44: addiu       $a0, $a0, -0x43C8
    ctx->r4 = ADD32(ctx->r4, -0X43C8);
L_80027E48:
    // 0x80027E48: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80027E4C: lw          $t9, -0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, -0X60);
    // 0x80027E50: nop

    // 0x80027E54: subu        $v0, $t8, $t9
    ctx->r2 = SUB32(ctx->r24, ctx->r25);
    // 0x80027E58: bgez        $v0, L_80027E64
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80027E5C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80027E64;
    }
    // 0x80027E5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80027E60: addu        $v1, $v0, $a2
    ctx->r3 = ADD32(ctx->r2, ctx->r6);
L_80027E64:
    // 0x80027E64: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80027E68: lw          $t7, -0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X5C);
    // 0x80027E6C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80027E70: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80027E74: bgez        $v1, L_80027E80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80027E78: nop
    
            goto L_80027E80;
    }
    // 0x80027E78: nop

    // 0x80027E7C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_80027E80:
    // 0x80027E80: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80027E84: lw          $t9, -0x58($a0)
    ctx->r25 = MEM_W(ctx->r4, -0X58);
    // 0x80027E88: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80027E8C: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x80027E90: bgez        $v1, L_80027E9C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80027E94: nop
    
            goto L_80027E9C;
    }
    // 0x80027E94: nop

    // 0x80027E98: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_80027E9C:
    // 0x80027E9C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80027EA0: lw          $t7, -0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X54);
    // 0x80027EA4: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80027EA8: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80027EAC: bgez        $v1, L_80027EB8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80027EB0: nop
    
            goto L_80027EB8;
    }
    // 0x80027EB0: nop

    // 0x80027EB4: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_80027EB8:
    // 0x80027EB8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80027EBC: bne         $a0, $a1, L_80027E48
    if (ctx->r4 != ctx->r5) {
        // 0x80027EC0: sw          $v1, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r3;
            goto L_80027E48;
    }
    // 0x80027EC0: sw          $v1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r3;
    // 0x80027EC4: jr          $ra
    // 0x80027EC8: nop

    return;
    // 0x80027EC8: nop

;}
RECOMP_FUNC void func_80027ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027ECC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80027ED0: addiu       $a3, $a3, -0x4440
    ctx->r7 = ADD32(ctx->r7, -0X4440);
    // 0x80027ED4: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80027ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027EDC: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x80027EE0: slti        $at, $v1, 0x38
    ctx->r1 = SIGNED(ctx->r3) < 0X38 ? 1 : 0;
    // 0x80027EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027EE8: bne         $at, $zero, L_80027F00
    if (ctx->r1 != 0) {
        // 0x80027EEC: sw          $v1, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r3;
            goto L_80027F00;
    }
    // 0x80027EEC: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80027EF0: jal         0x80027D80
    // 0x80027EF4: nop

    func_80027D80(rdram, ctx);
        goto after_0;
    // 0x80027EF4: nop

    after_0:
    // 0x80027EF8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80027EFC: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_80027F00:
    // 0x80027F00: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80027F04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80027F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027F0C: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80027F10: lw          $v0, -0x4438($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4438);
    // 0x80027F14: jr          $ra
    // 0x80027F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80027F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80027F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027F1C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80027F20: addiu       $a3, $a3, -0x4440
    ctx->r7 = ADD32(ctx->r7, -0X4440);
    // 0x80027F24: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80027F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027F2C: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x80027F30: slti        $at, $v1, 0x38
    ctx->r1 = SIGNED(ctx->r3) < 0X38 ? 1 : 0;
    // 0x80027F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027F38: bne         $at, $zero, L_80027F50
    if (ctx->r1 != 0) {
        // 0x80027F3C: sw          $v1, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r3;
            goto L_80027F50;
    }
    // 0x80027F3C: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80027F40: jal         0x80027D80
    // 0x80027F44: nop

    func_80027D80(rdram, ctx);
        goto after_0;
    // 0x80027F44: nop

    after_0:
    // 0x80027F48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80027F4C: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_80027F50:
    // 0x80027F50: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80027F54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80027F58: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80027F5C: lw          $v0, -0x4438($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4438);
    // 0x80027F60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80027F64: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80027F68: lwc1        $f9, 0x55F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X55F0);
    // 0x80027F6C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80027F70: lwc1        $f8, 0x55F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X55F4);
    // 0x80027F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027F78: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80027F7C: jr          $ra
    // 0x80027F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80027F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80027F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027F84: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80027F88: addiu       $a3, $a3, -0x4438
    ctx->r7 = ADD32(ctx->r7, -0X4438);
    // 0x80027F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027F90: lui         $t0, 0x3B9A
    ctx->r8 = S32(0X3B9A << 16);
    // 0x80027F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027F98: sw          $a0, 0xDC($a3)
    MEM_W(0XDC, ctx->r7) = ctx->r4;
    // 0x80027F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80027FA0: ori         $t0, $t0, 0xCA00
    ctx->r8 = ctx->r8 | 0XCA00;
    // 0x80027FA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80027FA8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x80027FAC: addiu       $t2, $zero, 0x37
    ctx->r10 = ADD32(0, 0X37);
    // 0x80027FB0: addiu       $t1, $zero, 0x483
    ctx->r9 = ADD32(0, 0X483);
L_80027FB4:
    // 0x80027FB4: div         $zero, $a1, $t2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r10)));
    // 0x80027FB8: bne         $t2, $zero, L_80027FC4
    if (ctx->r10 != 0) {
        // 0x80027FBC: nop
    
            goto L_80027FC4;
    }
    // 0x80027FBC: nop

    // 0x80027FC0: break       7
    do_break(2147647424);
L_80027FC4:
    // 0x80027FC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027FC8: bne         $t2, $at, L_80027FDC
    if (ctx->r10 != ctx->r1) {
        // 0x80027FCC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80027FDC;
    }
    // 0x80027FCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80027FD0: bne         $a1, $at, L_80027FDC
    if (ctx->r5 != ctx->r1) {
        // 0x80027FD4: nop
    
            goto L_80027FDC;
    }
    // 0x80027FD4: nop

    // 0x80027FD8: break       6
    do_break(2147647448);
L_80027FDC:
    // 0x80027FDC: addiu       $a1, $a1, 0x15
    ctx->r5 = ADD32(ctx->r5, 0X15);
    // 0x80027FE0: mfhi        $v1
    ctx->r3 = hi;
    // 0x80027FE4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80027FE8: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80027FEC: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80027FF0: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80027FF4: bgez        $v0, L_80028000
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80027FF8: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80028000;
    }
    // 0x80027FF8: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80027FFC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
L_80028000:
    // 0x80028000: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80028004: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80028008: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8002800C: bne         $a1, $t1, L_80027FB4
    if (ctx->r5 != ctx->r9) {
        // 0x80028010: nop
    
            goto L_80027FB4;
    }
    // 0x80028010: nop

    // 0x80028014: jal         0x80027D80
    // 0x80028018: nop

    func_80027D80(rdram, ctx);
        goto after_0;
    // 0x80028018: nop

    after_0:
    // 0x8002801C: jal         0x80027D80
    // 0x80028020: nop

    func_80027D80(rdram, ctx);
        goto after_1;
    // 0x80028020: nop

    after_1:
    // 0x80028024: jal         0x80027D80
    // 0x80028028: nop

    func_80027D80(rdram, ctx);
        goto after_2;
    // 0x80028028: nop

    after_2:
    // 0x8002802C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028030: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80028034: sw          $t2, -0x4440($at)
    MEM_W(-0X4440, ctx->r1) = ctx->r10;
    // 0x80028038: jr          $ra
    // 0x8002803C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002803C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80028040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028040: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028044: lwc1        $f0, -0xC80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XC80);
    // 0x80028048: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8002804C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028050: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80028054: nop

    // 0x80028058: bc1f        L_80028064
    if (!c1cs) {
        // 0x8002805C: nop
    
            goto L_80028064;
    }
    // 0x8002805C: nop

    // 0x80028060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80028064:
    // 0x80028064: beq         $v0, $zero, L_80028084
    if (ctx->r2 == 0) {
        // 0x80028068: nop
    
            goto L_80028084;
    }
    // 0x80028068: nop

    // 0x8002806C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80028070: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80028074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028078: bc1f        L_80028084
    if (!c1cs) {
        // 0x8002807C: nop
    
            goto L_80028084;
    }
    // 0x8002807C: nop

    // 0x80028080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80028084:
    // 0x80028084: jr          $ra
    // 0x80028088: nop

    return;
    // 0x80028088: nop

;}
RECOMP_FUNC void func_8002808C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002808C: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80028090: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80028094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028098: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8002809C: nop

    // 0x800280A0: bc1f        L_800280AC
    if (!c1cs) {
        // 0x800280A4: nop
    
            goto L_800280AC;
    }
    // 0x800280A4: nop

    // 0x800280A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800280AC:
    // 0x800280AC: beq         $v0, $zero, L_800280CC
    if (ctx->r2 == 0) {
        // 0x800280B0: nop
    
            goto L_800280CC;
    }
    // 0x800280B0: nop

    // 0x800280B4: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x800280B8: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800280BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800280C0: bc1f        L_800280CC
    if (!c1cs) {
        // 0x800280C4: nop
    
            goto L_800280CC;
    }
    // 0x800280C4: nop

    // 0x800280C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800280CC:
    // 0x800280CC: jr          $ra
    // 0x800280D0: nop

    return;
    // 0x800280D0: nop

;}
RECOMP_FUNC void func_800280D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800280D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800280D8: lwc1        $f0, -0xC80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XC80);
    // 0x800280DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800280E0: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x800280E4: nop

    // 0x800280E8: bc1f        L_800280F4
    if (!c1cs) {
        // 0x800280EC: nop
    
            goto L_800280F4;
    }
    // 0x800280EC: nop

    // 0x800280F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800280F4:
    // 0x800280F4: beq         $v0, $zero, L_80028114
    if (ctx->r2 == 0) {
        // 0x800280F8: nop
    
            goto L_80028114;
    }
    // 0x800280F8: nop

    // 0x800280FC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80028100: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80028104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028108: bc1f        L_80028114
    if (!c1cs) {
        // 0x8002810C: nop
    
            goto L_80028114;
    }
    // 0x8002810C: nop

    // 0x80028110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80028114:
    // 0x80028114: jr          $ra
    // 0x80028118: nop

    return;
    // 0x80028118: nop

;}
RECOMP_FUNC void func_8002811C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002811C: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    // 0x80028120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028124: bc1f        L_80028130
    if (!c1cs) {
        // 0x80028128: nop
    
            goto L_80028130;
    }
    // 0x80028128: nop

    // 0x8002812C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80028130:
    // 0x80028130: beq         $v0, $zero, L_80028150
    if (ctx->r2 == 0) {
        // 0x80028134: nop
    
            goto L_80028150;
    }
    // 0x80028134: nop

    // 0x80028138: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x8002813C: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80028140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028144: bc1f        L_80028150
    if (!c1cs) {
        // 0x80028148: nop
    
            goto L_80028150;
    }
    // 0x80028148: nop

    // 0x8002814C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80028150:
    // 0x80028150: jr          $ra
    // 0x80028154: nop

    return;
    // 0x80028154: nop

;}
RECOMP_FUNC void func_80028158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028158: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002815C: lwc1        $f0, -0xC80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0XC80);
    // 0x80028160: nop

    // 0x80028164: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80028168: nop

    // 0x8002816C: bc1f        L_8002817C
    if (!c1cs) {
        // 0x80028170: nop
    
            goto L_8002817C;
    }
    // 0x80028170: nop

    // 0x80028174: jr          $ra
    // 0x80028178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80028178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002817C:
    // 0x8002817C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80028180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028184: bc1f        L_80028194
    if (!c1cs) {
        // 0x80028188: nop
    
            goto L_80028194;
    }
    // 0x80028188: nop

    // 0x8002818C: b           L_80028194
    // 0x80028190: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80028194;
    // 0x80028190: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80028194:
    // 0x80028194: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80028198: jr          $ra
    // 0x8002819C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002819C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800281A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800281A0: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x800281A4: nop

    // 0x800281A8: bc1f        L_800281B8
    if (!c1cs) {
        // 0x800281AC: nop
    
            goto L_800281B8;
    }
    // 0x800281AC: nop

    // 0x800281B0: jr          $ra
    // 0x800281B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800281B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800281B8:
    // 0x800281B8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x800281BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800281C0: bc1f        L_800281D0
    if (!c1cs) {
        // 0x800281C4: nop
    
            goto L_800281D0;
    }
    // 0x800281C4: nop

    // 0x800281C8: b           L_800281D0
    // 0x800281CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800281D0;
    // 0x800281CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800281D0:
    // 0x800281D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800281D4: jr          $ra
    // 0x800281D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800281D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800281DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800281DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800281E0: nop

    // 0x800281E4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800281E8: nop

    // 0x800281EC: bc1f        L_800281FC
    if (!c1cs) {
        // 0x800281F0: nop
    
            goto L_800281FC;
    }
    // 0x800281F0: nop

    // 0x800281F4: jr          $ra
    // 0x800281F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800281F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800281FC:
    // 0x800281FC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80028200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028204: bc1f        L_80028214
    if (!c1cs) {
        // 0x80028208: nop
    
            goto L_80028214;
    }
    // 0x80028208: nop

    // 0x8002820C: b           L_80028214
    // 0x80028210: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80028214;
    // 0x80028210: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80028214:
    // 0x80028214: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80028218: jr          $ra
    // 0x8002821C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002821C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80028220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028228: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002822C: addiu       $a1, $a1, -0xC70
    ctx->r5 = ADD32(ctx->r5, -0XC70);
    // 0x80028230: jal         0x80073EF0
    // 0x80028234: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80028234: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80028238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002823C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028240: jr          $ra
    // 0x80028244: nop

    return;
    // 0x80028244: nop

;}
RECOMP_FUNC void func_80028248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028248: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002824C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80028250: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x80028254: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80028258: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8002825C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80028260: bc1f        L_80028274
    if (!c1cs) {
        // 0x80028264: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80028274;
    }
    // 0x80028264: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80028268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002826C: b           L_80028298
    // 0x80028270: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_80028298;
    // 0x80028270: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_80028274:
    // 0x80028274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80028278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002827C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80028280: nop

    // 0x80028284: bc1f        L_80028298
    if (!c1cs) {
        // 0x80028288: nop
    
            goto L_80028298;
    }
    // 0x80028288: nop

    // 0x8002828C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80028290: b           L_80028298
    // 0x80028294: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_80028298;
    // 0x80028294: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_80028298:
    // 0x80028298: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8002829C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x800282A0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800282A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800282A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800282AC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x800282B0: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800282B4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800282B8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800282BC: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x800282C0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800282C4: div.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x800282C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800282CC: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x800282D0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800282D4: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800282D8: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x800282DC: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x800282E0: mflo        $t0
    ctx->r8 = lo;
    // 0x800282E4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800282E8: addiu       $t1, $a0, 0x1
    ctx->r9 = ADD32(ctx->r4, 0X1);
    // 0x800282EC: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800282F0: addiu       $a2, $v1, -0x2
    ctx->r6 = ADD32(ctx->r3, -0X2);
    // 0x800282F4: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800282F8: addiu       $t3, $a0, -0x1
    ctx->r11 = ADD32(ctx->r4, -0X1);
    // 0x800282FC: addiu       $a3, $v1, -0x3
    ctx->r7 = ADD32(ctx->r3, -0X3);
    // 0x80028300: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80028304: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80028308: addiu       $t5, $a0, -0x3
    ctx->r13 = ADD32(ctx->r4, -0X3);
    // 0x8002830C: addiu       $t7, $a0, -0x5
    ctx->r15 = ADD32(ctx->r4, -0X5);
    // 0x80028310: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80028314: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028318: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8002831C: mflo        $t2
    ctx->r10 = lo;
    // 0x80028320: mul.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80028324: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80028328: multu       $a2, $a2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002832C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028330: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80028334: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80028338: mflo        $t4
    ctx->r12 = lo;
    // 0x8002833C: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80028340: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80028344: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80028348: multu       $a3, $a3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002834C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80028350: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80028354: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80028358: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8002835C: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80028360: mflo        $t6
    ctx->r14 = lo;
    // 0x80028364: div.s       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80028368: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002836C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80028370: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80028374: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80028378: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002837C: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80028380: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x80028384: nop

    // 0x80028388: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8002838C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028390: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80028394: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80028398: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002839C: mul.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800283A0: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x800283A4: blez        $v0, L_800283D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800283A8: div.s       $f2, $f18, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
            goto L_800283D0;
    }
    // 0x800283A8: div.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800283AC: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x800283B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800283B4: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x800283B8: lwc1        $f7, 0x5600($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5600);
    // 0x800283BC: lwc1        $f6, 0x5604($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5604);
    // 0x800283C0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800283C4: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x800283C8: jr          $ra
    // 0x800283CC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    return;
    // 0x800283CC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
L_800283D0:
    // 0x800283D0: bgez        $v0, L_800283FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800283D4: nop
    
            goto L_800283FC;
    }
    // 0x800283D4: nop

    // 0x800283D8: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x800283DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800283E0: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x800283E4: lwc1        $f5, 0x5608($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5608);
    // 0x800283E8: lwc1        $f4, 0x560C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X560C);
    // 0x800283EC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800283F0: sub.d       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f4.d - ctx->f6.d;
    // 0x800283F4: jr          $ra
    // 0x800283F8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x800283F8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_800283FC:
    // 0x800283FC: add.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x80028400: nop

    // 0x80028404: div.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f18.fl);
    // 0x80028408: jr          $ra
    // 0x8002840C: nop

    return;
    // 0x8002840C: nop

;}
RECOMP_FUNC void func_80028410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028410: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80028414: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028418: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002841C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028424: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x80028428: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x8002842C: jal         0x8007A500
    // 0x80028430: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80028430: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80028434: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80028438: jal         0x80028248
    // 0x8002843C: div.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    func_80028248(rdram, ctx);
        goto after_1;
    // 0x8002843C: div.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    after_1:
    // 0x80028440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028448: jr          $ra
    // 0x8002844C: nop

    return;
    // 0x8002844C: nop

;}
RECOMP_FUNC void func_80028450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028450: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80028454: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80028458: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8002845C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80028460: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80028464: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80028468: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8002846C: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80028470: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80028474: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80028478: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8002847C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80028480: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028484: jr          $ra
    // 0x80028488: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    return;
    // 0x80028488: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
;}
RECOMP_FUNC void func_8002848C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002848C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028494: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80028498: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8002849C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800284A0: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800284A4: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800284A8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800284AC: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800284B0: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800284B4: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800284B8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800284BC: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800284C0: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800284C4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800284C8: jal         0x8007A500
    // 0x800284CC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x800284CC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x800284D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800284D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800284D8: jr          $ra
    // 0x800284DC: nop

    return;
    // 0x800284DC: nop

;}
