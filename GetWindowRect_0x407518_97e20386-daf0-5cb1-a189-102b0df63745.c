// ============================================================
// 函数名称: GetWindowRect
// 虚拟地址: 0x407518
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_429364, sub_432634, sub_432ee0, sub_4292f8, sub_4204e7, sub_42bf7c, sub_52d80c, sub_430200, sub_431bd8, sub_429cf8, sub_449520
// ============================================================

BOOL __stdcallGetWindowRect(HWND hWnd, RECT* lpRect)
{
    // 第一条实际指令: return GetWindowRect(hWnd, lpRect) __tailcall
    return GetWindowRect(hWnd, lpRect) __tailcall
}
