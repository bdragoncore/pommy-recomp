#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_dark_A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000A9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AA0: jr          $t1
    // 0x42000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AA4: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
;}
RECOMP_FUNC void ovl_blast_dark_AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AAC: jr          $t1
    // 0x42000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AB0: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
;}
RECOMP_FUNC void ovl_blast_dark_AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AB8: jr          $t1
    // 0x42000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000ABC: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
;}
RECOMP_FUNC void ovl_blast_dark_AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AC4: jr          $t1
    // 0x42000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AC8: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
;}
RECOMP_FUNC void ovl_blast_dark_ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000ACC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AD0: jr          $t1
    // 0x42000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AD4: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
;}
RECOMP_FUNC void ovl_blast_dark_AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000ADC: jr          $t1
    // 0x42000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AE0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
;}
RECOMP_FUNC void ovl_blast_dark_AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AE8: jr          $t1
    // 0x42000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AEC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
;}
RECOMP_FUNC void ovl_blast_dark_AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000AF4: jr          $t1
    // 0x42000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000AF8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
;}
RECOMP_FUNC void ovl_blast_dark_AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000AFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B00: jr          $t1
    // 0x42000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B04: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
;}
RECOMP_FUNC void ovl_blast_dark_B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B0C: jr          $t1
    // 0x42000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B10: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
;}
RECOMP_FUNC void ovl_blast_dark_B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B18: jr          $t1
    // 0x42000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
;}
RECOMP_FUNC void ovl_blast_dark_B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B24: jr          $t1
    // 0x42000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
;}
RECOMP_FUNC void ovl_blast_dark_B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B30: jr          $t1
    // 0x42000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
;}
RECOMP_FUNC void ovl_blast_dark_B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B3C: jr          $t1
    // 0x42000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
;}
RECOMP_FUNC void ovl_blast_dark_B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B48: jr          $t1
    // 0x42000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
;}
RECOMP_FUNC void ovl_blast_dark_B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B54: jr          $t1
    // 0x42000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
;}
RECOMP_FUNC void ovl_blast_dark_B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B60: jr          $t1
    // 0x42000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
;}
RECOMP_FUNC void ovl_blast_dark_B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B6C: jr          $t1
    // 0x42000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
;}
RECOMP_FUNC void ovl_blast_dark_B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B78: jr          $t1
    // 0x42000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
;}
RECOMP_FUNC void ovl_blast_dark_B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B84: jr          $t1
    // 0x42000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
;}
RECOMP_FUNC void ovl_blast_dark_B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B90: jr          $t1
    // 0x42000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
;}
RECOMP_FUNC void ovl_blast_dark_B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000B98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000B9C: jr          $t1
    // 0x42000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
;}
RECOMP_FUNC void ovl_blast_dark_BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BA8: jr          $t1
    // 0x42000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
;}
RECOMP_FUNC void ovl_blast_dark_BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BB4: jr          $t1
    // 0x42000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
;}
RECOMP_FUNC void ovl_blast_dark_BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BC0: jr          $t1
    // 0x42000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
;}
RECOMP_FUNC void ovl_blast_dark_BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BCC: jr          $t1
    // 0x42000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
;}
RECOMP_FUNC void ovl_blast_dark_BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BD8: jr          $t1
    // 0x42000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
;}
RECOMP_FUNC void ovl_blast_dark_BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BE4: jr          $t1
    // 0x42000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
;}
RECOMP_FUNC void ovl_blast_dark_BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BF0: jr          $t1
    // 0x42000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
;}
RECOMP_FUNC void ovl_blast_dark_BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000BF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000BFC: jr          $t1
    // 0x42000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
;}
RECOMP_FUNC void ovl_blast_dark_C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C08: jr          $t1
    // 0x42000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
;}
RECOMP_FUNC void ovl_blast_dark_C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C14: jr          $t1
    // 0x42000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
;}
RECOMP_FUNC void ovl_blast_dark_C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C20: jr          $t1
    // 0x42000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
;}
RECOMP_FUNC void ovl_blast_dark_C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C2C: jr          $t1
    // 0x42000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
;}
RECOMP_FUNC void ovl_blast_dark_C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C38: jr          $t1
    // 0x42000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
;}
RECOMP_FUNC void ovl_blast_dark_C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C44: jr          $t1
    // 0x42000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
;}
RECOMP_FUNC void ovl_blast_dark_C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C4C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C50: jr          $t1
    // 0x42000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
;}
RECOMP_FUNC void ovl_blast_dark_C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C58: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C5C: jr          $t1
    // 0x42000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
;}
RECOMP_FUNC void ovl_blast_dark_C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C64: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C68: jr          $t1
    // 0x42000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
;}
RECOMP_FUNC void ovl_blast_dark_C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C70: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C74: jr          $t1
    // 0x42000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
;}
RECOMP_FUNC void ovl_blast_dark_C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C7C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C80: jr          $t1
    // 0x42000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
;}
RECOMP_FUNC void ovl_blast_dark_C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C88: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C8C: jr          $t1
    // 0x42000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
;}
RECOMP_FUNC void ovl_blast_dark_C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000C94: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000C98: jr          $t1
    // 0x42000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
;}
RECOMP_FUNC void ovl_blast_dark_CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CA0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CA4: jr          $t1
    // 0x42000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
;}
RECOMP_FUNC void ovl_blast_dark_CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CAC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CB0: jr          $t1
    // 0x42000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
;}
RECOMP_FUNC void ovl_blast_dark_CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CB8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CBC: jr          $t1
    // 0x42000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
;}
RECOMP_FUNC void ovl_blast_dark_CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CC4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CC8: jr          $t1
    // 0x42000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
;}
RECOMP_FUNC void ovl_blast_dark_CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CD0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CD4: jr          $t1
    // 0x42000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
;}
RECOMP_FUNC void ovl_blast_dark_CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CE0: jr          $t1
    // 0x42000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
;}
RECOMP_FUNC void ovl_blast_dark_CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CEC: jr          $t1
    // 0x42000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
;}
