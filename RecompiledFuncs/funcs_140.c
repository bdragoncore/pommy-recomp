#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_devil_DA8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DB4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DC0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DCC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DD8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DE4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DF0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_DFC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E08(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E14(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E20(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E2C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E38(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E44(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E50(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E5C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E68(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E74(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E80(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E8C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_E98(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EA4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EB0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43000F54: sltiu       $at, $a0, 0x5
    ctx->r1 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x43000F58: beq         $at, $zero, L_43000F94
    if (ctx->r1 == 0) {
        // 0x43000F5C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_43000F94;
    }
    // 0x43000F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43000F60: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x43000F64: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43000F68: addu        $at, $at, $t6
    gpr jr_addend_43000F74 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43000F6C: lw          $t6, -0x4B00($at)
    ctx->r14 = ADD32(ctx->r1, -0X4B00);
    // 0x43000F70: nop

    // 0x43000F74: jr          $t6
    // 0x43000F78: nop

    switch (jr_addend_43000F74 >> 2) {
        case 0: goto L_43000F7C; break;
        case 1: goto L_43000F8C; break;
        case 2: goto L_43000F94; break;
        case 3: goto L_43000F94; break;
        case 4: goto L_43000F94; break;
        default: switch_error(__func__, 0x43000F74, 0x4300B500);
    }
    // 0x43000F78: nop

L_43000F7C:
    // 0x43000F7C: jal         0x43000FB0
    // 0x43000F80: nop

    ovl_boss_devil_FB0(rdram, ctx);
        goto after_0;
    // 0x43000F80: nop

    after_0:
    // 0x43000F84: b           L_43000F98
    // 0x43000F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43000F98;
    // 0x43000F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43000F8C:
    // 0x43000F8C: jal         0x43001034
    // 0x43000F90: nop

    ovl_boss_devil_1034(rdram, ctx);
        goto after_1;
    // 0x43000F90: nop

    after_1:
L_43000F94:
    // 0x43000F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43000F98:
    // 0x43000F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43000F9C: jr          $ra
    // 0x43000FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43000FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43000FA4: nop

    // 0x43000FA8: nop

    // 0x43000FAC: nop

;}
RECOMP_FUNC void ovl_boss_devil_FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43000FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43000FB8: jal         0x43009F14
    // 0x43000FBC: nop

    ovl_boss_devil_9F14(rdram, ctx);
        goto after_0;
    // 0x43000FBC: nop

    after_0:
    // 0x43000FC0: jal         0x4300AB98
    // 0x43000FC4: nop

    ovl_boss_devil_AB98(rdram, ctx);
        goto after_1;
    // 0x43000FC4: nop

    after_1:
    // 0x43000FC8: jal         0x430013F0
    // 0x43000FCC: nop

    ovl_boss_devil_13F0(rdram, ctx);
        goto after_2;
    // 0x43000FCC: nop

    after_2:
    // 0x43000FD0: jal         0x4300AC14
    // 0x43000FD4: nop

    ovl_boss_devil_AC14(rdram, ctx);
        goto after_3;
    // 0x43000FD4: nop

    after_3:
    // 0x43000FD8: jal         0x4300787C
    // 0x43000FDC: nop

    ovl_boss_devil_787C(rdram, ctx);
        goto after_4;
    // 0x43000FDC: nop

    after_4:
    // 0x43000FE0: jal         0x43004110
    // 0x43000FE4: nop

    ovl_boss_devil_4110(rdram, ctx);
        goto after_5;
    // 0x43000FE4: nop

    after_5:
    // 0x43000FE8: jal         0x43001940
    // 0x43000FEC: nop

    ovl_boss_devil_1940(rdram, ctx);
        goto after_6;
    // 0x43000FEC: nop

    after_6:
    // 0x43000FF0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43000FF4: jal         0x43001170
    // 0x43000FF8: sw          $v0, -0x4838($at)
    MEM_W(-0X4838, ctx->r1) = ctx->r2;
    ovl_boss_devil_1170(rdram, ctx);
        goto after_7;
    // 0x43000FF8: sw          $v0, -0x4838($at)
    MEM_W(-0X4838, ctx->r1) = ctx->r2;
    after_7:
    // 0x43000FFC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001000: addiu       $t7, $t7, -0x4EE0
    ctx->r15 = ADD32(ctx->r15, -0X4EE0);
    // 0x43001004: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43001008: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300100C: addiu       $t6, $t6, -0x4858
    ctx->r14 = ADD32(ctx->r14, -0X4858);
    // 0x43001010: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x43001014: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x43001018: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x4300101C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x43001020: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x43001024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300102C: jr          $ra
    // 0x43001030: nop

    return;
    // 0x43001030: nop

