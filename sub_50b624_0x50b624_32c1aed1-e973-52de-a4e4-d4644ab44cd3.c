// ============================================================
// 函数名称: sub_50b624
// 虚拟地址: 0x50b624
// WARP GUID: 32c1aed1-e973-52de-a4e4-d4644ab44cd3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_510dd4, sub_404054, sub_511dcc, sub_510f54, sub_4837ec, sub_404138, sub_47a7ec, sub_40401c, sub_50a360, sub_402bdc, sub_402b4c, sub_403e1c, sub_403010, sub_426afc, sub_50f0e4, sub_403e90, sub_42679c, sub_510de0, sub_404188, sub_47a2ac, sub_4c8aa0, sub_478234, sub_4068a2, sub_402bc0, sub_47ab08, sub_510da8, sub_402ef4, sub_48380c, sub_50c5e0, sub_40422c, sub_5072b8, sub_4040c4, sub_50a598, sub_408e1c, sub_50d2f4, sub_4c92f0, sub_402b90, sub_50e4b0, sub_4c93fc, sub_403df8, sub_402e64, sub_507d4c, sub_4c2f1c, sub_4d6664, sub_42b778, sub_509dc4, sub_4746a0, sub_511198, sub_4836b0, sub_4834fc, sub_51497c, sub_46910c, sub_408e80
// [被调用的父级函数]: sub_4e6659, sub_516c3c, sub_516d08, sub_514ef8, sub_511fd8, sub_514c8c, sub_5168a7, sub_514c48, sub_4e649b
// ============================================================

