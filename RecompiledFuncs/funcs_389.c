#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world4_6054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000605C: jal         0x60000BB0
    // 0x60006060: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006060: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x60006064: bne         $v0, $zero, L_600060C0
    if (ctx->r2 != 0) {
        // 0x60006068: nop
    
            goto L_600060C0;
    }
    // 0x60006068: nop

    // 0x6000606C: jal         0x60000B98
    // 0x60006070: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_1;
    // 0x60006070: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x60006074: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60006078: jal         0x60000E68
    // 0x6000607C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_2;
    // 0x6000607C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60006080: jal         0x60005FEC
    // 0x60006084: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_5FEC(rdram, ctx);
        goto after_3;
    // 0x60006084: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60006088: jal         0x60000BB0
    // 0x6000608C: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_4;
    // 0x6000608C: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_4:
    // 0x60006090: bne         $v0, $zero, L_600060D8
    if (ctx->r2 != 0) {
        // 0x60006094: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600060D8;
    }
    // 0x60006094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006098: jal         0x60000B98
    // 0x6000609C: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_5;
    // 0x6000609C: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_5:
    // 0x600060A0: jal         0x60000E44
    // 0x600060A4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_6;
    // 0x600060A4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_6:
    // 0x600060A8: jal         0x60000E44
    // 0x600060AC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_7;
    // 0x600060AC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x600060B0: jal         0x60000EEC
    // 0x600060B4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_8;
    // 0x600060B4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_8:
    // 0x600060B8: b           L_600060D8
    // 0x600060BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600060D8;
    // 0x600060BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600060C0:
    // 0x600060C0: jal         0x60000BA4
    // 0x600060C4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_9;
    // 0x600060C4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_9:
    // 0x600060C8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x600060CC: jal         0x60000E68
    // 0x600060D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_10;
    // 0x600060D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x600060D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600060D8:
    // 0x600060D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600060DC: jr          $ra
    // 0x600060E0: nop

    return;
    // 0x600060E0: nop

;}
RECOMP_FUNC void ovl_stage_world4_60E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600060E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600060E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600060EC: jal         0x60000BB0
    // 0x600060F0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600060F0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_0:
    // 0x600060F4: bne         $v0, $zero, L_60006120
    if (ctx->r2 != 0) {
        // 0x600060F8: nop
    
            goto L_60006120;
    }
    // 0x600060F8: nop

    // 0x600060FC: jal         0x60000B98
    // 0x60006100: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_1;
    // 0x60006100: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_1:
    // 0x60006104: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60006108: jal         0x60000E68
    // 0x6000610C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_2;
    // 0x6000610C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60006110: jal         0x60005FEC
    // 0x60006114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_5FEC(rdram, ctx);
        goto after_3;
    // 0x60006114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60006118: b           L_60006138
    // 0x6000611C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006138;
    // 0x6000611C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006120:
    // 0x60006120: jal         0x60000BA4
    // 0x60006124: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_4;
    // 0x60006124: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_4:
    // 0x60006128: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x6000612C: jal         0x60000E68
    // 0x60006130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_5;
    // 0x60006130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x60006134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006138:
    // 0x60006138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000613C: jr          $ra
    // 0x60006140: nop

    return;
    // 0x60006140: nop

;}
RECOMP_FUNC void ovl_stage_world4_6144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000614C: jal         0x600009C4
    // 0x60006150: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_0;
    // 0x60006150: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60006154: jal         0x60000BA4
    // 0x60006158: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_1;
    // 0x60006158: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_1:
    // 0x6000615C: jal         0x600009AC
    // 0x60006160: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_2;
    // 0x60006160: nop

    after_2:
    // 0x60006164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000616C: jr          $ra
    // 0x60006170: nop

    return;
    // 0x60006170: nop

;}
RECOMP_FUNC void ovl_stage_world4_6174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000617C: jal         0x60000BB0
    // 0x60006180: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006180: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_0:
    // 0x60006184: bne         $v0, $zero, L_6000623C
    if (ctx->r2 != 0) {
        // 0x60006188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000623C;
    }
    // 0x60006188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000618C: jal         0x60000BB0
    // 0x60006190: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006190: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_1:
    // 0x60006194: beq         $v0, $zero, L_6000623C
    if (ctx->r2 == 0) {
        // 0x60006198: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000623C;
    }
    // 0x60006198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000619C: jal         0x60000BB0
    // 0x600061A0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600061A0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x600061A4: bne         $v0, $zero, L_6000623C
    if (ctx->r2 != 0) {
        // 0x600061A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000623C;
    }
    // 0x600061A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600061AC: jal         0x60000BB0
    // 0x600061B0: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x600061B0: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_3:
    // 0x600061B4: bne         $v0, $zero, L_600061F8
    if (ctx->r2 != 0) {
        // 0x600061B8: nop
    
            goto L_600061F8;
    }
    // 0x600061B8: nop

    // 0x600061BC: jal         0x60000B98
    // 0x600061C0: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x600061C0: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_4:
    // 0x600061C4: jal         0x60000B98
    // 0x600061C8: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_5;
    // 0x600061C8: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_5:
    // 0x600061CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600061D0: jal         0x60000E68
    // 0x600061D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_6;
    // 0x600061D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x600061D8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600061DC: addiu       $a0, $a0, 0x6144
    ctx->r4 = ADD32(ctx->r4, 0X6144);
    // 0x600061E0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600061E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600061E8: jal         0x60000994
    // 0x600061EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x600061EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x600061F0: b           L_6000623C
    // 0x600061F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000623C;
    // 0x600061F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600061F8:
    // 0x600061F8: jal         0x60000DE4
    // 0x600061FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_8;
    // 0x600061FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x60006200: jal         0x60000CC4
    // 0x60006204: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_9;
    // 0x60006204: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x60006208: jal         0x60000A6C
    // 0x6000620C: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_10;
    // 0x6000620C: nop

    after_10:
    // 0x60006210: jal         0x60000B98
    // 0x60006214: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_11;
    // 0x60006214: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_11:
    // 0x60006218: jal         0x60001210
    // 0x6000621C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world4_1210(rdram, ctx);
        goto after_12;
    // 0x6000621C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
    // 0x60006220: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006224: addiu       $a0, $a0, 0x5BB4
    ctx->r4 = ADD32(ctx->r4, 0X5BB4);
    // 0x60006228: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000622C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006230: jal         0x60000994
    // 0x60006234: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_13;
    // 0x60006234: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x60006238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000623C:
    // 0x6000623C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006240: jr          $ra
    // 0x60006244: nop

    return;
    // 0x60006244: nop

;}
RECOMP_FUNC void ovl_stage_world4_6248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000624C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60006254: jal         0x60000244
    // 0x60006258: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x60006258: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    after_0:
    // 0x6000625C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60006260: jal         0x60000EEC
    // 0x60006264: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x60006264: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    after_1:
    // 0x60006268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000626C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006270: jr          $ra
    // 0x60006274: nop

    return;
    // 0x60006274: nop

;}
RECOMP_FUNC void ovl_stage_world4_6278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000627C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006280: jal         0x60000A60
    // 0x60006284: addiu       $a0, $zero, 0xA6F
    ctx->r4 = ADD32(0, 0XA6F);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60006284: addiu       $a0, $zero, 0xA6F
    ctx->r4 = ADD32(0, 0XA6F);
    after_0:
    // 0x60006288: jal         0x600009C4
    // 0x6000628C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_1;
    // 0x6000628C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_1:
    // 0x60006290: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60006294: jal         0x60000E80
    // 0x60006298: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x60006298: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x6000629C: jal         0x6000357C
    // 0x600062A0: nop

    ovl_stage_world4_357C(rdram, ctx);
        goto after_3;
    // 0x600062A0: nop

    after_3:
    // 0x600062A4: jal         0x600009AC
    // 0x600062A8: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_4;
    // 0x600062A8: nop

    after_4:
    // 0x600062AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600062B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600062B4: jr          $ra
    // 0x600062B8: nop

    return;
    // 0x600062B8: nop

;}
RECOMP_FUNC void ovl_stage_world4_62BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600062BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600062C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600062C4: jal         0x60000BB0
    // 0x600062C8: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600062C8: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_0:
    // 0x600062CC: beq         $v0, $zero, L_60006328
    if (ctx->r2 == 0) {
        // 0x600062D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006328;
    }
    // 0x600062D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600062D4: jal         0x60000BB0
    // 0x600062D8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x600062D8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_1:
    // 0x600062DC: bne         $v0, $zero, L_60006328
    if (ctx->r2 != 0) {
        // 0x600062E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006328;
    }
    // 0x600062E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600062E4: jal         0x60000DE4
    // 0x600062E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_2;
    // 0x600062E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x600062EC: jal         0x60000CC4
    // 0x600062F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_3;
    // 0x600062F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x600062F4: jal         0x60000A6C
    // 0x600062F8: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_4;
    // 0x600062F8: nop

    after_4:
    // 0x600062FC: jal         0x60000A90
    // 0x60006300: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_5;
    // 0x60006300: nop

    after_5:
    // 0x60006304: jal         0x60000B98
    // 0x60006308: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x60006308: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_6:
    // 0x6000630C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006310: addiu       $a0, $a0, 0x6278
    ctx->r4 = ADD32(ctx->r4, 0X6278);
    // 0x60006314: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000631C: jal         0x60000994
    // 0x60006320: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x60006320: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60006324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006328:
    // 0x60006328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000632C: jr          $ra
    // 0x60006330: nop

    return;
    // 0x60006330: nop

