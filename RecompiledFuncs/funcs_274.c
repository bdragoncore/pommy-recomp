#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_F480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F488: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F48C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F490: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F494: bne         $t6, $zero, L_4500F4B4
    if (ctx->r14 != 0) {
        // 0x4500F498: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F4B4;
    }
    // 0x4500F498: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F49C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F4A0: jal         0x45007348
    // 0x4500F4A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_7348(rdram, ctx);
        goto after_0;
    // 0x4500F4A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F4A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F4AC: jal         0x45000F80
    // 0x4500F4B0: addiu       $a1, $zero, 0x18A
    ctx->r5 = ADD32(0, 0X18A);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x4500F4B0: addiu       $a1, $zero, 0x18A
    ctx->r5 = ADD32(0, 0X18A);
    after_1:
L_4500F4B4:
    // 0x4500F4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F4BC: jr          $ra
    // 0x4500F4C0: nop

    return;
    // 0x4500F4C0: nop

;}
RECOMP_FUNC void ovl_mobj_main_F4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F4C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F4CC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F4D0: addiu       $a1, $zero, 0x188
    ctx->r5 = ADD32(0, 0X188);
    // 0x4500F4D4: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F4D8: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F4DC: bne         $t9, $zero, L_4500F500
    if (ctx->r25 != 0) {
        // 0x4500F4E0: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F500;
    }
    // 0x4500F4E0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F4E4: jal         0x45000F80
    // 0x4500F4E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x4500F4E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F4EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F4F0: jal         0x45007394
    // 0x4500F4F4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_7394(rdram, ctx);
        goto after_1;
    // 0x4500F4F4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F4F8: b           L_4500F50C
    // 0x4500F4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F50C;
    // 0x4500F4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F500:
    // 0x4500F500: jal         0x450073D8
    // 0x4500F504: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_73D8(rdram, ctx);
        goto after_2;
    // 0x4500F504: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x4500F508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F50C:
    // 0x4500F50C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F510: jr          $ra
    // 0x4500F514: nop

    return;
    // 0x4500F514: nop

;}
RECOMP_FUNC void ovl_mobj_main_F518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F520: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F524: nop

    // 0x4500F528: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x4500F52C: bne         $t6, $zero, L_4500F558
    if (ctx->r14 != 0) {
        // 0x4500F530: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F558;
    }
    // 0x4500F530: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F534: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F538: bne         $t9, $zero, L_4500F550
    if (ctx->r25 != 0) {
        // 0x4500F53C: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F550;
    }
    // 0x4500F53C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F540: jal         0x45007704
    // 0x4500F544: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_7704(rdram, ctx);
        goto after_0;
    // 0x4500F544: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F548: b           L_4500F55C
    // 0x4500F54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F55C;
    // 0x4500F54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F550:
    // 0x4500F550: jal         0x4500775C
    // 0x4500F554: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_775C(rdram, ctx);
        goto after_1;
    // 0x4500F554: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
L_4500F558:
    // 0x4500F558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F55C:
    // 0x4500F55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F560: jr          $ra
    // 0x4500F564: nop

    return;
    // 0x4500F564: nop

;}
RECOMP_FUNC void ovl_mobj_main_F568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F568: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F56C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500F570: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500F574: beq         $t6, $zero, L_4500F58C
    if (ctx->r14 == 0) {
        // 0x4500F578: ori         $t8, $v0, 0x10
        ctx->r24 = ctx->r2 | 0X10;
            goto L_4500F58C;
    }
    // 0x4500F578: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x4500F57C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x4500F580: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x4500F584: jr          $ra
    // 0x4500F588: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x4500F588: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_4500F58C:
    // 0x4500F58C: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    // 0x4500F590: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x4500F594: sw          $t0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r8;
    // 0x4500F598: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x4500F59C: jr          $ra
    // 0x4500F5A0: nop

    return;
    // 0x4500F5A0: nop

;}
RECOMP_FUNC void ovl_mobj_main_F5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F5A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F5A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F5AC: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F5B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F5B4: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F5B8: bne         $t6, $zero, L_4500F5D0
    if (ctx->r14 != 0) {
        // 0x4500F5BC: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F5D0;
    }
    // 0x4500F5BC: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F5C0: jal         0x45007DB4
    // 0x4500F5C4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_7DB4(rdram, ctx);
        goto after_0;
    // 0x4500F5C4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x4500F5C8: b           L_4500F5DC
    // 0x4500F5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F5DC;
    // 0x4500F5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F5D0:
    // 0x4500F5D0: jal         0x45007DB4
    // 0x4500F5D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_7DB4(rdram, ctx);
        goto after_1;
    // 0x4500F5D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x4500F5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F5DC:
    // 0x4500F5DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F5E0: jr          $ra
    // 0x4500F5E4: nop

    return;
    // 0x4500F5E4: nop

