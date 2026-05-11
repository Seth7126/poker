// ============================================================
// 函数名称: Rectangle
// 虚拟地址: 0x407188
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_419820
// ============================================================

BOOL __stdcallRectangle(HDC hdc, int32_t left, int32_t top, int32_t right, int32_t bottom)
{
    // 第一条实际指令: return Rectangle(hdc, left, top, right, bottom) __tailcall
    return Rectangle(hdc, left, top, right, bottom) __tailcall
}
