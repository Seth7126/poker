// ============================================================
// 函数名称: sub_4c06c0
// 虚拟地址: 0x4c06c0
// WARP GUID: 2bf0f036-b3c8-5ec0-8af9-b230cad569e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2ca0, sub_4c2be8, sub_420ac8, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

void*sub_4c06c0()
{
    // 第一条实际指令: void* esi = data_5301f4
    void* esi = data_5301f4
    int32_t ebx = 0
    
    if (sub_4c2ca0() != 1)
    label_4c0716:
        
        if (*(*esi + 0x2028c) != 0)
            ebx = 0x64
    else
        if (sub_4c2be8(1) == 0)
            goto label_4c0716
        
        int32_t edi_1 = *(*esi + 0x21100)
        void* eax_4 = *esi
        *(eax_4 + 0x21108)
        bool o_1 = unimplemented  {imul eax, dword [eax+0x21108], 0x5}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (edi_1 s< *(eax_4 + 0x21108) * 5 && edi_1 s< *(*esi + 0x20070))
            goto label_4c0716
        
        ebx = 0x64
    
    for (int32_t i = 0; i != 0x1e; i += 1)
        if (add_overflow(0x1e, neg.d(i)))
            sub_403010()
            noreturn
        
        *(*esi + ((0x1e - i) << 2) + 0x2112c) = *(*esi + ((0x1e - i) << 2) + 0x21128)
    
    *(*esi + 0x2112c) = ebx
    int32_t edx_2 = *(*esi + 0x4584)
    
    if (add_overflow(edx_2, 1))
        sub_403010()
        noreturn
    
    int32_t i_3 = sub_420ac8(0x1e, edx_2 + 1)
    float var_10 = 1f
    
    if (i_3 s>= 0x18)
        var_10 = 1.79999995f
    else if (i_3 s>= 0x12)
        var_10 = 1.60000002f
    else if (i_3 s>= 0xc)
        var_10 = 1.39999998f
    else if (i_3 s>= 7)
        var_10 = 1.20000005f
    
    float var_c = 0f
    
    if (add_overflow(i_3, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_3 - 1 s>= 0)
        int32_t i_2 = i_3
        int32_t eax_11 = 0
        int32_t i_1
        
        do
            if (eax_11 s<= 3)
                var_c = fconvert.s(
                    float.t(*(*esi + (eax_11 << 2) + 0x2112c)) / fconvert.t(50f) * fconvert.t(var_10)
                    + fconvert.t(var_c))
            else if (eax_11 s> 6)
                int32_t ebx_4 = *data_5300d0
                
                if (add_overflow(ebx_4, 5))
                    sub_403010()
                    noreturn
                
                if (eax_11 s> ebx_4 + 5)
                    void* ebx_7 = data_5300d0
                    *ebx_7
                    int32_t ebx_8 = *ebx_7 * 2
                    bool o_6 = unimplemented  {imul ebx, dword [ebx], 0x2}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ebx_8, 0xa))
                        sub_403010()
                        noreturn
                    
                    if (eax_11 s> ebx_8 + 0xa)
                        var_c = fconvert.s(float.t(*(*esi + (eax_11 << 2) + 0x2112c)) / fconvert.t(300f)
                            + fconvert.t(var_c))
                    else
                        var_c = fconvert.s(float.t(*(*esi + (eax_11 << 2) + 0x2112c)) / fconvert.t(150f)
                            + fconvert.t(var_c))
                else
                    var_c = fconvert.s(float.t(*(*esi + (eax_11 << 2) + 0x2112c)) / fconvert.t(100f)
                        + fconvert.t(var_c))
            else
                var_c = fconvert.s(
                    float.t(*(*esi + (eax_11 << 2) + 0x2112c)) / fconvert.t(75f) * fconvert.t(var_10)
                    + fconvert.t(var_c))
            
            eax_11 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (i_3 s>= 0x14)
        i_3 = 0x14
    
    if (i_3 s< 2)
        *(*esi + 0x21128) = 0xb4
    else
        *(*esi + 0x21128) = sub_402b4c(
            fconvert.t(fconvert.s(fconvert.t(var_c) / float.t(i_3) * float.t(*data_5300d0)))
            * fconvert.t(100f))
    
    char var_5
    void* result
    result.b = var_5
    return result
}
