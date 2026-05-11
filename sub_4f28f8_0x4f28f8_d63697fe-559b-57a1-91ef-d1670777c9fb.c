// ============================================================
// 函数名称: sub_4f28f8
// 虚拟地址: 0x4f28f8
// WARP GUID: d63697fe-559b-57a1-91ef-d1670777c9fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ca100, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_4f1e48
// ============================================================

void* const __fastcallsub_4f28f8(float* arg1, int32_t arg2, void* arg3 @ eax, float arg4)
{
    // 第一条实际指令: data_7a7d98 = 1
    data_7a7d98 = 1
    
    if (add_overflow(arg2, 0xffffffff))
        sub_403010()
        noreturn
    
    float var_8 = fconvert.s((float.t(arg2 - 1) / fconvert.t(arg4) - fconvert.t(0.5f)) * fconvert.t(2f))
    
    if (*(*data_5301f4 + 4) == 7)
        if (*(*data_5301f4 + 0x111f9) != 0 && *(*data_5301f4 + 0x10038) != 0)
            var_8 = 0f
        else if (arg2 == 1)
            var_8 = -0.200000003f
        else if (arg2 != 2)
            var_8 = 0f
        else
            var_8 = 0.200000003f
        
        if (sub_4ca100() == 0)
            arg1[4] =
                fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(29f) * data_4f2de4 - fconvert.t(8f))
        else
            arg1[4] =
                fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(29f) * data_4f2de4 + fconvert.t(8f))
        
        arg1[5] = fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(25f) * data_4f2df8)
        *arg1 = fconvert.s(fconvert.t(var_8) * fconvert.t(40f) + fconvert.t(-60f))
        arg1[3] = fconvert.s(fconvert.t(var_8) * fconvert.t(9f))
        
        if (*(arg3 + 0x897c) == 1)
            var_8 = fconvert.s(data_4f2e10 + fconvert.t(var_8))
            arg1[4] =
                fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(29f) * data_4f2de4 * fconvert.t(2f))
            arg1[5] =
                fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(25f) * data_4f2df8 * fconvert.t(2f))
            *arg1 = fconvert.s(fconvert.t(var_8) * fconvert.t(120f) + fconvert.t(-60f))
    
    arg1[1] = fconvert.s(fneg(sub_402b2c(data_4f2e20 * fconvert.t(var_8) * data_4f2df8))
        * fconvert.t(10f) / fconvert.t(2f))
    arg1[2] = fconvert.s(fneg(sub_402b2c(data_4f2e20 * fconvert.t(var_8) * data_4f2df8))
        + (fconvert.t(arg4) / fconvert.t(5f) + data_4f2e34) * fconvert.t(var_8) * fconvert.t(25f))
    long double x87_r7_51 = fconvert.t(var_8)
    long double temp2 = fconvert.t(0f)
    x87_r7_51 - temp2
    int16_t eax_10 = (x87_r7_51 < temp2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_51, temp2) ? 1 : 0) << 0xa | (x87_r7_51 == temp2 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_10:1.b, 6)) && not(test_bit(eax_10:1.b, 0)))
        arg1[2] =
            fconvert.s(fconvert.t(var_8) * fconvert.t(var_8) * fconvert.t(60f) + fconvert.t(arg1[2]))
    
    long double x87_r7_56 = fconvert.t(var_8)
    long double temp3 = fconvert.t(0f)
    x87_r7_56 - temp3
    
    if (test_bit(
            ((x87_r7_56 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_56, temp3) ? 1 : 0) << 0xa
                | (x87_r7_56 == temp3 ? 1 : 0) << 0xe):1.b, 
            0))
        arg1[2] =
            fconvert.s(fconvert.t(var_8) * fconvert.t(var_8) * fconvert.t(16f) + fconvert.t(arg1[2]))
    
    arg1[6].b = 1
    arg1[7] = 0x3ecccccd
    arg1[9] = 0x3f000000
    arg1[8] = 0x40c00000
    void* const result = *data_5301f4
    
    if (*(result + 4) == 4)
        var_8 = fconvert.s(data_4f2e4c * fconvert.t(var_8))
        long double x87_r7_63 = fconvert.t(arg4)
        long double temp4_1 = fconvert.t(10f)
        x87_r7_63 - temp4_1
        result.w = (x87_r7_63 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_63, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_63 == temp4_1 ? 1 : 0) << 0xe
        
        if (test_bit(result:1.b, 6) || test_bit(result:1.b, 0))
            var_8 =
                fconvert.s((fconvert.t(arg4) / fconvert.t(20f) + fconvert.t(0.5f)) * fconvert.t(var_8))
        
        *arg1 = fconvert.s(fconvert.t(var_8) * fconvert.t(200f))
        arg1[1] = fconvert.s(fneg(sub_402b2c(data_4f2e20 * fconvert.t(var_8) * fconvert.t(0.5f)))
            * fconvert.t(20f))
        arg1[2] = fconvert.s(fconvert.t(var_8) * fconvert.t(80f))
        long double x87_r7_78 = fconvert.t(arg4)
        long double temp5_1 = fconvert.t(20f)
        x87_r7_78 - temp5_1
        int16_t eax_12 = (x87_r7_78 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_78, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_78 == temp5_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_12:1.b, 6) || test_bit(eax_12:1.b, 0))
            arg1[2] = fconvert.s((fconvert.t(arg4) / fconvert.t(40f) + fconvert.t(0.5f))
                * fconvert.t(arg1[2]))
        
        long double x87_r7_83 = fconvert.t(var_8)
        long double temp7_1 = fconvert.t(0f)
        x87_r7_83 - temp7_1
        eax_12 = (x87_r7_83 < temp7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_83, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_83 == temp7_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_12:1.b, 6)) && not(test_bit(eax_12:1.b, 0)))
            arg1[2] = fconvert.s(fconvert.t(var_8) * fconvert.t(var_8) * fconvert.t(30f)
                + fconvert.t(arg1[2]))
        
        arg1[3] = fconvert.s(fconvert.t(var_8) * fconvert.t(3f))
        arg1[4] = 0
        result = nullptr
        arg1[5] = 0
        arg1[5] = fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(12f))
        arg1[4] = fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(12f))
        arg1[6].b = 1
        arg1[7] = 0x3ecccccd
        arg1[9] = 0x3f000000
        arg1[8] = 0x40400000
    
    if (*(arg3 + 0x897c) == 1)
        arg1[3] = fconvert.s(fconvert.t(var_8) * fconvert.t(5f) - fconvert.t(10f))
        *arg1 = fconvert.s(fconvert.t(var_8) * fconvert.t(200f) + fconvert.t(140f))
        arg1[8] = 0xc1600000
        arg1[7] = 0x3e99999a
        arg1[5] = fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(40f))
        arg1[2] = fconvert.s(fconvert.t(var_8) * fconvert.t(180f) + fconvert.t(350f) - fconvert.t(150f))
        arg1[4] = 0xc1c80000
        arg1[1] = 0x42aa0000
        arg1[6].b = 0
        arg1[2] = fconvert.s(fconvert.t(-60f) - fconvert.t(var_8) * fconvert.t(16f))
        arg1[3] = 0x430c0000
        arg1[5] = fconvert.s(fneg(fconvert.t(arg1[5])) / fconvert.t(3f) - fconvert.t(5f))
        arg1[4] = fconvert.s(fconvert.t(10f) - fconvert.t(var_8) * fconvert.t(36f))
        arg1[1] =
            fconvert.s(fconvert.t(arg1[1]) - fconvert.t(370f) + fconvert.t(var_8) * fconvert.t(30f))
        
        if (arg2 == 2)
            arg1[2] = fconvert.s(fconvert.t(arg1[2]) - fconvert.t(2f))
        
        if (arg2 == 1)
            arg1[1] = fconvert.s(fconvert.t(arg1[1]) - fconvert.t(2f))
    else
        arg1[3] = fconvert.s(fconvert.t(var_8) * fconvert.t(5f))
        *arg1 = fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(50f) - fconvert.t(80f))
        arg1[5] = fconvert.s(fneg(fconvert.t(var_8)) * fconvert.t(60f))
        arg1[3] = fconvert.s(fconvert.t(var_8) * fconvert.t(5f))
        arg1[8] = 0x41400000
        __builtin_strncpy(&arg1[7], "333?", 4)
        arg1[2] = fconvert.s(fconvert.t(var_8) * fconvert.t(50f))
        arg1[3] = 0x43340000
        arg1[4] = fconvert.s(fconvert.t(arg1[4]) / fconvert.t(5f))
        arg1[5] = fconvert.s(fconvert.t(arg1[5]) / fconvert.t(3f))
        arg1[2] = fconvert.s(fconvert.t(arg1[2]) / fconvert.t(5f))
        *arg1 = fconvert.s(fconvert.t(*arg1) / fconvert.t(2f))
        result = nullptr
        arg1[8] = 0
        arg1[6].b = 0
    
    return result
}
