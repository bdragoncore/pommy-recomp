#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_demo_story_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000134: jr          $t1
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_demo_story_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000140: jr          $t1
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_demo_story_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000014C: jr          $t1
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_demo_story_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000158: jr          $t1
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_demo_story_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000164: jr          $t1
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_demo_story_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000170: jr          $t1
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_demo_story_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000017C: jr          $t1
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_demo_story_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000188: jr          $t1
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_demo_story_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000194: jr          $t1
    // 0x60000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_demo_story_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001A0: jr          $t1
    // 0x600001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_demo_story_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001AC: jr          $t1
    // 0x600001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_demo_story_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001B8: jr          $t1
    // 0x600001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_demo_story_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001C4: jr          $t1
    // 0x600001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_demo_story_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001D0: jr          $t1
    // 0x600001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_demo_story_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001DC: jr          $t1
    // 0x600001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_demo_story_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001E8: jr          $t1
    // 0x600001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_demo_story_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001F4: jr          $t1
    // 0x600001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_demo_story_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000200: jr          $t1
    // 0x60000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_demo_story_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000020C: jr          $t1
    // 0x60000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_demo_story_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000218: jr          $t1
    // 0x6000021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_demo_story_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000224: jr          $t1
    // 0x60000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_demo_story_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000230: jr          $t1
    // 0x60000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_demo_story_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000023C: jr          $t1
    // 0x60000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_demo_story_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000248: jr          $t1
    // 0x6000024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
RECOMP_FUNC void ovl_demo_story_250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000250: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000254: jr          $t1
    // 0x60000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
;}
RECOMP_FUNC void ovl_demo_story_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000260: jr          $t1
    // 0x60000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_demo_story_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000026C: jr          $t1
    // 0x60000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_demo_story_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000278: jr          $t1
    // 0x6000027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_demo_story_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000284: jr          $t1
    // 0x60000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_demo_story_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000290: jr          $t1
    // 0x60000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_demo_story_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000029C: jr          $t1
    // 0x600002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_demo_story_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002A8: jr          $t1
    // 0x600002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_demo_story_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002B4: jr          $t1
    // 0x600002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_demo_story_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002C0: jr          $t1
    // 0x600002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_demo_story_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002CC: jr          $t1
    // 0x600002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_demo_story_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002D8: jr          $t1
    // 0x600002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
RECOMP_FUNC void ovl_demo_story_2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002E4: jr          $t1
    // 0x600002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
;}
RECOMP_FUNC void ovl_demo_story_2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002F0: jr          $t1
    // 0x600002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
;}
RECOMP_FUNC void ovl_demo_story_2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600002F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600002FC: jr          $t1
    // 0x60000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
;}
RECOMP_FUNC void ovl_demo_story_304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000304: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000308: jr          $t1
    // 0x6000030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
;}
RECOMP_FUNC void ovl_demo_story_310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000310: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000314: jr          $t1
    // 0x60000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
;}
RECOMP_FUNC void ovl_demo_story_31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000031C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000320: jr          $t1
    // 0x60000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
;}
RECOMP_FUNC void ovl_demo_story_328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000328: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000032C: jr          $t1
    // 0x60000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
;}
RECOMP_FUNC void ovl_demo_story_334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000334: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000338: jr          $t1
    // 0x6000033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000033C: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
;}
RECOMP_FUNC void ovl_demo_story_340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000340: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000344: jr          $t1
    // 0x60000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000348: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
;}
RECOMP_FUNC void ovl_demo_story_34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000034C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000350: jr          $t1
    // 0x60000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000354: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
;}
RECOMP_FUNC void ovl_demo_story_358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000358: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000035C: jr          $t1
    // 0x60000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000360: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
;}
RECOMP_FUNC void ovl_demo_story_364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000364: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000368: jr          $t1
    // 0x6000036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000036C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
;}
RECOMP_FUNC void ovl_demo_story_370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000370: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000374: jr          $t1
    // 0x60000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000378: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
;}
RECOMP_FUNC void ovl_demo_story_37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000037C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000380: jr          $t1
    // 0x60000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000384: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
;}