;}
RECOMP_FUNC void ovl_boss_devil_1034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300103C: jal         0x4300AC1C
    // 0x43001040: nop

    ovl_boss_devil_AC1C(rdram, ctx);
        goto after_0;
    // 0x43001040: nop

    after_0:
    // 0x43001044: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001048: lw          $a0, -0x4838($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4838);
    // 0x4300104C: nop

    // 0x43001050: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x43001054: nop

    // 0x43001058: jalr        $t9
    // 0x4300105C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300105C: nop

    after_1:
    // 0x43001060: jal         0x4300782C
    // 0x43001064: nop

    ovl_boss_devil_782C(rdram, ctx);
        goto after_2;
    // 0x43001064: nop

    after_2:
    // 0x43001068: jal         0x43001238
    // 0x4300106C: nop

    ovl_boss_devil_1238(rdram, ctx);
        goto after_3;
    // 0x4300106C: nop

    after_3:
    // 0x43001070: jal         0x430043C4
    // 0x43001074: nop

    ovl_boss_devil_43C4(rdram, ctx);
        goto after_4;
    // 0x43001074: nop

    after_4:
    // 0x43001078: jal         0x4300AD28
    // 0x4300107C: nop

    ovl_boss_devil_AD28(rdram, ctx);
        goto after_5;
    // 0x4300107C: nop

    after_5:
    // 0x43001080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001088: jr          $ra
    // 0x4300108C: nop

    return;
    // 0x4300108C: nop

;}
RECOMP_FUNC void ovl_boss_devil_1090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43001094: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x43001098: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4300109C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430010A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430010A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430010A8: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x430010AC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430010B0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430010B4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430010B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430010BC: addiu       $s4, $s4, -0x4848
    ctx->r20 = ADD32(ctx->r20, -0X4848);
    // 0x430010C0: addiu       $s3, $s3, -0x4858
    ctx->r19 = ADD32(ctx->r19, -0X4858);
    // 0x430010C4: addiu       $s2, $s2, -0x483C
    ctx->r18 = ADD32(ctx->r18, -0X483C);
    // 0x430010C8: addiu       $s0, $s0, -0x4860
    ctx->r16 = ADD32(ctx->r16, -0X4860);
    // 0x430010CC: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
L_430010D0:
    // 0x430010D0: jal         0x43000DE4
    // 0x430010D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_DE4(rdram, ctx);
        goto after_0;
    // 0x430010D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x430010D8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x430010DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430010E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430010E4: jal         0x430006C4
    // 0x430010E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_1;
    // 0x430010E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x430010EC: bne         $v0, $zero, L_4300110C
    if (ctx->r2 != 0) {
        // 0x430010F0: nop
    
            goto L_4300110C;
    }
    // 0x430010F0: nop

    // 0x430010F4: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x430010F8: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x430010FC: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x43001100: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x43001104: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x43001108: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
