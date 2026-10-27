#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450009E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450009EC: jr          $t1
    // 0x450009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
;}
RECOMP_FUNC void ovl_mobj_main_9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450009F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450009F8: jr          $t1
    // 0x450009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
;}
RECOMP_FUNC void ovl_mobj_main_A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A04: jr          $t1
    // 0x45000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
;}
RECOMP_FUNC void ovl_mobj_main_A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A10: jr          $t1
    // 0x45000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
;}
RECOMP_FUNC void ovl_mobj_main_A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A1C: jr          $t1
    // 0x45000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
;}
RECOMP_FUNC void ovl_mobj_main_A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A28: jr          $t1
    // 0x45000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
;}
RECOMP_FUNC void ovl_mobj_main_A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A34: jr          $t1
    // 0x45000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
;}
RECOMP_FUNC void ovl_mobj_main_A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A40: jr          $t1
    // 0x45000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
;}
RECOMP_FUNC void ovl_mobj_main_A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A4C: jr          $t1
    // 0x45000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
;}
RECOMP_FUNC void ovl_mobj_main_A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A58: jr          $t1
    // 0x45000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
;}
RECOMP_FUNC void ovl_mobj_main_A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A64: jr          $t1
    // 0x45000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
;}
RECOMP_FUNC void ovl_mobj_main_A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A70: jr          $t1
    // 0x45000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
;}
RECOMP_FUNC void ovl_mobj_main_A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A7C: jr          $t1
    // 0x45000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
;}
RECOMP_FUNC void ovl_mobj_main_A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A88: jr          $t1
    // 0x45000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
;}
RECOMP_FUNC void ovl_mobj_main_A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000A94: jr          $t1
    // 0x45000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
;}
RECOMP_FUNC void ovl_mobj_main_A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000A9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AA0: jr          $t1
    // 0x45000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
;}
RECOMP_FUNC void ovl_mobj_main_AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AAC: jr          $t1
    // 0x45000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
;}
RECOMP_FUNC void ovl_mobj_main_AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AB8: jr          $t1
    // 0x45000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
;}
RECOMP_FUNC void ovl_mobj_main_AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AC4: jr          $t1
    // 0x45000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
;}
RECOMP_FUNC void ovl_mobj_main_ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000ACC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AD0: jr          $t1
    // 0x45000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
;}
RECOMP_FUNC void ovl_mobj_main_AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000ADC: jr          $t1
    // 0x45000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
;}
RECOMP_FUNC void ovl_mobj_main_AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AE8: jr          $t1
    // 0x45000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
;}
RECOMP_FUNC void ovl_mobj_main_AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000AF4: jr          $t1
    // 0x45000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
;}
RECOMP_FUNC void ovl_mobj_main_AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000AFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B00: jr          $t1
    // 0x45000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
;}
RECOMP_FUNC void ovl_mobj_main_B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B0C: jr          $t1
    // 0x45000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
;}
RECOMP_FUNC void ovl_mobj_main_B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B18: jr          $t1
    // 0x45000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
;}
RECOMP_FUNC void ovl_mobj_main_B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B24: jr          $t1
    // 0x45000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
;}
RECOMP_FUNC void ovl_mobj_main_B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B30: jr          $t1
    // 0x45000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
;}
RECOMP_FUNC void ovl_mobj_main_B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B3C: jr          $t1
    // 0x45000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
;}
RECOMP_FUNC void ovl_mobj_main_B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B48: jr          $t1
    // 0x45000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
;}
RECOMP_FUNC void ovl_mobj_main_B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B54: jr          $t1
    // 0x45000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
;}
RECOMP_FUNC void ovl_mobj_main_B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B60: jr          $t1
    // 0x45000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
;}
RECOMP_FUNC void ovl_mobj_main_B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B6C: jr          $t1
    // 0x45000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
;}
RECOMP_FUNC void ovl_mobj_main_B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B78: jr          $t1
    // 0x45000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
;}
RECOMP_FUNC void ovl_mobj_main_B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B84: jr          $t1
    // 0x45000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
;}
RECOMP_FUNC void ovl_mobj_main_B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B90: jr          $t1
    // 0x45000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
;}
RECOMP_FUNC void ovl_mobj_main_B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000B98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000B9C: jr          $t1
    // 0x45000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
;}
RECOMP_FUNC void ovl_mobj_main_BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BA8: jr          $t1
    // 0x45000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
;}
RECOMP_FUNC void ovl_mobj_main_BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BB4: jr          $t1
    // 0x45000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
;}
RECOMP_FUNC void ovl_mobj_main_BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BC0: jr          $t1
    // 0x45000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
;}
RECOMP_FUNC void ovl_mobj_main_BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BCC: jr          $t1
    // 0x45000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
;}
RECOMP_FUNC void ovl_mobj_main_BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BD8: jr          $t1
    // 0x45000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
;}
RECOMP_FUNC void ovl_mobj_main_BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BE4: jr          $t1
    // 0x45000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
;}
RECOMP_FUNC void ovl_mobj_main_BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BF0: jr          $t1
    // 0x45000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
;}
RECOMP_FUNC void ovl_mobj_main_BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000BF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000BFC: jr          $t1
    // 0x45000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
;}
RECOMP_FUNC void ovl_mobj_main_C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000C04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000C08: jr          $t1
    // 0x45000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
;}
RECOMP_FUNC void ovl_mobj_main_C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000C10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000C14: jr          $t1
    // 0x45000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
;}
RECOMP_FUNC void ovl_mobj_main_C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000C1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000C20: jr          $t1
    // 0x45000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
;}
RECOMP_FUNC void ovl_mobj_main_C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000C28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000C2C: jr          $t1
    // 0x45000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
;}
RECOMP_FUNC void ovl_mobj_main_C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000C34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000C38: jr          $t1
    // 0x45000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
;}
