// ============================================================
// 函数名称: ClientToScreen
// 虚拟地址: 0x4072b8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_432ee0, sub_428ed8, sub_431978, sub_44a0a0
// ============================================================

BOOL __stdcallClientToScreen(HWND hWnd, POINT* lpPoint)
{
    // 第一条实际指令: return ClientToScreen(hWnd, lpPoint) __tailcall
    return ClientToScreen(hWnd, lpPoint) __tailcall
}