;}
RECOMP_FUNC void ovl_mobj_main_F5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F5EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F5F0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F5F4: addiu       $a1, $zero, 0x184
    ctx->r5 = ADD32(0, 0X184);
    // 0x4500F5F8: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F5FC: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F600: bne         $t9, $zero, L_4500F628
    if (ctx->r25 != 0) {
        // 0x4500F604: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F628;
    }
    // 0x4500F604: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F608: addiu       $a1, $zero, 0x181
    ctx->r5 = ADD32(0, 0X181);
    // 0x4500F60C: jal         0x45000F80
    // 0x4500F610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x4500F610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F618: jal         0x45007EB8
    // 0x4500F61C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_7EB8(rdram, ctx);
        goto after_1;
    // 0x4500F61C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F620: b           L_4500F640
    // 0x4500F624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F640;
    // 0x4500F624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F628:
    // 0x4500F628: jal         0x45000FA0
    // 0x4500F62C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_2;
    // 0x4500F62C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x4500F630: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F634: jal         0x45007F0C
    // 0x4500F638: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_7F0C(rdram, ctx);
        goto after_3;
    // 0x4500F638: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x4500F63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F640:
    // 0x4500F640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F644: jr          $ra
    // 0x4500F648: nop

    return;
    // 0x4500F648: nop

;}
RECOMP_FUNC void ovl_mobj_main_F64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F64C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F654: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F658: nop

    // 0x4500F65C: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500F660: bne         $t6, $zero, L_4500F6CC
    if (ctx->r14 != 0) {
        // 0x4500F664: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F6CC;
    }
    // 0x4500F664: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F668: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x4500F66C: addiu       $at, $zero, 0xC1
    ctx->r1 = ADD32(0, 0XC1);
    // 0x4500F670: bne         $t8, $at, L_4500F688
    if (ctx->r24 != ctx->r1) {
        // 0x4500F674: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F688;
    }
    // 0x4500F674: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F678: jal         0x4500805C
    // 0x4500F67C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_805C(rdram, ctx);
        goto after_0;
    // 0x4500F67C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F680: b           L_4500F6D0
    // 0x4500F684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F6D0;
    // 0x4500F684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F688:
    // 0x4500F688: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
    // 0x4500F68C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F690: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x4500F694: beq         $t0, $zero, L_4500F6B4
    if (ctx->r8 == 0) {
        // 0x4500F698: nop
    
            goto L_4500F6B4;
    }
    // 0x4500F698: nop

    // 0x4500F69C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F6A0: jal         0x45008094
    // 0x4500F6A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_8094(rdram, ctx);
        goto after_1;
    // 0x4500F6A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4500F6A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F6AC: b           L_4500F6C4
    // 0x4500F6B0: nop

        goto L_4500F6C4;
    // 0x4500F6B0: nop

L_4500F6B4:
    // 0x4500F6B4: jal         0x4500805C
    // 0x4500F6B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_805C(rdram, ctx);
        goto after_2;
    // 0x4500F6B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x4500F6BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F6C0: nop

L_4500F6C4:
    // 0x4500F6C4: jal         0x45000F80
    // 0x4500F6C8: addiu       $a1, $zero, 0x12F
    ctx->r5 = ADD32(0, 0X12F);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_3;
    // 0x4500F6C8: addiu       $a1, $zero, 0x12F
    ctx->r5 = ADD32(0, 0X12F);
    after_3:
L_4500F6CC:
    // 0x4500F6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F6D0:
    // 0x4500F6D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F6D4: jr          $ra
    // 0x4500F6D8: nop

    return;
    // 0x4500F6D8: nop

