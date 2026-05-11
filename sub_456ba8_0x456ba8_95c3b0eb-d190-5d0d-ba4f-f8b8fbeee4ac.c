// ============================================================
// 函数名称: sub_456ba8
// 虚拟地址: 0x456ba8
// WARP GUID: 95c3b0eb-d190-5d0d-ba4f-f8b8fbeee4ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457a94
// [被调用的父级函数]: sub_457900
// ============================================================

int32_t __convention("regparm")sub_456ba8(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    arg1.b = *(ebx + 0x182) == 0
    void* eax = arg1 & 1
    void* ebp = *(ebx + 0x1ae)
    int32_t eax_1 = 0
    
    if (eax == 0)
        int32_t edx_1 = *(ebx + 0x186)
        
        if (edx_1 s< *(ebx + 0x182) || edx_1 s>= 0x40)
            eax_1 = 1
        
        if (*(ebx + 0x13a) != 1)
            eax_1 = 1
    else if (*(ebx + 0x186) != 0)
        eax_1 = 1
    
    int32_t edx_2 = *(ebx + 0x18a)
    
    if (edx_2 != 0 && edx_2 - 1 != *(ebx + 0x18e))
        eax_1 = 1
    
    if (*(ebx + 0x18e) s> 0xd)
        eax_1 = 1
    
    if (eax_1 != 0)
        void* eax_2 = *ebx
        *(eax_2 + 0x14) = 0xe
        *(eax_2 + 0x18) = *(ebx + 0x182)
        *(eax_2 + 0x1c) = *(ebx + 0x186)
        *(eax_2 + 0x20) = *(ebx + 0x18a)
        *(eax_2 + 0x24) = *(ebx + 0x18e)
        (**ebx)(eax)
    
    int32_t i = 0
    void* var_18 = ebx + 0x13e
    int32_t var_1c
    
    while (i s< *(ebx + 0x13a))
        var_1c = *(*var_18 + 4)
        int32_t* esi_3 = (var_1c << 8) + ebx[0x27]
        
        if (eax == 0 && *esi_3 s< 0)
            void* eax_5 = *ebx
            *(eax_5 + 0x14) = 0x6f
            *(eax_5 + 0x18) = var_1c
            *(eax_5 + 0x1c) = 0
            (*(*ebx + 4))(eax, i, var_1c, var_18)
        
        int32_t j = *(ebx + 0x182)
        void* esi_4 = &esi_3[j]
        
        while (j s<= *(ebx + 0x186))
            int32_t eax_8
            
            if (*esi_4 s>= 0)
                eax_8 = *esi_4
            else
                eax_8 = 0
            
            if (eax_8 != *(ebx + 0x18a))
                void* eax_9 = *ebx
                *(eax_9 + 0x14) = 0x6f
                *(eax_9 + 0x18) = var_1c
                *(eax_9 + 0x1c) = j
                (*(*ebx + 4))(eax, i, var_1c, var_18)
            
            *esi_4 = *(ebx + 0x18e)
            j += 1
            esi_4 += 4
        
        i += 1
        var_18 += 4
    
    if (*(ebx + 0x18a) != 0)
        if (eax == 0)
            *(ebp + 4) = sub_4574bc
        else
            *(ebp + 4) = sub_4573a4
    else if (eax == 0)
        *(ebp + 4) = sub_457104
    else
        *(ebp + 4) = sub_456eb8
    
    int32_t i_1 = 0
    void* var_14 = ebp + 0x18
    void* edi_1 = ebx + 0x13e
    
    while (i_1 s< *(ebx + 0x13a))
        void* eax_13 = *edi_1
        
        if (eax == 0)
            int32_t esi_6 = *(eax_13 + 0x18)
            
            if (esi_6 s< 0 || esi_6 s>= 4 || ebx[esi_6 + 0x30] == 0)
                void* eax_17 = *ebx
                *(eax_17 + 0x14) = 0x31
                *(eax_17 + 0x18) = esi_6
                (**ebx)(eax, i_1, var_1c, var_18, var_14)
            
            sub_457a94(ebx, ebx[esi_6 + 0x30], ebp + (esi_6 << 2) + 0x2c)
            *(ebp + 0x3c) = *(ebp + (esi_6 << 2) + 0x2c)
        else if (*(ebx + 0x18a) == 0)
            int32_t esi_5 = *(eax_13 + 0x14)
            
            if (esi_5 s< 0 || esi_5 s>= 4 || ebx[esi_5 + 0x2c] == 0)
                void* eax_14 = *ebx
                *(eax_14 + 0x14) = 0x31
                *(eax_14 + 0x18) = esi_5
                (**ebx)(eax, i_1, var_1c, var_18, var_14)
            
            sub_457a94(ebx, ebx[esi_5 + 0x2c], ebp + (esi_5 << 2) + 0x2c)
        
        *var_14 = 0
        i_1 += 1
        var_14 += 4
        edi_1 += 4
    
    *(ebp + 0xc) = 0
    *(ebp + 8) = 0
    *(ebp + 0x10) = 0
    *(ebp + 0x14) = 0
    *(ebp + 0x28) = ebx[0x44]
    return 0
}
