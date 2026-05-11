// ============================================================
// 函数名称: ScrollWindow
// 虚拟地址: 0x407668
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4314c8
// ============================================================

BOOL __stdcallScrollWindow(HWND hWnd, int32_t XAmount, int32_t YAmount, RECT* lpRect, RECT* lpClipRect)
{
    // 第一条实际指令: return ScrollWindow(hWnd, XAmount, YAmount, lpRect, lpClipRect) __tailcall
    return ScrollWindow(hWnd, XAmount, YAmount, lpRect, lpClipRect) __tailcall
}
