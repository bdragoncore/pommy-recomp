#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_demo_guide_D48(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_guide_D54(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_guide_D60(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_guide_D6C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_guide_D78(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_guide_D84(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_guide_D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000D94: jr          $t1
    // 0x60000D98: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000D98: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
;}
RECOMP_FUNC void ovl_demo_guide_D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000D9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DA0: jr          $t1
    // 0x60000DA4: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DA4: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
;}
RECOMP_FUNC void ovl_demo_guide_DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DAC: jr          $t1
    // 0x60000DB0: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DB0: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
;}
RECOMP_FUNC void ovl_demo_guide_DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DB8: jr          $t1
    // 0x60000DBC: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DBC: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
;}
RECOMP_FUNC void ovl_demo_guide_DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DC4: jr          $t1
    // 0x60000DC8: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DC8: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
;}
RECOMP_FUNC void ovl_demo_guide_DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DCC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DD0: jr          $t1
    // 0x60000DD4: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DD4: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
;}
RECOMP_FUNC void ovl_demo_guide_DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DDC: jr          $t1
    // 0x60000DE0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DE0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
;}
RECOMP_FUNC void ovl_demo_guide_DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DE8: jr          $t1
    // 0x60000DEC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DEC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
;}
RECOMP_FUNC void ovl_demo_guide_DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000DF4: jr          $t1
    // 0x60000DF8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000DF8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
;}
RECOMP_FUNC void ovl_demo_guide_DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000DFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E00: jr          $t1
    // 0x60000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
;}
RECOMP_FUNC void ovl_demo_guide_E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E0C: jr          $t1
    // 0x60000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
;}
RECOMP_FUNC void ovl_demo_guide_E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E18: jr          $t1
    // 0x60000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
;}
RECOMP_FUNC void ovl_demo_guide_E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E24: jr          $t1
    // 0x60000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
;}
RECOMP_FUNC void ovl_demo_guide_E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E30: jr          $t1
    // 0x60000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
;}
RECOMP_FUNC void ovl_demo_guide_E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E3C: jr          $t1
    // 0x60000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
;}
RECOMP_FUNC void ovl_demo_guide_E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E48: jr          $t1
    // 0x60000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
;}
RECOMP_FUNC void ovl_demo_guide_E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E54: jr          $t1
    // 0x60000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
;}
RECOMP_FUNC void ovl_demo_guide_E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E60: jr          $t1
    // 0x60000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
;}
RECOMP_FUNC void ovl_demo_guide_E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E6C: jr          $t1
    // 0x60000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
;}
RECOMP_FUNC void ovl_demo_guide_E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E78: jr          $t1
    // 0x60000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
;}
RECOMP_FUNC void ovl_demo_guide_E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E84: jr          $t1
    // 0x60000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
;}
RECOMP_FUNC void ovl_demo_guide_E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E90: jr          $t1
    // 0x60000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
;}
RECOMP_FUNC void ovl_demo_guide_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E9C: jr          $t1
    // 0x60000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_demo_guide_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EA8: jr          $t1
    // 0x60000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_demo_guide_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EB4: jr          $t1
    // 0x60000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_demo_guide_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EC0: jr          $t1
    // 0x60000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_demo_guide_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000ECC: jr          $t1
    // 0x60000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_demo_guide_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000ED8: jr          $t1
    // 0x60000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_demo_guide_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EE4: jr          $t1
    // 0x60000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
RECOMP_FUNC void ovl_demo_guide_EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EF0: jr          $t1
    // 0x60000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
;}
RECOMP_FUNC void ovl_demo_guide_EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EFC: jr          $t1
    // 0x60000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
;}
RECOMP_FUNC void ovl_demo_guide_F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F08: jr          $t1
    // 0x60000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
;}
RECOMP_FUNC void ovl_demo_guide_F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F14: jr          $t1
    // 0x60000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
;}
RECOMP_FUNC void ovl_demo_guide_F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F20: jr          $t1
    // 0x60000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
