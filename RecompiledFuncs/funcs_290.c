#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_card_4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004DC: jr          $t1
    // 0x600004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004E0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
;}
RECOMP_FUNC void ovl_menu_card_4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004E8: jr          $t1
    // 0x600004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004EC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
;}
RECOMP_FUNC void ovl_menu_card_4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600004F4: jr          $t1
    // 0x600004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600004F8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
;}
RECOMP_FUNC void ovl_menu_card_4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600004FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000500: jr          $t1
    // 0x60000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000504: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
;}
RECOMP_FUNC void ovl_menu_card_508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000508: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000050C: jr          $t1
    // 0x60000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000510: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
;}
RECOMP_FUNC void ovl_menu_card_514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000514: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000518: jr          $t1
    // 0x6000051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000051C: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
;}
RECOMP_FUNC void ovl_menu_card_520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000520: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000524: jr          $t1
    // 0x60000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000528: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
;}
RECOMP_FUNC void ovl_menu_card_52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000052C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000530: jr          $t1
    // 0x60000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000534: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
;}
RECOMP_FUNC void ovl_menu_card_538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000538: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000053C: jr          $t1
    // 0x60000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000540: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
;}
RECOMP_FUNC void ovl_menu_card_544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000544: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000548: jr          $t1
    // 0x6000054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000054C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
;}
RECOMP_FUNC void ovl_menu_card_550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000550: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000554: jr          $t1
    // 0x60000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000558: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
;}
RECOMP_FUNC void ovl_menu_card_55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000055C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000560: jr          $t1
    // 0x60000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000564: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
;}
RECOMP_FUNC void ovl_menu_card_568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000568: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000056C: jr          $t1
    // 0x60000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000570: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
;}
RECOMP_FUNC void ovl_menu_card_574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000574: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000578: jr          $t1
    // 0x6000057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000057C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
;}
RECOMP_FUNC void ovl_menu_card_580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000580: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000584: jr          $t1
    // 0x60000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000588: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
;}
RECOMP_FUNC void ovl_menu_card_58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000058C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000590: jr          $t1
    // 0x60000594: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000594: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
;}
RECOMP_FUNC void ovl_menu_card_598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000598: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000059C: jr          $t1
    // 0x600005A0: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005A0: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
;}
RECOMP_FUNC void ovl_menu_card_5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005A8: jr          $t1
    // 0x600005AC: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005AC: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
;}
RECOMP_FUNC void ovl_menu_card_5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005B4: jr          $t1
    // 0x600005B8: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005B8: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
;}
RECOMP_FUNC void ovl_menu_card_5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005C0: jr          $t1
    // 0x600005C4: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005C4: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
;}
RECOMP_FUNC void ovl_menu_card_5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005CC: jr          $t1
    // 0x600005D0: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005D0: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
;}
RECOMP_FUNC void ovl_menu_card_5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005D8: jr          $t1
    // 0x600005DC: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005DC: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
;}
RECOMP_FUNC void ovl_menu_card_5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005E4: jr          $t1
    // 0x600005E8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005E8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
;}
RECOMP_FUNC void ovl_menu_card_5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005F0: jr          $t1
    // 0x600005F4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600005F4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
;}
RECOMP_FUNC void ovl_menu_card_5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600005F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600005FC: jr          $t1
    // 0x60000600: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000600: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
;}
RECOMP_FUNC void ovl_menu_card_604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000604: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000608: jr          $t1
    // 0x6000060C: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000060C: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
;}
RECOMP_FUNC void ovl_menu_card_610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000610: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000614: jr          $t1
    // 0x60000618: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000618: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
;}
RECOMP_FUNC void ovl_menu_card_61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000061C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000620: jr          $t1
    // 0x60000624: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000624: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
;}
RECOMP_FUNC void ovl_menu_card_628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000628: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000062C: jr          $t1
    // 0x60000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000630: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
;}
RECOMP_FUNC void ovl_menu_card_634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000634: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000638: jr          $t1
    // 0x6000063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000063C: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
;}
RECOMP_FUNC void ovl_menu_card_640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000640: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000644: jr          $t1
    // 0x60000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000648: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
;}
RECOMP_FUNC void ovl_menu_card_64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000064C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000650: jr          $t1
    // 0x60000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000654: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
;}
RECOMP_FUNC void ovl_menu_card_658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000658: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000065C: jr          $t1
    // 0x60000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000660: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
;}
RECOMP_FUNC void ovl_menu_card_664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000664: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000668: jr          $t1
    // 0x6000066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000066C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
;}
RECOMP_FUNC void ovl_menu_card_670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000670: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000674: jr          $t1
    // 0x60000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000678: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
;}
RECOMP_FUNC void ovl_menu_card_67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000067C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000680: jr          $t1
    // 0x60000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000684: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
;}
RECOMP_FUNC void ovl_menu_card_688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000688: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000068C: jr          $t1
    // 0x60000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000690: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
;}
RECOMP_FUNC void ovl_menu_card_694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000694: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000698: jr          $t1
    // 0x6000069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000069C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
;}
RECOMP_FUNC void ovl_menu_card_6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006A4: jr          $t1
    // 0x600006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006A8: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
;}
RECOMP_FUNC void ovl_menu_card_6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006B0: jr          $t1
    // 0x600006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006B4: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
;}
RECOMP_FUNC void ovl_menu_card_6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006BC: jr          $t1
    // 0x600006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006C0: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
;}
RECOMP_FUNC void ovl_menu_card_6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006C8: jr          $t1
    // 0x600006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006CC: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
;}
RECOMP_FUNC void ovl_menu_card_6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006D4: jr          $t1
    // 0x600006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006D8: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
;}
RECOMP_FUNC void ovl_menu_card_6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006E0: jr          $t1
    // 0x600006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006E4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
;}
RECOMP_FUNC void ovl_menu_card_6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006EC: jr          $t1
    // 0x600006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006F0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
;}
RECOMP_FUNC void ovl_menu_card_6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600006F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600006F8: jr          $t1
    // 0x600006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600006FC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
;}
RECOMP_FUNC void ovl_menu_card_700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000700: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000704: jr          $t1
    // 0x60000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000708: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
;}
RECOMP_FUNC void ovl_menu_card_70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000070C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000710: jr          $t1
    // 0x60000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000714: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
;}
RECOMP_FUNC void ovl_menu_card_718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000718: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000071C: jr          $t1
    // 0x60000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000720: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
;}
RECOMP_FUNC void ovl_menu_card_724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000724: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000728: jr          $t1
    // 0x6000072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000072C: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
;}
