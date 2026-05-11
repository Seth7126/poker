// ============================================================
// 函数名称: sub_48ad24
// 虚拟地址: 0x48ad24
// WARP GUID: c343829e-1afa-5e94-bfd4-8ff60a07027e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47c0f0, sub_403010
// [被调用的父级函数]: sub_48b3d8
// ============================================================

float* __fastcallsub_48ad24(int32_t arg1, int32_t arg2, float arg3, float arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: float var_c = 0.400000006f
    float var_c = 0.400000006f
    (*data_530810)()
    (*data_5306a4)(0x851eb852, 0xbfe451eb, 0xb4395810, 0x3fde76c8, 0, 0xbff80000)
    
    if (*(arg6 + 0x14) == 0)
        sub_47c0f0(*(arg6 - 4))
    
    int32_t var_64 = 0
    int32_t var_68 = 0
    
    if (neg.d(arg2) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t var_50 = neg.d(arg2)
    int32_t eax
    int32_t var_54 = eax
    (*data_5306a4)(0x851eb852)
    (*data_5306a4)(0, 0, 0, 0, 0x47ae147b, 0xbf747ae1)
    
    if (*(*(arg6 - 4) + 0x9cc) != 0)
        (*data_5306a4)(0, 0, 0, 0, 0, 0)
    
    float var_10 = 0f
    float var_14 = 0f
    float var_20 = 0f
    float var_24 = 0f
    float var_18 = fconvert.s(float.t(arg1) / fconvert.t(639f))
    float var_1c = fconvert.s(float.t(arg1) / fconvert.t(639f))
    
    if (neg.d(arg5) == 0x80000000)
        sub_403010()
        noreturn
    
    float var_28 = fconvert.s(float.t(neg.d(arg5)) / fconvert.t(639f))
    
    if (neg.d(arg5) == 0x80000000)
        sub_403010()
        noreturn
    
    float var_2c = fconvert.s(float.t(neg.d(arg5)) / fconvert.t(639f))
    long double x87_r7_8 = fconvert.t(arg4)
    long double temp4 = fconvert.t(0f)
    x87_r7_8 - temp4
    int32_t eax_19
    eax_19.w = (x87_r7_8 < temp4 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_8, temp4) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp4 ? 1 : 0) << 0xe
    
    if (test_bit(eax_19:1.b, 6))
        long double x87_r7_9 = fconvert.t(arg3)
        long double temp6_1 = fconvert.t(0f)
        x87_r7_9 - temp6_1
        eax_19.w = (x87_r7_9 < temp6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, temp6_1) ? 1 : 0) << 0xa | (x87_r7_9 == temp6_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_19:1.b, 6)))
            var_24 = fconvert.s(fconvert.t(0f) - data_48b384)
            var_28 = fconvert.s(data_48b384 + fconvert.t(var_28))
    
    long double x87_r7_14 = fconvert.t(arg4)
    long double temp5 = fconvert.t(0f)
    x87_r7_14 - temp5
    eax_19.w = (x87_r7_14 < temp5 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_14, temp5) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp5 ? 1 : 0) << 0xe
    
    if (test_bit(eax_19:1.b, 6))
        long double x87_r7_15 = fconvert.t(arg3)
        long double temp7_1 = fconvert.t(0f)
        x87_r7_15 - temp7_1
        eax_19.w = (x87_r7_15 < temp7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_15, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp7_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_19:1.b, 6))
            var_20 = fconvert.s(fconvert.t(0f) - data_48b384)
            var_2c = fconvert.s(data_48b384 + fconvert.t(var_2c))
    
    int32_t i_1 = 4
    float var_3c
    float* result = &var_3c
    float var_4c
    float* edx = &var_4c
    int32_t i
    
    do
        *result = 0f
        *edx = 0f
        edx = &edx[1]
        result = &result[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    long double x87_r7_20 = fconvert.t(arg4)
    long double temp9 = fconvert.t(-1f)
    x87_r7_20 - temp9
    result.w = (x87_r7_20 < temp9 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_20, temp9) ? 1 : 0) << 0xa
        | (x87_r7_20 == temp9 ? 1 : 0) << 0xe
    
    if (test_bit(result:1.b, 6))
        long double x87_r7_21 = fconvert.t(arg3)
        long double temp11_1 = fconvert.t(-1f)
        x87_r7_21 - temp11_1
        result.w = (x87_r7_21 < temp11_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_21, temp11_1) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp11_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(result:1.b, 6)))
            return result
        
        arg4 = fconvert.s(fconvert.t(0.00999999978f) / fconvert.t(4f) + fconvert.t(0.75f))
        arg3 = fconvert.s(fconvert.t(0.00999999978f) / fconvert.t(4f) + fconvert.t(0f))
        float var_c_1 = fconvert.s(fconvert.t(0.980000019f) / fconvert.t(4f))
        float var_1c_1 = fconvert.s(fconvert.t(var_1c) - data_48b39c)
        float var_10_1 = fconvert.s(data_48b39c + fconvert.t(var_10))
        (*data_52ffd4)(8)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
        (*data_5307f8)(arg4, fconvert.s(fconvert.t(arg3) + fconvert.t(var_c_1)))
        (*data_530368)(var_10_1, var_20, 0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
            fconvert.s(data_48b3a8 * fconvert.t(*(arg6 + 8))))
        (*data_5307f8)(arg4, arg3)
        (*data_530368)(var_14, var_2c, 0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
        (*data_5307f8)(fconvert.s(fconvert.t(var_c_1) / fconvert.t(2f) + fconvert.t(arg4)), 
            fconvert.s(fconvert.t(arg3) + fconvert.t(var_c_1)))
        (*data_530368)(fconvert.s((fconvert.t(var_1c_1) + fconvert.t(var_10_1)) / fconvert.t(2f)), 
            var_20, 0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
            fconvert.s(data_48b3b8 * fconvert.t(*(arg6 + 8))))
        (*data_5307f8)(fconvert.s(fconvert.t(var_c_1) / fconvert.t(2f) + fconvert.t(arg4)), arg3)
        (*data_530368)(fconvert.s((fconvert.t(var_18) + fconvert.t(var_14)) / fconvert.t(2f)), var_2c, 
            0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
        (*data_5307f8)(fconvert.s(fconvert.t(arg4) + fconvert.t(var_c_1)), 
            fconvert.s(fconvert.t(arg3) + fconvert.t(var_c_1)))
        (*data_530368)(var_1c_1, var_24, 0)
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
            fconvert.s(data_48b3a8 * fconvert.t(*(arg6 + 8))))
        (*data_5307f8)(fconvert.s(fconvert.t(arg4) + fconvert.t(var_c_1)), arg3)
        (*data_530368)(var_18, var_28, 0)
        return (*data_530a08)()
    
    long double x87_r7_62 = fconvert.t(arg4)
    long double temp10_1 = fconvert.t(0.5f)
    x87_r7_62 - temp10_1
    result.w = (x87_r7_62 < temp10_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_62, temp10_1) ? 1 : 0) << 0xa | (x87_r7_62 == temp10_1 ? 1 : 0) << 0xe
    float var_38
    
    if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
        long double x87_r7_63 = fconvert.t(arg3)
        long double temp13_1 = fconvert.t(0.5f)
        x87_r7_63 - temp13_1
        result.w = (x87_r7_63 < temp13_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_63, temp13_1) ? 1 : 0) << 0xa
            | (x87_r7_63 == temp13_1 ? 1 : 0) << 0xe
        
        if (test_bit(result:1.b, 0))
            var_38 = 0.00469483575f
    
    long double x87_r7_64 = fconvert.t(arg4)
    long double temp12_1 = fconvert.t(0.5f)
    x87_r7_64 - temp12_1
    result.w = (x87_r7_64 < temp12_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_64, temp12_1) ? 1 : 0) << 0xa | (x87_r7_64 == temp12_1 ? 1 : 0) << 0xe
    float var_48
    
    if (test_bit(result:1.b, 0))
        long double x87_r7_65 = fconvert.t(arg3)
        long double temp15_1 = fconvert.t(0.5f)
        x87_r7_65 - temp15_1
        result.w = (x87_r7_65 < temp15_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_65, temp15_1) ? 1 : 0) << 0xa
            | (x87_r7_65 == temp15_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
            var_48 = 0.00469483575f
    
    long double x87_r7_66 = fconvert.t(arg4)
    long double temp14_1 = fconvert.t(0.5f)
    x87_r7_66 - temp14_1
    result.w = (x87_r7_66 < temp14_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_66, temp14_1) ? 1 : 0) << 0xa | (x87_r7_66 == temp14_1 ? 1 : 0) << 0xe
    
    if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
        long double x87_r7_67 = fconvert.t(arg3)
        long double temp17_1 = fconvert.t(0.5f)
        x87_r7_67 - temp17_1
        result.w = (x87_r7_67 < temp17_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_67, temp17_1) ? 1 : 0) << 0xa
            | (x87_r7_67 == temp17_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
            var_3c = 0.00469483575f
    
    long double x87_r7_68 = fconvert.t(arg4)
    long double temp16_1 = fconvert.t(0.5f)
    x87_r7_68 - temp16_1
    result.w = (x87_r7_68 < temp16_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_68, temp16_1) ? 1 : 0) << 0xa | (x87_r7_68 == temp16_1 ? 1 : 0) << 0xe
    
    if (test_bit(result:1.b, 0))
        long double x87_r7_69 = fconvert.t(arg3)
        long double temp18_1 = fconvert.t(0.5f)
        x87_r7_69 - temp18_1
        result.w = (x87_r7_69 < temp18_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_69, temp18_1) ? 1 : 0) << 0xa
            | (x87_r7_69 == temp18_1 ? 1 : 0) << 0xe
        
        if (test_bit(result:1.b, 0))
            var_4c = 0.00469483575f
    
    arg4 = fconvert.s(fconvert.t(arg4) / fconvert.t(4f) + fconvert.t(0.75f))
    arg3 = fconvert.s(fconvert.t(arg3) * fconvert.t(2f) / fconvert.t(5f) + data_48b3cc)
    float var_c_2 = fconvert.s(fconvert.t(var_c) / fconvert.t(5f))
    (*data_52ffd4)(7)
    (*data_5307f8)(arg4, fconvert.s(fconvert.t(var_c_2) * fconvert.t(2f) + fconvert.t(arg3)))
    (*data_530368)(fconvert.s(fconvert.t(var_10) + fconvert.t(var_3c)), 
        fconvert.s(fconvert.t(var_20) - fconvert.t(var_4c)), 0)
    (*data_5307f8)(arg4, arg3)
    (*data_530368)(fconvert.s(fconvert.t(var_14) + fconvert.t(var_38)), 
        fconvert.s(fconvert.t(var_2c) + fconvert.t(var_4c)), 0)
    (*data_5307f8)(fconvert.s(fconvert.t(arg4) + fconvert.t(var_c_2)), arg3)
    (*data_530368)(fconvert.s(fconvert.t(var_18) - fconvert.t(var_38)), 
        fconvert.s(fconvert.t(var_28) + fconvert.t(var_48)), 0)
    (*data_5307f8)(fconvert.s(fconvert.t(arg4) + fconvert.t(var_c_2)), 
        fconvert.s(fconvert.t(var_c_2) * fconvert.t(2f) + fconvert.t(arg3)))
    (*data_530368)(fconvert.s(fconvert.t(var_1c) - fconvert.t(var_3c)), 
        fconvert.s(fconvert.t(var_24) - fconvert.t(var_48)), 0)
    return (*data_530a08)()
}
