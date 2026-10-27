#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world2_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000260: jr          $t1
    // 0x43000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_enemy_world2_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300026C: jr          $t1
    // 0x43000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_enemy_world2_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000278: jr          $t1
    // 0x4300027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_enemy_world2_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000284: jr          $t1
    // 0x43000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_enemy_world2_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000290: jr          $t1
    // 0x43000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_enemy_world2_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300029C: jr          $t1
    // 0x430002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_enemy_world2_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002A8: jr          $t1
    // 0x430002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_enemy_world2_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002B4: jr          $t1
    // 0x430002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_enemy_world2_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002C0: jr          $t1
    // 0x430002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_enemy_world2_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002CC: jr          $t1
    // 0x430002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_enemy_world2_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002D8: jr          $t1
    // 0x430002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
RECOMP_FUNC void ovl_enemy_world2_2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002E4: jr          $t1
    // 0x430002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
;}
RECOMP_FUNC void ovl_enemy_world2_2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002F0: jr          $t1
    // 0x430002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
;}
RECOMP_FUNC void ovl_enemy_world2_2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002FC: jr          $t1
    // 0x43000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
;}
RECOMP_FUNC void ovl_enemy_world2_304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000304: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000308: jr          $t1
    // 0x4300030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
;}
RECOMP_FUNC void ovl_enemy_world2_310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000310: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000314: jr          $t1
    // 0x43000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
;}
RECOMP_FUNC void ovl_enemy_world2_31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300031C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000320: jr          $t1
    // 0x43000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
;}
RECOMP_FUNC void ovl_enemy_world2_328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000328: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300032C: jr          $t1
    // 0x43000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
;}
RECOMP_FUNC void ovl_enemy_world2_334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000334: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000338: jr          $t1
    // 0x4300033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
;}
RECOMP_FUNC void ovl_enemy_world2_340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000340: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000344: jr          $t1
    // 0x43000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
;}
RECOMP_FUNC void ovl_enemy_world2_34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300034C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000350: jr          $t1
    // 0x43000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
;}
RECOMP_FUNC void ovl_enemy_world2_358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000358: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300035C: jr          $t1
    // 0x43000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
;}
RECOMP_FUNC void ovl_enemy_world2_364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000364: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000368: jr          $t1
    // 0x4300036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
;}
RECOMP_FUNC void ovl_enemy_world2_370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000370: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000374: jr          $t1
    // 0x43000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
;}
RECOMP_FUNC void ovl_enemy_world2_37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300037C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000380: jr          $t1
    // 0x43000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
;}
RECOMP_FUNC void ovl_enemy_world2_388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000388: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300038C: jr          $t1
    // 0x43000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
;}
RECOMP_FUNC void ovl_enemy_world2_394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000394: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000398: jr          $t1
    // 0x4300039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
;}
RECOMP_FUNC void ovl_enemy_world2_3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003A4: jr          $t1
    // 0x430003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
;}
RECOMP_FUNC void ovl_enemy_world2_3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003B0: jr          $t1
    // 0x430003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
;}
RECOMP_FUNC void ovl_enemy_world2_3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003BC: jr          $t1
    // 0x430003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
;}
RECOMP_FUNC void ovl_enemy_world2_3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003C8: jr          $t1
    // 0x430003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
;}
RECOMP_FUNC void ovl_enemy_world2_3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003D4: jr          $t1
    // 0x430003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
;}
RECOMP_FUNC void ovl_enemy_world2_3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003E0: jr          $t1
    // 0x430003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
;}
RECOMP_FUNC void ovl_enemy_world2_3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003EC: jr          $t1
    // 0x430003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
;}
RECOMP_FUNC void ovl_enemy_world2_3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430003F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430003F8: jr          $t1
    // 0x430003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
;}
RECOMP_FUNC void ovl_enemy_world2_400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000400: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000404: jr          $t1
    // 0x43000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
;}
RECOMP_FUNC void ovl_enemy_world2_40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300040C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000410: jr          $t1
    // 0x43000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
;}
RECOMP_FUNC void ovl_enemy_world2_418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000418: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300041C: jr          $t1
    // 0x43000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
;}
RECOMP_FUNC void ovl_enemy_world2_424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000424: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000428: jr          $t1
    // 0x4300042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
;}
RECOMP_FUNC void ovl_enemy_world2_430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000430: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000434: jr          $t1
    // 0x43000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
;}
RECOMP_FUNC void ovl_enemy_world2_43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300043C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000440: jr          $t1
    // 0x43000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
;}
RECOMP_FUNC void ovl_enemy_world2_448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000448: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300044C: jr          $t1
    // 0x43000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
;}
RECOMP_FUNC void ovl_enemy_world2_454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000454: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000458: jr          $t1
    // 0x4300045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
;}
RECOMP_FUNC void ovl_enemy_world2_460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000460: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000464: jr          $t1
    // 0x43000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
;}
RECOMP_FUNC void ovl_enemy_world2_46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300046C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000470: jr          $t1
    // 0x43000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
;}
RECOMP_FUNC void ovl_enemy_world2_478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000478: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300047C: jr          $t1
    // 0x43000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
;}
RECOMP_FUNC void ovl_enemy_world2_484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000484: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000488: jr          $t1
    // 0x4300048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
;}
RECOMP_FUNC void ovl_enemy_world2_490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000490: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000494: jr          $t1
    // 0x43000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
;}
RECOMP_FUNC void ovl_enemy_world2_49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300049C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004A0: jr          $t1
    // 0x430004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
;}
RECOMP_FUNC void ovl_enemy_world2_4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004AC: jr          $t1
    // 0x430004B0: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004B0: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
;}
