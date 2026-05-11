// ============================================================
// 函数名称: PtInRect
// 虚拟地址: 0x407620
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_425ce4, sub_4292f8, sub_42d734, sub_4924c0, sub_42ce44, sub_449d44, sub_429540, sub_434144, sub_42f088
// ============================================================

BOOL __stdcallPtInRect(RECT* lprc, POINT pt)
{
    // 第一条实际指令: return PtInRect(lprc, pt) __tailcall
    return PtInRect(lprc, pt) __tailcall
}
