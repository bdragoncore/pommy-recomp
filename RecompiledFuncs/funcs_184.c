#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world3_D6C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_D78(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_D84(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_D90(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_D9C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DA8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DB4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DC0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DCC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DD8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DE4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DF0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DFC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E08(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E14(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E20(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E2C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E38(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E44(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E50(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E5C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E68(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E74(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E80(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E8C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E98(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EA4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EB0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F50(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world3_F50(rdram, ctx);
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
    ovl_enemy_world3_5588(rdram, ctx);
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
    ovl_enemy_world3_79C(rdram, ctx);
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
    ovl_enemy_world3_5078(rdram, ctx);
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
    ovl_enemy_world3_1210(rdram, ctx);
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
    ovl_enemy_world3_1348(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world3_10F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430010F0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430010F4: lwc1        $f0, -0x6140($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6140);
    // 0x430010F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430010FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43001100: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x43001104: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x43001108: bc1t        L_43001114
    if (c1cs) {
        // 0x4300110C: nop
    
            goto L_43001114;
    }
    // 0x4300110C: nop

    // 0x43001110: swc1        $f12, 0x220($a0)
    MEM_W(0X220, ctx->r4) = ctx->f12.u32l;
L_43001114:
    // 0x43001114: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x43001118: nop

    // 0x4300111C: bc1t        L_43001128
    if (c1cs) {
        // 0x43001120: nop
    
            goto L_43001128;
    }
    // 0x43001120: nop

    // 0x43001124: swc1        $f14, 0x224($a0)
    MEM_W(0X224, ctx->r4) = ctx->f14.u32l;
L_43001128:
    // 0x43001128: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x4300112C: nop

    // 0x43001130: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x43001134: nop

    // 0x43001138: bc1t        L_43001144
    if (c1cs) {
        // 0x4300113C: nop
    
            goto L_43001144;
    }
    // 0x4300113C: nop

    // 0x43001140: swc1        $f4, 0x228($a0)
    MEM_W(0X228, ctx->r4) = ctx->f4.u32l;
L_43001144:
    // 0x43001144: jr          $ra
    // 0x43001148: nop

    return;
    // 0x43001148: nop

;}
RECOMP_FUNC void ovl_enemy_world3_114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300114C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43001150: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43001154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001158: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x4300115C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x43001160: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43001164: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x43001168: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4300116C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x43001170: jal         0x430006C4
    // 0x43001174: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001174: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x43001178: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x4300117C: bne         $v0, $zero, L_43001200
    if (ctx->r2 != 0) {
        // 0x43001180: addiu       $t6, $sp, 0x28
        ctx->r14 = ADD32(ctx->r29, 0X28);
            goto L_43001200;
    }
    // 0x43001180: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x43001184: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x43001188: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300118C: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43001190: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x43001194: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x43001198: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4300119C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x430011A0: jal         0x43005218
    // 0x430011A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world3_5218(rdram, ctx);
        goto after_1;
    // 0x430011A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x430011A8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x430011AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430011B0: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x430011B4: jal         0x430006C4
    // 0x430011B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x430011B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x430011BC: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430011C0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430011C4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430011C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x430011CC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430011D0: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x430011D4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430011D8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x430011DC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x430011E0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x430011E4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x430011E8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x430011EC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x430011F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430011F4: jal         0x430006C4
    // 0x430011F8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x430011F8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x430011FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43001200:
    // 0x43001200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001204: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x43001208: jr          $ra
    // 0x4300120C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300120C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world3_1210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001210: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x43001214: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x43001218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300121C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x43001220: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x43001224: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43001228: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x4300122C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001230: jal         0x430006C4
    // 0x43001234: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001234: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x43001238: bne         $v0, $zero, L_4300133C
    if (ctx->r2 != 0) {
        // 0x4300123C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300133C;
    }
    // 0x4300123C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001240: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x43001244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43001248: beq         $v0, $zero, L_43001268
    if (ctx->r2 == 0) {
        // 0x4300124C: nop
    
            goto L_43001268;
    }
    // 0x4300124C: nop

    // 0x43001250: bne         $v0, $at, L_4300133C
    if (ctx->r2 != ctx->r1) {
        // 0x43001254: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300133C;
    }
    // 0x43001254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001258: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x4300125C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43001260: bne         $t6, $at, L_4300133C
    if (ctx->r14 != ctx->r1) {
        // 0x43001264: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300133C;
    }
    // 0x43001264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001268:
    // 0x43001268: bne         $v0, $zero, L_4300127C
    if (ctx->r2 != 0) {
        // 0x4300126C: addiu       $t8, $zero, 0x23
        ctx->r24 = ADD32(0, 0X23);
            goto L_4300127C;
    }
    // 0x4300126C: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x43001270: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x43001274: b           L_430012A4
    // 0x43001278: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
        goto L_430012A4;
    // 0x43001278: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
