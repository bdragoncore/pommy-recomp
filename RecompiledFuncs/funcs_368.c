#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world3_958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000958: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000095C: jr          $t1
    // 0x60000960: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000960: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
;}
RECOMP_FUNC void ovl_stage_world3_964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000964: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000968: jr          $t1
    // 0x6000096C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000096C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
;}
RECOMP_FUNC void ovl_stage_world3_970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000970: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000974: jr          $t1
    // 0x60000978: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000978: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
;}
RECOMP_FUNC void ovl_stage_world3_97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000097C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000980: jr          $t1
    // 0x60000984: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000984: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
;}
RECOMP_FUNC void ovl_stage_world3_988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000988: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000098C: jr          $t1
    // 0x60000990: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000990: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
;}
RECOMP_FUNC void ovl_stage_world3_994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000994: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000998: jr          $t1
    // 0x6000099C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000099C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
;}
RECOMP_FUNC void ovl_stage_world3_9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009A4: jr          $t1
    // 0x600009A8: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009A8: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
;}
RECOMP_FUNC void ovl_stage_world3_9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009B0: jr          $t1
    // 0x600009B4: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009B4: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
;}
RECOMP_FUNC void ovl_stage_world3_9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009BC: jr          $t1
    // 0x600009C0: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009C0: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
;}
RECOMP_FUNC void ovl_stage_world3_9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009C8: jr          $t1
    // 0x600009CC: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009CC: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
;}
RECOMP_FUNC void ovl_stage_world3_9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009D4: jr          $t1
    // 0x600009D8: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009D8: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
;}
RECOMP_FUNC void ovl_stage_world3_9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009E0: jr          $t1
    // 0x600009E4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009E4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
;}
RECOMP_FUNC void ovl_stage_world3_9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009EC: jr          $t1
    // 0x600009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
;}
RECOMP_FUNC void ovl_stage_world3_9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009F8: jr          $t1
    // 0x600009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
;}
RECOMP_FUNC void ovl_stage_world3_A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A04: jr          $t1
    // 0x60000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
;}
RECOMP_FUNC void ovl_stage_world3_A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A10: jr          $t1
    // 0x60000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
;}
RECOMP_FUNC void ovl_stage_world3_A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A1C: jr          $t1
    // 0x60000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
;}
RECOMP_FUNC void ovl_stage_world3_A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A28: jr          $t1
    // 0x60000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
;}
RECOMP_FUNC void ovl_stage_world3_A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A34: jr          $t1
    // 0x60000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
;}
RECOMP_FUNC void ovl_stage_world3_A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A40: jr          $t1
    // 0x60000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
;}
RECOMP_FUNC void ovl_stage_world3_A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A4C: jr          $t1
    // 0x60000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
;}
RECOMP_FUNC void ovl_stage_world3_A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A58: jr          $t1
    // 0x60000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
;}
RECOMP_FUNC void ovl_stage_world3_A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A64: jr          $t1
    // 0x60000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
;}
RECOMP_FUNC void ovl_stage_world3_A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A70: jr          $t1
    // 0x60000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
;}
RECOMP_FUNC void ovl_stage_world3_A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A7C: jr          $t1
    // 0x60000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
;}
RECOMP_FUNC void ovl_stage_world3_A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A88: jr          $t1
    // 0x60000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
;}
RECOMP_FUNC void ovl_stage_world3_A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A94: jr          $t1
    // 0x60000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
;}
RECOMP_FUNC void ovl_stage_world3_A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AA0: jr          $t1
    // 0x60000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
;}
RECOMP_FUNC void ovl_stage_world3_AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AAC: jr          $t1
    // 0x60000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
;}
RECOMP_FUNC void ovl_stage_world3_AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AB8: jr          $t1
    // 0x60000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
;}
RECOMP_FUNC void ovl_stage_world3_AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AC4: jr          $t1
    // 0x60000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
;}
RECOMP_FUNC void ovl_stage_world3_ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000ACC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AD0: jr          $t1
    // 0x60000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
;}
RECOMP_FUNC void ovl_stage_world3_AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000ADC: jr          $t1
    // 0x60000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
;}
RECOMP_FUNC void ovl_stage_world3_AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AE8: jr          $t1
    // 0x60000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
;}
RECOMP_FUNC void ovl_stage_world3_AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AF4: jr          $t1
    // 0x60000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
;}
RECOMP_FUNC void ovl_stage_world3_AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B00: jr          $t1
    // 0x60000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
;}
RECOMP_FUNC void ovl_stage_world3_B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B0C: jr          $t1
    // 0x60000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
;}
RECOMP_FUNC void ovl_stage_world3_B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B18: jr          $t1
    // 0x60000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
;}
RECOMP_FUNC void ovl_stage_world3_B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B24: jr          $t1
    // 0x60000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
;}
RECOMP_FUNC void ovl_stage_world3_B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B30: jr          $t1
    // 0x60000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
;}
RECOMP_FUNC void ovl_stage_world3_B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B3C: jr          $t1
    // 0x60000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
;}
RECOMP_FUNC void ovl_stage_world3_B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B48: jr          $t1
    // 0x60000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
;}
RECOMP_FUNC void ovl_stage_world3_B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B54: jr          $t1
    // 0x60000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
;}
RECOMP_FUNC void ovl_stage_world3_B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B60: jr          $t1
    // 0x60000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
;}
RECOMP_FUNC void ovl_stage_world3_B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B6C: jr          $t1
    // 0x60000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
;}
RECOMP_FUNC void ovl_stage_world3_B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B78: jr          $t1
    // 0x60000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
;}
RECOMP_FUNC void ovl_stage_world3_B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B84: jr          $t1
    // 0x60000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
;}
RECOMP_FUNC void ovl_stage_world3_B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B90: jr          $t1
    // 0x60000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
;}
RECOMP_FUNC void ovl_stage_world3_B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B9C: jr          $t1
    // 0x60000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
;}
RECOMP_FUNC void ovl_stage_world3_BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BA8: jr          $t1
    // 0x60000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
;}
