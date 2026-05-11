// ============================================================
// 函数名称: ReleaseDC
// 虚拟地址: 0x407648
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42a4d8, sub_41efec, sub_41f9e4, sub_437168, sub_41ea20, sub_432b1c, sub_41d812, sub_42f900, sub_4b696c, sub_4b4788, sub_446fc8, sub_41d10c, sub_43dd9c, sub_42c0ac, sub_41e6c8, sub_42bc94, sub_41a478, sub_45442c, sub_423ba4, sub_419f48, sub_41f9ac, sub_424560, sub_432634, sub_41a8b3, sub_42ab44, sub_41d8d4, sub_41d7e1, sub_454878, sub_46ffa8, sub_41a978, sub_41a590, sub_41cbaa, sub_41e440, sub_43512c, sub_443661
// ============================================================

int32_t __stdcallReleaseDC(HWND hWnd, HDC hDC)
{
    // 第一条实际指令: return ReleaseDC(hWnd, hDC) __tailcall
    return ReleaseDC(hWnd, hDC) __tailcall
}