;}
RECOMP_FUNC void ovl_stage_world4_6334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000633C: jal         0x60000A60
    // 0x60006340: addiu       $a0, $zero, 0xA70
    ctx->r4 = ADD32(0, 0XA70);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60006340: addiu       $a0, $zero, 0xA70
    ctx->r4 = ADD32(0, 0XA70);
    after_0:
    // 0x60006344: jal         0x600009C4
    // 0x60006348: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_1;
    // 0x60006348: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_1:
    // 0x6000634C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x60006350: jal         0x60000E80
    // 0x60006354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x60006354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60006358: jal         0x6000357C
    // 0x6000635C: nop

    ovl_stage_world4_357C(rdram, ctx);
        goto after_3;
    // 0x6000635C: nop

    after_3:
    // 0x60006360: jal         0x600009AC
    // 0x60006364: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_4;
    // 0x60006364: nop

    after_4:
    // 0x60006368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000636C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006370: jr          $ra
    // 0x60006374: nop

    return;
    // 0x60006374: nop

;}
RECOMP_FUNC void ovl_stage_world4_6378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000637C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006380: jal         0x60000BB0
    // 0x60006384: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006384: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_0:
    // 0x60006388: beq         $v0, $zero, L_600063E4
    if (ctx->r2 == 0) {
        // 0x6000638C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600063E4;
    }
    // 0x6000638C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006390: jal         0x60000BB0
    // 0x60006394: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006394: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_1:
    // 0x60006398: bne         $v0, $zero, L_600063E4
    if (ctx->r2 != 0) {
        // 0x6000639C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600063E4;
    }
    // 0x6000639C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600063A0: jal         0x60000DE4
    // 0x600063A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_2;
    // 0x600063A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x600063A8: jal         0x60000CC4
    // 0x600063AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_3;
    // 0x600063AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x600063B0: jal         0x60000A6C
    // 0x600063B4: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_4;
    // 0x600063B4: nop

    after_4:
    // 0x600063B8: jal         0x60000A90
    // 0x600063BC: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_5;
    // 0x600063BC: nop

    after_5:
    // 0x600063C0: jal         0x60000B98
    // 0x600063C4: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x600063C4: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_6:
    // 0x600063C8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600063CC: addiu       $a0, $a0, 0x6334
    ctx->r4 = ADD32(ctx->r4, 0X6334);
    // 0x600063D0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600063D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600063D8: jal         0x60000994
    // 0x600063DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x600063DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x600063E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063E4:
    // 0x600063E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600063E8: jr          $ra
    // 0x600063EC: nop

    return;
    // 0x600063EC: nop

;}
RECOMP_FUNC void ovl_stage_world4_63F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600063F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600063F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600063F8: jal         0x60000A60
    // 0x600063FC: addiu       $a0, $zero, 0xA72
    ctx->r4 = ADD32(0, 0XA72);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x600063FC: addiu       $a0, $zero, 0xA72
    ctx->r4 = ADD32(0, 0XA72);
    after_0:
    // 0x60006400: jal         0x600009C4
    // 0x60006404: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_1;
    // 0x60006404: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_1:
    // 0x60006408: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x6000640C: jal         0x60000E80
    // 0x60006410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x60006410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60006414: jal         0x6000357C
    // 0x60006418: nop

    ovl_stage_world4_357C(rdram, ctx);
        goto after_3;
    // 0x60006418: nop

    after_3:
    // 0x6000641C: jal         0x600009AC
    // 0x60006420: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_4;
    // 0x60006420: nop

    after_4:
    // 0x60006424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000642C: jr          $ra
    // 0x60006430: nop

    return;
    // 0x60006430: nop

;}
RECOMP_FUNC void ovl_stage_world4_6434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000643C: jal         0x60000BB0
    // 0x60006440: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006440: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_0:
    // 0x60006444: beq         $v0, $zero, L_600064A0
    if (ctx->r2 == 0) {
        // 0x60006448: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600064A0;
    }
    // 0x60006448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000644C: jal         0x60000BB0
    // 0x60006450: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006450: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_1:
    // 0x60006454: bne         $v0, $zero, L_600064A0
    if (ctx->r2 != 0) {
        // 0x60006458: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600064A0;
    }
    // 0x60006458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000645C: jal         0x60000DE4
    // 0x60006460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_2;
    // 0x60006460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60006464: jal         0x60000CC4
    // 0x60006468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_3;
    // 0x60006468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x6000646C: jal         0x60000A6C
    // 0x60006470: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_4;
    // 0x60006470: nop

    after_4:
    // 0x60006474: jal         0x60000A90
    // 0x60006478: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_5;
    // 0x60006478: nop

    after_5:
    // 0x6000647C: jal         0x60000B98
    // 0x60006480: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x60006480: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_6:
    // 0x60006484: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006488: addiu       $a0, $a0, 0x63F0
    ctx->r4 = ADD32(ctx->r4, 0X63F0);
    // 0x6000648C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006494: jal         0x60000994
    // 0x60006498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x60006498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x6000649C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064A0:
    // 0x600064A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600064A4: jr          $ra
    // 0x600064A8: nop

    return;
    // 0x600064A8: nop

;}
RECOMP_FUNC void ovl_stage_world4_64AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600064AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600064B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600064B4: jal         0x60000A60
    // 0x600064B8: addiu       $a0, $zero, 0xA71
    ctx->r4 = ADD32(0, 0XA71);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x600064B8: addiu       $a0, $zero, 0xA71
    ctx->r4 = ADD32(0, 0XA71);
    after_0:
    // 0x600064BC: jal         0x600009C4
    // 0x600064C0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_1;
    // 0x600064C0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_1:
    // 0x600064C4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x600064C8: jal         0x60000E80
    // 0x600064CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x600064CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x600064D0: jal         0x6000357C
    // 0x600064D4: nop

    ovl_stage_world4_357C(rdram, ctx);
        goto after_3;
    // 0x600064D4: nop

    after_3:
    // 0x600064D8: jal         0x600009AC
    // 0x600064DC: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_4;
    // 0x600064DC: nop

    after_4:
    // 0x600064E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600064E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600064E8: jr          $ra
    // 0x600064EC: nop

    return;
    // 0x600064EC: nop

;}
RECOMP_FUNC void ovl_stage_world4_64F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600064F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600064F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600064F8: jal         0x60000BB0
    // 0x600064FC: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600064FC: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_0:
    // 0x60006500: beq         $v0, $zero, L_6000655C
    if (ctx->r2 == 0) {
        // 0x60006504: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000655C;
    }
    // 0x60006504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006508: jal         0x60000BB0
    // 0x6000650C: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x6000650C: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_1:
    // 0x60006510: bne         $v0, $zero, L_6000655C
    if (ctx->r2 != 0) {
        // 0x60006514: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000655C;
    }
    // 0x60006514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006518: jal         0x60000DE4
    // 0x6000651C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_2;
    // 0x6000651C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60006520: jal         0x60000CC4
    // 0x60006524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_3;
    // 0x60006524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60006528: jal         0x60000A6C
    // 0x6000652C: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_4;
    // 0x6000652C: nop

    after_4:
    // 0x60006530: jal         0x60000A90
    // 0x60006534: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_5;
    // 0x60006534: nop

    after_5:
    // 0x60006538: jal         0x60000B98
    // 0x6000653C: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x6000653C: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_6:
    // 0x60006540: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006544: addiu       $a0, $a0, 0x64AC
    ctx->r4 = ADD32(ctx->r4, 0X64AC);
    // 0x60006548: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000654C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006550: jal         0x60000994
    // 0x60006554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x60006554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60006558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000655C:
    // 0x6000655C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006560: jr          $ra
    // 0x60006564: nop

    return;
    // 0x60006564: nop

;}
RECOMP_FUNC void ovl_stage_world4_6568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000656C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006570: jal         0x60000A60
    // 0x60006574: addiu       $a0, $zero, 0xA74
    ctx->r4 = ADD32(0, 0XA74);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60006574: addiu       $a0, $zero, 0xA74
    ctx->r4 = ADD32(0, 0XA74);
    after_0:
    // 0x60006578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000657C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006580: jr          $ra
    // 0x60006584: nop

    return;
    // 0x60006584: nop

;}
RECOMP_FUNC void ovl_stage_world4_6588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000658C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006590: jal         0x600009C4
    // 0x60006594: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_0;
    // 0x60006594: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60006598: jal         0x60000BA4
    // 0x6000659C: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_1;
    // 0x6000659C: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_1:
    // 0x600065A0: jal         0x600009AC
    // 0x600065A4: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_2;
    // 0x600065A4: nop

    after_2:
    // 0x600065A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600065AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600065B0: jr          $ra
    // 0x600065B4: nop

    return;
    // 0x600065B4: nop

