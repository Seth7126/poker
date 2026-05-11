// ============================================================
// 函数名称: SetRect
// 虚拟地址: 0x4076c8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_442fa0, sub_44c778
// ============================================================

BOOL __stdcallSetRect(RECT* lprc, int32_t xLeft, int32_t yTop, int32_t xRight, int32_t yBottom)
{
    // 第一条实际指令: return SetRect(lprc, xLeft, yTop, xRight, yBottom) __tailcall
    return SetRect(lprc, xLeft, yTop, xRight, yBottom) __tailcall
}
