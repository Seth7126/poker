// ============================================================
// 函数名称: GetMenuStringA
// 虚拟地址: 0x407498
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43d69c
// ============================================================

int32_t __stdcallGetMenuStringA(HMENU hMenu, uint32_t uIDItem, uint8_t* lpString, int32_t cchMax, enum MENU_ITEM_FLAGS flags)
{
    // 第一条实际指令: return GetMenuStringA(hMenu, uIDItem, lpString, cchMax, flags) __tailcall
    return GetMenuStringA(hMenu, uIDItem, lpString, cchMax, flags) __tailcall
}
