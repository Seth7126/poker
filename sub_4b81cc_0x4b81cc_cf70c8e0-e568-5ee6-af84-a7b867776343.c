// ============================================================
// 函数名称: sub_4b81cc
// 虚拟地址: 0x4b81cc
// WARP GUID: cf70c8e0-e568-5ee6-af84-a7b867776343
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b8204
// ============================================================

long double __stdcallsub_4b81cc(float arg1, float arg2, float arg3) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float var_8_1 =
        fconvert.s((fconvert.t(arg3) - fconvert.t(arg2)) / fconvert.t(arg1) * fconvert.t(2f))
    return fconvert.t(fconvert.s(fconvert.t(var_8_1) * fconvert.t(var_8_1) + fconvert.t(1f)))
}
