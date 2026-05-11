// ============================================================
// 函数名称: sub_420bc8
// 虚拟地址: 0x420bc8
// WARP GUID: 1aeda931-af12-5bbc-b16d-75a0ae2b5208
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b77e0, sub_4babf8, sub_4fc834
// ============================================================

long double __stdcallsub_420bc8(float arg1, float arg2) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7 = fconvert.t(arg2)
    long double temp1 = fconvert.t(arg1)
    x87_r7 - temp1
    int16_t eax = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe
    float var_8_1
    
    if (test_bit(eax:1.b, 6) || test_bit(eax:1.b, 0))
        var_8_1 = arg1
    else
        var_8_1 = arg2
    
    return fconvert.t(var_8_1)
}
