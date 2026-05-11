// ============================================================
// 函数名称: sub_4f5354
// 虚拟地址: 0x4f5354
// WARP GUID: 431ebce1-694c-5c1c-9b46-fa5bb0b5d466
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4f55c0
// ============================================================

void* __stdcallsub_4f5354(float arg1, float arg2, float arg3, void* arg4)
{
    // 第一条实际指令: *(arg4 - 4) = 0
    *(arg4 - 4) = 0
    *(arg4 - 4) = fconvert.s(fconvert.t(arg1) * fconvert.t(8f))
    long double x87_r7_2 = fconvert.t(arg3)
    long double temp1 = fconvert.t(0.5f)
    x87_r7_2 - temp1
    void* result
    result.w = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe
    
    if (not(test_bit(result:1.b, 0)))
    label_4f53bf:
        long double x87_r7_10 = fconvert.t(arg3)
        long double temp2_1 = fconvert.t(0.5f)
        x87_r7_10 - temp2_1
        result.w = (x87_r7_10 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
            long double x87_r7_11 = data_4f5428
            long double temp4_1 = fconvert.t(arg2)
            x87_r7_11 - temp4_1
            result.w = (x87_r7_11 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_11, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp4_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
                result = arg4
                *(result - 4) = fconvert.s((data_4f5428 - fconvert.t(arg2))
                    * (data_4f5428 - fconvert.t(arg2)) * fconvert.t(arg2) * fconvert.t(30f)
                    + fconvert.t(*(arg4 - 4)))
    else
        long double x87_r7_3 = data_4f5414
        long double temp3_1 = fconvert.t(arg2)
        x87_r7_3 - temp3_1
        result.w = (x87_r7_3 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, temp3_1) ? 1 : 0) << 0xa | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(result:1.b, 0)))
            goto label_4f53bf
        
        result = arg4
        *(result - 4) = fconvert.s((fconvert.t(arg2) - data_4f5414) * (fconvert.t(arg2) - data_4f5414)
            * (fconvert.t(1f) - fconvert.t(arg2)) * fconvert.t(30f) + fconvert.t(*(arg4 - 4)))
    
    return result
}
