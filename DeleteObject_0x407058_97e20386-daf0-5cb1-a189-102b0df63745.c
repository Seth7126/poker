// ============================================================
// 函数名称: DeleteObject
// 虚拟地址: 0x407058
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f6d0, sub_41efec, sub_454788, sub_45361c, sub_41d0c0, sub_417fbc, sub_41d812, sub_42f900, sub_44a012, sub_417c44, sub_453ff8, sub_41e3e0, sub_41e6c8, sub_41e3af, sub_41a0dc, sub_41d8d4, sub_41b08a, sub_41dfd0, sub_41f4d3, sub_41a720, sub_41a7f9, sub_41d064, sub_41dd08, sub_41aa68, sub_41efb4, sub_41fdd8
// ============================================================

BOOL __stdcallDeleteObject(HGDIOBJ ho)
{
    // 第一条实际指令: return DeleteObject(ho) __tailcall
    return DeleteObject(ho) __tailcall
}
