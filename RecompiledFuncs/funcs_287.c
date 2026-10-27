#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_file_DB4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_DC0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_DCC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_DD8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_DE4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_DF0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_DFC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E08(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E14(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E20(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E2C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E38(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E44(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E50(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E5C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E68(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E74(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E80(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E8C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_E98(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EA4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EB0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_file_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60000F54: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60000F58: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x60000F5C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x60000F60: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60000F64: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x60000F68: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x60000F6C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x60000F70: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x60000F74: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x60000F78: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x60000F7C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x60000F80: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x60000F84: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x60000F88: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x60000F8C: lw          $a3, 0x3C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X3C);
    // 0x60000F90: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x60000F94: sra         $t2, $a3, 24
    ctx->r10 = S32(SIGNED(ctx->r7) >> 24);
    // 0x60000F98: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x60000F9C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x60000FA0: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x60000FA4: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x60000FA8: sra         $t1, $a3, 8
    ctx->r9 = S32(SIGNED(ctx->r7) >> 8);
    // 0x60000FAC: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x60000FB0: or          $t8, $t3, $t7
    ctx->r24 = ctx->r11 | ctx->r15;
    // 0x60000FB4: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x60000FB8: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x60000FBC: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x60000FC0: or          $t7, $t5, $t3
    ctx->r15 = ctx->r13 | ctx->r11;
    // 0x60000FC4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x60000FC8: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x60000FCC: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x60000FD0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x60000FD4: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x60000FD8: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x60000FDC: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x60000FE0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x60000FE4: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x60000FE8: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x60000FEC: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x60000FF0: lui         $t2, 0xF700
    ctx->r10 = S32(0XF700 << 16);
    // 0x60000FF4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x60000FF8: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x60000FFC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x60001000: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001004: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001008: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x6000100C: lw          $t5, 0x4C($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4C);
    // 0x60001010: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001014: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x60001018: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x6000101C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x60001020: addu        $t3, $t6, $t5
    ctx->r11 = ADD32(ctx->r14, ctx->r13);
    // 0x60001024: addiu       $t7, $t3, -0x1
    ctx->r15 = ADD32(ctx->r11, -0X1);
    // 0x60001028: andi        $t9, $t7, 0x3FF
    ctx->r25 = ctx->r15 & 0X3FF;
    // 0x6000102C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60001030: sll         $t1, $t9, 14
    ctx->r9 = S32(ctx->r25 << 14);
    // 0x60001034: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x60001038: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x6000103C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001040: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001044: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x60001048: lw          $t6, 0x50($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X50);
    // 0x6000104C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001050: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x60001054: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x60001058: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x6000105C: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x60001060: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x60001064: andi        $t7, $t3, 0x3FF
    ctx->r15 = ctx->r11 & 0X3FF;
    // 0x60001068: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x6000106C: or          $t1, $t2, $t9
    ctx->r9 = ctx->r10 | ctx->r25;
    // 0x60001070: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x60001074: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001078: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x6000107C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001080: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x60001084: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x60001088: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x6000108C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x60001090: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x60001094: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x60001098: nop

    // 0x6000109C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x600010A0: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x600010A4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x600010A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600010AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600010B0: sll         $t5, $t6, 14
    ctx->r13 = S32(ctx->r14 << 14);
    // 0x600010B4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x600010B8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x600010BC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x600010C0: andi        $t2, $t7, 0x3FF
    ctx->r10 = ctx->r15 & 0X3FF;
    // 0x600010C4: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x600010C8: or          $t1, $t5, $t9
    ctx->r9 = ctx->r13 | ctx->r25;
    // 0x600010CC: jr          $ra
    // 0x600010D0: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    return;
    // 0x600010D0: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
;}
RECOMP_FUNC void ovl_menu_file_10D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600010D4: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x600010D8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x600010DC: beq         $v0, $t6, L_600010F4
    if (ctx->r2 == ctx->r14) {
        // 0x600010E0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600010F4;
    }
    // 0x600010E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_600010E4:
    // 0x600010E4: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x600010E8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x600010EC: bne         $v0, $t7, L_600010E4
    if (ctx->r2 != ctx->r15) {
        // 0x600010F0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_600010E4;
    }
    // 0x600010F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_600010F4:
    // 0x600010F4: jr          $ra
    // 0x600010F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x600010F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_file_10FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600010FC: blez        $a2, L_60001160
    if (SIGNED(ctx->r6) <= 0) {
        // 0x60001100: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001160;
    }
    // 0x60001100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001104: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x60001108: beq         $a3, $zero, L_60001130
    if (ctx->r7 == 0) {
        // 0x6000110C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_60001130;
    }
    // 0x6000110C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_60001110:
    // 0x60001110: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x60001114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001118: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x6000111C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x60001120: bne         $v1, $v0, L_60001110
    if (ctx->r3 != ctx->r2) {
        // 0x60001124: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_60001110;
    }
    // 0x60001124: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x60001128: beq         $v0, $a2, L_60001160
    if (ctx->r2 == ctx->r6) {
        // 0x6000112C: nop
    
            goto L_60001160;
    }
    // 0x6000112C: nop

L_60001130:
    // 0x60001130: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x60001134: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001138: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x6000113C: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x60001140: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x60001144: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x60001148: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x6000114C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x60001150: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x60001154: lbu         $t0, -0x1($a1)
    ctx->r8 = MEM_BU(ctx->r5, -0X1);
    // 0x60001158: bne         $v0, $a2, L_60001130
    if (ctx->r2 != ctx->r6) {
        // 0x6000115C: sb          $t0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r8;
            goto L_60001130;
    }
    // 0x6000115C: sb          $t0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r8;
L_60001160:
    // 0x60001160: jr          $ra
    // 0x60001164: nop

    return;
    // 0x60001164: nop

;}
RECOMP_FUNC void ovl_menu_file_1168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001168: andi        $v1, $a0, 0xF00
    ctx->r3 = ctx->r4 & 0XF00;
    // 0x6000116C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001170: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x60001174: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60001178: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x6000117C: addiu       $t9, $t9, 0x3310
    ctx->r25 = ADD32(ctx->r25, 0X3310);
    // 0x60001180: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60001184: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x60001188: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x6000118C: andi        $t2, $a0, 0xF0
    ctx->r10 = ctx->r4 & 0XF0;
    // 0x60001190: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x60001194: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001198: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x6000119C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600011A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600011A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600011A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600011AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x600011B0: addu        $t0, $a2, $t8
    ctx->r8 = ADD32(ctx->r6, ctx->r24);
    // 0x600011B4: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x600011B8: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x600011BC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x600011C0: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x600011C4: mflo        $t4
    ctx->r12 = lo;
    // 0x600011C8: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x600011CC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x600011D0: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x600011D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600011D8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x600011DC: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x600011E0: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
L_600011E4:
    // 0x600011E4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x600011E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600011EC: multu       $t2, $s0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600011F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600011F4: mflo        $t1
    ctx->r9 = lo;
    // 0x600011F8: addu        $a1, $t1, $s3
    ctx->r5 = ADD32(ctx->r9, ctx->r19);
    // 0x600011FC: jal         0x600010FC
    // 0x60001200: nop

    ovl_menu_file_10FC(rdram, ctx);
        goto after_0;
    // 0x60001200: nop

    after_0:
    // 0x60001204: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001208: bne         $s0, $s4, L_600011E4
    if (ctx->r16 != ctx->r20) {
        // 0x6000120C: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_600011E4;
    }
    // 0x6000120C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x60001210: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001218: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000121C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001220: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60001224: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60001228: jr          $ra
    // 0x6000122C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x6000122C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_file_1230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001230: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x60001234: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x60001238: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x6000123C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x60001240: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001244: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x60001248: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x6000124C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60001250: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x60001254: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x60001258: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_6000125C:
    // 0x6000125C: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x60001260: addu        $a2, $t0, $a3
    ctx->r6 = ADD32(ctx->r8, ctx->r7);
L_60001264:
    // 0x60001264: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x60001268: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x6000126C: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x60001270: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x60001274: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x60001278: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x6000127C: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x60001280: beq         $t1, $t9, L_60001298
    if (ctx->r9 == ctx->r25) {
        // 0x60001284: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_60001298;
    }
    // 0x60001284: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x60001288: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x6000128C: or          $t2, $t2, $t8
    ctx->r10 = ctx->r10 | ctx->r24;
    // 0x60001290: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x60001294: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_60001298:
    // 0x60001298: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x6000129C: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x600012A0: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x600012A4: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600012A8: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x600012AC: beq         $t1, $t9, L_600012C8
    if (ctx->r9 == ctx->r25) {
        // 0x600012B0: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_600012C8;
    }
    // 0x600012B0: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x600012B4: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x600012B8: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x600012BC: or          $t2, $t2, $t9
    ctx->r10 = ctx->r10 | ctx->r25;
    // 0x600012C0: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x600012C4: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
L_600012C8:
    // 0x600012C8: lbu         $a0, 0x7($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X7);
    // 0x600012CC: nop

    // 0x600012D0: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x600012D4: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x600012D8: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x600012DC: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x600012E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600012E4: beq         $t1, $t7, L_600012FC
    if (ctx->r9 == ctx->r15) {
        // 0x600012E8: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_600012FC;
    }
    // 0x600012E8: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x600012EC: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x600012F0: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x600012F4: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x600012F8: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_600012FC:
    // 0x600012FC: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x60001300: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x60001304: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x60001308: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x6000130C: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x60001310: beq         $t1, $t7, L_6000132C
    if (ctx->r9 == ctx->r15) {
        // 0x60001314: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_6000132C;
    }
    // 0x60001314: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x60001318: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x6000131C: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x60001320: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
    // 0x60001324: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x60001328: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
L_6000132C:
    // 0x6000132C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001330: bne         $v1, $t4, L_60001264
    if (ctx->r3 != ctx->r12) {
        // 0x60001334: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_60001264;
    }
    // 0x60001334: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x60001338: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x6000133C: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x60001340: bne         $at, $zero, L_6000125C
    if (ctx->r1 != 0) {
        // 0x60001344: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_6000125C;
    }
    // 0x60001344: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001348: andi        $t9, $t2, 0x80
    ctx->r25 = ctx->r10 & 0X80;
    // 0x6000134C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001350: bne         $t9, $zero, L_60001378
    if (ctx->r25 != 0) {
        // 0x60001354: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_60001378;
    }
    // 0x60001354: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x60001358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000135C: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001360:
    // 0x60001360: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x60001364: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x60001368: bne         $t7, $zero, L_60001378
    if (ctx->r15 != 0) {
        // 0x6000136C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_60001378;
    }
    // 0x6000136C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001370: bne         $a0, $a2, L_60001360
    if (ctx->r4 != ctx->r6) {
        // 0x60001374: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_60001360;
    }
    // 0x60001374: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001378:
    // 0x60001378: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x6000137C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001380: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60001384: bne         $t6, $zero, L_600013A8
    if (ctx->r14 != 0) {
        // 0x60001388: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_600013A8;
    }
    // 0x60001388: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x6000138C: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_60001390:
    // 0x60001390: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x60001394: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x60001398: bne         $t8, $zero, L_600013A8
    if (ctx->r24 != 0) {
        // 0x6000139C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_600013A8;
    }
    // 0x6000139C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x600013A0: bne         $t0, $a2, L_60001390
    if (ctx->r8 != ctx->r6) {
        // 0x600013A4: srl         $t3, $v1, 1
        ctx->r11 = S32(U32(ctx->r3) >> 1);
            goto L_60001390;
    }
    // 0x600013A4: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013A8:
    // 0x600013A8: bne         $v0, $zero, L_600013C0
    if (ctx->r2 != 0) {
        // 0x600013AC: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_600013C0;
    }
    // 0x600013AC: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x600013B0: bne         $v1, $zero, L_600013C4
    if (ctx->r3 != 0) {
        // 0x600013B4: subu        $t7, $t3, $a0
        ctx->r15 = SUB32(ctx->r11, ctx->r4);
            goto L_600013C4;
    }
    // 0x600013B4: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
    // 0x600013B8: b           L_60001540
    // 0x600013BC: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
        goto L_60001540;
    // 0x600013BC: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_600013C0:
    // 0x600013C0: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
