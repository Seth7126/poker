// ============================================================
// 函数名称: SetWindowLongA
// 虚拟地址: 0x4076f0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4481cc, sub_440cb8, sub_431afc, sub_4445ed, sub_443850, sub_4288d8, sub_428819, sub_440884
// ============================================================

int32_t __stdcallSetWindowLongA(HWND hWnd, enum WINDOW_LONG_PTR_INDEX nIndex, int32_t dwNewLong)
{
    // 第一条实际指令: return SetWindowLongA(hWnd, nIndex, dwNewLong) __tailcall
    return SetWindowLongA(hWnd, nIndex, dwNewLong) __tailcall
}
