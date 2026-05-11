// ============================================================
// 函数名称: sub_5047f4
// 虚拟地址: 0x5047f4
// WARP GUID: 2016b497-d331-50d1-b36f-47b571ca375a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f15a4, sub_51ad40, sub_4f0c64, sub_51b810, sub_51b9e0, sub_402b3c, sub_420bf0, sub_5044a0, sub_51bab0, sub_4f0c4c, sub_4ee6dc, sub_402b2c, sub_503984, sub_403010
// [被调用的父级函数]: sub_506f9c
// ============================================================

void __convention("regparm")sub_5047f4(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_3b0 = ebx
    int32_t esi
    int32_t var_3b4 = esi
    int32_t edi
    int32_t var_3b8 = edi
    int32_t* esp = &var_3b8
    char* ebx_1 = arg1
    
    if (*ebx_1 != 0)
        arg1.b = ebx_1[1]
        void var_1f4
        char var_120
        
        if (arg1.b != 4)
            arg1.b -= 2
            char temp3_1 = arg1.b
            arg1.b -= 2
            
            if (temp3_1 u< 2)
                int32_t esi_1 = *(ebx_1 + 0x58)
                *(arg2 - 1) = 0
                *(arg2 - 2) = 0
                *(arg2 - 3) = 0
                *(arg2 - 4) = 0
                *(arg2 - 5) = 0
                
                if (esi_1 s>= 0x10100)
                    int32_t temp6_1 = esi_1
                    esi_1 -= 0x10100
                    
                    if (add_overflow(temp6_1, 0xfffeff00))
                        sub_403010()
                        noreturn
                    
                    *(arg2 - 5) = 1
                
                if (esi_1 s>= 0x8080)
                    int32_t temp9_1 = esi_1
                    esi_1 -= 0x8080
                    
                    if (add_overflow(temp9_1, 0xffff7f80))
                        sub_403010()
                        noreturn
                    
                    *(arg2 - 4) = 1
                
                if (esi_1 s>= 0x4040)
                    int32_t temp13_1 = esi_1
                    esi_1 -= 0x4040
                    
                    if (add_overflow(temp13_1, 0xffffbfc0))
                        sub_403010()
                        noreturn
                    
                    *(arg2 - 3) = 1
                
                if (esi_1 s>= 0x2020)
                    int32_t temp19_1 = esi_1
                    esi_1 -= 0x2020
                    
                    if (add_overflow(temp19_1, 0xffffdfe0))
                        sub_403010()
                        noreturn
                    
                    *(arg2 - 2) = 1
                
                if (esi_1 s>= 0x1010)
                    int32_t temp25_1 = esi_1
                    esi_1 -= 0x1010
                    
                    if (add_overflow(temp25_1, 0xffffeff0))
                        sub_403010()
                        noreturn
                
                if (esi_1 s>= 0x808)
                    int32_t temp30_1 = esi_1
                    esi_1 -= 0x808
                    
                    if (add_overflow(temp30_1, 0xfffff7f8))
                        sub_403010()
                        noreturn
                
                if (esi_1 s>= 0x400)
                    *(arg2 - 1) = 1
                    int32_t temp37_1 = esi_1
                    esi_1 -= 0x400
                    
                    if (add_overflow(temp37_1, 0xfffffc00))
                        sub_403010()
                        noreturn
                
                float var_8_2 = 0.150000006f
                float var_c_1 = 0.150000006f
                char* var_3bc_4 = &var_120
                sub_5044a0(0, *(ebx_1 + 0x54), *(ebx_1 + 0x50))
                void* var_3bc_5 = &var_1f4
                int32_t ecx_5
                ecx_5.b = 1
                sub_5044a0(ecx_5, *(ebx_1 + 0x4c), *(ebx_1 + 0x48))
                esp = &var_3b8
                int32_t edi_1 = *(ebx_1 + 0x48)
                int32_t ecx_6
                
                if (edi_1 == *(ebx_1 + 0x50) && edi_1 != 0xb)
                    void* var_3bc_6 = &var_1f4
                    
                    if (neg.d(edi_1) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ecx_6.b = 1
                    sub_5044a0(ecx_6, *(ebx_1 + 0x4c), neg.d(edi_1))
                    esp = &var_3b8
                
                float var_14_3 = fconvert.s((fconvert.t(*(ebx_1 + 4)) - fconvert.t(var_8_2))
                    / (fconvert.t(1f) - fconvert.t(var_8_2)))
                long double x87_r7_109 = fconvert.t(*(ebx_1 + 4))
                long double temp42_1 = fconvert.t(var_8_2)
                x87_r7_109 - temp42_1
                
                if (test_bit(
                        ((x87_r7_109 < temp42_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_109, temp42_1) ? 1 : 0) << 0xa
                            | (x87_r7_109 == temp42_1 ? 1 : 0) << 0xe):1.b, 
                        0))
                    var_14_3 = 0f
                
                float var_10_3 = fconvert.s(fconvert.t(1f) - fconvert.t(var_14_3))
                float var_1c_1 = fconvert.s((fconvert.t(*(ebx_1 + 4))
                    - fconvert.t(var_8_2) / fconvert.t(2f))
                    / (fconvert.t(1f) - fconvert.t(var_8_2) / fconvert.t(2f) * fconvert.t(2f)))
                long double x87_r7_117 = fconvert.t(var_8_2) / fconvert.t(2f)
                long double temp43_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_117 - temp43_1
                int16_t eax_38 = (x87_r7_117 < temp43_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_117, temp43_1) ? 1 : 0) << 0xa
                    | (x87_r7_117 == temp43_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_38:1.b, 6)) && not(test_bit(eax_38:1.b, 0)))
                    var_1c_1 = 0f
                
                long double x87_r7_120 = fconvert.t(1f) - fconvert.t(var_8_2) / fconvert.t(2f)
                long double temp46_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_120 - temp46_1
                
                if (test_bit(
                        ((x87_r7_120 < temp46_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_120, temp46_1) ? 1 : 0) << 0xa
                            | (x87_r7_120 == temp46_1 ? 1 : 0) << 0xe):1.b, 
                        0))
                    var_1c_1 = 1f
                
                *(ebx_1 + 0x24) = 0
                *(ebx_1 + 0x28) = 0
                float var_1f0
                float var_11c
                *(ebx_1 + 0x18) = fconvert.s(fconvert.t(var_11c) * fconvert.t(var_10_3)
                    + fconvert.t(var_1f0) * fconvert.t(var_14_3))
                float var_1ec
                float var_118
                *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(var_118) * fconvert.t(var_10_3)
                    + fconvert.t(var_1ec) * fconvert.t(var_14_3))
                float var_1e8
                float var_114
                *(ebx_1 + 0x20) = fconvert.s(fconvert.t(var_114) * fconvert.t(var_10_3)
                    + fconvert.t(var_1e8) * fconvert.t(var_14_3))
                
                if (*(arg2 - 3) != 0)
                    long double x87_r7_130 = data_506e90
                    long double temp50_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_130 - temp50_1
                    void* eax_41
                    eax_41.w = (x87_r7_130 < temp50_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_130, temp50_1) ? 1 : 0) << 0xa
                        | (x87_r7_130 == temp50_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_41:1.b, 6)) && not(test_bit(eax_41:1.b, 0)))
                        *(ebx_1 + 0x18) = fconvert.s(
                            sub_402b3c(fconvert.t(*(ebx_1 + 4)) * fconvert.t(5f) * data_506e48)
                            * fconvert.t(150f) + fconvert.t(*(ebx_1 + 0x18)))
                
                if (*(arg2 - 2) != 0)
                    if (*(ebx_1 + 0x48) != 0xc)
                        if (*(*data_5301f4 + 4) != 1 || *(ebx_1 + 0x4c) != 2)
                            long double st0_16 = sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                            *(ebx_1 + 0x20) = fconvert.s(
                                sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4))) * st0_16
                                * fconvert.t(500f) / fconvert.t(3f) + fconvert.t(*(ebx_1 + 0x20)))
                        else
                            long double st0_14 = sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                            *(ebx_1 + 0x20) = fconvert.s(
                                sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4))) * st0_14
                                * fconvert.t(540f) / fconvert.t(3f) + fconvert.t(*(ebx_1 + 0x20)))
                        
                        int32_t eax_47 = *(ebx_1 + 0x48)
                        
                        if (neg.d(eax_47) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_176 = float.t(neg.d(eax_47)) / float.t(*data_5300d0)
                        long double temp56_1 = fconvert.t(0.75f)
                        x87_r7_176 - temp56_1
                        int32_t* eax_49
                        eax_49.w = (x87_r7_176 < temp56_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_176, temp56_1) ? 1 : 0) << 0xa
                            | (x87_r7_176 == temp56_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_49:1.b, 6) || test_bit(eax_49:1.b, 0))
                            int32_t eax_50 = *(ebx_1 + 0x48)
                            
                            if (neg.d(eax_50) == 0x80000000)
                                sub_403010()
                                noreturn
                            
                            long double x87_r7_196 = float.t(neg.d(eax_50)) / float.t(*data_5300d0)
                            long double x87_r6_37 = data_506ed0
                            x87_r6_37 - x87_r7_196
                            int32_t* eax_52
                            eax_52.w = (x87_r6_37 < x87_r7_196 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_37, x87_r7_196) ? 1 : 0) << 0xa
                                | (x87_r6_37 == x87_r7_196 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_52:1.b, 0))
                                long double x87_r7_197 = data_506eb4
                                long double temp62_1 = fconvert.t(*(ebx_1 + 4))
                                x87_r7_197 - temp62_1
                                eax_52.w = (x87_r7_197 < temp62_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_197, temp62_1) ? 1 : 0) << 0xa
                                    | (x87_r7_197 == temp62_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_52:1.b, 0))
                                    long double x87_r7_198 = data_506ec0
                                    long double temp65_1 = fconvert.t(*(ebx_1 + 4))
                                    x87_r7_198 - temp65_1
                                    eax_52.w = (x87_r7_198 < temp65_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_198, temp65_1) ? 1 : 0) << 0xa
                                        | (x87_r7_198 == temp65_1 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_52:1.b, 6)) && not(test_bit(eax_52:1.b, 0)))
                                        int32_t var_3c8_3 = 0
                                        int32_t var_3cc_3 = 0
                                        long double st0_23 = sub_420bf0(0, 
                                            sub_402b3c((fconvert.t(*(ebx_1 + 4)) - data_506eb4)
                                                * data_506e48 * fconvert.t(2f)) * fconvert.t(120f))
                                        *(ebx_1 + 0x18) =
                                            fconvert.s(fconvert.t(*(ebx_1 + 0x18)) - st0_23)
                                        int32_t var_3c8_4 = 0
                                        int32_t var_3cc_4 = 0
                                        long double st0_25 = sub_420bf0(0, 
                                            sub_402b3c((fconvert.t(*(ebx_1 + 4)) - data_506eb4)
                                                * data_506e48 * fconvert.t(2f)) * fconvert.t(70f))
                                        esp = &var_3b8
                                        *(ebx_1 + 0x1c) =
                                            fconvert.s(fconvert.t(*(ebx_1 + 0x1c)) - st0_25)
                        else
                            long double x87_r7_177 = data_506eb4
                            long double temp59_1 = fconvert.t(*(ebx_1 + 4))
                            x87_r7_177 - temp59_1
                            eax_49.w = (x87_r7_177 < temp59_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_177, temp59_1) ? 1 : 0) << 0xa
                                | (x87_r7_177 == temp59_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_49:1.b, 0))
                                long double x87_r7_178 = data_506ec0
                                long double temp60_1 = fconvert.t(*(ebx_1 + 4))
                                x87_r7_178 - temp60_1
                                eax_49.w = (x87_r7_178 < temp60_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_178, temp60_1) ? 1 : 0) << 0xa
                                    | (x87_r7_178 == temp60_1 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_49:1.b, 6)) && not(test_bit(eax_49:1.b, 0)))
                                    int32_t var_3c8_1 = 0
                                    int32_t var_3cc_1 = 0
                                    long double st0_19 = sub_420bf0(0, 
                                        sub_402b3c((fconvert.t(*(ebx_1 + 4)) - data_506eb4)
                                            * data_506e48 * fconvert.t(2f)) * fconvert.t(220f))
                                    *(ebx_1 + 0x18) = fconvert.s(fconvert.t(*(ebx_1 + 0x18)) - st0_19)
                                    int32_t var_3c8_2 = 0
                                    int32_t var_3cc_2 = 0
                                    long double st0_21 = sub_420bf0(0, 
                                        sub_402b3c((fconvert.t(*(ebx_1 + 4)) - data_506eb4)
                                            * data_506e48 * fconvert.t(2f)) * fconvert.t(60f))
                                    esp = &var_3b8
                                    *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(*(ebx_1 + 0x1c)) - st0_21)
                    else if (*(*data_5301f4 + 4) != 1 || *(ebx_1 + 0x4c) != 2)
                        long double st0_12 = sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                        *(ebx_1 + 0x20) = fconvert.s(sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                            * st0_12 * fconvert.t(500f) + fconvert.t(*(ebx_1 + 0x20)))
                    else
                        long double st0_10 = sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                        *(ebx_1 + 0x20) = fconvert.s(sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                            * st0_10 * fconvert.t(540f) + fconvert.t(*(ebx_1 + 0x20)))
                
                if (*(arg2 - 4) != 0)
                    long double x87_r7_219 =
                        sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)) * fconvert.t(2f))
                        * fconvert.t(150f)
                    *(ebx_1 + 0x20) = fconvert.s(fconvert.t(*(ebx_1 + 0x20)) - x87_r7_219)
                    long double st0_27 = sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)))
                    long double x87_r7_228 =
                        sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4))) * st0_27 * fconvert.t(400f)
                    *(ebx_1 + 0x18) = fconvert.s(fconvert.t(*(ebx_1 + 0x18))
                        - x87_r7_228 * (fconvert.t(1f) - fconvert.t(*(ebx_1 + 4))))
                
                if (*(arg2 - 5) != 0)
                    long double x87_r7_231 = data_506e90
                    long double temp52_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_231 - temp52_1
                    void* eax_54
                    eax_54.w = (x87_r7_231 < temp52_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_231, temp52_1) ? 1 : 0) << 0xa
                        | (x87_r7_231 == temp52_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_54:1.b, 0))
                        long double x87_r7_237 = sub_402b3c((fconvert.t(*(ebx_1 + 4)) - data_506e90)
                            * data_506e48 * fconvert.t(2.5f)) * fconvert.t(150f)
                        *(ebx_1 + 0x20) = fconvert.s(fconvert.t(*(ebx_1 + 0x20)) - x87_r7_237)
                
                float var_1e4
                float var_110
                
                if (*(arg2 - 1) == 0)
                    *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_110) * fconvert.t(var_10_3)
                        + fconvert.t(var_1e4) * fconvert.t(var_14_3))
                else
                    *(arg2 - 0xc) = fconvert.s(fconvert.t(var_14_3) * fconvert.t(2f))
                    long double x87_r7_241 = fconvert.t(*(arg2 - 0xc))
                    long double temp53_1 = fconvert.t(1f)
                    x87_r7_241 - temp53_1
                    void* eax_57
                    eax_57.w = (x87_r7_241 < temp53_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_241, temp53_1) ? 1 : 0) << 0xa
                        | (x87_r7_241 == temp53_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_57:1.b, 6)) && not(test_bit(eax_57:1.b, 0)))
                        *(arg2 - 0xc) = 0x3f800000
                    
                    *(arg2 - 0x10) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg2 - 0xc)))
                    *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_110) * fconvert.t(*(arg2 - 0x10))
                        + fconvert.t(var_1e4) * fconvert.t(*(arg2 - 0xc)))
                
                float var_1e0
                float var_10c
                *(ebx_1 + 0x30) = fconvert.s(fconvert.t(var_10c) * fconvert.t(var_10_3)
                    + fconvert.t(var_1e0) * fconvert.t(var_14_3))
                float var_1dc
                float var_108
                *(ebx_1 + 0x34) = fconvert.s(fconvert.t(var_108) * fconvert.t(var_10_3)
                    + fconvert.t(var_1dc) * fconvert.t(var_14_3))
                char var_1d8
                ecx_6.b = var_1d8
                *(ebx_1 + 0x44) = 0x3f800000
                *(ebx_1 + 0x3c) = 0
                long double x87_r7_256 = fconvert.t(*(ebx_1 + 4))
                long double temp55_1 = fconvert.t(var_c_1)
                x87_r7_256 - temp55_1
                char var_104
                float var_100
                float var_fc
                
                if (test_bit(
                        ((x87_r7_256 < temp55_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_256, temp55_1) ? 1 : 0) << 0xa
                            | (x87_r7_256 == temp55_1 ? 1 : 0) << 0xe):1.b, 
                        0))
                    ebx_1[0x38] = var_104
                    *(ebx_1 + 0x44) = fconvert.s((fconvert.t(var_c_1) - fconvert.t(*(ebx_1 + 4)))
                        * fconvert.t(var_100) / fconvert.t(var_c_1))
                    *(ebx_1 + 0x3c) = fconvert.s((fconvert.t(var_c_1) - fconvert.t(*(ebx_1 + 4)))
                        * fconvert.t(var_fc) / fconvert.t(var_c_1))
                
                long double x87_r7_266 = fconvert.t(1f) - fconvert.t(var_c_1)
                long double temp57_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_266 - temp57_1
                void* var_1d4
                float var_1d0
                
                if (test_bit(
                        ((x87_r7_266 < temp57_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_266, temp57_1) ? 1 : 0) << 0xa
                            | (x87_r7_266 == temp57_1 ? 1 : 0) << 0xe):1.b, 
                        0))
                    ebx_1[0x38] = ecx_6.b
                    *(ebx_1 + 0x44) = fconvert.s((fconvert.t(*(ebx_1 + 4)) - fconvert.t(1f)
                        + fconvert.t(var_c_1)) * fconvert.t(var_1d4) / fconvert.t(var_c_1))
                    *(ebx_1 + 0x3c) = fconvert.s((fconvert.t(*(ebx_1 + 4)) - fconvert.t(1f)
                        + fconvert.t(var_c_1)) * fconvert.t(var_1d0) / fconvert.t(var_c_1))
                
                *(arg2 - 0x11) = 0
                *(arg2 - 0x12) = 0
                void* eax_65
                
                if (esi_1 s>= 0x200)
                    int32_t temp61_1 = esi_1
                    esi_1 -= 0x200
                    
                    if (add_overflow(temp61_1, 0xfffffe00))
                        sub_403010()
                        noreturn
                    
                    var_1c_1 = fconvert.s(data_506ee8 * fconvert.t(var_14_3))
                    long double x87_r7_279 = fconvert.t(var_1c_1)
                    long double temp64_1 = fconvert.t(1f)
                    x87_r7_279 - temp64_1
                    eax_65.w = (x87_r7_279 < temp64_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_279, temp64_1) ? 1 : 0) << 0xa
                        | (x87_r7_279 == temp64_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_65:1.b, 6)) && not(test_bit(eax_65:1.b, 0)))
                        var_1c_1 = 1f
                    
                    float var_18_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_1c_1))
                    *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_110) * fconvert.t(var_18_1)
                        + fconvert.t(var_1e4) * fconvert.t(var_1c_1))
                    *(ebx_1 + 0x30) = fconvert.s(fconvert.t(var_10c) * fconvert.t(var_18_1)
                        + fconvert.t(var_1e0) * fconvert.t(var_1c_1))
                    *(ebx_1 + 0x34) = fconvert.s(
                        (fconvert.t(var_108) + fconvert.t(180f)) * fconvert.t(var_18_1)
                        + fconvert.t(var_1dc) * fconvert.t(var_1c_1))
                    long double st0_30
                    st0_30, eax_65 = sub_402b3c(data_506e48 * fconvert.t(*(ebx_1 + 4)) * fconvert.t(2f))
                    *(ebx_1 + 0x20) = fconvert.s(st0_30 * fconvert.t(150f)
                        * (fconvert.t(1f) - data_506ef8 * fconvert.t(*(ebx_1 + 4)))
                        + fconvert.t(*(ebx_1 + 0x20)))
                
                if (esi_1 s>= 0x100)
                    int32_t temp63_1 = esi_1
                    esi_1 -= 0x100
                    
                    if (add_overflow(temp63_1, 0xffffff00))
                        sub_403010()
                        noreturn
                    
                    float var_40_3
                    
                    if (*(ebx_1 + 0x48) != 0xffffffff)
                        var_40_3 = 1f
                    else
                        var_40_3 = 1f
                    
                    long double x87_r7_300 = fconvert.t(*(ebx_1 + 4)) * fconvert.t(6f)
                    long double x87_r6_61 = data_506e48
                    x87_r6_61 - x87_r7_300
                    eax_65.w = (x87_r6_61 < x87_r7_300 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_61, x87_r7_300) ? 1 : 0) << 0xa
                        | (x87_r6_61 == x87_r7_300 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_65:1.b, 6)) && not(test_bit(eax_65:1.b, 0)))
                        *(ebx_1 + 0x20) = fconvert.s(
                            sub_402b3c(fconvert.t(*(ebx_1 + 4)) * fconvert.t(6f)) * fconvert.t(var_40_3)
                            * fconvert.t(50f) + fconvert.t(*(ebx_1 + 0x20)))
                        long double st0_32
                        st0_32, eax_65 = sub_402b3c(fconvert.t(*(ebx_1 + 4)) * fconvert.t(6f))
                        *(ebx_1 + 0x18) = fconvert.s(fconvert.t(*(ebx_1 + 0x18))
                            - st0_32 * fconvert.t(var_40_3) * fconvert.t(50f))
                    
                    long double x87_r7_313 = data_506f0c
                    long double temp71_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_313 - temp71_1
                    eax_65.w = (x87_r7_313 < temp71_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_313, temp71_1) ? 1 : 0) << 0xa
                        | (x87_r7_313 == temp71_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_65:1.b, 6) || test_bit(eax_65:1.b, 0))
                        long double x87_r7_318 = data_506ef8
                        long double temp74_1 = fconvert.t(*(ebx_1 + 4))
                        x87_r7_318 - temp74_1
                        eax_65.w = (x87_r7_318 < temp74_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_318, temp74_1) ? 1 : 0) << 0xa
                            | (x87_r7_318 == temp74_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_65:1.b, 6) || test_bit(eax_65:1.b, 0))
                            float var_3c_2 = fconvert.s((fconvert.t(*(ebx_1 + 4)) - data_506ef8)
                                * fconvert.t(8f) * fconvert.t(100f) / fconvert.t(3f) + fconvert.t(-10f))
                            long double x87_r7_335 = fconvert.t(var_3c_2)
                            long double temp76_1 = fconvert.t(0f)
                            x87_r7_335 - temp76_1
                            eax_65.w = (x87_r7_335 < temp76_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_335, temp76_1) ? 1 : 0) << 0xa
                                | (x87_r7_335 == temp76_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_65:1.b, 6)) && not(test_bit(eax_65:1.b, 0)))
                                var_3c_2 = 0f
                            
                            *(ebx_1 + 0x20) = fconvert.s(fconvert.t(var_40_3) * fconvert.t(var_3c_2)
                                + fconvert.t(*(ebx_1 + 0x20)))
                        else
                            float var_3c_1 = fconvert.s(fconvert.t(70f)
                                - (fconvert.t(*(ebx_1 + 4)) - data_506f0c) * fconvert.t(7f)
                                * fconvert.t(100f) * fconvert.t(2f))
                            long double x87_r7_325 = fconvert.t(var_3c_1)
                            long double temp77_1 = fconvert.t(-10f)
                            x87_r7_325 - temp77_1
                            eax_65.w = (x87_r7_325 < temp77_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_325, temp77_1) ? 1 : 0) << 0xa
                                | (x87_r7_325 == temp77_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_65:1.b, 0))
                                var_3c_1 = -10f
                            
                            *(ebx_1 + 0x20) = fconvert.s(fconvert.t(var_40_3) * fconvert.t(var_3c_1)
                                + fconvert.t(*(ebx_1 + 0x20)))
                    else
                        *(ebx_1 + 0x20) = fconvert.s(
                            fconvert.t(var_40_3) * fconvert.t(*(ebx_1 + 4)) * fconvert.t(100f)
                            + fconvert.t(*(ebx_1 + 0x20)))
                    
                    long double x87_r7_339 = data_506f2c
                    long double temp78_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_339 - temp78_1
                    eax_65.w = (x87_r7_339 < temp78_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_339, temp78_1) ? 1 : 0) << 0xa
                        | (x87_r7_339 == temp78_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_65:1.b, 6) || test_bit(eax_65:1.b, 0))
                        *(ebx_1 + 0x24) = fconvert.s(fconvert.t(*(ebx_1 + 0x24)) - fconvert.t(640f)
                            + (fconvert.t(*(ebx_1 + 4)) - data_506f2c) * fconvert.t(4f)
                            * fconvert.t(800f))
                    else
                        *(ebx_1 + 0x24) = fconvert.s(fconvert.t(*(ebx_1 + 0x24))
                            - fconvert.t(*(ebx_1 + 4)) * fconvert.t(800f))
                    
                    var_1c_1 = fconvert.s(data_506f44 * fconvert.t(var_14_3))
                    long double x87_r7_348 = fconvert.t(var_1c_1)
                    long double temp84_1 = fconvert.t(1f)
                    x87_r7_348 - temp84_1
                    eax_65.w = (x87_r7_348 < temp84_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_348, temp84_1) ? 1 : 0) << 0xa
                        | (x87_r7_348 == temp84_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_65:1.b, 6)) && not(test_bit(eax_65:1.b, 0)))
                        var_1c_1 = 1f
                    
                    float var_18_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_1c_1))
                    *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_110) * fconvert.t(var_18_2)
                        + fconvert.t(var_1e4) * fconvert.t(var_1c_1))
                    *(ebx_1 + 0x30) = fconvert.s(fconvert.t(var_10c) * fconvert.t(var_18_2)
                        + fconvert.t(var_1e0) * fconvert.t(var_1c_1))
                    *(ebx_1 + 0x34) = fconvert.s(fconvert.t(var_108) * fconvert.t(var_18_2)
                        + fconvert.t(var_1dc) * fconvert.t(var_1c_1))
                
                if (esi_1 s>= 0x80)
                    *(arg2 - 0x12) = 1
                    int32_t temp66_1 = esi_1
                    esi_1 -= 0x80
                    
                    if (add_overflow(temp66_1, 0xffffff80))
                        sub_403010()
                        noreturn
                
                if (esi_1 s>= 0x40)
                    int32_t temp67_1 = esi_1
                    esi_1 -= 0x40
                    
                    if (add_overflow(temp67_1, 0xffffffc0))
                        sub_403010()
                        noreturn
                    
                    long double st0_33
                    st0_33, eax_65 = sub_402b3c((fconvert.t(*(ebx_1 + 4)) - fconvert.t(0f))
                        * data_506e48 / fconvert.t(1f))
                    *(ebx_1 + 0x28) =
                        fconvert.s(fconvert.t(*(ebx_1 + 0x28)) - st0_33 * fconvert.t(150f))
                
                if (esi_1 s>= 0x20)
                    int32_t temp68_1 = esi_1
                    esi_1 -= 0x20
                    
                    if (add_overflow(temp68_1, 0xffffffe0))
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_367 = fconvert.t(*(ebx_1 + 4))
                    long double temp70_1 = fconvert.t(var_8_2)
                    x87_r7_367 - temp70_1
                    eax_65.w = (x87_r7_367 < temp70_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_367, temp70_1) ? 1 : 0) << 0xa
                        | (x87_r7_367 == temp70_1 ? 1 : 0) << 0xe
                    float var_20_1
                    
                    if (not(test_bit(eax_65:1.b, 0)))
                        long double x87_r7_369 = fconvert.t(1f) - fconvert.t(var_8_2)
                        long double temp73_1 = fconvert.t(*(ebx_1 + 4))
                        x87_r7_369 - temp73_1
                        eax_65.w = (x87_r7_369 < temp73_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_369, temp73_1) ? 1 : 0) << 0xa
                            | (x87_r7_369 == temp73_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_65:1.b, 6) || test_bit(eax_65:1.b, 0))
                            var_20_1 = 0f
                        else
                            var_20_1 = fconvert.s((fconvert.t(var_8_2) - fconvert.t(*(ebx_1 + 4)))
                                * fconvert.t(var_8_2)
                                / (fconvert.t(1f) - fconvert.t(var_8_2) * fconvert.t(2f))
                                + fconvert.t(var_8_2))
                    else
                        var_20_1 = *(ebx_1 + 4)
                    
                    *(ebx_1 + 0x24) =
                        fconvert.s(fconvert.t(0f) - fconvert.t(var_20_1) * fconvert.t(3200f))
                
                if (esi_1 s>= 0x10)
                    int32_t temp69_1 = esi_1
                    esi_1 -= 0x10
                    
                    if (add_overflow(temp69_1, 0xfffffff0))
                        sub_403010()
                        noreturn
                    
                    *(ebx_1 + 0x34) = fconvert.s(fconvert.t(*(ebx_1 + 0x34))
                        - fconvert.t(var_1c_1) * fconvert.t(360f))
                
                if (esi_1 s>= 8)
                    int32_t temp72_1 = esi_1
                    esi_1 -= 8
                    
                    if (add_overflow(temp72_1, 0xfffffff8))
                        sub_403010()
                        noreturn
                    
                    *(ebx_1 + 0x30) = fconvert.s(fconvert.t(var_1c_1) * fconvert.t(360f)
                        + fconvert.t(*(ebx_1 + 0x30)))
                
                if (esi_1 s>= 4)
                    int32_t temp75_1 = esi_1
                    esi_1 -= 4
                    
                    if (add_overflow(temp75_1, 0xfffffffc))
                        sub_403010()
                        noreturn
                    
                    *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(*(ebx_1 + 0x2c))
                        - fconvert.t(var_1c_1) * fconvert.t(360f))
                
                if (esi_1 s>= 2)
                    *(arg2 - 0x11) = 1
                    int32_t temp80_1 = esi_1
                    esi_1 -= 2
                    
                    if (add_overflow(temp80_1, 0xfffffffe))
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_387 = data_506f58
                    long double temp83_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_387 - temp83_1
                    void* eax_67
                    eax_67.w = (x87_r7_387 < temp83_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_387, temp83_1) ? 1 : 0) << 0xa
                        | (x87_r7_387 == temp83_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_67:1.b, 0))
                        long double x87_r7_388 = data_506f64
                        long double temp87_1 = fconvert.t(*(ebx_1 + 4))
                        x87_r7_388 - temp87_1
                        eax_67.w = (x87_r7_388 < temp87_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_388, temp87_1) ? 1 : 0) << 0xa
                            | (x87_r7_388 == temp87_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_67:1.b, 6)) && not(test_bit(eax_67:1.b, 0)))
                            if (*(arg2 - 0x12) == 0)
                                long double x87_r7_406 = sub_402b3c((fconvert.t(*(ebx_1 + 4))
                                    - data_506f58) * data_506e48 / fconvert.t(7f) * fconvert.t(10f))
                                    * fconvert.t(8f) * fconvert.t(*(ebx_1 + 0x5c))
                                    + fconvert.t(*(ebx_1 + 0x3c))
                                *(ebx_1 + 0x3c) = fconvert.s(x87_r7_406)
                            else
                                long double x87_r7_396 = sub_402b3c((fconvert.t(*(ebx_1 + 4))
                                    - data_506f58) * data_506e48 / fconvert.t(7f) * fconvert.t(10f))
                                    * fconvert.t(8f) * fconvert.t(*(ebx_1 + 0x5c))
                                *(ebx_1 + 0x3c) = fconvert.s(fconvert.t(*(ebx_1 + 0x3c)) - x87_r7_396)
                            
                            ebx_1[0x38] = 1
                            *(ebx_1 + 0x44) = 0
                
                if (esi_1 s>= 1)
                    *(arg2 - 0x11) = 1
                    long double x87_r7_407 = data_506f58
                    long double temp82_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_407 - temp82_1
                    void* eax_69
                    eax_69.w = (x87_r7_407 < temp82_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_407, temp82_1) ? 1 : 0) << 0xa
                        | (x87_r7_407 == temp82_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_69:1.b, 0))
                        long double x87_r7_408 = data_506f64
                        long double temp86_1 = fconvert.t(*(ebx_1 + 4))
                        x87_r7_408 - temp86_1
                        eax_69.w = (x87_r7_408 < temp86_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_408, temp86_1) ? 1 : 0) << 0xa
                            | (x87_r7_408 == temp86_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_69:1.b, 6)) && not(test_bit(eax_69:1.b, 0)))
                            if (*(arg2 - 0x12) == 0)
                                long double x87_r7_426 = sub_402b3c((fconvert.t(*(ebx_1 + 4))
                                    - data_506f58) * data_506e48 / fconvert.t(7f) * fconvert.t(10f))
                                    * fconvert.t(8f) * fconvert.t(*(ebx_1 + 0x5c))
                                    + fconvert.t(*(ebx_1 + 0x3c))
                                *(ebx_1 + 0x3c) = fconvert.s(x87_r7_426)
                            else
                                long double x87_r7_416 = sub_402b3c((fconvert.t(*(ebx_1 + 4))
                                    - data_506f58) * data_506e48 / fconvert.t(7f) * fconvert.t(10f))
                                    * fconvert.t(8f) * fconvert.t(*(ebx_1 + 0x5c))
                                *(ebx_1 + 0x3c) = fconvert.s(fconvert.t(*(ebx_1 + 0x3c)) - x87_r7_416)
                            
                            ebx_1[0x38] = 0
                            *(ebx_1 + 0x44) = 0
                
                *(ebx_1 + 0x60)
                bool o_29 = unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                
                if (o_29)
                    sub_403010()
                    noreturn
                
                arg1.b = *(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14)
                
                if (arg1.b - 4 u>= 2)
                    *(ebx_1 + 0x60)
                    *(ebx_1 + 0x60)
                    bool o_30 = unimplemented  {imul edx, dword [ebx+0x60], 0x5}
                    
                    if (o_30)
                        sub_403010()
                        noreturn
                    
                    data_5304b0
                    
                    if (arg1.b != 3)
                        *(ebx_1 + 0x60)
                        *(ebx_1 + 0x60)
                        bool o_31 = unimplemented  {imul edx, dword [ebx+0x60], 0x5}
                        
                        if (o_31)
                            sub_403010()
                            noreturn
                        
                        data_5304b0
                        
                        if (arg1.b == 1)
                            float var_1c_2 = *(ebx_1 + 4)
                            long double x87_r7_427 = fconvert.t(var_1c_2)
                            long double temp96_1 = fconvert.t(0f)
                            x87_r7_427 - temp96_1
                            float eax_71
                            eax_71.w = (x87_r7_427 < temp96_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_427, temp96_1) ? 1 : 0) << 0xa
                                | (x87_r7_427 == temp96_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_71:1.b, 0))
                                var_1c_2 = 0f
                            
                            long double x87_r7_428 = fconvert.t(var_1c_2)
                            long double temp100_1 = fconvert.t(1f)
                            x87_r7_428 - temp100_1
                            eax_71.w = (x87_r7_428 < temp100_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_428, temp100_1) ? 1 : 0) << 0xa
                                | (x87_r7_428 == temp100_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_71:1.b, 6)) && not(test_bit(eax_71:1.b, 0)))
                                var_1c_2 = 1f
                            
                            *(ebx_1 + 0x3c) = fconvert.s(fconvert.t(var_fc)
                                * fconvert.t(fconvert.s(fconvert.t(1f) - fconvert.t(var_1c_2)))
                                + fconvert.t(var_1d0) * fconvert.t(var_1c_2))
                            eax_71.b = var_104
                            ebx_1[0x38] = eax_71.b
                            *(ebx_1 + 0x44) = var_100
                            *(ebx_1 + 0x28) = 0
                        else if (*(arg2 - 0x11) == 0)
                            *(ebx_1 + 0x3c) = fconvert.s(fconvert.t(var_1d0) * fconvert.t(1f))
                            arg1.b = var_1d8
                            ebx_1[0x38] = arg1.b
                            *(ebx_1 + 0x44) = var_1d4
                
                if (*(ebx_1 + 0x74) s> 0)
                    long double x87_r7_436 = data_506f70
                    long double temp90_1 = fconvert.t(*(ebx_1 + 4))
                    x87_r7_436 - temp90_1
                    arg1.w = (x87_r7_436 < temp90_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_436, temp90_1) ? 1 : 0) << 0xa
                        | (x87_r7_436 == temp90_1 ? 1 : 0) << 0xe
                
                long double x87_r7_437 = fconvert.t(*(ebx_1 + 0x64))
                long double temp89_1 = fconvert.t(0f)
                x87_r7_437 - temp89_1
                arg1.w = (x87_r7_437 < temp89_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_437, temp89_1) ? 1 : 0) << 0xa
                    | (x87_r7_437 == temp89_1 ? 1 : 0) << 0xe
                
                if (test_bit(arg1:1.b, 6) || test_bit(arg1:1.b, 0))
                    ebx_1[0x71] = 1
                    *(ebx_1 + 4) = fconvert.s(fconvert.t(data_7a7d8c) * fconvert.t(*(ebx_1 + 8))
                        + fconvert.t(*(ebx_1 + 4)))
                    long double x87_r7_444 = fconvert.t(*(ebx_1 + 4))
                    long double temp91_1 = fconvert.t(1f)
                    x87_r7_444 - temp91_1
                    arg1.w = (x87_r7_444 < temp91_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_444, temp91_1) ? 1 : 0) << 0xa
                        | (x87_r7_444 == temp91_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                        *(ebx_1 + 4) = 0x3f800000
                else
                    void* var_24_1 = *(ebx_1 + 8)
                    
                    if (*(*data_5301f4 + 0x4580) != 0 && *(*data_5301f4 + 4) == 3
                            && *(*data_52ffd0 + 0x3d00) != 0)
                        void* eax_78 = *data_52ffd0
                        *(eax_78 + 0x3d18)
                        bool o_32 = unimplemented  {imul eax, dword [eax+0x3d18], 0x2345}
                        
                        if (o_32)
                            sub_403010()
                            noreturn
                        
                        void* edx_35 = *data_52ffd0
                        *(edx_35 + 0x3d1c)
                        bool o_33 = unimplemented  {imul edx, dword [edx+0x3d1c], 0x35}
                        
                        if (o_33)
                            sub_403010()
                            noreturn
                        
                        var_24_1 = *(data_5301b0 + *(eax_78 + 0x3d18) * 0x8d14
                            + *(edx_35 + 0x3d1c) * 0xd4 - 0x8d84)
                    
                    *(ebx_1 + 0x64) = fconvert.s(fconvert.t(*(ebx_1 + 0x64))
                        - fconvert.t(data_7a7d8c) * fconvert.t(var_24_1))
                
                long double x87_r7_445 = data_506f7c
                long double temp93_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_445 - temp93_1
                arg1.w = (x87_r7_445 < temp93_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_445, temp93_1) ? 1 : 0) << 0xa
                    | (x87_r7_445 == temp93_1 ? 1 : 0) << 0xe
                
                if (test_bit(arg1:1.b, 0))
                    long double x87_r7_446 = fconvert.t(*(ebx_1 + 0x68))
                    long double temp95_1 = fconvert.t(0f)
                    x87_r7_446 - temp95_1
                    arg1.w = (x87_r7_446 < temp95_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_446, temp95_1) ? 1 : 0) << 0xa
                        | (x87_r7_446 == temp95_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                        *(ebx_1 + 0x68) = fconvert.s(fconvert.t(*(ebx_1 + 0x68))
                            - fconvert.t(data_7a7d8c) * fconvert.t(*(ebx_1 + 8)))
                        long double x87_r7_450 = fconvert.t(*(ebx_1 + 0x68))
                        long double temp98_1 = fconvert.t(0f)
                        x87_r7_450 - temp98_1
                        arg1.w = (x87_r7_450 < temp98_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_450, temp98_1) ? 1 : 0) << 0xa
                            | (x87_r7_450 == temp98_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(arg1:1.b, 0))
                            *(ebx_1 + 0x68) = 0
                        
                        *(ebx_1 + 4) = 0x3f7ffeb0
                
                long double x87_r7_451 = data_506f7c
                long double temp94_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_451 - temp94_1
                arg1.w = (x87_r7_451 < temp94_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_451, temp94_1) ? 1 : 0) << 0xa
                    | (x87_r7_451 == temp94_1 ? 1 : 0) << 0xe
                
                if (test_bit(arg1:1.b, 0) && ebx_1[0x70] == 0)
                    ebx_1[0x70] = 1
                    *(ebx_1 + 0x60)
                    bool o_34 = unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_81
                    eax_81.b = *(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14)
                    char var_41_1 = eax_81.b
                    void* eax_82 = data_5306f8
                    int32_t temp104_1 = *eax_82
                    *eax_82 += 1
                    
                    if (add_overflow(temp104_1, 1))
                        sub_403010()
                        noreturn
                    
                    void* eax_83 = data_5306f8
                    *eax_83
                    bool o_36 = unimplemented  {imul eax, dword [eax], 0x5}
                    
                    if (o_36)
                        sub_403010()
                        noreturn
                    
                    arg1 = data_5306f8 + *eax_83 * 0x14 - 0x10
                    *arg1 = *(ebx_1 + 0x50)
                    *(arg1 + 4) = *(ebx_1 + 0x48)
                    *(arg1 + 8) = *(ebx_1 + 0x54)
                    *(arg1 + 0xc) = *(ebx_1 + 0x4c)
                    int32_t edx_43 = *arg1
                    
                    if (edx_43 s< 0)
                        if (neg.d(edx_43) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        *arg1 = neg.d(edx_43)
                    
                    if (*(arg1 + 4) s< 0)
                        int32_t edx_44 = *(arg1 + 4)
                        
                        if (neg.d(edx_44) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        *(arg1 + 4) = neg.d(edx_44)
                    
                    edx_43.b = var_41_1
                    *(arg1 + 0x10) = edx_43.b
                
                long double x87_r7_452 = data_506f7c
                long double temp97_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_452 - temp97_1
                arg1.w = (x87_r7_452 < temp97_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_452, temp97_1) ? 1 : 0) << 0xa
                    | (x87_r7_452 == temp97_1 ? 1 : 0) << 0xe
                
                if (test_bit(arg1:1.b, 0))
                    *(ebx_1 + 4) = 0x3f800000
                    *ebx_1 = 0
                    *(ebx_1 + 0x60)
                    bool o_39 = unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                    
                    if (o_39)
                        sub_403010()
                        noreturn
                    
                    if (*(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14) == 1
                            && *(ebx_1 + 0x50) == *(ebx_1 + 0x48) && *(ebx_1 + 0x48) == 0xc)
                        *(ebx_1 + 0x48) = 0xfffffff4
                    
                    int32_t eax_87 = *(ebx_1 + 0x60)
                    bool o_40 = unimplemented  {imul edx, eax, 0x5}
                    
                    if (o_40)
                        sub_403010()
                        noreturn
                    
                    char var_11f
                    
                    if (*(data_5304b0 + eax_87 * 0x14 - 0x14) != 8)
                        *(ebx_1 + 0x60)
                        bool o_45 = unimplemented  {imul edx, dword [ebx+0x60], 0x5}
                        
                        if (o_45)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_51
                        edx_51.b = *(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14)
                        edx_51.b -= 4
                        char temp109_1 = edx_51.b
                        edx_51.b -= 2
                        
                        if (temp109_1 u>= 2)
                            *(ebx_1 + 0x60)
                            bool o_56 = unimplemented  {imul edx, dword [ebx+0x60], 0x5}
                            
                            if (o_56)
                                sub_403010()
                                noreturn
                            
                            int32_t edx_62
                            edx_62.b = *(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14)
                            char temp115_1 = edx_62.b
                            edx_62.b -= 2
                            char temp119_1
                            
                            if (temp115_1 != 2)
                                temp119_1 = edx_62.b
                                edx_62.b -= 5
                            
                            if (temp115_1 != 2 && temp119_1 != 5)
                                *(ebx_1 + 0x60)
                                bool o_73 = unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                                
                                if (o_73)
                                    sub_403010()
                                    noreturn
                                
                                if (*(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14) != 1
                                        || *(ebx_1 + 0x48) s>= 0)
                                    *(ebx_1 + 0x60)
                                    bool o_115 = unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                                    
                                    if (o_115)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14) != 1)
                                        *(ebx_1 + 0x60)
                                        bool o_120 = unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                                        
                                        if (o_120)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_211
                                        eax_211.b = *(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14)
                                        eax_211.b -= 0xe
                                        char temp136_1 = eax_211.b
                                        eax_211.b -= 3
                                        
                                        if (temp136_1 u>= 3)
                                            *(ebx_1 + 0x60)
                                            bool o_127 =
                                                unimplemented  {imul eax, dword [ebx+0x60], 0x5}
                                            
                                            if (o_127)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_217
                                            eax_217.b = *(data_5304b0 + *(ebx_1 + 0x60) * 0x14 - 0x14)
                                            char temp151_1 = eax_217.b
                                            eax_217.b -= 3
                                            
                                            if (temp151_1 != 3)
                                                sub_4f15a4(*(ebx_1 + 0x60))
                                            else
                                                if (*(ebx_1 + 0x6c) s< 4)
                                                    sub_4f15a4(*(ebx_1 + 0x60))
                                                    
                                                    if (var_120 == 0)
                                                        int32_t eax_235 = *(ebx_1 + 0x48)
                                                        
                                                        if (neg.d(eax_235) == 0x80000000)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_143 =
                                                            unimplemented  {imul eax, eax, 0x2345}
                                                        
                                                        if (o_143)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebx_1 + 0x4c)
                                                        bool o_144 = unimplemented  {imul edx, dword [
                                                            ebx+0x4c], 0x35}
                                                        
                                                        if (o_144)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        var_120.d = *(data_5302e4
                                                            + neg.d(eax_235) * 0x8d14
                                                            + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8)
                                                    
                                                    int32_t eax_240 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(eax_240) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_146 = unimplemented  {imul eax, eax, 0x2345}
                                                    
                                                    if (o_146)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x4c)
                                                    bool o_147 = unimplemented  {imul edx, dword [ebx
                                                        +0x4c], 0x35}
                                                    
                                                    if (o_147)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_5301b0 + neg.d(eax_240) * 0x8d14
                                                        + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8) = var_120.d
                                                    int32_t eax_244 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(eax_244) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_149 = unimplemented  {imul eax, eax, 0x2345}
                                                    
                                                    if (o_149)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x4c)
                                                    bool o_150 = unimplemented  {imul edx, dword [ebx
                                                        +0x4c], 0x35}
                                                    
                                                    if (o_150)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t ecx_66 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(ecx_66) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_152 = unimplemented  {imul ecx, ecx, 0x2345}
                                                    
                                                    if (o_152)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x4c)
                                                    bool o_153 = unimplemented  {imul esi, dword [ebx
                                                        +0x4c], 0x35}
                                                    
                                                    if (o_153)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    __builtin_memcpy(
                                                        data_5301b0 + neg.d(ecx_66) * 0x8d14
                                                            + *(ebx_1 + 0x4c) * 0xd4 - 0x8de4, 
                                                        data_5302e4 + neg.d(eax_244) * 0x8d14
                                                        + *(ebx_1 + 0x4c) * 0xd4 - 0x8de4, 0x58)
                                                    
                                                    if (*(*data_5301f4 + 0x4580) == 0
                                                            || *(ebx_1 + 0x50) != 0xc
                                                            || *(*data_52ffd0 + 0x3d01) == 0
                                                            || *(*data_52ffd0 + 0x3d08)
                                                            != *(ebx_1 + 0x54))
                                                        *(ebx_1 + 0x50)
                                                        bool o_154 = unimplemented  {imul eax, dword [
                                                            ebx+0x50], 0x2345}
                                                        
                                                        if (o_154)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebx_1 + 0x54)
                                                        bool o_155 = unimplemented  {imul edx, dword [
                                                            ebx+0x54], 0x35}
                                                        
                                                        if (o_155)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14
                                                            + *(ebx_1 + 0x54) * 0xd4 - 0x8de8) = 0
                                                        *(ebx_1 + 0x50)
                                                        int32_t eax_257 = *(ebx_1 + 0x50) * 0x2345
                                                        bool o_156 = unimplemented  {imul eax, dword [
                                                            ebx+0x50], 0x2345}
                                                        
                                                        if (o_156)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        void* edx_151 = data_5301b0
                                                        int32_t temp214_1 =
                                                            *(edx_151 + (eax_257 << 2) - 0x39c)
                                                        *(edx_151 + (eax_257 << 2) - 0x39c) -= 1
                                                        
                                                        if (add_overflow(temp214_1, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                    else
                                                        *(ebx_1 + 0x50)
                                                        bool o_158 = unimplemented  {imul eax, dword [
                                                            ebx+0x50], 0x2345}
                                                        
                                                        if (o_158)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebx_1 + 0x54)
                                                        bool o_159 = unimplemented  {imul edx, dword [
                                                            ebx+0x54], 0x35}
                                                        
                                                        if (o_159)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14
                                                            + *(ebx_1 + 0x54) * 0xd4 - 0x8de8) =
                                                            *(*data_52ffd0 + 0x3d10)
                                                        *(ebx_1 + 0x50)
                                                        int32_t eax_260 = *(ebx_1 + 0x50) * 0x2345
                                                        bool o_160 = unimplemented  {imul eax, dword [
                                                            ebx+0x50], 0x2345}
                                                        
                                                        if (o_160)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        void* edx_154 = data_5301b0
                                                        int32_t temp230_1 =
                                                            *(edx_154 + (eax_260 << 2) - 0x39c)
                                                        *(edx_154 + (eax_260 << 2) - 0x39c) -= 1
                                                        
                                                        if (add_overflow(temp230_1, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                    
                                                    int32_t eax_261 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(eax_261) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_163 = unimplemented  {imul eax, eax, 0x2345}
                                                    
                                                    if (o_163)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t edx_156 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(edx_156) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_165 = unimplemented  {imul edx, edx, 0x2345}
                                                    
                                                    if (o_165)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_5301b0 + neg.d(edx_156) * 0x8d14 - 0x39c) =
                                                        *(data_5302e4 + neg.d(eax_261) * 0x8d14 - 0x39c)
                                                else
                                                    sub_4f15a4(*(ebx_1 + 0x60))
                                                    
                                                    if (var_120 == 0)
                                                        int32_t eax_219 = *(ebx_1 + 0x48)
                                                        
                                                        if (neg.d(eax_219) == 0x80000000)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_129 =
                                                            unimplemented  {imul eax, eax, 0x2345}
                                                        
                                                        if (o_129)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebx_1 + 0x4c)
                                                        bool o_130 = unimplemented  {imul edx, dword [
                                                            ebx+0x4c], 0x35}
                                                        
                                                        if (o_130)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        var_120.d = *(data_5302e4
                                                            + neg.d(eax_219) * 0x8d14
                                                            + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8)
                                                    
                                                    int32_t eax_224 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(eax_224) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_132 = unimplemented  {imul eax, eax, 0x2345}
                                                    
                                                    if (o_132)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x4c)
                                                    bool o_133 = unimplemented  {imul edx, dword [ebx
                                                        +0x4c], 0x35}
                                                    
                                                    if (o_133)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_5301b0 + neg.d(eax_224) * 0x8d14
                                                        + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8) = var_120.d
                                                    int32_t eax_228 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(eax_228) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_135 = unimplemented  {imul eax, eax, 0x2345}
                                                    
                                                    if (o_135)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x4c)
                                                    bool o_136 = unimplemented  {imul edx, dword [ebx
                                                        +0x4c], 0x35}
                                                    
                                                    if (o_136)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t ecx_61 = *(ebx_1 + 0x48)
                                                    
                                                    if (neg.d(ecx_61) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_138 = unimplemented  {imul ecx, ecx, 0x2345}
                                                    
                                                    if (o_138)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x4c)
                                                    bool o_139 = unimplemented  {imul esi, dword [ebx
                                                        +0x4c], 0x35}
                                                    
                                                    if (o_139)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    __builtin_memcpy(
                                                        data_5301b0 + neg.d(ecx_61) * 0x8d14
                                                            + *(ebx_1 + 0x4c) * 0xd4 - 0x8de4, 
                                                        data_5302e4 + neg.d(eax_228) * 0x8d14
                                                        + *(ebx_1 + 0x4c) * 0xd4 - 0x8de4, 0x58)
                                                    *(ebx_1 + 0x50)
                                                    bool o_140 = unimplemented  {imul eax, dword [ebx
                                                        +0x50], 0x2345}
                                                    
                                                    if (o_140)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(ebx_1 + 0x54)
                                                    bool o_141 = unimplemented  {imul edx, dword [ebx
                                                        +0x54], 0x35}
                                                    
                                                    if (o_141)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14
                                                        + *(ebx_1 + 0x54) * 0xd4 - 0x8de8) = 0
                                                
                                                int32_t eax_265 = *(ebx_1 + 0x48)
                                                
                                                if (neg.d(eax_265) == 0x80000000)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (neg.d(eax_265) == 1)
                                                    int32_t eax_270 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                                    bool o_167 = unimplemented  {imul eax, eax, 0x23}
                                                    
                                                    if (o_167)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_159 = data_530a74
                                                    *edx_159
                                                    bool o_168 =
                                                        unimplemented  {imul edx, dword [edx], 0x1038}
                                                    
                                                    if (o_168)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(*data_530304 + 0xab0) + *edx_159 * 0x81c0
                                                        + (eax_270 << 3) + 8) = 1
                                                    int32_t eax_273 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                                    bool o_169 = unimplemented  {imul eax, eax, 0x23}
                                                    
                                                    if (o_169)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_162 = data_530a74
                                                    *edx_162
                                                    bool o_170 =
                                                        unimplemented  {imul edx, dword [edx], 0x1038}
                                                    
                                                    if (o_170)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(*data_530304 + 0xab0) + *edx_162 * 0x81c0
                                                        + (eax_273 << 3) + 0x14) = 0
                                                    int32_t eax_276 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                                    bool o_171 = unimplemented  {imul eax, eax, 0x23}
                                                    
                                                    if (o_171)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_165 = data_530a74
                                                    *edx_165
                                                    bool o_172 =
                                                        unimplemented  {imul edx, dword [edx], 0x1038}
                                                    
                                                    if (o_172)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(*data_530304 + 0xab0) + *edx_165 * 0x81c0
                                                        + (eax_276 << 3) + 9) = 1
                                                    int32_t eax_279 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                                    bool o_173 = unimplemented  {imul eax, eax, 0x23}
                                                    
                                                    if (o_173)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_168 = data_530a74
                                                    *edx_168
                                                    bool o_174 =
                                                        unimplemented  {imul edx, dword [edx], 0x1038}
                                                    
                                                    if (o_174)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(*data_530304 + 0xab0) + *edx_168 * 0x81c0
                                                        + (eax_279 << 3) + 0x18) = 0x3f800000
                                                    int32_t eax_282 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                                    bool o_175 = unimplemented  {imul eax, eax, 0x23}
                                                    
                                                    if (o_175)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_171 = data_530a74
                                                    *edx_171
                                                    bool o_176 =
                                                        unimplemented  {imul edx, dword [edx], 0x1038}
                                                    
                                                    if (o_176)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(*data_530304 + 0xab0) + *edx_171 * 0x81c0
                                                        + (eax_282 << 3) - 0xf1) = 1
                                                
                                                if (*(ebx_1 + 0x50) == 0xc
                                                        && *(*data_5301f4 + 0x4580) != 0
                                                        && *(*data_5301f4 + 4) == 4)
                                                    int32_t var_d0
                                                    int32_t var_cc
                                                    sub_51b9e0(*data_52ffd0, var_d0, var_cc)
                                                    void* eax_292
                                                    eax_292.b = *(*data_5301f4 + 4)
                                                    eax_292.b -= 3
                                                    char temp235_1 = eax_292.b
                                                    eax_292.b -= 2
                                                    
                                                    if (temp235_1 u< 2)
                                                        sub_51b810(*data_52ffd0)
                                        else
                                            sub_4f15a4(*(ebx_1 + 0x60))
                                            *(ebx_1 + 0x48)
                                            bool o_121 =
                                                unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                                            
                                            if (o_121)
                                                sub_403010()
                                                noreturn
                                            
                                            *(ebx_1 + 0x4c)
                                            bool o_122 =
                                                unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                            
                                            if (o_122)
                                                sub_403010()
                                                noreturn
                                            
                                            *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14
                                                + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8) = var_120.d
                                            *(ebx_1 + 0x50)
                                            int32_t eax_215 = *(ebx_1 + 0x50) * 0x2345
                                            bool o_123 =
                                                unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                            
                                            if (o_123)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_132 = data_5301b0
                                            int32_t temp158_1 = *(edx_132 + (eax_215 << 2) - 0x39c)
                                            *(edx_132 + (eax_215 << 2) - 0x39c) -= 1
                                            
                                            if (add_overflow(temp158_1, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            *(ebx_1 + 0x48)
                                            int32_t eax_216 = *(ebx_1 + 0x48) * 0x2345
                                            bool o_125 =
                                                unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                                            
                                            if (o_125)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_133 = data_5301b0
                                            int32_t temp173_1 = *(edx_133 + (eax_216 << 2) - 0x39c)
                                            *(edx_133 + (eax_216 << 2) - 0x39c) += 1
                                            
                                            if (add_overflow(temp173_1, 1))
                                                sub_403010()
                                                noreturn
                                    else
                                        sub_4f15a4(*(ebx_1 + 0x60))
                                        *(ebx_1 + 0x48)
                                        bool o_116 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                                        
                                        if (o_116)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1 + 0x4c)
                                        bool o_117 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                        
                                        if (o_117)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1 + 0x50)
                                        bool o_118 = unimplemented  {imul ecx, dword [ebx+0x50], 0x2345}
                                        
                                        if (o_118)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1 + 0x54)
                                        bool o_119 = unimplemented  {imul esi, dword [ebx+0x54], 0x35}
                                        
                                        if (o_119)
                                            sub_403010()
                                            noreturn
                                        
                                        __builtin_memcpy(
                                            data_5301b0 + *(ebx_1 + 0x50) * 0x8d14
                                                + *(ebx_1 + 0x54) * 0xd4 - 0x8de4, 
                                            data_5301b0 + *(ebx_1 + 0x48) * 0x8d14
                                            + *(ebx_1 + 0x4c) * 0xd4 - 0x8de4, 0x58)
                                else
                                    sub_4f15a4(*(ebx_1 + 0x60))
                                    int32_t eax_143 = *(ebx_1 + 0x48)
                                    
                                    if (neg.d(eax_143) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_75 = unimplemented  {imul eax, eax, 0x2345}
                                    
                                    if (o_75)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x4c)
                                    bool o_76 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                    
                                    if (o_76)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t ecx_19 = *(ebx_1 + 0x48)
                                    
                                    if (neg.d(ecx_19) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_78 = unimplemented  {imul ecx, ecx, 0x2345}
                                    
                                    if (o_78)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x4c)
                                    bool o_79 = unimplemented  {imul esi, dword [ebx+0x4c], 0x35}
                                    
                                    if (o_79)
                                        sub_403010()
                                        noreturn
                                    
                                    __builtin_memcpy(
                                        data_5301b0 + neg.d(ecx_19) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                            - 0x8de4, 
                                        data_5302e4 + neg.d(eax_143) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                        - 0x8de4, 0x58)
                                    int32_t eax_147 = *(ebx_1 + 0x48)
                                    
                                    if (neg.d(eax_147) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_81 = unimplemented  {imul eax, eax, 0x2345}
                                    
                                    if (o_81)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x4c)
                                    bool o_82 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                    
                                    if (o_82)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edx_83 = *(ebx_1 + 0x48)
                                    
                                    if (neg.d(edx_83) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_84 = unimplemented  {imul edx, edx, 0x2345}
                                    
                                    if (o_84)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x4c)
                                    bool o_85 = unimplemented  {imul ecx, dword [ebx+0x4c], 0x35}
                                    
                                    if (o_85)
                                        sub_403010()
                                        noreturn
                                    
                                    *(data_5301b0 + neg.d(edx_83) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                        - 0x8de8) = *(data_5302e4 + neg.d(eax_147) * 0x8d14
                                        + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8)
                                    
                                    if (*(ebx_1 + 0x74) == 0xffffffff)
                                        *(ebx_1 + 0x50)
                                        bool o_86 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                        
                                        if (o_86)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1 + 0x50)
                                        bool o_87 = unimplemented  {imul edx, dword [ebx+0x50], 0x2345}
                                        
                                        if (o_87)
                                            sub_403010()
                                            noreturn
                                        
                                        *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c) =
                                            *(data_5302e4 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c)
                                    
                                    int32_t eax_154 = *(ebx_1 + 0x48)
                                    
                                    if (neg.d(eax_154) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    if (neg.d(eax_154) == 1 && *(*data_5301f4 + 4) == 0)
                                        if (*(*data_5301f4 + 4) == 0)
                                            int32_t eax_161 = *(ebx_1 + 0x48)
                                            
                                            if (neg.d(eax_161) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_90 = unimplemented  {imul eax, eax, 0x2345}
                                            
                                            if (o_90)
                                                sub_403010()
                                                noreturn
                                            
                                            *(ebx_1 + 0x4c)
                                            bool o_91 =
                                                unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                            
                                            if (o_91)
                                                sub_403010()
                                                noreturn
                                            
                                            *(data_5301b0 + neg.d(eax_161) * 0x8d14
                                                + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8)
                                            *(*data_5301f4 + 0x25b34)
                                            
                                            if (sub_4f0c4c() != 0)
                                                goto label_50623b
                                            
                                            goto label_5061df
                                        
                                    label_5061df:
                                        
                                        if (*(*data_5301f4 + 4) == 1)
                                            if (neg.d(*(ebx_1 + 0x48)) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_93 = unimplemented  {imul eax, eax, 0x2345}
                                            
                                            if (o_93)
                                                sub_403010()
                                                noreturn
                                            
                                            data_5301b0
                                            *(ebx_1 + 0x4c)
                                            *(ebx_1 + 0x4c)
                                            bool o_94 =
                                                unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                            
                                            if (o_94)
                                                sub_403010()
                                                noreturn
                                            
                                            if (sub_4f0c64() != 0 || *(*data_5301f4 + 4) == 2)
                                                goto label_50623b
                                            
                                            goto label_50636e
                                        
                                        if (*(*data_5301f4 + 4) != 2)
                                        label_50636e:
                                            int32_t eax_194 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_105 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_105)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_111 = data_530a74
                                            *edx_111
                                            bool o_106 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_106)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_111 * 0x81c0
                                                + (eax_194 << 3) + 8) = 0
                                            int32_t eax_197 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_107 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_107)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_114 = data_530a74
                                            *edx_114
                                            bool o_108 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_108)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_114 * 0x81c0
                                                + (eax_197 << 3) + 0x14) = 0
                                            int32_t eax_200 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_109 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_109)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_117 = data_530a74
                                            *edx_117
                                            bool o_110 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_110)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_117 * 0x81c0
                                                + (eax_200 << 3) + 9) = 0
                                            int32_t eax_203 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_111 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_111)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_120 = data_530a74
                                            *edx_120
                                            bool o_112 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_112)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_120 * 0x81c0
                                                + (eax_203 << 3) + 0x18) = 0
                                            int32_t eax_206 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_113 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_113)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_123 = data_530a74
                                            *edx_123
                                            bool o_114 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_114)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_123 * 0x81c0
                                                + (eax_206 << 3) - 0xf1) = 0
                                        else
                                        label_50623b:
                                            int32_t eax_179 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_95 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_95)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_96 = data_530a74
                                            *edx_96
                                            bool o_96 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_96)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_96 * 0x81c0
                                                + (eax_179 << 3) + 8) = 1
                                            int32_t eax_182 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_97 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_97)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_99 = data_530a74
                                            *edx_99
                                            bool o_98 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_98)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_99 * 0x81c0
                                                + (eax_182 << 3) + 0x14) = 0
                                            int32_t eax_185 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_99 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_99)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_102 = data_530a74
                                            *edx_102
                                            bool o_100 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_100)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_102 * 0x81c0
                                                + (eax_185 << 3) + 9) = 1
                                            int32_t eax_188 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_101 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_101)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_105 = data_530a74
                                            *edx_105
                                            bool o_102 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_102)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_105 * 0x81c0
                                                + (eax_188 << 3) + 0x18) = 0x3f800000
                                            int32_t eax_191 = sub_4ee6dc(*(ebx_1 + 0x4c)) * 0x23
                                            bool o_103 = unimplemented  {imul eax, eax, 0x23}
                                            
                                            if (o_103)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_108 = data_530a74
                                            *edx_108
                                            bool o_104 = unimplemented  {imul edx, dword [edx], 0x1038}
                                            
                                            if (o_104)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(*data_530304 + 0xab0) + *edx_108 * 0x81c0
                                                + (eax_191 << 3) - 0xf1) = 1
                            else
                                sub_4f15a4(eax_87)
                                *(ebx_1 + 0x48)
                                int32_t eax_103 = *(ebx_1 + 0x48) * 0x2345
                                bool o_57 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                                
                                if (o_57)
                                    sub_403010()
                                    noreturn
                                
                                void* edx_63 = data_5301b0
                                int32_t temp121_1 = *(edx_63 + (eax_103 << 2) - 0x39c)
                                *(edx_63 + (eax_103 << 2) - 0x39c) += 1
                                
                                if (add_overflow(temp121_1, 1))
                                    sub_403010()
                                    noreturn
                                
                                int32_t var_38_1 = 1
                                int32_t i_2 = *data_53070c
                                
                                if (i_2 s> 0)
                                    int32_t var_34_1 = 1
                                    void* eax_105 = data_5304b0 + 4
                                    int32_t i
                                    
                                    do
                                        *eax_105
                                        bool o_59 = unimplemented  {imul edx, dword [eax], 0x2345}
                                        
                                        if (o_59)
                                            sub_403010()
                                            noreturn
                                        
                                        *(eax_105 + 4)
                                        bool o_60 = unimplemented  {imul ecx, dword [eax+0x4], 0x35}
                                        
                                        if (o_60)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(data_5301b0 + *eax_105 * 0x8d14 + *(eax_105 + 4) * 0xd4
                                                - 0x8d8c) != 0)
                                            void* edx_65
                                            edx_65.b = *(eax_105 - 4)
                                            char temp143_1 = edx_65.b
                                            edx_65.b -= 2
                                            
                                            if (temp143_1 == 2)
                                                var_38_1 = 0
                                        
                                        var_34_1 += 1
                                        eax_105 += 0x14
                                        i = i_2
                                        i_2 -= 1
                                    while (i != 1)
                                
                                if (*(*data_5301f4 + 0x4580) == 0 || *(*data_52ffd0 + 0x3d00) == 0
                                        || var_38_1 != 1 || *(ebx_1 + 0x48) != 0xc)
                                    *(arg2 - 0x13) = 0
                                else
                                    sub_51bab0(*data_52ffd0)
                                    *(arg2 - 0x13) = 1
                                
                                if (*(arg2 - 0x13) != 0 || *(*data_52ffd0 + 0x3d00) != 0)
                                    *(ebx_1 + 0x50)
                                    bool o_61 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_61)
                                        sub_403010()
                                        noreturn
                                    
                                    var_120.d = *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14
                                        + (*(ebx_1 + 0x54) << 2) - 0x368)
                                    *(ebx_1 + 0x48)
                                    bool o_62 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                                    
                                    if (o_62)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x4c)
                                    bool o_63 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                    
                                    if (o_63)
                                        sub_403010()
                                        noreturn
                                    
                                    *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                        - 0x8de8) = var_120.d
                                else
                                    *(ebx_1 + 0x48)
                                    bool o_64 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                                    
                                    if (o_64)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x4c)
                                    bool o_65 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                                    
                                    if (o_65)
                                        sub_403010()
                                        noreturn
                                    
                                    *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                        - 0x8de8) = var_120.d
                                    *(ebx_1 + 0x50)
                                    bool o_66 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_66)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c)
                                            s< *(ebx_1 + 0x54) || *(*data_5301f4 + 0x4580) == 0
                                            || *(*data_52ffd0 + 0x3d01) == 0
                                            || (*(*data_52ffd0 + 0x3d00) == 0 && *(arg2 - 0x13) == 0)
                                            || *(*data_52ffd0 + 0x3d08) != *(ebx_1 + 0x4c))
                                        *(ebx_1 + 0x50)
                                        bool o_67 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                        
                                        if (o_67)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1 + 0x54)
                                        bool o_68 = unimplemented  {imul edx, dword [ebx+0x54], 0x35}
                                        
                                        if (o_68)
                                            sub_403010()
                                            noreturn
                                        
                                        *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14
                                            + *(ebx_1 + 0x54) * 0xd4 - 0x8de8) = 0
                                
                                if (*(ebx_1 + 0x50) == 0xb)
                                    *(ebx_1 + 0x50)
                                    int32_t eax_138 = *(ebx_1 + 0x50) * 0x2345
                                    bool o_69 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_69)
                                        sub_403010()
                                        noreturn
                                    
                                    void* edx_75 = data_5301b0
                                    int32_t temp167_1 = *(edx_75 + (eax_138 << 2) - 0x39c)
                                    *(edx_75 + (eax_138 << 2) - 0x39c) -= 1
                                    
                                    if (add_overflow(temp167_1, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                else if (*(ebx_1 + 0x74) != 0xffffffff)
                                    *(ebx_1 + 0x50)
                                    bool o_71 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_71)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x50)
                                    bool o_72 = unimplemented  {imul edx, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_72)
                                        sub_403010()
                                        noreturn
                                    
                                    *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c) =
                                        *(data_5302e4 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c)
                        else
                            sub_4f15a4(*(ebx_1 + 0x60))
                            *(ebx_1 + 0x48)
                            int32_t eax_93 = *(ebx_1 + 0x48) * 0x2345
                            bool o_46 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                            
                            if (o_46)
                                sub_403010()
                                noreturn
                            
                            void* edx_52 = data_5301b0
                            int32_t temp116_1 = *(edx_52 + (eax_93 << 2) - 0x39c)
                            *(edx_52 + (eax_93 << 2) - 0x39c) += 1
                            
                            if (add_overflow(temp116_1, 1))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + 0x48)
                            bool o_48 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                            
                            if (o_48)
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + 0x4c)
                            bool o_49 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                            
                            if (o_49)
                                sub_403010()
                                noreturn
                            
                            *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                - 0x8de8) = var_120
                            *(ebx_1 + 0x48)
                            bool o_50 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                            
                            if (o_50)
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + 0x4c)
                            bool o_51 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                            
                            if (o_51)
                                sub_403010()
                                noreturn
                            
                            *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4
                                - 0x8de7) = var_11f
                            *(ebx_1 + 0x50)
                            int32_t eax_98 = *(ebx_1 + 0x50) * 0x2345
                            bool o_52 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                            
                            if (o_52)
                                sub_403010()
                                noreturn
                            
                            void* edx_57 = data_5301b0
                            int32_t temp134_1 = *(edx_57 + (eax_98 << 2) - 0x39c)
                            *(edx_57 + (eax_98 << 2) - 0x39c) -= 1
                            
                            if (add_overflow(temp134_1, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + 0x50)
                            bool o_54 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                            
                            if (o_54)
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + 0x54)
                            bool o_55 = unimplemented  {imul edx, dword [ebx+0x54], 0x35}
                            
                            if (o_55)
                                sub_403010()
                                noreturn
                            
                            *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 + *(ebx_1 + 0x54) * 0xd4
                                - 0x8de8) = 0
                            
                            if (*(data_5301b0 + 0x69954) == 0 && *(data_5301b0 + 0x72668) == 1)
                                int32_t var_3bc_7 = 1
                                long double var_3c4
                                var_3c4:4.d = 1
                                var_3c4.d = 3
                                int32_t var_3c8_5 = 5
                                int32_t var_3cc_5 = 0
                                int32_t var_3d0_5 = 0
                                float var_3d4 = 0f
                                esp = &var_3d4
                                ebp_1 = sub_503984(0xd, *(data_5301b0 + 0x72668), 0xc, var_3d4, 
                                    var_3d0_5, var_3cc_5, var_3c8_5, var_3c4)
                    else
                        sub_4f15a4(eax_87)
                        *(ebx_1 + 0x48)
                        bool o_41 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                        
                        if (o_41)
                            sub_403010()
                            noreturn
                        
                        *(ebx_1 + 0x4c)
                        bool o_42 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                        
                        if (o_42)
                            sub_403010()
                            noreturn
                        
                        *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4 - 0x8de8) =
                            var_120
                        *(ebx_1 + 0x48)
                        bool o_43 = unimplemented  {imul eax, dword [ebx+0x48], 0x2345}
                        
                        if (o_43)
                            sub_403010()
                            noreturn
                        
                        *(ebx_1 + 0x4c)
                        bool o_44 = unimplemented  {imul edx, dword [ebx+0x4c], 0x35}
                        
                        if (o_44)
                            sub_403010()
                            noreturn
                        
                        *(data_5301b0 + *(ebx_1 + 0x48) * 0x8d14 + *(ebx_1 + 0x4c) * 0xd4 - 0x8de7) =
                            var_11f
                    data_7a7d4c = 0
                    data_7a7d58 = 0
        else
            *(ebx_1 + 4) = fconvert.s(
                fconvert.t(data_7a7d8c) * fconvert.t(*(ebx_1 + 8)) / fconvert.t(1f)
                + fconvert.t(*(ebx_1 + 4)))
            long double x87_r7_5 = fconvert.t(*(ebx_1 + 4))
            long double temp4_1 = fconvert.t(1f)
            x87_r7_5 - temp4_1
            arg1.w = (x87_r7_5 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                *(ebx_1 + 4) = 0x3f800000
            
            long double x87_r7_6 = fconvert.t(*(ebx_1 + 4))
            long double temp5_1 = fconvert.t(1f)
            x87_r7_6 - temp5_1
            arg1.w = (x87_r7_6 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe
            
            if (test_bit(arg1:1.b, 0))
                char* var_3bc_2 = &var_120
                sub_5044a0(0, *(ebx_1 + 0x54), *(ebx_1 + 0x50))
                void* var_3bc_3 = &var_1f4
                int32_t ecx_3
                ecx_3.b = 1
                sub_5044a0(ecx_3, *(ebx_1 + 0x54), *(ebx_1 + 0x50))
                esp = &var_3b8
                *(ebx_1 + 0x40) = 0
                __builtin_memset(&ebx_1[0x18], 0, 0x21)
                *(ebx_1 + 0x44) = 0
                *(ebx_1 + 0x3c) = 0
                float var_48_1 = fconvert.s(sub_402b2c(fconvert.t(*(ebx_1 + 0x5c))))
                long double st0_2
                st0_2, arg1 = sub_402b3c(fconvert.t(*(ebx_1 + 0x5c)))
                float var_4c_1 = fconvert.s(st0_2 * fconvert.t(1.5f))
                int32_t var_8_1 = 0x3d23d70a
                long double x87_r7_12 = fconvert.t(*(ebx_1 + 4))
                long double temp7_1 = fconvert.t(0.0399999991f)
                x87_r7_12 - temp7_1
                arg1.w = (x87_r7_12 < temp7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_12, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp7_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                    long double x87_r7_13 = fconvert.t(*(ebx_1 + 4))
                    long double temp10_1 = fconvert.t(0.5f)
                    x87_r7_13 - temp10_1
                    arg1.w = (x87_r7_13 < temp10_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_13, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp10_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                        long double x87_r7_39 = fconvert.t(1f) - fconvert.t(0.0399999991f)
                        long double temp14_1 = fconvert.t(*(ebx_1 + 4))
                        x87_r7_39 - temp14_1
                        arg1.w = (x87_r7_39 < temp14_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_39, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r7_39 == temp14_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(arg1:1.b, 0)))
                            long double x87_r6_6 = fconvert.t(*(ebx_1 + 4)) - fconvert.t(0.5f)
                            float var_14_2 = fconvert.s(x87_r6_6 / x87_r6_6)
                            float var_10_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_14_2))
                            float var_40_2 = fconvert.s((
                                sub_402b3c(data_506e48 * fconvert.t(var_10_2) / fconvert.t(2f))
                                * fconvert.t(var_10_2) + fconvert.t(var_10_2) * fconvert.t(var_14_2))
                                * fconvert.t(220f))
                            
                            if (mods.dp.d(sx.q(*(ebx_1 + 0x54)), 3) != 0)
                                if (mods.dp.d(sx.q(*(ebx_1 + 0x54)), 3) != 1)
                                    *(ebx_1 + 0x20) = fconvert.s(
                                        sub_402b3c(data_506e48 * fconvert.t(var_14_2))
                                        * fconvert.t(400f) + fconvert.t(*(ebx_1 + 0x20)))
                                    *(ebx_1 + 0x50)
                                    bool o_7 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_7)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_24 = *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c)
                                    
                                    if (add_overflow(eax_24, neg.d(*(ebx_1 + 0x54))))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + 0x20) = fconvert.s(float.t(eax_24 - *(ebx_1 + 0x54))
                                        * fconvert.t(var_14_2) * data_506e80 + fconvert.t(*(ebx_1 + 0x20)))
                                else
                                    *(ebx_1 + 0x18) = fconvert.s(fconvert.t(*(ebx_1 + 0x18))
                                        - fconvert.t(var_48_1) * fconvert.t(var_40_2))
                                    *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(*(ebx_1 + 0x1c))
                                        - fconvert.t(var_4c_1) * fconvert.t(var_40_2))
                                    *(ebx_1 + 0x20) = fconvert.s(
                                        sub_402b3c(data_506e48 * fconvert.t(var_14_2)) * fconvert.t(10f)
                                        + fconvert.t(*(ebx_1 + 0x20)))
                                    *(ebx_1 + 0x20) = fconvert.s(
                                        float.t(*(ebx_1 + 0x54)) * fconvert.t(var_14_2) * data_506e6c
                                        + fconvert.t(*(ebx_1 + 0x20)))
                                    *(ebx_1 + 0x20) = fconvert.s(
                                        float.t(*(ebx_1 + 0x54)) * fconvert.t(var_14_2) * data_506e6c
                                        + fconvert.t(*(ebx_1 + 0x20)))
                            else
                                *(ebx_1 + 0x18) = fconvert.s(fconvert.t(var_48_1) * fconvert.t(var_40_2)
                                    + fconvert.t(*(ebx_1 + 0x18)))
                                *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(var_4c_1) * fconvert.t(var_40_2)
                                    + fconvert.t(*(ebx_1 + 0x1c)))
                                *(ebx_1 + 0x20) = fconvert.s(
                                    sub_402b3c(data_506e48 * fconvert.t(var_14_2)) * fconvert.t(200f)
                                    + fconvert.t(*(ebx_1 + 0x20)))
                                *(ebx_1 + 0x50)
                                bool o_5 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                                
                                if (o_5)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_18 = *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c)
                                
                                if (add_overflow(eax_18, neg.d(*(ebx_1 + 0x54))))
                                    sub_403010()
                                    noreturn
                                
                                *(ebx_1 + 0x20) = fconvert.s(float.t(eax_18 - *(ebx_1 + 0x54))
                                    * fconvert.t(var_14_2) * data_506e60 + fconvert.t(*(ebx_1 + 0x20)))
                                *(ebx_1 + 0x20) = fconvert.s(
                                    float.t(*(ebx_1 + 0x54)) * fconvert.t(var_14_2) * data_506e6c
                                    + fconvert.t(*(ebx_1 + 0x20)))
                            
                            long double st0_8 = sub_402b3c(data_506e48 * fconvert.t(var_14_2))
                            *(ebx_1 + 0x50)
                            bool o_9 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                            
                            if (o_9)
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + 0x20) = fconvert.s(st0_8 * float.t(*(ebx_1 + 0x54))
                                * fconvert.t(30f)
                                / float.t(*(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c))
                                + fconvert.t(*(ebx_1 + 0x20)))
                    else
                        float var_14_1 = fconvert.s((fconvert.t(*(ebx_1 + 4))
                            - fconvert.t(0.0399999991f)) / (fconvert.t(0.5f) - fconvert.t(0.0399999991f)))
                        float var_40_1 = fconvert.s((
                            sub_402b3c(data_506e48 * fconvert.t(var_14_1) / fconvert.t(2f))
                            * fconvert.t(var_14_1) + fconvert.t(var_14_1)
                            * fconvert.t(fconvert.s(fconvert.t(1f) - fconvert.t(var_14_1))))
                            * fconvert.t(220f))
                        
                        if (mods.dp.d(sx.q(*(ebx_1 + 0x54)), 3) != 0)
                            if (mods.dp.d(sx.q(*(ebx_1 + 0x54)), 3) == 1)
                                *(ebx_1 + 0x18) = fconvert.s(fconvert.t(*(ebx_1 + 0x18))
                                    - fconvert.t(var_48_1) * fconvert.t(var_40_1))
                                *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(*(ebx_1 + 0x1c))
                                    - fconvert.t(var_4c_1) * fconvert.t(var_40_1))
                        else
                            *(ebx_1 + 0x18) = fconvert.s(fconvert.t(var_48_1) * fconvert.t(var_40_1)
                                + fconvert.t(*(ebx_1 + 0x18)))
                            *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(var_4c_1) * fconvert.t(var_40_1)
                                + fconvert.t(*(ebx_1 + 0x1c)))
            else
                if (*(ebx_1 + 0x54) s<= 3)
                    int32_t var_3bc_1 = data_7a7d5c
                    sub_51ad40(*data_5303b8, 0xa)
                    esp = &var_3b8
                
                *ebx_1 = 0
                void* eax_3 = data_5306f8
                int32_t temp11_1 = *eax_3
                *eax_3 += 1
                
                if (add_overflow(temp11_1, 1))
                    sub_403010()
                    noreturn
                
                void* eax_4 = data_5306f8
                *eax_4
                bool o_2 = unimplemented  {imul eax, dword [eax], 0x5}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                void* eax_6 = data_5306f8 + *eax_4 * 0x14 - 0x10
                *eax_6 = *(ebx_1 + 0x50)
                *(eax_6 + 4) = *(ebx_1 + 0x48)
                *(eax_6 + 8) = *(ebx_1 + 0x54)
                *(eax_6 + 0xc) = *(ebx_1 + 0x4c)
                int32_t edx_7 = *eax_6
                
                if (edx_7 s< 0)
                    if (neg.d(edx_7) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    *eax_6 = neg.d(edx_7)
                
                int32_t edx_9 = *(eax_6 + 4)
                
                if (edx_9 s< 0)
                    if (neg.d(edx_9) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    *(eax_6 + 4) = neg.d(edx_9)
                
                char var_41
                edx_9.b = var_41
                *(eax_6 + 0x10) = edx_9.b
                sub_4f15a4(*(ebx_1 + 0x60))
        
        if (ebx_1[1] == 1)
            if (ebx_1[0xc] == 2)
                *(ebx_1 + 0x40) = fconvert.s(
                    fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc)) * fconvert.t(5f)
                    + fconvert.t(*(ebx_1 + 0x40)))
                
                if (*(ebx_1 + 0x50) - 0xb u< 3)
                    *(ebx_1 + 0x2c) = fconvert.s(
                        fneg(sub_402b3c(fconvert.t(*(ebx_1 + 0x40)))) * fconvert.t(2f) * fconvert.t(2f)
                        - data_506e90)
                else if (*(*data_5301f4 + 4) != 4)
                    *(ebx_1 + 0x2c) = fconvert.s(
                        fneg(sub_402b3c(fconvert.t(*(ebx_1 + 0x40)))) * fconvert.t(2f) * fconvert.t(1f)
                        - data_506e90)
                else
                    *(ebx_1 + 0x2c) = fconvert.s(fneg(sub_402b3c(fconvert.t(*(ebx_1 + 0x40))))
                        * fconvert.t(2f) * fconvert.t(0.5f) - data_506e90)
                
                if (*(ebx_1 + 0x50) - 0xb u>= 3)
                    *(ebx_1 + 0x1c) = 0xc2200000
                else
                    *(ebx_1 + 0x20) = 0x42200000
            
            arg1.b = ebx_1[0xc]
            
            if (arg1.b == 0)
                if (*(ebx_1 + 0x50) - 0xb u>= 3)
                    *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(-40f) * fconvert.t(*(ebx_1 + 4)))
                else
                    *(ebx_1 + 0x20) = fconvert.s(fconvert.t(40f) * fconvert.t(*(ebx_1 + 4)))
                
                *(ebx_1 + 4) = fconvert.s(
                    fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc)) * fconvert.t(8f)
                    + fconvert.t(*(ebx_1 + 4)))
                long double x87_r7_483 = fconvert.t(*(ebx_1 + 4))
                long double temp24_1 = fconvert.t(1f)
                x87_r7_483 - temp24_1
                arg1.w = (x87_r7_483 < temp24_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_483, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_483 == temp24_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                    *(ebx_1 + 4) = 0x3f800000
            else if (arg1.b == 1)
                if (*(ebx_1 + 0x50) - 0xb u>= 3)
                    *(ebx_1 + 0x1c) = fconvert.s(fconvert.t(-40f) * fconvert.t(*(ebx_1 + 4)))
                    long double x87_r7_489 = fconvert.t(*(ebx_1 + 0x1c))
                    long double temp22_1 = fconvert.t(0f)
                    x87_r7_489 - temp22_1
                    int16_t eax_311 = (x87_r7_489 < temp22_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_489, temp22_1) ? 1 : 0) << 0xa
                        | (x87_r7_489 == temp22_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_311:1.b, 6)) && not(test_bit(eax_311:1.b, 0)))
                        *(ebx_1 + 0x1c) = 0
                        *ebx_1 = 0
                else
                    *(ebx_1 + 0x20) = fconvert.s(fconvert.t(40f) * fconvert.t(*(ebx_1 + 4)))
                    long double x87_r7_486 = fconvert.t(*(ebx_1 + 0x20))
                    long double temp23_1 = fconvert.t(0f)
                    x87_r7_486 - temp23_1
                    
                    if (test_bit(
                            ((x87_r7_486 < temp23_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_486, temp23_1) ? 1 : 0) << 0xa
                                | (x87_r7_486 == temp23_1 ? 1 : 0) << 0xe):1.b, 
                            0))
                        *(ebx_1 + 0x20) = 0
                        *ebx_1 = 0
                
                *(ebx_1 + 0x3c) = *(ebx_1 + 0x2c)
                long double x87_r7_490 = fconvert.t(*(ebx_1 + 0x3c))
                long double temp29_1 = fconvert.t(0f)
                x87_r7_490 - temp29_1
                int32_t eax_312
                eax_312.w = (x87_r7_490 < temp29_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_490, temp29_1) ? 1 : 0) << 0xa
                    | (x87_r7_490 == temp29_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_312:1.b, 0)))
                    long double x87_r7_495 = fconvert.t(*(ebx_1 + 0x3c))
                    long double temp36_1 = fconvert.t(0f)
                    x87_r7_495 - temp36_1
                    eax_312.w = (x87_r7_495 < temp36_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_495, temp36_1) ? 1 : 0) << 0xa
                        | (x87_r7_495 == temp36_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_312:1.b, 6) || test_bit(eax_312:1.b, 0))
                        *(ebx_1 + 0x3c) = 0
                    else
                        *(ebx_1 + 0x3c) = fconvert.s(fconvert.t(*(ebx_1 + 0x3c))
                            - fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc)) * fconvert.t(1f))
                else
                    *(ebx_1 + 0x3c) = fconvert.s(
                        fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc)) * fconvert.t(1f)
                        + fconvert.t(*(ebx_1 + 0x3c)))
                
                long double x87_r7_500 = fconvert.t(*(ebx_1 + 0x44))
                long double temp41_1 = fconvert.t(0f)
                x87_r7_500 - temp41_1
                void* const eax_314
                eax_314.w = (x87_r7_500 < temp41_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_500, temp41_1) ? 1 : 0) << 0xa
                    | (x87_r7_500 == temp41_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_314:1.b, 0)))
                    *(ebx_1 + 0x44) = 0
                else
                    *(ebx_1 + 0x44) = fconvert.s(fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc))
                        + fconvert.t(*(ebx_1 + 0x44)))
                
                *(ebx_1 + 0x2c) = *(ebx_1 + 0x3c)
                *(ebx_1 + 0x3c) = 0
                long double x87_r7_504 = data_506e90
                long double temp45_1 = fconvert.t(*(ebx_1 + 4))
                x87_r7_504 - temp45_1
                int16_t eax_319 = (x87_r7_504 < temp45_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_504, temp45_1) ? 1 : 0) << 0xa
                    | (x87_r7_504 == temp45_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_319:1.b, 6) || test_bit(eax_319:1.b, 0))
                    *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(*(ebx_1 + 0x2c)) * fconvert.t(*(ebx_1 + 4)))
                else
                    *(ebx_1 + 0x2c) = 0
                
                *(ebx_1 + 4) = fconvert.s(fconvert.t(*(ebx_1 + 4))
                    - fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc)) * fconvert.t(8f))
                long double x87_r7_511 = fconvert.t(*(ebx_1 + 4))
                long double temp49_1 = fconvert.t(0f)
                x87_r7_511 - temp49_1
                arg1.w = (x87_r7_511 < temp49_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_511, temp49_1) ? 1 : 0) << 0xa
                    | (x87_r7_511 == temp49_1 ? 1 : 0) << 0xe
                
                if (test_bit(arg1:1.b, 6) || test_bit(arg1:1.b, 0))
                    *(ebx_1 + 4) = 0
            
            long double x87_r7_512 = data_506f7c
            long double temp16_1 = fconvert.t(*(ebx_1 + 4))
            x87_r7_512 - temp16_1
            arg1.w = (x87_r7_512 < temp16_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_512, temp16_1) ? 1 : 0) << 0xa
                | (x87_r7_512 == temp16_1 ? 1 : 0) << 0xe
            
            if (test_bit(arg1:1.b, 0))
                *(ebx_1 + 4) = 0x3f800000
                
                if (ebx_1[0xc] == 0)
                    ebx_1[0xc] = 2
                    
                    if (*(*data_5301f4 + 0x10278) != 0)
                        *(ebx_1 + 0x50)
                        bool o_177 = unimplemented  {imul eax, dword [ebx+0x50], 0x2345}
                        
                        if (o_177)
                            sub_403010()
                            noreturn
                        
                        int32_t i_3 = *(data_5301b0 + *(ebx_1 + 0x50) * 0x8d14 - 0x39c)
                        
                        if (i_3 s> 0)
                            ebp_1[-9] = 1
                            arg1 = data_5301b0 + 0xd4
                            int32_t i_1
                            
                            do
                                if (*(ebx_1 + 0x54) != ebp_1[-9])
                                    *(ebx_1 + 0x50)
                                    bool o_178 = unimplemented  {imul edx, dword [ebx+0x50], 0x2345}
                                    
                                    if (o_178)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(arg1 + *(ebx_1 + 0x50) * 0x8d14 - 0x8d8c) != 0)
                                        *(ebx_1 + 0x50)
                                        bool o_179 = unimplemented  {imul edx, dword [ebx+0x50], 0x2345}
                                        
                                        if (o_179)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1 + 0x40) = *(arg1 + *(ebx_1 + 0x50) * 0x8d14 - 0x8d4c)
                                
                                ebp_1[-9] += 1
                                arg1 += 0xd4
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
            
            long double x87_r7_513 = data_506f90
            long double temp21_1 = fconvert.t(*(ebx_1 + 4))
            x87_r7_513 - temp21_1
            arg1.w = (x87_r7_513 < temp21_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_513, temp21_1) ? 1 : 0) << 0xa
                | (x87_r7_513 == temp21_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                *(ebx_1 + 4) = 0
                
                if (ebx_1[0xc] == 1)
                    *ebx_1 = 0
    
    *esp
    esp[1]
    esp[2]
    *ebp_1
}
