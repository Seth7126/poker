// ============================================================
// 函数名称: SetWindowPos
// 虚拟地址: 0x407700
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_448d20, sub_4484f4, sub_4319b0, sub_4445ed, sub_443814, sub_431344, sub_42eda0, sub_4314c8, sub_4452e4, sub_425e70, sub_446ce8, sub_44843c, sub_449520, sub_425e67, sub_430e38, sub_445ad4, sub_431690, sub_445f30, sub_430f4c, sub_449c08, sub_448dc0, sub_4315b8, sub_52d8ac, sub_432d3c, sub_440884
// ============================================================

BOOL __stdcallSetWindowPos(HWND hWnd, HWND hWndInsertAfter, int32_t X, int32_t Y, int32_t cx, int32_t cy, enum SET_WINDOW_POS_FLAGS uFlags)
{
    // 第一条实际指令: return SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags) __tailcall
    return SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags) __tailcall
}
