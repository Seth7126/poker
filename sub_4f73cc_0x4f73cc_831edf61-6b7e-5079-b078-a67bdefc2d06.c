// ============================================================
// 函数名称: sub_4f73cc
// 虚拟地址: 0x4f73cc
// WARP GUID: 831edf61-6b7e-5079-b078-a67bdefc2d06
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f7244, sub_4f7160, sub_4f0c7c, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

int32_tsub_4f73cc(void* arg1)
{
    // 第一条实际指令: (*data_5301d4)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f)), fconvert.s(data_4f7fc0 * fconvert.t(*(arg1 - 0x28))), 0)
    (*data_5301d4)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f)), 
        fconvert.s(data_4f7fc0 * fconvert.t(*(arg1 - 0x28))), 0)
    (*data_5306b4)(0xc1e00000, 0, 0, 0x3f800000)
    (*data_5301d4)(fconvert.s(fneg(fconvert.t(*(arg1 - 0x2c))) / fconvert.t(2f)), 
        fconvert.s(fneg(fconvert.t(*(arg1 - 0x28))) / fconvert.t(2f)), 0)
    (*data_5301d4)(0xbe8367c3, 0x3f0c3816, 0)
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
    __builtin_strncpy(arg1 - 0x58, "33;@", 4)
    *(arg1 - 0xd)
    (*data_52ffd4)(6)
    
    if (*(arg1 - 0xd) == 1)
        if (*(arg1 - 0x35) == 0)
            (*data_5307f8)(
                fconvert.s(fconvert.t(1f) / fconvert.t(0.860000014f) / fconvert.t(2f) * data_4f7fe0
                    * float.t(*(arg1 - 0x3c)) * fconvert.t(0.860000014f)), 
                fconvert.s(fconvert.t(1f) / fconvert.t(0.860000014f) / fconvert.t(2f) * data_4f7fe0
                * float.t(*(arg1 - 0x40)) * fconvert.t(0.860000014f)))
    else if (*(arg1 - 0x35) == 0)
        (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * data_4f7fd0 * fconvert.t(0.860000014f)), 
            fconvert.s(float.t(*(arg1 - 0x40)) * data_4f7fd0 * fconvert.t(0.860000014f)))
    
    if (*(data_530598 + 0x3c0) s> 0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
            fconvert.s(fconvert.t(1f) - float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f)
                + data_4f7ff0))
    
    (*data_530368)(*(arg1 - 0x2c), *(arg1 - 0x28), *(arg1 - 0x24))
    int32_t eax_59 = *(arg1 - 0x50)
    int32_t __saved_ebp
    
    if (eax_59 s>= 0)
        int32_t i_2 = eax_59 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            int32_t var_c_1 = ebx_1
            
            if (ebx_1 == *(arg1 - 0x50))
                var_c_1 = 0
            
            int32_t eax_63 = var_c_1 & 0x80000001
            
            if (eax_63 s< 0)
                eax_63 = ((eax_63 - 1) | 0xfffffffe) + 1
            
            void* eax_66
            
            if (eax_63 != 0)
                long double x87_r7_32 = float.t(var_c_1)
                long double x87_r6_9 = float.t(*(arg1 - 0x50)) / fconvert.t(3f)
                x87_r6_9 - x87_r7_32
                eax_66.w = (x87_r6_9 < x87_r7_32 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_9, x87_r7_32) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_32 ? 1 : 0) << 0xe
            
            if (eax_63 == 0 || not(test_bit(eax_66:1.b, 0)))
                sub_4f7244(&__saved_ebp)
                
                if (*(data_530598 + 0x3c0) s> 0)
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                        fconvert.s(fconvert.t(1f)
                            - (data_4f8004 - fconvert.t(*(arg1 - 0x34)) / fconvert.t(4f))
                            * float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f) + data_4f7ff0))
                
                if (*(arg1 - 0xd) == 1)
                    if (*(arg1 - 0x35) == 0)
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(1f) / fconvert.t(0.860000014f)
                                + fconvert.t(*(arg1 - 0x30))) / fconvert.t(2f) * data_4f7fe0
                                * float.t(*(arg1 - 0x3c)) * fconvert.t(0.860000014f)), 
                            fconvert.s((fconvert.t(1f) / fconvert.t(0.860000014f)
                            + fconvert.t(*(arg1 - 0x34))) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1 - 0x40)) * fconvert.t(0.860000014f)))
                else if (*(arg1 - 0x35) == 0)
                    (*data_5307f8)(
                        fconvert.s((fconvert.t(*(arg1 - 0x30)) + fconvert.t(1f)) / fconvert.t(2f)
                            * data_4f7fe0 * float.t(*(arg1 - 0x3c)) * fconvert.t(0.860000014f)), 
                        fconvert.s((fconvert.t(*(arg1 - 0x34)) + fconvert.t(1f)) / fconvert.t(2f)
                        * data_4f7fe0 * float.t(*(arg1 - 0x40)) * fconvert.t(0.860000014f)))
                
                *(arg1 - 0x30) =
                    fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(1f) * fconvert.t(1f))
                *(arg1 - 0x34) = fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(1f))
                (*data_530368)(
                    fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58))
                        + fconvert.t(*(arg1 - 0x2c))), 
                    fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58))
                    + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
            
            ebx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    (*data_530a08)()
    float var_30_1
    
    if (*(arg1 - 0xd) != 1)
        (*data_53036c)(0xde1, *data_530a64)
        var_30_1 = 1f
        
        if (*(data_530598 + 0x38c) == 2)
            var_30_1 = 1.5f
    else
        (*data_53036c)(0xde1, *data_5303d0)
        __builtin_strncpy(&var_30_1, "=\nW?", 4)
    
    sub_4f0c7c(0xb50)
    (*data_52ffd4)(5)
    int32_t i_4 = *(arg1 - 0x54)
    
    if (add_overflow(i_4, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_4 - 1 s>= 0)
        int32_t i_3 = i_4
        int32_t edi_1 = 0
        int32_t i_1
        
        do
            float var_20_1 = fconvert.s(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f8010)
            
            if (add_overflow(edi_1, 1))
                sub_403010()
                noreturn
            
            float var_24_1 = fconvert.s(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f8010)
            int32_t ebx_3 = *(data_530598 + 0x38c)
            float var_18_1
            
            if (ebx_3 != 2)
                var_18_1 = fconvert.s((
                    sub_402b2c(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f801c / fconvert.t(2f))
                    - fconvert.t(1f)) * data_4f7ff0)
            else
                var_18_1 = fconvert.s((
                    sub_402b2c(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f801c / fconvert.t(2f))
                    - fconvert.t(1f)) * data_4f7ff0 * fconvert.t(7f))
            
            long double x87_r7_97 = data_4f802c
            long double temp4_1 = fconvert.t(var_18_1)
            x87_r7_97 - temp4_1
            
            if (test_bit(
                    ((x87_r7_97 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_97, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_97 == temp4_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_18_1 = fconvert.s((fconvert.t(var_18_1) - data_4f802c) * data_4f8038 + data_4f802c)
            
            data_530598
            float var_1c_1
            
            if (ebx_3 != 2)
                if (add_overflow(edi_1, 1))
                    sub_403010()
                    noreturn
                
                var_1c_1 = fconvert.s((sub_402b2c(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54))
                    * data_4f801c / fconvert.t(2f)) - fconvert.t(1f)) * data_4f7ff0)
            else
                if (add_overflow(edi_1, 1))
                    sub_403010()
                    noreturn
                
                var_1c_1 = fconvert.s((sub_402b2c(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54))
                    * data_4f801c / fconvert.t(2f)) - fconvert.t(1f)) * data_4f7ff0 * fconvert.t(7f))
            
            long double x87_r7_117 = data_4f802c
            long double temp7_1 = fconvert.t(var_1c_1)
            x87_r7_117 - temp7_1
            
            if (test_bit(
                    ((x87_r7_117 < temp7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_117, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_117 == temp7_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_1c_1 = fconvert.s((fconvert.t(var_1c_1) - data_4f802c) * data_4f8038 + data_4f802c)
            
            int32_t esi_1 = *(arg1 - 0x50)
            
            if (esi_1 s>= 0)
                int32_t j_1 = esi_1 + 1
                int32_t ebx_4 = 0
                int32_t j
                
                do
                    int32_t var_c_2 = ebx_4
                    
                    if (ebx_4 == *(arg1 - 0x50))
                        var_c_2 = 0
                    
                    int32_t eax_135 = var_c_2 & 0x80000001
                    
                    if (eax_135 s< 0)
                        eax_135 = ((eax_135 - 1) | 0xfffffffe) + 1
                    
                    void* eax_138
                    
                    if (eax_135 != 0)
                        long double x87_r7_122 = float.t(var_c_2)
                        long double x87_r6_43 = float.t(*(arg1 - 0x50)) / fconvert.t(3f)
                        x87_r6_43 - x87_r7_122
                        eax_138.w = (x87_r6_43 < x87_r7_122 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_43, x87_r7_122) ? 1 : 0) << 0xa
                            | (x87_r6_43 == x87_r7_122 ? 1 : 0) << 0xe
                    
                    if (eax_135 == 0 || not(test_bit(eax_138:1.b, 0)))
                        sub_4f7244(&__saved_ebp)
                        float var_28_1 = fconvert.s((fconvert.t(1f) + fconvert.t(var_24_1))
                            * fconvert.t(*(arg1 - 0x30)))
                        float var_2c_1 = fconvert.s((data_4f8044 * fconvert.t(var_24_1)
                            + fconvert.t(1f)) * fconvert.t(*(arg1 - 0x34)))
                        *(arg1 - 0x30) = fconvert.s((fconvert.t(1f) + fconvert.t(var_20_1))
                            * fconvert.t(*(arg1 - 0x30)))
                        *(arg1 - 0x34) = fconvert.s((data_4f8044 * fconvert.t(var_20_1)
                            + fconvert.t(1f)) * fconvert.t(*(arg1 - 0x34)))
                        
                        if (*(data_530598 + 0x38c) != 2)
                            sub_4f7160(fconvert.s(fconvert.t(var_18_1) / fconvert.t(2f) + data_4f8068), 
                                fconvert.s(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                fconvert.s(float.t(var_c_2) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        else
                            sub_4f7160(fconvert.s(fconvert.t(var_18_1) / fconvert.t(4f) + data_4f805c), 
                                fconvert.s(float.t(edi_1) / float.t(*(arg1 - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                fconvert.s(float.t(var_c_2) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        
                        int32_t eax_151 = *(data_530598 + 0x3c0)
                        int32_t var_8
                        
                        if (eax_151 s<= 0)
                            (*data_530518)(var_8, var_8, var_8, 0x3f800000)
                        else
                            data_530598
                            (*data_530518)(var_8, var_8, var_8, 
                                fconvert.s(fconvert.t(1f) - float.t(eax_151) / fconvert.t(99f)
                                    + data_4f805c))
                        
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(1f) / fconvert.t(var_30_1)
                                + fconvert.t(*(arg1 - 0x30))) / fconvert.t(2f) * data_4f7fe0
                                * float.t(*(arg1 - 0x3c)) * fconvert.t(var_30_1)), 
                            fconvert.s((fconvert.t(1f) / fconvert.t(var_30_1)
                            + fconvert.t(*(arg1 - 0x34))) / fconvert.t(2f) * data_4f7fe0
                            * float.t(*(arg1 - 0x40)) * fconvert.t(var_30_1)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg1 - 0x30)) * fconvert.t(*(arg1 - 0x58))
                                + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x34)) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x24)) + fconvert.t(var_18_1)))
                        
                        if (*(data_530598 + 0x38c) != 2)
                            if (add_overflow(edi_1, 1))
                                sub_403010()
                                noreturn
                            
                            sub_4f7160(fconvert.s(fconvert.t(var_1c_1) / fconvert.t(2f) + data_4f8068), 
                                fconvert.s(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                fconvert.s(float.t(var_c_2) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        else
                            if (add_overflow(edi_1, 1))
                                sub_403010()
                                noreturn
                            
                            sub_4f7160(fconvert.s(fconvert.t(var_1c_1) / fconvert.t(4f) + data_4f805c), 
                                fconvert.s(float.t(edi_1 + 1) / float.t(*(arg1 - 0x54)) * data_4f8050
                                    + data_4f7ff0), 
                                fconvert.s(float.t(var_c_2) / float.t(*(arg1 - 0x50))), &__saved_ebp)
                        
                        int32_t eax_181 = *(data_530598 + 0x3c0)
                        
                        if (eax_181 s<= 0)
                            (*data_530518)(var_8, var_8, var_8, 0x3f800000)
                        else
                            data_530598
                            (*data_530518)(var_8, var_8, var_8, 
                                fconvert.s(fconvert.t(1f) - float.t(eax_181) / fconvert.t(99f)
                                    + data_4f805c))
                        
                        (*data_5307f8)(
                            fconvert.s((fconvert.t(1f) / fconvert.t(var_30_1) + fconvert.t(var_28_1))
                                / fconvert.t(2f) * data_4f7fe0 * float.t(*(arg1 - 0x3c))
                                * fconvert.t(var_30_1)), 
                            fconvert.s((fconvert.t(1f) / fconvert.t(var_30_1) + fconvert.t(var_2c_1))
                            / fconvert.t(2f) * data_4f7fe0 * float.t(*(arg1 - 0x40))
                            * fconvert.t(var_30_1)))
                        (*data_530368)(
                            fconvert.s(fconvert.t(var_28_1) * fconvert.t(*(arg1 - 0x58))
                                + fconvert.t(*(arg1 - 0x2c))), 
                            fconvert.s(fconvert.t(var_2c_1) * fconvert.t(*(arg1 - 0x58))
                            + fconvert.t(*(arg1 - 0x28))), 
                            fconvert.s(fconvert.t(*(arg1 - 0x24)) + fconvert.t(var_1c_1)))
                    
                    ebx_4 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            edi_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    (*data_530a08)()
    return (*data_530034)(0xde1)
}
