// ============================================================
// 函数名称: sub_420d48
// 虚拟地址: 0x420d48
// WARP GUID: 1763e569-4061-50b4-934d-e42eacff464c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA, GetProcAddress
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

HMODULEsub_420d48()
{
    // 第一条实际指令: HMODULE hModule = GetModuleHandleA("comctl32.dll")
    HMODULE hModule = GetModuleHandleA("comctl32.dll")
    
    if (hModule != 0)
        data_531734 = GetProcAddress(hModule, "InitializeFlatSB")
        data_531738 = GetProcAddress(hModule, "UninitializeFlatSB")
        data_53172c = GetProcAddress(hModule, "FlatSB_GetScrollProp")
        data_531730 = GetProcAddress(hModule, "FlatSB_SetScrollProp")
        int32_t eax_4 = GetProcAddress(hModule, "FlatSB_EnableScrollBar")
        data_531708 = eax_4
        
        if (eax_4 == 0)
            data_531708 = EnableScrollBar
        
        int32_t eax_5 = GetProcAddress(hModule, "FlatSB_ShowScrollBar")
        data_53170c = eax_5
        
        if (eax_5 == 0)
            data_53170c = ShowScrollBar
        
        int32_t eax_6 = GetProcAddress(hModule, "FlatSB_GetScrollRange")
        data_531710 = eax_6
        
        if (eax_6 == 0)
            data_531710 = GetScrollRange
        
        int32_t eax_7 = GetProcAddress(hModule, "FlatSB_GetScrollInfo")
        data_531714 = eax_7
        
        if (eax_7 == 0)
            data_531714 = GetScrollInfo
        
        int32_t eax_8 = GetProcAddress(hModule, "FlatSB_GetScrollPos")
        data_531718 = eax_8
        
        if (eax_8 == 0)
            data_531718 = GetScrollPos
        
        int32_t eax_9 = GetProcAddress(hModule, "FlatSB_SetScrollPos")
        data_53171c = eax_9
        
        if (eax_9 == 0)
            data_53171c = SetScrollPos
        
        int32_t eax_10 = GetProcAddress(hModule, "FlatSB_SetScrollInfo")
        data_531720 = eax_10
        
        if (eax_10 == 0)
            data_531720 = SetScrollInfo
        
        hModule = GetProcAddress(hModule, "FlatSB_SetScrollRange")
        data_531724 = hModule
        
        if (hModule == 0)
            hModule = SetScrollRange
            data_531724 = SetScrollRange
    
    return hModule
}