L_600013C4:
    // 0x600013C4: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x600013C8: sra         $a1, $a0, 1
    ctx->r5 = S32(SIGNED(ctx->r4) >> 1);
    // 0x600013CC: subu        $t4, $t7, $t0
    ctx->r12 = SUB32(ctx->r15, ctx->r8);
    // 0x600013D0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x600013D4: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_600013D8:
    // 0x600013D8: beq         $t2, $zero, L_60001448
    if (ctx->r10 == 0) {
        // 0x600013DC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001448;
    }
    // 0x600013DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x600013E0: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x600013E4: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_600013E8:
    // 0x600013E8: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x600013EC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600013F0: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x600013F4: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x600013F8: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x600013FC: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x60001400: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x60001404: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x60001408: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x6000140C: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x60001410: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x60001414: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x60001418: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x6000141C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001420: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x60001424: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x60001428: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x6000142C: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x60001430: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x60001434: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001438: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x6000143C: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x60001440: bne         $v1, $a2, L_600013E8
    if (ctx->r3 != ctx->r6) {
        // 0x60001444: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_600013E8;
    }
    // 0x60001444: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_60001448:
    // 0x60001448: beq         $a1, $zero, L_60001534
    if (ctx->r5 == 0) {
        // 0x6000144C: subu        $s0, $a2, $a1
        ctx->r16 = SUB32(ctx->r6, ctx->r5);
            goto L_60001534;
    }
    // 0x6000144C: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x60001450: blez        $s0, L_600014D4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60001454: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600014D4;
    }
    // 0x60001454: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001458: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x6000145C: beq         $s2, $zero, L_60001494
    if (ctx->r18 == 0) {
        // 0x60001460: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_60001494;
    }
    // 0x60001460: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x60001464: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x60001468: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x6000146C: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_60001470:
    // 0x60001470: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x60001474: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x60001478: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x6000147C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001480: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x60001484: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001488: bne         $s1, $v1, L_60001470
    if (ctx->r17 != ctx->r3) {
        // 0x6000148C: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_60001470;
    }
    // 0x6000148C: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x60001490: beq         $v1, $s0, L_600014D4
    if (ctx->r3 == ctx->r16) {
        // 0x60001494: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_600014D4;
    }
L_60001494:
    // 0x60001494: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x60001498: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_6000149C:
    // 0x6000149C: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x600014A0: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x600014A4: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x600014A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x600014AC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x600014B0: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x600014B4: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x600014B8: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x600014BC: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x600014C0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600014C4: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x600014C8: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x600014CC: bne         $v1, $s0, L_6000149C
    if (ctx->r3 != ctx->r16) {
        // 0x600014D0: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_6000149C;
    }
    // 0x600014D0: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_600014D4:
    // 0x600014D4: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x600014D8: beq         $at, $zero, L_60001534
    if (ctx->r1 == 0) {
        // 0x600014DC: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_60001534;
    }
    // 0x600014DC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x600014E0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x600014E4: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x600014E8: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x600014EC: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x600014F0: beq         $t8, $zero, L_60001514
    if (ctx->r24 == 0) {
        // 0x600014F4: addu        $v0, $a3, $t7
        ctx->r2 = ADD32(ctx->r7, ctx->r15);
            goto L_60001514;
    }
    // 0x600014F4: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x600014F8: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x600014FC: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
L_60001500:
    // 0x60001500: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001504: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x60001508: bne         $t5, $v1, L_60001500
    if (ctx->r13 != ctx->r3) {
        // 0x6000150C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_60001500;
    }
    // 0x6000150C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x60001510: beq         $v1, $a2, L_60001534
    if (ctx->r3 == ctx->r6) {
        // 0x60001514: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_60001534;
    }
L_60001514:
    // 0x60001514: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_60001518:
    // 0x60001518: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x6000151C: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x60001520: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x60001524: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x60001528: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x6000152C: bne         $v1, $a2, L_60001518
    if (ctx->r3 != ctx->r6) {
        // 0x60001530: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_60001518;
    }
    // 0x60001530: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_60001534:
    // 0x60001534: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x60001538: bne         $t1, $t3, L_600013D8
    if (ctx->r9 != ctx->r11) {
        // 0x6000153C: nop
    
            goto L_600013D8;
    }
    // 0x6000153C: nop

L_60001540:
    // 0x60001540: andi        $t9, $t4, 0x1
    ctx->r25 = ctx->r12 & 0X1;
    // 0x60001544: beq         $t9, $zero, L_60001554
    if (ctx->r25 == 0) {
        // 0x60001548: lw          $s0, 0x4($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X4);
            goto L_60001554;
    }
    // 0x60001548: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x6000154C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x60001550: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
L_60001554:
    // 0x60001554: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x60001558: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x6000155C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x60001560: jr          $ra
    // 0x60001564: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x60001564: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void ovl_menu_file_1568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001568: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x6000156C: beq         $t6, $zero, L_600015A8
    if (ctx->r14 == 0) {
        // 0x60001570: sra         $t7, $a3, 1
        ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
            goto L_600015A8;
    }
    // 0x60001570: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x60001574: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x60001578: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000157C: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x60001580: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x60001584: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x60001588: mflo        $t0
    ctx->r8 = lo;
    // 0x6000158C: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x60001590: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x60001594: nop

    // 0x60001598: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x6000159C: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x600015A0: jr          $ra
    // 0x600015A4: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    return;
    // 0x600015A4: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_600015A8:
    // 0x600015A8: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600015AC: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600015B0: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x600015B4: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x600015B8: nop

    // 0x600015BC: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x600015C0: mflo        $t9
    ctx->r25 = lo;
    // 0x600015C4: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x600015C8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600015CC: nop

    // 0x600015D0: andi        $t0, $t8, 0xF
    ctx->r8 = ctx->r24 & 0XF;
    // 0x600015D4: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x600015D8: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x600015DC: jr          $ra
    // 0x600015E0: nop

    return;
    // 0x600015E0: nop

;}
RECOMP_FUNC void ovl_menu_file_15E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015E4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600015E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600015EC: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600015F0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x600015F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600015F8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x600015FC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x60001600: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x60001604: addiu       $s1, $s1, 0x3368
    ctx->r17 = ADD32(ctx->r17, 0X3368);
    // 0x60001608: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x6000160C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x60001610: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x60001614: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x60001618: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x6000161C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x60001620: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x60001624: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001628: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x6000162C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x60001630: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001634: jal         0x60001168
    // 0x60001638: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    ovl_menu_file_1168(rdram, ctx);
        goto after_0;
    // 0x60001638: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x6000163C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x60001640: jal         0x60001230
    // 0x60001644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_file_1230(rdram, ctx);
        goto after_1;
    // 0x60001644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x60001648: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x6000164C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x60001650: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x60001654: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_60001658:
    // 0x60001658: blez        $s6, L_600016DC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x6000165C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_600016DC;
    }
    // 0x6000165C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001660: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x60001664: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60001668: addiu       $t7, $t7, 0x3368
    ctx->r15 = ADD32(ctx->r15, 0X3368);
    // 0x6000166C: sll         $t6, $s7, 3
    ctx->r14 = S32(ctx->r23 << 3);
    // 0x60001670: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x60001674: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x60001678: addu        $s3, $t8, $s7
    ctx->r19 = ADD32(ctx->r24, ctx->r23);
L_6000167C:
    // 0x6000167C: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x60001680: beq         $t9, $zero, L_600016A4
    if (ctx->r25 == 0) {
        // 0x60001684: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_600016A4;
    }
    // 0x60001684: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60001688: sra         $t0, $s0, 1
    ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
    // 0x6000168C: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x60001690: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x60001694: nop

    // 0x60001698: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x6000169C: b           L_600016BC
    // 0x600016A0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_600016BC;
    // 0x600016A0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_600016A4:
    // 0x600016A4: sra         $t3, $s0, 1
    ctx->r11 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016A8: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x600016AC: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x600016B0: nop

    // 0x600016B4: sra         $t5, $v0, 4
    ctx->r13 = S32(SIGNED(ctx->r2) >> 4);
    // 0x600016B8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_600016BC:
    // 0x600016BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600016C0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x600016C4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x600016C8: jal         0x60001568
    // 0x600016CC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_menu_file_1568(rdram, ctx);
        goto after_2;
    // 0x600016CC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x600016D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600016D4: bne         $s0, $s6, L_6000167C
    if (ctx->r16 != ctx->r22) {
        // 0x600016D8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_6000167C;
    }
    // 0x600016D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600016DC:
    // 0x600016DC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600016E0: bne         $s7, $fp, L_60001658
    if (ctx->r23 != ctx->r30) {
        // 0x600016E4: nop
    
            goto L_60001658;
    }
    // 0x600016E4: nop

    // 0x600016E8: andi        $t6, $s6, 0x1
    ctx->r14 = ctx->r22 & 0X1;
    // 0x600016EC: beq         $t6, $zero, L_600016FC
    if (ctx->r14 == 0) {
        // 0x600016F0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_600016FC;
    }
    // 0x600016F0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x600016F4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x600016F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_600016FC:
    // 0x600016FC: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x60001700: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x60001704: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001708: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000170C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60001710: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60001714: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60001718: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x6000171C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x60001720: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x60001724: jr          $ra
    // 0x60001728: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001728: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_file_172C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000172C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x60001730: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x60001734: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x60001738: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x6000173C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x60001740: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60001744: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x60001748: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x6000174C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60001750: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x60001754: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x60001758: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x6000175C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x60001760: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x60001764: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x60001768: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_6000176C:
    // 0x6000176C: jal         0x60000118
    // 0x60001770: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_file_118(rdram, ctx);
        goto after_0;
    // 0x60001770: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_0:
    // 0x60001774: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001778: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x6000177C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60001780: bne         $at, $zero, L_6000176C
    if (ctx->r1 != 0) {
        // 0x60001784: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_6000176C;
    }
    // 0x60001784: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x60001788: jal         0x60000118
    // 0x6000178C: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_file_118(rdram, ctx);
        goto after_1;
    // 0x6000178C: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x60001790: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x60001794: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x60001798: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x6000179C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600017A0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x600017A4: beq         $t6, $at, L_60001834
    if (ctx->r14 == ctx->r1) {
        // 0x600017A8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001834;
    }
    // 0x600017A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600017AC: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x600017B0: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600017B4: addiu       $s2, $s2, 0x33E8
    ctx->r18 = ADD32(ctx->r18, 0X33E8);
    // 0x600017B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x600017BC: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x600017C0: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
L_600017C4:
    // 0x600017C4: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x600017C8: bne         $v0, $at, L_600017D8
    if (ctx->r2 != ctx->r1) {
        // 0x600017CC: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_600017D8;
    }
    // 0x600017CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x600017D0: b           L_60001810
    // 0x600017D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_60001810;
    // 0x600017D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600017D8:
    // 0x600017D8: jal         0x60001168
    // 0x600017DC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    ovl_menu_file_1168(rdram, ctx);
        goto after_2;
    // 0x600017DC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_2:
    // 0x600017E0: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x600017E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600017E8: andi        $t8, $t7, 0xF00
    ctx->r24 = ctx->r15 & 0XF00;
    // 0x600017EC: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x600017F0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x600017F4: addu        $t2, $fp, $t1
    ctx->r10 = ADD32(ctx->r30, ctx->r9);
    // 0x600017F8: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x600017FC: nop

    // 0x60001800: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x60001804: jal         0x60001230
    // 0x60001808: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    ovl_menu_file_1230(rdram, ctx);
        goto after_3;
    // 0x60001808: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    after_3:
    // 0x6000180C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_60001810:
    // 0x60001810: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x60001814: beq         $at, $zero, L_60001820
    if (ctx->r1 == 0) {
        // 0x60001818: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_60001820;
    }
    // 0x60001818: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x6000181C: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_60001820:
    // 0x60001820: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x60001824: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x60001828: bne         $a0, $at, L_600017C4
    if (ctx->r4 != ctx->r1) {
        // 0x6000182C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_600017C4;
    }
    // 0x6000182C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60001830: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001834:
    // 0x60001834: andi        $t4, $s3, 0x1
    ctx->r12 = ctx->r19 & 0X1;
    // 0x60001838: beq         $t4, $zero, L_60001844
    if (ctx->r12 == 0) {
        // 0x6000183C: addiu       $fp, $sp, 0x70
        ctx->r30 = ADD32(ctx->r29, 0X70);
            goto L_60001844;
    }
    // 0x6000183C: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x60001840: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_60001844:
    // 0x60001844: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x60001848: nop

    // 0x6000184C: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x60001850: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001854: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x60001858: mflo        $s0
    ctx->r16 = lo;
    // 0x6000185C: sra         $s2, $s0, 1
    ctx->r18 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001860: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x60001864: jal         0x600000E8
    // 0x60001868: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    ovl_menu_file_E8(rdram, ctx);
        goto after_4;
    // 0x60001868: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_4:
    // 0x6000186C: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x60001870: addiu       $a3, $s2, 0x20
    ctx->r7 = ADD32(ctx->r18, 0X20);
    // 0x60001874: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60001878: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x6000187C: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x60001880: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x60001884: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x60001888: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x6000188C: andi        $t1, $t9, 0xF00
    ctx->r9 = ctx->r25 & 0XF00;
    // 0x60001890: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x60001894: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60001898: addu        $t4, $fp, $t3
    ctx->r12 = ADD32(ctx->r30, ctx->r11);
    // 0x6000189C: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x600018A0: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x600018A4: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x600018A8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x600018AC: jal         0x600010FC
    // 0x600018B0: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    ovl_menu_file_10FC(rdram, ctx);
        goto after_5;
    // 0x600018B0: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    after_5:
    // 0x600018B4: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x600018B8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x600018BC: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    // 0x600018C0: sw          $s1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r17;
    // 0x600018C4: sw          $t6, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r14;
    // 0x600018C8: blez        $s0, L_60001918
    if (SIGNED(ctx->r16) <= 0) {
        // 0x600018CC: addu        $s6, $s4, $t7
        ctx->r22 = ADD32(ctx->r20, ctx->r15);
            goto L_60001918;
    }
    // 0x600018CC: addu        $s6, $s4, $t7
    ctx->r22 = ADD32(ctx->r20, ctx->r15);
    // 0x600018D0: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x600018D4: beq         $a0, $zero, L_600018F4
    if (ctx->r4 == 0) {
        // 0x600018D8: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_600018F4;
    }
    // 0x600018D8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x600018DC: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600018E0:
    // 0x600018E0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600018E4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x600018E8: bne         $v1, $s7, L_600018E0
    if (ctx->r3 != ctx->r23) {
        // 0x600018EC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_600018E0;
    }
    // 0x600018EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600018F0: beq         $s7, $s0, L_60001914
    if (ctx->r23 == ctx->r16) {
        // 0x600018F4: addu        $v0, $s6, $s7
        ctx->r2 = ADD32(ctx->r22, ctx->r23);
            goto L_60001914;
    }
