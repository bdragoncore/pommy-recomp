#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_title_334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000334: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000338: jr          $t1
    // 0x6000033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
;}
RECOMP_FUNC void ovl_menu_title_340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000340: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000344: jr          $t1
    // 0x60000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
;}
RECOMP_FUNC void ovl_menu_title_34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000034C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000350: jr          $t1
    // 0x60000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
;}
RECOMP_FUNC void ovl_menu_title_358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000358: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000035C: jr          $t1
    // 0x60000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
;}
RECOMP_FUNC void ovl_menu_title_364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000364: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000368: jr          $t1
    // 0x6000036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
;}
RECOMP_FUNC void ovl_menu_title_370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000370: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000374: jr          $t1
    // 0x60000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
;}
RECOMP_FUNC void ovl_menu_title_37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000037C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000380: jr          $t1
    // 0x60000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
;}
RECOMP_FUNC void ovl_menu_title_388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000388: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000038C: jr          $t1
    // 0x60000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
;}
RECOMP_FUNC void ovl_menu_title_394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000394: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000398: jr          $t1
    // 0x6000039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
;}
RECOMP_FUNC void ovl_menu_title_3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003A4: jr          $t1
    // 0x600003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
;}
RECOMP_FUNC void ovl_menu_title_3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003B0: jr          $t1
    // 0x600003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
;}
RECOMP_FUNC void ovl_menu_title_3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003BC: jr          $t1
    // 0x600003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
;}
RECOMP_FUNC void ovl_menu_title_3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003C8: jr          $t1
    // 0x600003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
;}
RECOMP_FUNC void ovl_menu_title_3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003D4: jr          $t1
    // 0x600003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
;}
RECOMP_FUNC void ovl_menu_title_3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003E0: jr          $t1
    // 0x600003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
;}
RECOMP_FUNC void ovl_menu_title_3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003EC: jr          $t1
    // 0x600003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
;}
RECOMP_FUNC void ovl_menu_title_3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600003F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600003F8: jr          $t1
    // 0x600003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
;}
RECOMP_FUNC void ovl_menu_title_400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000400: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000404: jr          $t1
    // 0x60000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
;}
RECOMP_FUNC void ovl_menu_title_40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000040C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000410: jr          $t1
    // 0x60000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
;}
RECOMP_FUNC void ovl_menu_title_418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000418: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000041C: jr          $t1
    // 0x60000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
;}
RECOMP_FUNC void ovl_menu_title_424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000424: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000428: jr          $t1
    // 0x6000042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
;}
RECOMP_FUNC void ovl_menu_title_430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000430: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000434: jr          $t1
    // 0x60000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
;}
RECOMP_FUNC void ovl_menu_title_43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000043C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000440: jr          $t1
    // 0x60000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
;}
RECOMP_FUNC void ovl_menu_title_448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000448: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000044C: jr          $t1
    // 0x60000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
;}
RECOMP_FUNC void ovl_menu_title_454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000454: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000458: jr          $t1
    // 0x6000045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
;}
RECOMP_FUNC void ovl_menu_title_460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000460: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000464: jr          $t1
    // 0x60000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
;}
RECOMP_FUNC void ovl_menu_title_46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000046C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000470: jr          $t1
    // 0x60000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
;}
RECOMP_FUNC void ovl_menu_title_478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000478: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000047C: jr          $t1
    // 0x60000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
;}
RECOMP_FUNC void ovl_menu_title_484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000484: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000488: jr          $t1
    // 0x6000048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
;}
RECOMP_FUNC void ovl_menu_title_490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000490: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000494: jr          $t1
    // 0x60000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
;}
RECOMP_FUNC void ovl_menu_title_49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000049C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004A0: jr          $t1
    // 0x600004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
;}
RECOMP_FUNC void ovl_menu_title_4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004AC: jr          $t1
    // 0x600004B0: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004B0: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
;}
RECOMP_FUNC void ovl_menu_title_4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004B8: jr          $t1
    // 0x600004BC: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004BC: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
;}
RECOMP_FUNC void ovl_menu_title_4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004C4: jr          $t1
    // 0x600004C8: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004C8: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
;}
RECOMP_FUNC void ovl_menu_title_4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004D0: jr          $t1
    // 0x600004D4: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004D4: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
;}
RECOMP_FUNC void ovl_menu_title_4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004DC: jr          $t1
    // 0x600004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
;}
RECOMP_FUNC void ovl_menu_title_4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004E8: jr          $t1
    // 0x600004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
;}
RECOMP_FUNC void ovl_menu_title_4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004F4: jr          $t1
    // 0x600004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
;}
RECOMP_FUNC void ovl_menu_title_4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000500: jr          $t1
    // 0x60000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
;}
RECOMP_FUNC void ovl_menu_title_508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000508: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000050C: jr          $t1
    // 0x60000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
;}
RECOMP_FUNC void ovl_menu_title_514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000514: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000518: jr          $t1
    // 0x6000051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
;}
RECOMP_FUNC void ovl_menu_title_520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000520: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000524: jr          $t1
    // 0x60000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
;}
RECOMP_FUNC void ovl_menu_title_52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000052C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000530: jr          $t1
    // 0x60000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
;}
RECOMP_FUNC void ovl_menu_title_538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000538: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000053C: jr          $t1
    // 0x60000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
;}
RECOMP_FUNC void ovl_menu_title_544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000544: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000548: jr          $t1
    // 0x6000054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
;}
RECOMP_FUNC void ovl_menu_title_550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000550: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000554: jr          $t1
    // 0x60000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
;}
RECOMP_FUNC void ovl_menu_title_55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000055C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000560: jr          $t1
    // 0x60000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
;}
RECOMP_FUNC void ovl_menu_title_568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000568: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000056C: jr          $t1
    // 0x60000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
;}
RECOMP_FUNC void ovl_menu_title_574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000574: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000578: jr          $t1
    // 0x6000057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
;}
RECOMP_FUNC void ovl_menu_title_580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000580: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000584: jr          $t1
    // 0x60000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
;}
