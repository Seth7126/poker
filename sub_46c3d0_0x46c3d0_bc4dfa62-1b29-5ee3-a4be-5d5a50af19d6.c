// ============================================================
// 函数名称: sub_46c3d0
// 虚拟地址: 0x46c3d0
// WARP GUID: bc4dfa62-1b29-5ee3-a4be-5d5a50af19d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_46a708, sub_403010
// [被调用的父级函数]: sub_46c038, sub_488509, sub_484e24
// ============================================================

void* __fastcallsub_46c3d0(int32_t arg1, int32_t arg2, void* arg3 @ eax, float arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_10 = arg1
    int32_t var_10 = arg1
    char var_61 = 0
    void* result = arg5 * arg6
    bool o = unimplemented  {imul dword [ebp+0x10]}
    
    if (o)
        sub_403010()
        noreturn
    
    if (result s> 0)
        int32_t var_3c_1 = 0xc
        
        if (*(arg3 + 0xdc0) == 3)
            var_3c_1 = 0xa
        else if (*(arg3 + 0xdc0) == 2)
            var_3c_1 = 8
        else if (*(arg3 + 0xdc0) == 1)
            var_3c_1 = 7
        
        float var_1c_1 = fconvert.s(float.t(arg6) / fconvert.t(497f))
        char var_62_1
        float var_20_1
        
        if (arg2 == 1)
            if (neg.d(arg5) == 0x80000000)
                sub_403010()
                noreturn
            
            var_20_1 = fconvert.s(float.t(neg.d(arg5)) / fconvert.t(497f))
            var_62_1 = 1
            int32_t temp8_1 = var_3c_1
            var_3c_1 -= 3
            
            if (add_overflow(temp8_1, 0xfffffffd))
                sub_403010()
                noreturn
        else if (arg5 s> 0x168)
            (*data_5301d4)(0, fconvert.s(float.t(arg7) / fconvert.t(497f)), 0)
            var_20_1 = -1.21126759f
            var_62_1 = 0
        else
            (*data_5301d4)(0, 0, 0)
            
            if (add_overflow(arg5, 0xa))
                sub_403010()
                noreturn
            
            if (neg.d(arg5 + 0xa) == 0x80000000)
                sub_403010()
                noreturn
            
            var_20_1 = fconvert.s(float.t(neg.d(arg5 + 0xa)) / fconvert.t(497f))
            var_62_1 = 1
            int32_t temp10_1 = var_3c_1
            var_3c_1 -= 3
            
            if (add_overflow(temp10_1, 0xfffffffd))
                sub_403010()
                noreturn
        
        void* const eax_13
        
        if (*(arg3 + 0x8b8) == 0 || var_62_1 != 0 || arg6 s< 0x32 || arg5 s< 0x32)
            eax_13 = nullptr
        else
            eax_13.b = 1
        
        var_61 = eax_13.b
        
        for (int32_t i = 0; i != 4; i += 1)
            char var_63
            
            if (var_61 != 0)
                var_63 = 1
                (*data_530034)(0xde1)
                (*data_53036c)(0xde1, *(arg3 + 0x8bc))
            
            (*data_52ffd4)(8)
            
            if (var_3c_1 s>= 0)
                int32_t j_1 = var_3c_1 + 1
                int32_t esi_1 = 0
                int32_t j
                
                do
                    float var_34_1 = fconvert.s(float.t(esi_1) / float.t(var_3c_1))
                    
                    if (var_61 != 0)
                        if (esi_1 == 1)
                            var_34_1 = 0.0526315793f
                        else if (esi_1 == 2)
                            if (var_63 != 0)
                                (*data_530a08)()
                                (*data_53006c)(0xde1)
                                (*data_52ffd4)(8)
                                var_63 = 0
                            
                            var_34_1 = 0.0526315793f
                    
                    float var_38_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_34_1))
                    float var_60_1 = fconvert.s(sub_402b3c(data_46cde8 * fconvert.t(var_34_1)))
                    float var_48_1
                    float var_44_1
                    float var_40_1
                    float var_30_1
                    float var_2c
                    float var_28_1
                    float var_24
                    int16_t eax_30
                    
                    if (var_62_1 == 0)
                        if (i == 1)
                            var_24 = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(var_60_1) - data_46cdf4) * data_46ce00)
                            var_2c = fconvert.s(fconvert.t(0f)
                                - (fconvert.t(var_60_1) - data_46cdf4) * data_46ce00)
                        else if (i == 0)
                            var_24 = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(var_60_1) - data_46cdf4 - data_46ce0c) * data_46ce00)
                            var_2c = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(var_60_1) - data_46cdf4) * data_46ce00)
                        else if (i == 2)
                            var_24 = fconvert.s(fconvert.t(0f)
                                - (fconvert.t(var_60_1) - data_46cdf4) * data_46ce00)
                            var_2c = fconvert.s(fconvert.t(0f)
                                - (fconvert.t(var_60_1) - data_46cdf4 + data_46ce0c) * data_46ce00)
                        else if (i == 3)
                            var_24 = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(var_60_1) - data_46cdf4 - data_46ce48) * data_46ce00)
                            var_2c = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(var_60_1) - data_46cdf4 - data_46ce0c) * data_46ce00)
                        
                        var_28_1 = fconvert.s(fconvert.t(0f) * fconvert.t(var_38_1)
                            + fconvert.t(var_20_1) * fconvert.t(var_34_1))
                        var_30_1 = fconvert.s(fconvert.t(0f) * fconvert.t(var_38_1)
                            + fconvert.t(var_20_1) * fconvert.t(var_34_1))
                        long double x87_r7_117 = fconvert.t(var_34_1) * fconvert.t(600f)
                        long double temp11_1 = fconvert.t(31f)
                        x87_r7_117 - temp11_1
                        
                        if (not(test_bit(
                                ((x87_r7_117 < temp11_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_117, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_117 == temp11_1 ? 1 : 0) << 0xe):1.b, 
                                0)))
                            long double x87_r7_127 = fconvert.t(var_34_1) * fconvert.t(600f)
                            long double temp13_1 = fconvert.t(500f)
                            x87_r7_127 - temp13_1
                            eax_30 = (x87_r7_127 < temp13_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_127, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_127 == temp13_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_30:1.b, 6) || test_bit(eax_30:1.b, 0))
                                var_48_1 = var_34_1
                                var_44_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_48_1))
                                var_40_1 = 0f
                            else
                                var_40_1 = fconvert.s((fconvert.t(var_34_1) * fconvert.t(600f)
                                    - fconvert.t(500f)) / fconvert.t(100f) * data_46ce3c)
                                var_48_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_40_1))
                                var_44_1 = 0f
                        else
                            var_40_1 = fconvert.s((fconvert.t(1f)
                                - fconvert.t(var_34_1) * fconvert.t(600f) / fconvert.t(31f)) * data_46ce30
                                + data_46ce18)
                            var_44_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_40_1))
                            var_48_1 = 0f
                    else
                        if (i == 1)
                            var_24 = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(0.800000012f) - data_46cdf4) * data_46ce00)
                            var_2c = fconvert.s((fconvert.t(0.800000012f) - data_46cdf4) * data_46ce00
                                + fconvert.t(0f))
                        else if (i == 0)
                            var_24 = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(0.800000012f) - data_46cdf4 - data_46ce0c) * data_46ce00)
                            var_2c = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(0.800000012f) - data_46cdf4) * data_46ce00)
                        else if (i == 2)
                            var_24 = fconvert.s((fconvert.t(0.800000012f) - data_46cdf4) * data_46ce00
                                + fconvert.t(0f))
                            var_2c = fconvert.s(
                                (fconvert.t(0.800000012f) - data_46cdf4 - data_46ce0c) * data_46ce00
                                + fconvert.t(0f))
                        else if (i == 3)
                            var_24 = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(0.800000012f) - data_46cdf4 - data_46ce18) * data_46ce00)
                            var_2c = fconvert.s(fconvert.t(var_1c_1)
                                - (fconvert.t(0.800000012f) - data_46cdf4 - data_46ce0c) * data_46ce00)
                        
                        var_28_1 = fconvert.s(fconvert.t(0f) * fconvert.t(var_38_1)
                            + fconvert.t(var_20_1) * fconvert.t(var_34_1))
                        var_30_1 = fconvert.s(fconvert.t(0f) * fconvert.t(var_38_1)
                            + fconvert.t(var_20_1) * fconvert.t(var_34_1))
                        long double x87_r7_58 = data_46ce24
                        long double temp12_1 = fconvert.t(var_34_1)
                        x87_r7_58 - temp12_1
                        eax_30 = (x87_r7_58 < temp12_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_58, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_58 == temp12_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_30:1.b, 6) || test_bit(eax_30:1.b, 0))
                            long double x87_r7_66 = data_46cdf4
                            long double temp14_1 = fconvert.t(var_34_1)
                            x87_r7_66 - temp14_1
                            
                            if (not(test_bit(
                                    ((x87_r7_66 < temp14_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_66, temp14_1) ? 1 : 0) << 0xa
                                        | (x87_r7_66 == temp14_1 ? 1 : 0) << 0xe):1.b, 
                                    0)))
                                var_48_1 = var_34_1
                                var_44_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_48_1))
                                var_40_1 = 0f
                            else
                                var_40_1 =
                                    fconvert.s((fconvert.t(var_34_1) - data_46cdf4) / data_46ce3c)
                                var_48_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_40_1))
                                var_44_1 = 0f
                        else
                            var_40_1 = fconvert.s(
                                (data_46ce24 - fconvert.t(var_34_1)) / data_46ce24 * data_46ce30
                                + data_46ce18)
                            var_44_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_40_1))
                            var_48_1 = 0f
                    float var_58_1
                    float var_54_1
                    float var_50_1
                    float var_4c_1
                    
                    if (i != 3)
                        var_4c_1 = fconvert.s(fconvert.t(*(arg3 + 0x1088)) * fconvert.t(var_44_1)
                            + fconvert.t(*(arg3 + 0x1098)) * fconvert.t(var_48_1)
                            + fconvert.t(*(arg3 + 0x10a8)) * fconvert.t(var_40_1))
                        var_50_1 = fconvert.s(fconvert.t(*(arg3 + 0x108c)) * fconvert.t(var_44_1)
                            + fconvert.t(*(arg3 + 0x109c)) * fconvert.t(var_48_1)
                            + fconvert.t(*(arg3 + 0x10ac)) * fconvert.t(var_40_1))
                        var_54_1 = fconvert.s(fconvert.t(*(arg3 + 0x1090)) * fconvert.t(var_44_1)
                            + fconvert.t(*(arg3 + 0x10a0)) * fconvert.t(var_48_1)
                            + fconvert.t(*(arg3 + 0x10b0)) * fconvert.t(var_40_1))
                        var_58_1 = fconvert.s(fconvert.t(*(arg3 + 0x1094)) * fconvert.t(var_44_1)
                            + fconvert.t(*(arg3 + 0x10a4)) * fconvert.t(var_48_1)
                            + fconvert.t(*(arg3 + 0x10b4)) * fconvert.t(var_40_1))
                    else
                        var_4c_1 = *(arg3 + 0x1078)
                        var_50_1 = *(arg3 + 0x107c)
                        var_54_1 = *(arg3 + 0x1080)
                        var_58_1 = *(arg3 + 0x1084)
                    
                    if (var_61 != 0 && esi_1 s<= 1)
                        (*data_5307f8)(0, 
                            fconvert.s(fconvert.t(1f) - fconvert.t(var_34_1) * fconvert.t(19f)))
                    
                    if (i == 1)
                        (*data_530518)(fconvert.s(data_46ce68 * fconvert.t(var_4c_1)), 
                            fconvert.s(data_46ce68 * fconvert.t(var_50_1)), 
                            fconvert.s(data_46ce68 * fconvert.t(var_54_1)), 
                            fconvert.s(fconvert.t(var_58_1) * fconvert.t(arg4)))
                        (*data_530368)(var_24, var_28_1, 0)
                        (*data_530518)(fconvert.s(data_46ce74 * fconvert.t(var_4c_1)), 
                            fconvert.s(data_46ce74 * fconvert.t(var_50_1)), 
                            fconvert.s(data_46ce74 * fconvert.t(var_54_1)), 
                            fconvert.s(fconvert.t(var_58_1) * fconvert.t(arg4)))
                        (*data_530368)(var_2c, var_30_1, 0)
                    else if (i == 0)
                        (*data_530518)(fconvert.s(fconvert.t(var_4c_1) / fconvert.t(2f)), 
                            fconvert.s(fconvert.t(var_50_1) / fconvert.t(2f)), 
                            fconvert.s(fconvert.t(var_54_1) / fconvert.t(2f)), 
                            fconvert.s(data_46ce80 * fconvert.t(arg4)))
                        (*data_530368)(var_24, var_28_1, 0)
                        (*data_530518)(var_4c_1, var_50_1, var_54_1, 
                            fconvert.s(fconvert.t(var_58_1) * fconvert.t(arg4)))
                        (*data_530368)(var_2c, var_30_1, 0)
                    else if (i == 2)
                        (*data_530518)(fconvert.s(data_46ce74 * fconvert.t(var_4c_1)), 
                            fconvert.s(data_46ce74 * fconvert.t(var_50_1)), 
                            fconvert.s(data_46ce74 * fconvert.t(var_54_1)), 
                            fconvert.s(data_46ce74 * fconvert.t(var_58_1) * fconvert.t(arg4)))
                        (*data_530368)(var_24, var_28_1, 0)
                        (*data_530518)(
                            fconvert.s(data_46ce3c * fconvert.t(var_44_1) + data_46ce24
                                + fconvert.t(var_4c_1) * fconvert.t(2f)), 
                            fconvert.s(data_46ce3c * fconvert.t(var_44_1) + data_46ce24
                            + fconvert.t(var_50_1) * fconvert.t(2f)), 
                            fconvert.s(data_46ce3c * fconvert.t(var_44_1) + data_46ce24
                                + fconvert.t(var_54_1) * fconvert.t(2f)), 
                            fconvert.s(data_46ce90 * fconvert.t(arg4)))
                        (*data_530368)(var_2c, var_30_1, 0)
                    else if (i == 3)
                        (*data_530518)(0, 0, 0, 0)
                        (*data_530368)(var_24, var_28_1, 0)
                        (*data_530518)(fconvert.s(fconvert.t(var_4c_1) / fconvert.t(2f)), 
                            fconvert.s(fconvert.t(var_50_1) / fconvert.t(2f)), 
                            fconvert.s(fconvert.t(var_54_1) / fconvert.t(2f)), 
                            fconvert.s(data_46ce80 * fconvert.t(arg4) * data_46ce30))
                        (*data_530368)(var_2c, var_30_1, 0)
                    
                    esi_1 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result = (*data_530a08)()
    
    if (var_61 != 0)
        result = arg3
        
        if (*(result + 0x8b8) != 0)
            int32_t eax_75 = arg6 s>> 1
            bool c_5 = unimplemented  {sar eax, 0x1}
            
            if (arg6 s>> 1 s< 0)
                eax_75 = adc.d(eax_75, 0, c_5)
            
            if (add_overflow(eax_75, 0xffffffe0))
                sub_403010()
                noreturn
            
            if (not(add_overflow(eax_75 - 0x20, 0xfffffffd)))
                return sub_46a708(0x70, *(arg3 + 0x8b8), arg3, 3, eax_75 - 0x23, arg4, 0x56)
            
            sub_403010()
            noreturn
    
    return result
}
