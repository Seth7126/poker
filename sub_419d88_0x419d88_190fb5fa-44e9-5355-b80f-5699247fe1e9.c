// ============================================================
// 函数名称: sub_419d88
// 虚拟地址: 0x419d88
// WARP GUID: 190fb5fa-44e9-5355-b80f-5699247fe1e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41920c
// ============================================================

void __convention("regparm")sub_419d88(HGDIOBJ arg1)
{
    // 第一条实际指令: if ((*(arg1 + 8) & 2) != 0)
    if ((*(arg1 + 8) & 2) != 0)
        *(arg1 + 8) &= 0xfd
        SelectObject(*(arg1 + 4), data_531668)
}
