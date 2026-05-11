// ============================================================
// 函数名称: sub_448dc0
// 虚拟地址: 0x448dc0
// WARP GUID: 14827891-b044-5bbc-9730-0dc79708fe98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsIconic, SetWindowPos, SetActiveWindow, DefWindowProcA, SetFocus
// [内部子函数调用]: sub_447f14, sub_444050, sub_4462f4, sub_4484f4, sub_4318d0
// [被调用的父级函数]: sub_448668
// ============================================================

BOOL __convention("regparm")sub_448dc0(void* arg1)
{
    // 第一条实际指令: BOOL result = IsIconic(*(arg1 + 0x24))
    BOOL result = IsIconic(*(arg1 + 0x24))
    
    if (result != 0)
        SetActiveWindow(*(arg1 + 0x24))
        
        if (*(arg1 + 0x38) == 0 || (*(arg1 + 0x4b) == 0 && *(*(arg1 + 0x38) + 0x47) == 0))
            sub_447f14(*(arg1 + 0x24), SW_RESTORE)
        else
            DefWindowProcA(*(arg1 + 0x24), 0x112, 0xf120, 0)
        
        int32_t eax_7 = (*data_5302cc)(1, 0, 0, 0x40)
        int32_t eax_8 = eax_7 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_7 s>> 1 s< 0)
            eax_8 = adc.d(eax_8, 0, c_1)
        
        int32_t eax_11 = (*data_5302cc)(0, eax_8)
        int32_t X = eax_11 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_11 s>> 1 s< 0)
            X = adc.d(X, 0, c_2)
        
        SetWindowPos(*(arg1 + 0x24), nullptr, X)
        int32_t* eax_13 = *(arg1 + 0x38)
        
        if (eax_13 != 0 && *(eax_13 + 0x213) == 1 && *(eax_13 + 0x47) == 0)
            sub_444050(eax_13, 0)
            sub_4462f4(*(arg1 + 0x38))
        
        sub_4484f4(arg1)
        result = data_5317dc
        int32_t* esi_1 = *(result + 0x58)
        
        if (esi_1 != 0)
            result = SetFocus(sub_4318d0(esi_1))
        
        if (*(arg1 + 0xfa) != 0)
            *(arg1 + 0xfc)
            return (*(arg1 + 0xf8))()
    
    return result
}
