// ============================================================
// 函数名称: sub_42a1a8
// 虚拟地址: 0x42a1a8
// WARP GUID: 86ba1a28-cecd-5bb0-9a33-27910cd19ac1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WindowFromPoint, GetParent
// [内部子函数调用]: sub_428990
// [被调用的父级函数]: sub_447d4c, sub_42a1dc, sub_439178
// ============================================================

HANDLE __convention("regparm")sub_42a1a8(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = arg1[1]
    int32_t var_c = arg1[1]
    HWND hWnd = WindowFromPoint(*arg1)
    HANDLE result = nullptr
    
    for (; hWnd != 0; hWnd = GetParent(hWnd))
        result = sub_428990(hWnd)
        
        if (result != 0)
            break
    
    return result
}
