// ============================================================
// 函数名称: sub_50c5e0
// 虚拟地址: 0x50c5e0
// WARP GUID: 1ada84d7-a791-55ef-a3e5-6bd52bec37f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512fcc, sub_47a180, sub_47a1c0, sub_404138, sub_40401c, sub_5140f8, sub_4cda5c, sub_5148a0, sub_47b650, sub_4c0984, sub_403e1c, sub_403010, sub_5164b0, sub_403e90, sub_483950, sub_404080, sub_47ab08, sub_50a19c, sub_47b488, sub_50d2f4, sub_403df8, sub_47a010, sub_508844, sub_50d318, sub_47b304, sub_47a9a0
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_50732c, sub_50b1ac, sub_5168a7, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_50c5e0(char arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_148 = ebx
    int32_t esi
    int32_t var_14c = esi
    int32_t edi
    int32_t var_150 = edi
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x14)
    int32_t var_20 = 0
    int32_t var_24 = 0
    int32_t* var_154 = &var_4
    int32_t (* var_158)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_7 = 0
    
    if (arg1 != 0)
        if (arg2 != 0)
            *data_530454
            
            if (sub_50d2f4() == 0)
                *(*data_530454 + 0x344) = 1
            
            *(*data_530454 + 0x1e0) = 0
            *(*data_530454 + 0x1e1) = 0
            sub_5164b0(*data_530454)
            
            if (*(*data_530454 + 0x54) s<= 1)
                int32_t i = 1
                void* var_2c_1 = data_530458
                void* esi_1 = data_5304d8
                
                do
                    if (*(*data_530454 + 0x350) != i)
                        bool o_1 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                        
                        if (o_1)
                            sub_403010()
                            noreturn
                        
                        *(*data_530454 + i * 0x3a4 - 0x50) = 3
                    
                    sub_47b304(*var_2c_1, *data_530438, *data_530304, 1)
                    sub_47b304(*esi_1, *data_530438, *data_530304, 2)
                    i += 1
                    esi_1 += 4
                    var_2c_1 += 4
                while (i != 9)
        
        sub_5164b0(*data_530454)
        sub_47b488(*data_530080, *data_530438, *data_530304, 1)
    
    if (*(*data_530454 + 0x54) s<= 1)
        int32_t var_c
        sub_47a9a0(*data_530424, *data_530438, *data_530304, &var_c)
        int32_t temp1_1 = var_c
        var_c += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
        
        char eax_33 = sub_47a010(*data_530304, *data_530438, *data_5309e4)
        *(*data_530454 + 0x346) = eax_33
        int32_t eax_38 = *(*data_530454 + 0x350)
        
        if (eax_38 s>= 1)
            data_530454
            bool o_3 = unimplemented  {imul eax, eax, 0xe9}
            
            if (o_3)
                sub_403010()
                noreturn
            
            data_530454
            *(*data_530454 + eax_38 * 0x3a4 + 0x184) = eax_33
        
        int32_t var_10_1 = 1
        void* edi_1 = data_530458
        
        do
            if (sub_50d318(*data_530454) != 0)
                if (*(*data_530454 + 0x350) == ebp_1[-3])
                    if (ebp_1[-3] s> ebp_1[-2])
                        ebp_1 = sub_508844(nullptr, 0)
                    else if (*(*data_530454 + 0x344) == 0)
                        ebp_1[-3]
                        bool o_5 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        *(*data_530454 + ebp_1[-3] * 0x3a4 - 0x50) = 1
                    else
                        ebp_1[-3]
                        bool o_4 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        *(*data_530454 + ebp_1[-3] * 0x3a4 - 0x50) = 2
                    
                    ebp_1[-3]
                    bool o_6 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *(*data_530454 + ebp_1[-3] * 0x3a4 + 0x185) = 0
                else if (ebp_1[-3] s> ebp_1[-2])
                    ebp_1[-3]
                    int32_t ebx_3 = ebp_1[-3] * 0xe9
                    bool o_8 = unimplemented  {imul ebx, dword [ebp-0xc], 0xe9}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_530454 + (ebx_3 << 2) - 0x50) == 1)
                        sub_5140f8(*data_530454, ebp_1[-3])
                    
                    *(*data_530454 + (ebx_3 << 2) - 0x50) = 5
                else
                    ebp_1[-3]
                    int32_t ebx_2 = ebp_1[-3] * 0xe9
                    bool o_7 = unimplemented  {imul ebx, dword [ebp-0xc], 0xe9}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_530454 + (ebx_2 << 2) - 0x50) != 1)
                        sub_47a9a0(*edi_1, *data_530438, *data_530304, &ebp_1[-4])
                        
                        if (ebp_1[-4] == 1)
                            *(*data_530454 + (ebx_2 << 2) - 0x50) = 3
                            *(*data_530454 + (ebx_2 << 2) + 0x185) = 0
                        else if (ebp_1[-4] == 2)
                            *(*data_530454 + (ebx_2 << 2) - 0x50) = 0
                            *(*data_530454 + (ebx_2 << 2) + 0x185) = 0
            
            ebp_1[-3] += 1
            edi_1 += 4
        while (ebp_1[-3] != 9)
        
        ebp_1[-3] = 1
        void* edi_2 = data_530458
        void* esi_2 = data_5304d8
        ebp_1[-0xa] = data_5307e8
        ebp_1[-0xb] = data_530098
        
        do
            *(ebp_1 - 0x15) = 1
            *(ebp_1 - 0x16) = 0
            ebp_1[-5] = 0
            sub_403df8(&ebp_1[-7])
            ebp_1[-3]
            int32_t ebx_4 = ebp_1[-3] * 0xe9
            bool o_9 = unimplemented  {imul ebx, dword [ebp-0xc], 0xe9}
            
            if (o_9)
                sub_403010()
                noreturn
            
            int32_t eax_76
            eax_76.b = *(*data_530454 + (ebx_4 << 2) - 0x50)
            
            if (eax_76.b != 0)
                ebp_1[-3]
                ebp_1[-3]
                bool o_10 = unimplemented  {imul edx, dword [ebp-0xc], 0xe9}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                int32_t ecx_12 = *data_530454
                
                if (eax_76.b != 2)
                    ebp_1[-3]
                    bool o_11 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_530454 + ebp_1[-3] * 0x3a4 - 0x50) != 1)
                        ebp_1[-3]
                        bool o_12 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                        
                        if (o_12)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_530454 + ebp_1[-3] * 0x3a4 - 0x50) != 3)
                            ebp_1[-3]
                            bool o_13 = unimplemented  {imul eax, dword [ebp-0xc], 0xe9}
                            
                            if (o_13)
                                sub_403010()
                                noreturn
                            
                            if (*(*data_530454 + ebp_1[-3] * 0x3a4 - 0x50) == 5)
                                *(ebp_1 - 0x15) = 0
                                *(ebp_1 - 0x16) = 0
                        else
                            ebp_1[-5] = 1
                            *(ebp_1 - 0x15) = 1
                    else
                        *data_530454
                        
                        if (sub_50d2f4() == 0)
                            int32_t ecx_14 = sub_403e90(&ebp_1[-7], sub_50d0cf+5)
                            int32_t var_160_4 = ebp_1[-7]
                            void* const var_164_2 = &data_50d0b0
                            sub_40401c(ecx_14, *data_530454 + (ebx_4 << 2) - 0x4f)
                            int32_t var_168_2 = ebp_1[-0xd]
                            sub_404138(&ebp_1[-7], 3)
                        else
                            sub_40401c(ecx_12, *data_530454 + (ebx_4 << 2) - 0x4f)
                        
                        if (*(*data_530454 + (ebx_4 << 2) + 0x184) == 0)
                            sub_404080(&ebp_1[-7], 0x50d0c8)
                        else
                            sub_404080(&ebp_1[-7], " ~")
                        
                        *(ebp_1 - 0x15) = 0
                else
                    int32_t ecx_13 = sub_403e90(&ebp_1[-7], "Host")
                    int32_t var_160_3 = ebp_1[-7]
                    void* const var_164_1 = &data_50d0b0
                    sub_40401c(ecx_13, *data_530454 + (ebx_4 << 2) - 0x4f)
                    int32_t var_168_1 = ebp_1[-0xc]
                    sub_404138(&ebp_1[-7], 3)
                    
                    if (*(*data_530454 + (ebx_4 << 2) + 0x184) == 0)
                        sub_404080(&ebp_1[-7], 0x50d0c8)
                    else
                        sub_404080(&ebp_1[-7], " ~")
                    
                    *(ebp_1 - 0x15) = 0
            else
                *(ebp_1 - 0x16) = 1
                ebp_1[-5] = 2
            
            int32_t ebx_6 = *data_53084c
            int32_t ebx_7 = ebx_6 - 1
            
            if (add_overflow(ebx_6, 0xffffffff))
                sub_403010()
                noreturn
            
            int32_t eax_99 = *data_53054c
            
            if (add_overflow(eax_99, 3))
                sub_403010()
                noreturn
            
            if (eax_99 + 3 s>= ebx_7)
                ebp_1[-9] = eax_99 + 3 - ebx_7 + 1
                int32_t i_1
                
                do
                    char eax_105 = sub_50d318(*data_530454)
                    sub_47a180(ebx_7, *data_530438, *data_530304, eax_105)
                    char eax_110 = sub_50d318(*data_530454)
                    sub_47a180(ebx_7, *data_530438, *data_530304, eax_110)
                    ebx_7 += 1
                    i_1 = ebp_1[-9]
                    ebp_1[-9] -= 1
                while (i_1 != 1)
            
            for (int32_t i_2 = 0; i_2 != 4; i_2 += 1)
                int32_t eax_101
                
                if (i_2 s<= 1)
                    eax_101.b = *(ebp_1 - 0x15)
                    int32_t ecx_17 = *edi_2
                    
                    if (add_overflow(ecx_17, i_2))
                        sub_403010()
                        noreturn
                    
                    sub_47a1c0(ecx_17 + i_2, *data_530438, *data_530304, eax_101.b)
                
                eax_101.b = *(ebp_1 - 0x16)
                int32_t ecx_19 = *esi_2
                
                if (add_overflow(ecx_19, i_2))
                    sub_403010()
                    noreturn
                
                sub_47a1c0(ecx_19 + i_2, *data_530438, *data_530304, eax_101.b)
                
                if (i_2 s<= 1)
                    char eax_119 = sub_50d318(*data_530454)
                    int32_t ecx_21 = *edi_2
                    
                    if (add_overflow(ecx_21, i_2))
                        sub_403010()
                        noreturn
                    
                    sub_47a180(ecx_21 + i_2, *data_530438, *data_530304, eax_119)
                
                char eax_124 = sub_50d318(*data_530454)
                int32_t ecx_23 = *esi_2
                
                if (add_overflow(ecx_23, i_2))
                    sub_403010()
                    noreturn
                
                sub_47a180(ecx_23 + i_2, *data_530438, *data_530304, eax_124)
            
            *(ebp_1 - 1)
            char eax_129
            
            if (ebp_1[-7] != 0)
                eax_129 = sub_50d318(*data_530454)
            
            void* const eax_134
            
            if (ebp_1[-7] == 0 || eax_129 == 0 || *(*data_530454 + 0x350) == ebp_1[-3]
                    || *(*data_530454 + 0x1c8) != 0)
                eax_134 = nullptr
            else
                eax_134.b = 1
            
            sub_47a1c0(*ebp_1[-0xa], *data_530438, *data_530304, eax_134.b)
            sub_47a1c0(*ebp_1[-0xb], *data_530438, *data_530304, (ebp_1[-7] != 0).b)
            sub_47a180(*ebp_1[-0xb], *data_530438, *data_530304, (ebp_1[-7] != 0).b)
            long double x87_r0
            sub_47ab08(*data_530304, *data_530438, *ebp_1[-0xb], x87_r0, ebp_1[-7])
            
            if (ebp_1[-7] != 0)
                if (*(ebp_1 - 0x15) == 0)
                    void* eax_153 = data_530438
                    *eax_153
                    bool o_22 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    int32_t* edx_70 = ebp_1[-0xb]
                    *edx_70
                    bool o_23 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    *(*(*data_530304 + 0xab0) + *eax_153 * 0x81c0 + *edx_70 * 0x118 - 0xf6) = 0x39
                else
                    void* eax_150 = data_530438
                    *eax_150
                    bool o_20 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_20)
                        sub_403010()
                        noreturn
                    
                    int32_t* edx_65 = ebp_1[-0xb]
                    *edx_65
                    bool o_21 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    *(*(*data_530304 + 0xab0) + *eax_150 * 0x81c0 + *edx_65 * 0x118 - 0xf6) = 0x7d
            
            if (sub_50d318(*data_530454) == 0 && ebp_1[-5] != 0)
                sub_47b304(*edi_2, *data_530438, *data_530304, ebp_1[-5])
            
            ebp_1[-3] += 1
            ebp_1[-0xb] += 4
            ebp_1[-0xa] += 4
            esi_2 += 4
            edi_2 += 4
        while (ebp_1[-3] != 9)
        
        void* const eax_166
        
        if (sub_50d318(*data_530454) == 0 || *(*data_530454 + 0x1c8) != 0)
            eax_166 = nullptr
        else
            eax_166.b = 1
        
        sub_47a1c0(*data_530330, *data_530438, *data_530304, eax_166.b)
        int32_t eax_175
        
        if (sub_50d318(*data_530454) == 0)
            eax_175 = 0
        else if (sub_512fcc(*data_530454) == 0)
            eax_175 = 0
        else if (sub_50a19c() s>= 2)
            eax_175.b = 1
        else
            eax_175 = 0
        
        sub_47a180(*data_530330, *data_530438, *data_530304, eax_175.b)
    
    void* eax_28
    eax_28.b = *(ebp_1 - 1)
    eax_28.b &= *(ebp_1 - 2)
    
    if (eax_28.b != 0)
        *data_530454
        
        if (sub_50d2f4() != 0)
            sub_5148a0(*data_530454)
    
    sub_47a9a0(*data_5309f0, *data_530438, *data_530304, *data_5301f4 + 0x20068)
    sub_47b488(*data_53084c, *data_530438, *data_530304, 0)
    sub_483950(*data_530304, *data_530438)
    void* ebp_2 = sub_4cda5c(0x64, 0, &ebp_1[-0xe])
    sub_47b650(*data_530304, *data_53084c, *(ebp_2 - 0x38), 0)
    void* ebp_3 = sub_4cda5c(0xc8, 0, ebp_2 - 0x3c)
    sub_47b650(*data_530304, *data_53084c, *(ebp_3 - 0x3c), 0)
    int32_t* ebp_4 = sub_4cda5c(0x1f4, 0, ebp_3 - 0x40)
    sub_47b650(*data_530304, *data_53084c, ebp_4[-0x10], 0)
    sub_47b488(*data_52ffe4, *data_530438, *data_530304, 0)
    sub_483950(*data_530304, *data_530438)
    sub_40401c(sub_4c0984(2, &ebp_4[-0x50]), &ebp_4[-0x50])
    sub_47b650(*data_530304, *data_52ffe4, ebp_4[-8], 0)
    sub_40401c(sub_4c0984(4, &ebp_4[-0x50]), &ebp_4[-0x50])
    sub_47b650(*data_530304, *data_52ffe4, ebp_4[-8], 0)
    sub_40401c(sub_4c0984(0xa, &ebp_4[-0x50]), &ebp_4[-0x50])
    sub_47b650(*data_530304, *data_52ffe4, ebp_4[-8], 0)
    fsbase->NtTib.ExceptionList = 0
    sub_403e1c(&ebp_4[-0x10], 5)
    sub_403e1c(&ebp_4[-8], 2)
    int32_t result
    result.b = *(ebp_4 - 3)
    *ebp_4
    return result
}
