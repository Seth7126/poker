// ============================================================
// 函数名称: sub_4c60d8
// 虚拟地址: 0x4c60d8
// WARP GUID: 06c9cc27-a2e1-569e-8020-8d1987c23a59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_4cc6dc, sub_402d20, sub_51b4f0, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

void*sub_4c60d8(void* arg1)
{
    // 第一条实际指令: long double st0 = sub_402d38()
    long double st0 = sub_402d38()
    long double x87_r6 = data_4c62c4
    x87_r6 - st0
    int16_t eax = (x87_r6 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, st0) ? 1 : 0) << 0xa
        | (x87_r6 == st0 ? 1 : 0) << 0xe
    void* result
    
    if (not(test_bit(eax:1.b, 6)) && not(test_bit(eax:1.b, 0)))
    label_4c6115:
        result = *(arg1 - 4)
        
        if (*(result + 0xbbe4) == 0x65)
            int32_t eax_5 = sub_4cc6dc(*(*(arg1 - 4) + 0xbaa4))
            int32_t edx_3 = *(*data_5301f4 + 0x20070)
            int32_t edx_4 = edx_3 s>> 1
            bool c_2 = unimplemented  {sar edx, 0x1}
            
            if (edx_3 s>> 1 s< 0)
                edx_4 = adc.d(edx_4, 0, c_2)
            
            if (eax_5 s< edx_4)
            label_4c6204:
                result = sx.d(*(*(arg1 - 4) + 0xbbe2))
                int32_t edx_10 = *(*data_5301f4 + 0x20070)
                int32_t edx_11 = edx_10 s>> 1
                bool c_5 = unimplemented  {sar edx, 0x1}
                
                if (edx_10 s>> 1 s< 0)
                    edx_11 = adc.d(edx_11, 0, c_5)
                
                if (result s>= edx_11)
                    void* edx_13 = *data_5301f4
                    *(edx_13 + 0x21108)
                    bool o_4 = unimplemented  {imul edx, dword [edx+0x21108], 0x8}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    if (result s>= *(edx_13 + 0x21108) * 8)
                        long double st0_4 = sub_402d38()
                        long double x87_r6_4 = data_4c62d0
                        x87_r6_4 - st0_4
                        result.w = (x87_r6_4 < st0_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_4, st0_4) ? 1 : 0) << 0xa
                            | (x87_r6_4 == st0_4 ? 1 : 0) << 0xe
                        
                        if (test_bit(result:1.b, 0))
                            int32_t eax_23 = *data_530794 & 0x80000001
                            
                            if (eax_23 s< 0)
                                eax_23 = ((eax_23 - 1) | 0xfffffffe) + 1
                            
                            if (eax_23 == 0)
                            label_4c628a:
                                int32_t eax_26 = sub_402d20(4)
                                
                                if (not(add_overflow(eax_26, 0x22)))
                                    return sub_51b4f0(*data_5303b8, nullptr, data_530714, 
                                        eax_26 + 0x22, 0xffffffff)
                                
                                sub_403010()
                                noreturn
                            
                            long double st0_5 = sub_402d38()
                            long double x87_r6_5 = data_4c62dc
                            x87_r6_5 - st0_5
                            eax_23.w = (x87_r6_5 < st0_5 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, st0_5) ? 1 : 0) << 0xa
                                | (x87_r6_5 == st0_5 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_23:1.b, 0))
                                goto label_4c628a
                        
                        result = data_530794
                        int32_t temp5_1 = *result
                        *result += 1
                        
                        if (add_overflow(temp5_1, 1))
                            sub_403010()
                            noreturn
            else
                int32_t eax_9 = sub_4cc6dc(*(*(arg1 - 4) + 0xbaa4))
                void* edx_6 = *data_5301f4
                *(edx_6 + 0x21108)
                bool o_1 = unimplemented  {imul edx, dword [edx+0x21108], 0x5}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (eax_9 s< *(edx_6 + 0x21108) * 5)
                    goto label_4c6204
                
                long double st0_2 = sub_402d38()
                long double x87_r6_2 = data_4c62d0
                x87_r6_2 - st0_2
                eax_9.w = (x87_r6_2 < st0_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, st0_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == st0_2 ? 1 : 0) << 0xe
                
                if (test_bit(eax_9:1.b, 0))
                    int32_t eax_12 = *data_530794 & 0x80000001
                    
                    if (eax_12 s< 0)
                        eax_12 = ((eax_12 - 1) | 0xfffffffe) + 1
                    
                    if (eax_12 == 0)
                    label_4c61c1:
                        int32_t eax_15 = sub_402d20(4)
                        
                        if (not(add_overflow(eax_15, 0x22)))
                            return sub_51b4f0(*data_5303b8, nullptr, data_530714, eax_15 + 0x22, 
                                0xffffffff)
                        
                        sub_403010()
                        noreturn
                    
                    long double st0_3 = sub_402d38()
                    long double x87_r6_3 = data_4c62dc
                    x87_r6_3 - st0_3
                    eax_12.w = (x87_r6_3 < st0_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, st0_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == st0_3 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_12:1.b, 0))
                        goto label_4c61c1
                
                result = data_530794
                int32_t temp4_1 = *result
                *result += 1
                
                if (add_overflow(temp4_1, 1))
                    sub_403010()
                    noreturn
    else
        result = data_530598
        
        if (*(result + 0x18) s<= 4)
            long double st0_1 = sub_402d38()
            long double x87_r6_1 = data_4c62c4
            x87_r6_1 - st0_1
            result.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
                goto label_4c6115
    
    return result
}
