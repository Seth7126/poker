// ============================================================
// 函数名称: GetWindowPlacement
// 虚拟地址: 0x407510
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_431bd8, sub_4204e7, sub_431344
// ============================================================

BOOL __stdcallGetWindowPlacement(HWND hWnd, WINDOWPLACEMENT* lpwndpl)
{
    // 第一条实际指令: return GetWindowPlacement(hWnd, lpwndpl) __tailcall
    return GetWindowPlacement(hWnd, lpwndpl) __tailcall
}
