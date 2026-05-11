// ============================================================
// 函数名称: sub_45eb30
// 虚拟地址: 0x45eb30
// WARP GUID: b3904a81-c59e-5fd0-839c-0fef8a213213
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45eb30(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[5]
    int32_t* eax = arg1[5]
    int32_t ebp = eax[1]
    char* edi = *eax
    
    if (*(*(arg1 + 0x1aa) + 0x54) == 0)
        *(*arg1 + 0x14) = 0x3d
        (**arg1)()
    
    if (ebp == 0)
        if (eax[3]() == 0)
            return 0
        
        ebp = eax[1]
        edi = *eax
    
    int32_t ebp_1 = ebp - 1
    uint32_t esi_2 = zx.d(*edi) << 8
    void* edi_1 = &edi[1]
    
    if (ebp_1 == 0)
        if (eax[3]() == 0)
            return 0
        
        ebp_1 = eax[1]
        edi_1 = *eax
    
    int32_t ebp_2 = ebp_1 - 1
    int32_t eax_11
    eax_11.b = *edi_1
    void* edi_2 = edi_1 + 1
    
    if (ebp_2 == 0)
        if (eax[3]() == 0)
            return 0
        
        ebp_2 = eax[1]
        edi_2 = *eax
    
    int32_t ebp_3 = ebp_2 - 1
    int32_t eax_15
    eax_15.b = *edi_2
    void* edi_3 = edi_2 + 1
    
    if (esi_2 + eax_11 != eax_15 * 2 + 6 || eax_15 s< 1 || eax_15 s> 4)
        *(*arg1 + 0x14) = 9
        (**arg1)()
    
    void* eax_17 = *arg1
    *(eax_17 + 0x14) = 0x66
    *(eax_17 + 0x18) = eax_15
    (*(*arg1 + 4))()
    *(arg1 + 0x13a) = eax_15
    int32_t var_28_1 = 0
    void* var_14_1 = arg1 + 0x13e
    int32_t var_20
    int32_t var_1c
    
    if (0 s< eax_15)
        do
            if (ebp_3 == 0)
                if (eax[3](var_28_1, eax_15, var_20, var_1c, eax, var_14_1) == 0)
                    return 0
                
                ebp_3 = eax[1]
                edi_3 = *eax
            
            int32_t ebp_4 = ebp_3 - 1
            int32_t eax_23
            eax_23.b = *edi_3
            var_1c = eax_23
            void* edi_4 = edi_3 + 1
            
            if (ebp_4 == 0)
                if (eax[3](var_28_1, eax_15, var_20, var_1c, eax, var_14_1) == 0)
                    return 0
                
                ebp_4 = eax[1]
                edi_4 = *eax
            
            ebp_3 = ebp_4 - 1
            int32_t eax_27
            eax_27.b = *edi_4
            edi_3 = edi_4 + 1
            var_20 = eax_27
            int32_t eax_28 = 0
            void* esi_4 = arg1[0x35]
            
            while (true)
                if (eax_28 s>= arg1[8])
                    void* eax_29 = *arg1
                    *(eax_29 + 0x14) = 5
                    *(eax_29 + 0x18) = var_1c
                    (**arg1)(var_28_1, eax_15, var_20, var_1c, eax, var_14_1)
                    break
                
                if (var_1c == *esi_4)
                    break
                
                eax_28 += 1
                esi_4 += 0x54
            
            *var_14_1 = esi_4
            *(esi_4 + 0x14) = var_20 s>> 4 & 0xf
            *(esi_4 + 0x18) = var_20 & 0xf
            int32_t* eax_35 = *arg1 + 0x18
            *eax_35 = var_1c
            eax_35[1] = *(esi_4 + 0x14)
            eax_35[2] = *(esi_4 + 0x18)
            *(*arg1 + 0x14) = 0x67
            (*(*arg1 + 4))(var_28_1, eax_15, var_20, var_1c, eax, var_14_1)
            var_28_1 += 1
            var_14_1 += 4
        while (var_28_1 s< eax_15)
    
    if (ebp_3 == 0)
        if (eax[3](var_28_1, eax_15, var_20, var_1c, eax, var_14_1) == 0)
            return 0
        
        ebp_3 = eax[1]
        edi_3 = *eax
    
    int32_t ebp_5 = ebp_3 - 1
    int32_t eax_42
    eax_42.b = *edi_3
    void* edi_5 = edi_3 + 1
    *(arg1 + 0x182) = eax_42
    
    if (ebp_5 == 0)
        if (eax[3](var_28_1, eax_15, eax_42, var_1c, eax, var_14_1) == 0)
            return 0
        
        ebp_5 = eax[1]
        edi_5 = *eax
    
    int32_t ebp_6 = ebp_5 - 1
    int32_t eax_46
    eax_46.b = *edi_5
    void* edi_6 = edi_5 + 1
    *(arg1 + 0x186) = eax_46
    
    if (ebp_6 == 0)
        if (eax[3](var_28_1, eax_15, eax_46, var_1c, eax, var_14_1) == 0)
            return 0
        
        ebp_6 = eax[1]
        edi_6 = *eax
    
    int32_t eax_50
    eax_50.b = *edi_6
    *(arg1 + 0x18a) = eax_50 s>> 4 & 0xf
    *(arg1 + 0x18e) = eax_50 & 0xf
    int32_t* eax_52 = *arg1 + 0x18
    *eax_52 = *(arg1 + 0x182)
    eax_52[1] = *(arg1 + 0x186)
    eax_52[2] = *(arg1 + 0x18a)
    eax_52[3] = *(arg1 + 0x18e)
    *(*arg1 + 0x14) = 0x68
    (*(*arg1 + 4))(var_28_1, eax_15, eax_50, var_1c, eax, var_14_1)
    *(*(arg1 + 0x1aa) + 0x58) = 0
    arg1[0x23] += 1
    *eax = edi_6 + 1
    eax[1] = ebp_6 - 1
    return 1
}
