#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_coll_main_250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000250: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000254: jr          $t1
    // 0x44000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
;}
RECOMP_FUNC void ovl_coll_main_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000260: jr          $t1
    // 0x44000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_coll_main_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400026C: jr          $t1
    // 0x44000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_coll_main_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000278: jr          $t1
    // 0x4400027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_coll_main_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000284: jr          $t1
    // 0x44000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_coll_main_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000290: jr          $t1
    // 0x44000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_coll_main_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400029C: jr          $t1
    // 0x440002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_coll_main_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002A8: jr          $t1
    // 0x440002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_coll_main_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002B4: jr          $t1
    // 0x440002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_coll_main_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002C0: jr          $t1
    // 0x440002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_coll_main_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002CC: jr          $t1
    // 0x440002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_coll_main_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002D8: jr          $t1
    // 0x440002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
RECOMP_FUNC void ovl_coll_main_2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002E4: jr          $t1
    // 0x440002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
;}
RECOMP_FUNC void ovl_coll_main_2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002F0: jr          $t1
    // 0x440002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
;}
RECOMP_FUNC void ovl_coll_main_2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440002F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440002FC: jr          $t1
    // 0x44000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
;}
RECOMP_FUNC void ovl_coll_main_304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000304: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000308: jr          $t1
    // 0x4400030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
;}
RECOMP_FUNC void ovl_coll_main_310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000310: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000314: jr          $t1
    // 0x44000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
;}
RECOMP_FUNC void ovl_coll_main_31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400031C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000320: jr          $t1
    // 0x44000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
;}
RECOMP_FUNC void ovl_coll_main_328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000328: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400032C: jr          $t1
    // 0x44000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
;}
RECOMP_FUNC void ovl_coll_main_334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000334: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000338: jr          $t1
    // 0x4400033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
;}
RECOMP_FUNC void ovl_coll_main_340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000340: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000344: jr          $t1
    // 0x44000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
;}
RECOMP_FUNC void ovl_coll_main_34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400034C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000350: jr          $t1
    // 0x44000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
;}
RECOMP_FUNC void ovl_coll_main_358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000358: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400035C: jr          $t1
    // 0x44000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
;}
RECOMP_FUNC void ovl_coll_main_364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000364: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000368: jr          $t1
    // 0x4400036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
;}
RECOMP_FUNC void ovl_coll_main_370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000370: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000374: jr          $t1
    // 0x44000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
;}
RECOMP_FUNC void ovl_coll_main_37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400037C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000380: jr          $t1
    // 0x44000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
;}
RECOMP_FUNC void ovl_coll_main_388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000388: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400038C: jr          $t1
    // 0x44000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
;}
RECOMP_FUNC void ovl_coll_main_394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000394: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000398: jr          $t1
    // 0x4400039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
;}
RECOMP_FUNC void ovl_coll_main_3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003A4: jr          $t1
    // 0x440003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
;}
RECOMP_FUNC void ovl_coll_main_3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003B0: jr          $t1
    // 0x440003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
;}
RECOMP_FUNC void ovl_coll_main_3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003BC: jr          $t1
    // 0x440003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
;}
RECOMP_FUNC void ovl_coll_main_3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003C8: jr          $t1
    // 0x440003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
;}
RECOMP_FUNC void ovl_coll_main_3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003D4: jr          $t1
    // 0x440003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
;}
RECOMP_FUNC void ovl_coll_main_3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003E0: jr          $t1
    // 0x440003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
;}
RECOMP_FUNC void ovl_coll_main_3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003EC: jr          $t1
    // 0x440003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
;}
RECOMP_FUNC void ovl_coll_main_3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440003F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440003F8: jr          $t1
    // 0x440003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
;}
RECOMP_FUNC void ovl_coll_main_400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000400: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000404: jr          $t1
    // 0x44000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
;}
RECOMP_FUNC void ovl_coll_main_40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400040C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000410: jr          $t1
    // 0x44000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
;}
RECOMP_FUNC void ovl_coll_main_418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000418: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400041C: jr          $t1
    // 0x44000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
;}
RECOMP_FUNC void ovl_coll_main_424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000424: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000428: jr          $t1
    // 0x4400042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
;}
RECOMP_FUNC void ovl_coll_main_430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000430: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000434: jr          $t1
    // 0x44000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
;}
RECOMP_FUNC void ovl_coll_main_43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400043C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000440: jr          $t1
    // 0x44000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
;}
RECOMP_FUNC void ovl_coll_main_448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000448: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400044C: jr          $t1
    // 0x44000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
;}
RECOMP_FUNC void ovl_coll_main_454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000454: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000458: jr          $t1
    // 0x4400045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
;}
RECOMP_FUNC void ovl_coll_main_460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000460: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000464: jr          $t1
    // 0x44000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
;}
RECOMP_FUNC void ovl_coll_main_46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400046C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000470: jr          $t1
    // 0x44000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
;}
RECOMP_FUNC void ovl_coll_main_478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000478: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4400047C: jr          $t1
    // 0x44000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
;}
RECOMP_FUNC void ovl_coll_main_484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000484: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000488: jr          $t1
    // 0x4400048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4400048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
;}
RECOMP_FUNC void ovl_coll_main_490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000490: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000494: jr          $t1
    // 0x44000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
;}
RECOMP_FUNC void ovl_coll_main_49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400049C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x440004A0: jr          $t1
    // 0x440004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x440004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
;}
