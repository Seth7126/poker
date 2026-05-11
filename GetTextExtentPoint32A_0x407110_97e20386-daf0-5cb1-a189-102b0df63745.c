// ============================================================
// 函数名称: GetTextExtentPoint32A
// 虚拟地址: 0x407110
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41995c
// ============================================================

BOOL __stdcallGetTextExtentPoint32A(HDC hdc, uint8_t* lpString, int32_t c, SIZE* psizl)
{
    // 第一条实际指令: return GetTextExtentPoint32A(hdc, lpString, c, psizl) __tailcall
    return GetTextExtentPoint32A(hdc, lpString, c, psizl) __tailcall
}
