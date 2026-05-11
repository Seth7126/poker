// ============================================================
// 函数名称: sub_431888
// 虚拟地址: 0x431888
// WARP GUID: ef9a818e-42b2-5688-b3c6-b48dfd0a62e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetFocus
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

HWND __convention("regparm")sub_431888(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x14c) != 0 && GetFocus() == *(arg1 + 0x14c))
    if (*(arg1 + 0x14c) != 0 && GetFocus() == *(arg1 + 0x14c))
        HWND result
        result.b = 1
        return result
    
    return 0
}
