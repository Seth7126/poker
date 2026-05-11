// ============================================================
// 函数名称: sub_4666ec
// 虚拟地址: 0x4666ec
// WARP GUID: bf761358-55d1-5a4a-8553-fe43b1c2da09
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c, sub_4533f4
// [被调用的父级函数]: sub_4668d0, sub_4653e8
// ============================================================

void* __convention("regparm")sub_4666ec(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t* var_844 = arg1
    int32_t* var_844 = arg1
    void var_838
    sub_4533f4(&var_838, 0, 0x21)
    int32_t var_814[0x101]
    sub_4533f4(&var_814, 0, 0x404)
    int32_t i = 0
    int32_t var_410[0x101]
    int32_t (* eax)[0x101] = &var_410
    
    do
        *eax = 0xffffffff
        i += 1
        eax = &(*eax)[1]
    while (i s< 0x101)
    
    *(arg3 + 0x400) = 1
    
    while (true)
        int32_t i_5 = 0xffffffff
        int32_t edi_1 = 0x3b9aca00
        int32_t i_1 = 0
        void* edx_1 = arg3
        
        do
            int32_t ecx = *edx_1
            
            if (ecx != 0 && edi_1 s>= ecx)
                edi_1 = ecx
                i_5 = i_1
            
            i_1 += 1
            edx_1 += 4
        while (i_1 s<= 0x100)
        
        int32_t i_6 = 0xffffffff
        int32_t edi_2 = 0x3b9aca00
        int32_t i_2 = 0
        void* ecx_1 = arg3
        
        do
            int32_t esi_1 = *ecx_1
            
            if (esi_1 != 0 && edi_2 s>= esi_1 && i_5 != i_2)
                edi_2 = esi_1
                i_6 = i_2
            
            i_2 += 1
            ecx_1 += 4
        while (i_2 s<= 0x100)
        
        if (i_6 s< 0)
            break
        
        *(arg3 + (i_5 << 2)) += *(arg3 + (i_6 << 2))
        *(arg3 + (i_6 << 2)) = 0
        var_814[i_5] += 1
        
        while (true)
            int32_t i_8 = var_410[i_5]
            
            if (i_8 s< 0)
                break
            
            i_5 = i_8
            var_814[i_5] += 1
        
        var_410[i_5] = i_6
        var_814[i_6] += 1
        
        while (true)
            int32_t i_7 = var_410[i_6]
            
            if (i_7 s< 0)
                break
            
            i_6 = i_7
            var_814[i_6] += 1
    
    int32_t i_3 = 0
    int32_t (* esi_2)[0x101] = &var_814
    
    do
        int32_t eax_1 = *esi_2
        
        if (eax_1 != 0)
            if (eax_1 s> 0x20)
                *(*var_844 + 0x14) = 0x26
                (**var_844)()
            
            int32_t ecx_6 = *esi_2
            *(&var_838 + ecx_6) += 1
        
        i_3 += 1
        esi_2 = &(*esi_2)[1]
    while (i_3 s<= 0x100)
    
    int32_t ebx_1 = 0x20
    void var_818
    void* esi_3 = &var_818
    
    while (true)
        if (*esi_3 u> 0)
            int32_t eax_3 = ebx_1 - 2
            void* edx_4 = &var_844 + eax_3 + 0xc
            
            while (*edx_4 == 0)
                eax_3 -= 1
                edx_4 -= 1
            
            *esi_3 -= 2
            *(esi_3 - 1) += 1
            char var_837[0x1f]
            var_837[eax_3] += 2
            *(&var_838 + eax_3) -= 1
        else
            ebx_1 -= 1
            esi_3 -= 1
            
            if (ebx_1 s<= 0x10)
                break
    
    void* eax_4 = &var_844 + ebx_1 + 0xc
    
    while (*eax_4 == 0)
        ebx_1 -= 1
        eax_4 -= 1
    
    *(&var_838 + ebx_1) -= 1
    sub_45340c(arg2, &var_838, 0x11)
    int32_t edi_3 = 0
    
    for (int32_t i_4 = 1; i_4 s<= 0x20; i_4 += 1)
        int32_t j = 0
        char* esi_4 = arg2 + edi_3 + 0x11
        int32_t (* edx_6)[0x101] = &var_814
        
        do
            if (i_4 == *edx_6)
                *esi_4 = j.b
                edi_3 += 1
                esi_4 = &esi_4[1]
            
            j += 1
            edx_6 = &(*edx_6)[1]
        while (j s<= 0xff)
    
    *(arg2 + 0x111) = 0
    return arg2
}
