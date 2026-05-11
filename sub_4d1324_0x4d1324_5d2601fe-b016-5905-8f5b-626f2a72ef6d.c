// ============================================================
// 函数名称: sub_4d1324
// 虚拟地址: 0x4d1324
// WARP GUID: 5d2601fe-b016-5905-8f5b-626f2a72ef6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d12e8, sub_4d0ae4, sub_402b3c, sub_4cb8e8, sub_4d0148, sub_402b2c, sub_4f0e00, sub_4f0d94, sub_403010
// [被调用的父级函数]: sub_4d2a58
// ============================================================

void* __convention("regparm")sub_4d1324(int32_t arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 - 0x9c) = fconvert.s(data_4d2930 * fconvert.t(*(data_530598 + 0x10)))
    *(arg2 - 0x9c) = fconvert.s(data_4d2930 * fconvert.t(*(data_530598 + 0x10)))
    *(arg2 - 0x84) = fconvert.s(data_4d293c * fconvert.t(*(data_530598 + 0x10)))
    
    if (sub_4cb8e8() == 0)
        *(arg2 - 0x84) = fconvert.s(data_4d2948 * fconvert.t(*(arg2 - 0x84)))
    
    if (sub_4cb8e8() != 0)
        *(arg2 - 0x9c) = fconvert.s(data_4d2954 * fconvert.t(*(data_530598 + 0x10)))
        *(arg2 - 0x84) = fconvert.s(data_4d2960 * fconvert.t(*(data_530598 + 0x10)))
        
        if (arg1 == 1)
            *(arg2 - 0x9c) = fconvert.s(data_4d296c * fconvert.t(*(arg2 - 0x9c)))
            *(arg2 - 0x84) = fconvert.s(data_4d2978 * fconvert.t(*(arg2 - 0x84)))
        else if (arg1 == 2)
            *(arg2 - 0x9c) = fconvert.s(data_4d2984 * fconvert.t(*(arg2 - 0x9c)))
            *(arg2 - 0x84) = fconvert.s(data_4d2990 * fconvert.t(*(arg2 - 0x84)))
        else if (arg1 == 3)
            *(arg2 - 0x9c) = fconvert.s(data_4d299c * fconvert.t(*(arg2 - 0x9c)))
            *(arg2 - 0x84) = fconvert.s(data_4d29a8 * fconvert.t(*(arg2 - 0x84)))
        else if (arg1 == 4)
            *(arg2 - 0x9c) = fconvert.s(data_4d29b4 * fconvert.t(*(arg2 - 0x9c)))
            *(arg2 - 0x84) = fconvert.s(data_4d29c0 * fconvert.t(*(arg2 - 0x84)))
    
    float var_10 = 0f
    
    if (add_overflow(arg1, 0xffffffff))
        sub_403010()
        noreturn
    
    float var_c = fconvert.s(float.t(arg1 - 1) / fconvert.t(5f))
    
    if (arg1 == 0xa)
        var_c = fconvert.s(float.t(*(arg2 - 0x78)) / fconvert.t(3f))
        *(arg2 - 0x9c) = 0x3e0954a8
        *(arg2 - 0x84) = 0x3cc17657
    
    *(arg2 - 0x95) = 0
    sub_4d0ae4(arg2)
    void* result
    
    if (*(arg2 - 0x85) == 3)
        result = arg2
    
    if (*(arg2 - 0x85) != 3 || *(result - 0x95) == 0)
        *(arg2 - 0x30) = 0x30
        
        if (*(arg2 - 0xa0) == 3)
            if (*(*data_530304 + 0xdc0) == 1)
                *(arg2 - 0x30) = 6
            
            if (*(*data_530304 + 0xdc0) == 2)
                *(arg2 - 0x30) = 8
            
            if (*(*data_530304 + 0xdc0) == 3)
                *(arg2 - 0x30) = 9
            
            if (*(*data_530304 + 0xdc0) == 4)
                *(arg2 - 0x30) = 0xc
            
            if (*(*data_530304 + 0xdc0) == 5)
                *(arg2 - 0x30) = 0x10
        else if (*(arg2 - 0xa0) == 2)
            if (*(*data_530304 + 0xdc0) == 1)
                *(arg2 - 0x30) = 9
            
            if (*(*data_530304 + 0xdc0) == 2)
                *(arg2 - 0x30) = 0xb
            
            if (*(*data_530304 + 0xdc0) == 3)
                *(arg2 - 0x30) = 0xc
            
            if (*(*data_530304 + 0xdc0) == 4)
                *(arg2 - 0x30) = 0x12
            
            if (*(*data_530304 + 0xdc0) == 5)
                *(arg2 - 0x30) = 0x18
        else if (*(arg2 - 0xa0) != 1)
            if (*(*data_530304 + 0xdc0) == 1)
                *(arg2 - 0x30) = 0xa
            
            if (*(*data_530304 + 0xdc0) == 2)
                *(arg2 - 0x30) = 0xe
            
            if (*(*data_530304 + 0xdc0) == 3)
                *(arg2 - 0x30) = 0x10
            
            if (*(*data_530304 + 0xdc0) == 4)
                *(arg2 - 0x30) = 0x1a
            
            if (*(*data_530304 + 0xdc0) == 5)
                *(arg2 - 0x30) = 0x1e
        else
            if (*(*data_530304 + 0xdc0) == 1)
                *(arg2 - 0x30) = 9
            
            if (*(*data_530304 + 0xdc0) == 2)
                *(arg2 - 0x30) = 0xd
            
            if (*(*data_530304 + 0xdc0) == 3)
                *(arg2 - 0x30) = 0x10
            
            if (*(*data_530304 + 0xdc0) == 4)
                *(arg2 - 0x30) = 0x18
            
            if (*(*data_530304 + 0xdc0) == 5)
                *(arg2 - 0x30) = 0x1e
        
        if (*(arg2 - 0x80) != 6)
            if (*(arg2 - 0x74) s< 9 || *(arg2 - 0x30) s<= 0xc)
                int32_t eax_108 = *(arg2 - 0x74)
                
                if (eax_108 s>= 2 && eax_108 s<= *data_5300d0)
                    *(arg2 - 0x30) = divs.dp.d(sx.q(*(arg2 - 0x30)), 3)
                    
                    if (*(arg2 - 0x30) s< 6)
                        *(arg2 - 0x30) = 6
            else
                int32_t temp4_1 = *(arg2 - 0x30)
                *(arg2 - 0x30) -= 6
                
                if (add_overflow(temp4_1, 0xfffffffa))
                    sub_403010()
                    noreturn
                
                if (*(arg2 - 0x30) s< 0xa)
                    *(arg2 - 0x30) = 0xa
        
        if (*(arg2 - 0x80) == 6)
            int32_t temp3_1 = *(arg2 - 0x30)
            *(arg2 - 0x30) += 2
            
            if (add_overflow(temp3_1, 2))
                sub_403010()
                noreturn
        
        if (*(arg2 - 0x85) == 3)
            (*data_5306b4)(0x43340000, 0x3f800000, 0, 0)
        
        if (*(arg2 - 0x85) == 2)
            (*data_5301d4)(0, 0, 0x3dcccccd)
            sub_4d12e8()
            *(arg2 - 0xa4) = fconvert.s(fconvert.t(*(data_53044c + 0x60)))
            *(arg2 - 0xa8) = fconvert.s(fconvert.t(*(data_53044c + 0x68)))
            *(arg2 - 0xac) = fconvert.s(fconvert.t(*(data_53044c + 0x70)))
            long double x87_r7_36 = (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa4)))
                * (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa4)))
                + (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa8)))
                * (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa8)))
            *(arg2 - 0xb0) = fconvert.s(x87_r7_36 + (fconvert.t(20f) - fconvert.t(*(arg2 - 0xac)))
                * (fconvert.t(20f) - fconvert.t(*(arg2 - 0xac))))
            (*data_5301d4)(0, 0, 0xbdcccccd)
            sub_4d12e8()
            *(arg2 - 0xa4) = fconvert.s(fconvert.t(*(data_53044c + 0x60)))
            *(arg2 - 0xa8) = fconvert.s(fconvert.t(*(data_53044c + 0x68)))
            *(arg2 - 0xac) = fconvert.s(fconvert.t(*(data_53044c + 0x70)))
            long double x87_r7_44 = (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa4)))
                * (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa4)))
                + (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa8)))
                * (fconvert.t(10f) - fconvert.t(*(arg2 - 0xa8)))
            *(arg2 - 0xb4) = fconvert.s(x87_r7_44 + (fconvert.t(20f) - fconvert.t(*(arg2 - 0xac)))
                * (fconvert.t(20f) - fconvert.t(*(arg2 - 0xac))))
            *(arg2 - 0xb5) = 0
            long double x87_r7_46 = fconvert.t(*(arg2 - 0xb0))
            long double temp5_1 = fconvert.t(*(arg2 - 0xb4))
            x87_r7_46 - temp5_1
            void* eax_153
            eax_153.w = (x87_r7_46 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_46, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_46 == temp5_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_153:1.b, 0))
                *(arg2 - 0xb5) = 1
            
            void* eax_155
            eax_155.b = *(arg2 - 0xb5)
            eax_155.b ^= 1
            *(arg2 - 0xb5) = eax_155.b
            
            if (*(arg2 - 0xb5) != 0)
                if (*data_530954 == 1)
                    (*data_530604)(0x404)
                
                if (*data_530954 == 0)
                    (*data_530604)(0x405)
            
            void* edx_5 = data_53044c
            *(arg2 - 0xc0) = *(edx_5 + 0x60)
            *(arg2 - 0xbc) = *(edx_5 + 0x64)
            void* edx_6 = data_53044c
            *(arg2 - 0xc8) = *(edx_6 + 0x68)
            *(arg2 - 0xc4) = *(edx_6 + 0x6c)
            void* edx_7 = data_53044c
            *(arg2 - 0xd0) = *(edx_7 + 0x70)
            *(arg2 - 0xcc) = *(edx_7 + 0x74)
            
            if (*(arg2 - 0xb5) == 0 || *data_530364 != 2)
                if (*data_530954 == 1)
                    (*data_530604)(0x405)
                
                if (*data_530954 == 0)
                    (*data_530604)(0x404)
            
            float var_dc_8 = fconvert.s(fconvert.t(*(arg2 - 0xc0)))
            float var_e0_4 = fconvert.s(fconvert.t(*(arg2 - 0xc8)))
            float var_e4_4 = fconvert.s(fconvert.t(*(arg2 - 0xd0)))
            void var_a0
            sub_4f0e00(data_53044c, &var_a0)
            int32_t ecx_7 = __builtin_memcpy(data_52ff58, &var_a0, 0x80)
            *(arg2 - 0xd4) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xc0))) + fconvert.t(40f))
            *(arg2 - 0xd8) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xc8))) + fconvert.t(50f))
            *(arg2 - 0xdc) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xd0))) + fconvert.t(50f))
            double var_b8[0x3]
            sub_4f0d94(ecx_7, &var_b8, data_52ff58, *(arg2 - 0xdc), *(arg2 - 0xd8), *(arg2 - 0xd4))
            int32_t ecx_8 = __builtin_memcpy(data_530340, &var_b8, 0x18)
            *(arg2 - 0xd4) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xd4))) * fconvert.t(10f))
            *(arg2 - 0xd8) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xd8))) * fconvert.t(10f))
            *(arg2 - 0xdc) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xdc))) * fconvert.t(10f))
            sub_4f0d94(ecx_8, &var_b8, data_52ff58, *(arg2 - 0xdc), *(arg2 - 0xd8), *(arg2 - 0xd4))
            __builtin_memcpy(data_530340, &var_b8, 0x18)
            *(arg2 - 0xe4) =
                fconvert.s(fconvert.t(*(arg2 - 0xe0)) * fconvert.t(11f) + fconvert.t(*data_530340))
            *(arg2 - 0xec) = fconvert.s(fconvert.t(*(arg2 - 0xe8)) * fconvert.t(11f)
                + fconvert.t(*(data_530340 + 8)))
            *(arg2 - 0xf4) = fconvert.s(fconvert.t(*(arg2 - 0xf0)) * fconvert.t(11f)
                + fconvert.t(*(data_530340 + 0x10)))
            (*data_52ffd4)(5)
            int32_t eax_213 = *(arg2 - 0x30)
            
            if (eax_213 s>= 0)
                int32_t i_2 = eax_213 + 1
                int32_t var_8_1 = 0
                int32_t i
                
                do
                    int32_t ebx_1 = *(arg2 - 0x30)
                    int32_t ebx_2 = ebx_1 - var_8_1
                    
                    if (add_overflow(ebx_1, neg.d(var_8_1)))
                        sub_403010()
                        noreturn
                    
                    *(arg2 - 0xf8) = fconvert.s(sub_402b2c(
                        float.t(ebx_2) / float.t(*(arg2 - 0x30)) * data_4d29e8 * fconvert.t(2f)
                        - data_4d29f8))
                    *(arg2 - 0xfc) = fconvert.s(sub_402b3c(
                        float.t(ebx_2) / float.t(*(arg2 - 0x30)) * data_4d29e8 * fconvert.t(2f)
                        - data_4d29f8))
                    
                    if (*(arg2 + 0xc) == 0)
                        (*data_530368)(
                            fconvert.s(fconvert.t(*(arg2 - 0xf8)) * fconvert.t(*(arg2 - 0x9c))), 
                            fconvert.s(fconvert.t(*(arg2 - 0xfc)) * fconvert.t(*(arg2 - 0x9c))), 
                            *(arg2 - 0x84))
                    else
                        long double x87_r7_90 = float.t(ebx_2) / float.t(*(arg2 - 0x30))
                        long double temp11_1 = fconvert.t(0f)
                        x87_r7_90 - temp11_1
                        void* eax_221
                        eax_221.w = (x87_r7_90 < temp11_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_90, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_90 == temp11_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_221:1.b, 6) || test_bit(eax_221:1.b, 0))
                            (*data_530368)(
                                fconvert.s(fconvert.t(*(arg2 - 0xf8)) * fconvert.t(*(arg2 - 0x9c))), 
                                fconvert.s(fconvert.t(*(arg2 - 0xfc)) * fconvert.t(*(arg2 - 0x9c))), 
                                *(arg2 - 0x84))
                        else
                            long double x87_r7_92 = float.t(ebx_2) / float.t(*(arg2 - 0x30))
                            long double temp12_1 = fconvert.t(0.5f)
                            x87_r7_92 - temp12_1
                            void* eax_222
                            eax_222.w = (x87_r7_92 < temp12_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_92, temp12_1) ? 1 : 0) << 0xa
                                | (x87_r7_92 == temp12_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_222:1.b, 0)))
                                (*data_530368)(
                                    fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                        * fconvert.t(*(arg2 - 0x9c))), 
                                    fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                    * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                            else
                                long double x87_r7_94 = float.t(sub_4d0148(*(arg2 - 0x7c), 
                                    *(arg2 - 0x74), *(arg2 - 0x80) == 4)) * fconvert.t(*(arg2 - 0x84))
                                (*data_530368)(
                                    fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                        * fconvert.t(*(arg2 - 0x9c))), 
                                    fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                    * fconvert.t(*(arg2 - 0x9c))), 
                                    fconvert.s(fconvert.t(*(arg2 - 0x84)) - x87_r7_94))
                    
                    *(arg2 - 0xe0) = fconvert.s(fconvert.t(*(arg2 - 0xf8)) * fconvert.t(*(arg2 - 0x9c)))
                    *(arg2 - 0xe8) = fconvert.s(fconvert.t(*(arg2 - 0xfc)) * fconvert.t(*(arg2 - 0x9c)))
                    void* eax_250
                    
                    if (*(arg2 + 0xc) != 0)
                        long double x87_r7_108 = fconvert.t(*(arg2 - 0xf8))
                        long double temp15_1 = fconvert.t(0f)
                        x87_r7_108 - temp15_1
                        eax_250.w = (x87_r7_108 < temp15_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_108, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r7_108 == temp15_1 ? 1 : 0) << 0xe
                    
                    if (*(arg2 + 0xc) == 0 || test_bit(eax_250:1.b, 6) || test_bit(eax_250:1.b, 0))
                        *(arg2 - 0xf0) = *(arg2 - 0x84)
                    else
                        *(arg2 - 0xf0) = *(arg2 - 0x84)
                    
                    *(arg2 - 0xe4) = fconvert.s(fconvert.t(*(arg2 - 0xe0)) * fconvert.t(11f)
                        + fconvert.t(*data_530340))
                    *(arg2 - 0xec) = fconvert.s(fconvert.t(*(arg2 - 0xe8)) * fconvert.t(11f)
                        + fconvert.t(*(data_530340 + 8)))
                    *(arg2 - 0xf4) = fconvert.s(fconvert.t(*(arg2 - 0xf0)) * fconvert.t(11f)
                        + fconvert.t(*(data_530340 + 0x10)))
                    (*data_530368)(*(arg2 - 0xe4), *(arg2 - 0xec), *(arg2 - 0xf4))
                    var_8_1 += 1
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            return (*data_530a08)()
        
        for (int32_t i_1 = 1; i_1 != 4; i_1 += 1)
            result = arg2
            
            if (*(result + 8) == 0 || i_1 == 2)
            label_4d1fad:
                void* eax_271
                eax_271.b = *(arg2 - 0x80)
                
                if (eax_271.b != 6)
                    *(arg2 - 0xfe) = 5
                else
                    *(arg2 - 0xfe) = 3
                
                if (i_1 == 1)
                    if (eax_271.b != 6)
                        (*data_53036c)(0xde1, *data_530a30)
                    else
                        (*data_53036c)(0xde1, *data_530818)
                    
                    (*data_52ffd4)(6)
                    (*data_5307f8)(
                        fconvert.s(fconvert.t(0.5f) / float.t(*(arg2 - 0xfe)) + fconvert.t(var_c)), 
                        fconvert.s(fconvert.t(0.5f) + fconvert.t(var_10)))
                    (*data_530368)(0, 0, 0)
                else if (i_1 == 2)
                    if (eax_271.b != 6)
                        (*data_53036c)(0xde1, *data_530484)
                    else
                        (*data_53036c)(0xde1, *data_530210)
                    
                    (*data_52ffd4)(8)
                else if (i_1 == 3)
                    if (eax_271.b != 6)
                        (*data_53036c)(0xde1, *data_530a30)
                    else
                        (*data_53036c)(0xde1, *data_530818)
                    
                    (*data_52ffd4)(6)
                    (*data_5307f8)(
                        fconvert.s(fconvert.t(0.5f) / float.t(*(arg2 - 0xfe)) + fconvert.t(var_c)), 
                        fconvert.s(fconvert.t(0.5f) + fconvert.t(var_10)))
                    (*data_530368)(0, 0, *(arg2 - 0x84))
                
                int32_t eax_314 = *(arg2 - 0x30)
                
                if (eax_314 s>= 0)
                    int32_t j_1 = eax_314 + 1
                    int32_t var_8_2 = 0
                    int32_t j
                    
                    do
                        int32_t ebx_3 = var_8_2
                        
                        if (*(arg2 - 0x30) == var_8_2)
                            ebx_3 = 0
                        
                        if (i_1 == 1)
                            int32_t eax_319 = *(arg2 - 0x30)
                            
                            if (add_overflow(eax_319, neg.d(ebx_3)))
                                sub_403010()
                                noreturn
                            
                            ebx_3 = eax_319 - ebx_3
                        
                        if (i_1 != 2)
                        label_4d21cc:
                            char temp10_1
                            
                            if (*(arg2 + 8) == 0 && i_1 != 2)
                                void* eax_324
                                eax_324.b = *(arg2 - 0x85)
                                temp10_1 = eax_324.b
                                eax_324.b -= 2
                            
                            if (*(arg2 + 8) == 0 && i_1 != 2 && temp10_1 u< 2)
                                goto label_4d22c2
                            
                            void* eax_326
                            
                            if (i_1 == 1 && *(arg2 - 0x85) == 3)
                                long double x87_r7_133 = float.t(ebx_3) / float.t(*(arg2 - 0x30))
                                long double x87_r6_30 = data_4d2a0c
                                x87_r6_30 - x87_r7_133
                                eax_326.w = (x87_r6_30 < x87_r7_133 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_30, x87_r7_133) ? 1 : 0) << 0xa
                                    | (x87_r6_30 == x87_r7_133 ? 1 : 0) << 0xe
                            
                            if (i_1 == 1 && *(arg2 - 0x85) == 3 && not(test_bit(eax_326:1.b, 6))
                                    && not(test_bit(eax_326:1.b, 0)))
                                goto label_4d22c2
                            
                            long double x87_r7_135 = float.t(ebx_3) / float.t(*(arg2 - 0x30))
                            long double x87_r6_32 = data_4d2a18
                            x87_r6_32 - x87_r7_135
                            void* eax_327
                            eax_327.w = (x87_r6_32 < x87_r7_135 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_32, x87_r7_135) ? 1 : 0) << 0xa
                                | (x87_r6_32 == x87_r7_135 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_327:1.b, 0))
                                goto label_4d22c2
                            
                            if (i_1 == 3)
                                void* eax_328
                                eax_328.b = *(arg2 - 0x85)
                                char temp14_1 = eax_328.b
                                eax_328.b -= 2
                                
                                if (temp14_1 u< 2)
                                    long double x87_r7_137 = float.t(ebx_3) / float.t(*(arg2 - 0x30))
                                    long double x87_r6_34 = data_4d2a0c
                                    x87_r6_34 - x87_r7_137
                                    void* eax_329
                                    eax_329.w = (x87_r6_34 < x87_r7_137 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_34, x87_r7_137) ? 1 : 0) << 0xa
                                        | (x87_r6_34 == x87_r7_137 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_329:1.b, 6)) && not(test_bit(eax_329:1.b, 0)))
                                        goto label_4d22c2
                                    
                                    long double x87_r7_139 = float.t(ebx_3) / float.t(*(arg2 - 0x30))
                                    long double x87_r6_36 = data_4d2a18
                                    x87_r6_36 - x87_r7_139
                                    void* eax_330
                                    eax_330.w = (x87_r6_36 < x87_r7_139 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_36, x87_r7_139) ? 1 : 0) << 0xa
                                        | (x87_r6_36 == x87_r7_139 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_330:1.b, 0))
                                        goto label_4d22c2
                        else
                            long double x87_r7_129 = float.t(ebx_3) / float.t(*(arg2 - 0x30))
                            long double x87_r6_26 = data_4d2a0c
                            x87_r6_26 - x87_r7_129
                            void* eax_321
                            eax_321.w = (x87_r6_26 < x87_r7_129 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_26, x87_r7_129) ? 1 : 0) << 0xa
                                | (x87_r6_26 == x87_r7_129 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_321:1.b, 6) || test_bit(eax_321:1.b, 0))
                                long double x87_r7_131 = float.t(ebx_3) / float.t(*(arg2 - 0x30))
                                long double x87_r6_28 = data_4d2a18
                                x87_r6_28 - x87_r7_131
                                void* eax_322
                                eax_322.w = (x87_r6_28 < x87_r7_131 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_28, x87_r7_131) ? 1 : 0) << 0xa
                                    | (x87_r6_28 == x87_r7_131 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_322:1.b, 0))
                                    goto label_4d22c2
                                
                                goto label_4d21cc
                            
                        label_4d22c2:
                            *(arg2 - 0xf8) = fconvert.s(sub_402b2c(
                                float.t(ebx_3) / float.t(*(arg2 - 0x30)) * data_4d29e8 * fconvert.t(2f)
                                - data_4d29f8))
                            *(arg2 - 0xfc) = fconvert.s(sub_402b3c(
                                float.t(ebx_3) / float.t(*(arg2 - 0x30)) * data_4d29e8 * fconvert.t(2f)
                                - data_4d29f8))
                            
                            if (i_1 == 1)
                                if (*data_530364 == 3)
                                    *(arg2 - 0xf8) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xf8))))
                                
                                (*data_5307f8)(
                                    fconvert.s((fneg(fconvert.t(*(arg2 - 0xf8))) + fconvert.t(1f))
                                        / fconvert.t(2f) / float.t(*(arg2 - 0xfe)) + fconvert.t(var_c)), 
                                    fconvert.s(
                                    (fconvert.t(*(arg2 - 0xfc)) + fconvert.t(1f)) / fconvert.t(2f)
                                    + fconvert.t(var_10)))
                                
                                if (*data_530364 != 3)
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), 0)
                                else
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                            else if (i_1 != 2)
                                if (i_1 == 3)
                                    if (*data_530364 == 3)
                                        *(arg2 - 0xf8) = fconvert.s(fneg(fconvert.t(*(arg2 - 0xf8))))
                                    
                                    (*data_5307f8)(
                                        fconvert.s((fconvert.t(*(arg2 - 0xf8)) + fconvert.t(1f))
                                            / fconvert.t(2f) / float.t(*(arg2 - 0xfe))
                                            + fconvert.t(var_c)), 
                                        fconvert.s(
                                        (fconvert.t(*(arg2 - 0xfc)) + fconvert.t(1f)) / fconvert.t(2f)
                                        + fconvert.t(var_10)))
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                            else if (*(arg2 + 0xc) == 0)
                                float var_14_5 = fconvert.s((
                                    float.t(var_8_2) / float.t(*(arg2 - 0x30)) * data_4d2a28
                                    + data_4d2a34) / float.t(*(arg2 - 0xfe)) + fconvert.t(var_c))
                                (*data_5307f8)(var_14_5, 0x3f800000)
                                (*data_530368)(
                                    fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                        * fconvert.t(*(arg2 - 0x9c))), 
                                    fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                    * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                                (*data_5307f8)(var_14_5, 0)
                                (*data_530368)(
                                    fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                        * fconvert.t(*(arg2 - 0x9c))), 
                                    fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                    * fconvert.t(*(arg2 - 0x9c))), 0)
                            else
                                float var_14_4 = fconvert.s((
                                    float.t(var_8_2) / float.t(*(arg2 - 0x30)) * data_4d2a28
                                    + data_4d2a34) / float.t(*(arg2 - 0xfe)) * data_4d2a40
                                    + fconvert.t(var_c))
                                
                                if (*data_530364 == 1)
                                    sub_4d0148(*(arg2 - 0x7c), *(arg2 - 0x74), *(arg2 - 0x80) == 4)
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                                    float var_dc_32 = fconvert.s(fconvert.t(0f) - float.t(sub_4d0148(
                                        *(arg2 - 0x7c), *(arg2 - 0x74), *(arg2 - 0x80) == 4))
                                        * fconvert.t(*(arg2 - 0x84)))
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), var_dc_32)
                                else if (*data_530364 == 0)
                                    int32_t eax_389 =
                                        sub_4d0148(*(arg2 - 0x7c), *(arg2 - 0x74), *(arg2 - 0x80) == 4)
                                    
                                    if (add_overflow(eax_389, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    (*data_5307f8)(var_14_4, fconvert.s(float.t(eax_389 + 1)))
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                                    (*data_5307f8)(var_14_4, 0)
                                    float var_dc_36 = fconvert.s(fconvert.t(0f) - float.t(sub_4d0148(
                                        *(arg2 - 0x7c), *(arg2 - 0x74), *(arg2 - 0x80) == 4))
                                        * fconvert.t(*(arg2 - 0x84)))
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), var_dc_36)
                                else if (*data_530364 == 3)
                                    (*data_5307f8)(var_14_4, 0x40400000)
                                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(arg2 - 0x8c))
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), *(arg2 - 0x84))
                                    (*data_5307f8)(var_14_4, 0)
                                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                                        fconvert.s(data_4d2a4c * fconvert.t(*(arg2 - 0x8c))))
                                    (*data_530368)(
                                        fconvert.s(fconvert.t(*(arg2 - 0xf8))
                                            * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0xfc))
                                        * fconvert.t(*(arg2 - 0x9c))), 
                                        fconvert.s(fconvert.t(*(arg2 - 0x84))
                                            - fconvert.t(*(arg2 - 0x84)) * fconvert.t(3f)))
                        
                        var_8_2 += 1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                result = (*data_530a08)()
            else
                if (i_1 == 1)
                    result = arg2
                
                if (i_1 == 1 && *(result - 0x85) == 3)
                    goto label_4d1fad
                
                if (i_1 == 3)
                    result.b = *(arg2 - 0x85)
                    char temp6_1 = result.b
                    result.b -= 2
                    
                    if (temp6_1 u< 2)
                        goto label_4d1fad
    
    return result
}
