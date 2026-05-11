// ============================================================
// 函数名称: sub_4f55c0
// 虚拟地址: 0x4f55c0
// WARP GUID: dfd87cce-b5f1-5611-ace0-63872c69b95f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_4f5434, sub_4f5354, sub_4f0c7c, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

void*sub_4f55c0(void* arg1)
{
    // 第一条实际指令: (*data_5301d4)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f)), fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f)), 0)
    (*data_5301d4)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f)), 
        fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f)), 0)
    (*data_5306b4)(0xc1900000, 0, 0, 0x3f800000)
    (*data_5301d4)(fconvert.s(fneg(fconvert.t(*(arg1 - 0x2c))) / fconvert.t(2f)), 
        fconvert.s(fneg(fconvert.t(*(arg1 - 0x28))) / fconvert.t(2f)), 0)
    (*data_5301d4)(0xbe8367c3, 0, 0)
    *(arg1 - 0x2c) = 0x3ffc28f6
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
    
    int32_t eax_24 = *(arg1 - 0x50)
    
    if (eax_24 s< 0)
        eax_24 += 0xf
    
    int32_t eax_25 = eax_24 s>> 4
    
    if (add_overflow(eax_25, 3))
        sub_403010()
        noreturn
    
    *(arg1 - 0x54) = eax_25 + 3
    __builtin_strncpy(arg1 - 0x58, "q=\n@", 4)
    void* eax_29
    eax_29.b = *(*data_5301f4 + 4)
    eax_29.b -= 3
    char temp1 = eax_29.b
    eax_29.b -= 2
    
    if (temp1 u< 2)
        *(arg1 - 0x58) = fconvert.s(data_4f61c8 * fconvert.t(*(arg1 - 0x58)))
    
    int32_t __saved_ebp
    
    if (*(arg1 - 0x59) == 0 || *(data_530598 + 0x38c) == 4)
        float var_34_1
        float var_30_1
        float var_2c_1
        
        if (*(arg1 - 0xd) == 1 || *(data_530598 + 0x38c) == 7)
            var_2c_1 = 0.879999995f
            var_30_1 = 1f
            var_34_1 = 1f
        else
            if (*(data_530598 + 0x38c) == 5)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
            
            (*data_53036c)(0xde1, *(data_530a64 + 4))
            var_2c_1 = 2.4000001f
            
            if (*(data_530598 + 0x38c) == 4)
                var_2c_1 = 0.200000003f
            
            __builtin_strncpy(&var_30_1, "ff&?", 4)
            var_34_1 = 1.19000006f
        
        (*data_52ffd4)(6)
        
        if (*(arg1 - 0xd) == 1)
            if (*(arg1 - 0x35) == 0)
                (*data_5307f8)(
                    fconvert.s(fconvert.t(1f) / fconvert.t(var_2c_1) / fconvert.t(2f) * data_4f61e4
                        * float.t(*(arg1 - 0x3c)) * fconvert.t(var_2c_1)), 
                    fconvert.s(fconvert.t(1f) / fconvert.t(var_2c_1) / fconvert.t(2f) * data_4f61e4
                    * float.t(*(arg1 - 0x40)) * fconvert.t(var_2c_1)))
        else if (*(arg1 - 0x35) == 0)
            (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * data_4f61d4 * fconvert.t(var_2c_1)), 
                fconvert.s(float.t(*(arg1 - 0x40)) * data_4f61d4 * fconvert.t(var_2c_1)))
        
        (*data_530368)(*(arg1 - 0x2c), *(arg1 - 0x28), *(arg1 - 0x24))
        int32_t eax_64 = *(arg1 - 0x50)
        
        if (eax_64 s>= 0)
            int32_t i_3 = eax_64 + 1
            int32_t ebx_1 = 0
            int32_t i
            
            do
                int32_t var_c_1 = ebx_1
                
                if (ebx_1 == *(arg1 - 0x50))
                    var_c_1 = 0
                
                int32_t eax_67 = var_c_1 & 0x80000001
                
                if (eax_67 s< 0)
                    eax_67 = ((eax_67 - 1) | 0xfffffffe) + 1
                
                if (eax_67 == 0)
                label_4f591d:
                    sub_4f5434(&__saved_ebp)
                    
                    if (*(arg1 - 0xd) == 1)
                        if (*(arg1 - 0x35) == 0)
                            (*data_5307f8)(
                                fconvert.s((fconvert.t(1f) / fconvert.t(var_2c_1)
                                    + fconvert.t(*(arg1 - 0x30))) / fconvert.t(2f) * data_4f61e4
                                    * float.t(*(arg1 - 0x3c)) * fconvert.t(var_2c_1)), 
                                fconvert.s((fconvert.t(1f) / fconvert.t(var_2c_1)
                                + fconvert.t(*(arg1 - 0x34))) / fconvert.t(2f) * data_4f61e4
                                * float.t(*(arg1 - 0x40)) * fconvert.t(var_2c_1)))
                    else if (*(arg1 - 0x35) == 0)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f61e4 * float.t(*(arg1 - 0x3c)) * fconvert.t(var_2c_1)), 
                            fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f61e4 * float.t(*(arg1 - 0x40)) * fconvert.t(var_2c_1)))
                    
                    *(arg1 - 0x30) = fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(var_30_1)
                        * fconvert.t(var_34_1))
                    *(arg1 - 0x34) = fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(var_30_1))
                    (*data_530368)(
                        fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x2c))), 
                        fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58))
                        + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
                else
                    long double x87_r7_30 = float.t(var_c_1)
                    long double x87_r6_8 = float.t(*(arg1 - 0x50)) * data_4f61f0
                    x87_r6_8 - x87_r7_30
                    eax_67.w = (x87_r6_8 < x87_r7_30 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_8, x87_r7_30) ? 1 : 0) << 0xa
                        | (x87_r6_8 == x87_r7_30 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_67:1.b, 0)))
                        goto label_4f591d
                    
                    long double x87_r7_31 = float.t(var_c_1)
                    long double x87_r6_10 = float.t(*(arg1 - 0x50)) * data_4f61fc
                    x87_r6_10 - x87_r7_31
                    eax_67.w = (x87_r6_10 < x87_r7_31 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_10, x87_r7_31) ? 1 : 0) << 0xa
                        | (x87_r6_10 == x87_r7_31 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_67:1.b, 6) || test_bit(eax_67:1.b, 0))
                        goto label_4f591d
                
                ebx_1 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        (*data_530a08)()
    
    if (*(arg1 - 0xd) != 1 && *(data_530598 + 0x38c) != 7)
        int32_t eax_104
        
        if (*(arg1 - 0x59) != 0)
            eax_104 = *(data_530598 + 0x38c)
        
        if (*(arg1 - 0x59) == 0 || eax_104 == 3 || eax_104 == 5)
            float var_2c_2 = 1f
            
            if (*(data_530598 + 0x38c) == 4)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
            
            if (*(data_530598 + 0x38c) == 5)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                    fconvert.s(fconvert.t(1f) - float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f)))
                var_2c_2 = 0.200000003f
            
            (*data_53036c)(0xde1, *data_530a64)
            (*data_52ffd4)(5)
            
            if (*(arg1 - 0x35) == 0)
                (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * data_4f61d4), 
                    fconvert.s(float.t(*(arg1 - 0x40)) * data_4f61d4))
            
            int32_t eax_127 = *(arg1 - 0x50)
            
            if (eax_127 s>= 0)
                int32_t i_4 = eax_127 + 1
                int32_t ebx_2 = 0
                int32_t i_1
                
                do
                    int32_t var_c_2 = ebx_2
                    
                    if (ebx_2 == *(arg1 - 0x50))
                        var_c_2 = 0
                    
                    int32_t eax_130 = var_c_2 & 0x80000001
                    
                    if (eax_130 s< 0)
                        eax_130 = ((eax_130 - 1) | 0xfffffffe) + 1
                    
                    if (eax_130 == 0)
                    label_4f5bfc:
                        sub_4f5434(&__saved_ebp)
                        float var_24_1 = fconvert.s(data_4f620c * fconvert.t(*(arg1 - 0x30))
                            * data_4f6218 * data_4f6224)
                        float var_28_1 = fconvert.s(data_4f620c * fconvert.t(*(arg1 - 0x34)))
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(var_24_1) + fconvert.t(1f)) / fconvert.t(2f)
                                * fconvert.t(var_2c_2) * data_4f61e4 * float.t(*(arg1 - 0x3c))), 
                            fconvert.s((fconvert.t(var_28_1) + fconvert.t(1f)) / fconvert.t(2f)
                            * fconvert.t(var_2c_2) * data_4f61e4 * float.t(*(arg1 - 0x40))))
                        (*data_530368)(
                            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_24_1)
                                * fconvert.t(*(arg1 - 0x58)))) + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(var_28_1) * fconvert.t(*(arg1 - 0x58))))
                            + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f61e4 * fconvert.t(var_2c_2) * float.t(*(arg1 - 0x3c))), 
                            fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                            * fconvert.t(var_2c_2) * data_4f61e4 * float.t(*(arg1 - 0x40))))
                        *(arg1 - 0x30) =
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58)))
                        *(arg1 - 0x34) =
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), 
                            *(arg1 - 0x24))
                    else
                        long double x87_r7_76 = float.t(var_c_2)
                        long double x87_r6_22 = float.t(*(arg1 - 0x50)) * data_4f61f0
                        x87_r6_22 - x87_r7_76
                        eax_130.w = (x87_r6_22 < x87_r7_76 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_22, x87_r7_76) ? 1 : 0) << 0xa
                            | (x87_r6_22 == x87_r7_76 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_130:1.b, 0)))
                            goto label_4f5bfc
                        
                        long double x87_r7_77 = float.t(var_c_2)
                        long double x87_r6_24 = float.t(*(arg1 - 0x50)) * data_4f61fc
                        x87_r6_24 - x87_r7_77
                        eax_130.w = (x87_r6_24 < x87_r7_77 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_24, x87_r7_77) ? 1 : 0) << 0xa
                            | (x87_r6_24 == x87_r7_77 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_130:1.b, 6) || test_bit(eax_130:1.b, 0))
                            goto label_4f5bfc
                    
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
        int32_t var_10_1 = 0
        int32_t i_2
        
        do
            float var_1c_1 = fconvert.s(float.t(var_10_1) / float.t(*(arg1 - 0x54)) * data_4f6230)
            
            if (add_overflow(var_10_1, 1))
                sub_403010()
                noreturn
            
            float var_20_1 = fconvert.s(float.t(var_10_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f6230)
            float var_14_1 = fconvert.s(
                sub_402b3c(float.t(var_10_1) / float.t(*(arg1 - 0x54)) * data_4f623c) * data_4f6248)
            long double x87_r7_135 = data_4f6254
            long double temp8_1 = fconvert.t(var_14_1)
            x87_r7_135 - temp8_1
            
            if (test_bit(
                    ((x87_r7_135 < temp8_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_135, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_135 == temp8_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_14_1 = fconvert.s((fconvert.t(var_14_1) - data_4f6254) * data_4f6260 + data_4f6254)
            
            if (add_overflow(var_10_1, 1))
                sub_403010()
                noreturn
            
            float var_18_1 = fconvert.s(
                sub_402b3c(float.t(var_10_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f623c) * data_4f6248)
            long double x87_r7_145 = data_4f6254
            long double temp10_1 = fconvert.t(var_18_1)
            x87_r7_145 - temp10_1
            
            if (test_bit(
                    ((x87_r7_145 < temp10_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_145, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_145 == temp10_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_18_1 = fconvert.s((fconvert.t(var_18_1) - data_4f6254) * data_4f6260 + data_4f6254)
            
            int32_t edi_1 = *(arg1 - 0x50)
            
            if (edi_1 s>= 0)
                int32_t j_1 = edi_1 + 1
                int32_t ebx_3 = 0
                int32_t j
                
                do
                    int32_t var_c_3 = ebx_3
                    
                    if (ebx_3 == *(arg1 - 0x50))
                        var_c_3 = 0
                    
                    int32_t eax_187 = var_c_3 & 0x80000001
                    
                    if (eax_187 s< 0)
                        eax_187 = ((eax_187 - 1) | 0xfffffffe) + 1
                    
                    if (eax_187 == 0)
                    label_4f5f4d:
                        sub_4f5434(&__saved_ebp)
                        float var_24_3 = fconvert.s((fconvert.t(1f) + fconvert.t(var_20_1))
                            * fconvert.t(*(arg1 - 0x30)))
                        float var_28_3 = fconvert.s((data_4f6218 * fconvert.t(var_20_1)
                            + fconvert.t(1f)) * fconvert.t(*(arg1 - 0x34)))
                        *(arg1 - 0x30) = fconvert.s((fconvert.t(1f) + fconvert.t(var_1c_1))
                            * fconvert.t(*(arg1 - 0x30)))
                        *(arg1 - 0x34) = fconvert.s((data_4f6218 * fconvert.t(var_1c_1)
                            + fconvert.t(1f)) * fconvert.t(*(arg1 - 0x34)))
                        sub_4f5354(var_14_1, fconvert.s(float.t(var_10_1) / float.t(*(arg1 - 0x54))), 
                            fconvert.s(float.t(var_c_3) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        int32_t var_8
                        (*data_530518)(var_8, var_8, var_8, 0x3f800000)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f61e4 * float.t(*(arg1 - 0x3c)) * fconvert.t(6f)), 
                            fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f61e4 * float.t(*(arg1 - 0x40)) * fconvert.t(6f)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58))
                                + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x24)) + fconvert.t(var_14_1)))
                        
                        if (add_overflow(var_10_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_4f5354(var_18_1, 
                            fconvert.s(float.t(var_10_1 + 1) / float.t(*(arg1 - 0x54))), 
                            fconvert.s(float.t(var_c_3) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        (*data_530518)(var_8, var_8, var_8, 0x3f800000)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(var_24_3) + fconvert.t(1f)) / fconvert.t(2f)
                                * data_4f61e4 * float.t(*(arg1 - 0x3c)) * fconvert.t(6f)), 
                            fconvert.s((fconvert.t(var_28_3) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f61e4 * float.t(*(arg1 - 0x40)) * fconvert.t(6f)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(var_24_3) * fconvert.t(*(arg1 - 0x58))
                                + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(var_28_3) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x24)) + fconvert.t(var_18_1)))
                    else
                        long double x87_r7_150 = float.t(var_c_3)
                        long double x87_r6_50 = float.t(*(arg1 - 0x50)) * data_4f61f0
                        x87_r6_50 - x87_r7_150
                        eax_187.w = (x87_r6_50 < x87_r7_150 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_50, x87_r7_150) ? 1 : 0) << 0xa
                            | (x87_r6_50 == x87_r7_150 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_187:1.b, 0)))
                            goto label_4f5f4d
                        
                        long double x87_r7_151 = float.t(var_c_3)
                        long double x87_r6_52 = float.t(*(arg1 - 0x50)) * data_4f61fc
                        x87_r6_52 - x87_r7_151
                        eax_187.w = (x87_r6_52 < x87_r7_151 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_52, x87_r7_151) ? 1 : 0) << 0xa
                            | (x87_r6_52 == x87_r7_151 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_187:1.b, 6) || test_bit(eax_187:1.b, 0))
                            goto label_4f5f4d
                    
                    ebx_3 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            var_10_1 += 1
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    (*data_530a08)()
    return (*data_530034)(0xde1)
}
