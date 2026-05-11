// ============================================================
// 函数名称: sub_419acc
// 虚拟地址: 0x419acc
// WARP GUID: 5a7e5cb5-1266-5495-9ad8-60fb8341f248
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPixel
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_4b4f8c, sub_41e21c
// ============================================================

COLORREF __convention("regparm")sub_419acc(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t x = arg2
    int32_t x = arg2
    arg2.b = 1
    sub_419c14(arg1, arg2.b)
    return GetPixel(*(arg1 + 4), x, arg3)
}
