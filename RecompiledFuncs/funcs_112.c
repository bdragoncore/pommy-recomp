#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_ice_C94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CA0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CAC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CB8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CC4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CD0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CDC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CE8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000CF4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000CF8: jr          $t1
    // 0x42000CFC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000CFC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
;}
RECOMP_FUNC void ovl_blast_ice_D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D04: jr          $t1
    // 0x42000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D08: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
;}
RECOMP_FUNC void ovl_blast_ice_D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D10: jr          $t1
    // 0x42000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D14: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
;}
RECOMP_FUNC void ovl_blast_ice_D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D1C: jr          $t1
    // 0x42000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D20: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
;}
RECOMP_FUNC void ovl_blast_ice_D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D28: jr          $t1
    // 0x42000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D2C: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
;}
RECOMP_FUNC void ovl_blast_ice_D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D34: jr          $t1
    // 0x42000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D38: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
;}
RECOMP_FUNC void ovl_blast_ice_D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D40: jr          $t1
    // 0x42000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D44: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
;}
RECOMP_FUNC void ovl_blast_ice_D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D4C: jr          $t1
    // 0x42000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D50: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
;}
RECOMP_FUNC void ovl_blast_ice_D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D58: jr          $t1
    // 0x42000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D5C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
;}
RECOMP_FUNC void ovl_blast_ice_D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D64: jr          $t1
    // 0x42000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D68: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
;}
RECOMP_FUNC void ovl_blast_ice_D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D70: jr          $t1
    // 0x42000D74: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D74: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
;}
RECOMP_FUNC void ovl_blast_ice_D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D7C: jr          $t1
    // 0x42000D80: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D80: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
;}
RECOMP_FUNC void ovl_blast_ice_D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D88: jr          $t1
    // 0x42000D8C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D8C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
;}
RECOMP_FUNC void ovl_blast_ice_D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000D94: jr          $t1
    // 0x42000D98: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000D98: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
;}
RECOMP_FUNC void ovl_blast_ice_D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000D9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DA0: jr          $t1
    // 0x42000DA4: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DA4: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
;}
RECOMP_FUNC void ovl_blast_ice_DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DAC: jr          $t1
    // 0x42000DB0: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DB0: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
;}
RECOMP_FUNC void ovl_blast_ice_DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DB8: jr          $t1
    // 0x42000DBC: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DBC: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
;}
RECOMP_FUNC void ovl_blast_ice_DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DC4: jr          $t1
    // 0x42000DC8: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DC8: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
;}
RECOMP_FUNC void ovl_blast_ice_DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DCC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DD0: jr          $t1
    // 0x42000DD4: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DD4: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
;}
RECOMP_FUNC void ovl_blast_ice_DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DDC: jr          $t1
    // 0x42000DE0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DE0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
;}
RECOMP_FUNC void ovl_blast_ice_DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DE8: jr          $t1
    // 0x42000DEC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DEC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
;}
RECOMP_FUNC void ovl_blast_ice_DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000DF4: jr          $t1
    // 0x42000DF8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000DF8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
;}
RECOMP_FUNC void ovl_blast_ice_DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000DFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E00: jr          $t1
    // 0x42000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
;}
RECOMP_FUNC void ovl_blast_ice_E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E0C: jr          $t1
    // 0x42000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
;}
RECOMP_FUNC void ovl_blast_ice_E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E18: jr          $t1
    // 0x42000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
;}
RECOMP_FUNC void ovl_blast_ice_E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E24: jr          $t1
    // 0x42000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
;}
RECOMP_FUNC void ovl_blast_ice_E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E30: jr          $t1
    // 0x42000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
;}
RECOMP_FUNC void ovl_blast_ice_E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E3C: jr          $t1
    // 0x42000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
;}
RECOMP_FUNC void ovl_blast_ice_E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E48: jr          $t1
    // 0x42000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
;}
RECOMP_FUNC void ovl_blast_ice_E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E54: jr          $t1
    // 0x42000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
;}
RECOMP_FUNC void ovl_blast_ice_E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E60: jr          $t1
    // 0x42000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
;}
RECOMP_FUNC void ovl_blast_ice_E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E6C: jr          $t1
    // 0x42000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
;}
RECOMP_FUNC void ovl_blast_ice_E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E78: jr          $t1
    // 0x42000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
;}
RECOMP_FUNC void ovl_blast_ice_E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E84: jr          $t1
    // 0x42000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
;}
RECOMP_FUNC void ovl_blast_ice_E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E90: jr          $t1
    // 0x42000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
;}
RECOMP_FUNC void ovl_blast_ice_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000E9C: jr          $t1
    // 0x42000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_blast_ice_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000EA8: jr          $t1
    // 0x42000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_blast_ice_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000EB4: jr          $t1
    // 0x42000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_blast_ice_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000EC0: jr          $t1
    // 0x42000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_blast_ice_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000ECC: jr          $t1
    // 0x42000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_blast_ice_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000ED8: jr          $t1
    // 0x42000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_blast_ice_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000EE4: jr          $t1
    // 0x42000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
