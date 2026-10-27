#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800722BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800722BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800722C0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800722C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800722C8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800722CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800722D0: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x800722D4: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x800722D8: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x800722DC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x800722E0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x800722E4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800722E8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800722EC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800722F0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800722F4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800722F8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x800722FC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80072300: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80072304: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80072308: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007230C: jal         0x800720BC
    // 0x80072310: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_800720BC(rdram, ctx);
        goto after_0;
    // 0x80072310: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80072314: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80072318: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007231C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80072320: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80072324: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80072328: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8007232C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80072330: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80072334: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80072338: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8007233C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80072340: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80072344: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80072348: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8007234C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80072350: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80072354: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80072358: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8007235C: jr          $ra
    // 0x80072360: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80072360: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80072364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072364: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80072368: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8007236C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072370: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80072374: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80072378: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8007237C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80072380: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80072384: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80072388: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8007238C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80072390: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80072394: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80072398: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8007239C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800723A0: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x800723A4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800723A8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800723AC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800723B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800723B4: jal         0x800720BC
    // 0x800723B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_800720BC(rdram, ctx);
        goto after_0;
    // 0x800723B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800723BC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800723C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800723C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800723C8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800723CC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800723D0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800723D4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800723D8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800723DC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800723E0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800723E4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800723E8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800723EC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800723F0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800723F4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800723F8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800723FC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80072400: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80072404: jr          $ra
    // 0x80072408: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80072408: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8007240C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007240C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80072410: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80072414: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80072418: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8007241C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80072420: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80072424: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80072428: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8007242C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80072430: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80072434: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80072438: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8007243C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80072440: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80072444: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80072448: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8007244C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80072450: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80072454: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80072458: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007245C: jal         0x800720BC
    // 0x80072460: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_800720BC(rdram, ctx);
        goto after_0;
    // 0x80072460: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80072464: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80072468: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007246C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80072470: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80072474: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80072478: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8007247C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80072480: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80072484: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80072488: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8007248C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80072490: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80072494: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80072498: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8007249C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800724A0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800724A4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x800724A8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x800724AC: jr          $ra
    // 0x800724B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800724B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800724B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800724B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800724B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800724BC: jal         0x80007774
    // 0x800724C0: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800724C0: nop

    after_0:
    // 0x800724C4: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x800724C8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800724CC: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x800724D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800724D4: addiu       $a0, $zero, 0x7B4
    ctx->r4 = ADD32(0, 0X7B4);
    // 0x800724D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800724DC: jal         0x8001D138
    // 0x800724E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800724E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800724E4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800724E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800724EC: jal         0x80019164
    // 0x800724F0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800724F0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x800724F4: addiu       $t7, $s2, 0x1
    ctx->r15 = ADD32(ctx->r18, 0X1);
    // 0x800724F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800724FC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80072500: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80072504: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80072508: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8007250C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80072510: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80072514: jal         0x80019114
    // 0x80072518: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80072518: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8007251C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80072520: jal         0x800191C0
    // 0x80072524: nop

    func_800191C0(rdram, ctx);
        goto after_4;
    // 0x80072524: nop

    after_4:
    // 0x80072528: addiu       $a0, $s2, 0x87
    ctx->r4 = ADD32(ctx->r18, 0X87);
    // 0x8007252C: jal         0x8005D1B4
    // 0x80072530: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_5;
    // 0x80072530: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_5:
    // 0x80072534: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80072538: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x8007253C: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    // 0x80072540: addiu       $s1, $zero, 0x9
    ctx->r17 = ADD32(0, 0X9);
L_80072544:
    // 0x80072544: lw          $t8, 0x24($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X24);
    // 0x80072548: nop

    // 0x8007254C: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80072550: bne         $t9, $zero, L_80072594
    if (ctx->r25 != 0) {
        // 0x80072554: nop
    
            goto L_80072594;
    }
    // 0x80072554: nop

    // 0x80072558: bne         $s0, $s1, L_80072580
    if (ctx->r16 != ctx->r17) {
        // 0x8007255C: nop
    
            goto L_80072580;
    }
    // 0x8007255C: nop

    // 0x80072560: jal         0x8005D128
    // 0x80072564: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005D128(rdram, ctx);
        goto after_6;
    // 0x80072564: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x80072568: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8007256C: jal         0x800191D4
    // 0x80072570: nop

    func_800191D4(rdram, ctx);
        goto after_7;
    // 0x80072570: nop

    after_7:
    // 0x80072574: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80072578: jal         0x8001C468
    // 0x8007257C: addiu       $a1, $zero, 0x7B4
    ctx->r5 = ADD32(0, 0X7B4);
    func_8001C468(rdram, ctx);
        goto after_8;
    // 0x8007257C: addiu       $a1, $zero, 0x7B4
    ctx->r5 = ADD32(0, 0X7B4);
    after_8:
L_80072580:
    // 0x80072580: jal         0x80007AB0
    // 0x80072584: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80072584: nop

    after_9:
    // 0x80072588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007258C: bne         $s0, $s2, L_80072544
    if (ctx->r16 != ctx->r18) {
        // 0x80072590: nop
    
            goto L_80072544;
    }
    // 0x80072590: nop

L_80072594:
    // 0x80072594: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x80072598: jal         0x8005D128
    // 0x8007259C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005D128(rdram, ctx);
        goto after_10;
    // 0x8007259C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x800725A0: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
    // 0x800725A4: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x800725A8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800725AC:
    // 0x800725AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800725B0: jal         0x8001C568
    // 0x800725B4: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x800725B4: nop

    after_11:
    // 0x800725B8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800725BC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800725C0: bne         $at, $zero, L_800725AC
    if (ctx->r1 != 0) {
        // 0x800725C4: nop
    
            goto L_800725AC;
    }
    // 0x800725C4: nop

    // 0x800725C8: jal         0x8005CD50
    // 0x800725CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x800725CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_12:
    // 0x800725D0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800725D4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800725D8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800725DC: nop

    // 0x800725E0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800725E4: jal         0x80007AE0
    // 0x800725E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x800725E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_13:
    // 0x800725EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800725F0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800725F4: jr          $ra
    // 0x800725F8: nop

    return;
    // 0x800725F8: nop

;}
RECOMP_FUNC void func_800725FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800725FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80072600: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80072604: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072608: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007260C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072610: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072618: jal         0x800724B4
    // 0x8007261C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_800724B4(rdram, ctx);
        goto after_0;
    // 0x8007261C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_0:
    // 0x80072620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80072624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072628: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007262C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072630: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072634: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072638: jr          $ra
    // 0x8007263C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007263C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80072640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072640: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80072644: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80072648: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007264C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072650: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072654: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072658: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007265C: jal         0x800724B4
    // 0x80072660: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    func_800724B4(rdram, ctx);
        goto after_0;
    // 0x80072660: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    after_0:
    // 0x80072664: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80072668: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007266C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072670: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072674: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072678: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007267C: jr          $ra
    // 0x80072680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80072680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80072684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072684: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80072688: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007268C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072690: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072694: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072698: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007269C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800726A0: jal         0x800724B4
    // 0x800726A4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    func_800724B4(rdram, ctx);
        goto after_0;
    // 0x800726A4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    after_0:
    // 0x800726A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800726AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800726B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800726B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800726B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800726BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800726C0: jr          $ra
    // 0x800726C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800726C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800726C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800726C8: jr          $ra
    // 0x800726CC: nop

    return;
    // 0x800726CC: nop

;}
RECOMP_FUNC void func_800726D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800726D0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800726D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800726D8: jal         0x80007774
    // 0x800726DC: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800726DC: nop

    after_0:
    // 0x800726E0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800726E4: addiu       $t6, $t6, 0x26F8
    ctx->r14 = ADD32(ctx->r14, 0X26F8);
    // 0x800726E8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800726EC: addiu       $fp, $sp, 0x50
    ctx->r30 = ADD32(ctx->r29, 0X50);
    // 0x800726F0: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x800726F4: sw          $at, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r1;
    // 0x800726F8: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800726FC: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80072700: sw          $t9, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r25;
    // 0x80072704: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80072708: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x8007270C: sw          $at, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r1;
    // 0x80072710: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80072714: addiu       $s5, $s5, 0x26B0
    ctx->r21 = ADD32(ctx->r21, 0X26B0);
    // 0x80072718: sw          $t9, 0xC($fp)
    MEM_W(0XC, ctx->r30) = ctx->r25;
    // 0x8007271C: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x80072720: addiu       $s7, $s7, 0x26A4
    ctx->r23 = ADD32(ctx->r23, 0X26A4);
    // 0x80072724: sw          $at, 0x10($fp)
    MEM_W(0X10, ctx->r30) = ctx->r1;
    // 0x80072728: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8007272C: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x80072730: addiu       $s4, $sp, 0x2C
    ctx->r20 = ADD32(ctx->r29, 0X2C);
L_80072734:
    // 0x80072734: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80072738: nop

    // 0x8007273C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80072740: bne         $t8, $zero, L_80072944
    if (ctx->r24 != 0) {
        // 0x80072744: andi        $t7, $v0, 0x200
        ctx->r15 = ctx->r2 & 0X200;
            goto L_80072944;
    }
    // 0x80072744: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x80072748: beq         $t7, $zero, L_80072770
    if (ctx->r15 == 0) {
        // 0x8007274C: lw          $v0, 0x64($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X64);
            goto L_80072770;
    }
    // 0x8007274C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80072750: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80072754: nop

    // 0x80072758: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x8007275C: beq         $at, $zero, L_80072768
    if (ctx->r1 == 0) {
        // 0x80072760: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80072768;
    }
    // 0x80072760: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80072764: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
L_80072768:
    // 0x80072768: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x8007276C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_80072770:
    // 0x80072770: nop

    // 0x80072774: bne         $v0, $zero, L_800727D8
    if (ctx->r2 != 0) {
        // 0x80072778: andi        $v0, $s2, 0x3
        ctx->r2 = ctx->r18 & 0X3;
            goto L_800727D8;
    }
    // 0x80072778: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x8007277C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80072780: addu        $t9, $s7, $t6
    ctx->r25 = ADD32(ctx->r23, ctx->r14);
    // 0x80072784: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80072788: andi        $t6, $s2, 0x10
    ctx->r14 = ctx->r18 & 0X10;
    // 0x8007278C: sra         $t9, $t6, 4
    ctx->r25 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80072790: multu       $t9, $s6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80072794: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80072798: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8007279C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x800727A0: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800727A4: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800727A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800727AC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800727B0: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x800727B4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800727B8: addu        $t7, $s5, $t8
    ctx->r15 = ADD32(ctx->r21, ctx->r24);
    // 0x800727BC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x800727C0: mflo        $t8
    ctx->r24 = lo;
    // 0x800727C4: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x800727C8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800727CC: jal         0x8005D1B4
    // 0x800727D0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_1;
    // 0x800727D0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x800727D4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
L_800727D8:
    // 0x800727D8: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x800727DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800727E0: bne         $v0, $at, L_80072820
    if (ctx->r2 != ctx->r1) {
        // 0x800727E4: andi        $t9, $s2, 0x3
        ctx->r25 = ctx->r18 & 0X3;
            goto L_80072820;
    }
    // 0x800727E4: andi        $t9, $s2, 0x3
    ctx->r25 = ctx->r18 & 0X3;
    // 0x800727E8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800727EC: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x800727F0: andi        $t6, $s2, 0x10
    ctx->r14 = ctx->r18 & 0X10;
    // 0x800727F4: sra         $t9, $t6, 4
    ctx->r25 = S32(SIGNED(ctx->r14) >> 4);
    // 0x800727F8: multu       $t9, $s6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800727FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80072800: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x80072804: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80072808: mflo        $t7
    ctx->r15 = lo;
    // 0x8007280C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80072810: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x80072814: jal         0x8005D1B4
    // 0x80072818: nop

    func_8005D1B4(rdram, ctx);
        goto after_2;
    // 0x80072818: nop

    after_2:
    // 0x8007281C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
L_80072820:
    // 0x80072820: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80072824: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80072828: bne         $v0, $at, L_8007288C
    if (ctx->r2 != ctx->r1) {
        // 0x8007282C: andi        $v0, $s2, 0x3
        ctx->r2 = ctx->r18 & 0X3;
            goto L_8007288C;
    }
    // 0x8007282C: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x80072830: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80072834: addu        $t8, $s7, $t9
    ctx->r24 = ADD32(ctx->r23, ctx->r25);
    // 0x80072838: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8007283C: andi        $t9, $s2, 0x10
    ctx->r25 = ctx->r18 & 0X10;
    // 0x80072840: sra         $t8, $t9, 4
    ctx->r24 = S32(SIGNED(ctx->r25) >> 4);
    // 0x80072844: multu       $t8, $s6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80072848: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8007284C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80072850: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80072854: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80072858: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8007285C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80072860: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80072864: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80072868: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8007286C: addu        $t6, $s5, $t7
    ctx->r14 = ADD32(ctx->r21, ctx->r15);
    // 0x80072870: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80072874: mflo        $t7
    ctx->r15 = lo;
    // 0x80072878: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x8007287C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80072880: jal         0x8005D1B4
    // 0x80072884: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_3;
    // 0x80072884: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x80072888: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
L_8007288C:
    // 0x8007288C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80072890: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80072894: bne         $v0, $at, L_80072924
    if (ctx->r2 != ctx->r1) {
        // 0x80072898: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_80072924;
    }
    // 0x80072898: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8007289C: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x800728A0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800728A4: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800728A8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800728AC: andi        $t7, $s2, 0x10
    ctx->r15 = ctx->r18 & 0X10;
    // 0x800728B0: sra         $t9, $t7, 4
    ctx->r25 = S32(SIGNED(ctx->r15) >> 4);
    // 0x800728B4: addu        $t6, $s5, $t8
    ctx->r14 = ADD32(ctx->r21, ctx->r24);
    // 0x800728B8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800728BC: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x800728C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800728C4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800728C8: addu        $s3, $s7, $t7
    ctx->r19 = ADD32(ctx->r23, ctx->r15);
    // 0x800728CC: jal         0x8005D128
    // 0x800728D0: addu        $s1, $t6, $t8
    ctx->r17 = ADD32(ctx->r14, ctx->r24);
    func_8005D128(rdram, ctx);
        goto after_4;
    // 0x800728D0: addu        $s1, $t6, $t8
    ctx->r17 = ADD32(ctx->r14, ctx->r24);
    after_4:
    // 0x800728D4: jal         0x8005D128
    // 0x800728D8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    func_8005D128(rdram, ctx);
        goto after_5;
    // 0x800728D8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_5:
    // 0x800728DC: jal         0x8005D128
    // 0x800728E0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_8005D128(rdram, ctx);
        goto after_6;
    // 0x800728E0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_6:
    // 0x800728E4: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800728E8: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800728EC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800728F0: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800728F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800728F8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800728FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80072900: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80072904: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80072908: jal         0x8005D1B4
    // 0x8007290C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_7;
    // 0x8007290C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80072910: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80072914: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80072918: jal         0x8005D1B4
    // 0x8007291C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_8;
    // 0x8007291C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_8:
    // 0x80072920: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_80072924:
    // 0x80072924: jal         0x80007AB0
    // 0x80072928: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80072928: nop

    after_9:
    // 0x8007292C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80072930: nop

    // 0x80072934: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80072938: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x8007293C: bne         $at, $zero, L_80072734
    if (ctx->r1 != 0) {
        // 0x80072940: sw          $v0, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r2;
            goto L_80072734;
    }
    // 0x80072940: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
L_80072944:
    // 0x80072944: jal         0x8005CD50
    // 0x80072948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80072948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8007294C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80072950: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80072954: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80072958: nop

    // 0x8007295C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80072960: jal         0x80007AE0
    // 0x80072964: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80072964: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_11:
    // 0x80072968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007296C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80072970: jr          $ra
    // 0x80072974: nop

    return;
    // 0x80072974: nop

