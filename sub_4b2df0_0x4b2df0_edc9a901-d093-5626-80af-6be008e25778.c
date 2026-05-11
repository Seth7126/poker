// ============================================================
// 函数名称: sub_4b2df0
// 虚拟地址: 0x4b2df0
// WARP GUID: edc9a901-d093-5626-80af-6be008e25778
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b2d78
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b2df0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != arg1[0x86])
    if (arg2 != arg1[0x86])
        arg1[0x86] = arg2
        sub_4b2d78(arg1)
}
