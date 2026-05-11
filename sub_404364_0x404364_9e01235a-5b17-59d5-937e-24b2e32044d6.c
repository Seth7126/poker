// ============================================================
// 函数名称: sub_404364
// 虚拟地址: 0x404364
// WARP GUID: 9e01235a-5b17-59d5-937e-24b2e32044d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_50dbd4, sub_4ae168, sub_4b44d0, sub_479f44, sub_451ff4, sub_451e20, sub_49de5c, sub_45174d, sub_49e604, sub_4ad27c, sub_4b526c, sub_466adc, sub_49df54
// ============================================================

void __convention("regparm")sub_404364(char* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if (arg2 == 0)
        return 
    
    char* esi_1 = arg1
    void* edi_1 = arg2
    int32_t ecx_1 = *(edi_1 - 4)
    void* var_10_1 = edi_1
    int32_t edx = *(esi_1 - 4)
    
    if (edx - 1 s< 0)
        return 
    
    arg1.b = *esi_1
    void* esi_2 = &esi_1[1]
    int32_t ecx_2 = ecx_1 - (edx - 1)
    bool cond:1_1 = ecx_1 != edx - 1
    bool cond:3_1 = ecx_1 == edx - 1
    
    if (ecx_1 s<= edx - 1)
        return 
    
    while (true)
        if (ecx_2 != 0)
            char temp2_1 = *edi_1
            cond:1_1 = arg1.b != temp2_1
            cond:3_1 = arg1.b == temp2_1
            edi_1 += 1
            ecx_2 -= 1
            
            if (arg1.b != temp2_1)
                continue
        
        if (cond:1_1)
            break
        
        void* var_14_1 = esi_2
        void* var_18_1 = edi_1
        int32_t i = edx - 1
        
        while (i != 0)
            char temp3_1 = *esi_2
            char temp4_1 = *edi_1
            cond:1_1 = temp3_1 != temp4_1
            cond:3_1 = temp3_1 == temp4_1
            esi_2 += 1
            edi_1 += 1
            i -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        edi_1 = var_18_1
        esi_2 = var_14_1
        
        if (cond:3_1)
            break
}