;}
RECOMP_FUNC void func_80072978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072978: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007297C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80072980: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072984: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80072988: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8007298C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80072990: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80072994: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072998: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007299C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800729A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800729A4: jal         0x800726D0
    // 0x800729A8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_800726D0(rdram, ctx);
        goto after_0;
    // 0x800729A8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x800729AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800729B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800729B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800729B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800729BC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800729C0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800729C4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800729C8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800729CC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800729D0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800729D4: jr          $ra
    // 0x800729D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800729D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800729DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800729DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800729E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800729E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800729E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800729EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800729F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800729F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800729F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800729FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072A00: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072A04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072A08: jal         0x800726D0
    // 0x80072A0C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_800726D0(rdram, ctx);
        goto after_0;
    // 0x80072A0C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_0:
    // 0x80072A10: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80072A14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072A18: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072A1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072A20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072A24: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072A28: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072A2C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80072A30: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072A34: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80072A38: jr          $ra
    // 0x80072A3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80072A3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80072A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072A40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80072A44: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80072A48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072A4C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80072A50: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80072A54: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80072A58: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80072A5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072A60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072A64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072A68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072A6C: jal         0x800726D0
    // 0x80072A70: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    func_800726D0(rdram, ctx);
        goto after_0;
    // 0x80072A70: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    after_0:
    // 0x80072A74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80072A78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072A7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072A80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072A84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072A88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072A8C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072A90: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80072A94: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072A98: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80072A9C: jr          $ra
    // 0x80072AA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80072AA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80072AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072AA4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80072AA8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80072AAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072AB0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80072AB4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80072AB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80072ABC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80072AC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072AC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072AC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072ACC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072AD0: jal         0x800726D0
    // 0x80072AD4: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
    func_800726D0(rdram, ctx);
        goto after_0;
    // 0x80072AD4: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
    after_0:
    // 0x80072AD8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80072ADC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072AE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072AE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072AE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072AEC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072AF0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072AF4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80072AF8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072AFC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80072B00: jr          $ra
    // 0x80072B04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80072B04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80072B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072B08: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80072B0C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80072B10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072B14: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80072B18: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80072B1C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80072B20: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80072B24: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072B28: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072B2C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072B30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072B34: jal         0x800726D0
    // 0x80072B38: addiu       $s2, $zero, 0x11
    ctx->r18 = ADD32(0, 0X11);
    func_800726D0(rdram, ctx);
        goto after_0;
    // 0x80072B38: addiu       $s2, $zero, 0x11
    ctx->r18 = ADD32(0, 0X11);
    after_0:
    // 0x80072B3C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80072B40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072B44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072B48: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072B4C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072B50: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072B54: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072B58: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80072B5C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072B60: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80072B64: jr          $ra
    // 0x80072B68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80072B68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80072B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072B6C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80072B70: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80072B74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072B78: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80072B7C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80072B80: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80072B84: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80072B88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072B8C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072B90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072B94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072B98: jal         0x800726D0
    // 0x80072B9C: addiu       $s2, $zero, 0x12
    ctx->r18 = ADD32(0, 0X12);
    func_800726D0(rdram, ctx);
        goto after_0;
    // 0x80072B9C: addiu       $s2, $zero, 0x12
    ctx->r18 = ADD32(0, 0X12);
    after_0:
    // 0x80072BA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80072BA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072BA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072BAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072BB0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072BB4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072BB8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072BBC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80072BC0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072BC4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80072BC8: jr          $ra
    // 0x80072BCC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80072BCC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80072BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072BD0: jr          $ra
    // 0x80072BD4: nop

    return;
    // 0x80072BD4: nop

;}
RECOMP_FUNC void func_80072BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072BD8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80072BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072BE0: jal         0x80007774
    // 0x80072BE4: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80072BE4: nop

    after_0:
    // 0x80072BE8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80072BEC: addiu       $t6, $t6, 0x2748
    ctx->r14 = ADD32(ctx->r14, 0X2748);
    // 0x80072BF0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80072BF4: addiu       $s6, $sp, 0x4C
    ctx->r22 = ADD32(ctx->r29, 0X4C);
    // 0x80072BF8: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80072BFC: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x80072C00: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80072C04: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80072C08: sw          $t9, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r25;
    // 0x80072C0C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80072C10: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80072C14: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    // 0x80072C18: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80072C1C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80072C20: sw          $t9, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r25;
    // 0x80072C24: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80072C28: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x80072C2C: addiu       $s3, $s3, 0x270C
    ctx->r19 = ADD32(ctx->r19, 0X270C);
    // 0x80072C30: addiu       $s4, $s4, 0x2718
    ctx->r20 = ADD32(ctx->r20, 0X2718);
    // 0x80072C34: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x80072C38: addiu       $s7, $zero, 0x8
    ctx->r23 = ADD32(0, 0X8);
    // 0x80072C3C: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
L_80072C40:
    // 0x80072C40: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80072C44: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x80072C48: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80072C4C: bne         $t7, $zero, L_80072DAC
    if (ctx->r15 != 0) {
        // 0x80072C50: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80072DAC;
    }
    // 0x80072C50: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80072C54: bne         $v0, $zero, L_80072CA0
    if (ctx->r2 != 0) {
        // 0x80072C58: nop
    
            goto L_80072CA0;
    }
    // 0x80072C58: nop

    // 0x80072C5C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80072C60: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x80072C64: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80072C68: addu        $t9, $s3, $t6
    ctx->r25 = ADD32(ctx->r19, ctx->r14);
    // 0x80072C6C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80072C70: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80072C74: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80072C78: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x80072C7C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80072C80: addu        $t7, $s4, $t8
    ctx->r15 = ADD32(ctx->r20, ctx->r24);
    // 0x80072C84: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80072C88: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80072C8C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80072C90: jal         0x8005D1B4
    // 0x80072C94: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_1;
    // 0x80072C94: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80072C98: b           L_80072D8C
    // 0x80072C9C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
        goto L_80072D8C;
    // 0x80072C9C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_80072CA0:
    // 0x80072CA0: bne         $s7, $v0, L_80072D04
    if (ctx->r23 != ctx->r2) {
        // 0x80072CA4: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80072D04;
    }
    // 0x80072CA4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80072CA8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80072CAC: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x80072CB0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80072CB4: addu        $t9, $s3, $t6
    ctx->r25 = ADD32(ctx->r19, ctx->r14);
    // 0x80072CB8: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80072CBC: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80072CC0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80072CC4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80072CC8: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80072CCC: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x80072CD0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80072CD4: addu        $s0, $s4, $t8
    ctx->r16 = ADD32(ctx->r20, ctx->r24);
    // 0x80072CD8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80072CDC: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80072CE0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80072CE4: jal         0x8005D1B4
    // 0x80072CE8: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_2;
    // 0x80072CE8: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80072CEC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80072CF0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80072CF4: jal         0x8005D1B4
    // 0x80072CF8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_3;
    // 0x80072CF8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x80072CFC: b           L_80072D8C
    // 0x80072D00: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
        goto L_80072D8C;
    // 0x80072D00: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
L_80072D04:
    // 0x80072D04: bne         $fp, $v0, L_80072D20
    if (ctx->r30 != ctx->r2) {
        // 0x80072D08: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_80072D20;
    }
    // 0x80072D08: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x80072D0C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80072D10: jal         0x8005D128
    // 0x80072D14: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005D128(rdram, ctx);
        goto after_4;
    // 0x80072D14: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_4:
    // 0x80072D18: b           L_80072D8C
    // 0x80072D1C: nop

        goto L_80072D8C;
    // 0x80072D1C: nop

L_80072D20:
    // 0x80072D20: bne         $v0, $at, L_80072D70
    if (ctx->r2 != ctx->r1) {
        // 0x80072D24: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80072D70;
    }
    // 0x80072D24: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80072D28: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80072D2C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80072D30: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x80072D34: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80072D38: addu        $t6, $s3, $t7
    ctx->r14 = ADD32(ctx->r19, ctx->r15);
    // 0x80072D3C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80072D40: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80072D44: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80072D48: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x80072D4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80072D50: addu        $t8, $s4, $t9
    ctx->r24 = ADD32(ctx->r20, ctx->r25);
    // 0x80072D54: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80072D58: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80072D5C: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x80072D60: jal         0x8005D1B4
    // 0x80072D64: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_5;
    // 0x80072D64: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80072D68: b           L_80072D8C
    // 0x80072D6C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
        goto L_80072D8C;
    // 0x80072D6C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
L_80072D70:
    // 0x80072D70: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x80072D74: bne         $v0, $at, L_80072D8C
    if (ctx->r2 != ctx->r1) {
        // 0x80072D78: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_80072D8C;
    }
    // 0x80072D78: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80072D7C: jal         0x8005D128
    // 0x80072D80: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_8005D128(rdram, ctx);
        goto after_6;
    // 0x80072D80: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_6:
    // 0x80072D84: jal         0x8005D128
    // 0x80072D88: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    func_8005D128(rdram, ctx);
        goto after_7;
    // 0x80072D88: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_7:
L_80072D8C:
    // 0x80072D8C: jal         0x80007AB0
    // 0x80072D90: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x80072D90: nop

    after_8:
    // 0x80072D94: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x80072D98: nop

    // 0x80072D9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80072DA0: slti        $at, $v0, 0x37
    ctx->r1 = SIGNED(ctx->r2) < 0X37 ? 1 : 0;
    // 0x80072DA4: bne         $at, $zero, L_80072C40
    if (ctx->r1 != 0) {
        // 0x80072DA8: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_80072C40;
    }
    // 0x80072DA8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
L_80072DAC:
    // 0x80072DAC: jal         0x8005CD50
    // 0x80072DB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80072DB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80072DB4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80072DB8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80072DBC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80072DC0: nop

    // 0x80072DC4: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80072DC8: jal         0x80007AE0
    // 0x80072DCC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x80072DCC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_10:
    // 0x80072DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072DD4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80072DD8: jr          $ra
    // 0x80072DDC: nop

    return;
    // 0x80072DDC: nop

;}
RECOMP_FUNC void func_80072DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072DE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80072DE4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80072DE8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80072DEC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80072DF0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80072DF4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80072DF8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80072DFC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80072E00: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80072E04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80072E08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80072E0C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80072E10: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80072E14: jal         0x80072BD8
    // 0x80072E18: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_80072BD8(rdram, ctx);
        goto after_0;
    // 0x80072E18: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_0:
    // 0x80072E1C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80072E20: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80072E24: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80072E28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80072E2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80072E30: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80072E34: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80072E38: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80072E3C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80072E40: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80072E44: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80072E48: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80072E4C: jr          $ra
    // 0x80072E50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80072E50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80072E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072E54: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80072E58: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80072E5C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80072E60: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80072E64: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80072E68: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80072E6C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80072E70: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80072E74: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80072E78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80072E7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80072E80: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80072E84: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80072E88: jal         0x80072BD8
    // 0x80072E8C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    func_80072BD8(rdram, ctx);
        goto after_0;
    // 0x80072E8C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    after_0:
    // 0x80072E90: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80072E94: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80072E98: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80072E9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80072EA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80072EA4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80072EA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80072EAC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80072EB0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80072EB4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80072EB8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80072EBC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80072EC0: jr          $ra
    // 0x80072EC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80072EC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80072EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072EC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80072ECC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80072ED0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80072ED4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80072ED8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80072EDC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80072EE0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80072EE4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80072EE8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80072EEC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80072EF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80072EF4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80072EF8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80072EFC: jal         0x80072BD8
    // 0x80072F00: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    func_80072BD8(rdram, ctx);
        goto after_0;
    // 0x80072F00: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_0:
    // 0x80072F04: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80072F08: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80072F0C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80072F10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80072F14: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80072F18: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80072F1C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80072F20: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80072F24: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80072F28: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80072F2C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80072F30: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80072F34: jr          $ra
    // 0x80072F38: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80072F38: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80072F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072F3C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80072F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072F44: jal         0x80007774
    // 0x80072F48: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80072F48: nop

    after_0:
    // 0x80072F4C: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x80072F50: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80072F54: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x80072F58: addiu       $a0, $zero, 0x798
    ctx->r4 = ADD32(0, 0X798);
    // 0x80072F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072F60: jal         0x8001D138
    // 0x80072F64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80072F64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80072F68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80072F6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80072F70: jal         0x80019164
    // 0x80072F74: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80072F74: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_2:
    // 0x80072F78: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    // 0x80072F7C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80072F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80072F84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80072F88: jal         0x80018658
    // 0x80072F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_3;
    // 0x80072F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80072F90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80072F94: jal         0x80018604
    // 0x80072F98: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_4;
    // 0x80072F98: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_4:
    // 0x80072F9C: addiu       $a0, $s7, 0x39
    ctx->r4 = ADD32(ctx->r23, 0X39);
    // 0x80072FA0: jal         0x8005D1B4
    // 0x80072FA4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_5;
    // 0x80072FA4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_5:
    // 0x80072FA8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80072FAC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80072FB0: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x80072FB4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80072FB8: addiu       $s6, $sp, 0x54
    ctx->r22 = ADD32(ctx->r29, 0X54);
    // 0x80072FBC: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x80072FC0: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
L_80072FC4:
    // 0x80072FC4: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
    // 0x80072FC8: nop

    // 0x80072FCC: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80072FD0: bne         $t8, $zero, L_80073090
    if (ctx->r24 != 0) {
        // 0x80072FD4: nop
    
            goto L_80073090;
    }
    // 0x80072FD4: nop

    // 0x80072FD8: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x80072FDC: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x80072FE0: addiu       $t9, $s7, 0x2
    ctx->r25 = ADD32(ctx->r23, 0X2);
    // 0x80072FE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80072FE8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80072FEC: mul.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80072FF0: jal         0x80028C2C
    // 0x80072FF4: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x80072FF4: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    after_6:
    // 0x80072FF8: mul.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80072FFC: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80073000: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80073004: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80073008: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x8007300C: jal         0x80019114
    // 0x80073010: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x80073010: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x80073014: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80073018: bne         $at, $zero, L_80073078
    if (ctx->r1 != 0) {
        // 0x8007301C: subu        $v0, $s5, $s0
        ctx->r2 = SUB32(ctx->r21, ctx->r16);
            goto L_80073078;
    }
    // 0x8007301C: subu        $v0, $s5, $s0
    ctx->r2 = SUB32(ctx->r21, ctx->r16);
    // 0x80073020: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x80073024: bne         $s4, $v0, L_8007303C
    if (ctx->r20 != ctx->r2) {
        // 0x80073028: sll         $s2, $v0, 7
        ctx->r18 = S32(ctx->r2 << 7);
            goto L_8007303C;
    }
    // 0x80073028: sll         $s2, $v0, 7
    ctx->r18 = S32(ctx->r2 << 7);
    // 0x8007302C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80073030: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80073034: jal         0x80018658
    // 0x80073038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_8;
    // 0x80073038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_8007303C:
    // 0x8007303C: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x80073040: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80073044: bne         $s4, $zero, L_80073050
    if (ctx->r20 != 0) {
        // 0x80073048: nop
    
            goto L_80073050;
    }
    // 0x80073048: nop

    // 0x8007304C: break       7
    do_break(2147954764);
L_80073050:
    // 0x80073050: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073054: bne         $s4, $at, L_80073068
    if (ctx->r20 != ctx->r1) {
        // 0x80073058: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80073068;
    }
    // 0x80073058: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007305C: bne         $s2, $at, L_80073068
    if (ctx->r18 != ctx->r1) {
        // 0x80073060: nop
    
            goto L_80073068;
    }
    // 0x80073060: nop

    // 0x80073064: break       6
    do_break(2147954788);
L_80073068:
    // 0x80073068: mflo        $a1
    ctx->r5 = lo;
    // 0x8007306C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80073070: jal         0x80018604
    // 0x80073074: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_9;
    // 0x80073074: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_9:
L_80073078:
    // 0x80073078: jal         0x800072B0
    // 0x8007307C: nop

    func_800072B0(rdram, ctx);
        goto after_10;
    // 0x8007307C: nop

    after_10:
    // 0x80073080: jal         0x80007AB0
    // 0x80073084: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x80073084: nop

    after_11:
    // 0x80073088: bne         $s3, $s5, L_80072FC4
    if (ctx->r19 != ctx->r21) {
        // 0x8007308C: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_80072FC4;
    }
    // 0x8007308C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_80073090:
    // 0x80073090: jal         0x8005D128
    // 0x80073094: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    func_8005D128(rdram, ctx);
        goto after_12;
    // 0x80073094: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    after_12:
    // 0x80073098: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x8007309C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x800730A0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800730A4:
    // 0x800730A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800730A8: jal         0x8001C568
    // 0x800730AC: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x800730AC: nop

    after_13:
    // 0x800730B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800730B4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800730B8: bne         $at, $zero, L_800730A4
    if (ctx->r1 != 0) {
        // 0x800730BC: nop
    
            goto L_800730A4;
    }
    // 0x800730BC: nop

    // 0x800730C0: jal         0x8005CD50
    // 0x800730C4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x800730C4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_14:
    // 0x800730C8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800730CC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800730D0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800730D4: nop

    // 0x800730D8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800730DC: jal         0x80007AE0
    // 0x800730E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x800730E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_15:
    // 0x800730E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800730E8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x800730EC: jr          $ra
    // 0x800730F0: nop

    return;
    // 0x800730F0: nop