L_4300110C:
    // 0x4300110C: jal         0x43004078
    // 0x43001110: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_devil_4078(rdram, ctx);
        goto after_2;
    // 0x43001110: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x43001114: jal         0x43001480
    // 0x43001118: nop

    ovl_boss_devil_1480(rdram, ctx);
        goto after_3;
    // 0x43001118: nop

    after_3:
    // 0x4300111C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x43001120: nop

    // 0x43001124: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x43001128: jal         0x4300085C
    // 0x4300112C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    ovl_boss_devil_85C(rdram, ctx);
        goto after_4;
    // 0x4300112C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    after_4:
    // 0x43001130: b           L_430010D0
    // 0x43001134: nop

        goto L_430010D0;
    // 0x43001134: nop

    // 0x43001138: nop

    // 0x4300113C: nop

    // 0x43001140: nop

    // 0x43001144: nop

    // 0x43001148: nop

    // 0x4300114C: nop

    // 0x43001150: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43001154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001158: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4300115C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43001160: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43001164: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43001168: jr          $ra
    // 0x4300116C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4300116C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_boss_devil_1170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001178: jal         0x43000DE4
    // 0x4300117C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_DE4(rdram, ctx);
        goto after_0;
    // 0x4300117C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43001180: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001184: addiu       $v1, $v1, -0x4860
    ctx->r3 = ADD32(ctx->r3, -0X4860);
    // 0x43001188: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300118C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43001190: addiu       $t6, $t6, -0x4ED4
    ctx->r14 = ADD32(ctx->r14, -0X4ED4);
    // 0x43001194: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43001198: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4300119C: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x430011A0: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x430011A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430011A8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x430011AC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x430011B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430011B4: jal         0x430006C4
    // 0x430011B8: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_1;
    // 0x430011B8: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    after_1:
    // 0x430011BC: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x430011C0: addiu       $a0, $a0, 0x1090
    ctx->r4 = ADD32(ctx->r4, 0X1090);
    // 0x430011C4: ori         $a1, $zero, 0xFED1
    ctx->r5 = 0 | 0XFED1;
    // 0x430011C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430011CC: jal         0x43000820
    // 0x430011D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_2;
    // 0x430011D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x430011D4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430011D8: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430011DC: sw          $v0, -0x4570($at)
    MEM_W(-0X4570, ctx->r1) = ctx->r2;
    // 0x430011E0: addiu       $t0, $t0, -0x4ED4
    ctx->r8 = ADD32(ctx->r8, -0X4ED4);
    // 0x430011E4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x430011E8: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430011EC: addiu       $t9, $t9, -0x4858
    ctx->r25 = ADD32(ctx->r25, -0X4858);
    // 0x430011F0: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x430011F4: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x430011F8: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x430011FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43001200: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001204: addiu       $v1, $v1, -0x4848
    ctx->r3 = ADD32(ctx->r3, -0X4848);
    // 0x43001208: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x4300120C: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x43001210: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x43001214: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x43001218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300121C: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x43001220: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43001224: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001228: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x4300122C: sw          $zero, -0x483C($at)
    MEM_W(-0X483C, ctx->r1) = 0;
    // 0x43001230: jr          $ra
    // 0x43001234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_1238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300123C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001244: lw          $a0, -0x4570($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4570);
    // 0x43001248: jal         0x4300082C
    // 0x4300124C: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_0;
    // 0x4300124C: nop

    after_0:
    // 0x43001250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001258: jr          $ra
    // 0x4300125C: nop

    return;
    // 0x4300125C: nop

;}
RECOMP_FUNC void ovl_boss_devil_1260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001260: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43001264: addiu       $t0, $t0, -0x4574
    ctx->r8 = ADD32(ctx->r8, -0X4574);
    // 0x43001268: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x4300126C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001270: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x43001274: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x43001278: lh          $v1, -0x45D8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X45D8);
    // 0x4300127C: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43001280: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x43001284: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x43001288: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4300128C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x43001290: addiu       $t9, $t9, -0x4830
    ctx->r25 = ADD32(ctx->r25, -0X4830);
    // 0x43001294: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x43001298: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x4300129C: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x430012A0: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x430012A4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x430012A8: jr          $ra
    // 0x430012AC: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    return;
    // 0x430012AC: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void ovl_boss_devil_12B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430012B0: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430012B4: addiu       $v1, $v1, -0x4830
    ctx->r3 = ADD32(ctx->r3, -0X4830);
    // 0x430012B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430012BC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