;}
RECOMP_FUNC void ovl_stage_world4_65B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600065B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600065BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600065C0: jal         0x60000C1C
    // 0x600065C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600065C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600065C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600065CC: jal         0x60000A60
    // 0x600065D0: addiu       $a0, $zero, 0xA75
    ctx->r4 = ADD32(0, 0XA75);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_1;
    // 0x600065D0: addiu       $a0, $zero, 0xA75
    ctx->r4 = ADD32(0, 0XA75);
    after_1:
    // 0x600065D4: jal         0x600009C4
    // 0x600065D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_2;
    // 0x600065D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x600065DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600065E0: nop

    // 0x600065E4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600065E8: beq         $t7, $zero, L_6000660C
    if (ctx->r15 == 0) {
        // 0x600065EC: nop
    
            goto L_6000660C;
    }
    // 0x600065EC: nop

L_600065F0:
    // 0x600065F0: jal         0x600009D0
    // 0x600065F4: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_3;
    // 0x600065F4: nop

    after_3:
    // 0x600065F8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600065FC: nop

    // 0x60006600: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60006604: bne         $t9, $zero, L_600065F0
    if (ctx->r25 != 0) {
        // 0x60006608: nop
    
            goto L_600065F0;
    }
    // 0x60006608: nop

L_6000660C:
    // 0x6000660C: jal         0x60000B98
    // 0x60006610: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x60006610: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_4:
    // 0x60006614: jal         0x600009AC
    // 0x60006618: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_5;
    // 0x60006618: nop

    after_5:
    // 0x6000661C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60006620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60006624: jr          $ra
    // 0x60006628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world4_662C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000662C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006634: jal         0x60000BB0
    // 0x60006638: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006638: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_0:
    // 0x6000663C: bne         $v0, $zero, L_600066E8
    if (ctx->r2 != 0) {
        // 0x60006640: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600066E8;
    }
    // 0x60006640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006644: jal         0x60000BB0
    // 0x60006648: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006648: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_1:
    // 0x6000664C: bne         $v0, $zero, L_600066E4
    if (ctx->r2 != 0) {
        // 0x60006650: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_600066E4;
    }
    // 0x60006650: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60006654: jal         0x60000E68
    // 0x60006658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_2;
    // 0x60006658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x6000665C: jal         0x60000B98
    // 0x60006660: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_3;
    // 0x60006660: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_3:
    // 0x60006664: jal         0x60000BB0
    // 0x60006668: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_4;
    // 0x60006668: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_4:
    // 0x6000666C: bne         $v0, $zero, L_60006684
    if (ctx->r2 != 0) {
        // 0x60006670: nop
    
            goto L_60006684;
    }
    // 0x60006670: nop

    // 0x60006674: jal         0x60000B98
    // 0x60006678: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_5;
    // 0x60006678: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_5:
    // 0x6000667C: b           L_600066CC
    // 0x60006680: nop

        goto L_600066CC;
    // 0x60006680: nop

L_60006684:
    // 0x60006684: jal         0x60000BB0
    // 0x60006688: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60006688: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_6:
    // 0x6000668C: bne         $v0, $zero, L_600066A4
    if (ctx->r2 != 0) {
        // 0x60006690: nop
    
            goto L_600066A4;
    }
    // 0x60006690: nop

    // 0x60006694: jal         0x60000B98
    // 0x60006698: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_7;
    // 0x60006698: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_7:
    // 0x6000669C: b           L_600066CC
    // 0x600066A0: nop

        goto L_600066CC;
    // 0x600066A0: nop

L_600066A4:
    // 0x600066A4: jal         0x60000B98
    // 0x600066A8: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_8;
    // 0x600066A8: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_8:
    // 0x600066AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600066B0: addiu       $a0, $a0, 0x65B8
    ctx->r4 = ADD32(ctx->r4, 0X65B8);
    // 0x600066B4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600066B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600066BC: jal         0x60000994
    // 0x600066C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_9;
    // 0x600066C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x600066C4: b           L_600066E8
    // 0x600066C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600066E8;
    // 0x600066C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066CC:
    // 0x600066CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600066D0: addiu       $a0, $a0, 0x6588
    ctx->r4 = ADD32(ctx->r4, 0X6588);
    // 0x600066D4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600066D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600066DC: jal         0x60000994
    // 0x600066E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_10;
    // 0x600066E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
L_600066E4:
    // 0x600066E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066E8:
    // 0x600066E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600066EC: jr          $ra
    // 0x600066F0: nop

    return;
    // 0x600066F0: nop

;}
RECOMP_FUNC void ovl_stage_world4_66F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600066F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x600066F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600066FC: jal         0x60000BB0
    // 0x60006700: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006700: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_0:
    // 0x60006704: bne         $v0, $zero, L_60006714
    if (ctx->r2 != 0) {
        // 0x60006708: addiu       $t6, $zero, 0x6E
        ctx->r14 = ADD32(0, 0X6E);
            goto L_60006714;
    }
    // 0x60006708: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x6000670C: b           L_60006758
    // 0x60006710: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
        goto L_60006758;
    // 0x60006710: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_60006714:
    // 0x60006714: jal         0x60000BB0
    // 0x60006718: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006718: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_1:
    // 0x6000671C: bne         $v0, $zero, L_6000672C
    if (ctx->r2 != 0) {
        // 0x60006720: addiu       $t7, $zero, 0x6D
        ctx->r15 = ADD32(0, 0X6D);
            goto L_6000672C;
    }
    // 0x60006720: addiu       $t7, $zero, 0x6D
    ctx->r15 = ADD32(0, 0X6D);
    // 0x60006724: b           L_60006758
    // 0x60006728: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
        goto L_60006758;
    // 0x60006728: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_6000672C:
    // 0x6000672C: jal         0x60000BB0
    // 0x60006730: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60006730: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_2:
    // 0x60006734: bne         $v0, $zero, L_60006744
    if (ctx->r2 != 0) {
        // 0x60006738: addiu       $t8, $zero, 0x6C
        ctx->r24 = ADD32(0, 0X6C);
            goto L_60006744;
    }
    // 0x60006738: addiu       $t8, $zero, 0x6C
    ctx->r24 = ADD32(0, 0X6C);
    // 0x6000673C: b           L_60006758
    // 0x60006740: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_60006758;
    // 0x60006740: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_60006744:
    // 0x60006744: jal         0x60000BB0
    // 0x60006748: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60006748: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_3:
    // 0x6000674C: bne         $v0, $zero, L_60006758
    if (ctx->r2 != 0) {
        // 0x60006750: addiu       $t9, $zero, 0x6B
        ctx->r25 = ADD32(0, 0X6B);
            goto L_60006758;
    }
    // 0x60006750: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x60006754: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_60006758:
    // 0x60006758: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x6000675C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60006760: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60006764: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60006768: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x6000676C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60006770: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x60006774: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x60006778: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x6000677C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x60006780: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x60006784: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60006788: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000678C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x60006790: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x60006794: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60006798: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x6000679C: jal         0x600006C4
    // 0x600067A0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x600067A0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_4:
    // 0x600067A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600067A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x600067AC: jr          $ra
    // 0x600067B0: nop

    return;
    // 0x600067B0: nop

;}
RECOMP_FUNC void ovl_stage_world4_67B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600067B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600067B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600067BC: jal         0x60000BB0
    // 0x600067C0: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600067C0: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    after_0:
    // 0x600067C4: bne         $v0, $zero, L_60006848
    if (ctx->r2 != 0) {
        // 0x600067C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006848;
    }
    // 0x600067C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600067CC: jal         0x60000BB0
    // 0x600067D0: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x600067D0: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_1:
    // 0x600067D4: bne         $v0, $zero, L_600067EC
    if (ctx->r2 != 0) {
        // 0x600067D8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_600067EC;
    }
    // 0x600067D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600067DC: jal         0x60000E80
    // 0x600067E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x600067E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x600067E4: b           L_60006848
    // 0x600067E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006848;
    // 0x600067E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600067EC:
    // 0x600067EC: jal         0x60000BB0
    // 0x600067F0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x600067F0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_3:
    // 0x600067F4: bne         $v0, $zero, L_6000680C
    if (ctx->r2 != 0) {
        // 0x600067F8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_6000680C;
    }
    // 0x600067F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600067FC: jal         0x60000E80
    // 0x60006800: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_4;
    // 0x60006800: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60006804: b           L_60006848
    // 0x60006808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006848;
    // 0x60006808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000680C:
    // 0x6000680C: jal         0x60000BB0
    // 0x60006810: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x60006810: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_5:
    // 0x60006814: bne         $v0, $zero, L_6000682C
    if (ctx->r2 != 0) {
        // 0x60006818: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_6000682C;
    }
    // 0x60006818: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000681C: jal         0x60000E80
    // 0x60006820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_6;
    // 0x60006820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x60006824: b           L_60006848
    // 0x60006828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006848;
    // 0x60006828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000682C:
    // 0x6000682C: jal         0x60000BB0
    // 0x60006830: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_7;
    // 0x60006830: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_7:
    // 0x60006834: bne         $v0, $zero, L_60006844
    if (ctx->r2 != 0) {
        // 0x60006838: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60006844;
    }
    // 0x60006838: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000683C: jal         0x60000E80
    // 0x60006840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E80(rdram, ctx);
        goto after_8;
    // 0x60006840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_60006844:
    // 0x60006844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006848:
    // 0x60006848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000684C: jr          $ra
    // 0x60006850: nop

    return;
    // 0x60006850: nop

