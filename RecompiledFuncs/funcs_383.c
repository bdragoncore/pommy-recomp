#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world4_628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000628: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000062C: jr          $t1
    // 0x60000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
;}
RECOMP_FUNC void ovl_stage_world4_634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000634: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000638: jr          $t1
    // 0x6000063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
;}
RECOMP_FUNC void ovl_stage_world4_640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000640: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000644: jr          $t1
    // 0x60000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
;}
RECOMP_FUNC void ovl_stage_world4_64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000064C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000650: jr          $t1
    // 0x60000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
;}
RECOMP_FUNC void ovl_stage_world4_658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000658: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000065C: jr          $t1
    // 0x60000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
;}
RECOMP_FUNC void ovl_stage_world4_664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000664: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000668: jr          $t1
    // 0x6000066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
;}
RECOMP_FUNC void ovl_stage_world4_670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000670: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000674: jr          $t1
    // 0x60000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
;}
RECOMP_FUNC void ovl_stage_world4_67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000067C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000680: jr          $t1
    // 0x60000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
;}
RECOMP_FUNC void ovl_stage_world4_688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000688: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000068C: jr          $t1
    // 0x60000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
;}
RECOMP_FUNC void ovl_stage_world4_694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000694: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000698: jr          $t1
    // 0x6000069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
;}
RECOMP_FUNC void ovl_stage_world4_6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006A4: jr          $t1
    // 0x600006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
;}
RECOMP_FUNC void ovl_stage_world4_6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006B0: jr          $t1
    // 0x600006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
;}
RECOMP_FUNC void ovl_stage_world4_6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006BC: jr          $t1
    // 0x600006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
;}
RECOMP_FUNC void ovl_stage_world4_6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006C8: jr          $t1
    // 0x600006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
;}
RECOMP_FUNC void ovl_stage_world4_6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006D4: jr          $t1
    // 0x600006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
;}
RECOMP_FUNC void ovl_stage_world4_6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006E0: jr          $t1
    // 0x600006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
;}
RECOMP_FUNC void ovl_stage_world4_6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006EC: jr          $t1
    // 0x600006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
;}
RECOMP_FUNC void ovl_stage_world4_6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006F8: jr          $t1
    // 0x600006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
;}
RECOMP_FUNC void ovl_stage_world4_700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000700: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000704: jr          $t1
    // 0x60000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
;}
RECOMP_FUNC void ovl_stage_world4_70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000070C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000710: jr          $t1
    // 0x60000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
;}
RECOMP_FUNC void ovl_stage_world4_718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000718: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000071C: jr          $t1
    // 0x60000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
;}
RECOMP_FUNC void ovl_stage_world4_724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000724: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000728: jr          $t1
    // 0x6000072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
;}
RECOMP_FUNC void ovl_stage_world4_730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000730: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000734: jr          $t1
    // 0x60000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
;}
RECOMP_FUNC void ovl_stage_world4_73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000073C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000740: jr          $t1
    // 0x60000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
;}
RECOMP_FUNC void ovl_stage_world4_748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000748: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000074C: jr          $t1
    // 0x60000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
;}
RECOMP_FUNC void ovl_stage_world4_754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000754: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000758: jr          $t1
    // 0x6000075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
;}
RECOMP_FUNC void ovl_stage_world4_760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000760: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000764: jr          $t1
    // 0x60000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
;}
RECOMP_FUNC void ovl_stage_world4_76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000076C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000770: jr          $t1
    // 0x60000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
;}
RECOMP_FUNC void ovl_stage_world4_778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000778: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000077C: jr          $t1
    // 0x60000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
;}
RECOMP_FUNC void ovl_stage_world4_784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000784: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000788: jr          $t1
    // 0x6000078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
;}
RECOMP_FUNC void ovl_stage_world4_790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000790: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000794: jr          $t1
    // 0x60000798: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000798: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
;}
RECOMP_FUNC void ovl_stage_world4_79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000079C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007A0: jr          $t1
    // 0x600007A4: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007A4: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
;}
RECOMP_FUNC void ovl_stage_world4_7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007AC: jr          $t1
    // 0x600007B0: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007B0: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
;}
RECOMP_FUNC void ovl_stage_world4_7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007B8: jr          $t1
    // 0x600007BC: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007BC: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
;}
RECOMP_FUNC void ovl_stage_world4_7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007C4: jr          $t1
    // 0x600007C8: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007C8: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
;}
RECOMP_FUNC void ovl_stage_world4_7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007D0: jr          $t1
    // 0x600007D4: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007D4: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
;}
RECOMP_FUNC void ovl_stage_world4_7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007DC: jr          $t1
    // 0x600007E0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007E0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
;}
RECOMP_FUNC void ovl_stage_world4_7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007E8: jr          $t1
    // 0x600007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
;}
RECOMP_FUNC void ovl_stage_world4_7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600007F4: jr          $t1
    // 0x600007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
;}
RECOMP_FUNC void ovl_stage_world4_7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600007FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000800: jr          $t1
    // 0x60000804: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000804: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
;}
RECOMP_FUNC void ovl_stage_world4_808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000808: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000080C: jr          $t1
    // 0x60000810: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000810: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
;}
RECOMP_FUNC void ovl_stage_world4_814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000814: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000818: jr          $t1
    // 0x6000081C: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000081C: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
;}
RECOMP_FUNC void ovl_stage_world4_820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000820: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000824: jr          $t1
    // 0x60000828: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000828: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
;}
RECOMP_FUNC void ovl_stage_world4_82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000082C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000830: jr          $t1
    // 0x60000834: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000834: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
;}
RECOMP_FUNC void ovl_stage_world4_838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000838: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000083C: jr          $t1
    // 0x60000840: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000840: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
;}
RECOMP_FUNC void ovl_stage_world4_844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000844: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000848: jr          $t1
    // 0x6000084C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000084C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
;}
RECOMP_FUNC void ovl_stage_world4_850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000850: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000854: jr          $t1
    // 0x60000858: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000858: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
;}
RECOMP_FUNC void ovl_stage_world4_85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000085C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000860: jr          $t1
    // 0x60000864: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000864: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
;}
RECOMP_FUNC void ovl_stage_world4_868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000868: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000086C: jr          $t1
    // 0x60000870: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000870: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
;}
RECOMP_FUNC void ovl_stage_world4_874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000874: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000878: jr          $t1
    // 0x6000087C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000087C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
;}
