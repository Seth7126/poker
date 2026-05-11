// ============================================================
// 函数名称: sub_402b2c
// 虚拟地址: 0x402b2c
// WARP GUID: ffaeafe0-f712-54a4-a0f3-e3790fecc5e0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_48cfc8, sub_4f28f8, sub_4f5434, sub_48db58, sub_4f1070, sub_4f1e48, sub_4f73cc, sub_4d1324, sub_4f2e8c, sub_5047f4, sub_4f7244, sub_4d41ec, sub_4f753c, sub_4f637c
// ============================================================

long doublesub_402b2c(long double arg1 @ st0)
{
    // 第一条实际指令: long double result
    long double result
    bool c2
    result, c2 = __fcos(arg1)
    bool c1 = unimplemented  {fcos }
    bool c0
    bool c3
    
    if (test_bit(
            ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe):1.b, 2))
        return float.t(0)
    
    return result
}
