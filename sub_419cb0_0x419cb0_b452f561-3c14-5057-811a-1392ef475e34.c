// ============================================================
// 函数名称: sub_419cb0
// 虚拟地址: 0x419cb0
// WARP GUID: b452f561-3c14-5057-811a-1392ef475e34
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetTextColor, SelectObject
// [内部子函数调用]: sub_418900, sub_41842c
// [被调用的父级函数]: sub_419c14
// ============================================================

COLORREF __convention("regparm")sub_419cb0(void* arg1)
{
    // 第一条实际指令: HGDIOBJ h = sub_418900(*(arg1 + 0xc))
    HGDIOBJ h = sub_418900(*(arg1 + 0xc))
    SelectObject(*(arg1 + 4), h)
    COLORREF color = sub_41842c(*(*(arg1 + 0xc) + 0x18))
    return SetTextColor(*(arg1 + 4), color)
}
