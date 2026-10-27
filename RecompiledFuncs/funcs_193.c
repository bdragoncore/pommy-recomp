#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world4_A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000A9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AA0: jr          $t1
    // 0x43000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
;}
RECOMP_FUNC void ovl_enemy_world4_AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AAC: jr          $t1
    // 0x43000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
;}
RECOMP_FUNC void ovl_enemy_world4_AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AB8: jr          $t1
    // 0x43000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
;}
RECOMP_FUNC void ovl_enemy_world4_AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AC4: jr          $t1
    // 0x43000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
;}
RECOMP_FUNC void ovl_enemy_world4_ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000ACC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AD0: jr          $t1
    // 0x43000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
;}
RECOMP_FUNC void ovl_enemy_world4_AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000ADC: jr          $t1
    // 0x43000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
;}
RECOMP_FUNC void ovl_enemy_world4_AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AE8: jr          $t1
    // 0x43000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
;}
RECOMP_FUNC void ovl_enemy_world4_AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000AF4: jr          $t1
    // 0x43000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
;}
RECOMP_FUNC void ovl_enemy_world4_AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000AFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B00: jr          $t1
    // 0x43000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
;}
RECOMP_FUNC void ovl_enemy_world4_B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B0C: jr          $t1
    // 0x43000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
;}
RECOMP_FUNC void ovl_enemy_world4_B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B18: jr          $t1
    // 0x43000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
;}
RECOMP_FUNC void ovl_enemy_world4_B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B24: jr          $t1
    // 0x43000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
;}
RECOMP_FUNC void ovl_enemy_world4_B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B30: jr          $t1
    // 0x43000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
;}
RECOMP_FUNC void ovl_enemy_world4_B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B3C: jr          $t1
    // 0x43000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
;}
RECOMP_FUNC void ovl_enemy_world4_B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B48: jr          $t1
    // 0x43000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
;}
RECOMP_FUNC void ovl_enemy_world4_B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B54: jr          $t1
    // 0x43000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
;}
RECOMP_FUNC void ovl_enemy_world4_B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B60: jr          $t1
    // 0x43000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
;}
RECOMP_FUNC void ovl_enemy_world4_B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B6C: jr          $t1
    // 0x43000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
;}
RECOMP_FUNC void ovl_enemy_world4_B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B78: jr          $t1
    // 0x43000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
;}
RECOMP_FUNC void ovl_enemy_world4_B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B84: jr          $t1
    // 0x43000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
;}
RECOMP_FUNC void ovl_enemy_world4_B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B90: jr          $t1
    // 0x43000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
;}
RECOMP_FUNC void ovl_enemy_world4_B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000B98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000B9C: jr          $t1
    // 0x43000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
;}
RECOMP_FUNC void ovl_enemy_world4_BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BA8: jr          $t1
    // 0x43000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
;}
RECOMP_FUNC void ovl_enemy_world4_BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BB4: jr          $t1
    // 0x43000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
;}
RECOMP_FUNC void ovl_enemy_world4_BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BC0: jr          $t1
    // 0x43000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
;}
RECOMP_FUNC void ovl_enemy_world4_BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BCC: jr          $t1
    // 0x43000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
;}
RECOMP_FUNC void ovl_enemy_world4_BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BD8: jr          $t1
    // 0x43000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
;}
RECOMP_FUNC void ovl_enemy_world4_BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BE4: jr          $t1
    // 0x43000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
;}
RECOMP_FUNC void ovl_enemy_world4_BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BF0: jr          $t1
    // 0x43000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
;}
RECOMP_FUNC void ovl_enemy_world4_BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000BF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000BFC: jr          $t1
    // 0x43000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
;}
RECOMP_FUNC void ovl_enemy_world4_C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C08: jr          $t1
    // 0x43000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
;}
RECOMP_FUNC void ovl_enemy_world4_C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C14: jr          $t1
    // 0x43000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
;}
RECOMP_FUNC void ovl_enemy_world4_C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C20: jr          $t1
    // 0x43000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
;}
RECOMP_FUNC void ovl_enemy_world4_C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C2C: jr          $t1
    // 0x43000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
;}
RECOMP_FUNC void ovl_enemy_world4_C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C38: jr          $t1
    // 0x43000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
;}
RECOMP_FUNC void ovl_enemy_world4_C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C44: jr          $t1
    // 0x43000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
;}
RECOMP_FUNC void ovl_enemy_world4_C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C4C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C50: jr          $t1
    // 0x43000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
;}
RECOMP_FUNC void ovl_enemy_world4_C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C58: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C5C: jr          $t1
    // 0x43000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
;}
RECOMP_FUNC void ovl_enemy_world4_C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C64: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C68: jr          $t1
    // 0x43000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
;}
RECOMP_FUNC void ovl_enemy_world4_C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C70: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C74: jr          $t1
    // 0x43000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
;}
RECOMP_FUNC void ovl_enemy_world4_C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C7C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C80: jr          $t1
    // 0x43000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
;}
RECOMP_FUNC void ovl_enemy_world4_C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C88: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C8C: jr          $t1
    // 0x43000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
;}
RECOMP_FUNC void ovl_enemy_world4_C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000C94: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000C98: jr          $t1
    // 0x43000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
;}
RECOMP_FUNC void ovl_enemy_world4_CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CA0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CA4: jr          $t1
    // 0x43000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
;}
RECOMP_FUNC void ovl_enemy_world4_CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CAC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CB0: jr          $t1
    // 0x43000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
;}
RECOMP_FUNC void ovl_enemy_world4_CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CB8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CBC: jr          $t1
    // 0x43000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
;}
RECOMP_FUNC void ovl_enemy_world4_CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CC4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CC8: jr          $t1
    // 0x43000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
;}
RECOMP_FUNC void ovl_enemy_world4_CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CD0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CD4: jr          $t1
    // 0x43000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
;}
RECOMP_FUNC void ovl_enemy_world4_CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CE0: jr          $t1
    // 0x43000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
;}
RECOMP_FUNC void ovl_enemy_world4_CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000CE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000CEC: jr          $t1
    // 0x43000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
;}
