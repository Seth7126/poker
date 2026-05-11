// ============================================================
// 函数名称: GetMenuItemID
// 虚拟地址: 0x407480
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43d69c, sub_43d3e0
// ============================================================

uint32_t __stdcallGetMenuItemID(HMENU hMenu, int32_t nPos)
{
    // 第一条实际指令: return GetMenuItemID(hMenu, nPos) __tailcall
    return GetMenuItemID(hMenu, nPos) __tailcall
}