;}
RECOMP_FUNC void func_800730F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800730F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800730F8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800730FC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80073100: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80073104: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80073108: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8007310C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80073110: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80073114: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80073118: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8007311C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80073120: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073124: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073128: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007312C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80073130: jal         0x80072F3C
    // 0x80073134: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_80072F3C(rdram, ctx);
        goto after_0;
    // 0x80073134: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_0:
    // 0x80073138: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8007313C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073140: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80073144: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073148: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007314C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80073150: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80073154: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80073158: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8007315C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80073160: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80073164: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80073168: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8007316C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80073170: jr          $ra
    // 0x80073174: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80073174: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80073178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073178: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8007317C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80073180: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80073184: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80073188: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8007318C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80073190: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80073194: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80073198: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8007319C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800731A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800731A4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800731A8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800731AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800731B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800731B4: jal         0x80072F3C
    // 0x800731B8: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    func_80072F3C(rdram, ctx);
        goto after_0;
    // 0x800731B8: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    after_0:
    // 0x800731BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800731C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800731C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800731C8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800731CC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800731D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800731D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800731D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800731DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800731E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800731E4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800731E8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800731EC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800731F0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800731F4: jr          $ra
    // 0x800731F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800731F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800731FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800731FC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80073200: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80073204: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80073208: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8007320C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80073210: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80073214: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80073218: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8007321C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80073220: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80073224: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80073228: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007322C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073230: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073234: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80073238: jal         0x80072F3C
    // 0x8007323C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    func_80072F3C(rdram, ctx);
        goto after_0;
    // 0x8007323C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    after_0:
    // 0x80073240: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80073244: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073248: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007324C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073250: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80073254: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80073258: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8007325C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80073260: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80073264: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80073268: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8007326C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80073270: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80073274: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80073278: jr          $ra
    // 0x8007327C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8007327C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80073280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073280: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80073284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073288: jal         0x80007774
    // 0x8007328C: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8007328C: nop

    after_0:
    // 0x80073290: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80073294: addiu       $t7, $t7, 0x2758
    ctx->r15 = ADD32(ctx->r15, 0X2758);
    // 0x80073298: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8007329C: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x800732A0: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x800732A4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800732A8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x800732AC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x800732B0: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x800732B4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x800732B8: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x800732BC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800732C0: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x800732C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800732C8: addiu       $t6, $t6, 0x2764
    ctx->r14 = ADD32(ctx->r14, 0X2764);
    // 0x800732CC: addu        $s1, $t8, $t6
    ctx->r17 = ADD32(ctx->r24, ctx->r14);
    // 0x800732D0: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    // 0x800732D4: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
L_800732D8:
    // 0x800732D8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800732DC: jal         0x8005D1B4
    // 0x800732E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_1;
    // 0x800732E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x800732E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800732E8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800732EC: bne         $s0, $s2, L_800732D8
    if (ctx->r16 != ctx->r18) {
        // 0x800732F0: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_800732D8;
    }
    // 0x800732F0: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x800732F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800732F8: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_800732FC:
    // 0x800732FC: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x80073300: nop

    // 0x80073304: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x80073308: bne         $t9, $zero, L_80073324
    if (ctx->r25 != 0) {
        // 0x8007330C: nop
    
            goto L_80073324;
    }
    // 0x8007330C: nop

    // 0x80073310: jal         0x80007AB0
    // 0x80073314: nop

    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x80073314: nop

    after_2:
    // 0x80073318: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007331C: bne         $s0, $s1, L_800732FC
    if (ctx->r16 != ctx->r17) {
        // 0x80073320: nop
    
            goto L_800732FC;
    }
    // 0x80073320: nop

L_80073324:
    // 0x80073324: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x80073328: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
L_8007332C:
    // 0x8007332C: jal         0x8005D128
    // 0x80073330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005D128(rdram, ctx);
        goto after_3;
    // 0x80073330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80073334: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80073338: bne         $s0, $s1, L_8007332C
    if (ctx->r16 != ctx->r17) {
        // 0x8007333C: nop
    
            goto L_8007332C;
    }
    // 0x8007333C: nop

    // 0x80073340: jal         0x8005CD50
    // 0x80073344: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_4;
    // 0x80073344: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x80073348: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007334C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80073350: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80073354: nop

    // 0x80073358: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8007335C: jal         0x80007AE0
    // 0x80073360: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_5;
    // 0x80073360: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_5:
    // 0x80073364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073368: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8007336C: jr          $ra
    // 0x80073370: nop

    return;
    // 0x80073370: nop

;}
RECOMP_FUNC void func_80073374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073374: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073378: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007337C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80073380: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80073384: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80073388: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007338C: jal         0x80073280
    // 0x80073390: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80073280(rdram, ctx);
        goto after_0;
    // 0x80073390: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x80073394: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80073398: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007339C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800733A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800733A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800733A8: jr          $ra
    // 0x800733AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800733AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800733B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800733B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800733B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800733B8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800733BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800733C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800733C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800733C8: jal         0x80073280
    // 0x800733CC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_80073280(rdram, ctx);
        goto after_0;
    // 0x800733CC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_0:
    // 0x800733D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800733D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800733D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800733DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800733E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800733E4: jr          $ra
    // 0x800733E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800733E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800733EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800733EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800733F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800733F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800733F8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800733FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80073400: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80073404: jal         0x80073280
    // 0x80073408: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    func_80073280(rdram, ctx);
        goto after_0;
    // 0x80073408: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    after_0:
    // 0x8007340C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80073410: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80073414: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80073418: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8007341C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80073420: jr          $ra
    // 0x80073424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80073424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073428: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x8007342C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073430: jal         0x80007774
    // 0x80073434: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80073434: nop

    after_0:
    // 0x80073438: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x8007343C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80073440: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x80073444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073448: jal         0x8001D138
    // 0x8007344C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8007344C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80073450: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80073454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80073458: jal         0x80019164
    // 0x8007345C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8007345C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x80073460: sw          $s0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r16;
    // 0x80073464: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x80073468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007346C: jal         0x8001D138
    // 0x80073470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80073470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80073474: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80073478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007347C: jal         0x80019164
    // 0x80073480: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80073480: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80073484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073488: addiu       $a1, $zero, 0x7E4
    ctx->r5 = ADD32(0, 0X7E4);
    // 0x8007348C: jal         0x8001C468
    // 0x80073490: sw          $s0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x80073490: sw          $s0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r16;
    after_5:
    // 0x80073494: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x80073498: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8007349C: jal         0x800192E8
    // 0x800734A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x800734A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800734A4: lw          $s0, 0x118($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X118);
    // 0x800734A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800734AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800734B0: jal         0x80018658
    // 0x800734B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x800734B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800734B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800734BC: jal         0x80018604
    // 0x800734C0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x800734C0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_8:
    // 0x800734C4: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x800734C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800734CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800734D0: jal         0x80018658
    // 0x800734D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x800734D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_9:
    // 0x800734D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800734DC: jal         0x80018604
    // 0x800734E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x800734E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_10:
    // 0x800734E4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800734E8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800734EC: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x800734F0: mul.s       $f20, $f30, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f30.fl, ctx->f24.fl);
    // 0x800734F4: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x800734F8: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x800734FC: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x80073500: jal         0x80019114
    // 0x80073504: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x80073504: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x80073508: lw          $a3, 0x11C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X11C);
    // 0x8007350C: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    // 0x80073510: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x80073514: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x80073518: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x8007351C: jal         0x80019114
    // 0x80073520: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x80073520: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_12:
    // 0x80073524: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80073528: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8007352C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80073530: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80073534: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80073538: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8007353C: addiu       $fp, $sp, 0x84
    ctx->r30 = ADD32(ctx->r29, 0X84);
    // 0x80073540: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
L_80073544:
    // 0x80073544: lw          $t6, 0x24($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X24);
    // 0x80073548: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8007354C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80073550: bne         $t7, $zero, L_800736DC
    if (ctx->r15 != 0) {
        // 0x80073554: subu        $s1, $t8, $s2
        ctx->r17 = SUB32(ctx->r24, ctx->r18);
            goto L_800736DC;
    }
    // 0x80073554: subu        $s1, $t8, $s2
    ctx->r17 = SUB32(ctx->r24, ctx->r18);
    // 0x80073558: sll         $s4, $s1, 2
    ctx->r20 = S32(ctx->r17 << 2);
    // 0x8007355C: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    // 0x80073560: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80073564: addu        $s4, $s4, $s1
    ctx->r20 = ADD32(ctx->r20, ctx->r17);
    // 0x80073568: sll         $s6, $s2, 8
    ctx->r22 = S32(ctx->r18 << 8);
    // 0x8007356C: subu        $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    // 0x80073570: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80073574: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x80073578: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    // 0x8007357C: beq         $at, $zero, L_800735F4
    if (ctx->r1 == 0) {
        // 0x80073580: addiu       $s6, $s6, 0x9F6
        ctx->r22 = ADD32(ctx->r22, 0X9F6);
            goto L_800735F4;
    }
    // 0x80073580: addiu       $s6, $s6, 0x9F6
    ctx->r22 = ADD32(ctx->r22, 0X9F6);
    // 0x80073584: addiu       $t9, $s2, 0x1
    ctx->r25 = ADD32(ctx->r18, 0X1);
    // 0x80073588: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8007358C: nop

    // 0x80073590: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80073594: mul.s       $f20, $f6, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80073598: jal         0x80028C2C
    // 0x8007359C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_13;
    // 0x8007359C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_13:
    // 0x800735A0: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x800735A4: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x800735A8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800735AC: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x800735B0: mul.s       $f2, $f10, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x800735B4: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x800735B8: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x800735BC: jal         0x80019114
    // 0x800735C0: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x800735C0: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    after_14:
    // 0x800735C4: jal         0x80028C00
    // 0x800735C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C00(rdram, ctx);
        goto after_15;
    // 0x800735C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_15:
    // 0x800735CC: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x800735D0: lw          $a3, 0x11C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X11C);
    // 0x800735D4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x800735D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800735DC: add.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x800735E0: mul.s       $f2, $f6, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800735E4: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x800735E8: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x800735EC: jal         0x80019114
    // 0x800735F0: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x800735F0: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    after_16:
L_800735F4:
    // 0x800735F4: lw          $s0, 0x118($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X118);
    // 0x800735F8: bne         $s5, $s1, L_80073610
    if (ctx->r21 != ctx->r17) {
        // 0x800735FC: addiu       $s3, $s2, 0x1
        ctx->r19 = ADD32(ctx->r18, 0X1);
            goto L_80073610;
    }
    // 0x800735FC: addiu       $s3, $s2, 0x1
    ctx->r19 = ADD32(ctx->r18, 0X1);
    // 0x80073600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80073608: jal         0x80018658
    // 0x8007360C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_17;
    // 0x8007360C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
L_80073610:
    // 0x80073610: div         $zero, $s4, $s5
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r21)));
    // 0x80073614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073618: bne         $s5, $zero, L_80073624
    if (ctx->r21 != 0) {
        // 0x8007361C: nop
    
            goto L_80073624;
    }
    // 0x8007361C: nop

    // 0x80073620: break       7
    do_break(2147956256);
L_80073624:
    // 0x80073624: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073628: bne         $s5, $at, L_8007363C
    if (ctx->r21 != ctx->r1) {
        // 0x8007362C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007363C;
    }
    // 0x8007362C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80073630: bne         $s4, $at, L_8007363C
    if (ctx->r20 != ctx->r1) {
        // 0x80073634: nop
    
            goto L_8007363C;
    }
    // 0x80073634: nop

    // 0x80073638: break       6
    do_break(2147956280);
L_8007363C:
    // 0x8007363C: mflo        $a1
    ctx->r5 = lo;
    // 0x80073640: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80073644: jal         0x80018604
    // 0x80073648: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_18;
    // 0x80073648: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_18:
    // 0x8007364C: lw          $a3, 0x11C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X11C);
    // 0x80073650: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80073654: bne         $s2, $at, L_8007366C
    if (ctx->r18 != ctx->r1) {
        // 0x80073658: or          $s0, $a3, $zero
        ctx->r16 = ctx->r7 | 0;
            goto L_8007366C;
    }
    // 0x80073658: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8007365C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073660: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80073664: jal         0x80018658
    // 0x80073668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_19;
    // 0x80073668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
L_8007366C:
    // 0x8007366C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80073670: div         $zero, $s6, $at
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r1)));
    // 0x80073674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073678: mflo        $a1
    ctx->r5 = lo;
    // 0x8007367C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80073680: jal         0x80018604
    // 0x80073684: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_20;
    // 0x80073684: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_20:
    // 0x80073688: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007368C: bne         $s2, $at, L_800736CC
    if (ctx->r18 != ctx->r1) {
        // 0x80073690: nop
    
            goto L_800736CC;
    }
    // 0x80073690: nop

    // 0x80073694: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80073698: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8007369C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800736A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800736A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800736A8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800736AC: cvt.w.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    ctx->f8.u32l = CVT_W_S(ctx->f24.fl);
    // 0x800736B0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800736B4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800736B8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800736BC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800736C0: lw          $a0, 0x2784($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2784);
    // 0x800736C4: jal         0x8005D1B4
    // 0x800736C8: nop

    func_8005D1B4(rdram, ctx);
        goto after_21;
    // 0x800736C8: nop

    after_21:
L_800736CC:
    // 0x800736CC: jal         0x80007AB0
    // 0x800736D0: nop

    func_80007AB0(rdram, ctx);
        goto after_22;
    // 0x800736D0: nop

    after_22:
    // 0x800736D4: bne         $s3, $s5, L_80073544
    if (ctx->r19 != ctx->r21) {
        // 0x800736D8: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_80073544;
    }
    // 0x800736D8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_800736DC:
    // 0x800736DC: addiu       $s0, $sp, 0x118
    ctx->r16 = ADD32(ctx->r29, 0X118);
    // 0x800736E0: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
    // 0x800736E4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_800736E8:
    // 0x800736E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800736EC: jal         0x8001C568
    // 0x800736F0: nop

    func_8001C568(rdram, ctx);
        goto after_23;
    // 0x800736F0: nop

    after_23:
    // 0x800736F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800736F8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800736FC: bne         $at, $zero, L_800736E8
    if (ctx->r1 != 0) {
        // 0x80073700: nop
    
            goto L_800736E8;
    }
    // 0x80073700: nop

    // 0x80073704: jal         0x8005CD50
    // 0x80073708: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_24;
    // 0x80073708: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_24:
    // 0x8007370C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80073710: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80073714: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80073718: nop

    // 0x8007371C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80073720: jal         0x80007AE0
    // 0x80073724: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_25;
    // 0x80073724: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_25:
    // 0x80073728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007372C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    // 0x80073730: jr          $ra
    // 0x80073734: nop

    return;
    // 0x80073734: nop

