// ============================================================
// 函数名称: MaskBlt
// 虚拟地址: 0x407150
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a0dc
// ============================================================

BOOL __stdcallMaskBlt(HDC hdcDest, int32_t xDest, int32_t yDest, int32_t width, int32_t height, HDC hdcSrc, int32_t xSrc, int32_t ySrc, HBITMAP hbmMask, int32_t xMask, int32_t yMask, uint32_t rop)
{
    // 第一条实际指令: return MaskBlt(hdcDest, xDest, yDest, width, height, hdcSrc, xSrc, ySrc, hbmMask, xMask, yMask, rop) __tailcall
    return MaskBlt(hdcDest, xDest, yDest, width, height, hdcSrc, xSrc, ySrc, hbmMask, xMask, yMask, rop)
        __tailcall
}
