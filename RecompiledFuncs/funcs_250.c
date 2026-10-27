#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_battle_8FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008FF8: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x43008FFC: nop

    // 0x43009000: addiu       $t7, $t6, -0x19
    ctx->r15 = ADD32(ctx->r14, -0X19);
    // 0x43009004: sltiu       $at, $t7, 0x1D
    ctx->r1 = ctx->r15 < 0X1D ? 1 : 0;
    // 0x43009008: beq         $at, $zero, L_43009068
    if (ctx->r1 == 0) {
        // 0x4300900C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43009068;
    }
    // 0x4300900C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43009010: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009014: addu        $at, $at, $t7
    gpr jr_addend_43009020 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43009018: lw          $t7, -0x67D8($at)
    ctx->r15 = ADD32(ctx->r1, -0X67D8);
    // 0x4300901C: nop

    // 0x43009020: jr          $t7
    // 0x43009024: nop

    switch (jr_addend_43009020 >> 2) {
        case 0: goto L_43009028; break;
        case 1: goto L_43009068; break;
        case 2: goto L_43009034; break;
        case 3: goto L_43009068; break;
        case 4: goto L_43009068; break;
        case 5: goto L_43009068; break;
        case 6: goto L_43009068; break;
        case 7: goto L_43009068; break;
        case 8: goto L_43009068; break;
        case 9: goto L_43009068; break;
        case 10: goto L_43009040; break;
        case 11: goto L_43009068; break;
        case 12: goto L_43009068; break;
        case 13: goto L_43009068; break;
        case 14: goto L_43009068; break;
        case 15: goto L_43009068; break;
        case 16: goto L_43009068; break;
        case 17: goto L_43009068; break;
        case 18: goto L_43009068; break;
        case 19: goto L_43009068; break;
        case 20: goto L_43009068; break;
        case 21: goto L_43009068; break;
        case 22: goto L_43009068; break;
        case 23: goto L_43009068; break;
        case 24: goto L_43009068; break;
        case 25: goto L_43009068; break;
        case 26: goto L_4300904C; break;
        case 27: goto L_43009068; break;
        case 28: goto L_43009058; break;
        default: switch_error(__func__, 0x43009020, 0x43009828);
    }
    // 0x43009024: nop

L_43009028:
    // 0x43009028: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300902C: b           L_43009060
    // 0x43009030: addiu       $v0, $v0, -0x7134
    ctx->r2 = ADD32(ctx->r2, -0X7134);
        goto L_43009060;
    // 0x43009030: addiu       $v0, $v0, -0x7134
    ctx->r2 = ADD32(ctx->r2, -0X7134);
L_43009034:
    // 0x43009034: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009038: b           L_43009060
    // 0x4300903C: addiu       $v0, $v0, -0x71D8
    ctx->r2 = ADD32(ctx->r2, -0X71D8);
        goto L_43009060;
    // 0x4300903C: addiu       $v0, $v0, -0x71D8
    ctx->r2 = ADD32(ctx->r2, -0X71D8);
L_43009040:
    // 0x43009040: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009044: b           L_43009060
    // 0x43009048: addiu       $v0, $v0, -0x7274
    ctx->r2 = ADD32(ctx->r2, -0X7274);
        goto L_43009060;
    // 0x43009048: addiu       $v0, $v0, -0x7274
    ctx->r2 = ADD32(ctx->r2, -0X7274);
L_4300904C:
    // 0x4300904C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009050: b           L_43009060
    // 0x43009054: addiu       $v0, $v0, -0x7318
    ctx->r2 = ADD32(ctx->r2, -0X7318);
        goto L_43009060;
    // 0x43009054: addiu       $v0, $v0, -0x7318
    ctx->r2 = ADD32(ctx->r2, -0X7318);
L_43009058:
    // 0x43009058: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300905C: addiu       $v0, $v0, -0x7090
    ctx->r2 = ADD32(ctx->r2, -0X7090);
