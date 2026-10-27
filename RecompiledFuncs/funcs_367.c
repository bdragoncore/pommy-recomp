#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world3_700(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_70C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_718(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_724(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_730(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_73C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_748(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_754(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_760(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_76C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_778(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_784(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_790(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_79C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7A8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7B4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7C0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7CC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7D8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7E4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7F0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7FC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_808(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_814(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_820(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_82C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_838(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_844(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_850(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_85C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_868(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_874(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_880(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_88C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_898(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8A4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8B0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8BC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8C8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8D4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8E0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8EC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_8F8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_904(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_910(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_91C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_928(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_934(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_940(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_94C(uint8_t* rdram, recomp_context* ctx) {
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
