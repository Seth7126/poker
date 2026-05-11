// ============================================================
// 函数名称: sub_449750
// 虚拟地址: 0x449750
// WARP GUID: d3f24ed6-4412-56e4-9f7b-6f9754293da6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WinHelpA, PostMessageA
// [内部子函数调用]: sub_40423c, sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_449888, sub_448668, sub_44987c
// ============================================================

int32_t __convention("regparm")sub_449750(void* arg1, int16_t arg2, LPARAM arg3)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    char var_10 = 1
    int32_t* edi = *(data_5317dc + 0x5c)
    
    if (edi != 0 && *(edi + 0x292) != 0)
        edi[0xa5]
        result = edi[0xa4](&var_10)
    else if (*(arg1 + 0xca) != 0)
        *(arg1 + 0xcc)
        result = (*(arg1 + 0xc8))(&var_10)
    
    if (var_10 != 0)
        if (edi != 0 && sub_431bcc(edi) != 0 && edi[0x89] != 0)
            BOOL eax_13 = WinHelpA(sub_4318d0(edi), sub_40423c(edi[0x89]), zx.d(arg2), arg3)
            int32_t eax_14 = neg.d(eax_13)
            return neg.d(sbb.d(eax_14, eax_14, eax_13 != 0))
        
        if (*(arg1 + 0x40) != 0)
            HWND hWndMain = *(arg1 + 0x24)
            int32_t* eax_17 = *(arg1 + 0x38)
            
            if (eax_17 != 0)
                hWndMain = sub_4318d0(eax_17)
            
            BOOL eax_23 = WinHelpA(hWndMain, sub_40423c(*(arg1 + 0x40)), zx.d(arg2), arg3)
            int32_t eax_24 = neg.d(eax_23)
            return neg.d(sbb.d(eax_24, eax_24, eax_23 != 0))
        
        if (*(arg1 + 0x94) == 0)
            PostMessageA(*(arg1 + 0x24), 0xb01f, zx.d(arg2), arg3)
    
    return result
}
