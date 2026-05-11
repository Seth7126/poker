// ============================================================
// 函数名称: GetTextExtentPointA
// 虚拟地址: 0x407118
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44c48c
// ============================================================

BOOL __stdcallGetTextExtentPointA(HDC hdc, uint8_t* lpString, int32_t c, SIZE* lpsz)
{
    // 第一条实际指令: return GetTextExtentPointA(hdc, lpString, c, lpsz) __tailcall
    return GetTextExtentPointA(hdc, lpString, c, lpsz) __tailcall
}
