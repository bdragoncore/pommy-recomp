#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500008C: jr          $t1
    // 0x45000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_mobj_main_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000098: jr          $t1
    // 0x4500009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_mobj_main_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000A4: jr          $t1
    // 0x450000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_mobj_main_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000B0: jr          $t1
    // 0x450000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_mobj_main_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000BC: jr          $t1
    // 0x450000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_mobj_main_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000C8: jr          $t1
    // 0x450000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_mobj_main_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000D4: jr          $t1
    // 0x450000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_mobj_main_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000E0: jr          $t1
    // 0x450000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_mobj_main_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000EC: jr          $t1
    // 0x450000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_mobj_main_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450000F8: jr          $t1
    // 0x450000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_mobj_main_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000104: jr          $t1
    // 0x45000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_mobj_main_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000110: jr          $t1
    // 0x45000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_mobj_main_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500011C: jr          $t1
    // 0x45000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_mobj_main_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000128: jr          $t1
    // 0x4500012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_mobj_main_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000134: jr          $t1
    // 0x45000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_mobj_main_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000140: jr          $t1
    // 0x45000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_mobj_main_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500014C: jr          $t1
    // 0x45000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_mobj_main_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000158: jr          $t1
    // 0x4500015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_mobj_main_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000164: jr          $t1
    // 0x45000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_mobj_main_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000170: jr          $t1
    // 0x45000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_mobj_main_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500017C: jr          $t1
    // 0x45000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_mobj_main_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000188: jr          $t1
    // 0x4500018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_mobj_main_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000194: jr          $t1
    // 0x45000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_mobj_main_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001A0: jr          $t1
    // 0x450001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_mobj_main_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001AC: jr          $t1
    // 0x450001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_mobj_main_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001B8: jr          $t1
    // 0x450001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_mobj_main_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001C4: jr          $t1
    // 0x450001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_mobj_main_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001D0: jr          $t1
    // 0x450001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_mobj_main_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001DC: jr          $t1
    // 0x450001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_mobj_main_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001E8: jr          $t1
    // 0x450001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_mobj_main_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450001F4: jr          $t1
    // 0x450001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_mobj_main_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000200: jr          $t1
    // 0x45000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_mobj_main_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500020C: jr          $t1
    // 0x45000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_mobj_main_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000218: jr          $t1
    // 0x4500021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_mobj_main_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000224: jr          $t1
    // 0x45000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_mobj_main_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000230: jr          $t1
    // 0x45000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_mobj_main_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500023C: jr          $t1
    // 0x45000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_mobj_main_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000248: jr          $t1
    // 0x4500024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
RECOMP_FUNC void ovl_mobj_main_250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000250: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000254: jr          $t1
    // 0x45000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
;}
RECOMP_FUNC void ovl_mobj_main_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000260: jr          $t1
    // 0x45000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_mobj_main_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500026C: jr          $t1
    // 0x45000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_mobj_main_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000278: jr          $t1
    // 0x4500027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_mobj_main_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000284: jr          $t1
    // 0x45000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_mobj_main_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000290: jr          $t1
    // 0x45000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_mobj_main_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500029C: jr          $t1
    // 0x450002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_mobj_main_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450002A8: jr          $t1
    // 0x450002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_mobj_main_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450002B4: jr          $t1
    // 0x450002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_mobj_main_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450002C0: jr          $t1
    // 0x450002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_mobj_main_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450002CC: jr          $t1
    // 0x450002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_mobj_main_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x450002D8: jr          $t1
    // 0x450002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x450002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
