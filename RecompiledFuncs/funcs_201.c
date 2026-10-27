#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world5_538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000538: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300053C: jr          $t1
    // 0x43000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
;}
RECOMP_FUNC void ovl_enemy_world5_544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000544: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000548: jr          $t1
    // 0x4300054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
;}
RECOMP_FUNC void ovl_enemy_world5_550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000550: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000554: jr          $t1
    // 0x43000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
;}
RECOMP_FUNC void ovl_enemy_world5_55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300055C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000560: jr          $t1
    // 0x43000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
;}
RECOMP_FUNC void ovl_enemy_world5_568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000568: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300056C: jr          $t1
    // 0x43000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
;}
RECOMP_FUNC void ovl_enemy_world5_574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000574: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000578: jr          $t1
    // 0x4300057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
;}
RECOMP_FUNC void ovl_enemy_world5_580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000580: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000584: jr          $t1
    // 0x43000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
;}
RECOMP_FUNC void ovl_enemy_world5_58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300058C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000590: jr          $t1
    // 0x43000594: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000594: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
;}
RECOMP_FUNC void ovl_enemy_world5_598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000598: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300059C: jr          $t1
    // 0x430005A0: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005A0: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
;}
RECOMP_FUNC void ovl_enemy_world5_5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005A8: jr          $t1
    // 0x430005AC: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005AC: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
;}
RECOMP_FUNC void ovl_enemy_world5_5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005B4: jr          $t1
    // 0x430005B8: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005B8: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
;}
RECOMP_FUNC void ovl_enemy_world5_5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005C0: jr          $t1
    // 0x430005C4: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005C4: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
;}
RECOMP_FUNC void ovl_enemy_world5_5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005CC: jr          $t1
    // 0x430005D0: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005D0: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
;}
RECOMP_FUNC void ovl_enemy_world5_5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005D8: jr          $t1
    // 0x430005DC: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005DC: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
;}
RECOMP_FUNC void ovl_enemy_world5_5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005E4: jr          $t1
    // 0x430005E8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005E8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
;}
RECOMP_FUNC void ovl_enemy_world5_5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005F0: jr          $t1
    // 0x430005F4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430005F4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
;}
RECOMP_FUNC void ovl_enemy_world5_5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430005F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430005FC: jr          $t1
    // 0x43000600: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000600: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
;}
RECOMP_FUNC void ovl_enemy_world5_604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000604: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000608: jr          $t1
    // 0x4300060C: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300060C: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
;}
RECOMP_FUNC void ovl_enemy_world5_610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000610: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000614: jr          $t1
    // 0x43000618: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000618: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
;}
RECOMP_FUNC void ovl_enemy_world5_61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300061C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000620: jr          $t1
    // 0x43000624: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000624: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
;}
RECOMP_FUNC void ovl_enemy_world5_628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000628: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300062C: jr          $t1
    // 0x43000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
;}
RECOMP_FUNC void ovl_enemy_world5_634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000634: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000638: jr          $t1
    // 0x4300063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
;}
RECOMP_FUNC void ovl_enemy_world5_640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000640: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000644: jr          $t1
    // 0x43000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
;}
RECOMP_FUNC void ovl_enemy_world5_64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300064C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000650: jr          $t1
    // 0x43000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
;}
RECOMP_FUNC void ovl_enemy_world5_658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000658: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300065C: jr          $t1
    // 0x43000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
;}
RECOMP_FUNC void ovl_enemy_world5_664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000664: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000668: jr          $t1
    // 0x4300066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
;}
RECOMP_FUNC void ovl_enemy_world5_670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000670: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000674: jr          $t1
    // 0x43000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
;}
RECOMP_FUNC void ovl_enemy_world5_67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300067C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000680: jr          $t1
    // 0x43000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
;}
RECOMP_FUNC void ovl_enemy_world5_688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000688: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300068C: jr          $t1
    // 0x43000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
;}
RECOMP_FUNC void ovl_enemy_world5_694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000694: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000698: jr          $t1
    // 0x4300069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
;}
RECOMP_FUNC void ovl_enemy_world5_6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006A4: jr          $t1
    // 0x430006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
;}
RECOMP_FUNC void ovl_enemy_world5_6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006B0: jr          $t1
    // 0x430006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
;}
RECOMP_FUNC void ovl_enemy_world5_6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006BC: jr          $t1
    // 0x430006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
;}
RECOMP_FUNC void ovl_enemy_world5_6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006C8: jr          $t1
    // 0x430006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
;}
RECOMP_FUNC void ovl_enemy_world5_6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006D4: jr          $t1
    // 0x430006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
;}
RECOMP_FUNC void ovl_enemy_world5_6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006E0: jr          $t1
    // 0x430006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
;}
RECOMP_FUNC void ovl_enemy_world5_6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006EC: jr          $t1
    // 0x430006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
;}
RECOMP_FUNC void ovl_enemy_world5_6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430006F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430006F8: jr          $t1
    // 0x430006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
;}
RECOMP_FUNC void ovl_enemy_world5_700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000700: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000704: jr          $t1
    // 0x43000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
;}
RECOMP_FUNC void ovl_enemy_world5_70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300070C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000710: jr          $t1
    // 0x43000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
;}
RECOMP_FUNC void ovl_enemy_world5_718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000718: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300071C: jr          $t1
    // 0x43000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
;}
RECOMP_FUNC void ovl_enemy_world5_724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000724: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000728: jr          $t1
    // 0x4300072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
;}
RECOMP_FUNC void ovl_enemy_world5_730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000730: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000734: jr          $t1
    // 0x43000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000738: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
;}
RECOMP_FUNC void ovl_enemy_world5_73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300073C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000740: jr          $t1
    // 0x43000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000744: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
;}
RECOMP_FUNC void ovl_enemy_world5_748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000748: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300074C: jr          $t1
    // 0x43000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000750: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
;}
RECOMP_FUNC void ovl_enemy_world5_754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000754: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000758: jr          $t1
    // 0x4300075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300075C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
;}
RECOMP_FUNC void ovl_enemy_world5_760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000760: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000764: jr          $t1
    // 0x43000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000768: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
;}
RECOMP_FUNC void ovl_enemy_world5_76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300076C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000770: jr          $t1
    // 0x43000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000774: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
;}
RECOMP_FUNC void ovl_enemy_world5_778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000778: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300077C: jr          $t1
    // 0x43000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000780: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
;}
RECOMP_FUNC void ovl_enemy_world5_784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000784: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000788: jr          $t1
    // 0x4300078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300078C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
;}
