// ============================================================
// 函数名称: sub_4f637c
// 虚拟地址: 0x4f637c
// WARP GUID: 844ef201-4f28-5a4e-b739-173cbbd15662
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_402b2c
// [被调用的父级函数]: sub_4f6504
// ============================================================

void*sub_4f637c(void* arg1)
{
    // 第一条实际指令: long double x87_r7_1 = float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50))
    long double x87_r7_1 = float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50))
    long double temp0 = fconvert.t(0.5f)
    x87_r7_1 - temp0
    void* eax_2
    eax_2.w = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_2:1.b, 0)))
        long double x87_r7_16 = float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50))
        long double temp1_1 = fconvert.t(1f)
        x87_r7_16 - temp1_1
        void* eax_15
        eax_15.w = (x87_r7_16 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_16, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_16 == temp1_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_15:1.b, 0))
            *(*(arg1 + 8) - 0x30) = fconvert.s(sub_402b2c(
                float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50)) * fconvert.t(1f) * data_4f64dc
                + data_4f64e8) + fconvert.t(-0.5f))
            *(*(arg1 + 8) - 0x34) = fconvert.s(sub_402b3c(
                float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50)) * fconvert.t(1f) * data_4f64dc
                + data_4f64e8))
    else
        *(*(arg1 + 8) - 0x30) = fconvert.s(sub_402b2c(
            float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50)) * fconvert.t(1f) * data_4f64dc
            + data_4f64e8) + fconvert.t(0.5f))
        *(*(arg1 + 8) - 0x34) = fconvert.s(sub_402b3c(
            float.t(*(arg1 - 8)) / float.t(*(*(arg1 + 8) - 0x50)) * fconvert.t(1f) * data_4f64dc
            + data_4f64e8))
    
    *(*(arg1 + 8) - 0x30) = fconvert.s(data_4f64f8 * fconvert.t(*(*(arg1 + 8) - 0x30)))
    void* result = *(arg1 + 8)
    *(result - 0x34) = fconvert.s(data_4f64f8 * fconvert.t(*(*(arg1 + 8) - 0x34)))
    return result
}
