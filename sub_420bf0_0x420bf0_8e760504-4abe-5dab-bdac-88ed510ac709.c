// ============================================================
// 函数名称: sub_420bf0
// 虚拟地址: 0x420bf0
// WARP GUID: 8e760504-4abe-5dab-bdac-88ed510ac709
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_5047f4, sub_4fdbc0, sub_511198
// ============================================================

int80_t __stdcallsub_420bf0(long double arg1, long double arg2) __pure
{
    // 第一条实际指令: arg1 - arg2
    arg1 - arg2
    int32_t var_14
    
    if (not(test_bit(
            ((arg1 < arg2 ? 1 : 0) << 8 | (is_unordered.t(arg1, arg2) ? 1 : 0) << 0xa
                | (arg1 == arg2 ? 1 : 0) << 0xe):1.b, 
            0)))
        var_14 = arg1.d
        int32_t var_10_1 = arg1:4.d
        int32_t eax_4
        eax_4.w = arg1:8.w
        int16_t var_c_1 = eax_4.w
    else
        var_14 = arg2.d
        int32_t var_10 = arg2:4.d
        int32_t eax_2
        eax_2.w = arg2:8.w
        int16_t var_c = eax_2.w
    
    return var_14.t
}
