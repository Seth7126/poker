// ============================================================
// 函数名称: sub_4be3e0
// 虚拟地址: 0x4be3e0
// WARP GUID: 73902347-7071-542a-b954-fb0146fec0ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8, sub_4b72e4, sub_403010
// [被调用的父级函数]: sub_4bf070
// ============================================================

long double __convention("regparm")sub_4be3e0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_2 = *(*data_5301f4 + 0xfff0)
    int32_t eax_2 = *(*data_5301f4 + 0xfff0)
    int32_t eax_3 = eax_2 s>> 1
    bool c = unimplemented  {sar eax, 0x1}
    
    if (eax_2 s>> 1 s< 0)
        eax_3 = adc.d(eax_3, 0, c)
    
    if (add_overflow(eax_3, 1))
        sub_403010()
        noreturn
    
    float var_c
    
    if (eax_3 + 1 s<= 1 || eax_3 + 1 s>= 5 || *(arg2 + 0x1c) != 2 || data_52fe74 != 0)
        var_c = 1f
    else if (sub_4b72e4(*(*(arg2 + 0x2c) - 4)) s> 2)
        float var_c_1 = 0f
        int32_t i_4 = sx.d(*(arg1 + 0x100))
        
        if (i_4 s> 0)
            int32_t i_2 = i_4
            void* esi_1 = arg1
            int32_t i
            
            do
                bool o_1 = unimplemented  {imul eax, dword [ebp-0x10], 0xd}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                float var_20_1 = *(*data_5309d4 + (eax_3 + 1) * 0x34 + (sx.d(*esi_1) << 2) + 0x9c)
                int32_t eax_16 = *(*data_5301f4 + 0x10020)
                
                if (eax_16 == 2 || eax_16 == 4 || eax_16 == 6)
                    char var_21_1 = 0
                    char var_22_1 = 0
                    int32_t var_18_1 = 0
                    int32_t j_2 = *(data_5301b0 + 0x69954)
                    
                    if (j_2 s> 0)
                        int32_t j_1 = j_2
                        int32_t var_10_1 = 1
                        void* var_34_1 = data_5301b0 + 0x60fdc
                        int32_t j
                        
                        do
                            void* eax_23
                            eax_23.b = *var_34_1
                            
                            if (eax_23.b == *esi_1)
                                if (var_10_1 s<= 3)
                                    var_18_1 = 1
                                
                                if (var_10_1 == 4)
                                    var_18_1 = 2
                                
                                if (var_10_1 == 5)
                                    var_18_1 = 3
                                
                                int32_t k_2 = *data_5300d0
                                
                                if (k_2 s> 0)
                                    int32_t k_1 = k_2
                                    int32_t edi_1 = 1
                                    void* ebx_1 = data_53020c
                                    int32_t k
                                    
                                    do
                                        if (edi_1 != *(*data_5301f4 + 0x10020) && sub_4c2be8(edi_1) != 0
                                                && *ebx_1 != 0)
                                            var_21_1 = 1
                                            int32_t eax_29
                                            eax_29.b = *(ebx_1 + var_18_1)
                                            var_22_1 = eax_29.b
                                            break
                                        
                                        edi_1 += 1
                                        ebx_1 += 4
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                            
                            if (var_21_1 != 0)
                                break
                            
                            var_10_1 += 1
                            var_34_1 += 0xd4
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    if (var_21_1 == 0)
                        var_20_1 = fconvert.s(data_4be68c * fconvert.t(var_20_1))
                    else
                        var_20_1 = fconvert.s(data_4be674 * fconvert.t(var_20_1))
                        
                        if (var_22_1 != 0)
                            var_20_1 = fconvert.s(data_4be680 * fconvert.t(var_20_1))
                
                var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_20_1))
                esi_1 += 4
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        float var_c_2 = fconvert.s(fconvert.t(var_c_1) / float.t(*(arg1 + 0x100)))
        float var_1c_1 = 1f
        int32_t i_5 = *data_5300d0
        
        if (i_5 s> 0)
            int32_t i_3 = i_5
            int32_t ebx_2 = 1
            int32_t i_1
            
            do
                if (ebx_2 != *(*(arg2 + 0x2c) - 4) && sub_4c2be8(ebx_2) != 0)
                    if (ebx_2 == *(*data_5301f4 + 0x2009c))
                        var_1c_1 = fconvert.s(fconvert.t(var_1c_1) - data_4be698)
                    else if (ebx_2 == *(*data_5301f4 + 0x200a0))
                        var_1c_1 = fconvert.s(fconvert.t(var_1c_1) - data_4be6a4)
                
                ebx_2 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        float var_1c_2 = fconvert.s(fconvert.t(var_1c_1) / data_4be6b0)
        var_c = fconvert.s(fconvert.t(var_c_2) * fconvert.t(var_1c_2) + fconvert.t(1f)
            - fconvert.t(var_1c_2))
    else
        var_c = 1f
    
    return fconvert.t(var_c)
}
