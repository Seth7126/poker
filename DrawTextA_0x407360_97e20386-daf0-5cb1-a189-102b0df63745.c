// ============================================================
// 函数名称: DrawTextA
// 虚拟地址: 0x407360
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4262a8, sub_432b9c, sub_423918, sub_432e84, sub_44c778, sub_43a0a4, sub_44c05c
// ============================================================

int32_t __stdcallDrawTextA(HDC hdc, uint8_t* lpchText, int32_t cchText, RECT* lprc, enum DRAW_TEXT_FORMAT format)
{
    // 第一条实际指令: return DrawTextA(hdc, lpchText, cchText, lprc, format) __tailcall
    return DrawTextA(hdc, lpchText, cchText, lprc, format) __tailcall
}
