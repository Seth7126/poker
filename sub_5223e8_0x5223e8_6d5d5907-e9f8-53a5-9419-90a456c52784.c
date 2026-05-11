// ============================================================
// 函数名称: sub_5223e8
// 虚拟地址: 0x5223e8
// WARP GUID: 6d5d5907-e9f8-53a5-9419-90a456c52784
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4748fc, sub_4c2b1c, sub_510f54, sub_4742c0, sub_404138, sub_4837ec, sub_52ac00, sub_520efc, sub_52adb0, sub_40401c, sub_4c54b4, sub_402bdc, sub_520e50, sub_518820, sub_4c0cbc, sub_47b650, sub_4cda5c, sub_4c0984, sub_513e4c, sub_4c2f80, sub_403010, sub_52add4, sub_4837d0, sub_403e1c, sub_483950, sub_4c55c8, sub_404080, sub_520a04, sub_404874, sub_478234, sub_52ada4, sub_4c51e4, sub_47ab08, sub_51b730, sub_4c0a50, sub_47b488, sub_4cc6dc, sub_4040c4, sub_4c1d64, sub_4c1090, sub_408e1c, sub_469ac0, sub_4c094c, sub_4c2d7c, sub_403df8, sub_512ce8, sub_4c10a0, sub_509024, sub_511b0c, sub_52a8cc, sub_4c2f1c, sub_4d6664, sub_52adbc, sub_52a808, sub_40fa94, sub_404754, sub_5207dc, sub_51866c, sub_4836b0, sub_52a83c, sub_50a53c, sub_52afe4, sub_528320, sub_46910c, sub_528538, sub_47b0c8, sub_512d1c, sub_4c0924
// [被调用的父级函数]: sub_524d14, sub_4c5eb0
// ============================================================

