// ============================================================
// 函数名称: PostMessageA
// 虚拟地址: 0x407610
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449750, sub_448668, sub_495544, sub_415a94, sub_446ce8, sub_446388, sub_4452e4, sub_44ba00
// ============================================================

BOOL __stdcallPostMessageA(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam)
{
    // 第一条实际指令: return PostMessageA(hWnd, Msg, wParam, lParam) __tailcall
    return PostMessageA(hWnd, Msg, wParam, lParam) __tailcall
}
