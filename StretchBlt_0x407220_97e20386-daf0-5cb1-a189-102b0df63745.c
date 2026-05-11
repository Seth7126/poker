// ============================================================
// 函数名称: StretchBlt
// 虚拟地址: 0x407220
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41932c, sub_419f48, sub_4195ec, sub_41dd80, sub_41a0dc
// ============================================================

BOOL __stdcallStretchBlt(HDC hdcDest, int32_t xDest, int32_t yDest, int32_t wDest, int32_t hDest, HDC hdcSrc, int32_t xSrc, int32_t ySrc, int32_t wSrc, int32_t hSrc, enum ROP_CODE rop)
{
    // 第一条实际指令: return StretchBlt(hdcDest, xDest, yDest, wDest, hDest, hdcSrc, xSrc, ySrc, wSrc, hSrc, rop) __tailcall
    return StretchBlt(hdcDest, xDest, yDest, wDest, hDest, hdcSrc, xSrc, ySrc, wSrc, hSrc, rop)
        __tailcall
}