;}
RECOMP_FUNC void ovl_mobj_main_F6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F6DC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F6E0: nop

    // 0x4500F6E4: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F6E8: jr          $ra
    // 0x4500F6EC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x4500F6EC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_F6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F6F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F6F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F6F8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F6FC: nop

    // 0x4500F700: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F704: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F708: bne         $t9, $zero, L_4500F720
    if (ctx->r25 != 0) {
        // 0x4500F70C: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F720;
    }
    // 0x4500F70C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F710: jal         0x450086E8
    // 0x4500F714: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_86E8(rdram, ctx);
        goto after_0;
    // 0x4500F714: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F718: b           L_4500F72C
    // 0x4500F71C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F72C;
    // 0x4500F71C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F720:
    // 0x4500F720: jal         0x45008720
    // 0x4500F724: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_8720(rdram, ctx);
        goto after_1;
    // 0x4500F724: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F72C:
    // 0x4500F72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F730: jr          $ra
    // 0x4500F734: nop

    return;
    // 0x4500F734: nop

;}
RECOMP_FUNC void ovl_mobj_main_F738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F738: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F73C: nop

    // 0x4500F740: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F744: bne         $t6, $zero, L_4500F750
    if (ctx->r14 != 0) {
        // 0x4500F748: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F750;
    }
    // 0x4500F748: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F74C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_4500F750:
    // 0x4500F750: jr          $ra
    // 0x4500F754: nop

    return;
    // 0x4500F754: nop

;}
RECOMP_FUNC void ovl_mobj_main_F758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F75C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F760: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F764: nop

    // 0x4500F768: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F76C: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F770: bne         $t9, $zero, L_4500F788
    if (ctx->r25 != 0) {
        // 0x4500F774: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F788;
    }
    // 0x4500F774: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F778: jal         0x45008AE0
    // 0x4500F77C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_8AE0(rdram, ctx);
        goto after_0;
    // 0x4500F77C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F780: b           L_4500F794
    // 0x4500F784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F794;
    // 0x4500F784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F788:
    // 0x4500F788: jal         0x45008B40
    // 0x4500F78C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_8B40(rdram, ctx);
        goto after_1;
    // 0x4500F78C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F794:
    // 0x4500F794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F798: jr          $ra
    // 0x4500F79C: nop

    return;
    // 0x4500F79C: nop

;}
RECOMP_FUNC void ovl_mobj_main_F7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F7A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F7A8: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F7AC: nop

    // 0x4500F7B0: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500F7B4: bne         $t6, $zero, L_4500F7D0
    if (ctx->r14 != 0) {
        // 0x4500F7B8: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F7D0;
    }
    // 0x4500F7B8: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F7BC: andi        $t9, $t7, 0x8000
    ctx->r25 = ctx->r15 & 0X8000;
    // 0x4500F7C0: bne         $t9, $zero, L_4500F7D0
    if (ctx->r25 != 0) {
        // 0x4500F7C4: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F7D0;
    }
    // 0x4500F7C4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F7C8: jal         0x45009050
    // 0x4500F7CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_9050(rdram, ctx);
        goto after_0;
    // 0x4500F7CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
L_4500F7D0:
    // 0x4500F7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F7D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F7D8: jr          $ra
    // 0x4500F7DC: nop

    return;
    // 0x4500F7DC: nop

;}
RECOMP_FUNC void ovl_mobj_main_F7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F7E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F7E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F7E8: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F7EC: nop

    // 0x4500F7F0: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F7F4: bne         $t6, $zero, L_4500F820
    if (ctx->r14 != 0) {
        // 0x4500F7F8: andi        $t7, $v0, 0x10
        ctx->r15 = ctx->r2 & 0X10;
            goto L_4500F820;
    }
    // 0x4500F7F8: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x4500F7FC: bne         $t7, $zero, L_4500F820
    if (ctx->r15 != 0) {
        // 0x4500F800: ori         $t8, $v0, 0x30
        ctx->r24 = ctx->r2 | 0X30;
            goto L_4500F820;
    }
    // 0x4500F800: ori         $t8, $v0, 0x30
    ctx->r24 = ctx->r2 | 0X30;
    // 0x4500F804: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    // 0x4500F808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4500F80C: jal         0x45009C80
    // 0x4500F810: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_9C80(rdram, ctx);
        goto after_0;
    // 0x4500F810: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F814: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F818: jal         0x45000F80
    // 0x4500F81C: addiu       $a1, $zero, 0x1BA
    ctx->r5 = ADD32(0, 0X1BA);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x4500F81C: addiu       $a1, $zero, 0x1BA
    ctx->r5 = ADD32(0, 0X1BA);
    after_1:
