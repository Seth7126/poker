// ============================================================
// 函数名称: sub_4314c8
// 虚拟地址: 0x4314c8
// WARP GUID: 89007972-fd2e-5d33-a85c-c0f6d634a1a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, ScrollWindow, IsWindowVisible
// [内部子函数调用]: sub_42e3c8, sub_42e838, sub_403248, sub_42e7fc
// [被调用的父级函数]: sub_441770
// ============================================================

int32_t* __convention("regparm")sub_4314c8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: HWND hWnd = *(arg1 + 0x14c)
    HWND hWnd = *(arg1 + 0x14c)
    BOOL eax
    
    if (hWnd != 0)
        eax = IsWindowVisible(hWnd)
    
    if (hWnd != 0 && eax != 0)
        eax.b = 1
    else
        eax = 0
    
    char var_14 = eax.b
    
    if (var_14 != 0)
        ScrollWindow(*(arg1 + 0x14c), arg2, arg3, nullptr, nullptr)
    
    int32_t esi_1 = sub_42e838(arg1) - 1
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t ebp_1 = 0
        int32_t i
        
        do
            int32_t* eax_7 = sub_42e7fc(arg1, ebp_1)
            
            if (sub_403248(eax_7, 0x427f2c) == 0 || eax_7[0x53] == 0)
                eax_7[0xc] += arg2
                eax_7[0xd] += arg3
            else if (var_14 == 0)
                SetWindowPos(eax_7[0x53], nullptr, eax_7[0xc] + arg2, eax_7[0xd] + arg3, eax_7[0xe], 
                    eax_7[0xf], 0x14)
            
            ebp_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return sub_42e3c8()
}
