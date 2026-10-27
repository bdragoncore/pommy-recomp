#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_item_main_B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B18: jr          $t1
    // 0x41000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B1C: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
;}
RECOMP_FUNC void ovl_item_main_B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B24: jr          $t1
    // 0x41000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B28: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
;}
RECOMP_FUNC void ovl_item_main_B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B30: jr          $t1
    // 0x41000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B34: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
;}
RECOMP_FUNC void ovl_item_main_B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B3C: jr          $t1
    // 0x41000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
;}
RECOMP_FUNC void ovl_item_main_B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B48: jr          $t1
    // 0x41000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
;}
RECOMP_FUNC void ovl_item_main_B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B54: jr          $t1
    // 0x41000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
;}
RECOMP_FUNC void ovl_item_main_B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B60: jr          $t1
    // 0x41000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
;}
RECOMP_FUNC void ovl_item_main_B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B6C: jr          $t1
    // 0x41000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
;}
RECOMP_FUNC void ovl_item_main_B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B78: jr          $t1
    // 0x41000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
;}
RECOMP_FUNC void ovl_item_main_B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B84: jr          $t1
    // 0x41000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
;}
RECOMP_FUNC void ovl_item_main_B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B90: jr          $t1
    // 0x41000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
;}
RECOMP_FUNC void ovl_item_main_B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000B98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000B9C: jr          $t1
    // 0x41000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
;}
RECOMP_FUNC void ovl_item_main_BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BA8: jr          $t1
    // 0x41000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
;}
RECOMP_FUNC void ovl_item_main_BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BB4: jr          $t1
    // 0x41000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
;}
RECOMP_FUNC void ovl_item_main_BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BC0: jr          $t1
    // 0x41000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
;}
RECOMP_FUNC void ovl_item_main_BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BCC: jr          $t1
    // 0x41000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
;}
RECOMP_FUNC void ovl_item_main_BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BD8: jr          $t1
    // 0x41000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
;}
RECOMP_FUNC void ovl_item_main_BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BE4: jr          $t1
    // 0x41000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
;}
RECOMP_FUNC void ovl_item_main_BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BF0: jr          $t1
    // 0x41000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
;}
RECOMP_FUNC void ovl_item_main_BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000BF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000BFC: jr          $t1
    // 0x41000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
;}
RECOMP_FUNC void ovl_item_main_C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C08: jr          $t1
    // 0x41000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
;}
RECOMP_FUNC void ovl_item_main_C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C14: jr          $t1
    // 0x41000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
;}
RECOMP_FUNC void ovl_item_main_C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C20: jr          $t1
    // 0x41000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
;}
RECOMP_FUNC void ovl_item_main_C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C2C: jr          $t1
    // 0x41000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
;}
RECOMP_FUNC void ovl_item_main_C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C38: jr          $t1
    // 0x41000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
;}
RECOMP_FUNC void ovl_item_main_C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C44: jr          $t1
    // 0x41000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
;}
RECOMP_FUNC void ovl_item_main_C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C4C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C50: jr          $t1
    // 0x41000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
;}
RECOMP_FUNC void ovl_item_main_C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C58: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C5C: jr          $t1
    // 0x41000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
;}
RECOMP_FUNC void ovl_item_main_C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C64: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C68: jr          $t1
    // 0x41000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
;}
RECOMP_FUNC void ovl_item_main_C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C70: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C74: jr          $t1
    // 0x41000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
;}
RECOMP_FUNC void ovl_item_main_C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C7C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C80: jr          $t1
    // 0x41000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
;}
RECOMP_FUNC void ovl_item_main_C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C88: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C8C: jr          $t1
    // 0x41000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
;}
RECOMP_FUNC void ovl_item_main_C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000C94: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000C98: jr          $t1
    // 0x41000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
;}
RECOMP_FUNC void ovl_item_main_CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CA0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CA4: jr          $t1
    // 0x41000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
;}
RECOMP_FUNC void ovl_item_main_CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CAC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CB0: jr          $t1
    // 0x41000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
;}
RECOMP_FUNC void ovl_item_main_CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CB8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CBC: jr          $t1
    // 0x41000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
;}
RECOMP_FUNC void ovl_item_main_CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CC4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CC8: jr          $t1
    // 0x41000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
;}
RECOMP_FUNC void ovl_item_main_CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CD0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CD4: jr          $t1
    // 0x41000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
;}
RECOMP_FUNC void ovl_item_main_CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CE0: jr          $t1
    // 0x41000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
;}
RECOMP_FUNC void ovl_item_main_CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CEC: jr          $t1
    // 0x41000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
;}
RECOMP_FUNC void ovl_item_main_CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000CF4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000CF8: jr          $t1
    // 0x41000CFC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000CFC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
;}
RECOMP_FUNC void ovl_item_main_D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D04: jr          $t1
    // 0x41000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
;}
RECOMP_FUNC void ovl_item_main_D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D10: jr          $t1
    // 0x41000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
;}
RECOMP_FUNC void ovl_item_main_D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D1C: jr          $t1
    // 0x41000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
;}
RECOMP_FUNC void ovl_item_main_D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D28: jr          $t1
    // 0x41000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
;}
RECOMP_FUNC void ovl_item_main_D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D34: jr          $t1
    // 0x41000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
;}
RECOMP_FUNC void ovl_item_main_D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D40: jr          $t1
    // 0x41000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
;}
RECOMP_FUNC void ovl_item_main_D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D4C: jr          $t1
    // 0x41000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
;}
RECOMP_FUNC void ovl_item_main_D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D58: jr          $t1
    // 0x41000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
;}
RECOMP_FUNC void ovl_item_main_D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000D60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000D64: jr          $t1
    // 0x41000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
;}
