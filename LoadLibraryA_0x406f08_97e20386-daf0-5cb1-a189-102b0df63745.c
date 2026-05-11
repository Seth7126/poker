// ============================================================
// 函数名称: LoadLibraryA
// 虚拟地址: 0x406f08
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435ac4, sub_4a41b0, sub_453138, sub_4b5788, sub_40cca8, sub_466cb4, sub_48f538, sub_49a8c8
// ============================================================

HMODULE __stdcallLoadLibraryA(PSTR lpLibFileName)
{
    // 第一条实际指令: return LoadLibraryA(lpLibFileName) __tailcall
    return LoadLibraryA(lpLibFileName) __tailcall
}
