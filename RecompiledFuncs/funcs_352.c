#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world7_B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B3C: jr          $t1
    // 0x60000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B40: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
;}
RECOMP_FUNC void ovl_stage_world7_B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B48: jr          $t1
    // 0x60000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B4C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
;}
RECOMP_FUNC void ovl_stage_world7_B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B54: jr          $t1
    // 0x60000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B58: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
;}
RECOMP_FUNC void ovl_stage_world7_B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B60: jr          $t1
    // 0x60000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B64: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
;}
RECOMP_FUNC void ovl_stage_world7_B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B6C: jr          $t1
    // 0x60000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B70: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
;}
RECOMP_FUNC void ovl_stage_world7_B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B78: jr          $t1
    // 0x60000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B7C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
;}
RECOMP_FUNC void ovl_stage_world7_B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B84: jr          $t1
    // 0x60000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B88: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
;}
RECOMP_FUNC void ovl_stage_world7_B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B90: jr          $t1
    // 0x60000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000B94: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
;}
RECOMP_FUNC void ovl_stage_world7_B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000B98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000B9C: jr          $t1
    // 0x60000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BA0: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
;}
RECOMP_FUNC void ovl_stage_world7_BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BA8: jr          $t1
    // 0x60000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BAC: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
;}
RECOMP_FUNC void ovl_stage_world7_BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BB4: jr          $t1
    // 0x60000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BB8: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
;}
RECOMP_FUNC void ovl_stage_world7_BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BC0: jr          $t1
    // 0x60000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BC4: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
;}
RECOMP_FUNC void ovl_stage_world7_BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BCC: jr          $t1
    // 0x60000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BD0: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
;}
RECOMP_FUNC void ovl_stage_world7_BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BD8: jr          $t1
    // 0x60000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BDC: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
;}
RECOMP_FUNC void ovl_stage_world7_BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BE4: jr          $t1
    // 0x60000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BE8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
;}
RECOMP_FUNC void ovl_stage_world7_BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BF0: jr          $t1
    // 0x60000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000BF4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
;}
RECOMP_FUNC void ovl_stage_world7_BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000BF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000BFC: jr          $t1
    // 0x60000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C00: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
;}
RECOMP_FUNC void ovl_stage_world7_C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C08: jr          $t1
    // 0x60000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C0C: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
;}
RECOMP_FUNC void ovl_stage_world7_C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C14: jr          $t1
    // 0x60000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C18: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
;}
RECOMP_FUNC void ovl_stage_world7_C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C20: jr          $t1
    // 0x60000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C24: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
;}
RECOMP_FUNC void ovl_stage_world7_C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C2C: jr          $t1
    // 0x60000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C30: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
;}
RECOMP_FUNC void ovl_stage_world7_C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C38: jr          $t1
    // 0x60000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C3C: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
;}
RECOMP_FUNC void ovl_stage_world7_C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C44: jr          $t1
    // 0x60000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C48: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
;}
RECOMP_FUNC void ovl_stage_world7_C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C4C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C50: jr          $t1
    // 0x60000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C54: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
;}
RECOMP_FUNC void ovl_stage_world7_C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C58: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C5C: jr          $t1
    // 0x60000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C60: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
;}
RECOMP_FUNC void ovl_stage_world7_C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C64: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C68: jr          $t1
    // 0x60000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C6C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
;}
RECOMP_FUNC void ovl_stage_world7_C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C70: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C74: jr          $t1
    // 0x60000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C78: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
;}
RECOMP_FUNC void ovl_stage_world7_C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C7C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C80: jr          $t1
    // 0x60000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C84: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
;}
RECOMP_FUNC void ovl_stage_world7_C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C88: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C8C: jr          $t1
    // 0x60000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C90: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
;}
RECOMP_FUNC void ovl_stage_world7_C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000C94: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000C98: jr          $t1
    // 0x60000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000C9C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
;}
RECOMP_FUNC void ovl_stage_world7_CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CA0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CA4: jr          $t1
    // 0x60000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CA8: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
;}
RECOMP_FUNC void ovl_stage_world7_CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CAC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CB0: jr          $t1
    // 0x60000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CB4: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
;}
RECOMP_FUNC void ovl_stage_world7_CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CB8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CBC: jr          $t1
    // 0x60000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CC0: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
;}
RECOMP_FUNC void ovl_stage_world7_CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CC4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CC8: jr          $t1
    // 0x60000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CCC: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
;}
RECOMP_FUNC void ovl_stage_world7_CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CD0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CD4: jr          $t1
    // 0x60000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CD8: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
;}
RECOMP_FUNC void ovl_stage_world7_CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CE0: jr          $t1
    // 0x60000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CE4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
;}
RECOMP_FUNC void ovl_stage_world7_CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CEC: jr          $t1
    // 0x60000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CF0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
;}
RECOMP_FUNC void ovl_stage_world7_CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000CF4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000CF8: jr          $t1
    // 0x60000CFC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000CFC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
;}
RECOMP_FUNC void ovl_stage_world7_D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D04: jr          $t1
    // 0x60000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
;}
RECOMP_FUNC void ovl_stage_world7_D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D10: jr          $t1
    // 0x60000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
;}
RECOMP_FUNC void ovl_stage_world7_D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D1C: jr          $t1
    // 0x60000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
;}
RECOMP_FUNC void ovl_stage_world7_D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D28: jr          $t1
    // 0x60000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
;}
RECOMP_FUNC void ovl_stage_world7_D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D34: jr          $t1
    // 0x60000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
;}
RECOMP_FUNC void ovl_stage_world7_D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D40: jr          $t1
    // 0x60000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
;}
RECOMP_FUNC void ovl_stage_world7_D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D4C: jr          $t1
    // 0x60000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
;}
RECOMP_FUNC void ovl_stage_world7_D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D58: jr          $t1
    // 0x60000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
;}
RECOMP_FUNC void ovl_stage_world7_D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D64: jr          $t1
    // 0x60000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
;}
RECOMP_FUNC void ovl_stage_world7_D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D70: jr          $t1
    // 0x60000D74: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D74: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
;}
RECOMP_FUNC void ovl_stage_world7_D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D7C: jr          $t1
    // 0x60000D80: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D80: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
;}
RECOMP_FUNC void ovl_stage_world7_D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D88: jr          $t1
    // 0x60000D8C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D8C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
;}
