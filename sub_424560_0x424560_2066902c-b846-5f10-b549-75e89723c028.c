// ============================================================
// 函数名称: sub_424560
// 虚拟地址: 0x424560
// WARP GUID: 2066902c-b846-5f10-b549-75e89723c028
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject, GetTextMetricsA, GetSystemMetrics, ReleaseDC, GetDC
// [内部子函数调用]: sub_42affc, sub_418900
// [被调用的父级函数]: sub_423e50, sub_424524, sub_4246d8
// ============================================================

int32_t __convention("regparm")sub_424560(int32_t* arg1)
{
    // 第一条实际指令: HDC eax = GetDC(nullptr)
    HDC eax = GetDC(nullptr)
    TEXTMETRICA lptm
    GetTextMetricsA(eax, &lptm)
    HGDIOBJ h = SelectObject(eax, sub_418900(arg1[0x16]))
    TEXTMETRICA lptm_1
    GetTextMetricsA(eax, &lptm_1)
    SelectObject(eax, h)
    ReleaseDC(nullptr, eax)
    int32_t ebx_2
    
    if (*data_53040c == 0)
        int32_t tmHeight_1 = lptm.tmHeight
        int32_t tmHeight = lptm_1.tmHeight
        
        if (tmHeight_1 s> tmHeight)
            tmHeight_1 = tmHeight
        
        int32_t eax_7 = GetSystemMetrics(SM_CYBORDER) << 2
        
        if (tmHeight_1 s< 0)
            tmHeight_1 += 3
        
        ebx_2 = eax_7 + (tmHeight_1 s>> 2)
    else
        int32_t ebx_1
        
        if (arg1[0x4e].b == 0)
            ebx_1 = 6
        else
            ebx_1 = 8
        
        ebx_2 = GetSystemMetrics(SM_CYBORDER) * ebx_1
    
    return sub_42affc(arg1, lptm_1.tmHeight + ebx_2)
}
