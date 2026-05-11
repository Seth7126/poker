// ============================================================
// 函数名称: InvalidateRect
// 虚拟地址: 0x407550
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44bf24, sub_4317d8, sub_42bba4, sub_431754, sub_449b10
// ============================================================

BOOL __stdcallInvalidateRect(HWND hWnd, RECT* lpRect, BOOL bErase)
{
    // 第一条实际指令: return InvalidateRect(hWnd, lpRect, bErase) __tailcall
    return InvalidateRect(hWnd, lpRect, bErase) __tailcall
}