;}
RECOMP_FUNC void func_80073738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073738: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8007373C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80073740: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80073744: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80073748: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8007374C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80073750: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80073754: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80073758: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8007375C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80073760: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80073764: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80073768: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8007376C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80073770: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80073774: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80073778: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8007377C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80073780: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80073784: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80073788: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8007378C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073790: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073794: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073798: jal         0x80073428
    // 0x8007379C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80073428(rdram, ctx);
        goto after_0;
    // 0x8007379C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800737A0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800737A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800737A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800737AC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800737B0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800737B4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800737B8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800737BC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800737C0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800737C4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800737C8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800737CC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800737D0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800737D4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800737D8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800737DC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800737E0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800737E4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800737E8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800737EC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800737F0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800737F4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x800737F8: jr          $ra
    // 0x800737FC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800737FC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80073800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073800: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80073804: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80073808: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007380C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80073810: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80073814: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80073818: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8007381C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80073820: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80073824: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80073828: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8007382C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80073830: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80073834: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80073838: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8007383C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80073840: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80073844: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80073848: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8007384C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80073850: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80073854: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073858: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8007385C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073860: jal         0x80073428
    // 0x80073864: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80073428(rdram, ctx);
        goto after_0;
    // 0x80073864: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80073868: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8007386C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073870: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80073874: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073878: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007387C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80073880: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073884: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80073888: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8007388C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80073890: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80073894: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80073898: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007389C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800738A0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800738A4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800738A8: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800738AC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800738B0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800738B4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800738B8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800738BC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x800738C0: jr          $ra
    // 0x800738C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800738C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800738C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800738C8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800738CC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800738D0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800738D4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x800738D8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800738DC: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x800738E0: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x800738E4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x800738E8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x800738EC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x800738F0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x800738F4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x800738F8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x800738FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80073900: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80073904: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80073908: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8007390C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80073910: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80073914: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80073918: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8007391C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073920: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073924: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073928: jal         0x80073428
    // 0x8007392C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80073428(rdram, ctx);
        goto after_0;
    // 0x8007392C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80073930: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80073934: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073938: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007393C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073940: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80073944: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80073948: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007394C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80073950: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073954: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80073958: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007395C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80073960: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80073964: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80073968: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8007396C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80073970: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80073974: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80073978: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8007397C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80073980: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80073984: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80073988: jr          $ra
    // 0x8007398C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8007398C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80073990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073990: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80073994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073998: jal         0x80007774
    // 0x8007399C: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8007399C: nop

    after_0:
    // 0x800739A0: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x800739A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800739A8: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x800739AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800739B0: jal         0x8001D138
    // 0x800739B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800739B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800739B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800739BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800739C0: jal         0x80019164
    // 0x800739C4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800739C4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x800739C8: sw          $s0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r16;
    // 0x800739CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800739D0: jal         0x8001C468
    // 0x800739D4: addiu       $a1, $zero, 0x7E4
    ctx->r5 = ADD32(0, 0X7E4);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x800739D4: addiu       $a1, $zero, 0x7E4
    ctx->r5 = ADD32(0, 0X7E4);
    after_3:
    // 0x800739D8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x800739DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800739E0: jal         0x800192E8
    // 0x800739E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x800739E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x800739E8: lw          $s0, 0xAC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XAC);
    // 0x800739EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800739F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800739F4: jal         0x80018658
    // 0x800739F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x800739F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x800739FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073A00: jal         0x80018604
    // 0x80073A04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x80073A04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
    // 0x80073A08: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80073A0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073A10: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80073A14: mul.s       $f0, $f4, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80073A18: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80073A1C: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x80073A20: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x80073A24: jal         0x80019114
    // 0x80073A28: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x80073A28: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80073A2C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80073A30: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80073A34: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80073A38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80073A3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80073A40: addiu       $t9, $t9, 0x2794
    ctx->r25 = ADD32(ctx->r25, 0X2794);
    // 0x80073A44: cvt.w.s     $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    ctx->f6.u32l = CVT_W_S(ctx->f26.fl);
    // 0x80073A48: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80073A4C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80073A50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80073A54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80073A58: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80073A5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80073A60: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x80073A64: lw          $a0, -0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, -0XC);
    // 0x80073A68: jal         0x8005D1B4
    // 0x80073A6C: nop

    func_8005D1B4(rdram, ctx);
        goto after_8;
    // 0x80073A6C: nop

    after_8:
    // 0x80073A70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80073A74: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80073A78: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80073A7C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80073A80: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80073A84: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80073A88: addiu       $fp, $zero, 0x14
    ctx->r30 = ADD32(0, 0X14);
    // 0x80073A8C: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x80073A90: addiu       $s6, $sp, 0x54
    ctx->r22 = ADD32(ctx->r29, 0X54);
L_80073A94:
    // 0x80073A94: lw          $t6, 0x24($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X24);
    // 0x80073A98: sll         $s2, $s1, 8
    ctx->r18 = S32(ctx->r17 << 8);
    // 0x80073A9C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80073AA0: bne         $t7, $zero, L_80073B84
    if (ctx->r15 != 0) {
        // 0x80073AA4: subu        $s2, $s2, $s1
        ctx->r18 = SUB32(ctx->r18, ctx->r17);
            goto L_80073B84;
    }
    // 0x80073AA4: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    // 0x80073AA8: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x80073AAC: beq         $at, $zero, L_80073AF4
    if (ctx->r1 == 0) {
        // 0x80073AB0: addiu       $s2, $s2, 0x9F6
        ctx->r18 = ADD32(ctx->r18, 0X9F6);
            goto L_80073AF4;
    }
    // 0x80073AB0: addiu       $s2, $s2, 0x9F6
    ctx->r18 = ADD32(ctx->r18, 0X9F6);
    // 0x80073AB4: addiu       $t8, $s1, 0x1
    ctx->r24 = ADD32(ctx->r17, 0X1);
    // 0x80073AB8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80073ABC: nop

    // 0x80073AC0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80073AC4: mul.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80073AC8: jal         0x80028C00
    // 0x80073ACC: nop

    func_80028C00(rdram, ctx);
        goto after_9;
    // 0x80073ACC: nop

    after_9:
    // 0x80073AD0: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80073AD4: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80073AD8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80073ADC: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x80073AE0: mul.s       $f2, $f6, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80073AE4: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80073AE8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x80073AEC: jal         0x80019114
    // 0x80073AF0: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x80073AF0: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    after_10:
L_80073AF4:
    // 0x80073AF4: lw          $s0, 0xAC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XAC);
    // 0x80073AF8: bne         $s1, $s7, L_80073B10
    if (ctx->r17 != ctx->r23) {
        // 0x80073AFC: addiu       $s3, $s1, 0x1
        ctx->r19 = ADD32(ctx->r17, 0X1);
            goto L_80073B10;
    }
    // 0x80073AFC: addiu       $s3, $s1, 0x1
    ctx->r19 = ADD32(ctx->r17, 0X1);
    // 0x80073B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073B04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80073B08: jal         0x80018658
    // 0x80073B0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_11;
    // 0x80073B0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
L_80073B10:
    // 0x80073B10: div         $zero, $s2, $fp
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r30)));
    // 0x80073B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80073B18: bne         $fp, $zero, L_80073B24
    if (ctx->r30 != 0) {
        // 0x80073B1C: nop
    
            goto L_80073B24;
    }
    // 0x80073B1C: nop

    // 0x80073B20: break       7
    do_break(2147957536);
L_80073B24:
    // 0x80073B24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073B28: bne         $fp, $at, L_80073B3C
    if (ctx->r30 != ctx->r1) {
        // 0x80073B2C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80073B3C;
    }
    // 0x80073B2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80073B30: bne         $s2, $at, L_80073B3C
    if (ctx->r18 != ctx->r1) {
        // 0x80073B34: nop
    
            goto L_80073B3C;
    }
    // 0x80073B34: nop

    // 0x80073B38: break       6
    do_break(2147957560);
L_80073B3C:
    // 0x80073B3C: mflo        $a1
    ctx->r5 = lo;
    // 0x80073B40: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x80073B44: jal         0x80018604
    // 0x80073B48: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_12;
    // 0x80073B48: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_12:
    // 0x80073B4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80073B50: bne         $s1, $at, L_80073B70
    if (ctx->r17 != ctx->r1) {
        // 0x80073B54: nop
    
            goto L_80073B70;
    }
    // 0x80073B54: nop

    // 0x80073B58: lw          $a0, -0x8($s4)
    ctx->r4 = MEM_W(ctx->r20, -0X8);
    // 0x80073B5C: jal         0x8005D1B4
    // 0x80073B60: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_13;
    // 0x80073B60: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_13:
    // 0x80073B64: lw          $a0, -0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, -0X4);
    // 0x80073B68: jal         0x8005D1B4
    // 0x80073B6C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_14;
    // 0x80073B6C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_14:
L_80073B70:
    // 0x80073B70: jal         0x80007AB0
    // 0x80073B74: nop

    func_80007AB0(rdram, ctx);
        goto after_15;
    // 0x80073B74: nop

    after_15:
    // 0x80073B78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80073B7C: bne         $s3, $at, L_80073A94
    if (ctx->r19 != ctx->r1) {
        // 0x80073B80: or          $s1, $s3, $zero
        ctx->r17 = ctx->r19 | 0;
            goto L_80073A94;
    }
    // 0x80073B80: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_80073B84:
    // 0x80073B84: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x80073B88: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x80073B8C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80073B90:
    // 0x80073B90: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80073B94: jal         0x8001C568
    // 0x80073B98: nop

    func_8001C568(rdram, ctx);
        goto after_16;
    // 0x80073B98: nop

    after_16:
    // 0x80073B9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80073BA0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80073BA4: bne         $at, $zero, L_80073B90
    if (ctx->r1 != 0) {
        // 0x80073BA8: nop
    
            goto L_80073B90;
    }
    // 0x80073BA8: nop

    // 0x80073BAC: jal         0x8005CD50
    // 0x80073BB0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_17;
    // 0x80073BB0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_17:
    // 0x80073BB4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80073BB8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80073BBC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80073BC0: nop

    // 0x80073BC4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80073BC8: jal         0x80007AE0
    // 0x80073BCC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_18;
    // 0x80073BCC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_18:
    // 0x80073BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073BD4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x80073BD8: jr          $ra
    // 0x80073BDC: nop

    return;
    // 0x80073BDC: nop

;}
RECOMP_FUNC void func_80073BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073BE0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80073BE4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80073BE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80073BEC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80073BF0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80073BF4: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80073BF8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80073BFC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80073C00: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80073C04: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80073C08: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80073C0C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80073C10: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80073C14: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80073C18: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80073C1C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80073C20: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80073C24: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073C28: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073C2C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073C30: jal         0x80073990
    // 0x80073C34: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80073990(rdram, ctx);
        goto after_0;
    // 0x80073C34: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80073C38: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80073C3C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073C40: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80073C44: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073C48: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80073C4C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80073C50: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073C54: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80073C58: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073C5C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80073C60: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80073C64: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80073C68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80073C6C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80073C70: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80073C74: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80073C78: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80073C7C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80073C80: jr          $ra
    // 0x80073C84: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80073C84: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80073C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073C88: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80073C8C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80073C90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80073C94: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80073C98: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80073C9C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80073CA0: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80073CA4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80073CA8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80073CAC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80073CB0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80073CB4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80073CB8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80073CBC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80073CC0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80073CC4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80073CC8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80073CCC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073CD0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073CD4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073CD8: jal         0x80073990
    // 0x80073CDC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80073990(rdram, ctx);
        goto after_0;
    // 0x80073CDC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80073CE0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80073CE4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073CE8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80073CEC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073CF0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80073CF4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80073CF8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073CFC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80073D00: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073D04: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80073D08: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80073D0C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80073D10: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80073D14: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80073D18: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80073D1C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80073D20: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80073D24: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80073D28: jr          $ra
    // 0x80073D2C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80073D2C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80073D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073D30: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80073D34: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80073D38: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80073D3C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80073D40: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80073D44: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80073D48: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80073D4C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80073D50: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80073D54: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80073D58: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80073D5C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80073D60: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80073D64: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80073D68: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80073D6C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80073D70: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80073D74: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80073D78: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80073D7C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073D80: jal         0x80073990
    // 0x80073D84: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80073990(rdram, ctx);
        goto after_0;
    // 0x80073D84: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80073D88: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80073D8C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80073D90: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80073D94: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80073D98: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80073D9C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80073DA0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073DA4: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80073DA8: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073DAC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80073DB0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80073DB4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80073DB8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80073DBC: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80073DC0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80073DC4: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80073DC8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80073DCC: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80073DD0: jr          $ra
    // 0x80073DD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80073DD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80073DD8: nop

    // 0x80073DDC: nop

;}
RECOMP_FUNC void func_80073EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_80073EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_80073EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073EF0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80073EF4: addiu       $t0, $t0, 0x7910
    ctx->r8 = ADD32(ctx->r8, 0X7910);
    // 0x80073EF8: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80073EFC: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80073F00: jr          $ra
    // 0x80073F04: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    return;
    // 0x80073F04: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
;}
RECOMP_FUNC void func_80073F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073F10: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x80073F14: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80073F18: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80073F1C: add         $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x80073F20: add         $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80073F24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073F28: addi        $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80073F2C: add         $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
L_80073F30:
    // 0x80073F30: bne         $a2, $zero, L_80073F44
    if (ctx->r6 != 0) {
        // 0x80073F34: nop
    
            goto L_80073F44;
    }
    // 0x80073F34: nop

    // 0x80073F38: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80073F3C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80073F40: addi        $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_80073F44:
    // 0x80073F44: slt         $t1, $t0, $zero
    ctx->r9 = SIGNED(ctx->r8) < SIGNED(0) ? 1 : 0;
    // 0x80073F48: beq         $t1, $zero, L_80073F64
    if (ctx->r9 == 0) {
        // 0x80073F4C: nop
    
            goto L_80073F64;
    }
    // 0x80073F4C: nop

    // 0x80073F50: lb          $t2, 0x0($t9)
    ctx->r10 = MEM_B(ctx->r25, 0X0);
    // 0x80073F54: addi        $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80073F58: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80073F5C: b           L_80073F98
    // 0x80073F60: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
        goto L_80073F98;
    // 0x80073F60: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
L_80073F64:
    // 0x80073F64: lhu         $t2, 0x0($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X0);
    // 0x80073F68: addi        $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80073F6C: srl         $t3, $t2, 12
    ctx->r11 = S32(U32(ctx->r10) >> 12);
    // 0x80073F70: andi        $t2, $t2, 0xFFF
    ctx->r10 = ctx->r10 & 0XFFF;
    // 0x80073F74: beq         $t3, $zero, L_80073FAC
    if (ctx->r11 == 0) {
        // 0x80073F78: sub         $t1, $a1, $t2
        ctx->r9 = SUB32(ctx->r5, ctx->r10);
            goto L_80073FAC;
    }
    // 0x80073F78: sub         $t1, $a1, $t2
    ctx->r9 = SUB32(ctx->r5, ctx->r10);
    // 0x80073F7C: addi        $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
L_80073F80:
    // 0x80073F80: lb          $t2, -0x1($t1)
    ctx->r10 = MEM_B(ctx->r9, -0X1);
    // 0x80073F84: addi        $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x80073F88: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80073F8C: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80073F90: bne         $t3, $zero, L_80073F80
    if (ctx->r11 != 0) {
        // 0x80073F94: sb          $t2, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r10;
            goto L_80073F80;
    }
    // 0x80073F94: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
L_80073F98:
    // 0x80073F98: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80073F9C: bne         $a1, $t8, L_80073F30
    if (ctx->r5 != ctx->r24) {
        // 0x80073FA0: addi        $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80073F30;
    }
    // 0x80073FA0: addi        $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80073FA4: jr          $ra
    // 0x80073FA8: nop

    return;
    // 0x80073FA8: nop

L_80073FAC:
    // 0x80073FAC: lbu         $t3, 0x0($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X0);
    // 0x80073FB0: addi        $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80073FB4: b           L_80073F80
    // 0x80073FB8: addi        $t3, $t3, 0x12
    ctx->r11 = ADD32(ctx->r11, 0X12);
        goto L_80073F80;
    // 0x80073FB8: addi        $t3, $t3, 0x12
    ctx->r11 = ADD32(ctx->r11, 0X12);
;}
RECOMP_FUNC void func_80073FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073FC0: or          $v0, $sp, $zero
    ctx->r2 = ctx->r29 | 0;
    // 0x80073FC4: jr          $ra
    // 0x80073FC8: nop

    return;
    // 0x80073FC8: nop