;}
RECOMP_FUNC void ovl_demo_guide_F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F2C: jr          $t1
    // 0x60000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
;}
RECOMP_FUNC void ovl_demo_guide_F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F38: jr          $t1
    // 0x60000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
;}
RECOMP_FUNC void ovl_demo_guide_F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F44: jr          $t1
    // 0x60000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x60000F4C: nop

;}
RECOMP_FUNC void ovl_demo_guide_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60000F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60000F58: beq         $a1, $zero, L_6000103C
    if (ctx->r5 == 0) {
        // 0x60000F5C: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_6000103C;
    }
    // 0x60000F5C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x60000F60: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x60000F64: beq         $t7, $zero, L_60000FBC
    if (ctx->r15 == 0) {
        // 0x60000F68: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_60000FBC;
    }
    // 0x60000F68: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x60000F6C: jal         0x60000DE4
    // 0x60000F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_0;
    // 0x60000F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60000F74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60000F78: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60000F7C: jal         0x600006C4
    // 0x60000F80: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_1;
    // 0x60000F80: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60000F84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x60000F88: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60000F8C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60000F90: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60000F94: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x60000F98: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x60000F9C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60000FA0: jal         0x60000DE4
    // 0x60000FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_2;
    // 0x60000FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60000FA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60000FAC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60000FB0: jal         0x600006C4
    // 0x60000FB4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_3;
    // 0x60000FB4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60000FB8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
L_60000FBC:
    // 0x60000FBC: nop

    // 0x60000FC0: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x60000FC4: beq         $t3, $zero, L_6000101C
    if (ctx->r11 == 0) {
        // 0x60000FC8: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_6000101C;
    }
    // 0x60000FC8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x60000FCC: jal         0x60000DE4
    // 0x60000FD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_4;
    // 0x60000FD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60000FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60000FD8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60000FDC: jal         0x600006C4
    // 0x60000FE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_5;
    // 0x60000FE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x60000FE4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x60000FE8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60000FEC: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60000FF0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60000FF4: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x60000FF8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x60000FFC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x60001000: jal         0x60000DE4
    // 0x60001004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_6;
    // 0x60001004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x60001008: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000100C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60001010: jal         0x600006C4
    // 0x60001014: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_7;
    // 0x60001014: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60001018: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_6000101C:
    // 0x6000101C: nop

    // 0x60001020: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x60001024: beq         $t9, $zero, L_6000111C
    if (ctx->r25 == 0) {
        // 0x60001028: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000111C;
    }
    // 0x60001028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000102C: jal         0x60000ED4
    // 0x60001030: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_ED4(rdram, ctx);
        goto after_8;
    // 0x60001030: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60001034: b           L_6000111C
    // 0x60001038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000111C;
    // 0x60001038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000103C:
    // 0x6000103C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x60001040: nop

    // 0x60001044: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x60001048: beq         $t1, $zero, L_600010A0
    if (ctx->r9 == 0) {
        // 0x6000104C: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_600010A0;
    }
    // 0x6000104C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60001050: jal         0x60000DE4
    // 0x60001054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_9;
    // 0x60001054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60001058: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000105C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60001060: jal         0x600006C4
    // 0x60001064: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_10;
    // 0x60001064: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_10:
    // 0x60001068: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x6000106C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x60001070: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60001074: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x60001078: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x6000107C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x60001080: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x60001084: jal         0x60000DE4
    // 0x60001088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_11;
    // 0x60001088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x6000108C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001090: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60001094: jal         0x600006C4
    // 0x60001098: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_12;
    // 0x60001098: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_12:
    // 0x6000109C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_600010A0:
    // 0x600010A0: nop

    // 0x600010A4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x600010A8: beq         $t7, $zero, L_60001100
    if (ctx->r15 == 0) {
        // 0x600010AC: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_60001100;
    }
    // 0x600010AC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x600010B0: jal         0x60000DE4
    // 0x600010B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_13;
    // 0x600010B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x600010B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600010BC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x600010C0: jal         0x600006C4
    // 0x600010C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_14;
    // 0x600010C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_14:
    // 0x600010C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x600010CC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x600010D0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x600010D4: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x600010D8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x600010DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x600010E0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x600010E4: jal         0x60000DE4
    // 0x600010E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_DE4(rdram, ctx);
        goto after_15;
    // 0x600010E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x600010EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600010F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x600010F4: jal         0x600006C4
    // 0x600010F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_guide_6C4(rdram, ctx);
        goto after_16;
    // 0x600010F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_16:
    // 0x600010FC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