L_4300127C:
    // 0x4300127C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x43001280: jal         0x430007A8
    // 0x43001284: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    ovl_enemy_world3_7A8(rdram, ctx);
        goto after_1;
    // 0x43001284: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    after_1:
    // 0x43001288: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x4300128C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x43001290: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x43001294: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x43001298: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4300129C: jal         0x430006C4
    // 0x430012A0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x430012A0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_2:
L_430012A4:
    // 0x430012A4: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x430012A8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430012AC: lwc1        $f4, 0x24($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X24);
    // 0x430012B0: lwc1        $f8, -0x613C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X613C);
    // 0x430012B4: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x430012B8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430012BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430012C0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x430012C4: nop

    // 0x430012C8: bc1f        L_430012EC
    if (!c1cs) {
        // 0x430012CC: lw          $v0, 0x74($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X74);
            goto L_430012EC;
    }
    // 0x430012CC: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x430012D0: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x430012D4: jal         0x430006C4
    // 0x430012D8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x430012D8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x430012DC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430012E0: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x430012E4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x430012E8: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
L_430012EC:
    // 0x430012EC: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x430012F0: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x430012F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430012F8: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x430012FC: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x43001300: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x43001304: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x43001308: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x4300130C: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x43001310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43001314: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43001318: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x4300131C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x43001320: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x43001324: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x43001328: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x4300132C: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x43001330: jal         0x43005218
    // 0x43001334: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    ovl_enemy_world3_5218(rdram, ctx);
        goto after_4;
    // 0x43001334: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    after_4:
    // 0x43001338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300133C:
    // 0x4300133C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x43001340: jr          $ra
    // 0x43001344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43001344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world3_1348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001348: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4300134C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001350: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43001354: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x43001358: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x4300135C: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x43001360: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43001364: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001368: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4300136C: jal         0x430006C4
    // 0x43001370: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001370: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x43001374: bne         $v0, $zero, L_4300141C
    if (ctx->r2 != 0) {
        // 0x43001378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x43001378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300137C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x43001380: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43001384: beq         $v0, $zero, L_430013A4
    if (ctx->r2 == 0) {
        // 0x43001388: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_430013A4;
    }
    // 0x43001388: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x4300138C: bne         $v0, $at, L_4300141C
    if (ctx->r2 != ctx->r1) {
        // 0x43001390: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x43001390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001394: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x43001398: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300139C: bne         $t8, $at, L_4300141C
    if (ctx->r24 != ctx->r1) {
        // 0x430013A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x430013A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430013A4:
    // 0x430013A4: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x430013A8: addiu       $t1, $sp, 0x18
    ctx->r9 = ADD32(ctx->r29, 0X18);
    // 0x430013AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x430013B0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x430013B4: bne         $v0, $zero, L_430013C8
    if (ctx->r2 != 0) {
        // 0x430013B8: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_430013C8;
    }
    // 0x430013B8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x430013BC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x430013C0: b           L_430013D0
    // 0x430013C4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_430013D0;
    // 0x430013C4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_430013C8:
    // 0x430013C8: addiu       $t3, $zero, 0x21
    ctx->r11 = ADD32(0, 0X21);
    // 0x430013CC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_430013D0:
    // 0x430013D0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x430013D4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x430013D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x430013DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430013E0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x430013E4: jal         0x43005218
    // 0x430013E8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    ovl_enemy_world3_5218(rdram, ctx);
        goto after_1;
    // 0x430013E8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_1:
    // 0x430013EC: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x430013F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430013F4: beq         $t5, $at, L_4300141C
    if (ctx->r13 == ctx->r1) {
        // 0x430013F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x430013F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430013FC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x43001400: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x43001404: lw          $t7, 0x54($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X54);
    // 0x43001408: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4300140C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x43001410: sw          $t8, 0x54($t6)
    MEM_W(0X54, ctx->r14) = ctx->r24;
    // 0x43001414: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x43001418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300141C:
    // 0x4300141C: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x43001420: jr          $ra
    // 0x43001424: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43001424: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world3_1428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001428: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300142C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43001430: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43001434: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43001438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300143C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43001440: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43001444: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x43001448: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300144C: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x43001450: jal         0x430006C4
    // 0x43001454: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001454: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300145C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001460: jr          $ra
    // 0x43001464: nop

    return;
    // 0x43001464: nop

;}
RECOMP_FUNC void ovl_enemy_world3_1468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001468: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300146C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001470: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001474: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001478: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300147C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43001480: jal         0x430006C4
    // 0x43001484: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001484: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001488: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x4300148C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x43001490: beq         $t7, $zero, L_430014AC
    if (ctx->r15 == 0) {
        // 0x43001494: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_430014AC;
    }
    // 0x43001494: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x43001498: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x4300149C: nop

    // 0x430014A0: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x430014A4: b           L_430014B4
    // 0x430014A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_430014B4;
    // 0x430014A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_430014AC:
    // 0x430014AC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x430014B0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_430014B4:
    // 0x430014B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x430014B8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x430014BC: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x430014C0: jal         0x430006C4
    // 0x430014C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x430014C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x430014C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430014CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430014D0: jr          $ra
    // 0x430014D4: nop

    return;
    // 0x430014D4: nop

;}
RECOMP_FUNC void ovl_enemy_world3_14D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430014D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430014DC: jr          $ra
    // 0x430014E0: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x430014E0: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_enemy_world3_14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430014E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430014E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430014EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430014F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x430014F4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430014F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x430014FC: jal         0x430006C4
    // 0x43001500: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001500: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001504: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x43001508: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x4300150C: beq         $t7, $zero, L_43001528
    if (ctx->r15 == 0) {
        // 0x43001510: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_43001528;
    }
    // 0x43001510: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x43001514: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43001518: nop

    // 0x4300151C: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x43001520: b           L_43001530
    // 0x43001524: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_43001530;
    // 0x43001524: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_43001528:
    // 0x43001528: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x4300152C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_43001530:
    // 0x43001530: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x43001534: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43001538: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x4300153C: jal         0x430006C4
    // 0x43001540: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x43001540: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x43001544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300154C: jr          $ra
    // 0x43001550: nop

    return;
    // 0x43001550: nop

;}
RECOMP_FUNC void ovl_enemy_world3_1554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001554: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300155C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001560: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001564: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43001568: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4300156C: jal         0x430006C4
    // 0x43001570: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43001570: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001574: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x43001578: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x4300157C: beq         $t7, $zero, L_43001598
    if (ctx->r15 == 0) {
        // 0x43001580: ori         $t1, $t0, 0x4
        ctx->r9 = ctx->r8 | 0X4;
            goto L_43001598;
    }
    // 0x43001580: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x43001584: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43001588: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x4300158C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x43001590: b           L_4300159C
    // 0x43001594: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_4300159C;
    // 0x43001594: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_43001598:
    // 0x43001598: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_4300159C:
    // 0x4300159C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x430015A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x430015A4: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x430015A8: jal         0x430006C4
    // 0x430015AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x430015AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x430015B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430015B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430015B8: jr          $ra
    // 0x430015BC: nop

    return;
    // 0x430015BC: nop

;}
