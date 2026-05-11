// ============================================================
// 函数名称: GetPaletteEntries
// 虚拟地址: 0x4070e8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453f70, sub_41a590, sub_41a6cc, sub_41d870
// ============================================================

uint32_t __stdcallGetPaletteEntries(HPALETTE hpal, uint32_t iStart, uint32_t cEntries, PALETTEENTRY* pPalEntries)
{
    // 第一条实际指令: return GetPaletteEntries(hpal, iStart, cEntries, pPalEntries) __tailcall
    return GetPaletteEntries(hpal, iStart, cEntries, pPalEntries) __tailcall
}
