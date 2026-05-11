// ============================================================
// 函数名称: sub_449030
// 虚拟地址: 0x449030
// WARP GUID: 81a6cb97-5aed-5dbc-8020-9c9696329def
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA, GetWindowLongA, GetParent, GetCapture
// [内部子函数调用]: sub_428990, sub_4318d0
// [被调用的父级函数]: sub_449184
// ============================================================

int32_t __convention("regparm")sub_449030(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t eax = arg2[1]
    
    if (eax u>= 0x100 && eax u<= 0x108)
        HWND hWnd = GetCapture()
        
        if (hWnd != 0)
            if (GetWindowLongA(hWnd, 0xfffffffa) == data_5314dc
                    && SendMessageA(hWnd, arg2[1] + 0xbc00, arg2[2], arg2[3]) != 0)
                result.b = 1
        else
            HWND hWnd_1 = *arg2
            int32_t* eax_1 = *(arg1 + 0x38)
            
            if (eax_1 == 0 || hWnd_1 != eax_1[0x8f])
                while (sub_428990(hWnd_1) == 0)
                    if (hWnd_1 == 0)
                        break
                    
                    hWnd_1 = GetParent(hWnd_1)
                
                if (hWnd_1 == 0)
                    hWnd_1 = *arg2
            else
                hWnd_1 = sub_4318d0(eax_1)
            
            if (SendMessageA(hWnd_1, arg2[1] + 0xbc00, arg2[2], arg2[3]) != 0)
                result.b = 1
    
    return result
}