L_60001100:
    // 0x60001100: nop

    // 0x60001104: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x60001108: beq         $t3, $zero, L_6000111C
    if (ctx->r11 == 0) {
        // 0x6000110C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000111C;
    }
    // 0x6000110C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001110: jal         0x60000ED4
    // 0x60001114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_ED4(rdram, ctx);
        goto after_17;
    // 0x60001114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x60001118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000111C:
    // 0x6000111C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001120: jr          $ra
    // 0x60001124: nop

    return;
    // 0x60001124: nop

;}
RECOMP_FUNC void ovl_demo_guide_1128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000112C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001130: jal         0x60000A9C
    // 0x60001134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_A9C(rdram, ctx);
        goto after_0;
    // 0x60001134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60001138: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x6000113C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001140: beq         $t6, $zero, L_60001150
    if (ctx->r14 == 0) {
        // 0x60001144: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001150;
    }
    // 0x60001144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001148: b           L_60001150
    // 0x6000114C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001150;
    // 0x6000114C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001150:
    // 0x60001150: jr          $ra
    // 0x60001154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60001154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_demo_guide_1158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000115C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001160: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x60001164: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x60001168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000116C: jal         0x60000538
    // 0x60001170: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    ovl_demo_guide_538(rdram, ctx);
        goto after_0;
    // 0x60001170: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_0:
    // 0x60001174: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x60001178: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x6000117C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x60001180: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x60001184: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001188: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x6000118C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001190: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001194: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001198: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x6000119C: jal         0x6000055C
    // 0x600011A0: nop

    ovl_demo_guide_55C(rdram, ctx);
        goto after_1;
    // 0x600011A0: nop

    after_1:
    // 0x600011A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011A8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x600011AC: jr          $ra
    // 0x600011B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600011B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_guide_11B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600011B8: slti        $at, $a0, 0x5
    ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x600011BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011C0: bne         $at, $zero, L_600012AC
    if (ctx->r1 != 0) {
        // 0x600011C4: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_600012AC;
    }
    // 0x600011C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x600011C8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600011CC: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x600011D0: nop

    // 0x600011D4: beq         $a0, $zero, L_600011E4
    if (ctx->r4 == 0) {
        // 0x600011D8: nop
    
            goto L_600011E4;
    }
    // 0x600011D8: nop

    // 0x600011DC: jal         0x60000550
    // 0x600011E0: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_0;
    // 0x600011E0: nop

    after_0:
L_600011E4:
    // 0x600011E4: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x600011E8: lw          $t7, 0x1CB0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CB0);
    // 0x600011EC: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x600011F0: beq         $t7, $zero, L_60001240
    if (ctx->r15 == 0) {
        // 0x600011F4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001240;
    }
    // 0x600011F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600011F8: lw          $t8, 0x1CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CC0);
    // 0x600011FC: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    // 0x60001200: bne         $t8, $zero, L_60001264
    if (ctx->r24 != 0) {
        // 0x60001204: addiu       $a0, $zero, 0xBEE
        ctx->r4 = ADD32(0, 0XBEE);
            goto L_60001264;
    }
    // 0x60001204: addiu       $a0, $zero, 0xBEE
    ctx->r4 = ADD32(0, 0XBEE);
    // 0x60001208: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x6000120C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x60001210: jal         0x60001158
    // 0x60001214: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_demo_guide_1158(rdram, ctx);
        goto after_1;
    // 0x60001214: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x60001218: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000121C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001220: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x60001224: sw          $v0, 0x1CC0($at)
    MEM_W(0X1CC0, ctx->r1) = ctx->r2;
    // 0x60001228: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x6000122C: jal         0x6000055C
    // 0x60001230: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_demo_guide_55C(rdram, ctx);
        goto after_2;
    // 0x60001230: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_2:
    // 0x60001234: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x60001238: b           L_60001268
    // 0x6000123C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_60001268;
    // 0x6000123C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_60001240:
    // 0x60001240: lw          $a0, 0x1CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC0);
    // 0x60001244: nop

    // 0x60001248: beq         $a0, $zero, L_60001264
    if (ctx->r4 == 0) {
        // 0x6000124C: addiu       $a3, $zero, 0xF0
        ctx->r7 = ADD32(0, 0XF0);
            goto L_60001264;
    }
    // 0x6000124C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    // 0x60001250: jal         0x60000550
    // 0x60001254: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_3;
    // 0x60001254: nop

    after_3:
    // 0x60001258: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000125C: sw          $zero, 0x1CC0($at)
    MEM_W(0X1CC0, ctx->r1) = 0;
    // 0x60001260: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
L_60001264:
    // 0x60001264: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_60001268:
    // 0x60001268: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x6000126C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x60001270: jal         0x60001158
    // 0x60001274: addiu       $a0, $a0, 0xBE3
    ctx->r4 = ADD32(ctx->r4, 0XBE3);
    ovl_demo_guide_1158(rdram, ctx);
        goto after_4;
    // 0x60001274: addiu       $a0, $a0, 0xBE3
    ctx->r4 = ADD32(ctx->r4, 0XBE3);
    after_4:
    // 0x60001278: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000127C: sw          $v0, 0x1CB8($at)
    MEM_W(0X1CB8, ctx->r1) = ctx->r2;
    // 0x60001280: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001284: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x60001288: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x6000128C: jal         0x6000061C
    // 0x60001290: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    ovl_demo_guide_61C(rdram, ctx);
        goto after_5;
    // 0x60001290: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_5:
    // 0x60001294: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001298: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x6000129C: jal         0x60000604
    // 0x600012A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_guide_604(rdram, ctx);
        goto after_6;
    // 0x600012A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x600012A4: b           L_600013F0
    // 0x600012A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600013F0;
    // 0x600012A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600012AC:
    // 0x600012AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600012B0: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x600012B4: nop

    // 0x600012B8: beq         $a0, $zero, L_600012C8
    if (ctx->r4 == 0) {
        // 0x600012BC: nop
    
            goto L_600012C8;
    }
    // 0x600012BC: nop

    // 0x600012C0: jal         0x60000550
    // 0x600012C4: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_7;
    // 0x600012C4: nop

    after_7:
