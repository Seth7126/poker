// ============================================================
// 函数名称: sub_52a998
// 虚拟地址: 0x52a998
// WARP GUID: 622afc30-eca3-5f0f-8ee1-a8493a1ca485
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_402d20, sub_403010
// [被调用的父级函数]: sub_529818
// ============================================================

int32_t __convention("regparm")sub_52a998(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx = arg1
    int32_t result = 0
    float var_8_1 = fconvert.s(sub_402d38())
    
    for (int32_t i = 0; i != 0x29; i += 1)
        long double x87_r7_2 = float.t(*(ebx + (i << 2) + 4)) / fconvert.t(1000f)
        long double temp0_1 = fconvert.t(var_8_1)
        x87_r7_2 - temp0_1
        arg1.w = (x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
            result = i
            break
        
        var_8_1 = fconvert.s(fconvert.t(var_8_1) - float.t(*(ebx + (i << 2) + 4)) / fconvert.t(1000f))
    
    char ebx_1 = 0
    
    if (result s> 0x14)
        ebx_1 = 1
        int32_t result_1 = result
        result -= 0x14
        
        if (add_overflow(result_1, 0xffffffec))
            sub_403010()
            noreturn
    
    int32_t eax_5
    
    if (result - 1 u< 0xa)
        int32_t eax_3 = sub_402d20(2)
        void* edx_1 = *data_5301f4
        
        if (add_overflow(eax_3, *(edx_1 + 0x21108)))
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul esi}
        
        if (o_3)
            sub_403010()
            noreturn
        
        result *= eax_3 + *(edx_1 + 0x21108)
        
        if (result s> 1)
            int32_t eax_6 = sub_402d20(2)
            void* eax_8 = *data_5301f4
            
            if (add_overflow(eax_6, *(eax_8 + 0x21108)))
                sub_403010()
                noreturn
            
            int32_t edi_3 = (eax_6 + *(eax_8 + 0x21108)) * result
            bool o_5 = unimplemented  {imul edi, esi}
            
            if (o_5)
                sub_403010()
                noreturn
            
            eax_5 = sub_402d20(5)
            
            if (add_overflow(edi_3, eax_5))
                sub_403010()
                noreturn
            
            result = edi_3 + eax_5
    else if (result - 0xb u< 0xa)
        int32_t eax_11 = sub_402d20(5)
        int32_t edi_5 = *(*data_5301f4 + 0x21108)
        bool o_7 = unimplemented  {imul edx, esi}
        
        if (o_7)
            sub_403010()
            noreturn
        
        int32_t edx_6 = edi_5 * result * 5
        bool o_8 = unimplemented  {imul edx, edx, 0x5}
        
        if (o_8)
            sub_403010()
            noreturn
        
        int32_t ecx_1 = edi_5 * 0xa
        bool o_9 = unimplemented  {imul ecx, edi, 0xa}
        
        if (o_9)
            sub_403010()
            noreturn
        
        int32_t edx_7 = edx_6 + ecx_1
        
        if (add_overflow(edx_6, ecx_1))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_11, edx_7))
            sub_403010()
            noreturn
        
        result = eax_11 + edx_7
    
    if (ebx_1 != 0)
        int32_t result_2 = result
        result = neg.d(result)
        
        if (neg.d(result_2) == 0x80000000)
            sub_403010()
            noreturn
    
    long double st0_1 = sub_402d38()
    long double x87_r6 = data_52ab98
    x87_r6 - st0_1
    eax_5.w = (x87_r6 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, st0_1) ? 1 : 0) << 0xa
        | (x87_r6 == st0_1 ? 1 : 0) << 0xe
    
    if (test_bit(eax_5:1.b, 0))
        result = 0
    
    int32_t eax_14 = *(*data_5301f4 + 0x4584)
    
    if (eax_14 s> 3)
        data_5301f4
        
        if (eax_14 s<= 0xc)
            long double st0_2 = sub_402d38()
            long double temp15_1 = fconvert.t(0.5f)
            st0_2 - temp15_1
            eax_14.w = (st0_2 < temp15_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_2, temp15_1) ? 1 : 0) << 0xa | (st0_2 == temp15_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_14:1.b, 6)) && not(test_bit(eax_14:1.b, 0)))
                result = 0
    
    void* eax_16 = *data_5301f4
    *(eax_16 + 0x21108)
    bool o_13 = unimplemented  {imul eax, dword [eax+0x21108], 0x4}
    
    if (o_13)
        sub_403010()
        noreturn
    
    if (result s> *(eax_16 + 0x21108) * 4)
        int32_t result_3 = result
        result s>>= 1
        bool c_4 = unimplemented  {sar esi, 0x1}
        
        if (result_3 s>> 1 s< 0)
            result = adc.d(result, 0, c_4)
    
    long double st0_3 = sub_402d38()
    long double x87_r6_1 = data_52aba8
    x87_r6_1 - st0_3
    void* eax_17
    eax_17.w = (x87_r6_1 < st0_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0_3) ? 1 : 0) << 0xa
        | (x87_r6_1 == st0_3 ? 1 : 0) << 0xe
    
    if (test_bit(eax_17:1.b, 0) && result s> *(*data_5301f4 + 0x21108))
        int32_t result_4 = result
        result s>>= 1
        bool c_6 = unimplemented  {sar esi, 0x1}
        
        if (result_4 s>> 1 s< 0)
            result = adc.d(result, 0, c_6)
    
    long double st0_4 = sub_402d38()
    long double x87_r6_2 = data_52aba8
    x87_r6_2 - st0_4
    eax_17.w = (x87_r6_2 < st0_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0_4) ? 1 : 0) << 0xa
        | (x87_r6_2 == st0_4 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_17:1.b, 0)) || result s< *(*data_5301f4 + 0x21108))
        return result
    
    if (result s< 0)
        result += 3
    
    return result s>> 2
}
