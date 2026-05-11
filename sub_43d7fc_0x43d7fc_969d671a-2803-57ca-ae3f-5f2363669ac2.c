// ============================================================
// 函数名称: sub_43d7fc
// 虚拟地址: 0x43d7fc
// WARP GUID: 969d671a-2803-57ca-ae3f-5f2363669ac2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43d7fc(LRESULT arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x4c))
    if (arg2 == *(arg1 + 0x4c))
        return 
    
    *(arg1 + 0x4c) = arg2
    HWND hWnd = *(arg1 + 0x2c)
    
    if (hWnd != 0)
        SendMessageA(hWnd, 0xb015, 0, 0)
}