L_600012C8:
    // 0x600012C8: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x600012CC: lw          $t9, 0x1CB8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1CB8);
    // 0x600012D0: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600012D4: beq         $t9, $zero, L_60001324
    if (ctx->r25 == 0) {
        // 0x600012D8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001324;
    }
    // 0x600012D8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600012DC: lw          $t0, 0x1CC0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1CC0);
    // 0x600012E0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x600012E4: bne         $t0, $zero, L_60001348
    if (ctx->r8 != 0) {
        // 0x600012E8: addiu       $a0, $zero, 0xBEE
        ctx->r4 = ADD32(0, 0XBEE);
            goto L_60001348;
    }
    // 0x600012E8: addiu       $a0, $zero, 0xBEE
    ctx->r4 = ADD32(0, 0XBEE);
    // 0x600012EC: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x600012F0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x600012F4: jal         0x60001158
    // 0x600012F8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_demo_guide_1158(rdram, ctx);
        goto after_8;
    // 0x600012F8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_8:
    // 0x600012FC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001300: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001304: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x60001308: sw          $v0, 0x1CC0($at)
    MEM_W(0X1CC0, ctx->r1) = ctx->r2;
    // 0x6000130C: lui         $a1, 0x438C
    ctx->r5 = S32(0X438C << 16);
    // 0x60001310: jal         0x6000055C
    // 0x60001314: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_demo_guide_55C(rdram, ctx);
        goto after_9;
    // 0x60001314: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_9:
    // 0x60001318: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x6000131C: b           L_6000134C
    // 0x60001320: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
        goto L_6000134C;
    // 0x60001320: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_60001324:
    // 0x60001324: lw          $a0, 0x1CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC0);
    // 0x60001328: nop

    // 0x6000132C: beq         $a0, $zero, L_60001348
    if (ctx->r4 == 0) {
        // 0x60001330: addiu       $a3, $zero, 0xF0
        ctx->r7 = ADD32(0, 0XF0);
            goto L_60001348;
    }
    // 0x60001330: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    // 0x60001334: jal         0x60000550
    // 0x60001338: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_10;
    // 0x60001338: nop

    after_10:
    // 0x6000133C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001340: sw          $zero, 0x1CC0($at)
    MEM_W(0X1CC0, ctx->r1) = 0;
    // 0x60001344: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
L_60001348:
    // 0x60001348: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_6000134C:
    // 0x6000134C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x60001350: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x60001354: bne         $at, $zero, L_60001364
    if (ctx->r1 != 0) {
        // 0x60001358: addiu       $a0, $zero, 0xBE7
        ctx->r4 = ADD32(0, 0XBE7);
            goto L_60001364;
    }
    // 0x60001358: addiu       $a0, $zero, 0xBE7
    ctx->r4 = ADD32(0, 0XBE7);
    // 0x6000135C: b           L_60001364
    // 0x60001360: addiu       $a0, $zero, 0xBEF
    ctx->r4 = ADD32(0, 0XBEF);
        goto L_60001364;
    // 0x60001360: addiu       $a0, $zero, 0xBEF
    ctx->r4 = ADD32(0, 0XBEF);
L_60001364:
    // 0x60001364: jal         0x60001158
    // 0x60001368: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    ovl_demo_guide_1158(rdram, ctx);
        goto after_11;
    // 0x60001368: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_11:
    // 0x6000136C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001370: sw          $v0, 0x1CB0($at)
    MEM_W(0X1CB0, ctx->r1) = ctx->r2;
    // 0x60001374: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001378: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x6000137C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x60001380: jal         0x6000061C
    // 0x60001384: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    ovl_demo_guide_61C(rdram, ctx);
        goto after_12;
    // 0x60001384: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_12:
    // 0x60001388: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000138C: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x60001390: jal         0x60000604
    // 0x60001394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_guide_604(rdram, ctx);
        goto after_13;
    // 0x60001394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x60001398: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x6000139C: nop

    // 0x600013A0: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x600013A4: beq         $at, $zero, L_600013F0
    if (ctx->r1 == 0) {
        // 0x600013A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600013F0;
    }
    // 0x600013A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600013AC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x600013B0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600013B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600013B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600013BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600013C0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x600013C4: lwc1        $f19, 0x1CE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1CE0);
    // 0x600013C8: lwc1        $f18, 0x1CE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1CE4);
    // 0x600013CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600013D0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x600013D4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x600013D8: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x600013DC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x600013E0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x600013E4: jal         0x600005BC
    // 0x600013E8: nop

    ovl_demo_guide_5BC(rdram, ctx);
        goto after_14;
    // 0x600013E8: nop

    after_14:
    // 0x600013EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600013F0:
    // 0x600013F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600013F4: jr          $ra
    // 0x600013F8: nop

    return;
    // 0x600013F8: nop

