#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world5_2E0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_2EC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_2F8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_304(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_310(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_31C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_328(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_334(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_340(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_34C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_358(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_364(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_370(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_37C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_388(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_394(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_3F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_400(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_40C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_418(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_424(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_430(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_43C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_448(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_454(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_460(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_46C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_478(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_484(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_490(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_49C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_4A8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world5_4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004B8: jr          $t1
    // 0x430004BC: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004BC: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
;}
RECOMP_FUNC void ovl_enemy_world5_4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004C4: jr          $t1
    // 0x430004C8: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004C8: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
;}
RECOMP_FUNC void ovl_enemy_world5_4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004D0: jr          $t1
    // 0x430004D4: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004D4: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
;}
RECOMP_FUNC void ovl_enemy_world5_4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004DC: jr          $t1
    // 0x430004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
;}
RECOMP_FUNC void ovl_enemy_world5_4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004E8: jr          $t1
    // 0x430004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
;}
RECOMP_FUNC void ovl_enemy_world5_4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430004F4: jr          $t1
    // 0x430004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
;}
RECOMP_FUNC void ovl_enemy_world5_4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430004FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000500: jr          $t1
    // 0x43000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
;}
RECOMP_FUNC void ovl_enemy_world5_508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000508: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300050C: jr          $t1
    // 0x43000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
;}
RECOMP_FUNC void ovl_enemy_world5_514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000514: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000518: jr          $t1
    // 0x4300051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
;}
RECOMP_FUNC void ovl_enemy_world5_520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000520: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000524: jr          $t1
    // 0x43000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
;}
RECOMP_FUNC void ovl_enemy_world5_52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300052C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000530: jr          $t1
    // 0x43000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
;}
