#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world8_D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D04: jr          $t1
    // 0x43000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
;}
RECOMP_FUNC void ovl_enemy_world8_D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D10: jr          $t1
    // 0x43000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
;}
RECOMP_FUNC void ovl_enemy_world8_D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D1C: jr          $t1
    // 0x43000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
;}
RECOMP_FUNC void ovl_enemy_world8_D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D28: jr          $t1
    // 0x43000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
;}
RECOMP_FUNC void ovl_enemy_world8_D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D34: jr          $t1
    // 0x43000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
;}
RECOMP_FUNC void ovl_enemy_world8_D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D40: jr          $t1
    // 0x43000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
;}
RECOMP_FUNC void ovl_enemy_world8_D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D4C: jr          $t1
    // 0x43000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
;}
RECOMP_FUNC void ovl_enemy_world8_D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D58: jr          $t1
    // 0x43000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
;}
RECOMP_FUNC void ovl_enemy_world8_D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D64: jr          $t1
    // 0x43000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
;}
RECOMP_FUNC void ovl_enemy_world8_D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D70: jr          $t1
    // 0x43000D74: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D74: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
;}
RECOMP_FUNC void ovl_enemy_world8_D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D7C: jr          $t1
    // 0x43000D80: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D80: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
;}
RECOMP_FUNC void ovl_enemy_world8_D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D88: jr          $t1
    // 0x43000D8C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D8C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
;}
RECOMP_FUNC void ovl_enemy_world8_D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000D94: jr          $t1
    // 0x43000D98: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000D98: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
;}
RECOMP_FUNC void ovl_enemy_world8_D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000D9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DA0: jr          $t1
    // 0x43000DA4: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DA4: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
;}
RECOMP_FUNC void ovl_enemy_world8_DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DAC: jr          $t1
    // 0x43000DB0: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DB0: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
;}
RECOMP_FUNC void ovl_enemy_world8_DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DB8: jr          $t1
    // 0x43000DBC: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DBC: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
;}
RECOMP_FUNC void ovl_enemy_world8_DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DC4: jr          $t1
    // 0x43000DC8: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DC8: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
;}
RECOMP_FUNC void ovl_enemy_world8_DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DCC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DD0: jr          $t1
    // 0x43000DD4: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DD4: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
;}
RECOMP_FUNC void ovl_enemy_world8_DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DDC: jr          $t1
    // 0x43000DE0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DE0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
;}
RECOMP_FUNC void ovl_enemy_world8_DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DE8: jr          $t1
    // 0x43000DEC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DEC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
;}
RECOMP_FUNC void ovl_enemy_world8_DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000DF4: jr          $t1
    // 0x43000DF8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000DF8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
;}
RECOMP_FUNC void ovl_enemy_world8_DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E00: jr          $t1
    // 0x43000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
;}
RECOMP_FUNC void ovl_enemy_world8_E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E0C: jr          $t1
    // 0x43000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
;}
RECOMP_FUNC void ovl_enemy_world8_E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E18: jr          $t1
    // 0x43000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
;}
RECOMP_FUNC void ovl_enemy_world8_E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E24: jr          $t1
    // 0x43000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
;}
RECOMP_FUNC void ovl_enemy_world8_E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E30: jr          $t1
    // 0x43000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
;}
RECOMP_FUNC void ovl_enemy_world8_E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E3C: jr          $t1
    // 0x43000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
;}
RECOMP_FUNC void ovl_enemy_world8_E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E48: jr          $t1
    // 0x43000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
;}
RECOMP_FUNC void ovl_enemy_world8_E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E54: jr          $t1
    // 0x43000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
;}
RECOMP_FUNC void ovl_enemy_world8_E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E60: jr          $t1
    // 0x43000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
;}
RECOMP_FUNC void ovl_enemy_world8_E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E6C: jr          $t1
    // 0x43000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
;}
RECOMP_FUNC void ovl_enemy_world8_E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E78: jr          $t1
    // 0x43000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