;}
RECOMP_FUNC void ovl_demo_guide_13FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600013FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001400: beq         $a0, $zero, L_60001430
    if (ctx->r4 == 0) {
        // 0x60001404: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60001430;
    }
    // 0x60001404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001408: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000140C: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x60001410: nop

    // 0x60001414: beq         $a0, $zero, L_60001454
    if (ctx->r4 == 0) {
        // 0x60001418: nop
    
            goto L_60001454;
    }
    // 0x60001418: nop

    // 0x6000141C: jal         0x60000550
    // 0x60001420: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_0;
    // 0x60001420: nop

    after_0:
    // 0x60001424: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001428: b           L_60001454
    // 0x6000142C: sw          $zero, 0x1CB8($at)
    MEM_W(0X1CB8, ctx->r1) = 0;
        goto L_60001454;
    // 0x6000142C: sw          $zero, 0x1CB8($at)
    MEM_W(0X1CB8, ctx->r1) = 0;
L_60001430:
    // 0x60001430: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001434: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x60001438: nop

    // 0x6000143C: beq         $a0, $zero, L_60001454
    if (ctx->r4 == 0) {
        // 0x60001440: nop
    
            goto L_60001454;
    }
    // 0x60001440: nop

    // 0x60001444: jal         0x60000550
    // 0x60001448: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_1;
    // 0x60001448: nop

    after_1:
    // 0x6000144C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001450: sw          $zero, 0x1CB0($at)
    MEM_W(0X1CB0, ctx->r1) = 0;
L_60001454:
    // 0x60001454: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001458: lw          $t6, 0x1CB8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CB8);
    // 0x6000145C: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60001460: beq         $t6, $zero, L_600014C8
    if (ctx->r14 == 0) {
        // 0x60001464: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600014C8;
    }
    // 0x60001464: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001468: lw          $t7, 0x1CB0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CB0);
    // 0x6000146C: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60001470: beq         $t7, $zero, L_600014C8
    if (ctx->r15 == 0) {
        // 0x60001474: nop
    
            goto L_600014C8;
    }
    // 0x60001474: nop

    // 0x60001478: lw          $t8, 0x1CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CC0);
    // 0x6000147C: addiu       $a0, $zero, 0xBEE
    ctx->r4 = ADD32(0, 0XBEE);
    // 0x60001480: bne         $t8, $zero, L_60001524
    if (ctx->r24 != 0) {
        // 0x60001484: addiu       $a1, $zero, 0xF0
        ctx->r5 = ADD32(0, 0XF0);
            goto L_60001524;
    }
    // 0x60001484: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x60001488: jal         0x60001158
    // 0x6000148C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    ovl_demo_guide_1158(rdram, ctx);
        goto after_2;
    // 0x6000148C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_2:
    // 0x60001490: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001494: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001498: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x6000149C: sw          $v0, 0x1CC0($at)
    MEM_W(0X1CC0, ctx->r1) = ctx->r2;
    // 0x600014A0: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x600014A4: jal         0x6000055C
    // 0x600014A8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_demo_guide_55C(rdram, ctx);
        goto after_3;
    // 0x600014A8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_3:
    // 0x600014AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600014B0: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x600014B4: lui         $a1, 0x438C
    ctx->r5 = S32(0X438C << 16);
    // 0x600014B8: jal         0x6000055C
    // 0x600014BC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_demo_guide_55C(rdram, ctx);
        goto after_4;
    // 0x600014BC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_4:
    // 0x600014C0: b           L_60001528
    // 0x600014C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001528;
    // 0x600014C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600014C8:
    // 0x600014C8: lw          $a0, 0x1CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC0);
    // 0x600014CC: nop

    // 0x600014D0: beq         $a0, $zero, L_60001528
    if (ctx->r4 == 0) {
        // 0x600014D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001528;
    }
    // 0x600014D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600014D8: jal         0x60000550
    // 0x600014DC: nop

    ovl_demo_guide_550(rdram, ctx);
        goto after_5;
    // 0x600014DC: nop

    after_5:
    // 0x600014E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600014E4: lw          $a0, 0x1CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB0);
    // 0x600014E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014EC: beq         $a0, $zero, L_60001508
    if (ctx->r4 == 0) {
        // 0x600014F0: sw          $zero, 0x1CC0($at)
        MEM_W(0X1CC0, ctx->r1) = 0;
            goto L_60001508;
    }
    // 0x600014F0: sw          $zero, 0x1CC0($at)
    MEM_W(0X1CC0, ctx->r1) = 0;
    // 0x600014F4: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x600014F8: jal         0x6000055C
    // 0x600014FC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_demo_guide_55C(rdram, ctx);
        goto after_6;
    // 0x600014FC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_6:
    // 0x60001500: b           L_60001528
    // 0x60001504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001528;
    // 0x60001504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001508:
    // 0x60001508: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000150C: lw          $a0, 0x1CB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CB8);
    // 0x60001510: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x60001514: beq         $a0, $zero, L_60001528
    if (ctx->r4 == 0) {
        // 0x60001518: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001528;
    }
    // 0x60001518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000151C: jal         0x6000055C
    // 0x60001520: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_demo_guide_55C(rdram, ctx);
        goto after_7;
    // 0x60001520: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_7:
