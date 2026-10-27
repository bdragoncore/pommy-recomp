#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_flame_34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200034C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000350: jr          $t1
    // 0x42000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
;}
RECOMP_FUNC void ovl_blast_flame_358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000358: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200035C: jr          $t1
    // 0x42000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
;}
RECOMP_FUNC void ovl_blast_flame_364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000364: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000368: jr          $t1
    // 0x4200036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
;}
RECOMP_FUNC void ovl_blast_flame_370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000370: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000374: jr          $t1
    // 0x42000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
;}
RECOMP_FUNC void ovl_blast_flame_37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200037C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000380: jr          $t1
    // 0x42000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
;}
RECOMP_FUNC void ovl_blast_flame_388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000388: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200038C: jr          $t1
    // 0x42000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
;}
RECOMP_FUNC void ovl_blast_flame_394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000394: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000398: jr          $t1
    // 0x4200039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
;}
RECOMP_FUNC void ovl_blast_flame_3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003A4: jr          $t1
    // 0x420003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
;}
RECOMP_FUNC void ovl_blast_flame_3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003B0: jr          $t1
    // 0x420003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
;}
RECOMP_FUNC void ovl_blast_flame_3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003BC: jr          $t1
    // 0x420003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
;}
RECOMP_FUNC void ovl_blast_flame_3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003C8: jr          $t1
    // 0x420003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
;}
RECOMP_FUNC void ovl_blast_flame_3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003D4: jr          $t1
    // 0x420003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
;}
RECOMP_FUNC void ovl_blast_flame_3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003E0: jr          $t1
    // 0x420003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
;}
RECOMP_FUNC void ovl_blast_flame_3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003EC: jr          $t1
    // 0x420003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
;}
RECOMP_FUNC void ovl_blast_flame_3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420003F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420003F8: jr          $t1
    // 0x420003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
;}
RECOMP_FUNC void ovl_blast_flame_400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000400: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000404: jr          $t1
    // 0x42000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
;}
RECOMP_FUNC void ovl_blast_flame_40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200040C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000410: jr          $t1
    // 0x42000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
;}
RECOMP_FUNC void ovl_blast_flame_418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000418: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200041C: jr          $t1
    // 0x42000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000420: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
;}
RECOMP_FUNC void ovl_blast_flame_424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000424: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000428: jr          $t1
    // 0x4200042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200042C: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
;}
RECOMP_FUNC void ovl_blast_flame_430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000430: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000434: jr          $t1
    // 0x42000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000438: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
;}
RECOMP_FUNC void ovl_blast_flame_43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200043C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000440: jr          $t1
    // 0x42000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000444: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
;}
RECOMP_FUNC void ovl_blast_flame_448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000448: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200044C: jr          $t1
    // 0x42000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000450: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
;}
RECOMP_FUNC void ovl_blast_flame_454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000454: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000458: jr          $t1
    // 0x4200045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200045C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
;}
RECOMP_FUNC void ovl_blast_flame_460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000460: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000464: jr          $t1
    // 0x42000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000468: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
;}
RECOMP_FUNC void ovl_blast_flame_46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200046C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000470: jr          $t1
    // 0x42000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000474: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
;}
RECOMP_FUNC void ovl_blast_flame_478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000478: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200047C: jr          $t1
    // 0x42000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000480: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
;}
RECOMP_FUNC void ovl_blast_flame_484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000484: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000488: jr          $t1
    // 0x4200048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200048C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
;}
RECOMP_FUNC void ovl_blast_flame_490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000490: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000494: jr          $t1
    // 0x42000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000498: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
;}
RECOMP_FUNC void ovl_blast_flame_49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200049C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004A0: jr          $t1
    // 0x420004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004A4: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
;}
RECOMP_FUNC void ovl_blast_flame_4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004AC: jr          $t1
    // 0x420004B0: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004B0: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
;}
RECOMP_FUNC void ovl_blast_flame_4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004B8: jr          $t1
    // 0x420004BC: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004BC: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
;}
RECOMP_FUNC void ovl_blast_flame_4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004C4: jr          $t1
    // 0x420004C8: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004C8: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
;}
RECOMP_FUNC void ovl_blast_flame_4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004D0: jr          $t1
    // 0x420004D4: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004D4: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
;}
RECOMP_FUNC void ovl_blast_flame_4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004DC: jr          $t1
    // 0x420004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
;}
RECOMP_FUNC void ovl_blast_flame_4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004E8: jr          $t1
    // 0x420004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
;}
RECOMP_FUNC void ovl_blast_flame_4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420004F4: jr          $t1
    // 0x420004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
;}
RECOMP_FUNC void ovl_blast_flame_4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420004FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000500: jr          $t1
    // 0x42000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
;}
RECOMP_FUNC void ovl_blast_flame_508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000508: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200050C: jr          $t1
    // 0x42000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
;}
RECOMP_FUNC void ovl_blast_flame_514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000514: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000518: jr          $t1
    // 0x4200051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
;}
RECOMP_FUNC void ovl_blast_flame_520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000520: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000524: jr          $t1
    // 0x42000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
;}
RECOMP_FUNC void ovl_blast_flame_52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200052C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000530: jr          $t1
    // 0x42000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
;}
RECOMP_FUNC void ovl_blast_flame_538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000538: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200053C: jr          $t1
    // 0x42000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
;}
RECOMP_FUNC void ovl_blast_flame_544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000544: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000548: jr          $t1
    // 0x4200054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
;}
RECOMP_FUNC void ovl_blast_flame_550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000550: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000554: jr          $t1
    // 0x42000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
;}
RECOMP_FUNC void ovl_blast_flame_55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200055C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000560: jr          $t1
    // 0x42000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
;}
RECOMP_FUNC void ovl_blast_flame_568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000568: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200056C: jr          $t1
    // 0x42000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
;}
RECOMP_FUNC void ovl_blast_flame_574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000574: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000578: jr          $t1
    // 0x4200057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
;}
RECOMP_FUNC void ovl_blast_flame_580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000580: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000584: jr          $t1
    // 0x42000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
;}
RECOMP_FUNC void ovl_blast_flame_58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200058C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000590: jr          $t1
    // 0x42000594: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000594: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
;}
RECOMP_FUNC void ovl_blast_flame_598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000598: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200059C: jr          $t1
    // 0x420005A0: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005A0: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
;}
