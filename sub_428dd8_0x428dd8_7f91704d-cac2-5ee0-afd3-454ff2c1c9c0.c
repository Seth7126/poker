// ============================================================
// 函数名称: sub_428dd8
// 虚拟地址: 0x428dd8
// WARP GUID: 7f91704d-cac2-5ee0-afd3-454ff2c1c9c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindow, GetTopWindow, GetDesktopWindow
// [内部子函数调用]: sub_410524, sub_428cec
// [被调用的父级函数]: sub_429540
// ============================================================

int32_t __convention("regparm")sub_428dd8(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_10 = arg3
    int32_t var_10 = arg3
    int32_t i = 0
    int32_t eax = arg1[2]
    
    if (eax != 0)
        if (eax == 1)
            return *sub_410524(arg1, 0)
        
        HWND hWnd = GetTopWindow(GetDesktopWindow())
        
        while (i == 0)
            if (hWnd == 0)
                break
            
            if (sub_428cec(arg1, hWnd, &var_10) == 0)
                hWnd = GetWindow(hWnd, GW_HWNDNEXT)
            else
                i = **(arg1[1] + (var_10 << 2))
    
    return i
}
