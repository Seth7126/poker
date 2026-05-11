// ============================================================
// 函数名称: SelectObject
// 虚拟地址: 0x4071a0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41f9e4, sub_419d88, sub_41d214, sub_42f900, sub_41932c, sub_4b4788, sub_41ceb4, sub_419cb0, sub_41dd80, sub_41d10c, sub_42c0ac, sub_41e6c8, sub_419b60, sub_419f48, sub_424560, sub_41a628, sub_41a0dc, sub_41d8d4, sub_41d7e1, sub_41cf54, sub_419cdc, sub_4351dc, sub_419da8, sub_419dc8, sub_419d0c, sub_41f1b0
// ============================================================

HGDIOBJ __stdcallSelectObject(HDC hdc, HGDIOBJ h)
{
    // 第一条实际指令: return SelectObject(hdc, h) __tailcall
    return SelectObject(hdc, h) __tailcall
}