;}
RECOMP_FUNC void ovl_stage_world4_6854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000685C: jal         0x60000BB0
    // 0x60006860: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006860: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    after_0:
    // 0x60006864: bne         $v0, $zero, L_60006888
    if (ctx->r2 != 0) {
        // 0x60006868: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006888;
    }
    // 0x60006868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000686C: jal         0x60000B98
    // 0x60006870: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_1;
    // 0x60006870: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_1:
    // 0x60006874: jal         0x60000244
    // 0x60006878: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_244(rdram, ctx);
        goto after_2;
    // 0x60006878: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_2:
    // 0x6000687C: jal         0x60000E44
    // 0x60006880: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_3;
    // 0x60006880: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
    // 0x60006884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006888:
    // 0x60006888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000688C: jr          $ra
    // 0x60006890: nop

    return;
    // 0x60006890: nop

;}
RECOMP_FUNC void ovl_stage_world4_6894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000689C: jal         0x60000BB0
    // 0x600068A0: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600068A0: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_0:
    // 0x600068A4: beq         $v0, $zero, L_600068E8
    if (ctx->r2 == 0) {
        // 0x600068A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600068E8;
    }
    // 0x600068A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600068AC: jal         0x60000BB0
    // 0x600068B0: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x600068B0: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_1:
    // 0x600068B4: beq         $v0, $zero, L_600068E8
    if (ctx->r2 == 0) {
        // 0x600068B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600068E8;
    }
    // 0x600068B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600068BC: jal         0x60000BB0
    // 0x600068C0: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600068C0: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
    after_2:
    // 0x600068C4: bne         $v0, $zero, L_600068E8
    if (ctx->r2 != 0) {
        // 0x600068C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600068E8;
    }
    // 0x600068C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600068CC: jal         0x60000B98
    // 0x600068D0: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_3;
    // 0x600068D0: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_3:
    // 0x600068D4: jal         0x60000244
    // 0x600068D8: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_244(rdram, ctx);
        goto after_4;
    // 0x600068D8: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_4:
    // 0x600068DC: jal         0x60000E44
    // 0x600068E0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_5;
    // 0x600068E0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_5:
    // 0x600068E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600068E8:
    // 0x600068E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600068EC: jr          $ra
    // 0x600068F0: nop

    return;
    // 0x600068F0: nop

;}
RECOMP_FUNC void ovl_stage_world4_68F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600068F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600068F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600068FC: jal         0x60000BB0
    // 0x60006900: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006900: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_0:
    // 0x60006904: beq         $v0, $zero, L_60006928
    if (ctx->r2 == 0) {
        // 0x60006908: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006928;
    }
    // 0x60006908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000690C: jal         0x60000BB0
    // 0x60006910: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006910: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    after_1:
    // 0x60006914: beq         $v0, $zero, L_60006928
    if (ctx->r2 == 0) {
        // 0x60006918: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006928;
    }
    // 0x60006918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000691C: jal         0x60000EEC
    // 0x60006920: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_2;
    // 0x60006920: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x60006924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006928:
    // 0x60006928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000692C: jr          $ra
    // 0x60006930: nop

    return;
    // 0x60006930: nop

;}
RECOMP_FUNC void ovl_stage_world4_6934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006934: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000693C: jal         0x60000C1C
    // 0x60006940: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60006940: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006944: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60006948: addiu       $at, $zero, 0x86F
    ctx->r1 = ADD32(0, 0X86F);
    // 0x6000694C: bne         $t6, $at, L_60006964
    if (ctx->r14 != ctx->r1) {
        // 0x60006950: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60006964;
    }
    // 0x60006950: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60006954: jal         0x60000A60
    // 0x60006958: addiu       $a0, $zero, 0xB1A
    ctx->r4 = ADD32(0, 0XB1A);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_1;
    // 0x60006958: addiu       $a0, $zero, 0xB1A
    ctx->r4 = ADD32(0, 0XB1A);
    after_1:
    // 0x6000695C: b           L_6000696C
    // 0x60006960: nop

        goto L_6000696C;
    // 0x60006960: nop

L_60006964:
    // 0x60006964: jal         0x60000A60
    // 0x60006968: addiu       $a0, $zero, 0xB25
    ctx->r4 = ADD32(0, 0XB25);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_2;
    // 0x60006968: addiu       $a0, $zero, 0xB25
    ctx->r4 = ADD32(0, 0XB25);
    after_2:
L_6000696C:
    // 0x6000696C: jal         0x600009D0
    // 0x60006970: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_3;
    // 0x60006970: nop

    after_3:
    // 0x60006974: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60006978: nop

    // 0x6000697C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60006980: beq         $t8, $zero, L_600069A4
    if (ctx->r24 == 0) {
        // 0x60006984: nop
    
            goto L_600069A4;
    }
    // 0x60006984: nop

L_60006988:
    // 0x60006988: jal         0x600009D0
    // 0x6000698C: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_4;
    // 0x6000698C: nop

    after_4:
    // 0x60006990: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60006994: nop

    // 0x60006998: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x6000699C: bne         $t0, $zero, L_60006988
    if (ctx->r8 != 0) {
        // 0x600069A0: nop
    
            goto L_60006988;
    }
    // 0x600069A0: nop

L_600069A4:
    // 0x600069A4: jal         0x600009C4
    // 0x600069A8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_5;
    // 0x600069A8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x600069AC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x600069B0: nop

    // 0x600069B4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x600069B8: jal         0x600009AC
    // 0x600069BC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_6;
    // 0x600069BC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x600069C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600069C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600069C8: jr          $ra
    // 0x600069CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600069CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world4_69D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600069D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600069D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600069D8: jal         0x60000C1C
    // 0x600069DC: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600069DC: nop

    after_0:
    // 0x600069E0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600069E4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x600069E8: bne         $t6, $at, L_60006A0C
    if (ctx->r14 != ctx->r1) {
        // 0x600069EC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006A0C;
    }
    // 0x600069EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600069F0: addiu       $a0, $a0, 0x6934
    ctx->r4 = ADD32(ctx->r4, 0X6934);
    // 0x600069F4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600069F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600069FC: jal         0x60000994
    // 0x60006A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60006A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60006A04: b           L_60006A28
    // 0x60006A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006A28;
    // 0x60006A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006A0C:
    // 0x60006A0C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x60006A10: addiu       $at, $zero, 0x86F
    ctx->r1 = ADD32(0, 0X86F);
    // 0x60006A14: bne         $t7, $at, L_60006A28
    if (ctx->r15 != ctx->r1) {
        // 0x60006A18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006A28;
    }
    // 0x60006A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006A1C: jal         0x60000B98
    // 0x60006A20: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_2;
    // 0x60006A20: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x60006A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006A28:
    // 0x60006A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006A2C: jr          $ra
    // 0x60006A30: nop

    return;
    // 0x60006A30: nop

;}
RECOMP_FUNC void ovl_stage_world4_6A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006A3C: jal         0x60000BB0
    // 0x60006A40: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006A40: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_0:
    // 0x60006A44: beq         $v0, $zero, L_60006A6C
    if (ctx->r2 == 0) {
        // 0x60006A48: nop
    
            goto L_60006A6C;
    }
    // 0x60006A48: nop

    // 0x60006A4C: jal         0x60000BB0
    // 0x60006A50: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006A50: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_1:
    // 0x60006A54: beq         $v0, $zero, L_60006A6C
    if (ctx->r2 == 0) {
        // 0x60006A58: nop
    
            goto L_60006A6C;
    }
    // 0x60006A58: nop

    // 0x60006A5C: jal         0x60000BB0
    // 0x60006A60: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60006A60: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_2:
    // 0x60006A64: bne         $v0, $zero, L_60006B40
    if (ctx->r2 != 0) {
        // 0x60006A68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006B40;
    }
    // 0x60006A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006A6C:
    // 0x60006A6C: jal         0x60000BB0
    // 0x60006A70: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60006A70: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_3:
    // 0x60006A74: beq         $v0, $zero, L_60006B3C
    if (ctx->r2 == 0) {
        // 0x60006A78: addiu       $a0, $zero, 0x16B
        ctx->r4 = ADD32(0, 0X16B);
            goto L_60006B3C;
    }
    // 0x60006A78: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    // 0x60006A7C: lui         $a1, 0x441D
    ctx->r5 = S32(0X441D << 16);
    // 0x60006A80: lui         $a3, 0x442C
    ctx->r7 = S32(0X442C << 16);
    // 0x60006A84: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60006A88: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x60006A8C: jal         0x60000274
    // 0x60006A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_stage_world4_274(rdram, ctx);
        goto after_4;
    // 0x60006A90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x60006A94: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60006A98: sw          $v0, 0x7530($at)
    MEM_W(0X7530, ctx->r1) = ctx->r2;
    // 0x60006A9C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60006AA0: jal         0x60000E80
    // 0x60006AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E80(rdram, ctx);
        goto after_5;
    // 0x60006AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60006AA8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60006AAC: jal         0x60000E80
    // 0x60006AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E80(rdram, ctx);
        goto after_6;
    // 0x60006AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60006AB4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60006AB8: jal         0x60000E80
    // 0x60006ABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E80(rdram, ctx);
        goto after_7;
    // 0x60006ABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x60006AC0: jal         0x60000BA4
    // 0x60006AC4: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_8;
    // 0x60006AC4: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_8:
    // 0x60006AC8: jal         0x60000BA4
    // 0x60006ACC: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_9;
    // 0x60006ACC: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_9:
    // 0x60006AD0: jal         0x60000BA4
    // 0x60006AD4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_10;
    // 0x60006AD4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_10:
    // 0x60006AD8: jal         0x60000BA4
    // 0x60006ADC: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_11;
    // 0x60006ADC: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_11:
    // 0x60006AE0: jal         0x60000BA4
    // 0x60006AE4: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_12;
    // 0x60006AE4: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_12:
    // 0x60006AE8: jal         0x60000BA4
    // 0x60006AEC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_13;
    // 0x60006AEC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_13:
    // 0x60006AF0: jal         0x60000BA4
    // 0x60006AF4: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_14;
    // 0x60006AF4: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_14:
    // 0x60006AF8: jal         0x60000BA4
    // 0x60006AFC: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_15;
    // 0x60006AFC: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_15:
    // 0x60006B00: jal         0x60000BA4
    // 0x60006B04: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_16;
    // 0x60006B04: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_16:
    // 0x60006B08: jal         0x60000BA4
    // 0x60006B0C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_17;
    // 0x60006B0C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_17:
    // 0x60006B10: jal         0x60000244
    // 0x60006B14: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    ovl_stage_world4_244(rdram, ctx);
        goto after_18;
    // 0x60006B14: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    after_18:
    // 0x60006B18: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60006B1C: jal         0x60000E80
    // 0x60006B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_19;
    // 0x60006B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x60006B24: jal         0x60000E44
    // 0x60006B28: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_20;
    // 0x60006B28: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_20:
    // 0x60006B2C: jal         0x60000E44
    // 0x60006B30: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_21;
    // 0x60006B30: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_21:
    // 0x60006B34: jal         0x60000E44
    // 0x60006B38: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_22;
    // 0x60006B38: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_22:
