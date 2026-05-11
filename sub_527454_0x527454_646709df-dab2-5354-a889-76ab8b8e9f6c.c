// ============================================================
// 函数名称: sub_527454
// 虚拟地址: 0x527454
// WARP GUID: 646709df-dab2-5354-a889-76ab8b8e9f6c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_510f54, sub_47a1c0, sub_4ee134, sub_4bdf6c, sub_402b4c, sub_403010, sub_511e08, sub_50a150, sub_512f20, sub_48e950, sub_516e74, sub_4ce5b4, sub_5244dc, sub_50d454, sub_512f10, sub_510e38, sub_527230, sub_4c62e8, sub_511230, sub_48e980, sub_4c1e14, sub_52448c, sub_4b77e0, sub_50d318, sub_4c1dd8, sub_512d1c, sub_5193d0, sub_4c0924
// [被调用的父级函数]: sub_4dad04
// ============================================================

char* __convention("regparm")sub_527454(char* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* edi
    void* var_a8 = edi
    char* esi = arg1
    arg1.b = esi[4]
    char temp0 = arg1.b
    arg1.b -= 8
    
    if (temp0 u< 8)
        if (*(data_530598 + 0x2c) s<= *(esi + 0x1001c) && esi[0x1014c] == 2
                && *(*data_5301f4 + 0x111f9) == 0)
            if (sub_4c0924() != 0 && *(*data_530454 + 0x1b4) == 0 && *(*data_5301f4 + 0x10020) == 1)
                sub_510f54(*data_530454, 0)
            
            int32_t eax_13 = *(*data_530380 + 0xc3d24)
            
            if (eax_13 s> 0)
                data_530380
                
                if (eax_13 != 4 && *(data_530258 + 0x10) == 0 && esi[4] == 7)
                    int32_t i = 1
                    void* edi_1 = data_5301b0
                    
                    do
                        bool o_1 = unimplemented  {imul eax, ebx, 0xa9}
                        
                        if (o_1)
                            sub_403010()
                            noreturn
                        
                        sub_52448c(*data_5301f4 + i * 0x2a4 + 8, edi_1)
                        sub_516e74(edi_1)
                        i += 1
                        edi_1 += 0x8d14
                    while (i != 0x15)
                    
                    *data_530380
                    void var_9c
                    char* esi_1
                    ebp_1, esi_1 = sub_4b77e0(&var_9c, *(*data_5301f4 + 0x10020))
                    int16_t* esi_3
                    int16_t* edi_3
                    edi_3, esi_3 = __builtin_memcpy(data_530258, &ebp_1[-0x26], 0x10)
                    *edi_3 = *esi_3
                    edi = &edi_3[1]
                    esi = esi_1
            
            if (sub_4c0924() == 0)
            label_527639:
                
                if (sub_4c0924() == 0)
                label_52768c:
                    
                    if (sub_4c0924() != 0 && *(*data_530454 + 0x1b4) != 0
                            && sub_511230(*data_530454, 0) == 0x64 && sub_510e38(*data_530454) == 0
                            && *(*data_5301f4 + 0x10020) == 1)
                        if (*(*data_530304 + 0xcec) == 0)
                            int32_t var_ac_4 = sx.d(*(esi + 0x10874))
                            sub_527230(0, 2, esi, 0, 0, 0)
                        else
                            sub_4bdf6c()
                else
                    if (sub_512d1c(*data_530454, *(*data_5301f4 + 0x10020), 0) == 0)
                        goto label_52768c
                    
                    if (sub_511e08(*data_530454) != 0)
                        goto label_52768c
                    
                    int32_t var_ac_3 = sx.d(*(esi + 0x10874))
                    sub_527230(0, 2, esi, 1, 0, 0)
            else
                *(esi + 0x10020)
                bool o_2 = unimplemented  {imul eax, dword [esi+0x10020], 0xa9}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                char eax_27
                
                if (esi[*(esi + 0x10020) * 0x2a4 + 0x2a8] == 1)
                    eax_27 = sub_50d318(*data_530454)
                
                if (esi[*(esi + 0x10020) * 0x2a4 + 0x2a8] != 1 || eax_27 != 0)
                    int32_t ebx_1 = *(esi + 0x10020)
                    bool o_3 = unimplemented  {imul eax, ebx, 0xa9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    if (esi[ebx_1 * 0x2a4 + 0x2a8] != 2 || ebx_1 == 1)
                        goto label_527639
                    
                    goto label_5275e2
                
            label_5275e2:
                
                if (sub_512f10(*data_530454) == 0)
                    goto label_527639
                
                if (sub_50d454(*(*data_530454 + 0xc)) != 0)
                    goto label_527639
                
                int32_t edx_7 = sub_512f20(*data_530454, &ebp_1[-0x21])
                int32_t var_ac_2 = ebp_1[-0x19]
                char eax_40 = sub_50a150(sx.d(*(ebp_1 - 0x7d)), edx_7)
                sub_527230(ebp_1[-0x1a], eax_40, *data_5301f4, 0, 0, 0)
            
            *(esi + 0x10020)
            bool o_4 = unimplemented  {imul eax, dword [esi+0x10020], 0xa9}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (esi[*(esi + 0x10020) * 0x2a4 + 0x2a8] == 1)
                char eax_70 = sub_4c0924()
                char eax_73
                
                if (eax_70 != 0)
                    eax_73 = sub_50d318(*data_530454)
                
                if (eax_70 == 0 || eax_73 != 0)
                    sub_48e950(*data_530304, 4)
                    int32_t i_1 = 1
                    edi = data_5301b0
                    int32_t ecx_3
                    
                    do
                        bool o_5 = unimplemented  {imul eax, ebx, 0xa9}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        sub_52448c(*data_5301f4 + i_1 * 0x2a4 + 8, edi)
                        ecx_3 = sub_516e74(edi)
                        i_1 += 1
                        edi += 0x8d14
                    while (i_1 != 0x15)
                    
                    sub_48e980(*data_530304, 4, ecx_3)
                    
                    if (esi[0x10268] == 0)
                        int32_t ecx_4 = sub_48e950(*data_530304, 3)
                        
                        if (esi[4] == 7)
                            ecx_4 = sub_4bdf6c()
                        
                        sub_48e980(*data_530304, 3, ecx_4)
                    
                    if (*(*data_5301f4 + 4) != 1)
                        int32_t i_2 = 1
                        edi = data_5301b0
                        
                        do
                            bool o_6 = unimplemented  {imul eax, ebx, 0xa9}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            sub_5244dc(*data_5301f4 + i_2 * 0x2a4 + 8, edi)
                            i_2 += 1
                            edi += 0x8d14
                        while (i_2 != 0x15)
        
        sub_5193d0(*data_5303b8, 0)
        void* eax_92
        
        for (int32_t i_3 = 0; i_3 != 0xb; i_3 += 1)
            if (esi[i_3 + 0x10165] == 3)
                if (*(*data_530304 + 0xcf9) != 0)
                label_5278a4:
                    esi[i_3 + 0x10165] = 0
                    eax_92 = i_3 * 5
                    bool o_8 = unimplemented  {imul eax, ebx, 0x5}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    if (*(esi + (eax_92 << 2) + 0x1017a) s> 0 && *(esi + (eax_92 << 2) + 0x1017c) s> 0)
                        bool o_9 = unimplemented  {imul eax, ebx, 0x5}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        bool o_10 = unimplemented  {imul eax, ebx, 0x5}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        sub_47a1c0(sx.d(*(esi + i_3 * 0x14 + 0x1017c)), 
                            sx.d(*(esi + i_3 * 0x14 + 0x1017a)), *data_530304, 0)
                else
                    uint32_t eax_95 = GetTickCount()
                    edi = i_3 * 5
                    bool o_7 = unimplemented  {imul edi, ebx, 0x5}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_97
                    int32_t edx_18
                    edx_18:eax_97 = sx.q(*(esi + (edi << 2) + 0x10170))
                    void* var_ac_5 = sbb.d(0, edx_18, eax_95 u< eax_97)
                    int32_t eax_100
                    int32_t edx_20
                    edx_20:eax_100 = sx.q(*(esi + (edi << 2) + 0x10174))
                    
                    if (edx_20 != var_ac_5)
                        if (edx_20 s< var_ac_5)
                        label_52789b:
                            
                            if (sub_5193d0(*data_5303b8, i_3).b == 0)
                                goto label_5278a4
                    else if (eax_100 u< eax_95 - eax_97)
                        goto label_52789b
        
        esi[0x10164] = 0
        
        for (int32_t i_4 = 0; i_4 != 0xb; i_4 += 1)
            eax_92.b = esi[i_4 + 0x10165]
            
            if (eax_92.b != 0)
                esi[0x10164] = eax_92.b
        
        uint32_t eax_107
        int32_t ecx_6
        eax_107, ecx_6 = GetTickCount()
        int32_t eax_109
        int32_t edx_25
        edx_25:eax_109 = sx.q(*(esi + 0x10018))
        int32_t var_ac_7 = sbb.d(0, edx_25, eax_107 u< eax_109)
        *(esi + 0x1001c) = eax_107 - eax_109
        
        if (sub_4c1e14() != 0)
            *(esi + 0x1001c) = sub_402b4c(sub_4c1dd8(ecx_6) * float.t(*(esi + 0x1001c)))
        
        esi[0x10251] = sub_5193d0(*data_5303b8, 0)
        arg1 = data_530144
        
        if (*arg1 != 2)
            arg1 = *data_530304
            
            if (arg1[0x1224] == 0 && esi[0x10251] == 0)
                arg1, ebp_1 = sub_4ce5b4(*data_53067c)
                
                if (arg1.b != 0)
                    arg1 = *data_5301f4
                    
                    if (arg1[0x111f9] == 0)
                    label_5279dc:
                        
                        if (esi[0x1014c] == 0 && esi[0x10164] == 0 && esi[0x10250] == 0)
                            char eax_120 = sub_4c0924()
                            
                            if (eax_120 != 0)
                                arg1 = sub_510e38(*data_530454)
                            
                            if (eax_120 == 0 || arg1.b == 0)
                                arg1 = *data_530454
                                
                                if (arg1[0x1e3] == 0)
                                    *(esi + 0x10018) = GetTickCount()
                                    *(data_530598 + 0x38) = *(data_530598 + 0x2c)
                                    int32_t ecx_7 = sub_48e950(*data_530304, 2)
                                    
                                    if (esi[4] == 7)
                                        ecx_7 = sub_4c62e8(&esi[0x457c], esi, edi)
                                    
                                    sub_48e980(*data_530304, 2, ecx_7)
                                    arg1 = *data_5301f4
                                    
                                    if (*(arg1 + 0x10020) == 1)
                                        arg1 = *data_5301f4
                                        *(arg1 + 0x4578) = 0
                    else
                        arg1 = sub_4ee134()
                        
                        if (arg1.b != 0)
                            goto label_5279dc
    
    *ebp_1
    return arg1
}
