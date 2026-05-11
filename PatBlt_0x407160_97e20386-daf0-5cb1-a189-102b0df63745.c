// ============================================================
// 函数名称: PatBlt
// 虚拟地址: 0x407160
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4351dc, sub_41d8d4, sub_41d214, sub_42c0ac
// ============================================================

BOOL __stdcallPatBlt(HDC hdc, int32_t x, int32_t y, int32_t w, int32_t h, enum ROP_CODE rop)
{
    // 第一条实际指令: return PatBlt(hdc, x, y, w, h, rop) __tailcall
    return PatBlt(hdc, x, y, w, h, rop) __tailcall
}
