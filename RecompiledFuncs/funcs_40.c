#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000670: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000674: jr          $t1
    // 0x40000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
;}
RECOMP_FUNC void ovl_actor_main_67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000067C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000680: jr          $t1
    // 0x40000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
;}
RECOMP_FUNC void ovl_actor_main_688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000688: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000068C: jr          $t1
    // 0x40000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
;}
RECOMP_FUNC void ovl_actor_main_694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000694: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000698: jr          $t1
    // 0x4000069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
;}
RECOMP_FUNC void ovl_actor_main_6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006A4: jr          $t1
    // 0x400006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
;}
RECOMP_FUNC void ovl_actor_main_6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006B0: jr          $t1
    // 0x400006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
;}
RECOMP_FUNC void ovl_actor_main_6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006BC: jr          $t1
    // 0x400006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
;}
RECOMP_FUNC void ovl_actor_main_6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006C8: jr          $t1
    // 0x400006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
;}
RECOMP_FUNC void ovl_actor_main_6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006D4: jr          $t1
    // 0x400006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
;}
RECOMP_FUNC void ovl_actor_main_6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006E0: jr          $t1
    // 0x400006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
;}
RECOMP_FUNC void ovl_actor_main_6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006EC: jr          $t1
    // 0x400006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
;}
RECOMP_FUNC void ovl_actor_main_6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400006F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400006F8: jr          $t1
    // 0x400006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
;}
RECOMP_FUNC void ovl_actor_main_700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000700: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000704: jr          $t1
    // 0x40000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
;}
RECOMP_FUNC void ovl_actor_main_70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000070C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000710: jr          $t1
    // 0x40000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
;}
RECOMP_FUNC void ovl_actor_main_718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000718: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000071C: jr          $t1
    // 0x40000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
;}
RECOMP_FUNC void ovl_actor_main_724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000724: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000728: jr          $t1
    // 0x4000072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
;}
RECOMP_FUNC void ovl_actor_main_730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000730: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000734: jr          $t1
    // 0x40000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
;}
RECOMP_FUNC void ovl_actor_main_73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000073C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000740: jr          $t1
    // 0x40000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
;}
RECOMP_FUNC void ovl_actor_main_748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000748: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000074C: jr          $t1
    // 0x40000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
;}
RECOMP_FUNC void ovl_actor_main_754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000754: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000758: jr          $t1
    // 0x4000075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
;}
RECOMP_FUNC void ovl_actor_main_760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000760: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000764: jr          $t1
    // 0x40000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
;}
RECOMP_FUNC void ovl_actor_main_76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000076C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000770: jr          $t1
    // 0x40000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
;}
RECOMP_FUNC void ovl_actor_main_778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000778: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000077C: jr          $t1
    // 0x40000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
;}
RECOMP_FUNC void ovl_actor_main_784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000784: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000788: jr          $t1
    // 0x4000078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
;}
RECOMP_FUNC void ovl_actor_main_790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000790: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000794: jr          $t1
    // 0x40000798: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000798: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
;}
RECOMP_FUNC void ovl_actor_main_79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000079C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007A0: jr          $t1
    // 0x400007A4: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007A4: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
;}
RECOMP_FUNC void ovl_actor_main_7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007AC: jr          $t1
    // 0x400007B0: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007B0: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
;}
RECOMP_FUNC void ovl_actor_main_7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007B8: jr          $t1
    // 0x400007BC: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007BC: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
;}
RECOMP_FUNC void ovl_actor_main_7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007C4: jr          $t1
    // 0x400007C8: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007C8: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
;}
RECOMP_FUNC void ovl_actor_main_7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007D0: jr          $t1
    // 0x400007D4: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007D4: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
;}
RECOMP_FUNC void ovl_actor_main_7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007DC: jr          $t1
    // 0x400007E0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007E0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
;}
RECOMP_FUNC void ovl_actor_main_7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007E8: jr          $t1
    // 0x400007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
;}
RECOMP_FUNC void ovl_actor_main_7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400007F4: jr          $t1
    // 0x400007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
;}
RECOMP_FUNC void ovl_actor_main_7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400007FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000800: jr          $t1
    // 0x40000804: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000804: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
;}
RECOMP_FUNC void ovl_actor_main_808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000808: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000080C: jr          $t1
    // 0x40000810: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000810: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
;}
RECOMP_FUNC void ovl_actor_main_814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000814: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000818: jr          $t1
    // 0x4000081C: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000081C: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
;}
RECOMP_FUNC void ovl_actor_main_820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000820: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000824: jr          $t1
    // 0x40000828: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000828: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
;}
RECOMP_FUNC void ovl_actor_main_82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000082C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000830: jr          $t1
    // 0x40000834: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000834: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
;}
RECOMP_FUNC void ovl_actor_main_838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000838: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000083C: jr          $t1
    // 0x40000840: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000840: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
;}
RECOMP_FUNC void ovl_actor_main_844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000844: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000848: jr          $t1
    // 0x4000084C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000084C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
;}
RECOMP_FUNC void ovl_actor_main_850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000850: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000854: jr          $t1
    // 0x40000858: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000858: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
;}
RECOMP_FUNC void ovl_actor_main_85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000085C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000860: jr          $t1
    // 0x40000864: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000864: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
;}
RECOMP_FUNC void ovl_actor_main_868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000868: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000086C: jr          $t1
    // 0x40000870: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000870: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
;}
RECOMP_FUNC void ovl_actor_main_874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000874: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000878: jr          $t1
    // 0x4000087C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000087C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
;}
RECOMP_FUNC void ovl_actor_main_880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000880: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000884: jr          $t1
    // 0x40000888: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000888: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
;}
RECOMP_FUNC void ovl_actor_main_88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000088C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000890: jr          $t1
    // 0x40000894: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000894: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
;}
RECOMP_FUNC void ovl_actor_main_898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000898: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000089C: jr          $t1
    // 0x400008A0: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400008A0: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
;}
RECOMP_FUNC void ovl_actor_main_8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400008A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400008A8: jr          $t1
    // 0x400008AC: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400008AC: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
;}
RECOMP_FUNC void ovl_actor_main_8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400008B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400008B4: jr          $t1
    // 0x400008B8: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400008B8: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
;}
RECOMP_FUNC void ovl_actor_main_8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400008BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400008C0: jr          $t1
    // 0x400008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
;}
