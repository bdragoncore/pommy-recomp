#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400001C4: jr          $t1
    // 0x400001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_actor_main_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400001D0: jr          $t1
    // 0x400001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_actor_main_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400001DC: jr          $t1
    // 0x400001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_actor_main_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400001E8: jr          $t1
    // 0x400001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_actor_main_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400001F4: jr          $t1
    // 0x400001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_actor_main_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000200: jr          $t1
    // 0x40000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_actor_main_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000020C: jr          $t1
    // 0x40000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_actor_main_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000218: jr          $t1
    // 0x4000021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_actor_main_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000224: jr          $t1
    // 0x40000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_actor_main_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000230: jr          $t1
    // 0x40000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_actor_main_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000023C: jr          $t1
    // 0x40000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_actor_main_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000248: jr          $t1
    // 0x4000024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
RECOMP_FUNC void ovl_actor_main_250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000250: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000254: jr          $t1
    // 0x40000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
;}
RECOMP_FUNC void ovl_actor_main_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000260: jr          $t1
    // 0x40000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_actor_main_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000026C: jr          $t1
    // 0x40000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_actor_main_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000278: jr          $t1
    // 0x4000027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_actor_main_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000284: jr          $t1
    // 0x40000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_actor_main_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000290: jr          $t1
    // 0x40000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_actor_main_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000029C: jr          $t1
    // 0x400002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_actor_main_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002A8: jr          $t1
    // 0x400002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_actor_main_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002B4: jr          $t1
    // 0x400002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_actor_main_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002C0: jr          $t1
    // 0x400002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_actor_main_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002CC: jr          $t1
    // 0x400002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_actor_main_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002D8: jr          $t1
    // 0x400002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
RECOMP_FUNC void ovl_actor_main_2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002E4: jr          $t1
    // 0x400002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
;}
RECOMP_FUNC void ovl_actor_main_2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002F0: jr          $t1
    // 0x400002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
;}
RECOMP_FUNC void ovl_actor_main_2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400002F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400002FC: jr          $t1
    // 0x40000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
;}
RECOMP_FUNC void ovl_actor_main_304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000304: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000308: jr          $t1
    // 0x4000030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
;}
RECOMP_FUNC void ovl_actor_main_310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000310: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000314: jr          $t1
    // 0x40000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
;}
RECOMP_FUNC void ovl_actor_main_31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000031C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000320: jr          $t1
    // 0x40000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
;}
RECOMP_FUNC void ovl_actor_main_328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000328: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000032C: jr          $t1
    // 0x40000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
;}
RECOMP_FUNC void ovl_actor_main_334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000334: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000338: jr          $t1
    // 0x4000033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
;}
RECOMP_FUNC void ovl_actor_main_340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000340: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000344: jr          $t1
    // 0x40000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
;}
RECOMP_FUNC void ovl_actor_main_34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000034C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000350: jr          $t1
    // 0x40000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
;}
RECOMP_FUNC void ovl_actor_main_358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000358: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000035C: jr          $t1
    // 0x40000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
;}
RECOMP_FUNC void ovl_actor_main_364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000364: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000368: jr          $t1
    // 0x4000036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
;}
RECOMP_FUNC void ovl_actor_main_370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000370: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000374: jr          $t1
    // 0x40000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
;}
RECOMP_FUNC void ovl_actor_main_37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000037C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000380: jr          $t1
    // 0x40000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
;}
RECOMP_FUNC void ovl_actor_main_388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000388: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4000038C: jr          $t1
    // 0x40000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000390: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
;}
RECOMP_FUNC void ovl_actor_main_394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000394: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000398: jr          $t1
    // 0x4000039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4000039C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
;}
RECOMP_FUNC void ovl_actor_main_3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003A4: jr          $t1
    // 0x400003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003A8: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
;}
RECOMP_FUNC void ovl_actor_main_3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003B0: jr          $t1
    // 0x400003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003B4: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
;}
RECOMP_FUNC void ovl_actor_main_3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003BC: jr          $t1
    // 0x400003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003C0: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
;}
RECOMP_FUNC void ovl_actor_main_3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003C8: jr          $t1
    // 0x400003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003CC: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
;}
RECOMP_FUNC void ovl_actor_main_3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003D4: jr          $t1
    // 0x400003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003D8: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
;}
RECOMP_FUNC void ovl_actor_main_3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003E0: jr          $t1
    // 0x400003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003E4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
;}
RECOMP_FUNC void ovl_actor_main_3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003EC: jr          $t1
    // 0x400003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003F0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
;}
RECOMP_FUNC void ovl_actor_main_3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400003F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x400003F8: jr          $t1
    // 0x400003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x400003FC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
;}
RECOMP_FUNC void ovl_actor_main_400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40000400: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000404: jr          $t1
    // 0x40000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000408: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
;}
RECOMP_FUNC void ovl_actor_main_40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000040C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x40000410: jr          $t1
    // 0x40000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x40000414: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
;}