L_43009060:
    // 0x43009060: jalr        $v0
    // 0x43009064: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x43009064: nop

    after_0:
L_43009068:
    // 0x43009068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300906C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009070: jr          $ra
    // 0x43009074: nop

    return;
    // 0x43009074: nop

;}
RECOMP_FUNC void ovl_coll_main_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000000: lui         $v0, 0x4400
    ctx->r2 = S32(0X4400 << 16);
    // 0x44000004: jr          $ra
    // 0x44000008: addiu       $v0, $v0, 0x1E14
    ctx->r2 = ADD32(ctx->r2, 0X1E14);
    return;
    // 0x44000008: addiu       $v0, $v0, 0x1E14
    ctx->r2 = ADD32(ctx->r2, 0X1E14);
    // 0x4400000C: nop

;}
RECOMP_FUNC void ovl_coll_main_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000014: jr          $t1
    // 0x44000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_coll_main_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000020: jr          $t1
    // 0x44000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_coll_main_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400002C: jr          $t1
    // 0x44000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_coll_main_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000038: jr          $t1
    // 0x4400003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_coll_main_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000044: jr          $t1
    // 0x44000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_coll_main_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000050: jr          $t1
    // 0x44000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_coll_main_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400005C: jr          $t1
    // 0x44000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_coll_main_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000068: jr          $t1
    // 0x4400006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_coll_main_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000074: jr          $t1
    // 0x44000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_coll_main_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000080: jr          $t1
    // 0x44000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_coll_main_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400008C: jr          $t1
    // 0x44000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_coll_main_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000098: jr          $t1
    // 0x4400009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_coll_main_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000A4: jr          $t1
    // 0x440000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_coll_main_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000B0: jr          $t1
    // 0x440000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_coll_main_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000BC: jr          $t1
    // 0x440000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_coll_main_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000C8: jr          $t1
    // 0x440000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_coll_main_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000D4: jr          $t1
    // 0x440000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_coll_main_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000E0: jr          $t1
    // 0x440000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_coll_main_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000EC: jr          $t1
    // 0x440000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_coll_main_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440000F8: jr          $t1
    // 0x440000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_coll_main_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000104: jr          $t1
    // 0x44000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_coll_main_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000110: jr          $t1
    // 0x44000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_coll_main_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400011C: jr          $t1
    // 0x44000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_coll_main_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000128: jr          $t1
    // 0x4400012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_coll_main_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000134: jr          $t1
    // 0x44000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_coll_main_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000140: jr          $t1
    // 0x44000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_coll_main_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400014C: jr          $t1
    // 0x44000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_coll_main_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000158: jr          $t1
    // 0x4400015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_coll_main_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000164: jr          $t1
    // 0x44000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_coll_main_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000170: jr          $t1
    // 0x44000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_coll_main_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400017C: jr          $t1
    // 0x44000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_coll_main_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000188: jr          $t1
    // 0x4400018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_coll_main_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000194: jr          $t1
    // 0x44000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_coll_main_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001A0: jr          $t1
    // 0x440001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_coll_main_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001AC: jr          $t1
    // 0x440001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_coll_main_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001B8: jr          $t1
    // 0x440001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_coll_main_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001C4: jr          $t1
    // 0x440001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_coll_main_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001D0: jr          $t1
    // 0x440001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_coll_main_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001DC: jr          $t1
    // 0x440001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_coll_main_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001E8: jr          $t1
    // 0x440001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_coll_main_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440001F4: jr          $t1
    // 0x440001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_coll_main_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000200: jr          $t1
    // 0x44000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_coll_main_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400020C: jr          $t1
    // 0x44000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_coll_main_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000218: jr          $t1
    // 0x4400021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_coll_main_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000224: jr          $t1
    // 0x44000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_coll_main_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000230: jr          $t1
    // 0x44000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_coll_main_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400023C: jr          $t1
    // 0x44000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_coll_main_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000248: jr          $t1
    // 0x4400024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
