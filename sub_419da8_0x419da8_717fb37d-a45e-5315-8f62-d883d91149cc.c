// ============================================================
// 函数名称: sub_419da8
// 虚拟地址: 0x419da8
// WARP GUID: 717fb37d-a45e-5315-8f62-d883d91149cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41920c
// ============================================================

void __convention("regparm")sub_419da8(HGDIOBJ arg1)
{
    // 第一条实际指令: if ((*(arg1 + 8) & 4) != 0)
    if ((*(arg1 + 8) & 4) != 0)
        *(arg1 + 8) &= 0xfb
        SelectObject(*(arg1 + 4), data_531660)
}
