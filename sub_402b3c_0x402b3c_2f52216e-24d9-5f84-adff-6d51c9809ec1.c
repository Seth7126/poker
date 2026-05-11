// ============================================================
// 函数名称: sub_402b3c
// 虚拟地址: 0x402b3c
// WARP GUID: 2f52216e-24d9-5f84-adff-6d51c9809ec1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4f80b4, sub_48cfc8, sub_4f2e8c, sub_5047f4, sub_46c3d0, sub_4f637c, sub_4fb834, sub_47c160, sub_48db58, sub_484e24, sub_4cf900, sub_4cf404, sub_4d2a58, sub_4f1e48, sub_4d1324, sub_4f7244, sub_50003c, sub_4f55c0, sub_48c290, sub_4f8074, sub_4f5434, sub_4f1070, sub_4f6504, sub_488509, sub_4d41ec, sub_4fc834
// ============================================================

long doublesub_402b3c(long double arg1 @ st0)
{
    // 第一条实际指令: long double result
    long double result
    bool c2
    result, c2 = __fsin(arg1)
    bool c1 = unimplemented  {fsin }
    bool c0
    bool c3
    
    if (test_bit(
            ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe):1.b, 2))
        return float.t(0)
    
    return result
}
