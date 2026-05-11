// ============================================================
// 函数名称: CreateCompatibleDC
// 虚拟地址: 0x407008
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f900, sub_41932c, sub_419f48, sub_41dd80, sub_41a628, sub_41a0dc, sub_41d10c, sub_41e6c8, sub_41d214, sub_41d8d4, sub_41ade8, sub_41cf54
// ============================================================

HDC __stdcallCreateCompatibleDC(HDC hdc)
{
    // 第一条实际指令: return CreateCompatibleDC(hdc) __tailcall
    return CreateCompatibleDC(hdc) __tailcall
}