L_600018F4:
    // 0x600018F4: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600018F8:
    // 0x600018F8: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x600018FC: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x60001900: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x60001904: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x60001908: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x6000190C: bne         $s7, $s0, L_600018F8
    if (ctx->r23 != ctx->r16) {
        // 0x60001910: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_600018F8;
    }
    // 0x60001910: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_60001914:
    // 0x60001914: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001918:
    // 0x60001918: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x6000191C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001920: blez        $t8, L_600019E4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60001924: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_600019E4;
    }
    // 0x60001924: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001928: lhu         $s2, 0x0($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X0);
    // 0x6000192C: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x60001930: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
L_60001934:
    // 0x60001934: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001938: blez        $t9, L_600019C8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x6000193C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_600019C8;
    }
    // 0x6000193C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001940: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x60001944: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
L_60001948:
    // 0x60001948: lw          $t1, 0x10($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X10);
    // 0x6000194C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60001950: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x60001954: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x60001958: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x6000195C: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x60001960: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x60001964: andi        $a1, $s2, 0xFFFF
    ctx->r5 = ctx->r18 & 0XFFFF;
    // 0x60001968: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000196C: jal         0x600015E4
    // 0x60001970: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    ovl_menu_file_15E4(rdram, ctx);
        goto after_6;
    // 0x60001970: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x60001974: lhu         $s2, 0x2($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X2);
    // 0x60001978: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x6000197C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x60001980: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x60001984: bne         $t0, $s2, L_60001998
    if (ctx->r8 != ctx->r18) {
        // 0x60001988: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_60001998;
    }
    // 0x60001988: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x6000198C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x60001990: b           L_600019C8
    // 0x60001994: nop

        goto L_600019C8;
    // 0x60001994: nop

L_60001998:
    // 0x60001998: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x6000199C: bne         $v1, $at, L_600019B4
    if (ctx->r3 != ctx->r1) {
        // 0x600019A0: lw          $t4, 0x9C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X9C);
            goto L_600019B4;
    }
    // 0x600019A0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x600019A4: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019A8: b           L_600019C8
    // 0x600019AC: nop

        goto L_600019C8;
    // 0x600019AC: nop

    // 0x600019B0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
L_600019B4:
    // 0x600019B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600019B8: bne         $s0, $t4, L_60001948
    if (ctx->r16 != ctx->r12) {
        // 0x600019BC: nop
    
            goto L_60001948;
    }
    // 0x600019BC: nop

    // 0x600019C0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019C4: nop

L_600019C8:
    // 0x600019C8: beq         $t0, $s2, L_600019E4
    if (ctx->r8 == ctx->r18) {
        // 0x600019CC: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_600019E4;
    }
    // 0x600019CC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x600019D0: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x600019D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600019D8: bne         $v0, $t5, L_60001934
    if (ctx->r2 != ctx->r13) {
        // 0x600019DC: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_60001934;
    }
    // 0x600019DC: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x600019E0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_600019E4:
    // 0x600019E4: jal         0x60000124
    // 0x600019E8: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_file_124(rdram, ctx);
        goto after_7;
    // 0x600019E8: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_7:
    // 0x600019EC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600019F0: bne         $s7, $s0, L_600019E4
    if (ctx->r23 != ctx->r16) {
        // 0x600019F4: nop
    
            goto L_600019E4;
    }
    // 0x600019F4: nop

    // 0x600019F8: jal         0x60000124
    // 0x600019FC: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_file_124(rdram, ctx);
        goto after_8;
    // 0x600019FC: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x60001A00: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x60001A04: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x60001A08: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001A0C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001A10: mflo        $a1
    ctx->r5 = lo;
    // 0x60001A14: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x60001A18: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x60001A1C: jal         0x60000034
    // 0x60001A20: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    ovl_menu_file_34(rdram, ctx);
        goto after_9;
    // 0x60001A20: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    after_9:
    // 0x60001A24: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001A28: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60001A2C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x60001A30: jal         0x60000544
    // 0x60001A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_file_544(rdram, ctx);
        goto after_10;
    // 0x60001A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60001A38: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001A3C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x60001A40: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x60001A44: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x60001A48: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x60001A4C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x60001A50: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x60001A54: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x60001A58: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x60001A5C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x60001A60: jr          $ra
    // 0x60001A64: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x60001A64: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_menu_file_1A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001A70: jal         0x60000550
    // 0x60001A74: nop

    ovl_menu_file_550(rdram, ctx);
        goto after_0;
    // 0x60001A74: nop

    after_0:
    // 0x60001A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A80: jr          $ra
    // 0x60001A84: nop

    return;
    // 0x60001A84: nop

;}
RECOMP_FUNC void ovl_menu_file_1A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001A8C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60001A90: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60001A94: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001A98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001A9C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60001AA0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001AA4: blez        $a1, L_60001BB8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001AA8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001BB8;
    }
    // 0x60001AA8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001AAC: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60001AB0: addiu       $s3, $s3, 0x2D10
    ctx->r19 = ADD32(ctx->r19, 0X2D10);
    // 0x60001AB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001AB8:
    // 0x60001AB8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001ABC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60001AC0: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001AC4: beq         $t6, $zero, L_60001B10
    if (ctx->r14 == 0) {
        // 0x60001AC8: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_60001B10;
    }
    // 0x60001AC8: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x60001ACC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001AD0: jal         0x60000538
    // 0x60001AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_538(rdram, ctx);
        goto after_0;
    // 0x60001AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60001AD8: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60001ADC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x60001AE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001AE4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60001AE8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001AEC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001AF4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001AF8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001AFC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60001B00: jal         0x6000055C
    // 0x60001B04: nop

    ovl_menu_file_55C(rdram, ctx);
        goto after_1;
    // 0x60001B04: nop

    after_1:
    // 0x60001B08: b           L_60001B90
    // 0x60001B0C: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
        goto L_60001B90;
    // 0x60001B0C: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
L_60001B10:
    // 0x60001B10: beq         $t9, $zero, L_60001B6C
    if (ctx->r25 == 0) {
        // 0x60001B14: nop
    
            goto L_60001B6C;
    }
    // 0x60001B14: nop

    // 0x60001B18: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B1C: jal         0x600010D4
    // 0x60001B20: nop

    ovl_menu_file_10D4(rdram, ctx);
        goto after_2;
    // 0x60001B20: nop

    after_2:
    // 0x60001B24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60001B2C: jal         0x6000172C
    // 0x60001B30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_172C(rdram, ctx);
        goto after_3;
    // 0x60001B30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x60001B34: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x60001B38: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x60001B3C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x60001B40: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x60001B44: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60001B48: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001B50: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60001B54: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001B58: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60001B5C: jal         0x6000055C
    // 0x60001B60: nop

    ovl_menu_file_55C(rdram, ctx);
        goto after_4;
    // 0x60001B60: nop

    after_4:
    // 0x60001B64: b           L_60001B90
    // 0x60001B68: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
        goto L_60001B90;
    // 0x60001B68: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
L_60001B6C:
    // 0x60001B6C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x60001B70: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x60001B74: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x60001B78: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x60001B7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60001B80: jal         0x600006B8
    // 0x60001B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_file_6B8(rdram, ctx);
        goto after_5;
    // 0x60001B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x60001B88: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B8C: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
L_60001B90:
    // 0x60001B90: nop

    // 0x60001B94: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x60001B98: bne         $t3, $zero, L_60001BAC
    if (ctx->r11 != 0) {
        // 0x60001B9C: nop
    
            goto L_60001BAC;
    }
    // 0x60001B9C: nop

    // 0x60001BA0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001BA4: jal         0x600005A4
    // 0x60001BA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_file_5A4(rdram, ctx);
        goto after_6;
    // 0x60001BA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
L_60001BAC:
    // 0x60001BAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001BB0: bne         $s1, $s2, L_60001AB8
    if (ctx->r17 != ctx->r18) {
        // 0x60001BB4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001AB8;
    }
    // 0x60001BB4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001BB8:
    // 0x60001BB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001BBC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001BC0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001BC4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60001BC8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60001BCC: jr          $ra
    // 0x60001BD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001BD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_file_1BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001BD8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001BDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001BE0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001BE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001BEC: blez        $a1, L_60001C54
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001BF0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001C54;
    }
    // 0x60001BF0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001BF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001BF8:
    // 0x60001BF8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001BFC: nop

    // 0x60001C00: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001C04: beq         $t6, $zero, L_60001C20
    if (ctx->r14 == 0) {
        // 0x60001C08: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_60001C20;
    }
    // 0x60001C08: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x60001C0C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C10: jal         0x60000550
    // 0x60001C14: nop

    ovl_menu_file_550(rdram, ctx);
        goto after_0;
    // 0x60001C14: nop

    after_0:
    // 0x60001C18: b           L_60001C4C
    // 0x60001C1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001C4C;
    // 0x60001C1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C20:
    // 0x60001C20: beq         $t7, $zero, L_60001C3C
    if (ctx->r15 == 0) {
        // 0x60001C24: nop
    
            goto L_60001C3C;
    }
    // 0x60001C24: nop

    // 0x60001C28: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C2C: jal         0x60001A68
    // 0x60001C30: nop

    ovl_menu_file_1A68(rdram, ctx);
        goto after_1;
    // 0x60001C30: nop

    after_1:
    // 0x60001C34: b           L_60001C4C
    // 0x60001C38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001C4C;
    // 0x60001C38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C3C:
    // 0x60001C3C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C40: jal         0x600006AC
    // 0x60001C44: nop

    ovl_menu_file_6AC(rdram, ctx);
        goto after_2;
    // 0x60001C44: nop

    after_2:
    // 0x60001C48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C4C:
    // 0x60001C4C: bne         $s1, $s2, L_60001BF8
    if (ctx->r17 != ctx->r18) {
        // 0x60001C50: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001BF8;
    }
    // 0x60001C50: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001C54:
    // 0x60001C54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001C58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001C5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001C60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001C64: jr          $ra
    // 0x60001C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_file_1C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001C70: andi        $t6, $a2, 0x1
    ctx->r14 = ctx->r6 & 0X1;
    // 0x60001C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001C78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60001C7C: beq         $t6, $zero, L_60001CA8
    if (ctx->r14 == 0) {
        // 0x60001C80: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_60001CA8;
    }
    // 0x60001C80: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001C84: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x60001C88: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x60001C8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60001C90: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x60001C94: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x60001C98: jal         0x600005B0
    // 0x60001C9C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_file_5B0(rdram, ctx);
        goto after_0;
    // 0x60001C9C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60001CA0: b           L_60001CD0
    // 0x60001CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CD0;
    // 0x60001CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CA8:
    // 0x60001CA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60001CAC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60001CB0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60001CB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60001CB8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60001CBC: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x60001CC0: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x60001CC4: jal         0x600005A4
    // 0x60001CC8: nop

    ovl_menu_file_5A4(rdram, ctx);
        goto after_1;
    // 0x60001CC8: nop

    after_1:
    // 0x60001CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CD0:
    // 0x60001CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001CD4: jr          $ra
    // 0x60001CD8: nop

    return;
    // 0x60001CD8: nop

