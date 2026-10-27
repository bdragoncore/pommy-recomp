#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_custom_790(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_79C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7A8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7B4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7C0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7CC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7D8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7E4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7F0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_7FC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_808(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_814(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_820(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_82C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_838(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_844(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_850(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_85C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_868(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_874(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000880: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000884: jr          $t1
    // 0x60000888: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000888: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
;}
RECOMP_FUNC void ovl_menu_custom_88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000088C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000890: jr          $t1
    // 0x60000894: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000894: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
;}
RECOMP_FUNC void ovl_menu_custom_898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000898: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000089C: jr          $t1
    // 0x600008A0: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008A0: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
;}
RECOMP_FUNC void ovl_menu_custom_8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008A8: jr          $t1
    // 0x600008AC: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008AC: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
;}
RECOMP_FUNC void ovl_menu_custom_8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008B4: jr          $t1
    // 0x600008B8: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008B8: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
;}
RECOMP_FUNC void ovl_menu_custom_8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008C0: jr          $t1
    // 0x600008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
;}
RECOMP_FUNC void ovl_menu_custom_8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008CC: jr          $t1
    // 0x600008D0: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008D0: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
;}
RECOMP_FUNC void ovl_menu_custom_8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008D8: jr          $t1
    // 0x600008DC: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008DC: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
;}
RECOMP_FUNC void ovl_menu_custom_8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008E4: jr          $t1
    // 0x600008E8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008E8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
;}
RECOMP_FUNC void ovl_menu_custom_8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008F0: jr          $t1
    // 0x600008F4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600008F4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
;}
RECOMP_FUNC void ovl_menu_custom_8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600008F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600008FC: jr          $t1
    // 0x60000900: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000900: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
;}
RECOMP_FUNC void ovl_menu_custom_904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000904: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000908: jr          $t1
    // 0x6000090C: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000090C: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
;}
RECOMP_FUNC void ovl_menu_custom_910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000910: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000914: jr          $t1
    // 0x60000918: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000918: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
;}
RECOMP_FUNC void ovl_menu_custom_91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000091C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000920: jr          $t1
    // 0x60000924: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000924: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
;}
RECOMP_FUNC void ovl_menu_custom_928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000928: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000092C: jr          $t1
    // 0x60000930: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000930: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
;}
RECOMP_FUNC void ovl_menu_custom_934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000934: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000938: jr          $t1
    // 0x6000093C: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000093C: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
;}
RECOMP_FUNC void ovl_menu_custom_940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000940: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000944: jr          $t1
    // 0x60000948: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000948: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
;}
RECOMP_FUNC void ovl_menu_custom_94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000094C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000950: jr          $t1
    // 0x60000954: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000954: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
;}
RECOMP_FUNC void ovl_menu_custom_958(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_964(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_970(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_97C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_988(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_994(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_9A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_9AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_9B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_9C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_9D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_9DC(uint8_t* rdram, recomp_context* ctx) {
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
