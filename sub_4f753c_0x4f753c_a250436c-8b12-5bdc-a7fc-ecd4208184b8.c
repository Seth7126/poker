// ============================================================
// 函数名称: sub_4f753c
// 虚拟地址: 0x4f753c
// WARP GUID: a250436c-8b12-5bdc-a7fc-ecd4208184b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f7244, sub_4f7160, sub_4f0c7c, sub_402b2c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4f753c(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: if (*(data_530598 + 0x38c) == 5)
    if (*(data_530598 + 0x38c) == 5)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
    
    (*data_53036c)(0xde1, *(data_530a64 + 4))
    arg1[-0xb] = 0x4019999a
    
    if (*(data_530598 + 0x38c) == 4)
        arg1[-0xb] = 0x3e4ccccd
    
    __builtin_strncpy(&arg1[-0xc], "ff&?", 4)
    arg1[-0xd] = 0x3f9851ec
    (*data_52ffd4)(6)
    
    if (*(arg1[2] - 0xd) == 1)
        if (*(arg1[2] - 0x35) == 0)
            (*data_5307f8)(
                fconvert.s(fconvert.t(1f) / fconvert.t(arg1[-0xb]) / fconvert.t(2f) * data_4f7fe0
                    * float.t(*(arg1[2] - 0x3c)) * fconvert.t(arg1[-0xb])), 
                fconvert.s(fconvert.t(1f) / fconvert.t(arg1[-0xb]) / fconvert.t(2f) * data_4f7fe0
                * float.t(*(arg1[2] - 0x40)) * fconvert.t(arg1[-0xb])))
    else if (*(arg1[2] - 0x35) == 0)
        (*data_5307f8)(fconvert.s(float.t(*(arg1[2] - 0x3c)) * data_4f7fd0 * fconvert.t(arg1[-0xb])), 
            fconvert.s(float.t(*(arg1[2] - 0x40)) * data_4f7fd0 * fconvert.t(arg1[-0xb])))
    
    if (*(data_530598 + 0x3c0) s> 0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
            fconvert.s(fconvert.t(1f) - float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f)
                + data_4f7ff0))
    
    (*data_530368)(*(arg1[2] - 0x2c), *(arg1[2] - 0x28), *(arg1[2] - 0x24))
    int32_t eax_30 = *(arg1[2] - 0x50)
    
    if (eax_30 s>= 0)
        arg1[-0xe] = eax_30 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            arg1[-2] = ebx_1
            
            if (ebx_1 == *(arg1[2] - 0x50))
                arg1[-2] = 0
            
            int32_t eax_34 = arg1[-2] & 0x80000001
            
            if (eax_34 s< 0)
                eax_34 = ((eax_34 - 1) | 0xfffffffe) + 1
            
            void* eax_37
            
            if (eax_34 != 0)
                long double x87_r7_23 = float.t(arg1[-2])
                long double x87_r6_9 = float.t(*(arg1[2] - 0x50)) / fconvert.t(3f)
                x87_r6_9 - x87_r7_23
                eax_37.w = (x87_r6_9 < x87_r7_23 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_9, x87_r7_23) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_23 ? 1 : 0) << 0xe
            
            if (eax_34 == 0 || not(test_bit(eax_37:1.b, 0)))
                sub_4f7244(arg1)
                
                if (*(data_530598 + 0x3c0) s> 0)
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                        fconvert.s(fconvert.t(1f)
                            - (data_4f8004 - fconvert.t(*(arg1[2] - 0x34)) / fconvert.t(4f))
                            * float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f) + data_4f7ff0))
                
                if (*(arg1[2] - 0xd) == 1)
                    if (*(arg1[2] - 0x35) == 0)
                        long double x87_r7_48 = (fconvert.t(1f) / fconvert.t(arg1[-0xb])
                            + fconvert.t(*(arg1[2] - 0x34))) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1[2] - 0x40)) * fconvert.t(arg1[-0xb])
                        long double x87_r7_55 = (fconvert.t(1f) / fconvert.t(arg1[-0xb])
                            + fconvert.t(*(arg1[2] - 0x30))) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1[2] - 0x3c)) * fconvert.t(arg1[-0xb])
                        (*data_5307f8)(fconvert.s(x87_r7_55), fconvert.s(x87_r7_48))
                else if (*(arg1[2] - 0x35) == 0)
                    (*data_5307f8)(
                        fconvert.s((fconvert.t(*(arg1[2] - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f7fe0 * float.t(*(arg1[2] - 0x3c)) * fconvert.t(arg1[-0xb])), 
                        fconvert.s((fconvert.t(*(arg1[2] - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                        * data_4f7fe0 * float.t(*(arg1[2] - 0x40)) * fconvert.t(arg1[-0xb])))
                
                *(arg1[2] - 0x30) = fconvert.s(fconvert.t(*(arg1[2] - 0x30)) * fconvert.t(arg1[-0xc])
                    * fconvert.t(arg1[-0xd]))
                *(arg1[2] - 0x34) = fconvert.s(fconvert.t(*(arg1[2] - 0x34)) * fconvert.t(arg1[-0xc]))
                (*data_530368)(
                    fconvert.s(fconvert.t(*(arg1[2] - 0x30)) * fconvert.t(*(arg1[2] - 0x58))
                        + fconvert.t(*(arg1[2] - 0x2c))), 
                    fconvert.s(fconvert.t(*(arg1[2] - 0x34)) * fconvert.t(*(arg1[2] - 0x58))
                    + fconvert.t(*(arg1[2] - 0x28))), *(arg1[2] - 0x24))
            
            ebx_1 += 1
            i = arg1[-0xe]
            arg1[-0xe] -= 1
        while (i != 1)
    
    (*data_530a08)()
    
    if (*(arg1[2] - 0xd) != 1)
        (*data_53036c)(0xde1, *data_530a64)
        arg1[-0xb] = 0x3f800000
        
        if (*(data_530598 + 0x38c) == 2)
            arg1[-0xb] = 0x3fc00000
    else
        (*data_53036c)(0xde1, *data_5303d0)
        __builtin_strncpy(&arg1[-0xb], "=\nW?", 4)
    
    sub_4f0c7c(0xb50)
    (*data_52ffd4)(5)
    int32_t eax_86 = *(arg1[2] - 0x54)
    
    if (add_overflow(eax_86, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_86 - 1 s>= 0)
        arg1[-0xe] = eax_86
        int32_t edi_1 = 0
        int32_t i_1
        
        do
            arg1[-0xf] = edi_1
            arg1[-7] = fconvert.s(float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54)) * data_4f8010)
            
            if (add_overflow(edi_1, 1))
                sub_403010()
                noreturn
            
            arg1[-0xf] = edi_1 + 1
            arg1[-8] = fconvert.s(float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54)) * data_4f8010)
            int32_t ebx_3 = *(data_530598 + 0x38c)
            
            if (ebx_3 != 2)
                arg1[-0xf] = edi_1
                arg1[-5] = fconvert.s((sub_402b2c(float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54))
                    * data_4f801c / fconvert.t(2f)) - fconvert.t(1f)) * data_4f7ff0)
            else
                arg1[-0xf] = edi_1
                arg1[-5] = fconvert.s((sub_402b2c(float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54))
                    * data_4f801c / fconvert.t(2f)) - fconvert.t(1f)) * data_4f7ff0 * fconvert.t(7f))
            
            long double x87_r7_88 = data_4f802c
            long double temp3_1 = fconvert.t(arg1[-5])
            x87_r7_88 - temp3_1
            
            if (test_bit(
                    ((x87_r7_88 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_88, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_88 == temp3_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                arg1[-5] = fconvert.s((fconvert.t(arg1[-5]) - data_4f802c) * data_4f8038 + data_4f802c)
            
            data_530598
            
            if (ebx_3 != 2)
                if (add_overflow(edi_1, 1))
                    sub_403010()
                    noreturn
                
                arg1[-0xf] = edi_1 + 1
                arg1[-6] = fconvert.s((sub_402b2c(float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54))
                    * data_4f801c / fconvert.t(2f)) - fconvert.t(1f)) * data_4f7ff0)
            else
                if (add_overflow(edi_1, 1))
                    sub_403010()
                    noreturn
                
                arg1[-0xf] = edi_1 + 1
                arg1[-6] = fconvert.s((sub_402b2c(float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54))
                    * data_4f801c / fconvert.t(2f)) - fconvert.t(1f)) * data_4f7ff0 * fconvert.t(7f))
            
            long double x87_r7_108 = data_4f802c
            long double temp6_1 = fconvert.t(arg1[-6])
            x87_r7_108 - temp6_1
            
            if (test_bit(
                    ((x87_r7_108 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_108, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_108 == temp6_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                arg1[-6] = fconvert.s((fconvert.t(arg1[-6]) - data_4f802c) * data_4f8038 + data_4f802c)
            
            int32_t esi_1 = *(arg1[2] - 0x50)
            
            if (esi_1 s>= 0)
                int32_t j_1 = esi_1 + 1
                int32_t ebx_4 = 0
                int32_t j
                
                do
                    arg1[-2] = ebx_4
                    
                    if (ebx_4 == *(arg1[2] - 0x50))
                        arg1[-2] = 0
                    
                    int32_t eax_107 = arg1[-2] & 0x80000001
                    
                    if (eax_107 s< 0)
                        eax_107 = ((eax_107 - 1) | 0xfffffffe) + 1
                    
                    void* eax_110
                    
                    if (eax_107 != 0)
                        long double x87_r7_113 = float.t(arg1[-2])
                        long double x87_r6_43 = float.t(*(arg1[2] - 0x50)) / fconvert.t(3f)
                        x87_r6_43 - x87_r7_113
                        eax_110.w = (x87_r6_43 < x87_r7_113 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_43, x87_r7_113) ? 1 : 0) << 0xa
                            | (x87_r6_43 == x87_r7_113 ? 1 : 0) << 0xe
                    
                    if (eax_107 == 0 || not(test_bit(eax_110:1.b, 0)))
                        sub_4f7244(arg1)
                        arg1[-9] = fconvert.s((fconvert.t(1f) + fconvert.t(arg1[-8]))
                            * fconvert.t(*(arg1[2] - 0x30)))
                        arg1[-0xa] = fconvert.s((data_4f8044 * fconvert.t(arg1[-8]) + fconvert.t(1f))
                            * fconvert.t(*(arg1[2] - 0x34)))
                        *(arg1[2] - 0x30) = fconvert.s((fconvert.t(1f) + fconvert.t(arg1[-7]))
                            * fconvert.t(*(arg1[2] - 0x30)))
                        *(arg1[2] - 0x34) = fconvert.s((data_4f8044 * fconvert.t(arg1[-7])
                            + fconvert.t(1f)) * fconvert.t(*(arg1[2] - 0x34)))
                        
                        if (*(data_530598 + 0x38c) != 2)
                            float var_10_8 = fconvert.s(float.t(arg1[-2]) / float.t(*(arg1[2] - 0x50)))
                            arg1[-0xf] = edi_1
                            sub_4f7160(fconvert.s(fconvert.t(arg1[-5]) / fconvert.t(2f) + data_4f8068), 
                                fconvert.s(
                                    float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                var_10_8, arg1)
                        else
                            float var_10_7 = fconvert.s(float.t(arg1[-2]) / float.t(*(arg1[2] - 0x50)))
                            arg1[-0xf] = edi_1
                            sub_4f7160(fconvert.s(fconvert.t(arg1[-5]) / fconvert.t(4f) + data_4f805c), 
                                fconvert.s(
                                    float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                var_10_7, arg1)
                        
                        int32_t eax_123 = *(data_530598 + 0x3c0)
                        
                        if (eax_123 s<= 0)
                            (*data_530518)(arg1[-1], arg1[-1], arg1[-1], 0x3f800000)
                        else
                            data_530598
                            arg1[-0xf] = eax_123
                            (*data_530518)(arg1[-1], arg1[-1], arg1[-1], 
                                fconvert.s(fconvert.t(1f) - float.t(arg1[-0xf]) / fconvert.t(99f)
                                    + data_4f805c))
                        
                        long double x87_r7_156 = (fconvert.t(1f) / fconvert.t(arg1[-0xb])
                            + fconvert.t(*(arg1[2] - 0x34))) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1[2] - 0x40)) * fconvert.t(arg1[-0xb])
                        long double x87_r7_163 = (fconvert.t(1f) / fconvert.t(arg1[-0xb])
                            + fconvert.t(*(arg1[2] - 0x30))) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1[2] - 0x3c)) * fconvert.t(arg1[-0xb])
                        (*data_5307f8)(fconvert.s(x87_r7_163), fconvert.s(x87_r7_156))
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg1[2] - 0x30)) * fconvert.t(*(arg1[2] - 0x58))
                                + fconvert.t(*(arg1[2] - 0x2c))), 
                            fconvert.s(fconvert.t(*(arg1[2] - 0x34)) * fconvert.t(*(arg1[2] - 0x58))
                            + fconvert.t(*(arg1[2] - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1[2] - 0x24)) + fconvert.t(arg1[-5])))
                        
                        if (*(data_530598 + 0x38c) != 2)
                            float var_10_14 = fconvert.s(float.t(arg1[-2]) / float.t(*(arg1[2] - 0x50)))
                            
                            if (add_overflow(edi_1, 1))
                                sub_403010()
                                noreturn
                            
                            arg1[-0xf] = edi_1 + 1
                            sub_4f7160(fconvert.s(fconvert.t(arg1[-6]) / fconvert.t(2f) + data_4f8068), 
                                fconvert.s(
                                    float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                var_10_14, arg1)
                        else
                            float var_10_13 = fconvert.s(float.t(arg1[-2]) / float.t(*(arg1[2] - 0x50)))
                            
                            if (add_overflow(edi_1, 1))
                                sub_403010()
                                noreturn
                            
                            arg1[-0xf] = edi_1 + 1
                            sub_4f7160(fconvert.s(fconvert.t(arg1[-6]) / fconvert.t(4f) + data_4f805c), 
                                fconvert.s(
                                    float.t(arg1[-0xf]) / float.t(*(arg1[2] - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                var_10_13, arg1)
                        
                        int32_t eax_153 = *(data_530598 + 0x3c0)
                        
                        if (eax_153 s<= 0)
                            (*data_530518)(arg1[-1], arg1[-1], arg1[-1], 0x3f800000)
                        else
                            data_530598
                            arg1[-0xf] = eax_153
                            (*data_530518)(arg1[-1], arg1[-1], arg1[-1], 
                                fconvert.s(fconvert.t(1f) - float.t(arg1[-0xf]) / fconvert.t(99f)
                                    + data_4f805c))
                        
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(1f) / fconvert.t(arg1[-0xb]) + fconvert.t(arg1[-9]))
                                / fconvert.t(2f) * data_4f7fe0 * float.t(*(arg1[2] - 0x3c))
                                * fconvert.t(arg1[-0xb])), 
                            fconvert.s((fconvert.t(1f) / fconvert.t(arg1[-0xb])
                            + fconvert.t(arg1[-0xa])) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1[2] - 0x40)) * fconvert.t(arg1[-0xb])))
                        (*data_530368)(
                            fconvert.s(fconvert.t(arg1[-9]) * fconvert.t(*(arg1[2] - 0x58))
                                + fconvert.t(*(arg1[2] - 0x2c))), 
                            fconvert.s(fconvert.t(arg1[-0xa]) * fconvert.t(*(arg1[2] - 0x58))
                            + fconvert.t(*(arg1[2] - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1[2] - 0x24)) + fconvert.t(arg1[-6])))
                    
                    ebx_4 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            edi_1 += 1
            i_1 = arg1[-0xe]
            arg1[-0xe] -= 1
        while (i_1 != 1)
    
    (*data_530a08)()
    int32_t result = (*data_530034)(0xde1)
    *arg1
    return result
}