L_60006B3C:
    // 0x60006B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006B40:
    // 0x60006B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006B44: jr          $ra
    // 0x60006B48: nop

    return;
    // 0x60006B48: nop

;}
RECOMP_FUNC void ovl_stage_world4_6B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006B54: jal         0x60000BB0
    // 0x60006B58: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60006B58: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_0:
    // 0x60006B5C: bne         $v0, $zero, L_60006BF8
    if (ctx->r2 != 0) {
        // 0x60006B60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006BF8;
    }
    // 0x60006B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006B64: jal         0x60000BB0
    // 0x60006B68: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60006B68: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_1:
    // 0x60006B6C: bne         $v0, $zero, L_60006BA4
    if (ctx->r2 != 0) {
        // 0x60006B70: nop
    
            goto L_60006BA4;
    }
    // 0x60006B70: nop

    // 0x60006B74: jal         0x60000BB0
    // 0x60006B78: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60006B78: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_2:
    // 0x60006B7C: bne         $v0, $zero, L_60006BA4
    if (ctx->r2 != 0) {
        // 0x60006B80: nop
    
            goto L_60006BA4;
    }
    // 0x60006B80: nop

    // 0x60006B84: jal         0x60000BB0
    // 0x60006B88: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60006B88: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_3:
    // 0x60006B8C: bne         $v0, $zero, L_60006BA4
    if (ctx->r2 != 0) {
        // 0x60006B90: nop
    
            goto L_60006BA4;
    }
    // 0x60006B90: nop

    // 0x60006B94: jal         0x60000BB0
    // 0x60006B98: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_4;
    // 0x60006B98: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_4:
    // 0x60006B9C: beq         $v0, $zero, L_60006BF8
    if (ctx->r2 == 0) {
        // 0x60006BA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006BF8;
    }
    // 0x60006BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006BA4:
    // 0x60006BA4: jal         0x60000BB0
    // 0x60006BA8: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x60006BA8: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_5:
    // 0x60006BAC: bne         $v0, $zero, L_60006BF8
    if (ctx->r2 != 0) {
        // 0x60006BB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006BF8;
    }
    // 0x60006BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006BB4: jal         0x60000BB0
    // 0x60006BB8: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60006BB8: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_6:
    // 0x60006BBC: bne         $v0, $zero, L_60006BF8
    if (ctx->r2 != 0) {
        // 0x60006BC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006BF8;
    }
    // 0x60006BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006BC4: jal         0x60000BB0
    // 0x60006BC8: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_7;
    // 0x60006BC8: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_7:
    // 0x60006BCC: bne         $v0, $zero, L_60006BF8
    if (ctx->r2 != 0) {
        // 0x60006BD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006BF8;
    }
    // 0x60006BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006BD4: jal         0x60000BB0
    // 0x60006BD8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_8;
    // 0x60006BD8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_8:
    // 0x60006BDC: bne         $v0, $zero, L_60006BF8
    if (ctx->r2 != 0) {
        // 0x60006BE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006BF8;
    }
    // 0x60006BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006BE4: jal         0x60000B98
    // 0x60006BE8: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_9;
    // 0x60006BE8: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_9:
    // 0x60006BEC: jal         0x60000A60
    // 0x60006BF0: addiu       $a0, $zero, 0xC14
    ctx->r4 = ADD32(0, 0XC14);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_10;
    // 0x60006BF0: addiu       $a0, $zero, 0xC14
    ctx->r4 = ADD32(0, 0XC14);
    after_10:
    // 0x60006BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006BF8:
    // 0x60006BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006BFC: jr          $ra
    // 0x60006C00: nop

    return;
    // 0x60006C00: nop

;}
RECOMP_FUNC void ovl_stage_world4_6C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006C04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006C08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60006C0C: jal         0x60000C1C
    // 0x60006C10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60006C10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006C14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60006C18: jal         0x60000A60
    // 0x60006C1C: addiu       $a0, $zero, 0xBF8
    ctx->r4 = ADD32(0, 0XBF8);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_1;
    // 0x60006C1C: addiu       $a0, $zero, 0xBF8
    ctx->r4 = ADD32(0, 0XBF8);
    after_1:
    // 0x60006C20: jal         0x600009D0
    // 0x60006C24: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_2;
    // 0x60006C24: nop

    after_2:
    // 0x60006C28: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60006C2C: nop

    // 0x60006C30: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60006C34: beq         $t7, $zero, L_60006C58
    if (ctx->r15 == 0) {
        // 0x60006C38: nop
    
            goto L_60006C58;
    }
    // 0x60006C38: nop

L_60006C3C:
    // 0x60006C3C: jal         0x600009D0
    // 0x60006C40: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_3;
    // 0x60006C40: nop

    after_3:
    // 0x60006C44: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60006C48: nop

    // 0x60006C4C: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60006C50: bne         $t9, $zero, L_60006C3C
    if (ctx->r25 != 0) {
        // 0x60006C54: nop
    
            goto L_60006C3C;
    }
    // 0x60006C54: nop

L_60006C58:
    // 0x60006C58: jal         0x600009C4
    // 0x60006C5C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x60006C5C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60006C60: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60006C64: nop

    // 0x60006C68: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60006C6C: jal         0x600009AC
    // 0x60006C70: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_5;
    // 0x60006C70: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60006C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60006C78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60006C7C: jr          $ra
    // 0x60006C80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006C80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world4_6C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006C8C: jal         0x60000C1C
    // 0x60006C90: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60006C90: nop

    after_0:
    // 0x60006C94: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60006C98: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x60006C9C: bne         $t6, $at, L_60006CB8
    if (ctx->r14 != ctx->r1) {
        // 0x60006CA0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006CB8;
    }
    // 0x60006CA0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006CA4: addiu       $a0, $a0, 0x6C04
    ctx->r4 = ADD32(ctx->r4, 0X6C04);
    // 0x60006CA8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006CAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006CB0: jal         0x60000994
    // 0x60006CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60006CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60006CB8:
    // 0x60006CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006CC0: jr          $ra
    // 0x60006CC4: nop

    return;
    // 0x60006CC4: nop

;}
RECOMP_FUNC void ovl_stage_world4_6CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006CC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006CCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60006CD0: jal         0x60000C1C
    // 0x60006CD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60006CD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006CD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60006CDC: jal         0x60000A60
    // 0x60006CE0: addiu       $a0, $zero, 0xAFE
    ctx->r4 = ADD32(0, 0XAFE);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_1;
    // 0x60006CE0: addiu       $a0, $zero, 0xAFE
    ctx->r4 = ADD32(0, 0XAFE);
    after_1:
    // 0x60006CE4: jal         0x600009D0
    // 0x60006CE8: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_2;
    // 0x60006CE8: nop

    after_2:
    // 0x60006CEC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60006CF0: nop

    // 0x60006CF4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60006CF8: beq         $t7, $zero, L_60006D1C
    if (ctx->r15 == 0) {
        // 0x60006CFC: nop
    
            goto L_60006D1C;
    }
    // 0x60006CFC: nop

L_60006D00:
    // 0x60006D00: jal         0x600009D0
    // 0x60006D04: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_3;
    // 0x60006D04: nop

    after_3:
    // 0x60006D08: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60006D0C: nop

    // 0x60006D10: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60006D14: bne         $t9, $zero, L_60006D00
    if (ctx->r25 != 0) {
        // 0x60006D18: nop
    
            goto L_60006D00;
    }
    // 0x60006D18: nop