L_60001524:
    // 0x60001524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001528:
    // 0x60001528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000152C: jr          $ra
    // 0x60001530: nop

    return;
    // 0x60001530: nop

;}
RECOMP_FUNC void ovl_demo_guide_1534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001538: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x6000153C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001540: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001544: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001548: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x6000154C: addiu       $s1, $s1, 0x1CB8
    ctx->r17 = ADD32(ctx->r17, 0X1CB8);
    // 0x60001550: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001554: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_60001558:
    // 0x60001558: jal         0x60000850
    // 0x6000155C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_guide_850(rdram, ctx);
        goto after_0;
    // 0x6000155C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x60001560: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60001564: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x60001568: jal         0x60000634
    // 0x6000156C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_guide_634(rdram, ctx);
        goto after_1;
    // 0x6000156C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x60001570: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001574: bne         $s0, $s2, L_60001558
    if (ctx->r16 != ctx->r18) {
        // 0x60001578: nop
    
            goto L_60001558;
    }
    // 0x60001578: nop

    // 0x6000157C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001580: jal         0x60000838
    // 0x60001584: sw          $zero, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = 0;
    ovl_demo_guide_838(rdram, ctx);
        goto after_2;
    // 0x60001584: sw          $zero, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = 0;
    after_2:
    // 0x60001588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x6000158C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001598: jr          $ra
    // 0x6000159C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x6000159C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_demo_guide_15A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600015A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600015A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600015AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600015B0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600015B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600015B8: addiu       $s1, $s1, 0x1CB0
    ctx->r17 = ADD32(ctx->r17, 0X1CB0);
    // 0x600015BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600015C0: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_600015C4:
    // 0x600015C4: jal         0x60000850
    // 0x600015C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_guide_850(rdram, ctx);
        goto after_0;
    // 0x600015C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x600015CC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x600015D0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x600015D4: jal         0x60000634
    // 0x600015D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_guide_634(rdram, ctx);
        goto after_1;
    // 0x600015D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x600015DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600015E0: bne         $s0, $s2, L_600015C4
    if (ctx->r16 != ctx->r18) {
        // 0x600015E4: nop
    
            goto L_600015C4;
    }
    // 0x600015E4: nop

L_600015E8:
    // 0x600015E8: jal         0x6000085C
    // 0x600015EC: nop

    ovl_demo_guide_85C(rdram, ctx);
        goto after_2;
    // 0x600015EC: nop

    after_2:
    // 0x600015F0: b           L_600015E8
    // 0x600015F4: nop

        goto L_600015E8;
    // 0x600015F4: nop

    // 0x600015F8: nop

    // 0x600015FC: nop

    // 0x60001600: nop

    // 0x60001604: nop

    // 0x60001608: nop

    // 0x6000160C: nop

    // 0x60001610: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001618: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000161C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001620: jr          $ra
    // 0x60001624: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001624: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
