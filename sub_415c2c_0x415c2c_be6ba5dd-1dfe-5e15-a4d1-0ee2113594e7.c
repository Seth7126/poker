// ============================================================
// 函数名称: sub_415c2c
// 虚拟地址: 0x415c2c
// WARP GUID: be6ba5dd-1dfe-5e15-a4d1-0ee2113594e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415c58
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_415c2c(LPARAM arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x1a) != 0)
    if (*(arg1 + 0x1a) != 0)
        sub_415c58(arg1, sub_415c18, arg1)
}
