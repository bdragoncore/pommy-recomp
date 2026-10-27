#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_flame_5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005A8: jr          $t1
    // 0x420005AC: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005AC: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
;}
RECOMP_FUNC void ovl_blast_flame_5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005B4: jr          $t1
    // 0x420005B8: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005B8: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
;}
RECOMP_FUNC void ovl_blast_flame_5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005C0: jr          $t1
    // 0x420005C4: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005C4: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
;}
RECOMP_FUNC void ovl_blast_flame_5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005CC: jr          $t1
    // 0x420005D0: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005D0: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
;}
RECOMP_FUNC void ovl_blast_flame_5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005D8: jr          $t1
    // 0x420005DC: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005DC: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
;}
RECOMP_FUNC void ovl_blast_flame_5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005E4: jr          $t1
    // 0x420005E8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005E8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
;}
RECOMP_FUNC void ovl_blast_flame_5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005F0: jr          $t1
    // 0x420005F4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420005F4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
;}
RECOMP_FUNC void ovl_blast_flame_5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420005F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420005FC: jr          $t1
    // 0x42000600: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000600: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
;}
RECOMP_FUNC void ovl_blast_flame_604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000604: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000608: jr          $t1
    // 0x4200060C: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200060C: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
;}
RECOMP_FUNC void ovl_blast_flame_610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000610: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000614: jr          $t1
    // 0x42000618: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000618: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
;}
RECOMP_FUNC void ovl_blast_flame_61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200061C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000620: jr          $t1
    // 0x42000624: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000624: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
;}
RECOMP_FUNC void ovl_blast_flame_628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000628: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200062C: jr          $t1
    // 0x42000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
;}
RECOMP_FUNC void ovl_blast_flame_634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000634: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000638: jr          $t1
    // 0x4200063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
;}
RECOMP_FUNC void ovl_blast_flame_640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000640: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000644: jr          $t1
    // 0x42000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
;}
RECOMP_FUNC void ovl_blast_flame_64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200064C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000650: jr          $t1
    // 0x42000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
;}
RECOMP_FUNC void ovl_blast_flame_658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000658: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200065C: jr          $t1
    // 0x42000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
;}
RECOMP_FUNC void ovl_blast_flame_664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000664: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000668: jr          $t1
    // 0x4200066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
;}
RECOMP_FUNC void ovl_blast_flame_670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000670: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000674: jr          $t1
    // 0x42000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
;}
RECOMP_FUNC void ovl_blast_flame_67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200067C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000680: jr          $t1
    // 0x42000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
;}
RECOMP_FUNC void ovl_blast_flame_688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000688: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200068C: jr          $t1
    // 0x42000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
;}
RECOMP_FUNC void ovl_blast_flame_694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000694: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000698: jr          $t1
    // 0x4200069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
;}
RECOMP_FUNC void ovl_blast_flame_6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006A4: jr          $t1
    // 0x420006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
;}
RECOMP_FUNC void ovl_blast_flame_6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006B0: jr          $t1
    // 0x420006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
;}
RECOMP_FUNC void ovl_blast_flame_6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006BC: jr          $t1
    // 0x420006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
;}
RECOMP_FUNC void ovl_blast_flame_6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006C8: jr          $t1
    // 0x420006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
;}
RECOMP_FUNC void ovl_blast_flame_6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006D4: jr          $t1
    // 0x420006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
;}
RECOMP_FUNC void ovl_blast_flame_6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006E0: jr          $t1
    // 0x420006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
;}
RECOMP_FUNC void ovl_blast_flame_6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006EC: jr          $t1
    // 0x420006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
;}
RECOMP_FUNC void ovl_blast_flame_6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420006F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420006F8: jr          $t1
    // 0x420006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
;}
RECOMP_FUNC void ovl_blast_flame_700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000700: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000704: jr          $t1
    // 0x42000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
;}
RECOMP_FUNC void ovl_blast_flame_70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200070C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000710: jr          $t1
    // 0x42000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
;}
RECOMP_FUNC void ovl_blast_flame_718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000718: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200071C: jr          $t1
    // 0x42000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
;}
RECOMP_FUNC void ovl_blast_flame_724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000724: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000728: jr          $t1
    // 0x4200072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
;}
RECOMP_FUNC void ovl_blast_flame_730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000730: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000734: jr          $t1
    // 0x42000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
;}
RECOMP_FUNC void ovl_blast_flame_73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200073C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000740: jr          $t1
    // 0x42000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
;}
RECOMP_FUNC void ovl_blast_flame_748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000748: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200074C: jr          $t1
    // 0x42000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
;}
RECOMP_FUNC void ovl_blast_flame_754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000754: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000758: jr          $t1
    // 0x4200075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
;}
RECOMP_FUNC void ovl_blast_flame_760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000760: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000764: jr          $t1
    // 0x42000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
;}
RECOMP_FUNC void ovl_blast_flame_76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200076C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000770: jr          $t1
    // 0x42000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
;}
RECOMP_FUNC void ovl_blast_flame_778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000778: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200077C: jr          $t1
    // 0x42000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
;}
RECOMP_FUNC void ovl_blast_flame_784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000784: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000788: jr          $t1
    // 0x4200078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
;}
RECOMP_FUNC void ovl_blast_flame_790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000790: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000794: jr          $t1
    // 0x42000798: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000798: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
;}
RECOMP_FUNC void ovl_blast_flame_79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200079C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007A0: jr          $t1
    // 0x420007A4: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007A4: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
;}
RECOMP_FUNC void ovl_blast_flame_7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007AC: jr          $t1
    // 0x420007B0: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007B0: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
;}
RECOMP_FUNC void ovl_blast_flame_7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007B8: jr          $t1
    // 0x420007BC: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007BC: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
;}
RECOMP_FUNC void ovl_blast_flame_7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007C4: jr          $t1
    // 0x420007C8: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007C8: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
;}
RECOMP_FUNC void ovl_blast_flame_7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007D0: jr          $t1
    // 0x420007D4: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007D4: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
;}
RECOMP_FUNC void ovl_blast_flame_7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007DC: jr          $t1
    // 0x420007E0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007E0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
;}
RECOMP_FUNC void ovl_blast_flame_7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007E8: jr          $t1
    // 0x420007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007EC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
;}
RECOMP_FUNC void ovl_blast_flame_7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420007F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420007F4: jr          $t1
    // 0x420007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420007F8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
;}