;}
RECOMP_FUNC void ovl_menu_file_1CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CDC: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x60001CE0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x60001CE4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x60001CE8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x60001CEC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x60001CF0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x60001CF4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x60001CF8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x60001CFC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x60001D00: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x60001D04: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x60001D08: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60001D0C: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x60001D10: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60001D14: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x60001D18: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001D1C: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x60001D20: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001D24: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x60001D28: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001D2C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x60001D30: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001D34: bne         $a0, $zero, L_60002CA0
    if (ctx->r4 != 0) {
        // 0x60001D38: swc1        $f20, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
            goto L_60002CA0;
    }
    // 0x60001D38: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x60001D3C: jal         0x60000208
    // 0x60001D40: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_0;
    // 0x60001D40: nop

    after_0:
    // 0x60001D44: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60001D48: addiu       $s4, $s4, 0x2E10
    ctx->r20 = ADD32(ctx->r20, 0X2E10);
    // 0x60001D4C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001D50: jal         0x60001A88
    // 0x60001D54: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    ovl_menu_file_1A88(rdram, ctx);
        goto after_1;
    // 0x60001D54: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_1:
    // 0x60001D58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x60001D5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60001D60: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60001D64: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60001D68: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60001D6C: jal         0x60000574
    // 0x60001D70: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_2;
    // 0x60001D70: nop

    after_2:
    // 0x60001D74: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60001D78: jal         0x60000640
    // 0x60001D7C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_file_640(rdram, ctx);
        goto after_3;
    // 0x60001D7C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_3:
    // 0x60001D80: lw          $a0, 0x340($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X340);
    // 0x60001D84: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x60001D88: jal         0x6000061C
    // 0x60001D8C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    ovl_menu_file_61C(rdram, ctx);
        goto after_4;
    // 0x60001D8C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_4:
    // 0x60001D90: lw          $a0, 0x340($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X340);
    // 0x60001D94: jal         0x60000604
    // 0x60001D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_file_604(rdram, ctx);
        goto after_5;
    // 0x60001D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60001D9C: lw          $a0, 0x368($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X368);
    // 0x60001DA0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x60001DA4: jal         0x6000061C
    // 0x60001DA8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    ovl_menu_file_61C(rdram, ctx);
        goto after_6;
    // 0x60001DA8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_6:
    // 0x60001DAC: lw          $a0, 0x368($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X368);
    // 0x60001DB0: jal         0x60000604
    // 0x60001DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_file_604(rdram, ctx);
        goto after_7;
    // 0x60001DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x60001DB8: lw          $a0, 0x368($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X368);
    // 0x60001DBC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x60001DC0: jal         0x60000634
    // 0x60001DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_634(rdram, ctx);
        goto after_8;
    // 0x60001DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x60001DC8: lw          $a0, 0x37C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X37C);
    // 0x60001DCC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x60001DD0: jal         0x6000061C
    // 0x60001DD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    ovl_menu_file_61C(rdram, ctx);
        goto after_9;
    // 0x60001DD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_9:
    // 0x60001DD8: lw          $a0, 0x37C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X37C);
    // 0x60001DDC: jal         0x60000604
    // 0x60001DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_file_604(rdram, ctx);
        goto after_10;
    // 0x60001DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x60001DE4: lw          $a0, 0x3A4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X3A4);
    // 0x60001DE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x60001DEC: jal         0x6000061C
    // 0x60001DF0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    ovl_menu_file_61C(rdram, ctx);
        goto after_11;
    // 0x60001DF0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_11:
    // 0x60001DF4: lw          $a0, 0x3A4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X3A4);
    // 0x60001DF8: jal         0x60000604
    // 0x60001DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_file_604(rdram, ctx);
        goto after_12;
    // 0x60001DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x60001E00: lw          $a0, 0x3A4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X3A4);
    // 0x60001E04: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60001E08: jal         0x60000634
    // 0x60001E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_634(rdram, ctx);
        goto after_13;
    // 0x60001E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x60001E10: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001E14: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60001E18: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x60001E1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60001E20: jal         0x6000064C
    // 0x60001E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_64C(rdram, ctx);
        goto after_14;
    // 0x60001E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x60001E28: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x60001E2C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x60001E30: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60001E34: addiu       $s7, $s7, 0x3360
    ctx->r23 = ADD32(ctx->r23, 0X3360);
    // 0x60001E38: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x60001E3C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x60001E40: swc1        $f26, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f26.u32l;
    // 0x60001E44: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x60001E48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001E4C: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x60001E50: swc1        $f4, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f4.u32l;
    // 0x60001E54: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x60001E58: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60001E5C: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60001E60: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x60001E64: lui         $t2, 0x2070
    ctx->r10 = S32(0X2070 << 16);
    // 0x60001E68: sw          $t0, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r8;
    // 0x60001E6C: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x60001E70: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x60001E74: ori         $t2, $t2, 0xA0B0
    ctx->r10 = ctx->r10 | 0XA0B0;
    // 0x60001E78: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60001E7C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E80: sw          $t2, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r10;
    // 0x60001E84: lwc1        $f24, 0x3358($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X3358);
    // 0x60001E88: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x60001E8C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x60001E90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001E94: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60001E98: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60001E9C: addiu       $fp, $zero, 0x14
    ctx->r30 = ADD32(0, 0X14);
    // 0x60001EA0: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x60001EA4: cvt.s.w     $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    ctx->f28.fl = CVT_S_W(ctx->f6.u32l);
L_60001EA8:
    // 0x60001EA8: jal         0x60000B68
    // 0x60001EAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_file_B68(rdram, ctx);
        goto after_15;
    // 0x60001EAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x60001EB0: bne         $v0, $s6, L_60001EBC
    if (ctx->r2 != ctx->r22) {
        // 0x60001EB4: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_60001EBC;
    }
    // 0x60001EB4: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x60001EB8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_60001EBC:
    // 0x60001EBC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001EC0: srav        $t5, $s5, $s1
    ctx->r13 = S32(SIGNED(ctx->r21) >> (ctx->r17 & 31));
L_60001EC4:
    // 0x60001EC4: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x60001EC8: beq         $t6, $zero, L_60002068
    if (ctx->r14 == 0) {
        // 0x60001ECC: nop
    
            goto L_60002068;
    }
    // 0x60001ECC: nop

    // 0x60001ED0: jal         0x60000B68
    // 0x60001ED4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_file_B68(rdram, ctx);
        goto after_16;
    // 0x60001ED4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x60001ED8: jal         0x60000B50
    // 0x60001EDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_file_B50(rdram, ctx);
        goto after_17;
    // 0x60001EDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_17:
    // 0x60001EE0: beq         $v0, $zero, L_60001F04
    if (ctx->r2 == 0) {
        // 0x60001EE4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60001F04;
    }
    // 0x60001EE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60001EE8: jal         0x60000B80
    // 0x60001EEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_file_B80(rdram, ctx);
        goto after_18;
    // 0x60001EEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x60001EF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60001EF4: sllv        $t8, $t7, $s1
    ctx->r24 = S32(ctx->r15 << (ctx->r17 & 31));
    // 0x60001EF8: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x60001EFC: b           L_60002068
    // 0x60001F00: and         $s5, $s5, $t9
    ctx->r21 = ctx->r21 & ctx->r25;
        goto L_60002068;
    // 0x60001F00: and         $s5, $s5, $t9
    ctx->r21 = ctx->r21 & ctx->r25;
L_60001F04:
    // 0x60001F04: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x60001F08: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x60001F0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60001F10: addu        $s3, $s4, $t0
    ctx->r19 = ADD32(ctx->r20, ctx->r8);
    // 0x60001F14: jal         0x60000B44
    // 0x60001F18: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_menu_file_B44(rdram, ctx);
        goto after_19;
    // 0x60001F18: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_19:
    // 0x60001F1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001F20: addiu       $a1, $s1, 0x5
    ctx->r5 = ADD32(ctx->r17, 0X5);
    // 0x60001F24: jal         0x60001C6C
    // 0x60001F28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_20;
    // 0x60001F28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x60001F2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001F30: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    // 0x60001F34: jal         0x60001C6C
    // 0x60001F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_21;
    // 0x60001F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x60001F3C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001F40: addiu       $a1, $s1, 0x26
    ctx->r5 = ADD32(ctx->r17, 0X26);
    // 0x60001F44: jal         0x60001C6C
    // 0x60001F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_22;
    // 0x60001F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x60001F4C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001F50: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x60001F54: jal         0x60001C6C
    // 0x60001F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_23;
    // 0x60001F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
L_60001F5C:
    // 0x60001F5C: jal         0x60000BB0
    // 0x60001F60: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    ovl_menu_file_BB0(rdram, ctx);
        goto after_24;
    // 0x60001F60: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_24:
    // 0x60001F64: bne         $v0, $zero, L_60001F70
    if (ctx->r2 != 0) {
        // 0x60001F68: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_60001F70;
    }
    // 0x60001F68: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001F6C: bne         $s0, $zero, L_60001F88
    if (ctx->r16 != 0) {
        // 0x60001F70: sll         $t1, $s1, 3
        ctx->r9 = S32(ctx->r17 << 3);
            goto L_60001F88;
    }
L_60001F70:
    // 0x60001F70: sll         $t1, $s1, 3
    ctx->r9 = S32(ctx->r17 << 3);
    // 0x60001F74: subu        $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x60001F78: addu        $a1, $t1, $s0
    ctx->r5 = ADD32(ctx->r9, ctx->r16);
    // 0x60001F7C: addiu       $a1, $a1, 0xB
    ctx->r5 = ADD32(ctx->r5, 0XB);
    // 0x60001F80: jal         0x60001C6C
    // 0x60001F84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_25;
    // 0x60001F84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_25:
L_60001F88:
    // 0x60001F88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001F8C: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x60001F90: bne         $at, $zero, L_60001F5C
    if (ctx->r1 != 0) {
        // 0x60001F94: nop
    
            goto L_60001F5C;
    }
    // 0x60001F94: nop

    // 0x60001F98: jal         0x60000BF8
    // 0x60001F9C: nop

    ovl_menu_file_BF8(rdram, ctx);
        goto after_26;
    // 0x60001F9C: nop

    after_26:
    // 0x60001FA0: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001FA4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x60001FA8: addiu       $a1, $a1, 0x3350
    ctx->r5 = ADD32(ctx->r5, 0X3350);
    // 0x60001FAC: jal         0x60000028
    // 0x60001FB0: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    ovl_menu_file_28(rdram, ctx);
        goto after_27;
    // 0x60001FB0: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    after_27:
    // 0x60001FB4: lbu         $t2, 0x9C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X9C);
    // 0x60001FB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001FBC: addiu       $t3, $t2, 0x3D0
    ctx->r11 = ADD32(ctx->r10, 0X3D0);
    // 0x60001FC0: sh          $t3, 0x2D58($at)
    MEM_H(0X2D58, ctx->r1) = ctx->r11;
    // 0x60001FC4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x60001FC8: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
    // 0x60001FCC: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x60001FD0: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60001FD4: addiu       $t5, $t5, 0x2D58
    ctx->r13 = ADD32(ctx->r13, 0X2D58);
    // 0x60001FD8: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x60001FDC: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x60001FE0: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x60001FE4: lbu         $t1, 0x2($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2);
    // 0x60001FE8: lbu         $t3, 0x3($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3);
    // 0x60001FEC: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x60001FF0: addiu       $t0, $t9, 0x3D0
    ctx->r8 = ADD32(ctx->r25, 0X3D0);
    // 0x60001FF4: addiu       $t2, $t1, 0x3D0
    ctx->r10 = ADD32(ctx->r9, 0X3D0);
    // 0x60001FF8: addiu       $t4, $t3, 0x3D0
    ctx->r12 = ADD32(ctx->r11, 0X3D0);
    // 0x60001FFC: addiu       $t8, $t7, 0x3D0
    ctx->r24 = ADD32(ctx->r15, 0X3D0);
    // 0x60002000: sh          $t4, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r12;
    // 0x60002004: sh          $t2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r10;
    // 0x60002008: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x6000200C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x60002010: lw          $s0, 0xAC($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XAC);
    // 0x60002014: lw          $a0, 0xA0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA0);
    // 0x60002018: jal         0x600010D4
    // 0x6000201C: nop

    ovl_menu_file_10D4(rdram, ctx);
        goto after_28;
    // 0x6000201C: nop

    after_28:
    // 0x60002020: lw          $a0, 0xA0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA0);
    // 0x60002024: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60002028: jal         0x6000172C
    // 0x6000202C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_172C(rdram, ctx);
        goto after_29;
    // 0x6000202C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_29:
    // 0x60002030: lw          $t5, 0xA4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0XA4);
    // 0x60002034: lw          $t6, 0xA8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XA8);
    // 0x60002038: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x6000203C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x60002040: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60002044: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x60002048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000204C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60002050: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60002054: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60002058: jal         0x6000055C
    // 0x6000205C: nop

    ovl_menu_file_55C(rdram, ctx);
        goto after_30;
    // 0x6000205C: nop

    after_30:
    // 0x60002060: jal         0x60001A68
    // 0x60002064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_file_1A68(rdram, ctx);
        goto after_31;
    // 0x60002064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
