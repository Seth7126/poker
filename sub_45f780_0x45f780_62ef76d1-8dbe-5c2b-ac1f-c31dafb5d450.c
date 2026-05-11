// ============================================================
// 函数名称: sub_45f780
// 虚拟地址: 0x45f780
// WARP GUID: 62ef76d1-8dbe-5c2b-ac1f-c31dafb5d450
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460314
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45f780(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[5]
    int32_t* eax = arg1[5]
    int32_t edi = eax[1]
    char* esi = *eax
    
    if (edi == 0)
        if (eax[3]() == 0)
            return 0
        
        edi = eax[1]
        esi = *eax
    
    int32_t edi_1 = edi - 1
    int32_t eax_6
    eax_6.b = *esi
    void* esi_1 = &esi[1]
    int32_t eax_7 = eax_6 << 8
    
    if (edi_1 == 0)
        if (eax[3](eax_7) == 0)
            return 0
        
        edi_1 = eax[1]
        esi_1 = *eax
    
    int32_t edi_2 = edi_1 - 1
    int32_t eax_11
    eax_11.b = *esi_1
    void* esi_2 = esi_1 + 1
    int32_t i = eax_7 + eax_11 - 2
    
    while (i s> 0)
        int32_t j
        int32_t var_20
        int16_t* var_1c
        void* var_14
        
        if (edi_2 == 0)
            if (eax[3](i, j, var_20, var_1c, eax, var_14) == 0)
                return 0
            
            edi_2 = eax[1]
            esi_2 = *eax
        
        edi_2 -= 1
        int32_t ebx_1
        ebx_1.b = *esi_2
        esi_2 += 1
        int32_t ebx_2 = ebx_1 & 0xf
        var_20 = ebx_1 s>> 4
        void* eax_17 = *arg1
        *(eax_17 + 0x14) = 0x50
        *(eax_17 + 0x18) = ebx_2
        *(eax_17 + 0x1c) = var_20
        (*(*arg1 + 4))(i, j, var_20, var_1c, eax, var_14)
        
        if (ebx_2 s>= 4)
            void* eax_19 = *arg1
            *(eax_19 + 0x14) = 0x1e
            *(eax_19 + 0x18) = ebx_2
            (**arg1)()
        
        if (arg1[ebx_2 + 0x28] == 0)
            arg1[ebx_2 + 0x28] = sub_460314(arg1)
        
        var_1c = arg1[ebx_2 + 0x28]
        j = 0
        var_14 = &data_52eed0
        
        do
            int16_t ebx_5
            
            if (var_20 == 0)
                if (edi_2 == 0)
                    if (eax[3]() == 0)
                        return 0
                    
                    edi_2 = eax[1]
                    esi_2 = *eax
                
                edi_2 -= 1
                ebx_5.b = *esi_2
                esi_2 += 1
            else
                if (edi_2 == 0)
                    if (eax[3]() == 0)
                        return 0
                    
                    edi_2 = eax[1]
                    esi_2 = *eax
                
                int32_t edi_3 = edi_2 - 1
                int32_t ebx_3
                ebx_3.b = *esi_2
                void* esi_3 = esi_2 + 1
                
                if (edi_3 == 0)
                    if (eax[3]() == 0)
                        return 0
                    
                    edi_3 = eax[1]
                    esi_3 = *eax
                
                edi_2 = edi_3 - 1
                int16_t eax_29
                eax_29.b = *esi_3
                ebx_5 = (ebx_3 << 8).w + eax_29
                esi_2 = esi_3 + 1
            
            var_1c[*var_14] = ebx_5
            j += 1
            var_14 += 4
        while (j s< 0x40)
        
        if (*(*arg1 + 0x68) s>= 2)
            j = 0
            int16_t* ebx_6 = var_1c
            
            do
                uint32_t* eax_36 = *arg1 + 0x18
                *eax_36 = zx.d(*ebx_6)
                eax_36[1] = zx.d(ebx_6[1])
                eax_36[2] = zx.d(ebx_6[2])
                eax_36[3] = zx.d(ebx_6[3])
                eax_36[4] = zx.d(ebx_6[4])
                eax_36[5] = zx.d(ebx_6[5])
                eax_36[6] = zx.d(ebx_6[6])
                eax_36[7] = zx.d(ebx_6[7])
                *(*arg1 + 0x14) = 0x5c
                (*(*arg1 + 4))()
                j += 8
                ebx_6 = &ebx_6[8]
            while (j s< 0x40)
        
        i -= 0x41
        
        if (var_20 != 0)
            i -= 0x40
    
    *eax = esi_2
    eax[1] = edi_2
    return 1
}
