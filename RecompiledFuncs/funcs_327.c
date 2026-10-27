#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_battle_874(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_880(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_88C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_898(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8A4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8B0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8BC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8C8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8D4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8E0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8EC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_8F8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_904(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_910(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_91C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_928(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_934(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_940(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_94C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_958(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_964(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_970(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_97C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_988(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_994(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_battle_9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009EC: jr          $t1
    // 0x600009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
;}
RECOMP_FUNC void ovl_menu_battle_9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600009F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600009F8: jr          $t1
    // 0x600009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
;}
RECOMP_FUNC void ovl_menu_battle_A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A04: jr          $t1
    // 0x60000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
;}
RECOMP_FUNC void ovl_menu_battle_A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A10: jr          $t1
    // 0x60000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
;}
RECOMP_FUNC void ovl_menu_battle_A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A1C: jr          $t1
    // 0x60000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
;}
RECOMP_FUNC void ovl_menu_battle_A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A28: jr          $t1
    // 0x60000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
;}
RECOMP_FUNC void ovl_menu_battle_A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A34: jr          $t1
    // 0x60000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
;}
RECOMP_FUNC void ovl_menu_battle_A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A40: jr          $t1
    // 0x60000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
;}
RECOMP_FUNC void ovl_menu_battle_A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A4C: jr          $t1
    // 0x60000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
;}
RECOMP_FUNC void ovl_menu_battle_A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A58: jr          $t1
    // 0x60000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
;}
RECOMP_FUNC void ovl_menu_battle_A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A64: jr          $t1
    // 0x60000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
;}
RECOMP_FUNC void ovl_menu_battle_A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A70: jr          $t1
    // 0x60000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
;}
RECOMP_FUNC void ovl_menu_battle_A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A7C: jr          $t1
    // 0x60000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
;}
RECOMP_FUNC void ovl_menu_battle_A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A88: jr          $t1
    // 0x60000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
;}
RECOMP_FUNC void ovl_menu_battle_A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000A94: jr          $t1
    // 0x60000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
;}
RECOMP_FUNC void ovl_menu_battle_A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000A9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AA0: jr          $t1
    // 0x60000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
;}
RECOMP_FUNC void ovl_menu_battle_AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AAC: jr          $t1
    // 0x60000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
;}
RECOMP_FUNC void ovl_menu_battle_AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AB8: jr          $t1
    // 0x60000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
;}
RECOMP_FUNC void ovl_menu_battle_AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000AC4: jr          $t1
    // 0x60000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
;}