L_60002068:
    // 0x60002068: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x6000206C: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x60002070: bne         $at, $zero, L_60001EC4
    if (ctx->r1 != 0) {
        // 0x60002074: srav        $t5, $s5, $s1
        ctx->r13 = S32(SIGNED(ctx->r21) >> (ctx->r17 & 31));
            goto L_60001EC4;
    }
    // 0x60002074: srav        $t5, $s5, $s1
    ctx->r13 = S32(SIGNED(ctx->r21) >> (ctx->r17 & 31));
    // 0x60002078: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x6000207C: lui         $t8, 0x2070
    ctx->r24 = S32(0X2070 << 16);
    // 0x60002080: swc1        $f28, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f28.u32l;
    // 0x60002084: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x60002088: ori         $t8, $t8, 0xA0B0
    ctx->r24 = ctx->r24 | 0XA0B0;
    // 0x6000208C: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    // 0x60002090: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x60002094: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x60002098: swc1        $f26, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f26.u32l;
    // 0x6000209C: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x600020A0: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x600020A4: sw          $t1, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = ctx->r9;
    // 0x600020A8: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x600020AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600020B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600020B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600020B8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x600020BC: jal         0x60000220
    // 0x600020C0: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    ovl_menu_file_220(rdram, ctx);
        goto after_32;
    // 0x600020C0: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    after_32:
    // 0x600020C4: jal         0x60000208
    // 0x600020C8: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_33;
    // 0x600020C8: nop

    after_33:
L_600020CC:
    // 0x600020CC: jal         0x60000B14
    // 0x600020D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_file_B14(rdram, ctx);
        goto after_34;
    // 0x600020D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_34:
    // 0x600020D4: andi        $t5, $v0, 0x9000
    ctx->r13 = ctx->r2 & 0X9000;
    // 0x600020D8: beq         $t5, $zero, L_600020F0
    if (ctx->r13 == 0) {
        // 0x600020DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600020F0;
    }
    // 0x600020DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600020E0: jal         0x60000244
    // 0x600020E4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_file_244(rdram, ctx);
        goto after_35;
    // 0x600020E4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_35:
    // 0x600020E8: b           L_60002240
    // 0x600020EC: nop

        goto L_60002240;
    // 0x600020EC: nop

L_600020F0:
    // 0x600020F0: andi        $t6, $v1, 0x4000
    ctx->r14 = ctx->r3 & 0X4000;
    // 0x600020F4: beq         $t6, $zero, L_6000210C
    if (ctx->r14 == 0) {
        // 0x600020F8: addiu       $at, $zero, 0x400
        ctx->r1 = ADD32(0, 0X400);
            goto L_6000210C;
    }
    // 0x600020F8: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x600020FC: jal         0x60000244
    // 0x60002100: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_file_244(rdram, ctx);
        goto after_36;
    // 0x60002100: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_36:
    // 0x60002104: b           L_60002240
    // 0x60002108: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
        goto L_60002240;
    // 0x60002108: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
L_6000210C:
    // 0x6000210C: bne         $v1, $at, L_60002128
    if (ctx->r3 != ctx->r1) {
        // 0x60002110: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_60002128;
    }
    // 0x60002110: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x60002114: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x60002118: beq         $at, $zero, L_60002188
    if (ctx->r1 == 0) {
        // 0x6000211C: nop
    
            goto L_60002188;
    }
    // 0x6000211C: nop

    // 0x60002120: b           L_60002188
    // 0x60002124: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_60002188;
    // 0x60002124: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_60002128:
    // 0x60002128: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x6000212C: bne         $v1, $at, L_60002154
    if (ctx->r3 != ctx->r1) {
        // 0x60002130: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_60002154;
    }
    // 0x60002130: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002134: bne         $s2, $at, L_60002144
    if (ctx->r18 != ctx->r1) {
        // 0x60002138: nop
    
            goto L_60002144;
    }
    // 0x60002138: nop

    // 0x6000213C: b           L_60002188
    // 0x60002140: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
        goto L_60002188;
    // 0x60002140: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_60002144:
    // 0x60002144: blez        $s2, L_60002188
    if (SIGNED(ctx->r18) <= 0) {
        // 0x60002148: nop
    
            goto L_60002188;
    }
    // 0x60002148: nop

    // 0x6000214C: b           L_60002188
    // 0x60002150: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
        goto L_60002188;
    // 0x60002150: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_60002154:
    // 0x60002154: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x60002158: bne         $v1, $at, L_60002170
    if (ctx->r3 != ctx->r1) {
        // 0x6000215C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_60002170;
    }
    // 0x6000215C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002160: bne         $s2, $at, L_60002174
    if (ctx->r18 != ctx->r1) {
        // 0x60002164: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_60002174;
    }
    // 0x60002164: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x60002168: b           L_60002188
    // 0x6000216C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
        goto L_60002188;
    // 0x6000216C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_60002170:
    // 0x60002170: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
L_60002174:
    // 0x60002174: bne         $v1, $at, L_60002188
    if (ctx->r3 != ctx->r1) {
        // 0x60002178: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60002188;
    }
    // 0x60002178: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000217C: bne         $s2, $at, L_60002188
    if (ctx->r18 != ctx->r1) {
        // 0x60002180: nop
    
            goto L_60002188;
    }
    // 0x60002180: nop

    // 0x60002184: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_60002188:
    // 0x60002188: beq         $v0, $s2, L_60002230
    if (ctx->r2 == ctx->r18) {
        // 0x6000218C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60002230;
    }
    // 0x6000218C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002190: beq         $s2, $at, L_600021A4
    if (ctx->r18 == ctx->r1) {
        // 0x60002194: addiu       $t8, $zero, 0x70
        ctx->r24 = ADD32(0, 0X70);
            goto L_600021A4;
    }
    // 0x60002194: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x60002198: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x6000219C: bne         $s2, $at, L_600021E8
    if (ctx->r18 != ctx->r1) {
        // 0x600021A0: sll         $t5, $s2, 2
        ctx->r13 = S32(ctx->r18 << 2);
            goto L_600021E8;
    }
    // 0x600021A0: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
L_600021A4:
    // 0x600021A4: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x600021A8: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x600021AC: swc1        $f30, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f30.u32l;
    // 0x600021B0: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x600021B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x600021B8: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x600021BC: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x600021C0: bne         $s2, $at, L_600021DC
    if (ctx->r18 != ctx->r1) {
        // 0x600021C4: sw          $t0, 0x50($t1)
        MEM_W(0X50, ctx->r9) = ctx->r8;
            goto L_600021DC;
    }
    // 0x600021C4: sw          $t0, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r8;
    // 0x600021C8: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x600021CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600021D0: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x600021D4: b           L_60002228
    // 0x600021D8: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
        goto L_60002228;
    // 0x600021D8: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
L_600021DC:
    // 0x600021DC: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x600021E0: b           L_60002228
    // 0x600021E4: swc1        $f26, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f26.u32l;
        goto L_60002228;
    // 0x600021E4: swc1        $f26, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f26.u32l;
L_600021E8:
    // 0x600021E8: addu        $t5, $t5, $s2
    ctx->r13 = ADD32(ctx->r13, ctx->r18);
    // 0x600021EC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x600021F0: addiu       $t6, $t5, 0x28
    ctx->r14 = ADD32(ctx->r13, 0X28);
    // 0x600021F4: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x600021F8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x600021FC: swc1        $f26, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f26.u32l;
    // 0x60002200: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60002204: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x60002208: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x6000220C: swc1        $f4, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f4.u32l;
    // 0x60002210: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x60002214: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60002218: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x6000221C: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x60002220: nop

    // 0x60002224: sw          $t0, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r8;
L_60002228:
    // 0x60002228: jal         0x60000244
    // 0x6000222C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_file_244(rdram, ctx);
        goto after_37;
    // 0x6000222C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_37:
L_60002230:
    // 0x60002230: jal         0x6000085C
    // 0x60002234: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_38;
    // 0x60002234: nop

    after_38:
    // 0x60002238: b           L_600020CC
    // 0x6000223C: nop

        goto L_600020CC;
    // 0x6000223C: nop

L_60002240:
    // 0x60002240: jal         0x6000085C
    // 0x60002244: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_39;
    // 0x60002244: nop

    after_39:
    // 0x60002248: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000224C: beq         $s2, $at, L_6000225C
    if (ctx->r18 == ctx->r1) {
        // 0x60002250: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000225C;
    }
    // 0x60002250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002254: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002258: bne         $s2, $at, L_60002B60
    if (ctx->r18 != ctx->r1) {
        // 0x6000225C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_60002B60;
    }
L_6000225C:
    // 0x6000225C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002264: jal         0x60000238
    // 0x60002268: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_file_238(rdram, ctx);
        goto after_40;
    // 0x60002268: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_40:
    // 0x6000226C: jal         0x60000208
    // 0x60002270: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_41;
    // 0x60002270: nop

    after_41:
    // 0x60002274: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000227C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002280: jal         0x60000220
    // 0x60002284: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_file_220(rdram, ctx);
        goto after_42;
    // 0x60002284: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_42:
    // 0x60002288: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000228C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002290: jal         0x60001C6C
    // 0x60002294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_43;
    // 0x60002294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_43:
    // 0x60002298: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000229C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x600022A0: jal         0x60001C6C
    // 0x600022A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_44;
    // 0x600022A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_44:
    // 0x600022A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600022AC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x600022B0: jal         0x60001C6C
    // 0x600022B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_45;
    // 0x600022B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_45:
    // 0x600022B8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600022BC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x600022C0: jal         0x60001C6C
    // 0x600022C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_46;
    // 0x600022C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_46:
    // 0x600022C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600022CC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x600022D0: jal         0x60001C6C
    // 0x600022D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_47;
    // 0x600022D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x600022D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600022DC: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x600022E0: jal         0x60001C6C
    // 0x600022E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_48;
    // 0x600022E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_48:
    // 0x600022E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600022EC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x600022F0: jal         0x60001C6C
    // 0x600022F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_49;
    // 0x600022F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_49:
    // 0x600022F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600022FC: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x60002300: jal         0x60001C6C
    // 0x60002304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_50;
    // 0x60002304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_50:
    // 0x60002308: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000230C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002310: jal         0x60001C6C
    // 0x60002314: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_51;
    // 0x60002314: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_51:
    // 0x60002318: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000231C: bne         $s2, $at, L_60002674
    if (ctx->r18 != ctx->r1) {
        // 0x60002320: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_60002674;
    }
    // 0x60002320: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002324: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x60002328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x6000232C: jal         0x60001C6C
    // 0x60002330: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_52;
    // 0x60002330: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_52:
    // 0x60002334: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x60002338: lui         $t3, 0xA040
    ctx->r11 = S32(0XA040 << 16);
    // 0x6000233C: swc1        $f28, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f28.u32l;
    // 0x60002340: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x60002344: ori         $t3, $t3, 0x40B0
    ctx->r11 = ctx->r11 | 0X40B0;
    // 0x60002348: sw          $t3, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->r11;
    // 0x6000234C: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x60002350: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x60002354: swc1        $f26, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f26.u32l;
    // 0x60002358: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x6000235C: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x60002360: sw          $t6, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r14;
    // 0x60002364: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x60002368: nop

    // 0x6000236C: sw          $t8, 0x50($t9)
    MEM_W(0X50, ctx->r25) = ctx->r24;
L_60002370:
    // 0x60002370: jal         0x60000B14
    // 0x60002374: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_file_B14(rdram, ctx);
        goto after_53;
    // 0x60002374: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_53:
    // 0x60002378: andi        $t0, $v0, 0x8000
    ctx->r8 = ctx->r2 & 0X8000;
    // 0x6000237C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60002380: beq         $t0, $zero, L_600023B8
    if (ctx->r8 == 0) {
        // 0x60002384: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600023B8;
    }
    // 0x60002384: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002388: srav        $t1, $s5, $s2
    ctx->r9 = S32(SIGNED(ctx->r21) >> (ctx->r18 & 31));
    // 0x6000238C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x60002390: beq         $t2, $zero, L_600023A8
    if (ctx->r10 == 0) {
        // 0x60002394: nop
    
            goto L_600023A8;
    }
    // 0x60002394: nop

    // 0x60002398: jal         0x60000244
    // 0x6000239C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_file_244(rdram, ctx);
        goto after_54;
    // 0x6000239C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_54:
    // 0x600023A0: b           L_60002450
    // 0x600023A4: nop

        goto L_60002450;
    // 0x600023A4: nop

L_600023A8:
    // 0x600023A8: jal         0x60000244
    // 0x600023AC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_file_244(rdram, ctx);
        goto after_55;
    // 0x600023AC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_55:
    // 0x600023B0: b           L_600023D8
    // 0x600023B4: andi        $t4, $s0, 0x400
    ctx->r12 = ctx->r16 & 0X400;
        goto L_600023D8;
    // 0x600023B4: andi        $t4, $s0, 0x400
    ctx->r12 = ctx->r16 & 0X400;
L_600023B8:
    // 0x600023B8: andi        $t3, $v1, 0x4000
    ctx->r11 = ctx->r3 & 0X4000;
    // 0x600023BC: beq         $t3, $zero, L_600023D4
    if (ctx->r11 == 0) {
        // 0x600023C0: addiu       $a0, $zero, 0x25
        ctx->r4 = ADD32(0, 0X25);
            goto L_600023D4;
    }
    // 0x600023C0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x600023C4: jal         0x60000244
    // 0x600023C8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    ovl_menu_file_244(rdram, ctx);
        goto after_56;
    // 0x600023C8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    after_56:
    // 0x600023CC: b           L_60002450
    // 0x600023D0: nop

        goto L_60002450;
    // 0x600023D0: nop

