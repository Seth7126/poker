// ============================================================
// 函数名称: GetWindowLongA
// 虚拟地址: 0x407508
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4483cc, sub_4445ed, sub_440d6c, sub_441308, sub_42475c, sub_4288d8, sub_441258, sub_431bd8, sub_443850, sub_44843c, sub_424720, sub_424664, sub_442fa0, sub_432634, sub_441220, sub_440a44, sub_449030, sub_431afc, sub_428819, sub_425118, sub_440884
// ============================================================

int32_t __stdcallGetWindowLongA(HWND hWnd, enum WINDOW_LONG_PTR_INDEX nIndex)
{
    // 第一条实际指令: return GetWindowLongA(hWnd, nIndex) __tailcall
    return GetWindowLongA(hWnd, nIndex) __tailcall
}
