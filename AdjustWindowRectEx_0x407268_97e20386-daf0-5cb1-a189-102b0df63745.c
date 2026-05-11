// ============================================================
// 函数名称: AdjustWindowRectEx
// 虚拟地址: 0x407268
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_442fa0
// ============================================================

BOOL __stdcallAdjustWindowRectEx(RECT* lpRect, enum WINDOW_STYLE dwStyle, BOOL bMenu, enum WINDOW_EX_STYLE dwExStyle)
{
    // 第一条实际指令: return AdjustWindowRectEx(lpRect, dwStyle, bMenu, dwExStyle) __tailcall
    return AdjustWindowRectEx(lpRect, dwStyle, bMenu, dwExStyle) __tailcall
}
