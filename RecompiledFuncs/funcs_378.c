#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_demo_story_CE8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_CF4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D00(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D0C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D18(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D24(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D30(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D3C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D48(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D54(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D60(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D6C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D78(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D84(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D90(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D9C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DA8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DB4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DC0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DCC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DD8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DE4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DF0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DFC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E08(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E14(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E20(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E2C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E38(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E44(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E50(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E5C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E68(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E74(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E80(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E8C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E98(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EA4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EB0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F34(uint8_t* rdram, recomp_context* ctx) {
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
