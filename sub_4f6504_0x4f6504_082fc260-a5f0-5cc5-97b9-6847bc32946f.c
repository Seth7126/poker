// ============================================================
// 函数名称: sub_4f6504
// 虚拟地址: 0x4f6504
// WARP GUID: 082fc260-a5f0-5cc5-97b9-6847bc32946f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_403010, sub_4f0c7c, sub_4f626c, sub_4f637c
// [被调用的父级函数]: sub_4f8b60
// ============================================================

void*sub_4f6504(void* arg1)
{
    // 第一条实际指令: (*data_5301d4)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f)), fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f)), 0)
    (*data_5301d4)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f)), 
        fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f)), 0)
    (*data_5306b4)(0xc1900000, 0, 0, 0x3f800000)
    (*data_5301d4)(fconvert.s(fneg(fconvert.t(*(arg1 - 0x2c))) / fconvert.t(2f)), 
        fconvert.s(fneg(fconvert.t(*(arg1 - 0x28))) / fconvert.t(2f)), 0)
    (*data_5301d4)(0xbe8367c3, 0x3e706026, 0)
    *(arg1 - 0x2c) = 0x3fd70a3d
    *(arg1 - 0x28) = 0xc0066666
    *(arg1 - 0x50) = 0x30
    
    if (*(*data_530304 + 0xdc0) == 1)
        *(arg1 - 0x50) = 0x1e
    
    if (*(*data_530304 + 0xdc0) == 2)
        *(arg1 - 0x50) = 0x2c
    
    if (*(*data_530304 + 0xdc0) == 3)
        *(arg1 - 0x50) = 0x3c
    
    if (*(*data_530304 + 0xdc0) == 4)
        *(arg1 - 0x50) = 0x50
    
    if (*(*data_530304 + 0xdc0) == 5)
        *(arg1 - 0x50) = 0x68
    
    int32_t eax_31 = *(arg1 - 0x50)
    
    if (eax_31 s< 0)
        eax_31 += 0xf
    
    int32_t eax_32 = eax_31 s>> 4
    
    if (add_overflow(eax_32, 3))
        sub_403010()
        noreturn
    
    *(arg1 - 0x54) = eax_32 + 3
    __builtin_strncpy(arg1 - 0x58, "sh1@", 4)
    int32_t __saved_ebp
    
    if (*(arg1 - 0x59) == 0 || *(data_530598 + 0x38c) == 4)
        float var_30_1
        float var_2c_1
        float var_28_1
        
        if (*(arg1 - 0xd) == 1 || *(data_530598 + 0x38c) == 6)
            var_28_1 = 0.879999995f
            var_2c_1 = 1f
            var_30_1 = 1f
        else
            if (*(data_530598 + 0x38c) == 5)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
            
            (*data_53036c)(0xde1, *(data_530a64 + 4))
            var_28_1 = 2.4000001f
            
            if (*(data_530598 + 0x38c) == 4)
                var_28_1 = 0.200000003f
            
            __builtin_strncpy(&var_2c_1, "ff&?", 4)
            var_30_1 = 1.19000006f
        
        (*data_52ffd4)(6)
        
        if (*(arg1 - 0xd) == 1)
            if (*(arg1 - 0x35) == 0)
                (*data_5307f8)(
                    fconvert.s(fconvert.t(1f) / fconvert.t(var_28_1) / fconvert.t(2f) * data_4f70f8
                        * float.t(*(arg1 - 0x3c)) * fconvert.t(var_28_1)), 
                    fconvert.s(fconvert.t(1f) / fconvert.t(var_28_1) / fconvert.t(2f) * data_4f70f8
                    * float.t(*(arg1 - 0x40)) * fconvert.t(var_28_1)))
        else if (*(arg1 - 0x35) == 0)
            (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * data_4f70e8 * fconvert.t(var_28_1)), 
                fconvert.s(float.t(*(arg1 - 0x40)) * data_4f70e8 * fconvert.t(var_28_1)))
        
        (*data_530368)(*(arg1 - 0x2c), *(arg1 - 0x28), *(arg1 - 0x24))
        int32_t eax_68 = *(arg1 - 0x50)
        
        if (eax_68 s>= 0)
            int32_t i_3 = eax_68 + 1
            int32_t ebx_1 = 0
            int32_t i
            
            do
                int32_t var_c_1 = ebx_1
                
                if (ebx_1 == *(arg1 - 0x50))
                    var_c_1 = 0
                
                int32_t eax_72 = var_c_1 & 0x80000001
                
                if (eax_72 s< 0)
                    eax_72 = ((eax_72 - 1) | 0xfffffffe) + 1
                
                void* eax_75
                
                if (eax_72 != 0)
                    long double x87_r7_28 = float.t(var_c_1)
                    long double x87_r6_8 = float.t(*(arg1 - 0x50)) / fconvert.t(3f)
                    x87_r6_8 - x87_r7_28
                    eax_75.w = (x87_r6_8 < x87_r7_28 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_8, x87_r7_28) ? 1 : 0) << 0xa
                        | (x87_r6_8 == x87_r7_28 ? 1 : 0) << 0xe
                
                if (eax_72 == 0 || not(test_bit(eax_75:1.b, 0)))
                    sub_4f637c(&__saved_ebp)
                    
                    if (*(arg1 - 0xd) == 1)
                        if (*(arg1 - 0x35) == 0)
                            (*data_5307f8)(
                                fconvert.s((fconvert.t(1f) / fconvert.t(var_28_1)
                                    + fconvert.t(*(arg1 - 0x30))) / fconvert.t(2f) * data_4f70f8
                                    * float.t(*(arg1 - 0x3c)) * fconvert.t(var_28_1)), 
                                fconvert.s((fconvert.t(1f) / fconvert.t(var_28_1)
                                + fconvert.t(*(arg1 - 0x34))) / fconvert.t(2f) * data_4f70f8
                                * float.t(*(arg1 - 0x40)) * fconvert.t(var_28_1)))
                    else if (*(arg1 - 0x35) == 0)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f70f8 * float.t(*(arg1 - 0x3c)) * fconvert.t(var_28_1)), 
                            fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f70f8 * float.t(*(arg1 - 0x40)) * fconvert.t(var_28_1)))
                    
                    *(arg1 - 0x30) = fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(var_2c_1)
                        * fconvert.t(var_30_1))
                    *(arg1 - 0x34) = fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(var_2c_1))
                    (*data_530368)(
                        fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x2c))), 
                        fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58))
                        + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
                
                ebx_1 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        (*data_530a08)()
    
    if (*(arg1 - 0xd) != 1 && *(data_530598 + 0x38c) != 6)
        int32_t eax_110
        
        if (*(arg1 - 0x59) != 0)
            eax_110 = *(data_530598 + 0x38c)
        
        if (*(arg1 - 0x59) == 0 || eax_110 == 3 || eax_110 == 5)
            float var_28_2 = 1f
            
            if (*(data_530598 + 0x38c) == 4)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
            
            if (*(data_530598 + 0x38c) == 5)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                    fconvert.s(fconvert.t(1f) - float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f)))
                var_28_2 = 0.200000003f
            
            (*data_53036c)(0xde1, *data_530a64)
            (*data_52ffd4)(5)
            
            if (*(arg1 - 0x35) == 0)
                (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * data_4f70e8), 
                    fconvert.s(float.t(*(arg1 - 0x40)) * data_4f70e8))
            
            int32_t eax_132 = *(arg1 - 0x50)
            
            if (eax_132 s>= 0)
                int32_t i_4 = eax_132 + 1
                int32_t ebx_2 = 0
                int32_t i_1
                
                do
                    int32_t var_c_2 = ebx_2
                    
                    if (ebx_2 == *(arg1 - 0x50))
                        var_c_2 = 0
                    
                    int32_t eax_136 = var_c_2 & 0x80000001
                    
                    if (eax_136 s< 0)
                        eax_136 = ((eax_136 - 1) | 0xfffffffe) + 1
                    
                    void* eax_139
                    
                    if (eax_136 != 0)
                        long double x87_r7_73 = float.t(var_c_2)
                        long double x87_r6_20 = float.t(*(arg1 - 0x50)) / fconvert.t(3f)
                        x87_r6_20 - x87_r7_73
                        eax_139.w = (x87_r6_20 < x87_r7_73 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_20, x87_r7_73) ? 1 : 0) << 0xa
                            | (x87_r6_20 == x87_r7_73 ? 1 : 0) << 0xe
                    
                    if (eax_136 == 0 || not(test_bit(eax_139:1.b, 0)))
                        sub_4f637c(&__saved_ebp)
                        float var_20_1 = fconvert.s(data_4f710c * fconvert.t(*(arg1 - 0x30))
                            * data_4f7118 * data_4f7124)
                        float var_24_1 = fconvert.s(data_4f710c * fconvert.t(*(arg1 - 0x34)))
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(var_20_1) + fconvert.t(1f)) / fconvert.t(2f)
                                * fconvert.t(var_28_2) * data_4f70f8 * float.t(*(arg1 - 0x3c))), 
                            fconvert.s((fconvert.t(var_24_1) + fconvert.t(1f)) / fconvert.t(2f)
                            * fconvert.t(var_28_2) * data_4f70f8 * float.t(*(arg1 - 0x40))))
                        (*data_530368)(
                            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_20_1)
                                * fconvert.t(*(arg1 - 0x58)))) + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(var_24_1) * fconvert.t(*(arg1 - 0x58))))
                            + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f70f8 * fconvert.t(var_28_2) * float.t(*(arg1 - 0x3c))), 
                            fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                            * fconvert.t(var_28_2) * data_4f70f8 * float.t(*(arg1 - 0x40))))
                        *(arg1 - 0x30) =
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58)))
                        *(arg1 - 0x34) =
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), 
                            *(arg1 - 0x24))
                    
                    ebx_2 += 1
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            (*data_530a08)()
    
    if (*(arg1 - 0x59) != 0)
        return arg1
    
    (*data_53036c)(0xde1, *(data_530a64 + 8))
    sub_4f0c7c(0xb50)
    (*data_52ffd4)(5)
    int32_t i_6 = *(arg1 - 0x54)
    
    if (add_overflow(i_6, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_6 - 1 s>= 0)
        int32_t i_5 = i_6
        int32_t edi_1 = 0
        int32_t i_2
        
        do
            float var_18_1 = fconvert.s(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f7130)
            
            if (add_overflow(edi_1, 1))
                sub_403010()
                noreturn
            
            float var_1c_1 = fconvert.s(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f7130)
            float var_10_1 = fconvert.s(
                sub_402b3c(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f713c) * data_4f7130)
            long double x87_r7_131 = data_4f7148
            long double temp6_1 = fconvert.t(var_10_1)
            x87_r7_131 - temp6_1
            
            if (test_bit(
                    ((x87_r7_131 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_131, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_131 == temp6_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_10_1 = fconvert.s((fconvert.t(var_10_1) - data_4f7148) * data_4f7154 + data_4f7148)
            
            if (add_overflow(edi_1, 1))
                sub_403010()
                noreturn
            
            float var_14_1 = fconvert.s(
                sub_402b3c(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f713c) * data_4f7130)
            long double x87_r7_141 = data_4f7148
            long double temp8_1 = fconvert.t(var_14_1)
            x87_r7_141 - temp8_1
            
            if (test_bit(
                    ((x87_r7_141 < temp8_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_141, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_141 == temp8_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_14_1 = fconvert.s((fconvert.t(var_14_1) - data_4f7148) * data_4f7154 + data_4f7148)
            
            int32_t esi_1 = *(arg1 - 0x50)
            
            if (esi_1 s>= 0)
                int32_t j_1 = esi_1 + 1
                int32_t ebx_3 = 0
                int32_t j
                
                do
                    int32_t var_c_3 = ebx_3
                    
                    if (ebx_3 == *(arg1 - 0x50))
                        var_c_3 = 0
                    
                    int32_t eax_196 = var_c_3 & 0x80000001
                    
                    if (eax_196 s< 0)
                        eax_196 = ((eax_196 - 1) | 0xfffffffe) + 1
                    
                    void* eax_199
                    
                    if (eax_196 != 0)
                        long double x87_r7_146 = float.t(var_c_3)
                        long double x87_r6_46 = float.t(*(arg1 - 0x50)) / fconvert.t(3f)
                        x87_r6_46 - x87_r7_146
                        eax_199.w = (x87_r6_46 < x87_r7_146 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_46, x87_r7_146) ? 1 : 0) << 0xa
                            | (x87_r6_46 == x87_r7_146 ? 1 : 0) << 0xe
                    
                    if (eax_196 == 0 || not(test_bit(eax_199:1.b, 0)))
                        sub_4f637c(&__saved_ebp)
                        float var_20_3 = fconvert.s((fconvert.t(1f) + fconvert.t(var_1c_1))
                            * fconvert.t(*(arg1 - 0x30)))
                        float var_24_3 = fconvert.s((data_4f7118 * fconvert.t(var_1c_1)
                            + fconvert.t(1f)) * fconvert.t(*(arg1 - 0x34)))
                        *(arg1 - 0x30) = fconvert.s((fconvert.t(1f) + fconvert.t(var_18_1))
                            * fconvert.t(*(arg1 - 0x30)))
                        *(arg1 - 0x34) = fconvert.s((data_4f7118 * fconvert.t(var_18_1)
                            + fconvert.t(1f)) * fconvert.t(*(arg1 - 0x34)))
                        sub_4f626c(var_10_1, fconvert.s(float.t(edi_1) / float.t(*(arg1 - 0x54))), 
                            fconvert.s(float.t(var_c_3) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        int32_t var_8
                        (*data_530518)(var_8, var_8, var_8, 0x3f800000)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f70f8 * float.t(*(arg1 - 0x3c)) * fconvert.t(6f)), 
                            fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f70f8 * float.t(*(arg1 - 0x40)) * fconvert.t(6f)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58))
                                + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x24)) + fconvert.t(var_10_1)))
                        
                        if (add_overflow(edi_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_4f626c(var_14_1, fconvert.s(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54))), 
                            fconvert.s(float.t(var_c_3) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        (*data_530518)(var_8, var_8, var_8, 0x3f800000)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(var_20_3) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f70f8 * float.t(*(arg1 - 0x3c)) * fconvert.t(6f)), 
                            fconvert.s((fconvert.t(var_24_3) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f70f8 * float.t(*(arg1 - 0x40)) * fconvert.t(6f)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(var_20_3) * fconvert.t(*(arg1 - 0x58))
                                + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(var_24_3) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x24)) + fconvert.t(var_14_1)))
                    
                    ebx_3 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            edi_1 += 1
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    (*data_530a08)()
    return (*data_530034)(0xde1)
}
