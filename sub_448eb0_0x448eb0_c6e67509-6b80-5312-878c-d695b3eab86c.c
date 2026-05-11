// ============================================================
// 函数名称: sub_448eb0
// 虚拟地址: 0x448eb0
// WARP GUID: c6e67509-6b80-5312-878c-d695b3eab86c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowEnabled, GetLastActivePopup, SetForegroundWindow, IsWindowVisible
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42fd68
// ============================================================

HWND __convention("regparm")sub_448eb0(void* arg1)
{
    // 第一条实际指令: HWND hWnd = *(arg1 + 0x24)
    HWND hWnd = *(arg1 + 0x24)
    
    if (hWnd != 0)
        hWnd = GetLastActivePopup(hWnd)
        HWND hWnd_1 = hWnd
        
        if (hWnd_1 != 0 && hWnd_1 != *(arg1 + 0x24))
            hWnd = IsWindowVisible(hWnd_1)
            
            if (hWnd != 0)
                hWnd = IsWindowEnabled(hWnd_1)
                
                if (hWnd != 0)
                    return SetForegroundWindow(hWnd_1)
    
    return hWnd
}
