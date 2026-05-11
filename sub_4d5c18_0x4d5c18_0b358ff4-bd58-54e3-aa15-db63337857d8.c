// ============================================================
// 函数名称: sub_4d5c18
// 虚拟地址: 0x4d5c18
// WARP GUID: 0b358ff4-bd58-54e3-aa15-db63337857d8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4d2a58
// ============================================================

void __fastcallsub_4d5c18(float* arg1, int32_t arg2, int32_t arg3 @ eax, float arg4)
{
    // 第一条实际指令: float var_34
    float var_34
    __builtin_memcpy(&var_34, arg2, 0x18)
    float var_1c
    __builtin_memcpy(&var_1c, arg3, 0x18)
    *arg1 = fconvert.s(fconvert.t(var_34) * fconvert.t(arg4) + fconvert.t(var_1c))
    float var_30
    float var_18
    arg1[1] = fconvert.s(fconvert.t(var_30) * fconvert.t(arg4) + fconvert.t(var_18))
    float var_2c
    float var_14
    arg1[2] = fconvert.s(fconvert.t(var_2c) * fconvert.t(arg4) + fconvert.t(var_14))
    float var_28
    float var_10
    arg1[3] = fconvert.s(fconvert.t(var_28) * fconvert.t(arg4) + fconvert.t(var_10))
    float var_24
    float var_c
    arg1[4] = fconvert.s(fconvert.t(var_24) * fconvert.t(arg4) + fconvert.t(var_c))
    float var_20
    float var_8
    arg1[5] = fconvert.s(fconvert.t(var_20) * fconvert.t(arg4) + fconvert.t(var_8))
}