;}
RECOMP_FUNC void func_80073FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073FD0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80073FD4: jr          $t1
    // 0x80073FD8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80073FD8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80073FDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80073FE0: jr          $t1
    // 0x80073FE4: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80073FE4: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x80073FE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80073FEC: jr          $t1
    // 0x80073FF0: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80073FF0: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    // 0x80073FF4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80073FF8: jr          $t1
    // 0x80073FFC: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80073FFC: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    // 0x80074000: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074004: jr          $t1
    // 0x80074008: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074008: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    // 0x8007400C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074010: jr          $t1
    // 0x80074014: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074014: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    // 0x80074018: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007401C: jr          $t1
    // 0x80074020: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074020: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    // 0x80074024: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074028: jr          $t1
    // 0x8007402C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007402C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    // 0x80074030: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074034: jr          $t1
    // 0x80074038: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074038: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    // 0x8007403C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074040: jr          $t1
    // 0x80074044: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074044: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x80074048: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007404C: jr          $t1
    // 0x80074050: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074050: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x80074054: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074058: jr          $t1
    // 0x8007405C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007405C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    // 0x80074060: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074064: jr          $t1
    // 0x80074068: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074068: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    // 0x8007406C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074070: jr          $t1
    // 0x80074074: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074074: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    // 0x80074078: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007407C: jr          $t1
    // 0x80074080: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074080: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    // 0x80074084: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074088: jr          $t1
    // 0x8007408C: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007408C: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    // 0x80074090: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074094: jr          $t1
    // 0x80074098: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074098: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    // 0x8007409C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740A0: jr          $t1
    // 0x800740A4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740A4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    // 0x800740A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740AC: jr          $t1
    // 0x800740B0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740B0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    // 0x800740B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740B8: jr          $t1
    // 0x800740BC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740BC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    // 0x800740C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740C4: jr          $t1
    // 0x800740C8: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740C8: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x800740CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740D0: jr          $t1
    // 0x800740D4: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740D4: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    // 0x800740D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740DC: jr          $t1
    // 0x800740E0: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740E0: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    // 0x800740E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740E8: jr          $t1
    // 0x800740EC: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740EC: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    // 0x800740F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800740F4: jr          $t1
    // 0x800740F8: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800740F8: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    // 0x800740FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074100: jr          $t1
    // 0x80074104: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074104: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    // 0x80074108: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007410C: jr          $t1
    // 0x80074110: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074110: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    // 0x80074114: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074118: jr          $t1
    // 0x8007411C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007411C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    // 0x80074120: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074124: jr          $t1
    // 0x80074128: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074128: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    // 0x8007412C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074130: jr          $t1
    // 0x80074134: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074134: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    // 0x80074138: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007413C: jr          $t1
    // 0x80074140: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074140: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    // 0x80074144: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074148: jr          $t1
    // 0x8007414C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007414C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    // 0x80074150: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074154: jr          $t1
    // 0x80074158: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074158: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    // 0x8007415C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074160: jr          $t1
    // 0x80074164: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074164: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    // 0x80074168: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007416C: jr          $t1
    // 0x80074170: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074170: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    // 0x80074174: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074178: jr          $t1
    // 0x8007417C: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007417C: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    // 0x80074180: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074184: jr          $t1
    // 0x80074188: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074188: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    // 0x8007418C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074190: jr          $t1
    // 0x80074194: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074194: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    // 0x80074198: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007419C: jr          $t1
    // 0x800741A0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741A0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    // 0x800741A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741A8: jr          $t1
    // 0x800741AC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741AC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x800741B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741B4: jr          $t1
    // 0x800741B8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741B8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    // 0x800741BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741C0: jr          $t1
    // 0x800741C4: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741C4: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    // 0x800741C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741CC: jr          $t1
    // 0x800741D0: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741D0: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    // 0x800741D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741D8: jr          $t1
    // 0x800741DC: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741DC: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    // 0x800741E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741E4: jr          $t1
    // 0x800741E8: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741E8: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    // 0x800741EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741F0: jr          $t1
    // 0x800741F4: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800741F4: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    // 0x800741F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800741FC: jr          $t1
    // 0x80074200: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074200: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    // 0x80074204: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074208: jr          $t1
    // 0x8007420C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007420C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    // 0x80074210: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074214: jr          $t1
    // 0x80074218: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074218: addiu       $t0, $zero, 0x901
    ctx->r8 = ADD32(0, 0X901);
    // 0x8007421C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074220: jr          $t1
    // 0x80074224: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074224: addiu       $t0, $zero, 0x902
    ctx->r8 = ADD32(0, 0X902);
    // 0x80074228: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007422C: jr          $t1
    // 0x80074230: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074230: addiu       $t0, $zero, 0x903
    ctx->r8 = ADD32(0, 0X903);
    // 0x80074234: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074238: jr          $t1
    // 0x8007423C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007423C: addiu       $t0, $zero, 0x904
    ctx->r8 = ADD32(0, 0X904);
    // 0x80074240: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074244: jr          $t1
    // 0x80074248: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074248: addiu       $t0, $zero, 0x905
    ctx->r8 = ADD32(0, 0X905);
    // 0x8007424C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074250: jr          $t1
    // 0x80074254: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074254: addiu       $t0, $zero, 0x906
    ctx->r8 = ADD32(0, 0X906);
    // 0x80074258: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007425C: jr          $t1
    // 0x80074260: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074260: addiu       $t0, $zero, 0x907
    ctx->r8 = ADD32(0, 0X907);
    // 0x80074264: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074268: jr          $t1
    // 0x8007426C: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007426C: addiu       $t0, $zero, 0x908
    ctx->r8 = ADD32(0, 0X908);
    // 0x80074270: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074274: jr          $t1
    // 0x80074278: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074278: addiu       $t0, $zero, 0x909
    ctx->r8 = ADD32(0, 0X909);
    // 0x8007427C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074280: jr          $t1
    // 0x80074284: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074284: addiu       $t0, $zero, 0x90A
    ctx->r8 = ADD32(0, 0X90A);
    // 0x80074288: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007428C: jr          $t1
    // 0x80074290: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074290: addiu       $t0, $zero, 0x90B
    ctx->r8 = ADD32(0, 0X90B);
    // 0x80074294: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074298: jr          $t1
    // 0x8007429C: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007429C: addiu       $t0, $zero, 0x90C
    ctx->r8 = ADD32(0, 0X90C);
    // 0x800742A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742A4: jr          $t1
    // 0x800742A8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742A8: addiu       $t0, $zero, 0x90D
    ctx->r8 = ADD32(0, 0X90D);
    // 0x800742AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742B0: jr          $t1
    // 0x800742B4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742B4: addiu       $t0, $zero, 0x90E
    ctx->r8 = ADD32(0, 0X90E);
    // 0x800742B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742BC: jr          $t1
    // 0x800742C0: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742C0: addiu       $t0, $zero, 0x90F
    ctx->r8 = ADD32(0, 0X90F);
    // 0x800742C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742C8: jr          $t1
    // 0x800742CC: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742CC: addiu       $t0, $zero, 0x910
    ctx->r8 = ADD32(0, 0X910);
    // 0x800742D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742D4: jr          $t1
    // 0x800742D8: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742D8: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    // 0x800742DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742E0: jr          $t1
    // 0x800742E4: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742E4: addiu       $t0, $zero, 0xA01
    ctx->r8 = ADD32(0, 0XA01);
    // 0x800742E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742EC: jr          $t1
    // 0x800742F0: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742F0: addiu       $t0, $zero, 0xA02
    ctx->r8 = ADD32(0, 0XA02);
    // 0x800742F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800742F8: jr          $t1
    // 0x800742FC: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800742FC: addiu       $t0, $zero, 0xA03
    ctx->r8 = ADD32(0, 0XA03);
    // 0x80074300: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074304: jr          $t1
    // 0x80074308: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074308: addiu       $t0, $zero, 0xA04
    ctx->r8 = ADD32(0, 0XA04);
    // 0x8007430C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074310: jr          $t1
    // 0x80074314: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074314: addiu       $t0, $zero, 0xA05
    ctx->r8 = ADD32(0, 0XA05);
    // 0x80074318: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007431C: jr          $t1
    // 0x80074320: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074320: addiu       $t0, $zero, 0xA06
    ctx->r8 = ADD32(0, 0XA06);
    // 0x80074324: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074328: jr          $t1
    // 0x8007432C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007432C: addiu       $t0, $zero, 0xA07
    ctx->r8 = ADD32(0, 0XA07);
    // 0x80074330: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074334: jr          $t1
    // 0x80074338: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074338: addiu       $t0, $zero, 0xA08
    ctx->r8 = ADD32(0, 0XA08);
    // 0x8007433C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074340: jr          $t1
    // 0x80074344: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074344: addiu       $t0, $zero, 0xA09
    ctx->r8 = ADD32(0, 0XA09);
    // 0x80074348: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007434C: jr          $t1
    // 0x80074350: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074350: addiu       $t0, $zero, 0xA0A
    ctx->r8 = ADD32(0, 0XA0A);
    // 0x80074354: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074358: jr          $t1
    // 0x8007435C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007435C: addiu       $t0, $zero, 0xA0B
    ctx->r8 = ADD32(0, 0XA0B);
    // 0x80074360: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074364: jr          $t1
    // 0x80074368: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074368: addiu       $t0, $zero, 0xA0C
    ctx->r8 = ADD32(0, 0XA0C);
    // 0x8007436C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074370: jr          $t1
    // 0x80074374: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074374: addiu       $t0, $zero, 0xA0D
    ctx->r8 = ADD32(0, 0XA0D);
    // 0x80074378: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007437C: jr          $t1
    // 0x80074380: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074380: addiu       $t0, $zero, 0xA0E
    ctx->r8 = ADD32(0, 0XA0E);
    // 0x80074384: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074388: jr          $t1
    // 0x8007438C: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007438C: addiu       $t0, $zero, 0xA0F
    ctx->r8 = ADD32(0, 0XA0F);
    // 0x80074390: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074394: jr          $t1
    // 0x80074398: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074398: addiu       $t0, $zero, 0xA10
    ctx->r8 = ADD32(0, 0XA10);
    // 0x8007439C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743A0: jr          $t1
    // 0x800743A4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743A4: addiu       $t0, $zero, 0xA11
    ctx->r8 = ADD32(0, 0XA11);
    // 0x800743A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743AC: jr          $t1
    // 0x800743B0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743B0: addiu       $t0, $zero, 0xA12
    ctx->r8 = ADD32(0, 0XA12);
    // 0x800743B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743B8: jr          $t1
    // 0x800743BC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743BC: addiu       $t0, $zero, 0xA13
    ctx->r8 = ADD32(0, 0XA13);
    // 0x800743C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743C4: jr          $t1
    // 0x800743C8: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743C8: addiu       $t0, $zero, 0xA14
    ctx->r8 = ADD32(0, 0XA14);
    // 0x800743CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743D0: jr          $t1
    // 0x800743D4: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743D4: addiu       $t0, $zero, 0xA15
    ctx->r8 = ADD32(0, 0XA15);
    // 0x800743D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743DC: jr          $t1
    // 0x800743E0: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743E0: addiu       $t0, $zero, 0xA16
    ctx->r8 = ADD32(0, 0XA16);
    // 0x800743E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743E8: jr          $t1
    // 0x800743EC: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743EC: addiu       $t0, $zero, 0xA17
    ctx->r8 = ADD32(0, 0XA17);
    // 0x800743F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800743F4: jr          $t1
    // 0x800743F8: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800743F8: addiu       $t0, $zero, 0xA18
    ctx->r8 = ADD32(0, 0XA18);
    // 0x800743FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074400: jr          $t1
    // 0x80074404: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074404: addiu       $t0, $zero, 0xB00
    ctx->r8 = ADD32(0, 0XB00);
    // 0x80074408: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007440C: jr          $t1
    // 0x80074410: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074410: addiu       $t0, $zero, 0xB01
    ctx->r8 = ADD32(0, 0XB01);
    // 0x80074414: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074418: jr          $t1
    // 0x8007441C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007441C: addiu       $t0, $zero, 0xB02
    ctx->r8 = ADD32(0, 0XB02);
    // 0x80074420: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074424: jr          $t1
    // 0x80074428: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074428: addiu       $t0, $zero, 0xB03
    ctx->r8 = ADD32(0, 0XB03);
    // 0x8007442C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074430: jr          $t1
    // 0x80074434: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074434: addiu       $t0, $zero, 0xB04
    ctx->r8 = ADD32(0, 0XB04);
    // 0x80074438: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007443C: jr          $t1
    // 0x80074440: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074440: addiu       $t0, $zero, 0xB05
    ctx->r8 = ADD32(0, 0XB05);
    // 0x80074444: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074448: jr          $t1
    // 0x8007444C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007444C: addiu       $t0, $zero, 0xB06
    ctx->r8 = ADD32(0, 0XB06);
    // 0x80074450: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074454: jr          $t1
    // 0x80074458: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074458: addiu       $t0, $zero, 0xB07
    ctx->r8 = ADD32(0, 0XB07);
    // 0x8007445C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074460: jr          $t1
    // 0x80074464: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074464: addiu       $t0, $zero, 0xB08
    ctx->r8 = ADD32(0, 0XB08);
    // 0x80074468: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007446C: jr          $t1
    // 0x80074470: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074470: addiu       $t0, $zero, 0xB09
    ctx->r8 = ADD32(0, 0XB09);
    // 0x80074474: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074478: jr          $t1
    // 0x8007447C: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007447C: addiu       $t0, $zero, 0xB0A
    ctx->r8 = ADD32(0, 0XB0A);
    // 0x80074480: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074484: jr          $t1
    // 0x80074488: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074488: addiu       $t0, $zero, 0xB0B
    ctx->r8 = ADD32(0, 0XB0B);
    // 0x8007448C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074490: jr          $t1
    // 0x80074494: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074494: addiu       $t0, $zero, 0xB0C
    ctx->r8 = ADD32(0, 0XB0C);
    // 0x80074498: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007449C: jr          $t1
    // 0x800744A0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744A0: addiu       $t0, $zero, 0xB0D
    ctx->r8 = ADD32(0, 0XB0D);
    // 0x800744A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744A8: jr          $t1
    // 0x800744AC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744AC: addiu       $t0, $zero, 0xB0E
    ctx->r8 = ADD32(0, 0XB0E);
    // 0x800744B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744B4: jr          $t1
    // 0x800744B8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744B8: addiu       $t0, $zero, 0xB0F
    ctx->r8 = ADD32(0, 0XB0F);
    // 0x800744BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744C0: jr          $t1
    // 0x800744C4: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744C4: addiu       $t0, $zero, 0xB10
    ctx->r8 = ADD32(0, 0XB10);
    // 0x800744C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744CC: jr          $t1
    // 0x800744D0: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744D0: addiu       $t0, $zero, 0xB11
    ctx->r8 = ADD32(0, 0XB11);
    // 0x800744D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744D8: jr          $t1
    // 0x800744DC: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744DC: addiu       $t0, $zero, 0xB12
    ctx->r8 = ADD32(0, 0XB12);
    // 0x800744E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744E4: jr          $t1
    // 0x800744E8: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744E8: addiu       $t0, $zero, 0xB13
    ctx->r8 = ADD32(0, 0XB13);
    // 0x800744EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744F0: jr          $t1
    // 0x800744F4: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800744F4: addiu       $t0, $zero, 0xB14
    ctx->r8 = ADD32(0, 0XB14);
    // 0x800744F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800744FC: jr          $t1
    // 0x80074500: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074500: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    // 0x80074504: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074508: jr          $t1
    // 0x8007450C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007450C: addiu       $t0, $zero, 0xC01
    ctx->r8 = ADD32(0, 0XC01);
    // 0x80074510: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074514: jr          $t1
    // 0x80074518: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074518: addiu       $t0, $zero, 0xC02
    ctx->r8 = ADD32(0, 0XC02);
    // 0x8007451C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074520: jr          $t1
    // 0x80074524: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074524: addiu       $t0, $zero, 0xC03
    ctx->r8 = ADD32(0, 0XC03);
    // 0x80074528: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007452C: jr          $t1
    // 0x80074530: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074530: addiu       $t0, $zero, 0xC04
    ctx->r8 = ADD32(0, 0XC04);
    // 0x80074534: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074538: jr          $t1
    // 0x8007453C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007453C: addiu       $t0, $zero, 0xC05
    ctx->r8 = ADD32(0, 0XC05);
    // 0x80074540: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074544: jr          $t1
    // 0x80074548: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074548: addiu       $t0, $zero, 0xC06
    ctx->r8 = ADD32(0, 0XC06);
    // 0x8007454C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074550: jr          $t1
    // 0x80074554: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074554: addiu       $t0, $zero, 0xC07
    ctx->r8 = ADD32(0, 0XC07);
    // 0x80074558: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007455C: jr          $t1
    // 0x80074560: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074560: addiu       $t0, $zero, 0xC08
    ctx->r8 = ADD32(0, 0XC08);
    // 0x80074564: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074568: jr          $t1
    // 0x8007456C: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007456C: addiu       $t0, $zero, 0xC09
    ctx->r8 = ADD32(0, 0XC09);
    // 0x80074570: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074574: jr          $t1
    // 0x80074578: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074578: addiu       $t0, $zero, 0xC0A
    ctx->r8 = ADD32(0, 0XC0A);
    // 0x8007457C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074580: jr          $t1
    // 0x80074584: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074584: addiu       $t0, $zero, 0xC0B
    ctx->r8 = ADD32(0, 0XC0B);
    // 0x80074588: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007458C: jr          $t1
    // 0x80074590: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074590: addiu       $t0, $zero, 0xC0C
    ctx->r8 = ADD32(0, 0XC0C);
    // 0x80074594: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074598: jr          $t1
    // 0x8007459C: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007459C: addiu       $t0, $zero, 0xC0D
    ctx->r8 = ADD32(0, 0XC0D);
    // 0x800745A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745A4: jr          $t1
    // 0x800745A8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745A8: addiu       $t0, $zero, 0xC0E
    ctx->r8 = ADD32(0, 0XC0E);
    // 0x800745AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745B0: jr          $t1
    // 0x800745B4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745B4: addiu       $t0, $zero, 0xC0F
    ctx->r8 = ADD32(0, 0XC0F);
    // 0x800745B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745BC: jr          $t1
    // 0x800745C0: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745C0: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
    // 0x800745C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745C8: jr          $t1
    // 0x800745CC: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745CC: addiu       $t0, $zero, 0xC11
    ctx->r8 = ADD32(0, 0XC11);
    // 0x800745D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745D4: jr          $t1
    // 0x800745D8: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745D8: addiu       $t0, $zero, 0xC12
    ctx->r8 = ADD32(0, 0XC12);
    // 0x800745DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745E0: jr          $t1
    // 0x800745E4: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745E4: addiu       $t0, $zero, 0xC13
    ctx->r8 = ADD32(0, 0XC13);
    // 0x800745E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745EC: jr          $t1
    // 0x800745F0: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745F0: addiu       $t0, $zero, 0xC14
    ctx->r8 = ADD32(0, 0XC14);
    // 0x800745F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800745F8: jr          $t1
    // 0x800745FC: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800745FC: addiu       $t0, $zero, 0xC15
    ctx->r8 = ADD32(0, 0XC15);
    // 0x80074600: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074604: jr          $t1
    // 0x80074608: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074608: addiu       $t0, $zero, 0xC16
    ctx->r8 = ADD32(0, 0XC16);
    // 0x8007460C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074610: jr          $t1
    // 0x80074614: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074614: addiu       $t0, $zero, 0xC17
    ctx->r8 = ADD32(0, 0XC17);
    // 0x80074618: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007461C: jr          $t1
    // 0x80074620: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074620: addiu       $t0, $zero, 0xC18
    ctx->r8 = ADD32(0, 0XC18);
    // 0x80074624: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074628: jr          $t1
    // 0x8007462C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007462C: addiu       $t0, $zero, 0xC19
    ctx->r8 = ADD32(0, 0XC19);
    // 0x80074630: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074634: jr          $t1
    // 0x80074638: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074638: addiu       $t0, $zero, 0xD00
    ctx->r8 = ADD32(0, 0XD00);
    // 0x8007463C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074640: jr          $t1
    // 0x80074644: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074644: addiu       $t0, $zero, 0xD01
    ctx->r8 = ADD32(0, 0XD01);
    // 0x80074648: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007464C: jr          $t1
    // 0x80074650: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074650: addiu       $t0, $zero, 0xD02
    ctx->r8 = ADD32(0, 0XD02);
    // 0x80074654: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074658: jr          $t1
    // 0x8007465C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007465C: addiu       $t0, $zero, 0xD03
    ctx->r8 = ADD32(0, 0XD03);
    // 0x80074660: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074664: jr          $t1
    // 0x80074668: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074668: addiu       $t0, $zero, 0xD04
    ctx->r8 = ADD32(0, 0XD04);
    // 0x8007466C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074670: jr          $t1
    // 0x80074674: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074674: addiu       $t0, $zero, 0xD05
    ctx->r8 = ADD32(0, 0XD05);
    // 0x80074678: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007467C: jr          $t1
    // 0x80074680: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074680: addiu       $t0, $zero, 0xD06
    ctx->r8 = ADD32(0, 0XD06);
    // 0x80074684: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074688: jr          $t1
    // 0x8007468C: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007468C: addiu       $t0, $zero, 0xE00
    ctx->r8 = ADD32(0, 0XE00);
    // 0x80074690: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074694: jr          $t1
    // 0x80074698: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074698: addiu       $t0, $zero, 0xE01
    ctx->r8 = ADD32(0, 0XE01);
    // 0x8007469C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746A0: jr          $t1
    // 0x800746A4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746A4: addiu       $t0, $zero, 0xE02
    ctx->r8 = ADD32(0, 0XE02);
    // 0x800746A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746AC: jr          $t1
    // 0x800746B0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746B0: addiu       $t0, $zero, 0xE03
    ctx->r8 = ADD32(0, 0XE03);
    // 0x800746B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746B8: jr          $t1
    // 0x800746BC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746BC: addiu       $t0, $zero, 0xE04
    ctx->r8 = ADD32(0, 0XE04);
    // 0x800746C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746C4: jr          $t1
    // 0x800746C8: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746C8: addiu       $t0, $zero, 0xE05
    ctx->r8 = ADD32(0, 0XE05);
    // 0x800746CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746D0: jr          $t1
    // 0x800746D4: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746D4: addiu       $t0, $zero, 0xE06
    ctx->r8 = ADD32(0, 0XE06);
    // 0x800746D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746DC: jr          $t1
    // 0x800746E0: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746E0: addiu       $t0, $zero, 0xE07
    ctx->r8 = ADD32(0, 0XE07);
    // 0x800746E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746E8: jr          $t1
    // 0x800746EC: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746EC: addiu       $t0, $zero, 0xE08
    ctx->r8 = ADD32(0, 0XE08);
    // 0x800746F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800746F4: jr          $t1
    // 0x800746F8: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800746F8: addiu       $t0, $zero, 0xE09
    ctx->r8 = ADD32(0, 0XE09);
    // 0x800746FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074700: jr          $t1
    // 0x80074704: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074704: addiu       $t0, $zero, 0xE0A
    ctx->r8 = ADD32(0, 0XE0A);
    // 0x80074708: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007470C: jr          $t1
    // 0x80074710: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074710: addiu       $t0, $zero, 0xE0B
    ctx->r8 = ADD32(0, 0XE0B);
    // 0x80074714: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074718: jr          $t1
    // 0x8007471C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007471C: addiu       $t0, $zero, 0xE0C
    ctx->r8 = ADD32(0, 0XE0C);
    // 0x80074720: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074724: jr          $t1
    // 0x80074728: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074728: addiu       $t0, $zero, 0xE0D
    ctx->r8 = ADD32(0, 0XE0D);
    // 0x8007472C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074730: jr          $t1
    // 0x80074734: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074734: addiu       $t0, $zero, 0xE0E
    ctx->r8 = ADD32(0, 0XE0E);
    // 0x80074738: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007473C: jr          $t1
    // 0x80074740: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074740: addiu       $t0, $zero, 0xE0F
    ctx->r8 = ADD32(0, 0XE0F);
    // 0x80074744: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074748: jr          $t1
    // 0x8007474C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007474C: addiu       $t0, $zero, 0xE10
    ctx->r8 = ADD32(0, 0XE10);
    // 0x80074750: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074754: jr          $t1
    // 0x80074758: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074758: addiu       $t0, $zero, 0xE11
    ctx->r8 = ADD32(0, 0XE11);
    // 0x8007475C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074760: jr          $t1
    // 0x80074764: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074764: addiu       $t0, $zero, 0xE12
    ctx->r8 = ADD32(0, 0XE12);
    // 0x80074768: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007476C: jr          $t1
    // 0x80074770: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074770: addiu       $t0, $zero, 0xE13
    ctx->r8 = ADD32(0, 0XE13);
    // 0x80074774: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074778: jr          $t1
    // 0x8007477C: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007477C: addiu       $t0, $zero, 0xE14
    ctx->r8 = ADD32(0, 0XE14);
    // 0x80074780: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074784: jr          $t1
    // 0x80074788: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074788: addiu       $t0, $zero, 0xE15
    ctx->r8 = ADD32(0, 0XE15);
    // 0x8007478C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074790: jr          $t1
    // 0x80074794: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074794: addiu       $t0, $zero, 0xE16
    ctx->r8 = ADD32(0, 0XE16);
    // 0x80074798: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007479C: jr          $t1
    // 0x800747A0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747A0: addiu       $t0, $zero, 0xF00
    ctx->r8 = ADD32(0, 0XF00);
    // 0x800747A4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747A8: jr          $t1
    // 0x800747AC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747AC: addiu       $t0, $zero, 0xF01
    ctx->r8 = ADD32(0, 0XF01);
    // 0x800747B0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747B4: jr          $t1
    // 0x800747B8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747B8: addiu       $t0, $zero, 0xF02
    ctx->r8 = ADD32(0, 0XF02);
    // 0x800747BC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747C0: jr          $t1
    // 0x800747C4: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747C4: addiu       $t0, $zero, 0xF03
    ctx->r8 = ADD32(0, 0XF03);
    // 0x800747C8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747CC: jr          $t1
    // 0x800747D0: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747D0: addiu       $t0, $zero, 0xF04
    ctx->r8 = ADD32(0, 0XF04);
    // 0x800747D4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747D8: jr          $t1
    // 0x800747DC: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747DC: addiu       $t0, $zero, 0xF05
    ctx->r8 = ADD32(0, 0XF05);
    // 0x800747E0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747E4: jr          $t1
    // 0x800747E8: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747E8: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
    // 0x800747EC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747F0: jr          $t1
    // 0x800747F4: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800747F4: addiu       $t0, $zero, 0x1001
    ctx->r8 = ADD32(0, 0X1001);
    // 0x800747F8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800747FC: jr          $t1
    // 0x80074800: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074800: addiu       $t0, $zero, 0x1002
    ctx->r8 = ADD32(0, 0X1002);
    // 0x80074804: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074808: jr          $t1
    // 0x8007480C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007480C: addiu       $t0, $zero, 0x1003
    ctx->r8 = ADD32(0, 0X1003);
    // 0x80074810: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074814: jr          $t1
    // 0x80074818: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074818: addiu       $t0, $zero, 0x1004
    ctx->r8 = ADD32(0, 0X1004);
    // 0x8007481C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074820: jr          $t1
    // 0x80074824: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074824: addiu       $t0, $zero, 0x1005
    ctx->r8 = ADD32(0, 0X1005);
    // 0x80074828: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007482C: jr          $t1
    // 0x80074830: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074830: addiu       $t0, $zero, 0x1006
    ctx->r8 = ADD32(0, 0X1006);
    // 0x80074834: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074838: jr          $t1
    // 0x8007483C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007483C: addiu       $t0, $zero, 0x1007
    ctx->r8 = ADD32(0, 0X1007);
    // 0x80074840: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074844: jr          $t1
    // 0x80074848: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074848: addiu       $t0, $zero, 0x1008
    ctx->r8 = ADD32(0, 0X1008);
    // 0x8007484C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074850: jr          $t1
    // 0x80074854: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074854: addiu       $t0, $zero, 0x1009
    ctx->r8 = ADD32(0, 0X1009);
    // 0x80074858: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007485C: jr          $t1
    // 0x80074860: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074860: addiu       $t0, $zero, 0x100A
    ctx->r8 = ADD32(0, 0X100A);
    // 0x80074864: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074868: jr          $t1
    // 0x8007486C: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007486C: addiu       $t0, $zero, 0x100B
    ctx->r8 = ADD32(0, 0X100B);
    // 0x80074870: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074874: jr          $t1
    // 0x80074878: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074878: addiu       $t0, $zero, 0x100C
    ctx->r8 = ADD32(0, 0X100C);
    // 0x8007487C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074880: jr          $t1
    // 0x80074884: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074884: addiu       $t0, $zero, 0x100D
    ctx->r8 = ADD32(0, 0X100D);
    // 0x80074888: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007488C: jr          $t1
    // 0x80074890: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074890: addiu       $t0, $zero, 0x100E
    ctx->r8 = ADD32(0, 0X100E);
    // 0x80074894: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074898: jr          $t1
    // 0x8007489C: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007489C: addiu       $t0, $zero, 0x100F
    ctx->r8 = ADD32(0, 0X100F);
    // 0x800748A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748A4: jr          $t1
    // 0x800748A8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748A8: addiu       $t0, $zero, 0x1010
    ctx->r8 = ADD32(0, 0X1010);
    // 0x800748AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748B0: jr          $t1
    // 0x800748B4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748B4: addiu       $t0, $zero, 0x1011
    ctx->r8 = ADD32(0, 0X1011);
    // 0x800748B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748BC: jr          $t1
    // 0x800748C0: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748C0: addiu       $t0, $zero, 0x1012
    ctx->r8 = ADD32(0, 0X1012);
    // 0x800748C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748C8: jr          $t1
    // 0x800748CC: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748CC: addiu       $t0, $zero, 0x1100
    ctx->r8 = ADD32(0, 0X1100);
    // 0x800748D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748D4: jr          $t1
    // 0x800748D8: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748D8: addiu       $t0, $zero, 0x1101
    ctx->r8 = ADD32(0, 0X1101);
    // 0x800748DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748E0: jr          $t1
    // 0x800748E4: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748E4: addiu       $t0, $zero, 0x1102
    ctx->r8 = ADD32(0, 0X1102);
    // 0x800748E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748EC: jr          $t1
    // 0x800748F0: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748F0: addiu       $t0, $zero, 0x1103
    ctx->r8 = ADD32(0, 0X1103);
    // 0x800748F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800748F8: jr          $t1
    // 0x800748FC: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800748FC: addiu       $t0, $zero, 0x1104
    ctx->r8 = ADD32(0, 0X1104);
    // 0x80074900: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074904: jr          $t1
    // 0x80074908: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074908: addiu       $t0, $zero, 0x1105
    ctx->r8 = ADD32(0, 0X1105);
    // 0x8007490C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074910: jr          $t1
    // 0x80074914: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074914: addiu       $t0, $zero, 0x1106
    ctx->r8 = ADD32(0, 0X1106);
    // 0x80074918: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007491C: jr          $t1
    // 0x80074920: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074920: addiu       $t0, $zero, 0x1107
    ctx->r8 = ADD32(0, 0X1107);
    // 0x80074924: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074928: jr          $t1
    // 0x8007492C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007492C: addiu       $t0, $zero, 0x1108
    ctx->r8 = ADD32(0, 0X1108);
    // 0x80074930: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074934: jr          $t1
    // 0x80074938: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074938: addiu       $t0, $zero, 0x1200
    ctx->r8 = ADD32(0, 0X1200);
    // 0x8007493C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074940: jr          $t1
    // 0x80074944: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074944: addiu       $t0, $zero, 0x1201
    ctx->r8 = ADD32(0, 0X1201);
    // 0x80074948: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007494C: jr          $t1
    // 0x80074950: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074950: addiu       $t0, $zero, 0x1202
    ctx->r8 = ADD32(0, 0X1202);
    // 0x80074954: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074958: jr          $t1
    // 0x8007495C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007495C: addiu       $t0, $zero, 0x1203
    ctx->r8 = ADD32(0, 0X1203);
    // 0x80074960: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074964: jr          $t1
    // 0x80074968: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074968: addiu       $t0, $zero, 0x1204
    ctx->r8 = ADD32(0, 0X1204);
    // 0x8007496C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074970: jr          $t1
    // 0x80074974: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074974: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
    // 0x80074978: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x8007497C: jr          $t1
    // 0x80074980: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074980: addiu       $t0, $zero, 0x1206
    ctx->r8 = ADD32(0, 0X1206);
    // 0x80074984: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074988: jr          $t1
    // 0x8007498C: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x8007498C: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    // 0x80074990: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074994: jr          $t1
    // 0x80074998: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074998: addiu       $t0, $zero, 0x1208
    ctx->r8 = ADD32(0, 0X1208);
    // 0x8007499C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749A0: jr          $t1
    // 0x800749A4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749A4: addiu       $t0, $zero, 0x1209
    ctx->r8 = ADD32(0, 0X1209);
    // 0x800749A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749AC: jr          $t1
    // 0x800749B0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749B0: addiu       $t0, $zero, 0x120A
    ctx->r8 = ADD32(0, 0X120A);
    // 0x800749B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749B8: jr          $t1
    // 0x800749BC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749BC: addiu       $t0, $zero, 0x120B
    ctx->r8 = ADD32(0, 0X120B);
    // 0x800749C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749C4: jr          $t1
    // 0x800749C8: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749C8: addiu       $t0, $zero, 0x120C
    ctx->r8 = ADD32(0, 0X120C);
    // 0x800749CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749D0: jr          $t1
    // 0x800749D4: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749D4: addiu       $t0, $zero, 0x120D
    ctx->r8 = ADD32(0, 0X120D);
    // 0x800749D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749DC: jr          $t1
    // 0x800749E0: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749E0: addiu       $t0, $zero, 0x120E
    ctx->r8 = ADD32(0, 0X120E);
    // 0x800749E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749E8: jr          $t1
    // 0x800749EC: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749EC: addiu       $t0, $zero, 0x120F
    ctx->r8 = ADD32(0, 0X120F);
    // 0x800749F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x800749F4: jr          $t1
    // 0x800749F8: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x800749F8: addiu       $t0, $zero, 0x1210
    ctx->r8 = ADD32(0, 0X1210);
    // 0x800749FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A00: jr          $t1
    // 0x80074A04: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A04: addiu       $t0, $zero, 0x1211
    ctx->r8 = ADD32(0, 0X1211);
    // 0x80074A08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A0C: jr          $t1
    // 0x80074A10: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A10: addiu       $t0, $zero, 0x1212
    ctx->r8 = ADD32(0, 0X1212);
    // 0x80074A14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A18: jr          $t1
    // 0x80074A1C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A1C: addiu       $t0, $zero, 0x1213
    ctx->r8 = ADD32(0, 0X1213);
    // 0x80074A20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A24: jr          $t1
    // 0x80074A28: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A28: addiu       $t0, $zero, 0x1300
    ctx->r8 = ADD32(0, 0X1300);
    // 0x80074A2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A30: jr          $t1
    // 0x80074A34: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A34: addiu       $t0, $zero, 0x1301
    ctx->r8 = ADD32(0, 0X1301);
    // 0x80074A38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A3C: jr          $t1
    // 0x80074A40: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A40: addiu       $t0, $zero, 0x1302
    ctx->r8 = ADD32(0, 0X1302);
    // 0x80074A44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A48: jr          $t1
    // 0x80074A4C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A4C: addiu       $t0, $zero, 0x1303
    ctx->r8 = ADD32(0, 0X1303);
    // 0x80074A50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A54: jr          $t1
    // 0x80074A58: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A58: addiu       $t0, $zero, 0x1304
    ctx->r8 = ADD32(0, 0X1304);
    // 0x80074A5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A60: jr          $t1
    // 0x80074A64: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A64: addiu       $t0, $zero, 0x1400
    ctx->r8 = ADD32(0, 0X1400);
    // 0x80074A68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A6C: jr          $t1
    // 0x80074A70: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A70: addiu       $t0, $zero, 0x1401
    ctx->r8 = ADD32(0, 0X1401);
    // 0x80074A74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A78: jr          $t1
    // 0x80074A7C: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A7C: addiu       $t0, $zero, 0x1402
    ctx->r8 = ADD32(0, 0X1402);
    // 0x80074A80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A84: jr          $t1
    // 0x80074A88: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A88: addiu       $t0, $zero, 0x1403
    ctx->r8 = ADD32(0, 0X1403);
    // 0x80074A8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A90: jr          $t1
    // 0x80074A94: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074A94: addiu       $t0, $zero, 0x1404
    ctx->r8 = ADD32(0, 0X1404);
    // 0x80074A98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074A9C: jr          $t1
    // 0x80074AA0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AA0: addiu       $t0, $zero, 0x1405
    ctx->r8 = ADD32(0, 0X1405);
    // 0x80074AA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AA8: jr          $t1
    // 0x80074AAC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AAC: addiu       $t0, $zero, 0x1406
    ctx->r8 = ADD32(0, 0X1406);
    // 0x80074AB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AB4: jr          $t1
    // 0x80074AB8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AB8: addiu       $t0, $zero, 0x1407
    ctx->r8 = ADD32(0, 0X1407);
    // 0x80074ABC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AC0: jr          $t1
    // 0x80074AC4: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AC4: addiu       $t0, $zero, 0x1408
    ctx->r8 = ADD32(0, 0X1408);
    // 0x80074AC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074ACC: jr          $t1
    // 0x80074AD0: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AD0: addiu       $t0, $zero, 0x1409
    ctx->r8 = ADD32(0, 0X1409);
    // 0x80074AD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AD8: jr          $t1
    // 0x80074ADC: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074ADC: addiu       $t0, $zero, 0x140A
    ctx->r8 = ADD32(0, 0X140A);
    // 0x80074AE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AE4: jr          $t1
    // 0x80074AE8: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AE8: addiu       $t0, $zero, 0x140B
    ctx->r8 = ADD32(0, 0X140B);
    // 0x80074AEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AF0: jr          $t1
    // 0x80074AF4: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074AF4: addiu       $t0, $zero, 0x140C
    ctx->r8 = ADD32(0, 0X140C);
    // 0x80074AF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074AFC: jr          $t1
    // 0x80074B00: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B00: addiu       $t0, $zero, 0x1500
    ctx->r8 = ADD32(0, 0X1500);
    // 0x80074B04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B08: jr          $t1
    // 0x80074B0C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B0C: addiu       $t0, $zero, 0x1501
    ctx->r8 = ADD32(0, 0X1501);
    // 0x80074B10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B14: jr          $t1
    // 0x80074B18: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B18: addiu       $t0, $zero, 0x1502
    ctx->r8 = ADD32(0, 0X1502);
    // 0x80074B1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B20: jr          $t1
    // 0x80074B24: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B24: addiu       $t0, $zero, 0x1503
    ctx->r8 = ADD32(0, 0X1503);
    // 0x80074B28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B2C: jr          $t1
    // 0x80074B30: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B30: addiu       $t0, $zero, 0x1504
    ctx->r8 = ADD32(0, 0X1504);
    // 0x80074B34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B38: jr          $t1
    // 0x80074B3C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B3C: addiu       $t0, $zero, 0x1505
    ctx->r8 = ADD32(0, 0X1505);
    // 0x80074B40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B44: jr          $t1
    // 0x80074B48: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B48: addiu       $t0, $zero, 0x1506
    ctx->r8 = ADD32(0, 0X1506);
    // 0x80074B4C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B50: jr          $t1
    // 0x80074B54: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B54: addiu       $t0, $zero, 0x1507
    ctx->r8 = ADD32(0, 0X1507);
    // 0x80074B58: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B5C: jr          $t1
    // 0x80074B60: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B60: addiu       $t0, $zero, 0x1600
    ctx->r8 = ADD32(0, 0X1600);
    // 0x80074B64: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B68: jr          $t1
    // 0x80074B6C: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B6C: addiu       $t0, $zero, 0x1601
    ctx->r8 = ADD32(0, 0X1601);
    // 0x80074B70: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B74: jr          $t1
    // 0x80074B78: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B78: addiu       $t0, $zero, 0x1602
    ctx->r8 = ADD32(0, 0X1602);
    // 0x80074B7C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B80: jr          $t1
    // 0x80074B84: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B84: addiu       $t0, $zero, 0x1603
    ctx->r8 = ADD32(0, 0X1603);
    // 0x80074B88: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B8C: jr          $t1
    // 0x80074B90: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B90: addiu       $t0, $zero, 0x1604
    ctx->r8 = ADD32(0, 0X1604);
    // 0x80074B94: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074B98: jr          $t1
    // 0x80074B9C: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074B9C: addiu       $t0, $zero, 0x1605
    ctx->r8 = ADD32(0, 0X1605);
    // 0x80074BA0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BA4: jr          $t1
    // 0x80074BA8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BA8: addiu       $t0, $zero, 0x1606
    ctx->r8 = ADD32(0, 0X1606);
    // 0x80074BAC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BB0: jr          $t1
    // 0x80074BB4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BB4: addiu       $t0, $zero, 0x1607
    ctx->r8 = ADD32(0, 0X1607);
    // 0x80074BB8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BBC: jr          $t1
    // 0x80074BC0: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BC0: addiu       $t0, $zero, 0x1608
    ctx->r8 = ADD32(0, 0X1608);
    // 0x80074BC4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BC8: jr          $t1
    // 0x80074BCC: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BCC: addiu       $t0, $zero, 0x1609
    ctx->r8 = ADD32(0, 0X1609);
    // 0x80074BD0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BD4: jr          $t1
    // 0x80074BD8: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BD8: addiu       $t0, $zero, 0x1700
    ctx->r8 = ADD32(0, 0X1700);
    // 0x80074BDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BE0: jr          $t1
    // 0x80074BE4: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BE4: addiu       $t0, $zero, 0x1701
    ctx->r8 = ADD32(0, 0X1701);
    // 0x80074BE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BEC: jr          $t1
    // 0x80074BF0: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BF0: addiu       $t0, $zero, 0x1702
    ctx->r8 = ADD32(0, 0X1702);
    // 0x80074BF4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074BF8: jr          $t1
    // 0x80074BFC: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074BFC: addiu       $t0, $zero, 0x1703
    ctx->r8 = ADD32(0, 0X1703);
    // 0x80074C00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C04: jr          $t1
    // 0x80074C08: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C08: addiu       $t0, $zero, 0x1704
    ctx->r8 = ADD32(0, 0X1704);
    // 0x80074C0C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C10: jr          $t1
    // 0x80074C14: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C14: addiu       $t0, $zero, 0x1705
    ctx->r8 = ADD32(0, 0X1705);
    // 0x80074C18: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C1C: jr          $t1
    // 0x80074C20: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C20: addiu       $t0, $zero, 0x1706
    ctx->r8 = ADD32(0, 0X1706);
    // 0x80074C24: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C28: jr          $t1
    // 0x80074C2C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C2C: addiu       $t0, $zero, 0x1707
    ctx->r8 = ADD32(0, 0X1707);
    // 0x80074C30: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C34: jr          $t1
    // 0x80074C38: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C38: addiu       $t0, $zero, 0x1708
    ctx->r8 = ADD32(0, 0X1708);
    // 0x80074C3C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C40: jr          $t1
    // 0x80074C44: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C44: addiu       $t0, $zero, 0x1709
    ctx->r8 = ADD32(0, 0X1709);
    // 0x80074C48: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C4C: jr          $t1
    // 0x80074C50: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C50: addiu       $t0, $zero, 0x170A
    ctx->r8 = ADD32(0, 0X170A);
    // 0x80074C54: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C58: jr          $t1
    // 0x80074C5C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C5C: addiu       $t0, $zero, 0x170B
    ctx->r8 = ADD32(0, 0X170B);
    // 0x80074C60: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C64: jr          $t1
    // 0x80074C68: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C68: addiu       $t0, $zero, 0x170C
    ctx->r8 = ADD32(0, 0X170C);
    // 0x80074C6C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C70: jr          $t1
    // 0x80074C74: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C74: addiu       $t0, $zero, 0x170D
    ctx->r8 = ADD32(0, 0X170D);
    // 0x80074C78: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C7C: jr          $t1
    // 0x80074C80: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C80: addiu       $t0, $zero, 0x170E
    ctx->r8 = ADD32(0, 0X170E);
    // 0x80074C84: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C88: jr          $t1
    // 0x80074C8C: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C8C: addiu       $t0, $zero, 0x170F
    ctx->r8 = ADD32(0, 0X170F);
    // 0x80074C90: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074C94: jr          $t1
    // 0x80074C98: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074C98: addiu       $t0, $zero, 0x1710
    ctx->r8 = ADD32(0, 0X1710);
    // 0x80074C9C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CA0: jr          $t1
    // 0x80074CA4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CA4: addiu       $t0, $zero, 0x1711
    ctx->r8 = ADD32(0, 0X1711);
    // 0x80074CA8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CAC: jr          $t1
    // 0x80074CB0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CB0: addiu       $t0, $zero, 0x1712
    ctx->r8 = ADD32(0, 0X1712);
    // 0x80074CB4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CB8: jr          $t1
    // 0x80074CBC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CBC: addiu       $t0, $zero, 0x1800
    ctx->r8 = ADD32(0, 0X1800);
    // 0x80074CC0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CC4: jr          $t1
    // 0x80074CC8: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CC8: addiu       $t0, $zero, 0x1801
    ctx->r8 = ADD32(0, 0X1801);
    // 0x80074CCC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CD0: jr          $t1
    // 0x80074CD4: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CD4: addiu       $t0, $zero, 0x1802
    ctx->r8 = ADD32(0, 0X1802);
    // 0x80074CD8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CDC: jr          $t1
    // 0x80074CE0: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CE0: addiu       $t0, $zero, 0x1803
    ctx->r8 = ADD32(0, 0X1803);
    // 0x80074CE4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CE8: jr          $t1
    // 0x80074CEC: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CEC: addiu       $t0, $zero, 0x1804
    ctx->r8 = ADD32(0, 0X1804);
    // 0x80074CF0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074CF4: jr          $t1
    // 0x80074CF8: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074CF8: addiu       $t0, $zero, 0x1900
    ctx->r8 = ADD32(0, 0X1900);
    // 0x80074CFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D00: jr          $t1
    // 0x80074D04: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D04: addiu       $t0, $zero, 0x1901
    ctx->r8 = ADD32(0, 0X1901);
    // 0x80074D08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D0C: jr          $t1
    // 0x80074D10: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D10: addiu       $t0, $zero, 0x1902
    ctx->r8 = ADD32(0, 0X1902);
    // 0x80074D14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D18: jr          $t1
    // 0x80074D1C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D1C: addiu       $t0, $zero, 0x1A00
    ctx->r8 = ADD32(0, 0X1A00);
    // 0x80074D20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D24: jr          $t1
    // 0x80074D28: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D28: addiu       $t0, $zero, 0x1A01
    ctx->r8 = ADD32(0, 0X1A01);
    // 0x80074D2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D30: jr          $t1
    // 0x80074D34: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D34: addiu       $t0, $zero, 0x1A02
    ctx->r8 = ADD32(0, 0X1A02);
    // 0x80074D38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D3C: jr          $t1
    // 0x80074D40: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D40: addiu       $t0, $zero, 0x1A03
    ctx->r8 = ADD32(0, 0X1A03);
    // 0x80074D44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D48: jr          $t1
    // 0x80074D4C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D4C: addiu       $t0, $zero, 0x1A04
    ctx->r8 = ADD32(0, 0X1A04);
    // 0x80074D50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D54: jr          $t1
    // 0x80074D58: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D58: addiu       $t0, $zero, 0x1A05
    ctx->r8 = ADD32(0, 0X1A05);
    // 0x80074D5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D60: jr          $t1
    // 0x80074D64: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D64: addiu       $t0, $zero, 0x1A06
    ctx->r8 = ADD32(0, 0X1A06);
    // 0x80074D68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D6C: jr          $t1
    // 0x80074D70: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D70: addiu       $t0, $zero, 0x1A07
    ctx->r8 = ADD32(0, 0X1A07);
    // 0x80074D74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D78: jr          $t1
    // 0x80074D7C: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D7C: addiu       $t0, $zero, 0x1A08
    ctx->r8 = ADD32(0, 0X1A08);
    // 0x80074D80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D84: jr          $t1
    // 0x80074D88: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D88: addiu       $t0, $zero, 0x1B00
    ctx->r8 = ADD32(0, 0X1B00);
    // 0x80074D8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D90: jr          $t1
    // 0x80074D94: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074D94: addiu       $t0, $zero, 0x1B01
    ctx->r8 = ADD32(0, 0X1B01);
    // 0x80074D98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074D9C: jr          $t1
    // 0x80074DA0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DA0: addiu       $t0, $zero, 0x1C00
    ctx->r8 = ADD32(0, 0X1C00);
    // 0x80074DA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DA8: jr          $t1
    // 0x80074DAC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DAC: addiu       $t0, $zero, 0x1C01
    ctx->r8 = ADD32(0, 0X1C01);
    // 0x80074DB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DB4: jr          $t1
    // 0x80074DB8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DB8: addiu       $t0, $zero, 0x1C02
    ctx->r8 = ADD32(0, 0X1C02);
    // 0x80074DBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DC0: jr          $t1
    // 0x80074DC4: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DC4: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
    // 0x80074DC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DCC: jr          $t1
    // 0x80074DD0: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DD0: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    // 0x80074DD4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DD8: jr          $t1
    // 0x80074DDC: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DDC: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    // 0x80074DE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DE4: jr          $t1
    // 0x80074DE8: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DE8: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    // 0x80074DEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DF0: jr          $t1
    // 0x80074DF4: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074DF4: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    // 0x80074DF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074DFC: jr          $t1
    // 0x80074E00: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E00: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    // 0x80074E04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E08: jr          $t1
    // 0x80074E0C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E0C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    // 0x80074E10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E14: jr          $t1
    // 0x80074E18: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E18: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    // 0x80074E1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E20: jr          $t1
    // 0x80074E24: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E24: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    // 0x80074E28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E2C: jr          $t1
    // 0x80074E30: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E30: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    // 0x80074E34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E38: jr          $t1
    // 0x80074E3C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E3C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    // 0x80074E40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E44: jr          $t1
    // 0x80074E48: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E48: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    // 0x80074E4C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E50: jr          $t1
    // 0x80074E54: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E54: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    // 0x80074E58: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E5C: jr          $t1
    // 0x80074E60: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E60: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    // 0x80074E64: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E68: jr          $t1
    // 0x80074E6C: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E6C: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    // 0x80074E70: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E74: jr          $t1
    // 0x80074E78: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E78: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    // 0x80074E7C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E80: jr          $t1
    // 0x80074E84: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E84: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    // 0x80074E88: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E8C: jr          $t1
    // 0x80074E90: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E90: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    // 0x80074E94: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074E98: jr          $t1
    // 0x80074E9C: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074E9C: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    // 0x80074EA0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EA4: jr          $t1
    // 0x80074EA8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074EA8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    // 0x80074EAC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EB0: jr          $t1
    // 0x80074EB4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074EB4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    // 0x80074EB8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EBC: jr          $t1
    // 0x80074EC0: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074EC0: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    // 0x80074EC4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EC8: jr          $t1
    // 0x80074ECC: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074ECC: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    // 0x80074ED0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074ED4: jr          $t1
    // 0x80074ED8: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074ED8: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    // 0x80074EDC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EE0: jr          $t1
    // 0x80074EE4: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074EE4: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    // 0x80074EE8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EEC: jr          $t1
    // 0x80074EF0: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074EF0: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    // 0x80074EF4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074EF8: jr          $t1
    // 0x80074EFC: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074EFC: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    // 0x80074F00: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x80074F04: jr          $t1
    // 0x80074F08: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x80074F08: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x80074F0C: nop

