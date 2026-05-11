// ============================================================
// 函数名称: ShowWindow
// 虚拟地址: 0x407730
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_472ccc, sub_447f14, sub_445670, sub_444050, sub_445ad4, sub_449e84, sub_445b91, sub_47326c, sub_445f30, sub_478234
// ============================================================

BOOL __stdcallShowWindow(HWND hWnd, enum SHOW_WINDOW_CMD nCmdShow)
{
    // 第一条实际指令: return ShowWindow(hWnd, nCmdShow) __tailcall
    return ShowWindow(hWnd, nCmdShow) __tailcall
}
