// ============================================================
// 函数名称: sub_456504
// 虚拟地址: 0x456504
// WARP GUID: 9b0f4a5e-a2e3-5d0c-833f-29349dc6e724
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_456474
// [被调用的父级函数]: sub_456790, sub_453a38
// ============================================================

int32_t __convention("regparm")sub_456504(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[4] != 0xca)
    if (arg1[4] != 0xca)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    if (arg1[0xb] << 3 u<= arg1[0xc])
        int32_t eax_3 = arg1[6] + 7
        
        if (eax_3 s< 0)
            eax_3 += 7
        
        arg1[0x1b] = eax_3 s>> 3
        int32_t edx_4 = arg1[7] + 7
        
        if (edx_4 s< 0)
            edx_4 += 7
        
        arg1[0x1c] = edx_4 s>> 3
        *(arg1 + 0x12e) = 1
    else if (arg1[0xb] << 2 u> arg1[0xc])
        if (arg1[0xb] * 2 u> arg1[0xc])
            arg1[0x1b] = arg1[6]
            arg1[0x1c] = arg1[7]
            *(arg1 + 0x12e) = 8
        else
            int32_t eax_9 = arg1[6] + 1
            int32_t eax_10 = eax_9 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_9 s>> 1 s< 0)
                eax_10 = adc.d(eax_10, 0, c_1)
            
            arg1[0x1b] = eax_10
            int32_t edx_10 = arg1[7] + 1
            int32_t edx_11 = edx_10 s>> 1
            bool c_2 = unimplemented  {sar edx, 0x1}
            
            if (edx_10 s>> 1 s< 0)
                edx_11 = adc.d(edx_11, 0, c_2)
            
            arg1[0x1c] = edx_11
            *(arg1 + 0x12e) = 4
    else
        int32_t eax_6 = arg1[6] + 3
        
        if (eax_6 s< 0)
            eax_6 += 3
        
        arg1[0x1b] = eax_6 s>> 2
        int32_t edx_7 = arg1[7] + 3
        
        if (edx_7 s< 0)
            edx_7 += 3
        
        arg1[0x1c] = edx_7 s>> 2
        *(arg1 + 0x12e) = 2
    
    int32_t i = 0
    void* ecx_7 = arg1[0x35]
    
    while (i s< arg1[8])
        int32_t j
        
        for (j = *(arg1 + 0x12e); j s< 8; j *= 2)
            if (*(ecx_7 + 8) * j * 2 s> *(arg1 + 0x126) * *(arg1 + 0x12e))
                break
            
            if (*(ecx_7 + 0xc) * j * 2 s> *(arg1 + 0x12a) * *(arg1 + 0x12e))
                break
        
        *(ecx_7 + 0x24) = j
        i += 1
        ecx_7 += 0x54
    
    int32_t i_1 = 0
    void* ecx_8 = arg1[0x35]
    
    while (i_1 s< arg1[8])
        int32_t edi_6 = *(arg1 + 0x126) << 3
        i_1 += 1
        *(ecx_8 + 0x28) = divs.dp.d(sx.q(*(ecx_8 + 8) * *(ecx_8 + 0x24) * arg1[6] + edi_6 - 1), edi_6)
        int32_t edi_8 = *(arg1 + 0x12a) << 3
        *(ecx_8 + 0x2c) = divs.dp.d(sx.q(*(ecx_8 + 0xc) * *(ecx_8 + 0x24) * arg1[7] + edi_8 - 1), edi_8)
        ecx_8 += 0x54
    
    int32_t eax_26 = arg1[0xa]
    
    if (eax_26 == 1)
        arg1[0x1d] = 1
    else if (eax_26 - 2 u< 2)
        arg1[0x1d] = 3
    else if (eax_26 - 4 u< 2)
        arg1[0x1d] = 4
    else
        arg1[0x1d] = arg1[8]
    
    int32_t eax_31
    
    if (arg1[0x14] == 0)
        eax_31 = arg1[0x1d]
    else
        eax_31 = 1
    
    arg1[0x1e] = eax_31
    int32_t result = sub_456474(arg1)
    
    if (result == 0)
        arg1[0x1f] = 1
    else
        arg1[0x1f] = *(arg1 + 0x12a)
    
    return result
}
