// ============================================================
// 函数名称: CreateCompatibleBitmap
// 虚拟地址: 0x407000
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f900, sub_419f48, sub_41a0dc, sub_437168, sub_41e6c8, sub_41d214
// ============================================================

HBITMAP __stdcallCreateCompatibleBitmap(HDC hdc, int32_t cx, int32_t cy)
{
    // 第一条实际指令: return CreateCompatibleBitmap(hdc, cx, cy) __tailcall
    return CreateCompatibleBitmap(hdc, cx, cy) __tailcall
}
