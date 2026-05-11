// ============================================================
// 函数名称: sub_4289ac
// 虚拟地址: 0x4289ac
// WARP GUID: 2bbf5cac-6da2-55fd-8842-a62f4cea8acd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4310a8, sub_44558c, sub_43659c, sub_436544
// ============================================================

LRESULT __convention("regparm")sub_4289ac(uint32_t arg1, WPARAM arg2, LPARAM arg3)
{
    // 第一条实际指令: HWND hWnd = *(*data_530660 + 0x24)
    HWND hWnd = *(*data_530660 + 0x24)
    
    if (hWnd == 0)
        return 0
    
    data_530660
    return SendMessageA(hWnd, arg1, arg2, arg3)
}