;}
RECOMP_FUNC void ovl_enemy_world8_E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E84: jr          $t1
    // 0x43000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
;}
RECOMP_FUNC void ovl_enemy_world8_E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E90: jr          $t1
    // 0x43000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
;}
RECOMP_FUNC void ovl_enemy_world8_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E9C: jr          $t1
    // 0x43000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_enemy_world8_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EA8: jr          $t1
    // 0x43000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_enemy_world8_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EB4: jr          $t1
    // 0x43000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_enemy_world8_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EC0: jr          $t1
    // 0x43000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_enemy_world8_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000ECC: jr          $t1
    // 0x43000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_enemy_world8_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000ED8: jr          $t1
    // 0x43000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_enemy_world8_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EE4: jr          $t1
    // 0x43000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
RECOMP_FUNC void ovl_enemy_world8_EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EF0: jr          $t1
    // 0x43000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
;}
RECOMP_FUNC void ovl_enemy_world8_EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EFC: jr          $t1
    // 0x43000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
;}
RECOMP_FUNC void ovl_enemy_world8_F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F08: jr          $t1
    // 0x43000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
;}
RECOMP_FUNC void ovl_enemy_world8_F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F14: jr          $t1
    // 0x43000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
;}
RECOMP_FUNC void ovl_enemy_world8_F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F20: jr          $t1
    // 0x43000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
;}
RECOMP_FUNC void ovl_enemy_world8_F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F2C: jr          $t1
    // 0x43000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
;}
RECOMP_FUNC void ovl_enemy_world8_F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F38: jr          $t1
    // 0x43000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
;}
RECOMP_FUNC void ovl_enemy_world8_F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F44: jr          $t1
    // 0x43000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x43000F4C: nop

;}
RECOMP_FUNC void ovl_enemy_world8_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43000F54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43000F58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43000F5C: bne         $a1, $zero, L_43000F88
    if (ctx->r5 != 0) {
        // 0x43000F60: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43000F88;
    }
    // 0x43000F60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43000F64: jal         0x43000F50
    // 0x43000F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world8_F50(rdram, ctx);
        goto after_0;
    // 0x43000F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x43000F6C: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43000F70: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x43000F74: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43000F78: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43000F7C: sw          $t7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r15;
    // 0x43000F80: b           L_430010E0
    // 0x43000F84: sw          $zero, 0x258($s0)
    MEM_W(0X258, ctx->r16) = 0;
        goto L_430010E0;
    // 0x43000F84: sw          $zero, 0x258($s0)
    MEM_W(0X258, ctx->r16) = 0;
