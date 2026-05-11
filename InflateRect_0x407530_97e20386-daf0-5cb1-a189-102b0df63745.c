// ============================================================
// 函数名称: InflateRect
// 虚拟地址: 0x407530
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4317d8, sub_432634, sub_4325a4, sub_44c258, sub_44b760, sub_430200, sub_491e20
// ============================================================

BOOL __stdcallInflateRect(RECT* lprc, int32_t dx, int32_t dy)
{
    // 第一条实际指令: return InflateRect(lprc, dx, dy) __tailcall
    return InflateRect(lprc, dx, dy) __tailcall
}