L_430012C0:
    // 0x430012C0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x430012C4: nop

    // 0x430012C8: beq         $a0, $t6, L_430012E0
    if (ctx->r4 == ctx->r14) {
        // 0x430012CC: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_430012E0;
    }
    // 0x430012CC: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x430012D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x430012D4: bne         $v0, $a1, L_430012C0
    if (ctx->r2 != ctx->r5) {
        // 0x430012D8: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_430012C0;
    }
    // 0x430012D8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x430012DC: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_430012E0:
    // 0x430012E0: beq         $at, $zero, L_43001318
    if (ctx->r1 == 0) {
        // 0x430012E4: lui         $a1, 0x4301
        ctx->r5 = S32(0X4301 << 16);
            goto L_43001318;
    }
    // 0x430012E4: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430012E8: addiu       $a1, $a1, -0x4574
    ctx->r5 = ADD32(ctx->r5, -0X4574);
    // 0x430012EC: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x430012F0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x430012F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x430012F8: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x430012FC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x43001300: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x43001304: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001308: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x4300130C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x43001310: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x43001314: sh          $v0, -0x45D8($at)
    MEM_H(-0X45D8, ctx->r1) = ctx->r2;
L_43001318:
    // 0x43001318: jr          $ra
    // 0x4300131C: nop

    return;
    // 0x4300131C: nop

;}
RECOMP_FUNC void ovl_boss_devil_1320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001320: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001324: lw          $t6, -0x4830($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4830);
    // 0x43001328: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300132C: bne         $a0, $t6, L_43001340
    if (ctx->r4 != ctx->r14) {
        // 0x43001330: lui         $v0, 0x4301
        ctx->r2 = S32(0X4301 << 16);
            goto L_43001340;
    }
    // 0x43001330: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001334: lw          $v0, -0x482C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X482C);
    // 0x43001338: jr          $ra
    // 0x4300133C: nop

    return;
    // 0x4300133C: nop

L_43001340:
    // 0x43001340: lw          $t7, -0x4824($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4824);
    // 0x43001344: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001348: bne         $a0, $t7, L_43001360
    if (ctx->r4 != ctx->r15) {
        // 0x4300134C: addiu       $v1, $v1, -0x4818
        ctx->r3 = ADD32(ctx->r3, -0X4818);
            goto L_43001360;
    }
    // 0x4300134C: addiu       $v1, $v1, -0x4818
    ctx->r3 = ADD32(ctx->r3, -0X4818);
    // 0x43001350: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001354: lw          $v0, -0x4820($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4820);
    // 0x43001358: jr          $ra
    // 0x4300135C: nop

    return;
    // 0x4300135C: nop

L_43001360:
    // 0x43001360: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001364: addiu       $v0, $v0, -0x45D8
    ctx->r2 = ADD32(ctx->r2, -0X45D8);
L_43001368:
    // 0x43001368: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x4300136C: nop

    // 0x43001370: bne         $a0, $t8, L_43001384
    if (ctx->r4 != ctx->r24) {
        // 0x43001374: nop
    
            goto L_43001384;
    }
    // 0x43001374: nop

    // 0x43001378: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x4300137C: jr          $ra
    // 0x43001380: nop

    return;
    // 0x43001380: nop

L_43001384:
    // 0x43001384: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x43001388: nop

    // 0x4300138C: bne         $a0, $t9, L_430013A0
    if (ctx->r4 != ctx->r25) {
        // 0x43001390: nop
    
            goto L_430013A0;
    }
    // 0x43001390: nop

    // 0x43001394: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x43001398: jr          $ra
    // 0x4300139C: nop

    return;
    // 0x4300139C: nop

L_430013A0:
    // 0x430013A0: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x430013A4: nop

    // 0x430013A8: bne         $a0, $t0, L_430013BC
    if (ctx->r4 != ctx->r8) {
        // 0x430013AC: nop
    
            goto L_430013BC;
    }
    // 0x430013AC: nop

    // 0x430013B0: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x430013B4: jr          $ra
    // 0x430013B8: nop

    return;
    // 0x430013B8: nop

L_430013BC:
    // 0x430013BC: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x430013C0: nop

    // 0x430013C4: bne         $a0, $t1, L_430013D8
    if (ctx->r4 != ctx->r9) {
        // 0x430013C8: nop
    
            goto L_430013D8;
    }
    // 0x430013C8: nop

    // 0x430013CC: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x430013D0: jr          $ra
    // 0x430013D4: nop

    return;
    // 0x430013D4: nop