;}
RECOMP_FUNC void alSeqpPostEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074F10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80074F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074F18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80074F1C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80074F20: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80074F24: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80074F28: beql        $t6, $zero, L_80075010
    if (ctx->r14 == 0) {
        // 0x80074F2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80075010;
    }
    goto skip_0;
    // 0x80074F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80074F30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80074F34: jal         0x8007E440
    // 0x80074F38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80074F38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80074F3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80074F40: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80074F44: beq         $v0, $zero, L_8007500C
    if (ctx->r2 == 0) {
        // 0x80074F48: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8007500C;
    }
    // 0x80074F48: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80074F4C: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x80074F50: sll         $t7, $t0, 24
    ctx->r15 = S32(ctx->r8 << 24);
    // 0x80074F54: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x80074F58: bgez        $t8, L_80074F6C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80074F5C: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80074F6C;
    }
    // 0x80074F5C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80074F60: negu        $t0, $v1
    ctx->r8 = SUB32(0, ctx->r3);
    // 0x80074F64: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x80074F68: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_80074F6C:
    // 0x80074F6C: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x80074F70: lw          $t1, 0x1C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X1C);
    // 0x80074F74: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x80074F78: lw          $t3, 0xD8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD8);
    // 0x80074F7C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80074F80: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x80074F84: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80074F88: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80074F8C: lh          $t6, 0x1A($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X1A);
    // 0x80074F90: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80074F94: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80074F98: sh          $t6, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r14;
    // 0x80074F9C: lbu         $t7, -0x58B8($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X58B8);
    // 0x80074FA0: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x80074FA4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80074FA8: beql        $t8, $zero, L_80074FBC
    if (ctx->r24 == 0) {
        // 0x80074FAC: sb          $t2, 0x12($v0)
        MEM_B(0X12, ctx->r2) = ctx->r10;
            goto L_80074FBC;
    }
    goto skip_1;
    // 0x80074FAC: sb          $t2, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r10;
    skip_1:
    // 0x80074FB0: b           L_80074FBC
    // 0x80074FB4: sb          $t9, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r25;
        goto L_80074FBC;
    // 0x80074FB4: sb          $t9, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r25;
    // 0x80074FB8: sb          $t2, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r10;