void* __convention("regparm")sub_50b624(int32_t arg1, char* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_1 = 0x31
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    sub_40422c(arg2)
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_2 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    
    if (*(*data_530454 + 0x347) == 0)
        int80_t x87_r0
        
        if (arg1 != 1)
            if (arg1 != 2)
                if (arg1 == 3)
                    *data_530454
                    
                    if (sub_50d2f4() != 0)
                        *(*data_530454 + 0x344) = 0
                        *(*data_530454 + 0x345) = 0
                        
                        if (*(*data_530454 + 0x54) == 1)
                            sub_48380c(*data_530304, *data_530438)
                    else
                        *(*data_530454 + 0x344) = 0
                        *(*data_530454 + 0x345) = 0
                        
                        if (*(*data_530454 + 0x54) == 1)
                            sub_48380c(*data_530304, *data_530438)
                        
                        *(*data_530454 + 0x54) = 0
                else if (arg1 == 4)
                    sub_50a598()
                else
                    int32_t var_10
                    
                    if (arg1 == 5)
                        var_10 = sub_408e80(arg2)
                        
                        if (var_10 != 1)
                            sub_511dcc(*data_530454, 1, var_10)
                        else
                            *(*data_530454 + 0x1c8) = 0
                    else if (arg1 == 6)
                        *(*data_530304 + 0x60b0)
                        int32_t var_1c
                        sub_42b778(i_1, &var_1c)
                        *(esp_8 - 4) = var_1c
                        sub_42679c(sub_426afc(), *(esp_8 - 4))
                        esp_8 += 0x1c
                        
                        if (sub_4c2f1c(1) == 0)
                            *data_530144 = 0
                            sub_4c93fc()
                            *data_530304
                            sub_4837ec(*data_530304, *data_5305b4, false)
                            sub_4837ec(*data_530304, *data_530894, false)
                            sub_4834fc(*data_530304, *data_53033c)
                    else if (arg1 == 7)
                        void* eax_61 = data_530438
                        *eax_61
                        bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_1)
                            sub_403010()
                            noreturn
                        
                        if (*(*(*data_530304 + 0xab0) + *eax_61 * 0x81c0 + 1) != 0)
                            sub_48380c(*data_530304, *data_530438)
                        
                        *data_530144 = 0
                        sub_4c93fc()
                        *data_530304
                        sub_4837ec(*data_530304, *data_5305b4, false)
                        sub_4837ec(*data_530304, *data_530894, false)
                        sub_4834fc(*data_530304, *data_53033c)
                    else if (arg1 == 8)
                        void* eax_75
                        eax_75.b = *(*data_530084 + 0x1b1f7)
                        *(*data_530084 + 0x1b1f6) = eax_75.b
                        data_530084
                        char temp2_1 = eax_75.b
                        eax_75.b -= 2
                        
                        if (temp2_1 u>= 2)
                            char temp3_1 = eax_75.b
                            eax_75.b -= 7
                            
                            if (temp3_1 != 7)
                                sub_50f0e4(*data_530084, 0)
                                sub_50e4b0(*data_530084, 1)
                    else if (arg1 s< 0xb || arg1 s> 0x14)
                        if (arg1 == 0x19)
                            if (sub_510dd4(*data_530454) != 0 && *(*data_5301f4 + 0x10020) != 1
                                    && *(*data_5301f4 + 0x10004) == 3)
                                int32_t var_14
                                sub_510de0(*data_530454, &var_10, &var_14)
                                
                                if (*(*data_5301f4 + 0x10020) != var_10)
                                    sub_510da8(*data_530454, var_10, var_14)
                                else
                                    bool o_3 = unimplemented  {imul edx, dword [ebp-0x10], 0x64}
                                    
                                    if (o_3)
                                        sub_403010()
                                        noreturn
                                    
                                    sub_510f54(*data_530454, var_14 * 0x64)
                            
                            if (*(*data_530304 + 0x8a0) == *data_530438)
                                void* eax_111 = data_530438
                                *eax_111
                                bool o_4 = unimplemented  {imul eax, dword [eax], 0x1038}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_113 =
                                    sx.d(*(*(*data_530304 + 0xab0) + *eax_111 * 0x81c0 + 0x8134))
                                int32_t temp7_1 = *data_530960
                                
                                if (eax_113 == temp7_1)
                                    *(esp_8 - 4) = data_5309b0
                                    esp_8 -= 4
                                    sub_47a2ac(*data_530304, *data_530438, *data_530960)
                                    void* edx_51 = *data_530454
                                    *(edx_51 + 0x350)
                                    bool o_5 = unimplemented  {imul edx, dword [edx+0x350], 0xe9}
                                    
                                    if (o_5)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t ecx_9 = *data_530454
                                    sub_40401c(ecx_9, ecx_9 + *(edx_51 + 0x350) * 0x3a4 - 0x4f)
                                    void* var_20
                                    sub_404188(*data_5309b0, var_20)
                                    
                                    if (eax_113 != temp7_1)
                                        char var_120[0x100]
                                        sub_404054(&var_120, *data_5309b0, 0xff)
                                        sub_402bdc(*data_530454 + 0x31, &var_120, 0x20)
                                        sub_404054(&var_120, *data_5309b0, 0xff)
                                        void* eax_125 = *data_530454
                                        *(eax_125 + 0x350)
                                        bool o_6 = unimplemented  {imul eax, dword [eax+0x350], 0xe9}
                                        
                                        if (o_6)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t ecx_12
                                        ecx_12.b = 0x14
                                        sub_402bdc(*data_530454 + *(eax_125 + 0x350) * 0x3a4 - 0x4f, 
                                            &var_120, ecx_12.b)
                                        sub_50c5e0(0, 0)
                                        ebp_1 = sub_51497c(*data_530454, 0, 0)
                        else if (arg1 == 0x1b)
                            sub_4c8aa0(0x1b)
                        else if (arg1 == 0x1a)
                            var_10 = sub_408e80(arg2)
                            *(*data_530454 + 0x1bc) = var_10
                            int32_t eax_134 = var_10
                            
                            if (eax_134 u< 4 || eax_134 == 0x64)
                                if (*data_530144 != 1 || *(*data_5301f4 + 0xfff0) == 0x63)
                                label_50bd58:
                                    int32_t ebx_2 = *(*data_530304 + 0x9f0)
                                    int32_t temp8_1 = *(*data_530304 + 0x8a0)
                                    
                                    if (ebx_2 == temp8_1)
                                        *(esp_8 - 4) = 0
                                        *(esp_8 - 8) = &ebp_1[-0x4a]
                                        *data_530304
                                        ebp_1 = sub_47a7ec(1)
                                        *(esp_8 - 4) = ebp_1[-0x4a]
                                        sub_507d4c(&ebp_1[-0x4b])
                                        sub_404188(*(esp_8 - 4), ebp_1[-0x4b])
                                        
                                        if (ebx_2 == temp8_1)
                                            sub_48380c(*data_530304, *(*data_530304 + 0x8a0))
                                            *(*data_530304 + 0xabd) = 0
                                    
                                    while (true)
                                        __builtin_memcpy(&ebp_1[-0x53], 0x50c260, 0x20)
                                        sub_402e64(&ebp_1[-0x5b], (*data_530658).b, 0x20)
                                        int32_t eax_169 = *data_530630
                                        
                                        if (eax_169 u<= 0xff)
                                            ebp_1[-0x5b] |= 1 << (eax_169 u% 0x20)
                                        
                                        int32_t eax_171 = *data_5302c8
                                        
                                        if (eax_171 u<= 0xff)
                                            ebp_1[-0x5b] |= 1 << (eax_171 u% 0x20)
                                        
                                        int32_t ecx_16
                                        ecx_16.b = 0x20
                                        sub_402ef4(&ebp_1[-0x53], &ebp_1[-0x5b])
                                        int32_t ebx_3 = *(*data_530304 + 0x8a0)
                                        bool c_1 = ebx_3 u< 0xff
                                        
                                        if (ebx_3 == 0xff || c_1)
                                            c_1 = test_bit(ebp_1[-0x53], ebx_3)
                                        
                                        if (c_1)
                                            break
                                        
                                        sub_48380c(*data_530304, ebx_3)
                                    
                                    *data_530144 = 1
                                    
                                    if (ebp_1[-3] == 0x64)
                                        void* eax_177 = data_530630
                                        *eax_177
                                        bool o_7 = unimplemented  {imul eax, dword [eax], 0x1038}
                                        
                                        if (o_7)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*(*data_530304 + 0xab0) + *eax_177 * 0x81c0 + 1) == 0)
                                            void* eax_181 = data_5302c8
                                            *eax_181
                                            bool o_8 = unimplemented  {imul eax, dword [eax], 0x1038}
                                            
                                            if (o_8)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(*(*data_530304 + 0xab0) + *eax_181 * 0x81c0 + 1) != 0)
                                                sub_478234(*data_530304, *data_5302c8, 2)
                                            else if (*(*data_5301f4 + 0x10004) == 6
                                                    && *(*data_5301f4 + 0xfff0) == 0x63)
                                                sub_478234(*data_530304, *data_530630, 3)
                                        else
                                            sub_478234(*data_530304, *data_530630, 3)
                                else
                                    int32_t ebx_1 = *(*data_530304 + 0x9f0)
                                    int32_t temp11_1 = *(*data_530304 + 0x8a0)
                                    
                                    if (ebx_1 == temp11_1)
                                        *(esp_8 - 4) = 0
                                        void var_124
                                        *(esp_8 - 8) = &var_124
                                        *data_530304
                                        ebp_1 = sub_47a7ec(1)
                                        *(esp_8 - 4) = ebp_1[-0x48]
                                        sub_507d4c(&ebp_1[-0x49])
                                        sub_404188(*(esp_8 - 4), ebp_1[-0x49])
                                        
                                        if (ebx_1 == temp11_1)
                                            goto label_50bd58
                            
                            (ebp_1[-3] s< 0 || ebp_1[-3] s> 0x14) && ebp_1[-3] != 0x39
                            
                            if (*data_530144 != 1 || *(*data_5301f4 + 0xfff0) == 0x63)
                                void* eax_222 = data_5302c8
                                *eax_222
                                bool o_11 = unimplemented  {imul eax, dword [eax], 0x1038}
                                
                                if (o_11)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*(*data_530304 + 0xab0) + *eax_222 * 0x81c0 + 1) != 0)
                                    ebp_1[-3] = sub_402b4c(sub_511198(*data_530454) * fconvert.t(100f))
                                    sub_402bc0(&ebp_1[-0x5d], 0x50c2b8)
                                    int32_t edx_98 = ebp_1[-3]
                                    
                                    if (add_overflow(edx_98, 0x64))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebp_1 - 0x177) = edx_98.b + 0x64
                                    ebp_1[-0x5e].b = 1
                                    sub_40401c(sub_402b90(&ebp_1[-0x5d], &ebp_1[-0x5e], 2), 
                                        &ebp_1[-0x5d])
                                    ebp_1 = sub_46910c(*data_530304, "f_weiter3", &ebp_1[-0x62])
                                    sub_4040c4(&ebp_1[-0x61], ebp_1[-1], ebp_1[-0x62])
                                    *(esp_8 - 4) = ebp_1[-0x61]
                                    sub_47ab08(*data_530304, *data_5302c8, 2, x87_r0)
                                    esp_8 += 0x1c
                                else
                                    ebp_1[-3] = sub_402b4c(sub_511198(*data_530454) * fconvert.t(100f))
                                    sub_402bc0(&ebp_1[-0x5d], 0x50c2b8)
                                    int32_t edx_91 = ebp_1[-3]
                                    
                                    if (add_overflow(edx_91, 0x64))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebp_1 - 0x177) = edx_91.b + 0x64
                                    ebp_1[-0x5e].b = 1
                                    sub_40401c(sub_402b90(&ebp_1[-0x5d], &ebp_1[-0x5e], 2), 
                                        &ebp_1[-0x5d])
                                    ebp_1 = sub_46910c(*data_530304, "f_weiter3", &ebp_1[-0x60])
                                    sub_4040c4(&ebp_1[-0x5f], ebp_1[-1], ebp_1[-0x60])
                                    *(esp_8 - 4) = ebp_1[-0x5f]
                                    sub_47ab08(*data_530304, *data_530630, 3, x87_r0)
                                    esp_8 += 0x1c
                            else
                                if (ebp_1[-3] u>= 4)
                                    if (ebp_1[-3] != 0x3c)
                                        int32_t eax_200 = ebp_1[-3]
                                        
                                        if (eax_200 == 0x11 || eax_200 == 0x39)
                                            sub_403df8(&ebp_1[-1])
                                        else
                                            *(esp_8 - 4) = "Noch "
                                            sub_408e1c(ebp_1[-3], &ebp_1[-0x5c])
                                            *(esp_8 - 8) = ebp_1[-0x5c]
                                            *(esp_8 - 0xc) = " Sek."
                                            sub_404138(&ebp_1[-1], 3)
                                    else
                                        sub_403e90(&ebp_1[-1], "Noch 1 Min.")
                                
                                if (*(*data_530454 + 0x1b4) != 0 && *(*data_530454 + 0x1e0) == 0)
                                    *(esp_8 - 4) = 0
                                    *(esp_8 - 8) = 0x3e8
                                    int32_t eax_213
                                    int32_t edx_84
                                    edx_84:eax_213 = sx.q(*(*data_530454 + 0x1c4))
                                    *(esp_8 - 0xc) = edx_84
                                    *(esp_8 - 0x10) = eax_213
                                    uint32_t eax_214
                                    int32_t ecx_17
                                    eax_214, ecx_17 = GetTickCount()
                                    int32_t temp20_1 = *(esp_8 - 0x10)
                                    *(esp_8 - 0x10) -= eax_214
                                    *(esp_8 - 0xc) = sbb.d(*(esp_8 - 0xc), 0, temp20_1 u< eax_214)
                                    int32_t eax_215 = *(esp_8 - 0x10)
                                    *(esp_8 - 0xc) = *(esp_8 - 0xc)
                                    *(esp_8 - 0x10) = eax_215
                                    int32_t eax_219
                                    int32_t edx_86
                                    edx_86:eax_219 = sx.q(*(*data_530454 + 0x1c0))
                                    bool o_9 = unimplemented  {adc edx, dword [esp+0x4]}
                                    
                                    if (o_9)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_10 = add_overflow(esp_8 - 0x10, 8)
                                    int32_t eax_221 = sub_4068a2(ecx_17, 
                                        adc.d(edx_86, *(esp_8 - 0xc), 
                                            eax_219 + *(esp_8 - 0x10) u< eax_219), 
                                        eax_219 + *(esp_8 - 0x10))
                                    esp_8 += 0x1c
                                    
                                    if (o_10)
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1[-3] = eax_221
                    else if (arg1 == 0xb)
                        sub_4c92f0()
                        ebp_1 = sub_50a360(0xb, arg2)
                    else if (arg1 != 0xc && arg1 != 0xd && arg1 == 0xe && *data_530144 != 0
                            && *data_530144 != 0)
                        *(*data_530454 + 0x1e3) = 1
                        ebp_1 = sub_509dc4()
                        *(esp_8 - 4) = 0
                        *(esp_8 - 8) = &data_50c254
                        *(esp_8 - 0xc) = &data_50c254
                        sub_4746a0(0, 0x20, *data_530304)
                        void* eax_86 = data_5302c8
                        *eax_86
                        bool o_2 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        int32_t* edi = *(*data_530304 + 0xab0) + *eax_86 * 0x81c0 + 0x140
                        *edi = 0x646e4504
                        edi[1].b = data_50c25c.b
                        sub_4836b0(*data_530304, *data_5302c8)
                        sub_478234(*data_530304, *data_5302c8, 2)
            else if (*(*data_530454 + 0x54) == 1)
                sub_50c5e0(0, 0)
        else if (*(*data_530454 + 0x54) s<= 1)
            void* eax_4
            eax_4.b = 1
            int32_t ecx = sub_50c5e0(eax_4.b, 0)
            *(*data_530454 + 0x1b4) = 0
            *(*data_530454 + 0x1c8) = 0
            sub_5072b8(ecx)
            sub_4836b0(*data_530304, *data_530438)
            int32_t var_18
            sub_507d4c(&var_18)
            *(esp_8 - 4) = var_18
            sub_47ab08(*data_530304, *data_530438, 1, x87_r0)
            esp_8 += 0x1c
            ebp_1 = sub_51497c(*data_530454, 0, 0)
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_50c24a
    sub_403e1c(&ebp_1[-0x62], 4)
    sub_403df8(&ebp_1[-0x5c])
    sub_403e1c(&ebp_1[-0x4b], 4)
    sub_403df8(&ebp_1[-7])
    sub_403df8(&ebp_1[-6])
    sub_403df8(&ebp_1[-5])
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
