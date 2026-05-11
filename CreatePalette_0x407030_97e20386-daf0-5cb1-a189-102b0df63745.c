// ============================================================
// 函数名称: CreatePalette
// 虚拟地址: 0x407030
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453ec8, sub_41d870, sub_41a628, sub_452db8, sub_41c260, sub_41a57c
// ============================================================

HPALETTE __stdcallCreatePalette(LOGPALETTE* plpal)
{
    // 第一条实际指令: return CreatePalette(plpal) __tailcall
    return CreatePalette(plpal) __tailcall
}
