// ============================================================
// 函数名称: sub_45e7b0
// 虚拟地址: 0x45e7b0
// WARP GUID: 9d53122c-0ce4-567d-b41b-5250d6ccc907
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45e7b0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = arg1[5]
    int32_t* eax = arg1[5]
    int32_t edi = eax[1]
    char* esi = *eax
    arg1[0x36] = arg2
    arg1[0x37] = arg3
    
    if (edi == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi = eax[1]
        esi = *eax
    
    int32_t edi_1 = edi - 1
    uint32_t ebp_2 = zx.d(*esi) << 8
    void* esi_1 = &esi[1]
    
    if (edi_1 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_1 = eax[1]
        esi_1 = *eax
    
    int32_t edi_2 = edi_1 - 1
    int32_t eax_10
    eax_10.b = *esi_1
    void* esi_2 = esi_1 + 1
    
    if (edi_2 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_2 = eax[1]
        esi_2 = *eax
    
    int32_t edi_3 = edi_2 - 1
    int32_t eax_14
    eax_14.b = *esi_2
    arg1[0x34] = eax_14
    void* esi_3 = esi_2 + 1
    
    if (edi_3 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_3 = eax[1]
        esi_3 = *eax
    
    int32_t edi_4 = edi_3 - 1
    int32_t eax_18
    eax_18.b = *esi_3
    void* esi_4 = esi_3 + 1
    arg1[7] = eax_18 << 8
    
    if (edi_4 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_4 = eax[1]
        esi_4 = *eax
    
    int32_t edi_5 = edi_4 - 1
    int32_t eax_23
    eax_23.b = *esi_4
    arg1[7] += eax_23
    void* esi_5 = esi_4 + 1
    
    if (edi_5 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_5 = eax[1]
        esi_5 = *eax
    
    int32_t edi_6 = edi_5 - 1
    int32_t eax_27
    eax_27.b = *esi_5
    void* esi_6 = esi_5 + 1
    arg1[6] = eax_27 << 8
    
    if (edi_6 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_6 = eax[1]
        esi_6 = *eax
    
    int32_t edi_7 = edi_6 - 1
    int32_t eax_32
    eax_32.b = *esi_6
    arg1[6] += eax_32
    void* esi_7 = esi_6 + 1
    
    if (edi_7 == 0)
        if (eax[3](arg2, arg3) == 0)
            return 0
        
        edi_7 = eax[1]
        esi_7 = *eax
    
    int32_t edi_8 = edi_7 - 1
    int32_t eax_36
    eax_36.b = *esi_7
    void* esi_8 = esi_7 + 1
    arg1[8] = eax_36
    int32_t* eax_38 = *arg1 + 0x18
    *eax_38 = *(arg1 + 0x192)
    eax_38[1] = arg1[6]
    eax_38[2] = arg1[7]
    eax_38[3] = arg1[8]
    *(*arg1 + 0x14) = 0x63
    (*(*arg1 + 4))(arg2, arg3)
    
    if (*(*(arg1 + 0x1aa) + 0x54) != 0)
        *(*arg1 + 0x14) = 0x39
        (**arg1)()
    
    if (arg1[7] u<= 0 || arg1[6] u<= 0 || arg1[8] s<= 0)
        *(*arg1 + 0x14) = 0x1f
        (**arg1)()
    
    if (ebp_2 + eax_10 - 8 != arg1[8] * 3)
        *(*arg1 + 0x14) = 9
        (**arg1)()
    
    if (arg1[0x35] == 0)
        arg1[0x35] = (*arg1[1])()
    
    int32_t i = 0
    void* ebp_6 = arg1[0x35]
    
    while (i s< arg1[8])
        *(ebp_6 + 4) = i
        
        if (edi_8 == 0)
            if (eax[3]() == 0)
                return 0
            
            edi_8 = eax[1]
            esi_8 = *eax
        
        int32_t edi_9 = edi_8 - 1
        int32_t eax_53
        eax_53.b = *esi_8
        *ebp_6 = eax_53
        void* esi_9 = esi_8 + 1
        
        if (edi_9 == 0)
            if (eax[3]() == 0)
                return 0
            
            edi_9 = eax[1]
            esi_9 = *eax
        
        int32_t edi_10 = edi_9 - 1
        int32_t eax_57
        eax_57.b = *esi_9
        void* esi_10 = esi_9 + 1
        *(ebp_6 + 8) = eax_57 s>> 4 & 0xf
        *(ebp_6 + 0xc) = eax_57 & 0xf
        
        if (edi_10 == 0)
            if (eax[3]() == 0)
                return 0
            
            edi_10 = eax[1]
            esi_10 = *eax
        
        edi_8 = edi_10 - 1
        int32_t eax_62
        eax_62.b = *esi_10
        esi_8 = esi_10 + 1
        *(ebp_6 + 0x10) = eax_62
        int32_t* eax_64 = *arg1 + 0x18
        *eax_64 = *ebp_6
        eax_64[1] = *(ebp_6 + 8)
        eax_64[2] = *(ebp_6 + 0xc)
        eax_64[3] = *(ebp_6 + 0x10)
        *(*arg1 + 0x14) = 0x64
        (*(*arg1 + 4))()
        i += 1
        ebp_6 += 0x54
    
    *(*(arg1 + 0x1aa) + 0x54) = 1
    *eax = esi_8
    eax[1] = edi_8
    return 1
}
