// ============================================================
// 函数名称: GetDCEx
// 虚拟地址: 0x407418
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4316f0, sub_42c0ac, sub_4350cc
// ============================================================

HDC __stdcallGetDCEx(HWND hWnd, HRGN hrgnClip, enum GET_DCX_FLAGS flags)
{
    // 第一条实际指令: return GetDCEx(hWnd, hrgnClip, flags) __tailcall
    return GetDCEx(hWnd, hrgnClip, flags) __tailcall
}
