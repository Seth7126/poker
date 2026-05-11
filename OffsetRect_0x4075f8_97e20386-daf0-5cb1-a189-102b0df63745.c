// ============================================================
// 函数名称: OffsetRect
// 虚拟地址: 0x4075f8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_420897, sub_43ab7c, sub_432634, sub_423a7f, sub_423918, sub_42923c, sub_43a0a4, sub_44a0a0, sub_43a2fc, sub_491e20
// ============================================================

BOOL __stdcallOffsetRect(RECT* lprc, int32_t dx, int32_t dy)
{
    // 第一条实际指令: return OffsetRect(lprc, dx, dy) __tailcall
    return OffsetRect(lprc, dx, dy) __tailcall
}