L_60006D1C:
    // 0x60006D1C: jal         0x600009C4
    // 0x60006D20: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x60006D20: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60006D24: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60006D28: nop

    // 0x60006D2C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60006D30: jal         0x600009AC
    // 0x60006D34: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_5;
    // 0x60006D34: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60006D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60006D3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60006D40: jr          $ra
    // 0x60006D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world4_6D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006D50: jal         0x60000C1C
    // 0x60006D54: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60006D54: nop

    after_0:
    // 0x60006D58: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60006D5C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60006D60: bne         $t6, $at, L_60006D7C
    if (ctx->r14 != ctx->r1) {
        // 0x60006D64: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006D7C;
    }
    // 0x60006D64: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006D68: addiu       $a0, $a0, 0x6CC8
    ctx->r4 = ADD32(ctx->r4, 0X6CC8);
    // 0x60006D6C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006D70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006D74: jal         0x60000994
    // 0x60006D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60006D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60006D7C:
    // 0x60006D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006D84: jr          $ra
    // 0x60006D88: nop

    return;
    // 0x60006D88: nop

;}
RECOMP_FUNC void ovl_stage_world4_6D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006D8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006D90: slti        $at, $a0, 0x62
    ctx->r1 = SIGNED(ctx->r4) < 0X62 ? 1 : 0;
    // 0x60006D94: bne         $at, $zero, L_60006DC0
    if (ctx->r1 != 0) {
        // 0x60006D98: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60006DC0;
    }
    // 0x60006D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006D9C: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x60006DA0: beq         $a0, $at, L_6000727C
    if (ctx->r4 == ctx->r1) {
        // 0x60006DA4: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_6000727C;
    }
    // 0x60006DA4: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x60006DA8: beq         $a0, $at, L_6000728C
    if (ctx->r4 == ctx->r1) {
        // 0x60006DAC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_6000728C;
    }
    // 0x60006DAC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x60006DB0: beq         $a0, $at, L_60007298
    if (ctx->r4 == ctx->r1) {
        // 0x60006DB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007298;
    }
    // 0x60006DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006DB8: b           L_60007298
    // 0x60006DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006DC0:
    // 0x60006DC0: slti        $at, $a0, 0x61
    ctx->r1 = SIGNED(ctx->r4) < 0X61 ? 1 : 0;
    // 0x60006DC4: bne         $at, $zero, L_60006DDC
    if (ctx->r1 != 0) {
        // 0x60006DC8: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_60006DDC;
    }
    // 0x60006DC8: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x60006DCC: beq         $a0, $at, L_6000726C
    if (ctx->r4 == ctx->r1) {
        // 0x60006DD0: nop
    
            goto L_6000726C;
    }
    // 0x60006DD0: nop

    // 0x60006DD4: b           L_60007298
    // 0x60006DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006DDC:
    // 0x60006DDC: slti        $at, $a0, 0x41
    ctx->r1 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x60006DE0: bne         $at, $zero, L_60006DF8
    if (ctx->r1 != 0) {
        // 0x60006DE4: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_60006DF8;
    }
    // 0x60006DE4: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x60006DE8: beq         $a0, $at, L_6000725C
    if (ctx->r4 == ctx->r1) {
        // 0x60006DEC: nop
    
            goto L_6000725C;
    }
    // 0x60006DEC: nop

    // 0x60006DF0: b           L_60007298
    // 0x60006DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006DF8:
    // 0x60006DF8: sltiu       $at, $a0, 0x41
    ctx->r1 = ctx->r4 < 0X41 ? 1 : 0;
    // 0x60006DFC: beq         $at, $zero, L_60007294
    if (ctx->r1 == 0) {
        // 0x60006E00: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_60007294;
    }
    // 0x60006E00: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60006E04: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60006E08: addu        $at, $at, $t6
    gpr jr_addend_60006E14 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60006E0C: lw          $t6, 0x7428($at)
    ctx->r14 = ADD32(ctx->r1, 0X7428);
    // 0x60006E10: nop

    // 0x60006E14: jr          $t6
    // 0x60006E18: nop

    switch (jr_addend_60006E14 >> 2) {
        case 0: goto L_60006E1C; break;
        case 1: goto L_60006E2C; break;
        case 2: goto L_60006E3C; break;
        case 3: goto L_60006E4C; break;
        case 4: goto L_60006E5C; break;
        case 5: goto L_60006E6C; break;
        case 6: goto L_60006E7C; break;
        case 7: goto L_60006E8C; break;
        case 8: goto L_60006E9C; break;
        case 9: goto L_60006EAC; break;
        case 10: goto L_60006EBC; break;
        case 11: goto L_60006ECC; break;
        case 12: goto L_60006EDC; break;
        case 13: goto L_60006EEC; break;
        case 14: goto L_60006EFC; break;
        case 15: goto L_60006F0C; break;
        case 16: goto L_60006F1C; break;
        case 17: goto L_60006F2C; break;
        case 18: goto L_60006F3C; break;
        case 19: goto L_60006F4C; break;
        case 20: goto L_60006F5C; break;
        case 21: goto L_60006F6C; break;
        case 22: goto L_60006F7C; break;
        case 23: goto L_60006F8C; break;
        case 24: goto L_60006F9C; break;
        case 25: goto L_60006FAC; break;
        case 26: goto L_60006FBC; break;
        case 27: goto L_60006FCC; break;
        case 28: goto L_60006FDC; break;
        case 29: goto L_60006FEC; break;
        case 30: goto L_60006FFC; break;
        case 31: goto L_6000700C; break;
        case 32: goto L_6000701C; break;
        case 33: goto L_6000702C; break;
        case 34: goto L_6000703C; break;
        case 35: goto L_6000704C; break;
        case 36: goto L_6000705C; break;
        case 37: goto L_6000706C; break;
        case 38: goto L_6000707C; break;
        case 39: goto L_6000708C; break;
        case 40: goto L_6000709C; break;
        case 41: goto L_600070AC; break;
        case 42: goto L_600070BC; break;
        case 43: goto L_600070CC; break;
        case 44: goto L_600070DC; break;
        case 45: goto L_600070EC; break;
        case 46: goto L_600070FC; break;
        case 47: goto L_6000710C; break;
        case 48: goto L_6000711C; break;
        case 49: goto L_6000712C; break;
        case 50: goto L_6000713C; break;
        case 51: goto L_6000714C; break;
        case 52: goto L_6000715C; break;
        case 53: goto L_6000716C; break;
        case 54: goto L_6000717C; break;
        case 55: goto L_6000718C; break;
        case 56: goto L_6000719C; break;
        case 57: goto L_600071AC; break;
        case 58: goto L_600071BC; break;
        case 59: goto L_600071CC; break;
        case 60: goto L_600071DC; break;
        case 61: goto L_600071EC; break;
        case 62: goto L_600071FC; break;
        case 63: goto L_60007224; break;
        case 64: goto L_6000724C; break;
        default: switch_error(__func__, 0x60006E14, 0x60007428);
    }
    // 0x60006E18: nop