void* __convention("regparm")sub_5223e8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t i_29 = arg3
    int32_t* esp_1 = &i_29
    int32_t i_16 = 0x50
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_16
        i_16 -= 1
    while (i != 1)
    int32_t i_30 = i_29
    i_29 = i_16
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    *(esp_1 - 0x10) = i_30
    char var_94
    int32_t i_18 = __builtin_memcpy(&var_94, arg2, 0x40)
    char var_9 = (*(esp_1 - 0x10)).b
    i_29 = arg1
    sub_404874(&var_94, sub_51859c)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_10 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_10
    *(*data_5301f4 + 0xffec) = 5
    int32_t* eax_5 = *data_5301f4 + 0x4584
    
    if (var_94 == 0)
        int32_t temp3_1 = *eax_5
        *eax_5 += 1
        
        if (add_overflow(temp3_1, 1))
            sub_403010()
            noreturn
        
        int32_t i_19 = *data_5300d0
        char var_1a8[0xd4]
        
        if (i_19 s> 0)
            int32_t esi_1 = 1
            void var_80
            void* ebx = &var_80
            int32_t i_1
            
            do
                int32_t eax_8 = *eax_5
                void* var_5c
                
                if (eax_8 s> 0xc8)
                    bool o_6 = unimplemented  {imul edx, esi, 0xc9}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *(esp_10 - 4) = &eax_5[esi_1 * 0xc9 + 0xca]
                    int32_t eax_16 = *ebx
                    **(esp_10 - 4) = eax_16
                    bool o_7 = unimplemented  {imul edx, esi, 0xc9}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    int32_t temp14_1 = eax_5[esi_1 + 0x2e88]
                    eax_5[esi_1 + 0x2e88] += eax_16
                    
                    if (add_overflow(temp14_1, eax_16))
                        sub_403010()
                        noreturn
                    
                    sub_404054(&var_1a8, var_5c, 0xff)
                    sub_402bdc(&eax_5[0x2e55], &var_1a8, 0xc8)
                else
                    bool o_2 = unimplemented  {imul edx, esi, 0xc9}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    *(esp_10 - 4) = &eax_5[esi_1 * 0xc9]
                    *(*(esp_10 - 4) + (eax_8 << 2) + 8) = *ebx
                    bool o_3 = unimplemented  {imul eax, esi, 0xc9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_11 = eax_5[esi_1 * 0xc9 + *eax_5 + 2]
                    int32_t temp15_1 = eax_5[esi_1 + 0x2e88]
                    eax_5[esi_1 + 0x2e88] += eax_11
                    
                    if (add_overflow(temp15_1, eax_11))
                        sub_403010()
                        noreturn
                    
                    sub_404054(&var_1a8, var_5c, 0xff)
                    *eax_5
                    bool o_5 = unimplemented  {imul eax, dword [eax], 0xc9}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    int32_t* ecx_4
                    ecx_4.b = 0xc8
                    sub_402bdc(eax_5 + *eax_5 * 0xc9 + 0x1c4c, &var_1a8, ecx_4.b)
                esi_1 += 1
                ebx += 4
                i_1 = i_19
                i_19 -= 1
            while (i_1 != 1)
        
        if (*(*data_5301f4 + 4) != 7)
            i_18 = *data_5300d0
            
            if (i_18 s> 0)
                int32_t esi_3 = 1
                int32_t i_2
                
                do
                    eax_5[esi_3 + 0x2e91] = 0
                    int32_t j_4 = *data_5300d0
                    
                    if (j_4 s> 0)
                        int32_t j_3 = j_4
                        int32_t ebx_6 = 1
                        int32_t j
                        
                        do
                            if (ebx_6 != esi_3)
                                int32_t eax_84 = eax_5[esi_3 + 0x2e88]
                                int32_t temp24_1 = eax_5[esi_3 + 0x2e91]
                                eax_5[esi_3 + 0x2e91] += eax_84
                                
                                if (add_overflow(temp24_1, eax_84))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_86 = eax_5[ebx_6 + 0x2e88]
                                int32_t temp30_1 = eax_5[esi_3 + 0x2e91]
                                eax_5[esi_3 + 0x2e91] -= eax_86
                                
                                if (add_overflow(temp30_1, neg.d(eax_86)))
                                    sub_403010()
                                    noreturn
                            
                            ebx_6 += 1
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                    
                    esi_3 += 1
                    i_2 = i_18
                    i_18 -= 1
                while (i_2 != 1)
        else
            void* eax_21
            eax_21.b = 1
            sub_4c2f80(eax_21.b)
            
            if (sub_4c094c() == 0 && *(*data_530304 + 0xcf9) == 0)
                *(*data_5301f4 + 0x20298) = sub_4c10a0()
            
            if (sub_4c094c() != 0 && *(*data_5301f4 + 0x20298) == 0)
                *(*data_5301f4 + 0x20298) = 1
            
            i_18 = *data_5300d0
            
            if (i_18 s> 0)
                int32_t esi_2 = 1
                int32_t i_3
                
                do
                    if (sub_4c094c() != 0)
                        int32_t eax_32 = sub_4c1d64()
                        int32_t ebx_1 = esi_2 * 0x41
                        bool o_9 = unimplemented  {imul ebx, esi, 0x41}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        eax_5[esi_2 + 0x2e91] =
                            sub_4c0a50(*(*data_5301f4 + (ebx_1 << 3) + 0x20090), *data_5300d0, eax_32)
                        *(esp_10 - 4) = &var_1a8
                        *(esp_10 - 8) = sub_511b0c(*data_530454)
                        int32_t eax_40 = sub_4c1d64()
                        sub_4c0cbc(*(*data_5301f4 + (ebx_1 << 3) + 0x20090), *(esp_10 - 8), eax_40, 
                            esi_2, i_18)
                        bool o_10 = unimplemented  {imul eax, esi, 0xc9}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        int32_t* ecx_10
                        ecx_10.b = 0xc8
                        sub_402bdc(eax_5 + esi_2 * 0xc9 + 0x1c4c, &var_1a8, ecx_10.b)
                    else if (*(*data_5301f4 + 0x111f8) == 0)
                        int32_t eax_70 = sub_4c1d64()
                        int32_t ebx_5 = esi_2 * 0x41
                        bool o_19 = unimplemented  {imul ebx, esi, 0x41}
                        
                        if (o_19)
                            sub_403010()
                            noreturn
                        
                        eax_5[esi_2 + 0x2e91] =
                            sub_4c0a50(*(*data_5301f4 + (ebx_5 << 3) + 0x20090), *data_5300d0, eax_70)
                        *(esp_10 - 4) = &var_1a8
                        int32_t eax_75 = sub_4c1d64()
                        sub_4c0cbc(*(*data_5301f4 + (ebx_5 << 3) + 0x20090), *data_5300d0, eax_75, 
                            esi_2, i_18)
                        bool o_20 = unimplemented  {imul eax, esi, 0xc9}
                        
                        if (o_20)
                            sub_403010()
                            noreturn
                        
                        int32_t* ecx_16
                        ecx_16.b = 0xc8
                        sub_402bdc(eax_5 + esi_2 * 0xc9 + 0x1c4c, &var_1a8, ecx_16.b)
                    else
                        int32_t eax_50 = sub_528538(*data_5302c4, esi_2)
                        bool o_11 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + esi_2 * 0x208 + 0x20090) = eax_50
                        int32_t eax_52 = sub_4c1d64()
                        int32_t eax_55 = *(*data_5302c4 + 0xbefc)
                        
                        if (add_overflow(eax_55, 1))
                            sub_403010()
                            noreturn
                        
                        void* edx_28 = *data_5302c4
                        *(edx_28 + 0xbf00)
                        bool o_13 = unimplemented  {imul dword [edx+0xbf00]}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        *(esp_10 - 4) = (eax_55 + 1) * *(edx_28 + 0xbf00)
                        bool o_14 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        eax_5[esi_2 + 0x2e91] = sub_4c0a50(eax_50, *(esp_10 - 4), eax_52)
                        *(esp_10 - 4) = &var_1a8
                        int32_t eax_61 = sub_4c1d64()
                        int32_t edx_31 = *(*data_5302c4 + 0xbefc)
                        
                        if (add_overflow(edx_31, 1))
                            sub_403010()
                            noreturn
                        
                        void* eax_65 = *data_5302c4
                        *(eax_65 + 0xbf00)
                        bool o_16 = unimplemented  {imul edx, dword [eax+0xbf00]}
                        
                        if (o_16)
                            sub_403010()
                            noreturn
                        
                        bool o_17 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        sub_4c0cbc(*(*data_5301f4 + esi_2 * 0x208 + 0x20090), 
                            (edx_31 + 1) * *(eax_65 + 0xbf00), eax_61, esi_2, i_18)
                        bool o_18 = unimplemented  {imul eax, esi, 0xc9}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        int32_t* ecx_13
                        ecx_13.b = 0xc8
                        sub_402bdc(eax_5 + esi_2 * 0xc9 + 0x1c4c, &var_1a8, ecx_13.b)
                    
                    esi_2 += 1
                    i_3 = i_18
                    i_18 -= 1
                while (i_3 != 1)
    
    if (*(*data_530304 + 0xcf9) == 0)
        *(esp_10 - 4) = 1
        sub_47b488(*data_53098c, *data_5302c8, *data_530304)
        *(esp_10 - 4) = 1
        sub_47b488(*data_52fffc, *data_5302c8, *data_530304)
        void* eax_93 = data_5302c8
        *eax_93
        bool o_23 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_23)
            sub_403010()
            noreturn
        
        void* edx_50 = data_53098c
        *edx_50
        bool o_24 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_24)
            sub_403010()
            noreturn
        
        int32_t ecx_22 = *data_5300d0
        
        if (add_overflow(ecx_22, 2))
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_93 * 0x81c0 + *edx_50 * 0x118 - 0x7a) = ecx_22.w + 2
        void* eax_96 = data_5302c8
        *eax_96
        bool o_26 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_26)
            sub_403010()
            noreturn
        
        void* edx_55 = data_52fffc
        *edx_55
        bool o_27 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_27)
            sub_403010()
            noreturn
        
        int32_t ecx_25 = *data_5300d0
        
        if (add_overflow(ecx_25, 2))
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_25 + 2, 1))
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_96 * 0x81c0 + *edx_55 * 0x118 - 0x7a) = (ecx_25 + 3).w
        sub_483950(*data_530304, *data_5302c8)
        char* var_10
        
        if (*(*data_5301f4 + 4) == 7)
            ebp_1 = sub_4c55c8(ecx_25 + 3, &var_10)
    
    if (*(*data_5301f4 + 4) == 7)
        char eax_106
        int32_t ecx_28
        eax_106, ecx_28 = sub_4c51e4()
        *(ebp_1 - 0x29) = eax_106
        ebp_1 = sub_4c54b4(ecx_28, &ebp_1[-0xc])
    
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_76
    void* edx_146
    int32_t ebx_11
    void* esp_61
    void* ebp_7
    int32_t esi_8
    int80_t x87_r0
    
    if (*(*data_5301f4 + 4) != 7 || *(*data_530304 + 0xcf9) != 0)
        if (*(*data_530304 + 0xcf9) == 0)
            ebp_1[-1]
            sub_51866c()
            *(esp_10 - 4) = 0
            void* esp_62 = esp_10 - 4
            sub_47b650(*data_530304, *data_53098c, "!^Spiel")
            int32_t i_23 = *data_5300d0
            
            if (i_23 s> 0)
                int32_t esi_9 = 1
                int32_t i_4
                
                do
                    int32_t eax_285 = esi_9 & 0x80000001
                    
                    if (eax_285 s< 0)
                        eax_285 = ((eax_285 - 1) | 0xfffffffe) + 1
                    
                    int32_t ecx_82
                    
                    if (eax_285 != 0)
                        *(esp_62 - 4) = 0
                        *(esp_62 - 8) = 0
                        *(esp_62 - 0xc) = &ebp_1[-0x88]
                        ecx_82.b = 1
                        sub_5207dc(ebp_1[-1], esi_9, ecx_82)
                        sub_4040c4(&ebp_1[-0x87], U"!", ebp_1[-0x88])
                        sub_47b650(*data_530304, *data_53098c, ebp_1[-0x87])
                    else
                        *(esp_62 - 4) = 0
                        *(esp_62 - 8) = 0
                        *(esp_62 - 0xc) = &ebp_1[-0x86]
                        ecx_82.b = 1
                        sub_5207dc(ebp_1[-1], esi_9, ecx_82)
                        sub_4040c4(&ebp_1[-0x85], "!^", ebp_1[-0x86])
                        sub_47b650(*data_530304, *data_53098c, ebp_1[-0x85])
                    esi_9 += 1
                    i_4 = i_23
                    i_23 -= 1
                while (i_4 != 1)
            
            *(esp_62 - 4) = 0
            void* esp_69 = esp_62 - 4
            sub_47b650(*data_530304, *data_53098c, U"!")
            int32_t i_24 = *ebp_1[-0x13]
            
            if (i_24 s> 0)
                int32_t esi_10 = 1
                int32_t i_5
                
                do
                    if (esi_10 s<= 0xc8)
                        *(esp_69 - 4) = 0
                        *(esp_69 - 8) = &data_5242cc
                        sub_408e1c(esi_10, &ebp_1[-0x8a])
                        *(esp_69 - 0xc) = ebp_1[-0x8a]
                        *(esp_69 - 0x10) = &data_524324
                        sub_404138(&ebp_1[-0x89], 3)
                        void* esp_74 = esp_69
                        sub_47b650(*data_530304, *data_53098c, ebp_1[-0x89])
                        int32_t eax_306 = *data_5300d0
                        
                        if (eax_306 s> 0)
                            ebp_1[-0x14] = eax_306
                            int32_t ebx_12 = 1
                            int32_t j_1
                            
                            do
                                *(esp_74 - 4) = 0
                                *(esp_74 - 8) = &ebp_1[-0x8c]
                                bool o_49 = unimplemented  {imul eax, ebx, 0xc9}
                                
                                if (o_49)
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-1]
                                sub_520a04(0, *(ebp_1[-0x13] + ebx_12 * 0x324 + (esi_10 << 2) + 8))
                                esp_74 -= 4
                                sub_4040c4(&ebp_1[-0x8b], U"!", ebp_1[-0x8c])
                                sub_47b650(*data_530304, *data_53098c, ebp_1[-0x8b])
                                ebx_12 += 1
                                j_1 = ebp_1[-0x14]
                                ebp_1[-0x14] -= 1
                            while (j_1 != 1)
                        
                        *(esp_74 - 4) = 0
                        esp_69 = esp_74 - 4
                        bool o_50 = unimplemented  {imul edx, esi, 0xc9}
                        
                        if (o_50)
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_92 = ebp_1[-0x13]
                        sub_40401c(ecx_92, ecx_92 + esi_10 * 0xc9 + 0x1c4c)
                        sub_47b650(*data_530304, *data_53098c, ebp_1[-0x8d])
                    
                    esi_10 += 1
                    i_5 = i_24
                    i_24 -= 1
                while (i_5 != 1)
            
            *(esp_69 - 4) = 0
            void* esp_77 = esp_69 - 4
            sub_47b650(*data_530304, *data_53098c, 0)
            int32_t i_25 = *data_5300d0
            
            if (i_25 s> 0)
                int32_t i_6
                
                do
                    *(esp_77 - 4) = 0
                    esp_77 -= 4
                    sub_47b650(*data_530304, *data_53098c, 0)
                    i_6 = i_25
                    i_25 -= 1
                while (i_6 != 1)
            
            *(esp_77 - 4) = 0
            sub_47b650(*data_530304, *data_53098c, 0)
            *(esp_77 - 8) = 0
            void* esp_79 = esp_77 - 8
            sub_47b650(*data_530304, *data_52fffc, U"!")
            int32_t i_26 = *data_5300d0
            
            if (i_26 s> 0)
                int32_t esi_11 = 1
                int32_t i_7
                
                do
                    int32_t eax_326 = esi_11 & 0x80000001
                    
                    if (eax_326 s< 0)
                        eax_326 = ((eax_326 - 1) | 0xfffffffe) + 1
                    
                    int32_t ecx_98
                    
                    if (eax_326 != 0)
                        *(esp_79 - 4) = 0
                        *(esp_79 - 8) = 0
                        *(esp_79 - 0xc) = &ebp_1[-0x91]
                        ecx_98.b = 1
                        sub_5207dc(ebp_1[-1], esi_11, ecx_98)
                        sub_4040c4(&ebp_1[-0x90], U"!", ebp_1[-0x91])
                        sub_47b650(*data_530304, *data_52fffc, ebp_1[-0x90])
                    else
                        *(esp_79 - 4) = 0
                        *(esp_79 - 8) = 0
                        *(esp_79 - 0xc) = &ebp_1[-0x8f]
                        ecx_98.b = 1
                        sub_5207dc(ebp_1[-1], esi_11, ecx_98)
                        sub_4040c4(&ebp_1[-0x8e], "!^", ebp_1[-0x8f])
                        sub_47b650(*data_530304, *data_52fffc, ebp_1[-0x8e])
                    esi_11 += 1
                    i_7 = i_26
                    i_26 -= 1
                while (i_7 != 1)
            
            *(esp_79 - 4) = 0
            sub_47b650(*data_530304, *data_52fffc, U"!")
            *(esp_79 - 8) = 0
            sub_47b650(*data_530304, *data_52fffc, U"!")
            *(esp_79 - 0xc) = 0
            void* esp_88 = esp_79 - 0xc
            sub_47b650(*data_530304, *data_52fffc, 0)
            int32_t i_27 = *data_5300d0
            
            if (i_27 s> 0)
                int32_t ebx_13 = 1
                int32_t i_8
                
                do
                    *(esp_88 - 4) = 0
                    *(esp_88 - 8) = &ebp_1[-0x93]
                    int32_t ecx_106
                    ecx_106.b = 1
                    ebp_1[-1]
                    sub_520a04(ecx_106, *(ebp_1[-0x13] + (ebx_13 << 2) + 0xba20))
                    esp_88 -= 4
                    sub_4040c4(&ebp_1[-0x92], U"!", ebp_1[-0x93])
                    sub_47b650(*data_530304, *data_52fffc, ebp_1[-0x92])
                    ebx_13 += 1
                    i_8 = i_27
                    i_27 -= 1
                while (i_8 != 1)
            
            if (*data_5300d0 s< 6)
                *(esp_88 - 4) = 0
                esp_88 -= 4
                sub_47b650(*data_530304, *data_52fffc, U"!")
            
            void* esp_91
            
            if (*(*data_5301f4 + 4) != 7)
                *(esp_88 - 4) = 0
                esp_91 = esp_88 - 4
                sub_47b650(*data_530304, *data_52fffc, "Summe")
            else
                *(esp_88 - 4) = 0
                esp_91 = esp_88 - 4
                sub_47b650(*data_530304, *data_52fffc, "Cash")
            
            void* eax_361
            eax_361.b = *(*data_5301f4 + 4)
            char temp42_1 = eax_361.b
            eax_361.b -= 4
            
            if (temp42_1 != 4)
                char temp46_1 = eax_361.b
                eax_361.b -= 3
                
                if (temp46_1 != 3)
                    *(esp_91 - 4) = 0
                    void* esp_92 = esp_91 - 4
                    sub_47b650(*data_530304, *data_52fffc, 0)
                    int32_t i_28 = *data_5300d0
                    
                    if (i_28 s> 0)
                        int32_t ebx_14 = 1
                        int32_t i_9
                        
                        do
                            *(esp_92 - 4) = 0
                            *(esp_92 - 8) = &ebp_1[-0x95]
                            int32_t ecx_113
                            ecx_113.b = 1
                            ebp_1[-1]
                            sub_520a04(ecx_113, *(ebp_1[-0x13] + (ebx_14 << 2) + 0xba44))
                            esp_92 -= 4
                            sub_4040c4(&ebp_1[-0x94], U"!", ebp_1[-0x95])
                            sub_47b650(*data_530304, *data_52fffc, ebp_1[-0x94])
                            ebx_14 += 1
                            i_9 = i_28
                            i_28 -= 1
                        while (i_9 != 1)
                    
                    if (*data_5300d0 s< 6)
                        *(esp_92 - 4) = 0
                        esp_92 -= 4
                        sub_47b650(*data_530304, *data_52fffc, U"!")
                    
                    if (*(*data_5301f4 + 4) != 1)
                        if (*(*data_5301f4 + 4) != 6)
                            goto label_523933
                        
                        goto label_523902
                    
                    if (*(*data_5301f4 + 0x1d37e) != 0 || *(*data_5301f4 + 4) == 6)
                    label_523902:
                        *(esp_92 - 4) = 0
                        esp_91 = esp_92 - 4
                        sub_4040c4(&ebp_1[-0x96], "Gewinn/Verlust ", ebp_1[-0x12])
                        sub_47b650(*data_530304, *data_52fffc, ebp_1[-0x96])
                    else
                    label_523933:
                        *(esp_92 - 4) = 0
                        esp_91 = esp_92 - 4
                        sub_47b650(*data_530304, *data_52fffc, "Gewinn/Verlust")
            
            *(esp_91 - 4) = 0
            void* esp_95 = esp_91 - 4
            sub_47b650(*data_530304, *data_52fffc, 0)
            i_18 = *data_5300d0
            
            if (i_18 s> 0)
                int32_t i_10
                
                do
                    *(esp_95 - 4) = 0
                    esp_95 -= 4
                    sub_47b650(*data_530304, *data_52fffc, 0)
                    i_10 = i_18
                    i_18 -= 1
                while (i_10 != 1)
            
            *(esp_95 - 4) = 0
            sub_47b650(*data_530304, *data_52fffc, 0)
            *(esp_95 - 8) = 0
            esp_10 = esp_95 - 8
            sub_47b650(*data_530304, *data_52fffc, 0)
        
        void* eax_392 = data_5302c8
        *eax_392
        bool o_51 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_51)
            sub_403010()
            noreturn
        
        void* edx_220 = data_53098c
        *edx_220
        bool o_52 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_52)
            sub_403010()
            noreturn
        
        void* ebx_15 = *(*data_530304 + 0xab0) + *eax_392 * 0x81c0 + *edx_220 * 0x118 - 0xf8
        int32_t eax_394
        eax_394.w = *(ebx_15 + 0x76)
        
        if (eax_394.w s>= *(ebx_15 + 0xec))
            *(ebx_15 + 0x74) = 0
        else
            int32_t eax_395 = sx.d(*(ebx_15 + 0xec))
            int32_t edx_222 = sx.d(*(ebx_15 + 0x76))
            
            if (add_overflow(eax_395, neg.d(edx_222)))
                sub_403010()
                noreturn
            
            *(ebx_15 + 0x74) = eax_395.w - edx_222.w
        
        sub_478234(*data_530304, *data_5302c8, sx.d(*(ebx_15 + 0x8b)))
        sub_478234(*data_530304, *data_5302c8, sx.d(*(ebx_15 + 0x8c)))
        
        if (sub_4c094c() != 0 && sub_4c2f1c(1) != 0 && *(*data_530454 + 0x270) s>= 0)
            void* eax_405 = data_5302c8
            *eax_405
            bool o_54 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_54)
                sub_403010()
                noreturn
            
            void* edx_230 = data_53098c
            *edx_230
            bool o_55 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_55)
                sub_403010()
                noreturn
            
            *(*(*data_530304 + 0xab0) + *eax_405 * 0x81c0 + *edx_230 * 0x118 - 0x84) = 0
            void* eax_408 = data_5302c8
            *eax_408
            bool o_56 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_56)
                sub_403010()
                noreturn
            
            void* edx_235 = data_53098c
            *edx_235
            bool o_57 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_57)
                sub_403010()
                noreturn
            
            *(*(*data_530304 + 0xab0) + *eax_408 * 0x81c0 + *edx_235 * 0x118 + 0x2c4) = 0
        
        ebp_7, esi_8 = sub_46910c(*data_530304, "f_weiter2", &ebp_1[-0x97])
        sub_404054(ebp_7 - 0x1a4, *(ebp_7 - 0x25c), 0xff)
        void* eax_414 = data_5302c8
        *eax_414
        bool o_58 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_58)
            sub_403010()
            noreturn
        
        int32_t ecx_129
        ecx_129.b = 0x19
        sub_402bdc(*(*data_530304 + 0xab0) + *eax_414 * 0x81c0 + 0x140, ebp_7 - 0x1a4, ecx_129.b)
        
        if (*(ebp_7 - 0x29) != 0)
            ebp_7, esi_8 = sub_46910c(*data_530304, "f_ende", ebp_7 - 0x260)
            sub_404054(ebp_7 - 0x1a4, *(ebp_7 - 0x260), 0xff)
            void* eax_420 = data_5302c8
            *eax_420
            bool o_59 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_59)
                sub_403010()
                noreturn
            
            int32_t ecx_133
            ecx_133.b = 0x19
            sub_402bdc(*(*data_530304 + 0xab0) + *eax_420 * 0x81c0 + 0x140, ebp_7 - 0x1a4, ecx_133.b)
        
        *(esp_10 - 4) = *(ebp_7 - 0x30)
        ecx_76, edx_146, ebx_11 = sub_47ab08(*data_530304, *data_5302c8, *data_530964, x87_r0)
        esp_61 = esp_10
    else
        int32_t i_20 = *data_5300d0
        
        if (i_20 s> 0)
            int32_t esi_4 = 1
            void* ebx_7 = &ebp_1[-0x28]
            int32_t i_11
            
            do
                *ebx_7 = esi_4.w
                int32_t eax_113 = sub_4cc6dc(esi_4)
                bool o_30 = unimplemented  {imul edx, esi, 0x41}
                
                if (o_30)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + esi_4 * 0x208 + 0x20078) = eax_113
                esi_4 += 1
                ebx_7 += 2
                i_11 = i_20
                i_20 -= 1
            while (i_11 != 1)
        
        int32_t edi_5 = *data_5300d0
        int32_t i_21 = edi_5 - 1
        
        if (add_overflow(edi_5, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_21 s> 0)
            int32_t i_12
            
            do
                int32_t eax_115 = *data_5300d0
                
                if (add_overflow(eax_115, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (eax_115 - 1 s> 0)
                    ebp_1[-0x14] = eax_115 - 1
                    void* ebx_8 = ebp_1 - 0x9e
                    int32_t j_2
                    
                    do
                        if (sub_520e50(sx.d(*ebx_8), sx.d(*(ebx_8 - 2))).b != 0)
                            int16_t esi_5 = *(ebx_8 - 2)
                            *(ebx_8 - 2) = *ebx_8
                            *ebx_8 = esi_5
                        
                        ebx_8 += 2
                        j_2 = ebp_1[-0x14]
                        ebp_1[-0x14] -= 1
                    while (j_2 != 1)
                
                i_12 = i_21
                i_21 -= 1
            while (i_12 != 1)
        
        ebp_1[-1]
        sub_518820()
        *(esp_10 - 4) = 0
        sub_47b650(*data_530304, *data_53098c, U"!")
        *(esp_10 - 8) = 0
        void* ebp_2 = sub_46910c(*data_530304, "f_platz", &ebp_1[-0x6b])
        sub_4040c4(ebp_2 - 0x1a8, U"!", *(ebp_2 - 0x1ac))
        sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x1a8))
        *(esp_10 - 0xc) = 0
        sub_47b650(*data_530304, *data_53098c, "Name")
        *(esp_10 - 0x10) = 0
        void* ebp_3 = sub_46910c(*data_530304, "f_spiel", ebp_2 - 0x1b4)
        sub_4040c4(ebp_3 - 0x1b0, U"!", *(ebp_3 - 0x1b4))
        sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1b0))
        *(esp_10 - 0x14) = 0
        void* esp_27 = esp_10 - 0x14
        sub_47b650(*data_530304, *data_53098c, "!Cash")
        *(ebp_3 - 0x28) = 9
        *(ebp_3 - 0x24) = 1
        *(ebp_3 - 0x10) = sx.d(*(ebp_3 - 0xa0))
        *(ebp_3 - 0x20) = 0
        int32_t i_22 = *data_5300d0
        
        if (i_22 s> 0)
            int32_t esi_6 = 1
            void* ebx_9 = ebp_3 - 0xa0
            int32_t i_13
            
            do
                *(ebp_3 - 0x14) = *(ebp_3 - 0x10)
                *(ebp_3 - 0x10) = sx.d(*ebx_9)
                int32_t ecx_40
                
                if (sub_4c1090() == 0)
                    if (sub_4c094c() != 0)
                        ecx_40.b = 1
                        
                        if (sub_512d1c(*data_530454, *(ebp_3 - 0x10), ecx_40.b) != 0)
                            *(ebp_3 - 0x24) = esi_6
                    
                    *(ebp_3 - 0x10)
                    bool o_33 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                    
                    if (o_33)
                        sub_403010()
                        noreturn
                    
                    *(ebp_3 - 0x14)
                    bool o_34 = unimplemented  {imul edx, dword [ebp-0x14], 0x41}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + *(ebp_3 - 0x10) * 0x208 + 0x20078)
                            s< *(*data_5301f4 + *(ebp_3 - 0x14) * 0x208 + 0x20078))
                        *(ebp_3 - 0x24) = esi_6
                    
                    *(ebp_3 - 0x10)
                    int32_t eax_149 = *(ebp_3 - 0x10) * 0x41
                    bool o_35 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + (eax_149 << 3) + 0x200a4) s> 0
                            && *(*data_5301f4 + (eax_149 << 3) + 0x20090) s> *(ebp_3 - 0x24))
                        *(ebp_3 - 0x24) = *(*data_5301f4 + (eax_149 << 3) + 0x20090)
                    
                    if (sub_4c094c() != 0)
                        int32_t eax_154 = sub_50a53c(*(ebp_3 - 0x10)) * 0xe9
                        bool o_36 = unimplemented  {imul eax, eax, 0xe9}
                        
                        if (o_36)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_530454 + (eax_154 << 2) + 0x18c) != 0)
                            int32_t eax_157 = sub_50a53c(*(ebp_3 - 0x10)) * 0xe9
                            bool o_37 = unimplemented  {imul eax, eax, 0xe9}
                            
                            if (o_37)
                                sub_403010()
                                noreturn
                            
                            *(ebp_3 - 0x24) = *(*data_530454 + (eax_157 << 2) + 0x18c)
                else
                    int32_t eax_142
                    eax_142, ecx_40 = sub_528538(*data_5302c4, *(ebp_3 - 0x10))
                    *(ebp_3 - 0x24) = eax_142
                
                if (sub_4c094c() != 0 && sub_512ce8(*data_530454, *(ebp_3 - 0x10)) != 0)
                    *(ebp_3 - 0x24) = 0
                    int32_t temp49_1 = *(ebp_3 - 0x20)
                    *(ebp_3 - 0x20) += 1
                    
                    if (add_overflow(temp49_1, 1))
                        sub_403010()
                        noreturn
                
                if (*(ebp_3 - 0x24) s> 0)
                    char eax_163 = sub_4c094c()
                    char eax_166
                    
                    if (eax_163 != 0)
                        ecx_40.b = 1
                        eax_166 = sub_512d1c(*data_530454, *(ebp_3 - 0x10), ecx_40.b)
                    
                    void* esp_28
                    
                    if (eax_163 == 0 || eax_166 == 0)
                        *(esp_27 - 4) = 0
                        esp_28 = esp_27 - 4
                        sub_47b650(*data_530304, *data_53098c, U"!")
                    else
                        *(esp_27 - 4) = 0
                        esp_28 = esp_27 - 4
                        sub_47b650(*data_530304, *data_53098c, 0x524318)
                    
                    *(esp_28 - 4) = 0
                    *(esp_28 - 8) = &data_5242cc
                    sub_408e1c(*(ebp_3 - 0x24), ebp_3 - 0x1bc)
                    *(esp_28 - 0xc) = *(ebp_3 - 0x1bc)
                    *(esp_28 - 0x10) = &data_524324
                    sub_404138(ebp_3 - 0x1b8, 3)
                    sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1b8))
                    *(esp_28 - 4) = 0
                    *(esp_28 - 8) = 0
                    *(esp_28 - 0xc) = ebp_3 - 0x1c0
                    int32_t ecx_45
                    ecx_45.b = 1
                    sub_5207dc(*(ebp_3 - 4), *(ebp_3 - 0x10), ecx_45)
                    sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1c0))
                    *(esp_28 - 4) = 0
                    *(esp_28 - 8) = ebp_3 - 0x1c8
                    *(ebp_3 - 4)
                    sub_520a04(0, *(ebp_3 + (*(ebp_3 - 0x10) << 2) - 0x80))
                    sub_4040c4(ebp_3 - 0x1c4, U"!", *(ebp_3 - 0x1c8))
                    sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1c4))
                    
                    if (sub_4c2d7c(*(ebp_3 - 0x10)) == 0)
                    label_522ef5:
                        char eax_194 = sub_4c094c()
                        char eax_197
                        
                        if (eax_194 != 0)
                            eax_197 = sub_512ce8(*data_530454, *(ebp_3 - 0x10))
                        
                        if (eax_194 == 0 || eax_197 == 0)
                            if (sub_4c094c() == 0)
                            label_52300f:
                                *(ebp_3 - 0x10)
                                bool o_45 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                
                                if (o_45)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + *(ebp_3 - 0x10) * 0x208 + 0x200a4) == 0)
                                    *(esp_28 - 8) = 0
                                    esp_27 = esp_28 - 8
                                    ebp_3, esi_6 =
                                        sub_46910c(*data_530304, "f_ausgeschieden", ebp_3 - 0x1e0)
                                    sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1e0))
                                else
                                    *(esp_28 - 8) = 0
                                    esp_27 = esp_28 - 8
                                    ebp_3, esi_6 =
                                        sub_46910c(*data_530304, "f_ausgeschieden", ebp_3 - 0x1dc)
                                    sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1dc))
                                    
                                    if (*(ebp_3 - 0x28) == 9)
                                        if (add_overflow(esi_6, neg.d(*(ebp_3 - 0x20))))
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebp_3 - 0x28) = esi_6 - *(ebp_3 - 0x20)
                            else
                                if (sub_512d1c(*data_530454, *(ebp_3 - 0x10), 0) == 0)
                                    goto label_52300f
                                
                                *(ebp_3 - 0x10)
                                bool o_42 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                
                                if (o_42)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + *(ebp_3 - 0x10) * 0x208 + 0x200a4) != 0)
                                    goto label_52300f
                                
                                *(esp_28 - 8) = 0
                                *(esp_28 - 0xc) = &data_524330
                                *(ebp_3 - 0x10)
                                bool o_43 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                
                                if (o_43)
                                    sub_403010()
                                    noreturn
                                
                                ebp_3, i_22 = sub_4cda5c(
                                    *(*data_5301f4 + *(ebp_3 - 0x10) * 0x208 + 0x20078), 0, 
                                    ebp_3 - 0x1d8)
                                *(esp_28 - 0x10) = *(ebp_3 - 0x1d8)
                                *(esp_28 - 0x14) = &data_52433c
                                sub_404138(ebp_3 - 0x1d4, 3)
                                esp_27 = esp_28 - 4
                                sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1d4))
                                
                                if (*(ebp_3 - 0x28) == 9)
                                    if (add_overflow(esi_6, neg.d(*(ebp_3 - 0x20))))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebp_3 - 0x28) = esi_6 - *(ebp_3 - 0x20)
                        else
                            *(esp_28 - 8) = 0
                            esp_27 = esp_28 - 8
                            sub_47b650(*data_530304, *data_53098c, 0)
                            
                            if (*(ebp_3 - 0x28) == 9)
                                if (add_overflow(esi_6, neg.d(*(ebp_3 - 0x20))))
                                    sub_403010()
                                    noreturn
                                
                                *(ebp_3 - 0x28) = esi_6 - *(ebp_3 - 0x20)
                    else
                        *(ebp_3 - 0x10)
                        bool o_39 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                        
                        if (o_39)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + *(ebp_3 - 0x10) * 0x208 + 0x20078)
                                s< *(*data_5301f4 + 0x21108))
                            goto label_522ef5
                        
                        *(esp_28 - 8) = 0
                        esp_27 = esp_28 - 8
                        *(ebp_3 - 0x10)
                        bool o_40 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                        
                        if (o_40)
                            sub_403010()
                            noreturn
                        
                        ebp_3, i_22 = sub_4cda5c(*(*data_5301f4 + *(ebp_3 - 0x10) * 0x208 + 0x20078), 
                            0, ebp_3 - 0x1d0)
                        sub_4040c4(ebp_3 - 0x1cc, U"!", *(ebp_3 - 0x1d0))
                        sub_47b650(*data_530304, *data_53098c, *(ebp_3 - 0x1cc))
                
                esi_6 += 1
                ebx_9 += 2
                i_13 = i_22
                i_22 -= 1
            while (i_13 != 1)
        
        int32_t i_17 = 5
        int32_t i_14
        
        do
            *(esp_27 - 4) = 0
            esp_27 -= 4
            sub_47b650(*data_530304, *data_53098c, 0)
            i_14 = i_17
            i_17 -= 1
        while (i_14 != 1)
        i_18 = *data_5300d0
        
        if (i_18 s> 0)
            int32_t esi_7 = 1
            void* ebx_10 = ebp_3 - 0xa0
            int32_t i_15
            
            do
                if (*ebx_10 == 1)
                    sub_408e1c(esi_7, ebp_3 - 0x1e4)
                    *(esp_27 - 4) = ebp_3 - 0x1e4
                    sub_408e1c(*(ebp_3 - 0x28), ebp_3 - 0x1e8)
                    sub_404080(*(esp_27 - 4), *(ebp_3 - 0x1e8))
                    *(esp_27 - 4) = *(ebp_3 - 0x1e4)
                    esp_27 -= 4
                    esi_7, i_18 = sub_47b0c8(*data_530304, *data_5302c8, *data_53098c)
                
                esi_7 += 1
                ebx_10 += 2
                i_15 = i_18
                i_18 -= 1
            while (i_15 != 1)
        
        void* esp_51
        void* ebp_5
        
        if (*(*data_5301f4 + 0x4584) != 1)
            void* ebp_6 = sub_46910c(*data_530304, "f_ssnach1", ebp_3 - 0x1f8)
            *(esp_27 - 4) = *(ebp_6 - 0x1f8)
            sub_408e1c(*(*data_5301f4 + 0x4584), ebp_6 - 0x1fc)
            *(esp_27 - 8) = *(ebp_6 - 0x1fc)
            ebp_5 = sub_46910c(*data_530304, "f_ssnach3", ebp_6 - 0x200)
            *(esp_27 - 0xc) = *(ebp_5 - 0x200)
            *(esp_27 - 0x10) = &data_524388
            sub_404138(ebp_5 - 0x30, 4)
            esp_51 = esp_27
        else
            void* ebp_4 = sub_46910c(*data_530304, "f_ssnach1", ebp_3 - 0x1ec)
            *(esp_27 - 4) = *(ebp_4 - 0x1ec)
            sub_408e1c(*(*data_5301f4 + 0x4584), ebp_4 - 0x1f0)
            *(esp_27 - 8) = *(ebp_4 - 0x1f0)
            ebp_5 = sub_46910c(*data_530304, "f_ssnach2", ebp_4 - 0x1f4)
            *(esp_27 - 0xc) = *(ebp_5 - 0x1f4)
            *(esp_27 - 0x10) = &data_524388
            sub_404138(ebp_5 - 0x30, 4)
            esp_51 = esp_27
        
        if (mods.dp.d(sx.q(*(*data_5301f4 + 0x4584)), *(*data_5301f4 + 0x20078)) == 0)
            *(esp_51 - 4) = *(ebp_5 - 0x30)
            ebp_5 = sub_46910c(*data_530304, "f_blindsup", ebp_5 - 0x204)
            *(esp_51 - 8) = *(ebp_5 - 0x204)
            sub_40401c(sub_4c0984(*(*data_5301f4 + 0x21108), ebp_5 - 0x1a4), ebp_5 - 0x1a4)
            *(esp_51 - 0xc) = *(ebp_5 - 0x208)
            *(esp_51 - 0x10) = &data_524324
            sub_404138(ebp_5 - 0x30, 4)
        
        *(esp_51 - 4) = *(ebp_5 - 0x30)
        sub_47ab08(*data_530304, *data_5302c8, *data_530964, x87_r0)
        esp_61 = esp_51
        ebp_7, esi_8 = sub_46910c(*data_530304, "f_weiter", ebp_5 - 0x20c)
        sub_404054(ebp_7 - 0x1a4, *(ebp_7 - 0x20c), 0xff)
        edx_146 = ebp_7 - 0x1a4
        void* eax_270 = data_5302c8
        *eax_270
        bool o_47 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_47)
            sub_403010()
            noreturn
        
        int32_t ecx_75
        ecx_75.b = 0x19
        ecx_76 = sub_402bdc(*(*data_530304 + 0xab0) + *eax_270 * 0x81c0 + 0x140, edx_146, ecx_75.b)
        
        if (*(ebp_7 - 0x29) != 0)
            ebp_7, esi_8 = sub_46910c(*data_530304, "f_ende", ebp_7 - 0x210)
            sub_404054(ebp_7 - 0x1a4, *(ebp_7 - 0x210), 0xff)
            edx_146 = ebp_7 - 0x1a4
            void* eax_276 = data_5302c8
            *eax_276
            bool o_48 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_48)
                sub_403010()
                noreturn
            
            int32_t ecx_80
            ecx_80.b = 0x19
            ecx_76 = sub_402bdc(*(*data_530304 + 0xab0) + *eax_276 * 0x81c0 + 0x140, edx_146, ecx_80.b)
    
    if ((*(ebp_7 - 0x29) != 0 || *(*data_530304 + 0xcf9) == 0) && *(*data_530304 + 0xcf8) == 0
            && (*(*data_5301f4 + 4) != 7 || *(*data_530304 + 0xcf9) == 0) && *(ebp_7 - 0x90) == 0)
        sub_4837ec(*data_530304, *data_5305b4, false)
        sub_4837ec(*data_530304, *data_530894, false)
        *data_530304
        sub_51b730()
        
        if (sub_4c094c() == 0)
            ebx_11 = 0
        else
            void* eax_441 = data_530674
            *eax_441
            bool o_60 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_60)
                sub_403010()
                noreturn
            
            if (*(*(*data_530304 + 0xab0) + *eax_441 * 0x81c0 + 1) != 0)
                ebx_11.b = 1
            else
                ebx_11 = 0
        
        void* eax_443 = data_5302c8
        *eax_443
        bool o_61 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_61)
            sub_403010()
            noreturn
        
        if (*(*(*data_530304 + 0xab0) + *eax_443 * 0x81c0 + 1) != 0 && sub_4c2f1c(1) != 0)
            void* eax_446 = data_530674
            *eax_446
            bool o_62 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_62)
                sub_403010()
                noreturn
            
            if (sx.d(*(*(*data_530304 + 0xab0) + *eax_446 * 0x81c0 + 0x813a)) == *data_5302c8)
                ebx_11 = 0
        
        if (ebx_11.b != 0)
            void* eax_449 = data_530674
            *eax_449
            bool o_63 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_63)
                sub_403010()
                noreturn
            
            *(*(*data_530304 + 0xab0) + *eax_449 * 0x81c0 + 0x813a) = (*data_530630).w
        
        if (*(ebp_7 - 0x29) == 0 && sub_4c0924() != 0 && *(*data_530454 + 0x1b4) == 0)
            sub_510f54(*data_530454, 0)
        
        if (sub_4c094c() != 0)
            *(*data_530454 + 0x9c) = 3
            sub_513e4c(*data_530454, 0)
        
        if (sub_4c094c() == 0)
            if (*(ebp_7 - 5) == 0 && *(*data_5301f4 + 0x111f9) == 0)
                if (*(*data_5301f4 + 0x111f8) == 0)
                    *(esp_61 - 4) = 1
                    void* ebp_10 = sub_46910c(*data_530304, "f_weiter", ebp_7 - 0x278)
                    *(esp_61 - 8) = *(ebp_10 - 0x278)
                    *(esp_61 - 0xc) = 0x64
                    *(esp_61 - 0x10) = ebx_11
                    esp_61 -= 0x10
                    ebp_7, esi_8 = sub_46910c(*data_530304, "f_spielergebnis", ebp_10 - 0x27c)
                    sub_4748fc(*data_530304, *(ebp_7 - 0xc), *(ebp_7 - 0x27c))
                    *(*data_530304 + 0x1334) = 1
                else
                    sub_4837ec(*data_530304, *data_5307c8, false)
                    *(esp_61 - 4) = 1
                    void* ebp_9 = sub_46910c(*data_530304, "f_weiter", ebp_7 - 0x270)
                    *(esp_61 - 8) = *(ebp_9 - 0x270)
                    *(esp_61 - 0xc) = 0x65
                    *(esp_61 - 0x10) = ebx_11
                    esp_61 -= 0x10
                    ebp_7, esi_8 = sub_46910c(*data_530304, "f_spielergebnis", ebp_9 - 0x274)
                    sub_4748fc(*data_530304, *(ebp_7 - 0xc), *(ebp_7 - 0x274))
                    *(*data_530304 + 0x1334) = 1
            
            if (sub_4c094c() != 0)
                sub_513e4c(*data_530454, 0)
            
            if (*(ebp_7 - 0x29) == 0 && sub_4c094c() != 0)
                *(*data_530454 + 0x1b4) = 0
                int32_t ecx_150 = sub_510f54(*data_530454, 0)
                *data_5301f4
                sub_520efc(ecx_150, 1, esi_8, i_18)
        else
            if (*(*data_530454 + 0x1e2) == 0)
                void* ebp_8 = sub_46910c(*data_530304, "f_weiter2", ebp_7 - 0x26c)
                *(esp_61 - 4) = *(ebp_8 - 0x26c)
                sub_47ab08(*data_530304, *data_530630, 3, x87_r0)
                *(esp_61 - 4) = *(ebp_8 - 0xc)
                esp_61 -= 4
                int32_t ecx_143
                ecx_143, ebp_7 = sub_4742c0(*data_530304, *data_530630, *data_530014)
                
                if (sub_4c094c() != 0)
                    void* eax_478 = data_530674
                    *eax_478
                    bool o_64 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_64)
                        sub_403010()
                        noreturn
                    
                    if (*(*(*data_530304 + 0xab0) + *eax_478 * 0x81c0 + 1) != 0)
                        sub_469ac0(*data_530304, *data_530674, ecx_143)
            else
                sub_40fa94(*data_530630, 3, ebp_7 - 0x268)
                *(esp_61 - 4) = ebp_7 - 0x268
                *(esp_61 - 8) = ebp_7 - 0x2a
                void* ebx_17 = *data_530304
                void* ecx_138
                ecx_138.b = 0x38
                *(ebx_17 + 0x1d4)
                (*(ebx_17 + 0x1d0))()
            
            if (sub_4c2f1c(1) != 0 || *(*data_530454 + 0x1e3) != 0)
                *(*data_530454 + 0x1e2) = 1
            
            if (sub_509024() != 0)
                *data_530144 = 1
                sub_528320(*data_5301f4, *(*data_5301f4 + 4), 1)
        
        if (sub_4c0924() == 0 && (*data_530144 != 0 || *(ebp_7 - 5) != 0))
            sub_4836b0(*data_530304, *data_5302c8)
    else
        char eax_539
        
        if (*(ebp_7 - 0x29) != 0 && *(*data_5301f4 + 4) == 7
                && (*(*data_530304 + 0xcf9) != 0 || *(*data_530304 + 0xcf8) != 0))
            eax_539, edx_146 = sub_52ada4(*data_5309d4)
        
        if (*(ebp_7 - 0x29) == 0 || *(*data_5301f4 + 4) != 7
                || (*(*data_530304 + 0xcf9) == 0 && *(*data_530304 + 0xcf8) == 0) || eax_539 != 0)
            ebp_7 = sub_4c2b1c(nullptr, edx_146, ecx_76)
            sub_478234(*data_530304, *data_5302c8, 2)
            
            if (*(*data_5301f4 + 4) == 7)
                if (sub_52ada4(*data_5309d4) != 0)
                    if (*(*data_530304 + 0xcf9) != 0)
                        sub_52ac00(*data_5302c4)
                        sub_4040c4(ebp_7 - 0x280, *(*data_530304 + 0xa64), "\data\sim.txt")
                        void* ebp_11 = sub_52a8cc(*data_5302c4, *(ebp_7 - 0x280))
                        sub_52a808(*data_5302c4)
                        char* ecx_151 =
                            sub_4040c4(ebp_11 - 0x284, *(*data_530304 + 0xa64), "\data\sim.txt")
                        sub_52a83c(*data_5302c4, *(ebp_11 - 0x284), ecx_151)
                    
                    ebp_7 = sub_52afe4(*data_5309d4)
                    sub_52add4(*data_5309d4)
                
                sub_52adb0(*data_5309d4)
            
            sub_4837d0(*data_530304, *data_5302c8)
            *data_530144 = 1
            sub_528320(*data_5301f4, *(*data_5301f4 + 4), 1)
        else
            ebp_7 = sub_4c2b1c(nullptr, edx_146, ecx_76)
            *data_530144 = 1
            sub_528320(*data_5301f4, *(*data_5301f4 + 4), 0)
            sub_52adbc(*data_5309d4)
            *(*data_5301f4 + 0x21108) = *(*data_5301f4 + 0x20074)
    
    *(esp_61 + 8)
    fsbase->NtTib.ExceptionList = *esp_61
    *(esp_61 + 8) = sub_5242bc
    sub_403e1c(ebp_7 - 0x284, 7)
    sub_403e1c(ebp_7 - 0x260, 0x2f)
    sub_404754(ebp_7 - 0x90, sub_51859c)
    sub_403df8(ebp_7 - 0x48)
    sub_403e1c(ebp_7 - 0x38, 3)
    sub_403df8(ebp_7 - 0xc)
    return ebp_7 - 0xc
}
