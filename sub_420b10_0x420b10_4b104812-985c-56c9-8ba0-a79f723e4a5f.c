// ============================================================
// 函数名称: sub_420b10
// 虚拟地址: 0x420b10
// WARP GUID: 4b104812-985c-56c9-8ba0-a79f723e4a5f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b77e0, sub_4babf8, sub_4fc3f8, sub_4cb9a0
// ============================================================

long double __stdcallsub_420b10(float arg1, float arg2) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7 = fconvert.t(arg2)
    long double temp1 = fconvert.t(arg1)
    x87_r7 - temp1
    float var_8_1
    
    if (not(test_bit(
            ((x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
                | (x87_r7 == temp1 ? 1 : 0) << 0xe):1.b, 
            0)))
        var_8_1 = arg1
    else
        var_8_1 = arg2
    
    return fconvert.t(var_8_1)
}