L_600023D4:
    // 0x600023D4: andi        $t4, $s0, 0x400
    ctx->r12 = ctx->r16 & 0X400;
L_600023D8:
    // 0x600023D8: beq         $t4, $zero, L_600023F8
    if (ctx->r12 == 0) {
        // 0x600023DC: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_600023F8;
    }
    // 0x600023DC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x600023E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x600023E4: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x600023E8: bne         $at, $zero, L_60002414
    if (ctx->r1 != 0) {
        // 0x600023EC: nop
    
            goto L_60002414;
    }
    // 0x600023EC: nop

    // 0x600023F0: b           L_60002414
    // 0x600023F4: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
        goto L_60002414;
    // 0x600023F4: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_600023F8:
    // 0x600023F8: andi        $t5, $s0, 0x800
    ctx->r13 = ctx->r16 & 0X800;
    // 0x600023FC: beq         $t5, $zero, L_60002414
    if (ctx->r13 == 0) {
        // 0x60002400: nop
    
            goto L_60002414;
    }
    // 0x60002400: nop

    // 0x60002404: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x60002408: bgez        $s2, L_60002414
    if (SIGNED(ctx->r18) >= 0) {
        // 0x6000240C: nop
    
            goto L_60002414;
    }
    // 0x6000240C: nop

    // 0x60002410: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_60002414:
    // 0x60002414: beq         $v0, $s2, L_60002440
    if (ctx->r2 == ctx->r18) {
        // 0x60002418: sll         $t6, $s2, 2
        ctx->r14 = S32(ctx->r18 << 2);
            goto L_60002440;
    }
    // 0x60002418: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x6000241C: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x60002420: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x60002424: addiu       $t7, $t6, 0x28
    ctx->r15 = ADD32(ctx->r14, 0X28);
    // 0x60002428: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x6000242C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x60002430: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60002434: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60002438: jal         0x60000244
    // 0x6000243C: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    ovl_menu_file_244(rdram, ctx);
        goto after_57;
    // 0x6000243C: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    after_57:
L_60002440:
    // 0x60002440: jal         0x6000085C
    // 0x60002444: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_58;
    // 0x60002444: nop

    after_58:
    // 0x60002448: b           L_60002370
    // 0x6000244C: nop

        goto L_60002370;
    // 0x6000244C: nop

L_60002450:
    // 0x60002450: jal         0x6000085C
    // 0x60002454: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_59;
    // 0x60002454: nop

    after_59:
    // 0x60002458: bne         $s2, $s6, L_600024B4
    if (ctx->r18 != ctx->r22) {
        // 0x6000245C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_600024B4;
    }
    // 0x6000245C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000246C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x60002470: jal         0x60000238
    // 0x60002474: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_menu_file_238(rdram, ctx);
        goto after_60;
    // 0x60002474: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_60:
    // 0x60002478: jal         0x60000208
    // 0x6000247C: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_61;
    // 0x6000247C: nop

    after_61:
    // 0x60002480: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60002484: addiu       $s3, $s3, 0x2E10
    ctx->r19 = ADD32(ctx->r19, 0X2E10);
    // 0x60002488: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x6000248C: addiu       $s0, $zero, 0x33
    ctx->r16 = ADD32(0, 0X33);
L_60002490:
    // 0x60002490: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x60002494: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002498: jal         0x60001C6C
    // 0x6000249C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_62;
    // 0x6000249C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_62:
    // 0x600024A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600024A4: bne         $s1, $s0, L_60002490
    if (ctx->r17 != ctx->r16) {
        // 0x600024A8: addiu       $s3, $s3, 0x14
        ctx->r19 = ADD32(ctx->r19, 0X14);
            goto L_60002490;
    }
    // 0x600024A8: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x600024AC: b           L_60001EA8
    // 0x600024B0: nop

        goto L_60001EA8;
    // 0x600024B0: nop

L_600024B4:
    // 0x600024B4: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x600024B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600024BC: jal         0x60001C6C
    // 0x600024C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_63;
    // 0x600024C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_63:
    // 0x600024C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600024C8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x600024CC: jal         0x60001C6C
    // 0x600024D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_64;
    // 0x600024D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_64:
    // 0x600024D4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600024D8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x600024DC: jal         0x60001C6C
    // 0x600024E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_65;
    // 0x600024E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_65:
    // 0x600024E4: lw          $a0, 0x2DC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2DC);
    // 0x600024E8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x600024EC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x600024F0: jal         0x60000574
    // 0x600024F4: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_66;
    // 0x600024F4: nop

    after_66:
    // 0x600024F8: lw          $a0, 0x2F0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2F0);
    // 0x600024FC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60002500: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002504: jal         0x60000574
    // 0x60002508: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_67;
    // 0x60002508: nop

    after_67:
L_6000250C:
    // 0x6000250C: jal         0x60000B14
    // 0x60002510: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_file_B14(rdram, ctx);
        goto after_68;
    // 0x60002510: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_68:
    // 0x60002514: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x60002518: bne         $t9, $zero, L_600025D0
    if (ctx->r25 != 0) {
        // 0x6000251C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600025D0;
    }
    // 0x6000251C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60002520: andi        $t0, $v0, 0x4000
    ctx->r8 = ctx->r2 & 0X4000;
    // 0x60002524: beq         $t0, $zero, L_60002534
    if (ctx->r8 == 0) {
        // 0x60002528: andi        $t1, $v1, 0x100
        ctx->r9 = ctx->r3 & 0X100;
            goto L_60002534;
    }
    // 0x60002528: andi        $t1, $v1, 0x100
    ctx->r9 = ctx->r3 & 0X100;
    // 0x6000252C: b           L_600025D0
    // 0x60002530: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
        goto L_600025D0;
    // 0x60002530: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
L_60002534:
    // 0x60002534: beq         $t1, $zero, L_60002554
    if (ctx->r9 == 0) {
        // 0x60002538: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_60002554;
    }
    // 0x60002538: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x6000253C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002540: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x60002544: bne         $at, $zero, L_60002574
    if (ctx->r1 != 0) {
        // 0x60002548: sll         $t3, $s0, 2
        ctx->r11 = S32(ctx->r16 << 2);
            goto L_60002574;
    }
    // 0x60002548: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x6000254C: b           L_60002570
    // 0x60002550: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_60002570;
    // 0x60002550: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_60002554:
    // 0x60002554: andi        $t2, $v1, 0x200
    ctx->r10 = ctx->r3 & 0X200;
    // 0x60002558: beq         $t2, $zero, L_60002574
    if (ctx->r10 == 0) {
        // 0x6000255C: sll         $t3, $s0, 2
        ctx->r11 = S32(ctx->r16 << 2);
            goto L_60002574;
    }
    // 0x6000255C: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x60002560: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x60002564: bgez        $s0, L_60002574
    if (SIGNED(ctx->r16) >= 0) {
        // 0x60002568: sll         $t3, $s0, 2
        ctx->r11 = S32(ctx->r16 << 2);
            goto L_60002574;
    }
    // 0x60002568: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x6000256C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002570:
    // 0x60002570: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
L_60002574:
    // 0x60002574: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x60002578: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x6000257C: beq         $v0, $s0, L_600025AC
    if (ctx->r2 == ctx->r16) {
        // 0x60002580: addu        $s1, $s4, $t3
        ctx->r17 = ADD32(ctx->r20, ctx->r11);
            goto L_600025AC;
    }
    // 0x60002580: addu        $s1, $s4, $t3
    ctx->r17 = ADD32(ctx->r20, ctx->r11);
    // 0x60002584: multu       $v0, $fp
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60002588: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x6000258C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002590: mflo        $t4
    ctx->r12 = lo;
    // 0x60002594: addu        $t5, $s4, $t4
    ctx->r13 = ADD32(ctx->r20, ctx->r12);
    // 0x60002598: lw          $a0, 0x2DC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2DC);
    // 0x6000259C: jal         0x60000574
    // 0x600025A0: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_69;
    // 0x600025A0: nop

    after_69:
    // 0x600025A4: jal         0x60000244
    // 0x600025A8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_file_244(rdram, ctx);
        goto after_70;
    // 0x600025A8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_70:
L_600025AC:
    // 0x600025AC: lw          $a0, 0x2DC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2DC);
    // 0x600025B0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x600025B4: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x600025B8: jal         0x60000574
    // 0x600025BC: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_71;
    // 0x600025BC: nop

    after_71:
    // 0x600025C0: jal         0x6000085C
    // 0x600025C4: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_72;
    // 0x600025C4: nop

    after_72:
    // 0x600025C8: b           L_6000250C
    // 0x600025CC: nop

        goto L_6000250C;
    // 0x600025CC: nop

L_600025D0:
    // 0x600025D0: jal         0x6000085C
    // 0x600025D4: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_73;
    // 0x600025D4: nop

    after_73:
    // 0x600025D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600025DC: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x600025E0: jal         0x60001C6C
    // 0x600025E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_74;
    // 0x600025E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_74:
    // 0x600025E8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600025EC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x600025F0: jal         0x60001C6C
    // 0x600025F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_75;
    // 0x600025F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_75:
    // 0x600025F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600025FC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x60002600: jal         0x60001C6C
    // 0x60002604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_76;
    // 0x60002604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_76:
    // 0x60002608: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000260C: bne         $s0, $at, L_60002664
    if (ctx->r16 != ctx->r1) {
        // 0x60002610: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60002664;
    }
    // 0x60002610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002618: jal         0x60000CA0
    // 0x6000261C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_CA0(rdram, ctx);
        goto after_77;
    // 0x6000261C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_77:
    // 0x60002620: jal         0x60000244
    // 0x60002624: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_file_244(rdram, ctx);
        goto after_78;
    // 0x60002624: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_78:
    // 0x60002628: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x6000262C: jal         0x60000B80
    // 0x60002630: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_menu_file_B80(rdram, ctx);
        goto after_79;
    // 0x60002630: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_79:
    // 0x60002634: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002638: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x6000263C: jal         0x60001C6C
    // 0x60002640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_80;
    // 0x60002640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_80:
    // 0x60002644: jal         0x60000850
    // 0x60002648: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_file_850(rdram, ctx);
        goto after_81;
    // 0x60002648: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_81:
    // 0x6000264C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002650: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002654: jal         0x60001C6C
    // 0x60002658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_82;
    // 0x60002658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_82:
    // 0x6000265C: b           L_60002B14
    // 0x60002660: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60002B14;
    // 0x60002660: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002664:
    // 0x60002664: jal         0x60000244
    // 0x60002668: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_file_244(rdram, ctx);
        goto after_83;
    // 0x60002668: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_83:
    // 0x6000266C: b           L_60002370
    // 0x60002670: nop

        goto L_60002370;
    // 0x60002670: nop

L_60002674:
    // 0x60002674: xori        $v0, $s2, 0x4
    ctx->r2 = ctx->r18 ^ 0X4;
    // 0x60002678: bne         $v0, $zero, L_60002B10
    if (ctx->r2 != 0) {
        // 0x6000267C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_60002B10;
    }
    // 0x6000267C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60002680: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x60002684: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x60002688: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000268C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x60002690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60002694: jal         0x60001C6C
    // 0x60002698: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_84;
    // 0x60002698: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    after_84:
    // 0x6000269C: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x600026A0: lui         $t8, 0xA0A0
    ctx->r24 = S32(0XA0A0 << 16);
    // 0x600026A4: swc1        $f28, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f28.u32l;
    // 0x600026A8: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x600026AC: ori         $t8, $t8, 0x40B0
    ctx->r24 = ctx->r24 | 0X40B0;
    // 0x600026B0: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    // 0x600026B4: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x600026B8: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x600026BC: swc1        $f26, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f26.u32l;
    // 0x600026C0: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x600026C4: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x600026C8: sw          $t1, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = ctx->r9;
    // 0x600026CC: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x600026D0: nop

    // 0x600026D4: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
L_600026D8:
    // 0x600026D8: jal         0x6000085C
    // 0x600026DC: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_85;
    // 0x600026DC: nop

    after_85:
