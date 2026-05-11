// ============================================================
// 函数名称: sub_4f0e00
// 虚拟地址: 0x4f0e00
// WARP GUID: d339f7a8-98c8-57ae-b460-8ff803e3ca89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4d1324, sub_4ff3d8
// ============================================================

void __convention("regparm")sub_4f0e00(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_cc
    int32_t var_cc
    __builtin_memcpy(&var_cc, arg1, 0x80)
    int32_t var_c8
    int32_t var_1c8 = var_c8
    int32_t var_a8
    int32_t var_1c0 = var_a8
    int32_t var_88
    int32_t var_1b8 = var_88
    int32_t var_c0
    int32_t var_1b0 = var_c0
    int32_t var_a0
    int32_t var_1a8 = var_a0
    int32_t var_80
    int32_t var_1a0 = var_80
    int32_t var_b8
    int32_t var_198 = var_b8
    int32_t var_98
    int32_t var_190 = var_98
    int32_t var_78
    int32_t var_188 = var_78
    float var_2c = fconvert.s(fconvert.t(var_cc.q))
    int32_t var_ac
    float var_30 = fconvert.s(fconvert.t(var_ac.q))
    int32_t var_8c
    float var_34 = fconvert.s(fconvert.t(var_8c.q))
    int32_t var_c4
    float var_38 = fconvert.s(fconvert.t(var_c4.q))
    int32_t var_a4
    float var_3c = fconvert.s(fconvert.t(var_a4.q))
    int32_t var_84
    float var_40 = fconvert.s(fconvert.t(var_84.q))
    int32_t var_bc
    float var_44 = fconvert.s(fconvert.t(var_bc.q))
    int32_t var_9c
    float var_48 = fconvert.s(fconvert.t(var_9c.q))
    int32_t var_7c
    float var_4c = fconvert.s(fconvert.t(var_7c.q))
    long double x87_r7_14 = fconvert.t(var_2c) * fconvert.t(var_3c) * fconvert.t(var_4c)
        + fconvert.t(var_30) * fconvert.t(var_40) * fconvert.t(var_44)
        + fconvert.t(var_34) * fconvert.t(var_38) * fconvert.t(var_48)
        - fconvert.t(var_44) * fconvert.t(var_3c) * fconvert.t(var_34)
    float var_28 = fconvert.s(x87_r7_14 - fconvert.t(var_48) * fconvert.t(var_40) * fconvert.t(var_2c)
        - fconvert.t(var_4c) * fconvert.t(var_38) * fconvert.t(var_30))
    double var_14c = fconvert.d((fconvert.t(var_3c) * fconvert.t(var_4c)
        - fconvert.t(var_48) * fconvert.t(var_40)) / fconvert.t(var_28))
    double var_134 = fconvert.d((fconvert.t(var_40) * fconvert.t(var_44)
        - fconvert.t(var_38) * fconvert.t(var_4c)) / fconvert.t(var_28))
    double var_11c = fconvert.d((fconvert.t(var_38) * fconvert.t(var_48)
        - fconvert.t(var_44) * fconvert.t(var_3c)) / fconvert.t(var_28))
    double var_144 = fconvert.d((fconvert.t(var_48) * fconvert.t(var_34)
        - fconvert.t(var_30) * fconvert.t(var_4c)) / fconvert.t(var_28))
    double var_12c = fconvert.d((fconvert.t(var_2c) * fconvert.t(var_4c)
        - fconvert.t(var_44) * fconvert.t(var_34)) / fconvert.t(var_28))
    double var_114 = fconvert.d((fconvert.t(var_44) * fconvert.t(var_30)
        - fconvert.t(var_2c) * fconvert.t(var_48)) / fconvert.t(var_28))
    double var_13c = fconvert.d((fconvert.t(var_30) * fconvert.t(var_40)
        - fconvert.t(var_3c) * fconvert.t(var_34)) / fconvert.t(var_28))
    double var_124 = fconvert.d((fconvert.t(var_34) * fconvert.t(var_38)
        - fconvert.t(var_2c) * fconvert.t(var_40)) / fconvert.t(var_28))
    double var_10c = fconvert.d((fconvert.t(var_2c) * fconvert.t(var_3c)
        - fconvert.t(var_30) * fconvert.t(var_38)) / fconvert.t(var_28))
    *arg2 = var_14c.d
    arg2[1] = var_14c:4.d
    arg2[8] = var_144.d
    arg2[9] = var_144:4.d
    arg2[0x10] = var_13c.d
    arg2[0x11] = var_13c:4.d
    arg2[2] = var_134.d
    arg2[3] = var_134:4.d
    arg2[0xa] = var_12c.d
    arg2[0xb] = var_12c:4.d
    arg2[0x12] = var_124.d
    arg2[0x13] = var_124:4.d
    arg2[4] = var_11c.d
    arg2[5] = var_11c:4.d
    arg2[0xc] = var_114.d
    arg2[0xd] = var_114:4.d
    arg2[0x14] = var_10c.d
    arg2[0x15] = var_10c:4.d
}