L_430013D8:
    // 0x430013D8: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x430013DC: bne         $v1, $v0, L_43001368
    if (ctx->r3 != ctx->r2) {
        // 0x430013E0: nop
    
            goto L_43001368;
    }
    // 0x430013E0: nop

    // 0x430013E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430013E8: jr          $ra
    // 0x430013EC: nop

    return;
    // 0x430013EC: nop

;}
RECOMP_FUNC void ovl_boss_devil_13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430013F0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430013F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430013F8: sw          $t6, -0x4830($at)
    MEM_W(-0X4830, ctx->r1) = ctx->r14;
    // 0x430013FC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001400: sh          $zero, -0x45D8($at)
    MEM_H(-0X45D8, ctx->r1) = 0;
    // 0x43001404: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001408: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x4300140C: sw          $t7, -0x4824($at)
    MEM_W(-0X4824, ctx->r1) = ctx->r15;
    // 0x43001410: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001414: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43001418: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300141C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001420: addiu       $a0, $a0, -0x45D4
    ctx->r4 = ADD32(ctx->r4, -0X45D4);
    // 0x43001424: addiu       $v1, $v1, -0x4818
    ctx->r3 = ADD32(ctx->r3, -0X4818);
    // 0x43001428: sh          $t8, -0x45D6($at)
    MEM_H(-0X45D6, ctx->r1) = ctx->r24;
    // 0x4300142C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43001430: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x43001434: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_43001438:
    // 0x43001438: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x4300143C: addiu       $t0, $v0, 0x2
    ctx->r8 = ADD32(ctx->r2, 0X2);
    // 0x43001440: addiu       $t1, $v0, 0x3
    ctx->r9 = ADD32(ctx->r2, 0X3);
    // 0x43001444: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x43001448: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x4300144C: sh          $t1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r9;
    // 0x43001450: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x43001454: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x43001458: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x4300145C: sw          $a1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r5;
    // 0x43001460: sw          $a1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r5;
    // 0x43001464: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x43001468: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x4300146C: bne         $v0, $a2, L_43001438
    if (ctx->r2 != ctx->r6) {
        // 0x43001470: sw          $a1, -0x30($v1)
        MEM_W(-0X30, ctx->r3) = ctx->r5;
            goto L_43001438;
    }
    // 0x43001470: sw          $a1, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->r5;
    // 0x43001474: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001478: jr          $ra
    // 0x4300147C: sh          $zero, -0x4574($at)
    MEM_H(-0X4574, ctx->r1) = 0;
    return;
    // 0x4300147C: sh          $zero, -0x4574($at)
    MEM_H(-0X4574, ctx->r1) = 0;
;}
RECOMP_FUNC void ovl_boss_devil_1480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001480: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43001484: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43001488: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4300148C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43001490: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43001494: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43001498: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x4300149C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430014A0: addiu       $s3, $s3, -0x45D8
    ctx->r19 = ADD32(ctx->r19, -0X45D8);
    // 0x430014A4: addiu       $s0, $s0, -0x4830
    ctx->r16 = ADD32(ctx->r16, -0X4830);
    // 0x430014A8: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x430014AC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_430014B0:
    // 0x430014B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x430014B4: nop

    // 0x430014B8: beq         $s2, $a0, L_430014F0
    if (ctx->r18 == ctx->r4) {
        // 0x430014BC: nop
    
            goto L_430014F0;
    }
    // 0x430014BC: nop

    // 0x430014C0: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x430014C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430014C8: beq         $t6, $zero, L_430014F0
    if (ctx->r14 == 0) {
        // 0x430014CC: nop
    
            goto L_430014F0;
    }
    // 0x430014CC: nop

    // 0x430014D0: jal         0x430006C4
    // 0x430014D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x430014D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x430014D8: bne         $v0, $zero, L_430014F0
    if (ctx->r2 != 0) {
        // 0x430014DC: nop
    
            goto L_430014F0;
    }
    // 0x430014DC: nop

    // 0x430014E0: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x430014E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x430014E8: jalr        $t9
    // 0x430014EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430014EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