L_80074FBC:
    // 0x80074FBC: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x80074FC0: sb          $t0, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r8;
    // 0x80074FC4: sh          $t1, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r9;
    // 0x80074FC8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80074FCC: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x80074FD0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80074FD4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80074FD8: jal         0x8007E56C
    // 0x80074FDC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    _timeToSamples(rdram, ctx);
        goto after_1;
    // 0x80074FDC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x80074FE0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80074FE4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80074FE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80074FEC: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x80074FF0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80074FF4: sw          $t3, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r11;
    // 0x80074FF8: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x80074FFC: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x80075000: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80075004: jalr        $t9
    // 0x80075008: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80075008: nop

    after_2:
L_8007500C:
    // 0x8007500C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075010:
    // 0x80075010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80075014: jr          $ra
    // 0x80075018: nop

    return;
    // 0x80075018: nop

;}
RECOMP_FUNC void alSynSetPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007502C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80075030: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80075034: beql        $t6, $zero, L_800750B8
    if (ctx->r14 == 0) {
        // 0x80075038: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800750B8;
    }
    goto skip_0;
    // 0x80075038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8007503C: jal         0x8007E440
    // 0x80075040: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80075040: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80075044: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80075048: beq         $v0, $zero, L_800750B4
    if (ctx->r2 == 0) {
        // 0x8007504C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800750B4;
    }
    // 0x8007504C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80075050: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80075054: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80075058: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x8007505C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80075060: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80075064: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80075068: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8007506C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80075070: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80075074: lbu         $t3, -0x58B8($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X58B8);
    // 0x80075078: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x8007507C: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80075080: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80075084: beql        $t4, $zero, L_80075098
    if (ctx->r12 == 0) {
        // 0x80075088: sw          $t6, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->r14;
            goto L_80075098;
    }
    goto skip_1;
    // 0x80075088: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    skip_1:
    // 0x8007508C: b           L_80075098
    // 0x80075090: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
        goto L_80075098;
    // 0x80075090: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
    // 0x80075094: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
