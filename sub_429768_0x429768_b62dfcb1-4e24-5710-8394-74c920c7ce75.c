// ============================================================
// 函数名称: sub_429768
// 虚拟地址: 0x429768
// WARP GUID: b62dfcb1-4e24-5710-8394-74c920c7ce75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WindowFromPoint, GetParent
// [内部子函数调用]: sub_429744
// [被调用的父级函数]: sub_429364, sub_429794
// ============================================================

HWND __convention("regparm")sub_429768(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1[1]
    int32_t var_8 = arg1[1]
    HWND hWnd
    
    for (hWnd = WindowFromPoint(*arg1); hWnd != 0; hWnd = GetParent(hWnd))
        if (sub_429744(hWnd) != 0)
            break
    
    return hWnd
}
