// ============================================================
// 函数名称: ImageList_DrawEx
// 虚拟地址: 0x420254
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4375ac
// ============================================================

BOOL __stdcallImageList_DrawEx(HIMAGELIST himl, int32_t i, HDC hdcDst, int32_t x, int32_t y, int32_t dx, int32_t dy, COLORREF rgbBk, COLORREF rgbFg, enum IMAGE_LIST_DRAW_STYLE fStyle)
{
    // 第一条实际指令: return ImageList_DrawEx(himl, i, hdcDst, x, y, dx, dy, rgbBk, rgbFg, fStyle) __tailcall
    return ImageList_DrawEx(himl, i, hdcDst, x, y, dx, dy, rgbBk, rgbFg, fStyle) __tailcall
}
