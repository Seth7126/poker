// ============================================================
// 函数名称: BitBlt
// 虚拟地址: 0x406fd8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f900, sub_4375ac, sub_4da10c, sub_41d8d4, sub_41d214
// ============================================================

BOOL __stdcallBitBlt(HDC hdc, int32_t x, int32_t y, int32_t cx, int32_t cy, HDC hdcSrc, int32_t x1, int32_t y1, enum ROP_CODE rop)
{
    // 第一条实际指令: return BitBlt(hdc, x, y, cx, cy, hdcSrc, x1, y1, rop) __tailcall
    return BitBlt(hdc, x, y, cx, cy, hdcSrc, x1, y1, rop) __tailcall
}
