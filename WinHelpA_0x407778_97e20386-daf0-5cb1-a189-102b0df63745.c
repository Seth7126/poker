// ============================================================
// 函数名称: WinHelpA
// 虚拟地址: 0x407778
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449750
// ============================================================

BOOL __stdcallWinHelpA(HWND hWndMain, PSTR lpszHelp, uint32_t uCommand, uint32_t dwData)
{
    // 第一条实际指令: return WinHelpA(hWndMain, lpszHelp, uCommand, dwData) __tailcall
    return WinHelpA(hWndMain, lpszHelp, uCommand, dwData) __tailcall
}