L_43000F88:
    // 0x43000F88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43000F8C: bne         $a1, $at, L_43001024
    if (ctx->r5 != ctx->r1) {
        // 0x43000F90: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43001024;
    }
    // 0x43000F90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43000F94: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43000F98: nop

    // 0x43000F9C: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x43000FA0: bltz        $t8, L_430010E0
    if (SIGNED(ctx->r24) < 0) {
        // 0x43000FA4: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_430010E0;
    }
    // 0x43000FA4: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x43000FA8: bne         $t9, $zero, L_430010E0
    if (ctx->r25 != 0) {
        // 0x43000FAC: addiu       $v1, $s0, 0x24C
        ctx->r3 = ADD32(ctx->r16, 0X24C);
            goto L_430010E0;
    }
    // 0x43000FAC: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43000FB0: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x43000FB4: nop

    // 0x43000FB8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x43000FBC: bne         $t1, $zero, L_430010E4
    if (ctx->r9 != 0) {
        // 0x43000FC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430010E4;
    }
    // 0x43000FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43000FC4: lw          $t2, 0x230($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X230);
    // 0x43000FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43000FCC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x43000FD0: beq         $t3, $zero, L_430010E0
    if (ctx->r11 == 0) {
        // 0x43000FD4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_430010E0;
    }
    // 0x43000FD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43000FD8: jal         0x43005588
    // 0x43000FDC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world8_5588(rdram, ctx);
        goto after_1;
    // 0x43000FDC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x43000FE0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43000FE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43000FE8: beq         $v0, $at, L_430010E0
    if (ctx->r2 == ctx->r1) {
        // 0x43000FEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430010E0;
    }
    // 0x43000FEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43000FF0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x43000FF4: jal         0x4300079C
    // 0x43000FF8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    ovl_enemy_world8_79C(rdram, ctx);
        goto after_2;
    // 0x43000FF8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x43000FFC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43001000: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43001004: bne         $v0, $zero, L_430010E0
    if (ctx->r2 != 0) {
        // 0x43001008: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430010E0;
    }
    // 0x43001008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300100C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x43001010: jal         0x43005078
    // 0x43001014: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_enemy_world8_5078(rdram, ctx);
        goto after_3;
    // 0x43001014: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x43001018: b           L_430010E4
    // 0x4300101C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430010E4;
    // 0x4300101C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43001020: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_43001024:
    // 0x43001024: bne         $a1, $at, L_43001094
    if (ctx->r5 != ctx->r1) {
        // 0x43001028: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_43001094;
    }
    // 0x43001028: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300102C: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x43001030: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43001034: sll         $t5, $t4, 15
    ctx->r13 = S32(ctx->r12 << 15);
    // 0x43001038: bgez        $t5, L_43001088
    if (SIGNED(ctx->r13) >= 0) {
        // 0x4300103C: nop
    
            goto L_43001088;
    }
    // 0x4300103C: nop

    // 0x43001040: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x43001044: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001048: beq         $a1, $at, L_43001088
    if (ctx->r5 == ctx->r1) {
        // 0x4300104C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001088;
    }
    // 0x4300104C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001050: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x43001054: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x43001058: jal         0x43001210
    // 0x4300105C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world8_1210(rdram, ctx);
        goto after_4;
    // 0x4300105C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x43001060: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43001064: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43001068: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x4300106C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x43001070: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43001074: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x43001078: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4300107C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43001080: b           L_430010E0
    // 0x43001084: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
        goto L_430010E0;
    // 0x43001084: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
L_43001088:
    // 0x43001088: b           L_430010E0
    // 0x4300108C: sw          $zero, 0x25C($s0)
    MEM_W(0X25C, ctx->r16) = 0;
        goto L_430010E0;
    // 0x4300108C: sw          $zero, 0x25C($s0)
    MEM_W(0X25C, ctx->r16) = 0;
    // 0x43001090: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_43001094:
    // 0x43001094: bne         $a1, $at, L_430010E0
    if (ctx->r5 != ctx->r1) {
        // 0x43001098: addiu       $v1, $s0, 0x24C
        ctx->r3 = ADD32(ctx->r16, 0X24C);
            goto L_430010E0;
    }
    // 0x43001098: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x4300109C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x430010A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430010A4: beq         $a1, $at, L_430010E0
    if (ctx->r5 == ctx->r1) {
        // 0x430010A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430010E0;
    }
    // 0x430010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430010AC: jal         0x43001348
    // 0x430010B0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world8_1348(rdram, ctx);
        goto after_5;
    // 0x430010B0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_5:
    // 0x430010B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x430010B8: bne         $v0, $zero, L_430010D0
    if (ctx->r2 != 0) {
        // 0x430010BC: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_430010D0;
    }
    // 0x430010BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430010C0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x430010C4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x430010C8: b           L_430010E0
    // 0x430010CC: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
        goto L_430010E0;
    // 0x430010CC: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_430010D0:
    // 0x430010D0: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x430010D4: sw          $t2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r10;
    // 0x430010D8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x430010DC: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
L_430010E0:
    // 0x430010E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430010E4:
    // 0x430010E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430010E8: jr          $ra
    // 0x430010EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430010EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
