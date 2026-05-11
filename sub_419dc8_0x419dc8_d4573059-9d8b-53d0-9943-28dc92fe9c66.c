// ============================================================
// 函数名称: sub_419dc8
// 虚拟地址: 0x419dc8
// WARP GUID: d4573059-9d8b-53d0-9943-28dc92fe9c66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41920c
// ============================================================

void __convention("regparm")sub_419dc8(HGDIOBJ arg1)
{
    // 第一条实际指令: if ((*(arg1 + 8) & 8) != 0)
    if ((*(arg1 + 8) & 8) != 0)
        *(arg1 + 8) &= 0xf7
        SelectObject(*(arg1 + 4), data_531664)
}
