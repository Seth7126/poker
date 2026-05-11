// ============================================================
// 函数名称: sub_447f14
// 虚拟地址: 0x447f14
// WARP GUID: 1737601a-f443-54a3-8a98-6267d0c8d85d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow
// [内部子函数调用]: sub_447eec, sub_447ebc
// [被调用的父级函数]: sub_448d20, sub_448dc0
// ============================================================

BOOL __convention("regparm")sub_447f14(HWND arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: char eax = sub_447ebc()
    char eax = sub_447ebc()
    
    if (eax != 0)
        sub_447eec(0)
    
    BOOL result = ShowWindow(arg1, arg2)
    
    if (eax == 0)
        return result
    
    result.b = 1
    return sub_447eec(result)
}
