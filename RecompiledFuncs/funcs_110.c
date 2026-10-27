#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_ice_7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007E8: jr          $t1
    // 0x420007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
;}
RECOMP_FUNC void ovl_blast_ice_7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007F4: jr          $t1
    // 0x420007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
;}
RECOMP_FUNC void ovl_blast_ice_7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000800: jr          $t1
    // 0x42000804: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000804: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
;}
RECOMP_FUNC void ovl_blast_ice_808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000808: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200080C: jr          $t1
    // 0x42000810: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000810: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
;}
RECOMP_FUNC void ovl_blast_ice_814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000814: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000818: jr          $t1
    // 0x4200081C: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200081C: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
;}
RECOMP_FUNC void ovl_blast_ice_820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000820: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000824: jr          $t1
    // 0x42000828: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000828: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
;}
RECOMP_FUNC void ovl_blast_ice_82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200082C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000830: jr          $t1
    // 0x42000834: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000834: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
;}
RECOMP_FUNC void ovl_blast_ice_838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000838: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200083C: jr          $t1
    // 0x42000840: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000840: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
;}
RECOMP_FUNC void ovl_blast_ice_844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000844: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000848: jr          $t1
    // 0x4200084C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200084C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
;}
RECOMP_FUNC void ovl_blast_ice_850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000850: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000854: jr          $t1
    // 0x42000858: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000858: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
;}
RECOMP_FUNC void ovl_blast_ice_85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200085C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000860: jr          $t1
    // 0x42000864: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000864: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
;}
RECOMP_FUNC void ovl_blast_ice_868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000868: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200086C: jr          $t1
    // 0x42000870: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000870: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
;}
RECOMP_FUNC void ovl_blast_ice_874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000874: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000878: jr          $t1
    // 0x4200087C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200087C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
;}
RECOMP_FUNC void ovl_blast_ice_880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000880: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000884: jr          $t1
    // 0x42000888: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000888: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
;}
RECOMP_FUNC void ovl_blast_ice_88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200088C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000890: jr          $t1
    // 0x42000894: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000894: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
;}
RECOMP_FUNC void ovl_blast_ice_898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000898: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200089C: jr          $t1
    // 0x420008A0: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008A0: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
;}
RECOMP_FUNC void ovl_blast_ice_8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008A8: jr          $t1
    // 0x420008AC: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008AC: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
;}
RECOMP_FUNC void ovl_blast_ice_8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008B4: jr          $t1
    // 0x420008B8: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008B8: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
;}
RECOMP_FUNC void ovl_blast_ice_8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008C0: jr          $t1
    // 0x420008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
;}
RECOMP_FUNC void ovl_blast_ice_8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008CC: jr          $t1
    // 0x420008D0: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008D0: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
;}
RECOMP_FUNC void ovl_blast_ice_8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008D8: jr          $t1
    // 0x420008DC: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008DC: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
;}
RECOMP_FUNC void ovl_blast_ice_8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008E4: jr          $t1
    // 0x420008E8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008E8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
;}
RECOMP_FUNC void ovl_blast_ice_8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008F0: jr          $t1
    // 0x420008F4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420008F4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
;}
RECOMP_FUNC void ovl_blast_ice_8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420008F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420008FC: jr          $t1
    // 0x42000900: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000900: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
;}
RECOMP_FUNC void ovl_blast_ice_904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000904: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000908: jr          $t1
    // 0x4200090C: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200090C: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
;}
RECOMP_FUNC void ovl_blast_ice_910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000910: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000914: jr          $t1
    // 0x42000918: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000918: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
;}
RECOMP_FUNC void ovl_blast_ice_91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200091C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000920: jr          $t1
    // 0x42000924: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000924: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
;}
RECOMP_FUNC void ovl_blast_ice_928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000928: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200092C: jr          $t1
    // 0x42000930: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000930: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
;}
RECOMP_FUNC void ovl_blast_ice_934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000934: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000938: jr          $t1
    // 0x4200093C: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200093C: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
;}
RECOMP_FUNC void ovl_blast_ice_940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000940: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000944: jr          $t1
    // 0x42000948: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000948: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
;}
RECOMP_FUNC void ovl_blast_ice_94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200094C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000950: jr          $t1
    // 0x42000954: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000954: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
;}
RECOMP_FUNC void ovl_blast_ice_958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000958: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200095C: jr          $t1
    // 0x42000960: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000960: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
;}
RECOMP_FUNC void ovl_blast_ice_964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000964: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000968: jr          $t1
    // 0x4200096C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200096C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
;}
RECOMP_FUNC void ovl_blast_ice_970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000970: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000974: jr          $t1
    // 0x42000978: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000978: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
;}
RECOMP_FUNC void ovl_blast_ice_97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200097C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000980: jr          $t1
    // 0x42000984: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000984: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
;}
RECOMP_FUNC void ovl_blast_ice_988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000988: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200098C: jr          $t1
    // 0x42000990: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000990: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
;}
RECOMP_FUNC void ovl_blast_ice_994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000994: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000998: jr          $t1
    // 0x4200099C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200099C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
;}
RECOMP_FUNC void ovl_blast_ice_9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009A4: jr          $t1
    // 0x420009A8: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009A8: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
;}
RECOMP_FUNC void ovl_blast_ice_9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009B0: jr          $t1
    // 0x420009B4: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009B4: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
;}
RECOMP_FUNC void ovl_blast_ice_9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009BC: jr          $t1
    // 0x420009C0: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009C0: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
;}
RECOMP_FUNC void ovl_blast_ice_9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009C8: jr          $t1
    // 0x420009CC: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009CC: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
;}
RECOMP_FUNC void ovl_blast_ice_9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009D4: jr          $t1
    // 0x420009D8: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009D8: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
;}
RECOMP_FUNC void ovl_blast_ice_9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009E0: jr          $t1
    // 0x420009E4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009E4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
;}
RECOMP_FUNC void ovl_blast_ice_9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009EC: jr          $t1
    // 0x420009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
;}
RECOMP_FUNC void ovl_blast_ice_9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420009F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420009F8: jr          $t1
    // 0x420009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
;}
RECOMP_FUNC void ovl_blast_ice_A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000A00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000A04: jr          $t1
    // 0x42000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
;}
RECOMP_FUNC void ovl_blast_ice_A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000A0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000A10: jr          $t1
    // 0x42000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
;}
RECOMP_FUNC void ovl_blast_ice_A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000A18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000A1C: jr          $t1
    // 0x42000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
;}
RECOMP_FUNC void ovl_blast_ice_A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000A24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000A28: jr          $t1
    // 0x42000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
;}
RECOMP_FUNC void ovl_blast_ice_A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000A30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000A34: jr          $t1
    // 0x42000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
;}