L_4500F820:
    // 0x4500F820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F828: jr          $ra
    // 0x4500F82C: nop

    return;
    // 0x4500F82C: nop

;}
RECOMP_FUNC void ovl_mobj_main_F830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F838: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F83C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F840: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F844: bne         $t6, $zero, L_4500F854
    if (ctx->r14 != 0) {
        // 0x4500F848: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F854;
    }
    // 0x4500F848: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F84C: jal         0x4500937C
    // 0x4500F850: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_937C(rdram, ctx);
        goto after_0;
    // 0x4500F850: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
L_4500F854:
    // 0x4500F854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F85C: jr          $ra
    // 0x4500F860: nop

    return;
    // 0x4500F860: nop

;}
RECOMP_FUNC void ovl_mobj_main_F864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F864: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F868: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x4500F86C: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500F870: bne         $t6, $zero, L_4500F884
    if (ctx->r14 != 0) {
        // 0x4500F874: and         $t8, $v0, $at
        ctx->r24 = ctx->r2 & ctx->r1;
            goto L_4500F884;
    }
    // 0x4500F874: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x4500F878: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F87C: jr          $ra
    // 0x4500F880: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x4500F880: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_4500F884:
    // 0x4500F884: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    // 0x4500F888: jr          $ra
    // 0x4500F88C: nop

    return;
    // 0x4500F88C: nop

;}
RECOMP_FUNC void ovl_mobj_main_F890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F898: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F89C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F8A0: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F8A4: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F8A8: beq         $t9, $zero, L_4500F8C0
    if (ctx->r25 == 0) {
        // 0x4500F8AC: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F8C0;
    }
    // 0x4500F8AC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F8B0: jal         0x450098AC
    // 0x4500F8B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_98AC(rdram, ctx);
        goto after_0;
    // 0x4500F8B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F8B8: b           L_4500F8D8
    // 0x4500F8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F8D8;
    // 0x4500F8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F8C0:
    // 0x4500F8C0: jal         0x45009900
    // 0x4500F8C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_9900(rdram, ctx);
        goto after_1;
    // 0x4500F8C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4500F8C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F8CC: jal         0x45000F80
    // 0x4500F8D0: addiu       $a1, $zero, 0x125
    ctx->r5 = ADD32(0, 0X125);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x4500F8D0: addiu       $a1, $zero, 0x125
    ctx->r5 = ADD32(0, 0X125);
    after_2:
    // 0x4500F8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F8D8:
    // 0x4500F8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F8DC: jr          $ra
    // 0x4500F8E0: nop

    return;
    // 0x4500F8E0: nop

;}
RECOMP_FUNC void ovl_mobj_main_F8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F8E4: jr          $ra
    // 0x4500F8E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4500F8E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_demo_guide_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x1A74
    ctx->r2 = ADD32(ctx->r2, 0X1A74);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x1A74
    ctx->r2 = ADD32(ctx->r2, 0X1A74);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_demo_guide_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_guide_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_demo_guide_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000002C: jr          $t1
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_demo_guide_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000038: jr          $t1
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_demo_guide_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000044: jr          $t1
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_demo_guide_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000050: jr          $t1
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_demo_guide_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000005C: jr          $t1
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_demo_guide_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000068: jr          $t1
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_demo_guide_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000074: jr          $t1
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_demo_guide_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000080: jr          $t1
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_demo_guide_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000008C: jr          $t1
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_demo_guide_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000098: jr          $t1
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_demo_guide_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000A4: jr          $t1
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_demo_guide_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000B0: jr          $t1
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_demo_guide_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000BC: jr          $t1
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_demo_guide_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000C8: jr          $t1
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_demo_guide_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000D4: jr          $t1
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_demo_guide_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000E0: jr          $t1
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_demo_guide_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000EC: jr          $t1
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_demo_guide_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000F8: jr          $t1
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_demo_guide_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000104: jr          $t1
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_demo_guide_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000110: jr          $t1
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_demo_guide_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000011C: jr          $t1
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_demo_guide_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000128: jr          $t1
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_demo_guide_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000134: jr          $t1
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_demo_guide_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000140: jr          $t1
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_demo_guide_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000014C: jr          $t1
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_demo_guide_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000158: jr          $t1
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_demo_guide_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000164: jr          $t1
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_demo_guide_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000170: jr          $t1
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_demo_guide_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000017C: jr          $t1
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_demo_guide_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000188: jr          $t1
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
