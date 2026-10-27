#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world1_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000B0: jr          $t1
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_enemy_world1_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000BC: jr          $t1
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_enemy_world1_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000C8: jr          $t1
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_enemy_world1_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000D4: jr          $t1
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_enemy_world1_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000E0: jr          $t1
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_enemy_world1_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000EC: jr          $t1
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_enemy_world1_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000F8: jr          $t1
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_enemy_world1_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000104: jr          $t1
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_enemy_world1_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000110: jr          $t1
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_enemy_world1_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300011C: jr          $t1
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_enemy_world1_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000128: jr          $t1
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_enemy_world1_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000134: jr          $t1
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_enemy_world1_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000140: jr          $t1
    // 0x43000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_enemy_world1_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300014C: jr          $t1
    // 0x43000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_enemy_world1_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000158: jr          $t1
    // 0x4300015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_enemy_world1_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000164: jr          $t1
    // 0x43000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_enemy_world1_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000170: jr          $t1
    // 0x43000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_enemy_world1_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300017C: jr          $t1
    // 0x43000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_enemy_world1_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000188: jr          $t1
    // 0x4300018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_enemy_world1_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000194: jr          $t1
    // 0x43000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_enemy_world1_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001A0: jr          $t1
    // 0x430001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_enemy_world1_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001AC: jr          $t1
    // 0x430001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_enemy_world1_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001B8: jr          $t1
    // 0x430001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_enemy_world1_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001C4: jr          $t1
    // 0x430001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_enemy_world1_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001D0: jr          $t1
    // 0x430001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_enemy_world1_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001DC: jr          $t1
    // 0x430001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_enemy_world1_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001E8: jr          $t1
    // 0x430001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_enemy_world1_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001F4: jr          $t1
    // 0x430001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_enemy_world1_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000200: jr          $t1
    // 0x43000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_enemy_world1_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300020C: jr          $t1
    // 0x43000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_enemy_world1_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000218: jr          $t1
    // 0x4300021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_enemy_world1_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000224: jr          $t1
    // 0x43000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_enemy_world1_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000230: jr          $t1
    // 0x43000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_enemy_world1_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300023C: jr          $t1
    // 0x43000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_enemy_world1_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000248: jr          $t1
    // 0x4300024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
RECOMP_FUNC void ovl_enemy_world1_250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000250: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000254: jr          $t1
    // 0x43000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000258: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
;}
RECOMP_FUNC void ovl_enemy_world1_25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300025C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000260: jr          $t1
    // 0x43000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000264: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
;}
RECOMP_FUNC void ovl_enemy_world1_268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000268: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300026C: jr          $t1
    // 0x43000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000270: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
;}
RECOMP_FUNC void ovl_enemy_world1_274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000274: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000278: jr          $t1
    // 0x4300027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300027C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
;}
RECOMP_FUNC void ovl_enemy_world1_280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000280: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000284: jr          $t1
    // 0x43000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000288: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
;}
RECOMP_FUNC void ovl_enemy_world1_28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300028C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000290: jr          $t1
    // 0x43000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000294: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
;}
RECOMP_FUNC void ovl_enemy_world1_298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000298: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300029C: jr          $t1
    // 0x430002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002A0: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
;}
RECOMP_FUNC void ovl_enemy_world1_2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002A8: jr          $t1
    // 0x430002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002AC: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
;}
RECOMP_FUNC void ovl_enemy_world1_2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002B4: jr          $t1
    // 0x430002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002B8: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
;}
RECOMP_FUNC void ovl_enemy_world1_2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002C0: jr          $t1
    // 0x430002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002C4: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
;}
RECOMP_FUNC void ovl_enemy_world1_2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002CC: jr          $t1
    // 0x430002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002D0: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
;}
RECOMP_FUNC void ovl_enemy_world1_2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002D8: jr          $t1
    // 0x430002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002DC: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
;}
RECOMP_FUNC void ovl_enemy_world1_2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002E4: jr          $t1
    // 0x430002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002E8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
;}
RECOMP_FUNC void ovl_enemy_world1_2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002F0: jr          $t1
    // 0x430002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430002F4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
;}
RECOMP_FUNC void ovl_enemy_world1_2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430002F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430002FC: jr          $t1
    // 0x43000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000300: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
;}
