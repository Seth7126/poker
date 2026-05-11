// ============================================================
// 函数名称: sub_511fd8
// 虚拟地址: 0x511fd8
// WARP GUID: 6a7d323b-8483-5a7d-a9bc-a41183c048cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_408e4c, sub_404138, sub_511e1c, sub_420ac8, sub_40401c, sub_4953cc, sub_511764, sub_5079cc, sub_403e1c, sub_403010, sub_511b50, sub_514cc4, sub_4068a2, sub_511bec, sub_402bc0, sub_50b624, sub_50a598, sub_408e1c, sub_402b90, sub_403df8, sub_511230, sub_50d318, sub_50d448, sub_514178
// [被调用的父级函数]: sub_4dad04
// ============================================================

int32_t __convention("regparm")sub_511fd8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_84 = ebx
    int32_t i
    int32_t i_3 = i
    int32_t edi
    int32_t var_8c = edi
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x1c)
    int32_t var_80 = 0
    int32_t* var_90 = &var_4
    int32_t (* var_94)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x344) != 0)
        sub_50d448(*(arg1 + 0xc), 0)
    
    if (*(arg1 + 0x54) == 1)
        if (mods.dp.d(sx.q(*(*data_530304 + 0x1230)), 5) == 0)
            if (*(arg1 + 0x1c8) == 0)
                edi = 0xffffffff
            else
                int32_t eax_6 = *(arg1 + 0x1d8)
                
                if (add_overflow(eax_6, 0x3e8))
                    sub_403010()
                    noreturn
                
                int32_t eax_8
                int32_t edx_3
                edx_3:eax_8 = sx.q(eax_6 + 0x3e8)
                uint32_t eax_9
                int32_t ecx_1
                eax_9, ecx_1 = GetTickCount()
                int32_t eax_11
                int32_t edx_4
                edx_4:eax_11 = sx.q(*(arg1 + 0x1d4))
                int32_t var_b0_2 = eax_9 - eax_11
                bool o_2 = unimplemented  {sbb dword [esp+0x4], edx}
                int32_t eax_14 = sub_4068a2(ecx_1, 
                    sbb.d(edx_3, sbb.d(0, edx_4, eax_9 u< eax_11), eax_8 u< var_b0_2), 
                    eax_8 - var_b0_2, 0x3e8, 0)
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                edi = eax_14
                
                if (sub_50d318(*data_530454) == 0)
                    uint32_t eax_29 = GetTickCount()
                    int32_t eax_31
                    int32_t edx_13
                    edx_13:eax_31 = sx.q(*(arg1 + 0x1d4))
                    int32_t var_9c_3 = sbb.d(0, edx_13, eax_29 u< eax_31)
                    int32_t eax_33 = *(arg1 + 0x1d8)
                    
                    if (add_overflow(eax_33, 0xdac))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_35
                    int32_t edx_15
                    edx_15:eax_35 = sx.q(eax_33 + 0xdac)
                    
                    if (edx_15 != var_9c_3)
                        if (edx_15 s<= var_9c_3)
                            *(arg1 + 0x1c8) = 0
                    else if (eax_35 u<= eax_29 - eax_31)
                        *(arg1 + 0x1c8) = 0
                else
                    uint32_t eax_18 = GetTickCount()
                    int32_t eax_20
                    int32_t edx_7
                    edx_7:eax_20 = sx.q(*(arg1 + 0x1d4))
                    int32_t var_9c_1 = sbb.d(0, edx_7, eax_18 u< eax_20)
                    int32_t eax_22 = *(arg1 + 0x1d8)
                    
                    if (add_overflow(eax_22, 0x1f4))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_24
                    int32_t edx_9
                    edx_9:eax_24 = sx.q(eax_22 + 0x1f4)
                    
                    if (edx_9 != var_9c_1)
                        if (edx_9 s<= var_9c_1)
                        label_5120f9:
                            
                            for (i = 1; i != 9; i += 1)
                                bool o_4 = unimplemented  {imul eax, esi, 0xe9}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                if (*(arg1 + i * 0x3a4 - 0x50) == 1)
                                    uint32_t eax_28 = GetTickCount()
                                    bool o_5 = unimplemented  {imul edx, esi, 0xe9}
                                    
                                    if (o_5)
                                        sub_403010()
                                        noreturn
                                    
                                    *(arg1 + i * 0x3a4 + 0x350) = eax_28
                            
                            sub_50a598()
                            *(arg1 + 0x1c8) = 0
                    else if (eax_24 u<= eax_18 - eax_20)
                        goto label_5120f9
                
                if (edi s< 0)
                    edi = 0
            
            sub_5079cc(edi)
        
        if (mods.dp.d(sx.q(*(*data_530304 + 0x1230)), 0x14) == 0 && *(arg1 + 0x54) == 1)
            sub_50b624(2, nullptr, i, edi)
    
    if (*(arg1 + 0x1b4) != 0 && *(arg1 + 0x1e0) == 0 && *data_530144 != 0 && *(arg1 + 0x1b5) != 0)
        int32_t edx
        edx.b = 1
        char* var_c
        sub_408e1c(sub_511230(arg1, edx.b), &var_c)
        sub_50b624(0x1a, var_c, i, edi)
    
    *(arg1 + 0x34c) = 0
    int32_t i_4 = *(arg1 + 0x348)
    
    if (i_4 s> 0)
        i = 1
        int32_t i_1
        
        do
            bool o_7 = unimplemented  {imul edx, esi, 0xe9}
            
            if (o_7)
                sub_403010()
                noreturn
            
            if (*(arg1 + i * 0x3a4 - 0x50) == 1)
                int32_t temp7_1 = *(arg1 + 0x34c)
                *(arg1 + 0x34c) += 1
                
                if (add_overflow(temp7_1, 1))
                    sub_403010()
                    noreturn
            
            i += 1
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    sub_50b624(0x19, nullptr, i, edi)
    
    if (*(arg1 + 0x1b4) != 0 || *data_530538 != 0)
        sub_50b624(0x1b, nullptr, i, edi)
    
    sub_511764(arg1, 0)
    
    if (*(arg1 + 0x1a0) != 0)
        if (*(arg1 + 0x1a4) == 1 && sub_511b50(arg1) != 0)
            if (*(arg1 + 0x54) != 1)
                *(arg1 + 0x1b0) = sub_420ac8(*(arg1 + 0x1b0), 0x7d0)
            else
                *(arg1 + 0x1b0) = sub_420ac8(*(arg1 + 0x1b0), 0x3e8)
        
        uint32_t eax_55 = GetTickCount()
        int32_t eax_56 = *(arg1 + 0x1ac)
        
        if (add_overflow(eax_56, *(arg1 + 0x1b0)))
            sub_403010()
            noreturn
        
        int32_t eax_58
        int32_t edx_22
        edx_22:eax_58 = sx.q(eax_56 + *(arg1 + 0x1b0))
        
        if (edx_22 != 0)
            if (edx_22 s<= 0)
                *(arg1 + 0x1a0) = sub_511e1c(arg1, *(arg1 + 0x1a4))
        else if (eax_58 u<= eax_55)
            *(arg1 + 0x1a0) = sub_511e1c(arg1, *(arg1 + 0x1a4))
    
    if (*(arg1 + 0x1a0) == 0)
        sub_511bec(arg1, sub_51260b+5)
    else
        if (*(arg1 + 0x1a4) == 1)
            void* const var_9c_5 = "Warten.. "
            int32_t eax_63 = *(arg1 + 0x1ac)
            
            if (add_overflow(eax_63, *(arg1 + 0x1b0)))
                sub_403010()
                noreturn
            
            int32_t eax_65
            int32_t edx_26
            edx_26:eax_65 = sx.q(eax_63 + *(arg1 + 0x1b0))
            uint32_t eax_66 = GetTickCount()
            int32_t var_a0_10 = sbb.d(edx_26, 0, eax_65 u< eax_66)
            int32_t var_a4_5 = eax_65 - eax_66
            sub_408e4c()
            int32_t var_14
            int32_t var_a0_11 = var_14
            void* const var_a4_6 = &data_5125ec
            char* var_10
            sub_404138(&var_10, 3)
            sub_511bec(arg1, var_10)
        
        if (*(arg1 + 0x1a4) == 2)
            void* const var_9c_6 = "Verbinden.. "
            int32_t eax_70 = *(arg1 + 0x1ac)
            
            if (add_overflow(eax_70, *(arg1 + 0x1b0)))
                sub_403010()
                noreturn
            
            int32_t eax_72
            int32_t edx_29
            edx_29:eax_72 = sx.q(eax_70 + *(arg1 + 0x1b0))
            uint32_t eax_73 = GetTickCount()
            int32_t var_a0_14 = sbb.d(edx_29, 0, eax_72 u< eax_73)
            int32_t var_a4_9 = eax_72 - eax_73
            sub_408e4c()
            int32_t var_1c
            int32_t var_a0_15 = var_1c
            void* const var_a4_10 = &data_5125ec
            char* var_18
            sub_404138(&var_18, 3)
            sub_511bec(arg1, var_18)
    
    bool o_12 = unimplemented  {imul eax, edx, 0x3}
    
    if (o_12)
        sub_403010()
        noreturn
    
    if (mods.dp.d(sx.q(*(*data_530304 + 0x1230)), 3) * 3 == 0 && *(arg1 + 0x54) s>= 1)
        if (*(arg1 + 0x345) != 0)
            int32_t eax_83 = *(arg1 + 0x350)
            
            if (eax_83 s> 0 && eax_83 s<= 8)
                uint32_t eax_84 = GetTickCount()
                *(arg1 + 0x350)
                bool o_13 = unimplemented  {imul eax, dword [ebx+0x350], 0xe9}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                int32_t eax_87
                int32_t edx_34
                edx_34:eax_87 = sx.q(*(arg1 + *(arg1 + 0x350) * 0x3a4 + 0x350))
                int32_t var_9c_7 = sbb.d(0, edx_34, eax_84 u< eax_87)
                
                if (var_9c_7 != 0)
                    if (var_9c_7 s>= 0)
                        sub_514178(arg1)
                else if (eax_84 - eax_87 u>= 0x1388)
                    sub_514178(arg1)
        else if (*(arg1 + 0x54) s> 1 && *(arg1 + 0x344) != 0)
            for (int32_t i_2 = 1; i_2 != 9; i_2 += 1)
                int32_t edi_1 = i_2 * 0xe9
                bool o_14 = unimplemented  {imul edi, esi, 0xe9}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + (edi_1 << 2) - 0x50) == 1)
                    uint32_t eax_90 = GetTickCount()
                    int32_t eax_92
                    int32_t edx_36
                    edx_36:eax_92 = sx.q(*(arg1 + (edi_1 << 2) + 0x350))
                    int32_t var_9c_8 = sbb.d(0, edx_36, eax_90 u< eax_92)
                    
                    if (var_9c_8 != 0)
                        if (var_9c_8 s>= 0)
                        label_5124f3:
                            char var_48[0x24]
                            sub_402bc0(&var_48, sub_51260b+9)
                            sub_402b90(&var_48, arg1 + (edi_1 << 2) - 0x4f, 0x23)
                            char var_7c[0x34]
                            sub_402bc0(&var_7c, &var_48)
                            sub_40401c(sub_402b90(&var_7c, sub_51260b+0x19, 0x32), &var_7c)
                            int32_t var_9c_9 = var_24
                            uint32_t eax_98
                            int32_t ecx_5
                            eax_98, ecx_5 = GetTickCount()
                            int32_t eax_100
                            int32_t edx_41
                            edx_41:eax_100 = sx.q(*(arg1 + (edi_1 << 2) + 0x350))
                            bool o_15 = unimplemented  {sbb dword [esp+0x4], edx}
                            int32_t eax_102
                            int32_t edx_43
                            eax_102, edx_43 = sub_4068a2(ecx_5, sbb.d(0, edx_41, eax_98 u< eax_100), 
                                eax_98 - eax_100, 0x3e8, 0)
                            
                            if (o_15)
                                sub_403010()
                                noreturn
                            
                            int32_t var_a0_20 = edx_43
                            int32_t var_a4_11 = eax_102
                            sub_408e4c()
                            int32_t var_a0_21 = var_80
                            void* const var_a4_12 = &data_51263c
                            char* var_20
                            sub_404138(&var_20, 3)
                            sub_514cc4(arg1, var_20)
                            sub_4953cc(*(arg1 + (edi_1 << 2) + 0x194))
                    else if (eax_90 - eax_92 u>= 0x7530)
                        goto label_5124f3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_90_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_5125c4
    sub_403df8(&var_80)
    return sub_403e1c(&var_24, 7)
}
