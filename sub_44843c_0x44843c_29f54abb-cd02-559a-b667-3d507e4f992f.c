// ============================================================
// 函数名称: sub_44843c
// 虚拟地址: 0x44843c
// WARP GUID: 29f54abb-cd02-559a-b667-3d507e4f992f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindow, SetWindowPos, GetWindowLongA, EnumWindows
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_4484e4, sub_4484ec
// ============================================================

BOOL __convention("regparm")sub_44843c(void* arg1, char arg2)
{
    // 第一条实际指令: BOOL result = data_5317d8
    BOOL result = data_5317d8
    
    if (*(result + 0x24) != 0)
        if (*(arg1 + 0x84) == 0)
            HWND hWnd_1 = *(arg1 + 0x24)
            int32_t var_c
            var_c.b = arg2
            EnumWindows(sub_4483cc, &hWnd_1)
            result = *(arg1 + 0x80)
            
            if (*(result + 8) != 0)
                HWND hWnd = GetWindow(hWnd_1, GW_HWNDPREV)
                hWnd_1 = hWnd
                
                if ((GetWindowLongA(hWnd, 0xffffffec) & 8) != 0)
                    hWnd_1 = 0xfffffffe
                
                result = *(arg1 + 0x80)
                int32_t i = *(result + 8) - 1
                
                if (i s>= 0)
                    do
                        result = SetWindowPos(sub_410524(*(arg1 + 0x80), i), hWnd_1, 0, 0, 0, 0, 0x13)
                        i -= 1
                    while (i != 0xffffffff)
        
        *(arg1 + 0x84) += 1
    
    return result
}