L_430014F0:
    // 0x430014F0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x430014F4: bne         $s0, $s3, L_430014B0
    if (ctx->r16 != ctx->r19) {
        // 0x430014F8: nop
    
            goto L_430014B0;
    }
    // 0x430014F8: nop

    // 0x430014FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43001500: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43001504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43001508: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4300150C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43001510: jr          $ra
    // 0x43001514: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43001514: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x43001518: nop

    // 0x4300151C: nop

;}
RECOMP_FUNC void ovl_boss_devil_1520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001520: jr          $ra
    // 0x43001524: nop

    return;
    // 0x43001524: nop

;}
RECOMP_FUNC void ovl_boss_devil_1528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001528: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x4300152C: nop

    // 0x43001530: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43001534: nop

    // 0x43001538: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x4300153C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43001540: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43001544: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x43001548: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x4300154C: nop

    // 0x43001550: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x43001554: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001558: lwc1        $f6, -0x4AB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4AB0);
    // 0x4300155C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43001560: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43001564: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43001568: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300156C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43001570: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43001574: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x43001578: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x4300157C: lwc1        $f4, -0x4AAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4AAC);
    // 0x43001580: nop

    // 0x43001584: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x43001588: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x4300158C: nop

    // 0x43001590: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43001594: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x43001598: jr          $ra
    // 0x4300159C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    return;
    // 0x4300159C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
;}
RECOMP_FUNC void ovl_boss_devil_15A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430015A0: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430015A4: addiu       $t6, $t6, -0x4858
    ctx->r14 = ADD32(ctx->r14, -0X4858);
    // 0x430015A8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x430015AC: nop

    // 0x430015B0: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x430015B4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x430015B8: nop

    // 0x430015BC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x430015C0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x430015C4: nop

    // 0x430015C8: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x430015CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430015D0: lwc1        $f4, -0x4AA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4AA8);
    // 0x430015D4: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430015D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430015DC: mul.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x430015E0: lwc1        $f6, -0x4AA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4AA4);
    // 0x430015E4: lw          $t0, 0x30($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X30);
    // 0x430015E8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430015EC: mul.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x430015F0: lwc1        $f10, -0x4AA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4AA0);
    // 0x430015F4: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x430015F8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x430015FC: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x43001600: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43001604: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43001608: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300160C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x43001610: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001614: add.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x43001618: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x4300161C: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x43001620: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x43001624: lw          $t1, 0x30($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X30);
    // 0x43001628: lwc1        $f8, -0x4A9C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4A9C);
    // 0x4300162C: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x43001630: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x43001634: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43001638: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4300163C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43001640: add.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x43001644: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43001648: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x4300164C: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43001650: nop

    // 0x43001654: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43001658: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x4300165C: jr          $ra
    // 0x43001660: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    return;
    // 0x43001660: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_boss_devil_1664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001664: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43001668: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300166C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43001670: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43001674: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43001678: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300167C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43001680: lwc1        $f20, 0x10($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X10);
    // 0x43001684: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x43001688: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x4300168C: jal         0x43009FA0
    // 0x43001690: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_0;
    // 0x43001690: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x43001694: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001698: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x4300169C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x430016A0: jal         0x43009FA0
    // 0x430016A4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_1;
    // 0x430016A4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x430016A8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430016AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016B0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x430016B4: jal         0x43009FA0
    // 0x430016B8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_2;
    // 0x430016B8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x430016BC: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x430016C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016C4: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x430016C8: jal         0x43009FA0
    // 0x430016CC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_3;
    // 0x430016CC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x430016D0: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x430016D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016D8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x430016DC: jal         0x43009FA0
    // 0x430016E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_4;
    // 0x430016E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    after_4:
    // 0x430016E4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x430016E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016EC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x430016F0: jal         0x43009FA0
    // 0x430016F4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_5;
    // 0x430016F4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    after_5:
    // 0x430016F8: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x430016FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43001700: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x43001704: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x43001708: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4300170C: nop

    // 0x43001710: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x43001714: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x43001718: beq         $v1, $zero, L_43001724
    if (ctx->r3 == 0) {
        // 0x4300171C: sw          $t7, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r15;
            goto L_43001724;
    }
    // 0x4300171C: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x43001720: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
L_43001724:
    // 0x43001724: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43001728: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x4300172C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43001730: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43001734: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x43001738: jr          $ra
    // 0x4300173C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300173C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
