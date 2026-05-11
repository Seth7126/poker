// ============================================================
// 函数名称: IsWindowEnabled
// 虚拟地址: 0x407580
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_448668, sub_4498e0, sub_448eb0, sub_449118, sub_440a44, sub_440908
// ============================================================

BOOL __stdcallIsWindowEnabled(HWND hWnd)
{
    // 第一条实际指令: return IsWindowEnabled(hWnd) __tailcall
    return IsWindowEnabled(hWnd) __tailcall
}
