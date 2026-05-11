// ============================================================
// 函数名称: SelectPalette
// 虚拟地址: 0x4071a8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b6830, sub_41ceb4, sub_41dd80, sub_41a0dc, sub_452db8, sub_42ab44, sub_41e6c8, sub_41d214, sub_41d8d4, sub_41ade8, sub_41c160, sub_41cf54
// ============================================================

HPALETTE __stdcallSelectPalette(HDC hdc, HPALETTE hPal, BOOL bForceBkgd)
{
    // 第一条实际指令: return SelectPalette(hdc, hPal, bForceBkgd) __tailcall
    return SelectPalette(hdc, hPal, bForceBkgd) __tailcall
}