L_60006E1C:
    // 0x60006E1C: jal         0x60003044
    // 0x60006E20: nop

    ovl_stage_world4_3044(rdram, ctx);
        goto after_0;
    // 0x60006E20: nop

    after_0:
    // 0x60006E24: b           L_60007298
    // 0x60006E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E2C:
    // 0x60006E2C: jal         0x60003074
    // 0x60006E30: nop

    ovl_stage_world4_3074(rdram, ctx);
        goto after_1;
    // 0x60006E30: nop

    after_1:
    // 0x60006E34: b           L_60007298
    // 0x60006E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E3C:
    // 0x60006E3C: jal         0x60003098
    // 0x60006E40: nop

    ovl_stage_world4_3098(rdram, ctx);
        goto after_2;
    // 0x60006E40: nop

    after_2:
    // 0x60006E44: b           L_60007298
    // 0x60006E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E4C:
    // 0x60006E4C: jal         0x600030C8
    // 0x60006E50: nop

    ovl_stage_world4_30C8(rdram, ctx);
        goto after_3;
    // 0x60006E50: nop

    after_3:
    // 0x60006E54: b           L_60007298
    // 0x60006E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E5C:
    // 0x60006E5C: jal         0x600030EC
    // 0x60006E60: nop

    ovl_stage_world4_30EC(rdram, ctx);
        goto after_4;
    // 0x60006E60: nop

    after_4:
    // 0x60006E64: b           L_60007298
    // 0x60006E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E6C:
    // 0x60006E6C: jal         0x60003150
    // 0x60006E70: nop

    ovl_stage_world4_3150(rdram, ctx);
        goto after_5;
    // 0x60006E70: nop

    after_5:
    // 0x60006E74: b           L_60007298
    // 0x60006E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E7C:
    // 0x60006E7C: jal         0x6000318C
    // 0x60006E80: nop

    ovl_stage_world4_318C(rdram, ctx);
        goto after_6;
    // 0x60006E80: nop

    after_6:
    // 0x60006E84: b           L_60007298
    // 0x60006E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E8C:
    // 0x60006E8C: jal         0x60003194
    // 0x60006E90: nop

    ovl_stage_world4_3194(rdram, ctx);
        goto after_7;
    // 0x60006E90: nop

    after_7:
    // 0x60006E94: b           L_60007298
    // 0x60006E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E9C:
    // 0x60006E9C: jal         0x6000335C
    // 0x60006EA0: nop

    ovl_stage_world4_335C(rdram, ctx);
        goto after_8;
    // 0x60006EA0: nop

    after_8:
    // 0x60006EA4: b           L_60007298
    // 0x60006EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006EAC:
    // 0x60006EAC: jal         0x6000338C
    // 0x60006EB0: nop

    ovl_stage_world4_338C(rdram, ctx);
        goto after_9;
    // 0x60006EB0: nop

    after_9:
    // 0x60006EB4: b           L_60007298
    // 0x60006EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006EBC:
    // 0x60006EBC: jal         0x600033D4
    // 0x60006EC0: nop

    ovl_stage_world4_33D4(rdram, ctx);
        goto after_10;
    // 0x60006EC0: nop

    after_10:
    // 0x60006EC4: b           L_60007298
    // 0x60006EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006ECC:
    // 0x60006ECC: jal         0x6000341C
    // 0x60006ED0: nop

    ovl_stage_world4_341C(rdram, ctx);
        goto after_11;
    // 0x60006ED0: nop

    after_11:
    // 0x60006ED4: b           L_60007298
    // 0x60006ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006EDC:
    // 0x60006EDC: jal         0x60003444
    // 0x60006EE0: nop

    ovl_stage_world4_3444(rdram, ctx);
        goto after_12;
    // 0x60006EE0: nop

    after_12:
    // 0x60006EE4: b           L_60007298
    // 0x60006EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006EEC:
    // 0x60006EEC: jal         0x60003464
    // 0x60006EF0: nop

    ovl_stage_world4_3464(rdram, ctx);
        goto after_13;
    // 0x60006EF0: nop

    after_13:
    // 0x60006EF4: b           L_60007298
    // 0x60006EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006EFC:
    // 0x60006EFC: jal         0x6000357C
    // 0x60006F00: nop

    ovl_stage_world4_357C(rdram, ctx);
        goto after_14;
    // 0x60006F00: nop

    after_14:
    // 0x60006F04: b           L_60007298
    // 0x60006F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F0C:
    // 0x60006F0C: jal         0x60003730
    // 0x60006F10: nop

    ovl_stage_world4_3730(rdram, ctx);
        goto after_15;
    // 0x60006F10: nop

    after_15:
    // 0x60006F14: b           L_60007298
    // 0x60006F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F1C:
    // 0x60006F1C: jal         0x6000388C
    // 0x60006F20: nop

    ovl_stage_world4_388C(rdram, ctx);
        goto after_16;
    // 0x60006F20: nop

    after_16:
    // 0x60006F24: b           L_60007298
    // 0x60006F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F2C:
    // 0x60006F2C: jal         0x60002B50
    // 0x60006F30: nop

    ovl_stage_world4_2B50(rdram, ctx);
        goto after_17;
    // 0x60006F30: nop

    after_17:
    // 0x60006F34: b           L_60007298
    // 0x60006F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F3C:
    // 0x60006F3C: jal         0x60003F94
    // 0x60006F40: nop

    ovl_stage_world4_3F94(rdram, ctx);
        goto after_18;
    // 0x60006F40: nop

    after_18:
    // 0x60006F44: b           L_60007298
    // 0x60006F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F4C:
    // 0x60006F4C: jal         0x600041B0
    // 0x60006F50: nop

    ovl_stage_world4_41B0(rdram, ctx);
        goto after_19;
    // 0x60006F50: nop

    after_19:
    // 0x60006F54: b           L_60007298
    // 0x60006F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F5C:
    // 0x60006F5C: jal         0x60004268
    // 0x60006F60: nop

    ovl_stage_world4_4268(rdram, ctx);
        goto after_20;
    // 0x60006F60: nop

    after_20:
    // 0x60006F64: b           L_60007298
    // 0x60006F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F6C:
    // 0x60006F6C: jal         0x60004554
    // 0x60006F70: nop

    ovl_stage_world4_4554(rdram, ctx);
        goto after_21;
    // 0x60006F70: nop

    after_21:
    // 0x60006F74: b           L_60007298
    // 0x60006F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F7C:
    // 0x60006F7C: jal         0x600047C4
    // 0x60006F80: nop

    ovl_stage_world4_47C4(rdram, ctx);
        goto after_22;
    // 0x60006F80: nop

    after_22:
    // 0x60006F84: b           L_60007298
    // 0x60006F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F8C:
    // 0x60006F8C: jal         0x6000495C
    // 0x60006F90: nop

    ovl_stage_world4_495C(rdram, ctx);
        goto after_23;
    // 0x60006F90: nop

    after_23:
    // 0x60006F94: b           L_60007298
    // 0x60006F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F9C:
    // 0x60006F9C: jal         0x60004ADC
    // 0x60006FA0: nop

    ovl_stage_world4_4ADC(rdram, ctx);
        goto after_24;
    // 0x60006FA0: nop

    after_24:
    // 0x60006FA4: b           L_60007298
    // 0x60006FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FAC:
    // 0x60006FAC: jal         0x60004E88
    // 0x60006FB0: nop

    ovl_stage_world4_4E88(rdram, ctx);
        goto after_25;
    // 0x60006FB0: nop

    after_25:
    // 0x60006FB4: b           L_60007298
    // 0x60006FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FBC:
    // 0x60006FBC: jal         0x60005040
    // 0x60006FC0: nop

    ovl_stage_world4_5040(rdram, ctx);
        goto after_26;
    // 0x60006FC0: nop

    after_26:
    // 0x60006FC4: b           L_60007298
    // 0x60006FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FCC:
    // 0x60006FCC: jal         0x60005200
    // 0x60006FD0: nop

    ovl_stage_world4_5200(rdram, ctx);
        goto after_27;
    // 0x60006FD0: nop

    after_27:
    // 0x60006FD4: b           L_60007298
    // 0x60006FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FDC:
    // 0x60006FDC: jal         0x600052BC
    // 0x60006FE0: nop

    ovl_stage_world4_52BC(rdram, ctx);
        goto after_28;
    // 0x60006FE0: nop

    after_28:
    // 0x60006FE4: b           L_60007298
    // 0x60006FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FEC:
    // 0x60006FEC: jal         0x600052FC
    // 0x60006FF0: nop

    ovl_stage_world4_52FC(rdram, ctx);
        goto after_29;
    // 0x60006FF0: nop

    after_29:
    // 0x60006FF4: b           L_60007298
    // 0x60006FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60006FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FFC:
    // 0x60006FFC: jal         0x60005344
    // 0x60007000: nop

    ovl_stage_world4_5344(rdram, ctx);
        goto after_30;
    // 0x60007000: nop

    after_30:
    // 0x60007004: b           L_60007298
    // 0x60007008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000700C:
    // 0x6000700C: jal         0x6000536C
    // 0x60007010: nop

    ovl_stage_world4_536C(rdram, ctx);
        goto after_31;
    // 0x60007010: nop

    after_31:
    // 0x60007014: b           L_60007298
    // 0x60007018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000701C:
    // 0x6000701C: jal         0x6000538C
    // 0x60007020: nop

    ovl_stage_world4_538C(rdram, ctx);
        goto after_32;
    // 0x60007020: nop

    after_32:
    // 0x60007024: b           L_60007298
    // 0x60007028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000702C:
    // 0x6000702C: jal         0x600053D4
    // 0x60007030: nop

    ovl_stage_world4_53D4(rdram, ctx);
        goto after_33;
    // 0x60007030: nop

    after_33:
    // 0x60007034: b           L_60007298
    // 0x60007038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000703C:
    // 0x6000703C: jal         0x600053FC
    // 0x60007040: nop

    ovl_stage_world4_53FC(rdram, ctx);
        goto after_34;
    // 0x60007040: nop

    after_34:
    // 0x60007044: b           L_60007298
    // 0x60007048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000704C:
    // 0x6000704C: jal         0x6000541C
    // 0x60007050: nop

    ovl_stage_world4_541C(rdram, ctx);
        goto after_35;
    // 0x60007050: nop

    after_35:
    // 0x60007054: b           L_60007298
    // 0x60007058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000705C:
    // 0x6000705C: jal         0x60005464
    // 0x60007060: nop

    ovl_stage_world4_5464(rdram, ctx);
        goto after_36;
    // 0x60007060: nop

    after_36:
    // 0x60007064: b           L_60007298
    // 0x60007068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000706C:
    // 0x6000706C: jal         0x6000548C
    // 0x60007070: nop

    ovl_stage_world4_548C(rdram, ctx);
        goto after_37;
    // 0x60007070: nop

    after_37:
    // 0x60007074: b           L_60007298
    // 0x60007078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000707C:
    // 0x6000707C: jal         0x6000568C
    // 0x60007080: nop

    ovl_stage_world4_568C(rdram, ctx);
        goto after_38;
    // 0x60007080: nop

    after_38:
    // 0x60007084: b           L_60007298
    // 0x60007088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000708C:
    // 0x6000708C: jal         0x600058E0
    // 0x60007090: nop

    ovl_stage_world4_58E0(rdram, ctx);
        goto after_39;
    // 0x60007090: nop

    after_39:
    // 0x60007094: b           L_60007298
    // 0x60007098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000709C:
    // 0x6000709C: jal         0x60005B04
    // 0x600070A0: nop

    ovl_stage_world4_5B04(rdram, ctx);
        goto after_40;
    // 0x600070A0: nop

    after_40:
    // 0x600070A4: b           L_60007298
    // 0x600070A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600070A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600070AC:
    // 0x600070AC: jal         0x60005E88
    // 0x600070B0: nop

    ovl_stage_world4_5E88(rdram, ctx);
        goto after_41;
    // 0x600070B0: nop

    after_41:
    // 0x600070B4: b           L_60007298
    // 0x600070B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600070B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600070BC:
    // 0x600070BC: jal         0x60005F38
    // 0x600070C0: nop

    ovl_stage_world4_5F38(rdram, ctx);
        goto after_42;
    // 0x600070C0: nop

    after_42:
    // 0x600070C4: b           L_60007298
    // 0x600070C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600070C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600070CC:
    // 0x600070CC: jal         0x60006054
    // 0x600070D0: nop

    ovl_stage_world4_6054(rdram, ctx);
        goto after_43;
    // 0x600070D0: nop

    after_43:
    // 0x600070D4: b           L_60007298
    // 0x600070D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600070D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600070DC:
    // 0x600070DC: jal         0x60006174
    // 0x600070E0: nop

    ovl_stage_world4_6174(rdram, ctx);
        goto after_44;
    // 0x600070E0: nop

    after_44:
    // 0x600070E4: b           L_60007298
    // 0x600070E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600070E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600070EC:
    // 0x600070EC: jal         0x600060E4
    // 0x600070F0: nop

    ovl_stage_world4_60E4(rdram, ctx);
        goto after_45;
    // 0x600070F0: nop

    after_45:
    // 0x600070F4: b           L_60007298
    // 0x600070F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600070F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600070FC:
    // 0x600070FC: jal         0x60006248
    // 0x60007100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_6248(rdram, ctx);
        goto after_46;
    // 0x60007100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_46:
    // 0x60007104: b           L_60007298
    // 0x60007108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000710C:
    // 0x6000710C: jal         0x60006248
    // 0x60007110: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_6248(rdram, ctx);
        goto after_47;
    // 0x60007110: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_47:
    // 0x60007114: b           L_60007298
    // 0x60007118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000711C:
    // 0x6000711C: jal         0x60006248
    // 0x60007120: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world4_6248(rdram, ctx);
        goto after_48;
    // 0x60007120: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_48:
    // 0x60007124: b           L_60007298
    // 0x60007128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000712C:
    // 0x6000712C: jal         0x600062BC
    // 0x60007130: nop

    ovl_stage_world4_62BC(rdram, ctx);
        goto after_49;
    // 0x60007130: nop

    after_49:
    // 0x60007134: b           L_60007298
    // 0x60007138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000713C:
    // 0x6000713C: jal         0x60006378
    // 0x60007140: nop

    ovl_stage_world4_6378(rdram, ctx);
        goto after_50;
    // 0x60007140: nop

    after_50:
    // 0x60007144: b           L_60007298
    // 0x60007148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000714C:
    // 0x6000714C: jal         0x60006434
    // 0x60007150: nop

    ovl_stage_world4_6434(rdram, ctx);
        goto after_51;
    // 0x60007150: nop

    after_51:
    // 0x60007154: b           L_60007298
    // 0x60007158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000715C:
    // 0x6000715C: jal         0x600064F0
    // 0x60007160: nop

    ovl_stage_world4_64F0(rdram, ctx);
        goto after_52;
    // 0x60007160: nop

    after_52:
    // 0x60007164: b           L_60007298
    // 0x60007168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000716C:
    // 0x6000716C: jal         0x60006568
    // 0x60007170: nop

    ovl_stage_world4_6568(rdram, ctx);
        goto after_53;
    // 0x60007170: nop

    after_53:
    // 0x60007174: b           L_60007298
    // 0x60007178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000717C:
    // 0x6000717C: jal         0x6000662C
    // 0x60007180: nop

    ovl_stage_world4_662C(rdram, ctx);
        goto after_54;
    // 0x60007180: nop

    after_54:
    // 0x60007184: b           L_60007298
    // 0x60007188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000718C:
    // 0x6000718C: jal         0x600066F4
    // 0x60007190: nop

    ovl_stage_world4_66F4(rdram, ctx);
        goto after_55;
    // 0x60007190: nop

    after_55:
    // 0x60007194: b           L_60007298
    // 0x60007198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000719C:
    // 0x6000719C: jal         0x600067B4
    // 0x600071A0: nop

    ovl_stage_world4_67B4(rdram, ctx);
        goto after_56;
    // 0x600071A0: nop

    after_56:
    // 0x600071A4: b           L_60007298
    // 0x600071A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600071A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600071AC:
    // 0x600071AC: jal         0x60006854
    // 0x600071B0: nop

    ovl_stage_world4_6854(rdram, ctx);
        goto after_57;
    // 0x600071B0: nop

    after_57:
    // 0x600071B4: b           L_60007298
    // 0x600071B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600071B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600071BC:
    // 0x600071BC: jal         0x60006894
    // 0x600071C0: nop

    ovl_stage_world4_6894(rdram, ctx);
        goto after_58;
    // 0x600071C0: nop

    after_58:
    // 0x600071C4: b           L_60007298
    // 0x600071C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600071C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600071CC:
    // 0x600071CC: jal         0x600068F4
    // 0x600071D0: nop

    ovl_stage_world4_68F4(rdram, ctx);
        goto after_59;
    // 0x600071D0: nop

    after_59:
    // 0x600071D4: b           L_60007298
    // 0x600071D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600071D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600071DC:
    // 0x600071DC: jal         0x60006B4C
    // 0x600071E0: nop

    ovl_stage_world4_6B4C(rdram, ctx);
        goto after_60;
    // 0x600071E0: nop

    after_60:
    // 0x600071E4: b           L_60007298
    // 0x600071E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600071E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600071EC:
    // 0x600071EC: jal         0x60006A34
    // 0x600071F0: nop

    ovl_stage_world4_6A34(rdram, ctx);
        goto after_61;
    // 0x600071F0: nop

    after_61:
    // 0x600071F4: b           L_60007298
    // 0x600071F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x600071F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600071FC:
    // 0x600071FC: jal         0x60000BB0
    // 0x60007200: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_62;
    // 0x60007200: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_62:
    // 0x60007204: bne         $v0, $zero, L_60007214
    if (ctx->r2 != 0) {
        // 0x60007208: nop
    
            goto L_60007214;
    }
    // 0x60007208: nop

    // 0x6000720C: jal         0x60001158
    // 0x60007210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_1158(rdram, ctx);
        goto after_63;
    // 0x60007210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_63:
L_60007214:
    // 0x60007214: jal         0x60000268
    // 0x60007218: nop

    ovl_stage_world4_268(rdram, ctx);
        goto after_64;
    // 0x60007218: nop

    after_64:
    // 0x6000721C: b           L_60007298
    // 0x60007220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60007224:
    // 0x60007224: jal         0x60000DE4
    // 0x60007228: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_65;
    // 0x60007228: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_65:
    // 0x6000722C: jal         0x60000CC4
    // 0x60007230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_66;
    // 0x60007230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_66:
    // 0x60007234: jal         0x60000A6C
    // 0x60007238: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_67;
    // 0x60007238: nop

    after_67:
    // 0x6000723C: jal         0x60000C7C
    // 0x60007240: nop

    ovl_stage_world4_C7C(rdram, ctx);
        goto after_68;
    // 0x60007240: nop

    after_68:
    // 0x60007244: b           L_60007298
    // 0x60007248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000724C:
    // 0x6000724C: jal         0x60000B98
    // 0x60007250: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_69;
    // 0x60007250: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_69:
    // 0x60007254: b           L_60007298
    // 0x60007258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000725C:
    // 0x6000725C: jal         0x60006D48
    // 0x60007260: nop

    ovl_stage_world4_6D48(rdram, ctx);
        goto after_70;
    // 0x60007260: nop

    after_70:
    // 0x60007264: b           L_60007298
    // 0x60007268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000726C:
    // 0x6000726C: jal         0x60006C84
    // 0x60007270: nop

    ovl_stage_world4_6C84(rdram, ctx);
        goto after_71;
    // 0x60007270: nop

    after_71:
    // 0x60007274: b           L_60007298
    // 0x60007278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000727C:
    // 0x6000727C: jal         0x600069D0
    // 0x60007280: nop

    ovl_stage_world4_69D0(rdram, ctx);
        goto after_72;
    // 0x60007280: nop

    after_72:
    // 0x60007284: b           L_60007298
    // 0x60007288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60007298;
    // 0x60007288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000728C:
    // 0x6000728C: jal         0x60000EE0
    // 0x60007290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_EE0(rdram, ctx);
        goto after_73;
    // 0x60007290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_73:
L_60007294:
    // 0x60007294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60007298:
    // 0x60007298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000729C: jr          $ra
    // 0x600072A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600072A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world8_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, -0x70C8
    ctx->r2 = ADD32(ctx->r2, -0X70C8);
    return;
    // 0x60000008: addiu       $v0, $v0, -0x70C8
    ctx->r2 = ADD32(ctx->r2, -0X70C8);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world8_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_DC(uint8_t* rdram, recomp_context* ctx) {
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