L_80075098:
    // 0x80075098: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8007509C: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x800750A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800750A4: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x800750A8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800750AC: jalr        $t9
    // 0x800750B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800750B0: nop

    after_1:
L_800750B4:
    // 0x800750B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800750B8:
    // 0x800750B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800750BC: jr          $ra
    // 0x800750C0: nop

    return;
    // 0x800750C0: nop

;}
RECOMP_FUNC void func_80075AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075AA8: jal         0x8007EA70
    // 0x80075AAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x80075AAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80075AB0: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075AB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80075AB8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80075ABC: beq         $t6, $zero, L_80075ADC
    if (ctx->r14 == 0) {
        // 0x80075AC0: nop
    
            goto L_80075ADC;
    }
    // 0x80075AC0: nop

    // 0x80075AC4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80075AC8: lw          $v0, 0x45B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45B4);
    // 0x80075ACC: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80075AD0: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x80075AD4: b           L_80075AEC
    // 0x80075AD8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
        goto L_80075AEC;
    // 0x80075AD8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_80075ADC:
    // 0x80075ADC: lw          $v0, 0x45B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45B4);
    // 0x80075AE0: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x80075AE4: andi        $t0, $t9, 0xFFDF
    ctx->r8 = ctx->r25 & 0XFFDF;
    // 0x80075AE8: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
L_80075AEC:
    // 0x80075AEC: jal         0x8007EAE0
    // 0x80075AF0: nop

    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x80075AF0: nop

    after_1:
    // 0x80075AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075AFC: jr          $ra
    // 0x80075B00: nop

    return;
    // 0x80075B00: nop

;}
RECOMP_FUNC void func_80076170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076178: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8007617C: addiu       $a1, $a1, -0xE0
    ctx->r5 = ADD32(ctx->r5, -0XE0);
    // 0x80076180: jal         0x80077EC0
    // 0x80076184: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    _bcopy(rdram, ctx);
        goto after_0;
    // 0x80076184: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80076188: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007618C: lw          $a0, -0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XD0);
    // 0x80076190: beq         $a0, $zero, L_800761A8
    if (ctx->r4 == 0) {
        // 0x80076194: nop
    
            goto L_800761A8;
    }
    // 0x80076194: nop

    // 0x80076198: jal         0x8007DE50
    // 0x8007619C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8007619C: nop

    after_1:
    // 0x800761A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800761A4: sw          $v0, -0xD0($at)
    MEM_W(-0XD0, ctx->r1) = ctx->r2;
L_800761A8:
    // 0x800761A8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800761AC: lw          $a0, -0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC8);
    // 0x800761B0: beq         $a0, $zero, L_800761C8
    if (ctx->r4 == 0) {
        // 0x800761B4: nop
    
            goto L_800761C8;
    }
    // 0x800761B4: nop

    // 0x800761B8: jal         0x8007DE50
    // 0x800761BC: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800761BC: nop

    after_2:
    // 0x800761C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800761C4: sw          $v0, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = ctx->r2;
L_800761C8:
    // 0x800761C8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800761CC: lw          $a0, -0xC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC0);
    // 0x800761D0: beq         $a0, $zero, L_800761E8
    if (ctx->r4 == 0) {
        // 0x800761D4: nop
    
            goto L_800761E8;
    }
    // 0x800761D4: nop

    // 0x800761D8: jal         0x8007DE50
    // 0x800761DC: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x800761DC: nop

    after_3:
    // 0x800761E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800761E4: sw          $v0, -0xC0($at)
    MEM_W(-0XC0, ctx->r1) = ctx->r2;
L_800761E8:
    // 0x800761E8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800761EC: lw          $a0, -0xB8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB8);
    // 0x800761F0: beq         $a0, $zero, L_80076208
    if (ctx->r4 == 0) {
        // 0x800761F4: nop
    
            goto L_80076208;
    }
    // 0x800761F4: nop

    // 0x800761F8: jal         0x8007DE50
    // 0x800761FC: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x800761FC: nop

    after_4:
    // 0x80076200: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076204: sw          $v0, -0xB8($at)
    MEM_W(-0XB8, ctx->r1) = ctx->r2;
L_80076208:
    // 0x80076208: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007620C: lw          $a0, -0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB4);
    // 0x80076210: beq         $a0, $zero, L_80076228
    if (ctx->r4 == 0) {
        // 0x80076214: nop
    
            goto L_80076228;
    }
    // 0x80076214: nop

    // 0x80076218: jal         0x8007DE50
    // 0x8007621C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x8007621C: nop

    after_5:
    // 0x80076220: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076224: sw          $v0, -0xB4($at)
    MEM_W(-0XB4, ctx->r1) = ctx->r2;
L_80076228:
    // 0x80076228: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007622C: lw          $a0, -0xB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB0);
    // 0x80076230: beq         $a0, $zero, L_80076248
    if (ctx->r4 == 0) {
        // 0x80076234: nop
    
            goto L_80076248;
    }
    // 0x80076234: nop

    // 0x80076238: jal         0x8007DE50
    // 0x8007623C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_6;
    // 0x8007623C: nop

    after_6:
    // 0x80076240: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076244: sw          $v0, -0xB0($at)
    MEM_W(-0XB0, ctx->r1) = ctx->r2;
L_80076248:
    // 0x80076248: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007624C: lw          $a0, -0xA8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA8);
    // 0x80076250: beql        $a0, $zero, L_8007626C
    if (ctx->r4 == 0) {
        // 0x80076254: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007626C;
    }
    goto skip_0;
    // 0x80076254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80076258: jal         0x8007DE50
    // 0x8007625C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_7;
    // 0x8007625C: nop

    after_7:
    // 0x80076260: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076264: sw          $v0, -0xA8($at)
    MEM_W(-0XA8, ctx->r1) = ctx->r2;
    // 0x80076268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007626C:
    // 0x8007626C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076270: addiu       $v0, $v0, -0xE0
    ctx->r2 = ADD32(ctx->r2, -0XE0);
    // 0x80076274: jr          $ra
    // 0x80076278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80076278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void createSpeedParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076728: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8007672C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076730: sb          $t6, -0x263C($at)
    MEM_B(-0X263C, ctx->r1) = ctx->r14;
    // 0x80076734: lui         $t7, 0xA460
    ctx->r15 = S32(0XA460 << 16);
    // 0x80076738: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8007673C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076740: lui         $t9, 0xA460
    ctx->r25 = S32(0XA460 << 16);
    // 0x80076744: sb          $t8, -0x263B($at)
    MEM_B(-0X263B, ctx->r1) = ctx->r24;
    // 0x80076748: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x8007674C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076750: lui         $t1, 0xA460
    ctx->r9 = S32(0XA460 << 16);
    // 0x80076754: sb          $t0, -0x2638($at)
    MEM_B(-0X2638, ctx->r1) = ctx->r8;
    // 0x80076758: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
    // 0x8007675C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076760: lui         $t3, 0xA460
    ctx->r11 = S32(0XA460 << 16);
    // 0x80076764: sb          $t2, -0x263A($at)
    MEM_B(-0X263A, ctx->r1) = ctx->r10;
    // 0x80076768: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x8007676C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076770: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80076774: sb          $t4, -0x2639($at)
    MEM_B(-0X2639, ctx->r1) = ctx->r12;
    // 0x80076778: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007677C: sb          $t5, -0x25C4($at)
    MEM_B(-0X25C4, ctx->r1) = ctx->r13;
    // 0x80076780: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x80076784: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80076788: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007678C: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80076790: sb          $t7, -0x25C3($at)
    MEM_B(-0X25C3, ctx->r1) = ctx->r15;
    // 0x80076794: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80076798: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007679C: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x800767A0: sb          $t9, -0x25C0($at)
    MEM_B(-0X25C0, ctx->r1) = ctx->r25;
    // 0x800767A4: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x800767A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800767AC: lui         $t2, 0xA460
    ctx->r10 = S32(0XA460 << 16);
    // 0x800767B0: sb          $t1, -0x25C2($at)
    MEM_B(-0X25C2, ctx->r1) = ctx->r9;
    // 0x800767B4: lw          $t3, 0x30($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X30);
    // 0x800767B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800767BC: jr          $ra
    // 0x800767C0: sb          $t3, -0x25C1($at)
    MEM_B(-0X25C1, ctx->r1) = ctx->r11;
    return;
    // 0x800767C0: sb          $t3, -0x25C1($at)
    MEM_B(-0X25C1, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void sprintf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800768B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800768B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800768B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800768BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800768C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800768C4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800768C8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800768CC: addiu       $a0, $a0, 0x6908
    ctx->r4 = ADD32(ctx->r4, 0X6908);
    // 0x800768D0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x800768D4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800768D8: jal         0x800809E0
    // 0x800768DC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x800768DC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x800768E0: bltz        $v0, L_800768F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800768E4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800768F4;
    }
    // 0x800768E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800768E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800768EC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x800768F0: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
L_800768F4:
    // 0x800768F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800768F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800768FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80076900: jr          $ra
    // 0x80076904: nop

    return;
    // 0x80076904: nop

;}
RECOMP_FUNC void proutSprintf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076910: jal         0x80076BF8
    // 0x80076914: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80076914: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80076918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007691C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80076920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076924: jr          $ra
    // 0x80076928: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    return;
    // 0x80076928: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
;}
RECOMP_FUNC void strchr_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076B90: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80076B94: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80076B98: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80076B9C: beql        $t6, $v1, L_80076BC8
    if (ctx->r14 == ctx->r3) {
        // 0x80076BA0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80076BC8;
    }
    goto skip_0;
    // 0x80076BA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
L_80076BA4:
    // 0x80076BA4: bnel        $v1, $zero, L_80076BB8
    if (ctx->r3 != 0) {
        // 0x80076BA8: lbu         $v1, 0x1($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X1);
            goto L_80076BB8;
    }
    goto skip_1;
    // 0x80076BA8: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x80076BAC: jr          $ra
    // 0x80076BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80076BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80076BB4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
L_80076BB8:
    // 0x80076BB8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80076BBC: bne         $v0, $v1, L_80076BA4
    if (ctx->r2 != ctx->r3) {
        // 0x80076BC0: nop
    
            goto L_80076BA4;
    }
    // 0x80076BC0: nop

    // 0x80076BC4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80076BC8:
    // 0x80076BC8: jr          $ra
    // 0x80076BCC: nop

    return;
    // 0x80076BCC: nop

;}
