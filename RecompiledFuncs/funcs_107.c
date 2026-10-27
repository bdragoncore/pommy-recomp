#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_ice_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000E0: jr          $t1
    // 0x420000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_blast_ice_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000EC: jr          $t1
    // 0x420000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_blast_ice_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000F8: jr          $t1
    // 0x420000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_blast_ice_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000104: jr          $t1
    // 0x42000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_blast_ice_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000110: jr          $t1
    // 0x42000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_blast_ice_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200011C: jr          $t1
    // 0x42000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_blast_ice_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000128: jr          $t1
    // 0x4200012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_blast_ice_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000134: jr          $t1
    // 0x42000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_blast_ice_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000140: jr          $t1
    // 0x42000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_blast_ice_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200014C: jr          $t1
    // 0x42000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_blast_ice_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000158: jr          $t1
    // 0x4200015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_blast_ice_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000164: jr          $t1
    // 0x42000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_blast_ice_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000170: jr          $t1
    // 0x42000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_blast_ice_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200017C: jr          $t1
    // 0x42000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_blast_ice_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000188: jr          $t1
    // 0x4200018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_blast_ice_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000194: jr          $t1
    // 0x42000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_blast_ice_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001A0: jr          $t1
    // 0x420001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_blast_ice_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001AC: jr          $t1
    // 0x420001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_blast_ice_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001B8: jr          $t1
    // 0x420001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_blast_ice_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001C4: jr          $t1
    // 0x420001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_blast_ice_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001D0: jr          $t1
    // 0x420001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_blast_ice_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001DC: jr          $t1
    // 0x420001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_blast_ice_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001E8: jr          $t1
    // 0x420001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_blast_ice_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420001F4: jr          $t1
    // 0x420001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_blast_ice_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000200: jr          $t1
    // 0x42000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_blast_ice_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200020C: jr          $t1
    // 0x42000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_blast_ice_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000218: jr          $t1
    // 0x4200021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_blast_ice_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000224: jr          $t1
    // 0x42000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_blast_ice_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000230: jr          $t1
    // 0x42000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_blast_ice_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200023C: jr          $t1
    // 0x42000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_blast_ice_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000248: jr          $t1
    // 0x4200024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
RECOMP_FUNC void ovl_blast_ice_250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000250: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000254: jr          $t1
    // 0x42000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
;}
RECOMP_FUNC void ovl_blast_ice_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000260: jr          $t1
    // 0x42000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_blast_ice_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200026C: jr          $t1
    // 0x42000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_blast_ice_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000278: jr          $t1
    // 0x4200027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_blast_ice_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000284: jr          $t1
    // 0x42000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_blast_ice_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000290: jr          $t1
    // 0x42000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_blast_ice_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200029C: jr          $t1
    // 0x420002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_blast_ice_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002A8: jr          $t1
    // 0x420002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_blast_ice_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002B4: jr          $t1
    // 0x420002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_blast_ice_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002C0: jr          $t1
    // 0x420002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_blast_ice_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002CC: jr          $t1
    // 0x420002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_blast_ice_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002D8: jr          $t1
    // 0x420002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
RECOMP_FUNC void ovl_blast_ice_2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002E4: jr          $t1
    // 0x420002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
;}
RECOMP_FUNC void ovl_blast_ice_2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002F0: jr          $t1
    // 0x420002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
;}
RECOMP_FUNC void ovl_blast_ice_2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420002F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420002FC: jr          $t1
    // 0x42000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
;}
RECOMP_FUNC void ovl_blast_ice_304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000304: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000308: jr          $t1
    // 0x4200030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200030C: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
;}
RECOMP_FUNC void ovl_blast_ice_310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000310: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000314: jr          $t1
    // 0x42000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000318: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
;}
RECOMP_FUNC void ovl_blast_ice_31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200031C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000320: jr          $t1
    // 0x42000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000324: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
;}
RECOMP_FUNC void ovl_blast_ice_328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000328: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200032C: jr          $t1
    // 0x42000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000330: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
;}
