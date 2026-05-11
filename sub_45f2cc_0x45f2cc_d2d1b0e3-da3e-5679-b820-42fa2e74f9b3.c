// ============================================================
// 函数名称: sub_45f2cc
// 虚拟地址: 0x45f2cc
// WARP GUID: d2d1b0e3-da3e-5679-b820-42fa2e74f9b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45f2cc(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[5]
    int32_t* eax = arg1[5]
    int32_t ebp = eax[1]
    char* edi = *eax
    
    if (ebp == 0)
        if (eax[3]() == 0)
            return 0
        
        ebp = eax[1]
        edi = *eax
    
    int32_t ebp_1 = ebp - 1
    int32_t eax_6
    eax_6.b = *edi
    void* edi_1 = &edi[1]
    int32_t eax_7 = eax_6 << 8
    
    if (ebp_1 == 0)
        if (eax[3](eax_7) == 0)
            return 0
        
        ebp_1 = eax[1]
        edi_1 = *eax
    
    int32_t ebp_2 = ebp_1 - 1
    int32_t eax_11
    eax_11.b = *edi_1
    void* edi_2 = edi_1 + 1
    int32_t i = eax_7 + eax_11 - 2
    
    while (i s> 0)
        int32_t var_18
        
        if (ebp_2 == 0)
            if (eax[3](i, var_18, eax) == 0)
                return 0
            
            ebp_2 = eax[1]
            edi_2 = *eax
        
        uint32_t esi_1 = zx.d(*edi_2)
        void* edi_3 = edi_2 + 1
        int32_t ebp_3 = ebp_2 - 1
        
        if (ebp_3 == 0)
            if (eax[3](i, var_18, eax) == 0)
                return 0
            
            ebp_3 = eax[1]
            edi_3 = *eax
        
        ebp_2 = ebp_3 - 1
        int32_t eax_18
        eax_18.b = *edi_3
        edi_2 = edi_3 + 1
        var_18 = eax_18
        i -= 2
        void* eax_19 = *arg1
        *(eax_19 + 0x14) = 0x4e
        *(eax_19 + 0x18) = esi_1
        *(eax_19 + 0x1c) = var_18
        (*(*arg1 + 4))(i, var_18, eax)
        
        if (esi_1 s< 0 || esi_1 s>= 0x20)
            void* eax_22 = *arg1
            *(eax_22 + 0x14) = 0x1a
            *(eax_22 + 0x18) = esi_1
            (**arg1)()
        
        if (esi_1 s< 0x10)
            *(arg1 + esi_1 + 0xe0) = var_18.b & 0xf
            char eax_25 = (var_18 s>> 4).b
            *(arg1 + esi_1 + 0xf0) = eax_25
            
            if (eax_25 u< *(arg1 + esi_1 + 0xe0))
                void* eax_26 = *arg1
                *(eax_26 + 0x14) = 0x1b
                *(eax_26 + 0x18) = var_18
                (**arg1)()
        else
            *(arg1 + esi_1 + 0xf0) = var_18.b
    
    *eax = edi_2
    eax[1] = ebp_2
    return 1
}