L_600026E0:
    // 0x600026E0: jal         0x60000B14
    // 0x600026E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_file_B14(rdram, ctx);
        goto after_86;
    // 0x600026E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_86:
    // 0x600026E8: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
    // 0x600026EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600026F0: beq         $t5, $zero, L_600027C4
    if (ctx->r13 == 0) {
        // 0x600026F4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600027C4;
    }
    // 0x600026F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600026F8: bne         $s3, $s6, L_60002790
    if (ctx->r19 != ctx->r22) {
        // 0x600026FC: srav        $t6, $s5, $s2
        ctx->r14 = S32(SIGNED(ctx->r21) >> (ctx->r18 & 31));
            goto L_60002790;
    }
    // 0x600026FC: srav        $t6, $s5, $s2
    ctx->r14 = S32(SIGNED(ctx->r21) >> (ctx->r18 & 31));
    // 0x60002700: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x60002704: beq         $t7, $zero, L_60002780
    if (ctx->r15 == 0) {
        // 0x60002708: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_60002780;
    }
    // 0x60002708: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x6000270C: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x60002710: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x60002714: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x60002718: addiu       $t9, $t8, 0x28
    ctx->r25 = ADD32(ctx->r24, 0X28);
    // 0x6000271C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x60002720: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x60002724: jal         0x60000244
    // 0x60002728: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    ovl_menu_file_244(rdram, ctx);
        goto after_87;
    // 0x60002728: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    after_87:
    // 0x6000272C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x60002730: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60002734: jal         0x6000064C
    // 0x60002738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_64C(rdram, ctx);
        goto after_88;
    // 0x60002738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_88:
    // 0x6000273C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002740: addiu       $v1, $v1, 0x3364
    ctx->r3 = ADD32(ctx->r3, 0X3364);
    // 0x60002744: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x60002748: swc1        $f26, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f26.u32l;
    // 0x6000274C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x60002750: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x60002754: swc1        $f20, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f20.u32l;
    // 0x60002758: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x6000275C: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x60002760: sw          $t2, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r10;
    // 0x60002764: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x60002768: lui         $t6, 0x40A0
    ctx->r14 = S32(0X40A0 << 16);
    // 0x6000276C: sw          $t4, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r12;
    // 0x60002770: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60002774: ori         $t6, $t6, 0xA0B0
    ctx->r14 = ctx->r14 | 0XA0B0;
    // 0x60002778: b           L_600026D8
    // 0x6000277C: sw          $t6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r14;
        goto L_600026D8;
    // 0x6000277C: sw          $t6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r14;
L_60002780:
    // 0x60002780: jal         0x60000244
    // 0x60002784: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_file_244(rdram, ctx);
        goto after_89;
    // 0x60002784: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_89:
    // 0x60002788: b           L_60002804
    // 0x6000278C: andi        $t1, $s0, 0x400
    ctx->r9 = ctx->r16 & 0X400;
        goto L_60002804;
    // 0x6000278C: andi        $t1, $s0, 0x400
    ctx->r9 = ctx->r16 & 0X400;
L_60002790:
    // 0x60002790: beq         $s3, $s6, L_60002800
    if (ctx->r19 == ctx->r22) {
        // 0x60002794: srav        $t8, $s5, $s2
        ctx->r24 = S32(SIGNED(ctx->r21) >> (ctx->r18 & 31));
            goto L_60002800;
    }
    // 0x60002794: srav        $t8, $s5, $s2
    ctx->r24 = S32(SIGNED(ctx->r21) >> (ctx->r18 & 31));
    // 0x60002798: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x6000279C: bne         $t9, $zero, L_600027B4
    if (ctx->r25 != 0) {
        // 0x600027A0: nop
    
            goto L_600027B4;
    }
    // 0x600027A0: nop

    // 0x600027A4: jal         0x60000244
    // 0x600027A8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_file_244(rdram, ctx);
        goto after_90;
    // 0x600027A8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_90:
    // 0x600027AC: b           L_60002894
    // 0x600027B0: sw          $s2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r18;
        goto L_60002894;
    // 0x600027B0: sw          $s2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r18;
L_600027B4:
    // 0x600027B4: jal         0x60000244
    // 0x600027B8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_file_244(rdram, ctx);
        goto after_91;
    // 0x600027B8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_91:
    // 0x600027BC: b           L_60002804
    // 0x600027C0: andi        $t1, $s0, 0x400
    ctx->r9 = ctx->r16 & 0X400;
        goto L_60002804;
    // 0x600027C0: andi        $t1, $s0, 0x400
    ctx->r9 = ctx->r16 & 0X400;
L_600027C4:
    // 0x600027C4: andi        $t0, $v1, 0x4000
    ctx->r8 = ctx->r3 & 0X4000;
    // 0x600027C8: beq         $t0, $zero, L_60002804
    if (ctx->r8 == 0) {
        // 0x600027CC: andi        $t1, $s0, 0x400
        ctx->r9 = ctx->r16 & 0X400;
            goto L_60002804;
    }
    // 0x600027CC: andi        $t1, $s0, 0x400
    ctx->r9 = ctx->r16 & 0X400;
    // 0x600027D0: jal         0x60000244
    // 0x600027D4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_file_244(rdram, ctx);
        goto after_92;
    // 0x600027D4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_92:
    // 0x600027D8: bne         $s3, $s6, L_600027E8
    if (ctx->r19 != ctx->r22) {
        // 0x600027DC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600027E8;
    }
    // 0x600027DC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600027E0: b           L_60002894
    // 0x600027E4: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
        goto L_60002894;
    // 0x600027E4: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
L_600027E8:
    // 0x600027E8: lw          $a0, 0x3364($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3364);
    // 0x600027EC: jal         0x60000550
    // 0x600027F0: nop

    ovl_menu_file_550(rdram, ctx);
        goto after_93;
    // 0x600027F0: nop

    after_93:
    // 0x600027F4: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x600027F8: b           L_600026D8
    // 0x600027FC: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
        goto L_600026D8;
    // 0x600027FC: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
L_60002800:
    // 0x60002800: andi        $t1, $s0, 0x400
    ctx->r9 = ctx->r16 & 0X400;
L_60002804:
    // 0x60002804: beq         $t1, $zero, L_60002824
    if (ctx->r9 == 0) {
        // 0x60002808: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_60002824;
    }
    // 0x60002808: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x6000280C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x60002810: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x60002814: bne         $at, $zero, L_60002840
    if (ctx->r1 != 0) {
        // 0x60002818: nop
    
            goto L_60002840;
    }
    // 0x60002818: nop

    // 0x6000281C: b           L_60002840
    // 0x60002820: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
        goto L_60002840;
    // 0x60002820: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_60002824:
    // 0x60002824: andi        $t2, $s0, 0x800
    ctx->r10 = ctx->r16 & 0X800;
    // 0x60002828: beq         $t2, $zero, L_60002840
    if (ctx->r10 == 0) {
        // 0x6000282C: nop
    
            goto L_60002840;
    }
    // 0x6000282C: nop

    // 0x60002830: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x60002834: bgez        $s2, L_60002840
    if (SIGNED(ctx->r18) >= 0) {
        // 0x60002838: nop
    
            goto L_60002840;
    }
    // 0x60002838: nop

    // 0x6000283C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_60002840:
    // 0x60002840: beq         $v0, $s2, L_60002884
    if (ctx->r2 == ctx->r18) {
        // 0x60002844: sll         $t3, $s2, 2
        ctx->r11 = S32(ctx->r18 << 2);
            goto L_60002884;
    }
    // 0x60002844: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x60002848: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x6000284C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x60002850: addiu       $t4, $t3, 0x28
    ctx->r12 = ADD32(ctx->r11, 0X28);
    // 0x60002854: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x60002858: bne         $s3, $s6, L_6000286C
    if (ctx->r19 != ctx->r22) {
        // 0x6000285C: cvt.s.w     $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
            goto L_6000286C;
    }
    // 0x6000285C: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60002860: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x60002864: b           L_6000287C
    // 0x60002868: swc1        $f20, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f20.u32l;
        goto L_6000287C;
    // 0x60002868: swc1        $f20, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f20.u32l;
L_6000286C:
    // 0x6000286C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002870: lw          $t6, 0x3364($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3364);
    // 0x60002874: nop

    // 0x60002878: swc1        $f20, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f20.u32l;
L_6000287C:
    // 0x6000287C: jal         0x60000244
    // 0x60002880: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_file_244(rdram, ctx);
        goto after_94;
    // 0x60002880: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_94:
L_60002884:
    // 0x60002884: jal         0x6000085C
    // 0x60002888: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_95;
    // 0x60002888: nop

    after_95:
    // 0x6000288C: b           L_600026E0
    // 0x60002890: nop

        goto L_600026E0;
    // 0x60002890: nop

L_60002894:
    // 0x60002894: jal         0x6000085C
    // 0x60002898: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_96;
    // 0x60002898: nop

    after_96:
    // 0x6000289C: bne         $s2, $s6, L_600028F8
    if (ctx->r18 != ctx->r22) {
        // 0x600028A0: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_600028F8;
    }
    // 0x600028A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600028A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600028A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600028AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600028B0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x600028B4: jal         0x60000238
    // 0x600028B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_menu_file_238(rdram, ctx);
        goto after_97;
    // 0x600028B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_97:
    // 0x600028BC: jal         0x60000208
    // 0x600028C0: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_98;
    // 0x600028C0: nop

    after_98:
    // 0x600028C4: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x600028C8: addiu       $s3, $s3, 0x2E10
    ctx->r19 = ADD32(ctx->r19, 0X2E10);
    // 0x600028CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600028D0: addiu       $s0, $zero, 0x33
    ctx->r16 = ADD32(0, 0X33);
L_600028D4:
    // 0x600028D4: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x600028D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600028DC: jal         0x60001C6C
    // 0x600028E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_99;
    // 0x600028E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_99:
    // 0x600028E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600028E8: bne         $s1, $s0, L_600028D4
    if (ctx->r17 != ctx->r16) {
        // 0x600028EC: addiu       $s3, $s3, 0x14
        ctx->r19 = ADD32(ctx->r19, 0X14);
            goto L_600028D4;
    }
    // 0x600028EC: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x600028F0: b           L_60001EA8
    // 0x600028F4: nop

        goto L_60001EA8;
    // 0x600028F4: nop

L_600028F8:
    // 0x600028F8: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x600028FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60002900: jal         0x60001C6C
    // 0x60002904: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_100;
    // 0x60002904: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_100:
    // 0x60002908: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000290C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x60002910: jal         0x60001C6C
    // 0x60002914: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_101;
    // 0x60002914: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_101:
    // 0x60002918: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000291C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x60002920: jal         0x60001C6C
    // 0x60002924: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_102;
    // 0x60002924: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_102:
    // 0x60002928: lw          $a0, 0x2DC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2DC);
    // 0x6000292C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60002930: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002934: jal         0x60000574
    // 0x60002938: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_103;
    // 0x60002938: nop

    after_103:
    // 0x6000293C: lw          $a0, 0x2F0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2F0);
    // 0x60002940: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60002944: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002948: jal         0x60000574
    // 0x6000294C: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_104;
    // 0x6000294C: nop

    after_104:
L_60002950:
    // 0x60002950: jal         0x60000B14
    // 0x60002954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_file_B14(rdram, ctx);
        goto after_105;
    // 0x60002954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_105:
    // 0x60002958: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x6000295C: bne         $t7, $zero, L_60002A14
    if (ctx->r15 != 0) {
        // 0x60002960: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60002A14;
    }
    // 0x60002960: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60002964: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x60002968: beq         $t8, $zero, L_60002978
    if (ctx->r24 == 0) {
        // 0x6000296C: andi        $t9, $v1, 0x100
        ctx->r25 = ctx->r3 & 0X100;
            goto L_60002978;
    }
    // 0x6000296C: andi        $t9, $v1, 0x100
    ctx->r25 = ctx->r3 & 0X100;
    // 0x60002970: b           L_60002A14
    // 0x60002974: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
        goto L_60002A14;
    // 0x60002974: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
L_60002978:
    // 0x60002978: beq         $t9, $zero, L_60002998
    if (ctx->r25 == 0) {
        // 0x6000297C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_60002998;
    }
    // 0x6000297C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x60002980: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002984: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x60002988: bne         $at, $zero, L_600029B8
    if (ctx->r1 != 0) {
        // 0x6000298C: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_600029B8;
    }
    // 0x6000298C: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x60002990: b           L_600029B4
    // 0x60002994: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_600029B4;
    // 0x60002994: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_60002998:
    // 0x60002998: andi        $t0, $v1, 0x200
    ctx->r8 = ctx->r3 & 0X200;
    // 0x6000299C: beq         $t0, $zero, L_600029B8
    if (ctx->r8 == 0) {
        // 0x600029A0: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_600029B8;
    }
    // 0x600029A0: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x600029A4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x600029A8: bgez        $s0, L_600029B8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x600029AC: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_600029B8;
    }
    // 0x600029AC: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x600029B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600029B4:
    // 0x600029B4: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
L_600029B8:
    // 0x600029B8: addu        $t1, $t1, $s0
    ctx->r9 = ADD32(ctx->r9, ctx->r16);
    // 0x600029BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x600029C0: beq         $v0, $s0, L_600029F0
    if (ctx->r2 == ctx->r16) {
        // 0x600029C4: addu        $s1, $s4, $t1
        ctx->r17 = ADD32(ctx->r20, ctx->r9);
            goto L_600029F0;
    }
    // 0x600029C4: addu        $s1, $s4, $t1
    ctx->r17 = ADD32(ctx->r20, ctx->r9);
    // 0x600029C8: multu       $v0, $fp
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600029CC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x600029D0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x600029D4: mflo        $t2
    ctx->r10 = lo;
    // 0x600029D8: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x600029DC: lw          $a0, 0x2DC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X2DC);
    // 0x600029E0: jal         0x60000574
    // 0x600029E4: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_106;
    // 0x600029E4: nop

    after_106:
    // 0x600029E8: jal         0x60000244
    // 0x600029EC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_file_244(rdram, ctx);
        goto after_107;
    // 0x600029EC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_107:
L_600029F0:
    // 0x600029F0: lw          $a0, 0x2DC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2DC);
    // 0x600029F4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x600029F8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x600029FC: jal         0x60000574
    // 0x60002A00: nop

    ovl_menu_file_574(rdram, ctx);
        goto after_108;
    // 0x60002A00: nop

    after_108:
    // 0x60002A04: jal         0x6000085C
    // 0x60002A08: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_109;
    // 0x60002A08: nop

    after_109:
    // 0x60002A0C: b           L_60002950
    // 0x60002A10: nop

        goto L_60002950;
    // 0x60002A10: nop

L_60002A14:
    // 0x60002A14: jal         0x6000085C
    // 0x60002A18: nop

    ovl_menu_file_85C(rdram, ctx);
        goto after_110;
    // 0x60002A18: nop

    after_110:
    // 0x60002A1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002A20: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x60002A24: jal         0x60001C6C
    // 0x60002A28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_111;
    // 0x60002A28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_111:
    // 0x60002A2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002A30: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x60002A34: jal         0x60001C6C
    // 0x60002A38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_112;
    // 0x60002A38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_112:
    // 0x60002A3C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002A40: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x60002A44: jal         0x60001C6C
    // 0x60002A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_113;
    // 0x60002A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_113:
    // 0x60002A4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002A50: bne         $s0, $at, L_60002AFC
    if (ctx->r16 != ctx->r1) {
        // 0x60002A54: addiu       $a0, $zero, 0x25
        ctx->r4 = ADD32(0, 0X25);
            goto L_60002AFC;
    }
    // 0x60002A54: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x60002A58: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60002A5C: jal         0x60000244
    // 0x60002A60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_menu_file_244(rdram, ctx);
        goto after_114;
    // 0x60002A60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_114:
    // 0x60002A64: jal         0x60000B68
    // 0x60002A68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_menu_file_B68(rdram, ctx);
        goto after_115;
    // 0x60002A68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_115:
    // 0x60002A6C: beq         $v0, $s6, L_60002AE4
    if (ctx->r2 == ctx->r22) {
        // 0x60002A70: nop
    
            goto L_60002AE4;
    }
    // 0x60002A70: nop

    // 0x60002A74: jal         0x60000B50
    // 0x60002A78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_file_B50(rdram, ctx);
        goto after_116;
    // 0x60002A78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_116:
    // 0x60002A7C: jal         0x60000B44
    // 0x60002A80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_file_B44(rdram, ctx);
        goto after_117;
    // 0x60002A80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_117:
    // 0x60002A84: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x60002A88: jal         0x60000B68
    // 0x60002A8C: nop

    ovl_menu_file_B68(rdram, ctx);
        goto after_118;
    // 0x60002A8C: nop

    after_118:
    // 0x60002A90: beq         $v0, $s6, L_60002AE4
    if (ctx->r2 == ctx->r22) {
        // 0x60002A94: nop
    
            goto L_60002AE4;
    }
    // 0x60002A94: nop

    // 0x60002A98: jal         0x60000B38
    // 0x60002A9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_file_B38(rdram, ctx);
        goto after_119;
    // 0x60002A9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_119:
    // 0x60002AA0: jal         0x60000B5C
    // 0x60002AA4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_file_B5C(rdram, ctx);
        goto after_120;
    // 0x60002AA4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_120:
    // 0x60002AA8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x60002AAC: jal         0x60000B8C
    // 0x60002AB0: nop

    ovl_menu_file_B8C(rdram, ctx);
        goto after_121;
    // 0x60002AB0: nop

    after_121:
    // 0x60002AB4: jal         0x60000B5C
    // 0x60002AB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_file_B5C(rdram, ctx);
        goto after_122;
    // 0x60002AB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_122:
    // 0x60002ABC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002AC0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x60002AC4: jal         0x60001C6C
    // 0x60002AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_123;
    // 0x60002AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_123:
    // 0x60002ACC: jal         0x60000850
    // 0x60002AD0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_file_850(rdram, ctx);
        goto after_124;
    // 0x60002AD0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_124:
    // 0x60002AD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002AD8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x60002ADC: jal         0x60001C6C
    // 0x60002AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_125;
    // 0x60002AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_125:
L_60002AE4:
    // 0x60002AE4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002AE8: lw          $a0, 0x3364($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3364);
    // 0x60002AEC: jal         0x60000550
    // 0x60002AF0: nop

    ovl_menu_file_550(rdram, ctx);
        goto after_126;
    // 0x60002AF0: nop

    after_126:
    // 0x60002AF4: b           L_60002B14
    // 0x60002AF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60002B14;
    // 0x60002AF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002AFC:
    // 0x60002AFC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x60002B00: jal         0x60000244
    // 0x60002B04: sw          $t4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r12;
    ovl_menu_file_244(rdram, ctx);
        goto after_127;
    // 0x60002B04: sw          $t4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r12;
    after_127:
    // 0x60002B08: b           L_600026D8
    // 0x60002B0C: nop

        goto L_600026D8;
    // 0x60002B0C: nop

L_60002B10:
    // 0x60002B10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002B14:
    // 0x60002B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002B18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002B1C: jal         0x60000238
    // 0x60002B20: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_file_238(rdram, ctx);
        goto after_128;
    // 0x60002B20: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_128:
    // 0x60002B24: jal         0x60000208
    // 0x60002B28: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_129;
    // 0x60002B28: nop

    after_129:
    // 0x60002B2C: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60002B30: addiu       $s3, $s3, 0x2E10
    ctx->r19 = ADD32(ctx->r19, 0X2E10);
    // 0x60002B34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002B38: addiu       $s0, $zero, 0x33
    ctx->r16 = ADD32(0, 0X33);
L_60002B3C:
    // 0x60002B3C: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x60002B40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002B44: jal         0x60001C6C
    // 0x60002B48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_menu_file_1C6C(rdram, ctx);
        goto after_130;
    // 0x60002B48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_130:
    // 0x60002B4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002B50: bne         $s1, $s0, L_60002B3C
    if (ctx->r17 != ctx->r16) {
        // 0x60002B54: addiu       $s3, $s3, 0x14
        ctx->r19 = ADD32(ctx->r19, 0X14);
            goto L_60002B3C;
    }
    // 0x60002B54: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x60002B58: b           L_60001EA8
    // 0x60002B5C: nop

        goto L_60001EA8;
    // 0x60002B5C: nop

L_60002B60:
    // 0x60002B60: beq         $s2, $s6, L_60002C68
    if (ctx->r18 == ctx->r22) {
        // 0x60002B64: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60002C68;
    }
    // 0x60002B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002B68: jal         0x60000268
    // 0x60002B6C: nop

    ovl_menu_file_268(rdram, ctx);
        goto after_131;
    // 0x60002B6C: nop

    after_131:
    // 0x60002B70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002B78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002B7C: jal         0x60000238
    // 0x60002B80: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_file_238(rdram, ctx);
        goto after_132;
    // 0x60002B80: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_132:
    // 0x60002B84: jal         0x60000208
    // 0x60002B88: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_133;
    // 0x60002B88: nop

    after_133:
    // 0x60002B8C: srav        $t5, $s5, $s2
    ctx->r13 = S32(SIGNED(ctx->r21) >> (ctx->r18 & 31));
    // 0x60002B90: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x60002B94: bne         $t6, $zero, L_60002C58
    if (ctx->r14 != 0) {
        // 0x60002B98: nop
    
            goto L_60002C58;
    }
    // 0x60002B98: nop

    // 0x60002B9C: jal         0x60000B8C
    // 0x60002BA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_menu_file_B8C(rdram, ctx);
        goto after_134;
    // 0x60002BA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_134:
    // 0x60002BA4: jal         0x60000B5C
    // 0x60002BA8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_file_B5C(rdram, ctx);
        goto after_135;
    // 0x60002BA8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_135:
    // 0x60002BAC: bne         $v0, $zero, L_60002BC4
    if (ctx->r2 != 0) {
        // 0x60002BB0: nop
    
            goto L_60002BC4;
    }
    // 0x60002BB0: nop

    // 0x60002BB4: jal         0x60000B5C
    // 0x60002BB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_file_B5C(rdram, ctx);
        goto after_136;
    // 0x60002BB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_136:
    // 0x60002BBC: beq         $v0, $zero, L_60002C50
    if (ctx->r2 == 0) {
        // 0x60002BC0: nop
    
            goto L_60002C50;
    }
    // 0x60002BC0: nop

L_60002BC4:
    // 0x60002BC4: jal         0x60000118
    // 0x60002BC8: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_file_118(rdram, ctx);
        goto after_137;
    // 0x60002BC8: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_137:
    // 0x60002BCC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60002BD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002BD4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x60002BD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60002BDC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60002BE0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x60002BE4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x60002BE8: jal         0x600006B8
    // 0x60002BEC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    ovl_menu_file_6B8(rdram, ctx);
        goto after_138;
    // 0x60002BEC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_138:
    // 0x60002BF0: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x60002BF4: jal         0x60000550
    // 0x60002BF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_menu_file_550(rdram, ctx);
        goto after_139;
    // 0x60002BF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_139:
    // 0x60002BFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002C00: jal         0x60001BD4
    // 0x60002C04: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    ovl_menu_file_1BD4(rdram, ctx);
        goto after_140;
    // 0x60002C04: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_140:
    // 0x60002C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002C10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C14: jal         0x60000220
    // 0x60002C18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_file_220(rdram, ctx);
        goto after_141;
    // 0x60002C18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_141:
    // 0x60002C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002C20: jal         0x60000640
    // 0x60002C24: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_file_640(rdram, ctx);
        goto after_142;
    // 0x60002C24: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_142:
    // 0x60002C28: jal         0x60000244
    // 0x60002C2C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_file_244(rdram, ctx);
        goto after_143;
    // 0x60002C2C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_143:
    // 0x60002C30: jal         0x60000850
    // 0x60002C34: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    ovl_menu_file_850(rdram, ctx);
        goto after_144;
    // 0x60002C34: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    after_144:
    // 0x60002C38: jal         0x600006AC
    // 0x60002C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_file_6AC(rdram, ctx);
        goto after_145;
    // 0x60002C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_145:
    // 0x60002C40: jal         0x60000124
    // 0x60002C44: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_file_124(rdram, ctx);
        goto after_146;
    // 0x60002C44: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_146:
    // 0x60002C48: b           L_60002CA4
    // 0x60002C4C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_60002CA4;
    // 0x60002C4C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_60002C50:
    // 0x60002C50: b           L_60002C80
    // 0x60002C54: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
        goto L_60002C80;
    // 0x60002C54: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_60002C58:
    // 0x60002C58: jal         0x60000B68
    // 0x60002C5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_menu_file_B68(rdram, ctx);
        goto after_147;
    // 0x60002C5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_147:
    // 0x60002C60: b           L_60002C84
    // 0x60002C64: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
        goto L_60002C84;
    // 0x60002C64: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
L_60002C68:
    // 0x60002C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C70: jal         0x60000238
    // 0x60002C74: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_file_238(rdram, ctx);
        goto after_148;
    // 0x60002C74: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_148:
    // 0x60002C78: jal         0x60000208
    // 0x60002C7C: nop

    ovl_menu_file_208(rdram, ctx);
        goto after_149;
    // 0x60002C7C: nop

    after_149:
L_60002C80:
    // 0x60002C80: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
L_60002C84:
    // 0x60002C84: jal         0x60000550
    // 0x60002C88: nop

    ovl_menu_file_550(rdram, ctx);
        goto after_150;
    // 0x60002C88: nop

    after_150:
    // 0x60002C8C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002C90: jal         0x60001BD4
    // 0x60002C94: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    ovl_menu_file_1BD4(rdram, ctx);
        goto after_151;
    // 0x60002C94: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_151:
    // 0x60002C98: b           L_60002CA4
    // 0x60002C9C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_60002CA4;
    // 0x60002C9C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_60002CA0:
    // 0x60002CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002CA4:
    // 0x60002CA4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x60002CA8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002CAC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002CB0: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002CB4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002CB8: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002CBC: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002CC0: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002CC4: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002CC8: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002CCC: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002CD0: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60002CD4: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60002CD8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x60002CDC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x60002CE0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x60002CE4: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x60002CE8: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x60002CEC: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x60002CF0: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x60002CF4: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x60002CF8: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x60002CFC: jr          $ra
    // 0x60002D00: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x60002D00: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void ovl_menu_card_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x1D9C
    ctx->r2 = ADD32(ctx->r2, 0X1D9C);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x1D9C
    ctx->r2 = ADD32(ctx->r2, 0X1D9C);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_menu_card_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_card_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
