// ============================================================
// 函数名称: sub_4f80b4
// 虚拟地址: 0x4f80b4
// WARP GUID: 9e4eaec1-a029-5617-a62a-cd1adad21332
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c
// [被调用的父级函数]: sub_4f8278
// ============================================================

long double __stdcallsub_4f80b4(float arg1, float arg2, void* arg3)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1)
    long double x87_r7 = fconvert.t(arg1)
    long double temp1 = fconvert.t(0f)
    x87_r7 - temp1
    float var_c_1
    float var_8
    
    if (not(test_bit(
            ((x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
                | (x87_r7 == temp1 ? 1 : 0) << 0xe):1.b, 
            6)))
        var_8 = 1f
        long double x87_r7_15 = data_4f820c
        long double temp2_1 = fconvert.t(arg2)
        x87_r7_15 - temp2_1
        int16_t eax = (x87_r7_15 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_15, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp2_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax:1.b, 6)) && not(test_bit(eax:1.b, 0)))
            var_8 = fconvert.s(fconvert.t(1f) - (data_4f820c - fconvert.t(arg2)))
        
        long double x87_r7_19 = data_4f8218
        long double temp4_1 = fconvert.t(arg2)
        x87_r7_19 - temp4_1
        
        if (test_bit(
                ((x87_r7_19 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_19, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == temp4_1 ? 1 : 0) << 0xe):1.b, 
                0))
            var_8 = fconvert.s(fconvert.t(1f) - (data_4f8224 + fconvert.t(arg2)))
        
        float var_c_2 = fconvert.s(sub_402b3c((fconvert.t(arg2) * fconvert.t(0.5f) + fconvert.t(0.25f))
            * data_4f8238))
        var_c_1 = fconvert.s(fconvert.t(var_c_2) * fconvert.t(var_c_2) + data_4f8254)
    else
        var_8 = 0f
        long double x87_r7_1 = data_4f820c
        long double temp3_1 = fconvert.t(arg2)
        x87_r7_1 - temp3_1
        int16_t eax_1 = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_1:1.b, 6)) && not(test_bit(eax_1:1.b, 0)))
            var_8 = fconvert.s(data_4f820c - fconvert.t(arg2))
        
        long double x87_r7_4 = data_4f8218
        long double temp5_1 = fconvert.t(arg2)
        x87_r7_4 - temp5_1
        
        if (test_bit(
                ((x87_r7_4 < temp5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe):1.b, 
                0))
            var_8 = fconvert.s(data_4f8224 + fconvert.t(arg2))
        
        float var_c = fconvert.s(sub_402b3c((fconvert.t(arg2) * fconvert.t(0.5f) + fconvert.t(0.25f))
            * data_4f8238))
        var_c_1 = fconvert.s(data_4f8244 - fconvert.t(var_c) * fconvert.t(var_c))
    
    long double x87_r7_35 = fconvert.t(*(*(arg3 + 8) - 0x28)) * fconvert.t(var_8) * data_4f8260
        + fconvert.t(*(*(arg3 + 8) - 0x34))
        + fconvert.t(*(*(arg3 + 8) - 0x28)) * fconvert.t(var_c_1) * data_4f820c
    return fconvert.t(fconvert.s(x87_r7_35
        + fconvert.t(*(*(arg3 + 8) - 0x28)) * fconvert.t(arg1) * data_4f826c))
}
