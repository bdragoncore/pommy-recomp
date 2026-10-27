#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_item_main_8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410008BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410008C0: jr          $t1
    // 0x410008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410008C4: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
;}
RECOMP_FUNC void ovl_item_main_8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410008C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410008CC: jr          $t1
    // 0x410008D0: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410008D0: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
;}
RECOMP_FUNC void ovl_item_main_8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410008D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410008D8: jr          $t1
    // 0x410008DC: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410008DC: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
;}
RECOMP_FUNC void ovl_item_main_8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410008E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410008E4: jr          $t1
    // 0x410008E8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410008E8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
;}
RECOMP_FUNC void ovl_item_main_8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410008EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410008F0: jr          $t1
    // 0x410008F4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410008F4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
;}
RECOMP_FUNC void ovl_item_main_8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410008F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410008FC: jr          $t1
    // 0x41000900: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000900: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
;}
RECOMP_FUNC void ovl_item_main_904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000904: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000908: jr          $t1
    // 0x4100090C: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100090C: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
;}
RECOMP_FUNC void ovl_item_main_910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000910: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000914: jr          $t1
    // 0x41000918: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000918: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
;}
RECOMP_FUNC void ovl_item_main_91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100091C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000920: jr          $t1
    // 0x41000924: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000924: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
;}
RECOMP_FUNC void ovl_item_main_928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000928: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100092C: jr          $t1
    // 0x41000930: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000930: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
;}
RECOMP_FUNC void ovl_item_main_934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000934: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000938: jr          $t1
    // 0x4100093C: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100093C: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
;}
RECOMP_FUNC void ovl_item_main_940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000940: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000944: jr          $t1
    // 0x41000948: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000948: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
;}
RECOMP_FUNC void ovl_item_main_94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100094C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000950: jr          $t1
    // 0x41000954: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000954: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
;}
RECOMP_FUNC void ovl_item_main_958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000958: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100095C: jr          $t1
    // 0x41000960: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000960: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
;}
RECOMP_FUNC void ovl_item_main_964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000964: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000968: jr          $t1
    // 0x4100096C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100096C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
;}
RECOMP_FUNC void ovl_item_main_970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000970: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000974: jr          $t1
    // 0x41000978: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000978: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
;}
RECOMP_FUNC void ovl_item_main_97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100097C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000980: jr          $t1
    // 0x41000984: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000984: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
;}
RECOMP_FUNC void ovl_item_main_988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000988: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100098C: jr          $t1
    // 0x41000990: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000990: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
;}
RECOMP_FUNC void ovl_item_main_994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000994: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000998: jr          $t1
    // 0x4100099C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100099C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
;}
RECOMP_FUNC void ovl_item_main_9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009A4: jr          $t1
    // 0x410009A8: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009A8: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
;}
RECOMP_FUNC void ovl_item_main_9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009B0: jr          $t1
    // 0x410009B4: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009B4: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
;}
RECOMP_FUNC void ovl_item_main_9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009BC: jr          $t1
    // 0x410009C0: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009C0: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
;}
RECOMP_FUNC void ovl_item_main_9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009C8: jr          $t1
    // 0x410009CC: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009CC: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
;}
RECOMP_FUNC void ovl_item_main_9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009D4: jr          $t1
    // 0x410009D8: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009D8: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
;}
RECOMP_FUNC void ovl_item_main_9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009E0: jr          $t1
    // 0x410009E4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009E4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
;}
RECOMP_FUNC void ovl_item_main_9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009EC: jr          $t1
    // 0x410009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009F0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
;}
RECOMP_FUNC void ovl_item_main_9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410009F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410009F8: jr          $t1
    // 0x410009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410009FC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
;}
RECOMP_FUNC void ovl_item_main_A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A04: jr          $t1
    // 0x41000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A08: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
;}
RECOMP_FUNC void ovl_item_main_A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A10: jr          $t1
    // 0x41000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A14: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
;}
RECOMP_FUNC void ovl_item_main_A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A1C: jr          $t1
    // 0x41000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A20: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
;}
RECOMP_FUNC void ovl_item_main_A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A28: jr          $t1
    // 0x41000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A2C: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
;}
RECOMP_FUNC void ovl_item_main_A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A34: jr          $t1
    // 0x41000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A38: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
;}
RECOMP_FUNC void ovl_item_main_A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A40: jr          $t1
    // 0x41000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A44: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
;}
RECOMP_FUNC void ovl_item_main_A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A4C: jr          $t1
    // 0x41000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A50: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
;}
RECOMP_FUNC void ovl_item_main_A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A58: jr          $t1
    // 0x41000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A5C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
;}
RECOMP_FUNC void ovl_item_main_A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A64: jr          $t1
    // 0x41000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A68: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
;}
RECOMP_FUNC void ovl_item_main_A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A70: jr          $t1
    // 0x41000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A74: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
;}
RECOMP_FUNC void ovl_item_main_A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A7C: jr          $t1
    // 0x41000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A80: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
;}
RECOMP_FUNC void ovl_item_main_A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A88: jr          $t1
    // 0x41000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A8C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
;}
RECOMP_FUNC void ovl_item_main_A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000A94: jr          $t1
    // 0x41000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000A98: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
;}
RECOMP_FUNC void ovl_item_main_A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000A9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AA0: jr          $t1
    // 0x41000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
;}
RECOMP_FUNC void ovl_item_main_AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AAC: jr          $t1
    // 0x41000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
;}
RECOMP_FUNC void ovl_item_main_AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AB8: jr          $t1
    // 0x41000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
;}
RECOMP_FUNC void ovl_item_main_AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AC4: jr          $t1
    // 0x41000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
;}
RECOMP_FUNC void ovl_item_main_ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000ACC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AD0: jr          $t1
    // 0x41000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
;}
RECOMP_FUNC void ovl_item_main_AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000ADC: jr          $t1
    // 0x41000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
;}
RECOMP_FUNC void ovl_item_main_AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AE8: jr          $t1
    // 0x41000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
;}
RECOMP_FUNC void ovl_item_main_AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000AF4: jr          $t1
    // 0x41000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
;}
RECOMP_FUNC void ovl_item_main_AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000AFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B00: jr          $t1
    // 0x41000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
;}
RECOMP_FUNC void ovl_item_main_B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B0C: jr          $t1
    // 0x41000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
;}
