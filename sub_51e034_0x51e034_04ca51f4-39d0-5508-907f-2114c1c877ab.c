// ============================================================
// 函数名称: sub_51e034
// 虚拟地址: 0x51e034
// WARP GUID: 04ca51f4-39d0-5508-907f-2114c1c877ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402e64, sub_403010
// [被调用的父级函数]: sub_4c1fb8, sub_4cc428, sub_51e1c0, sub_4c95c4
// ============================================================

int32_tsub_51e034()
{
    // 第一条实际指令: void* eax = data_530658
    void* eax = data_530658
    *eax
    bool o = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* ebx = *(*data_530304 + 0xab0) + *eax * 0x81c0
    *(ebx + 2) = 0x1ae
    *(ebx + 4) = 0x250
    *(ebx + 6) = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t result = sx.d(*(ebx + 0x8130))
    
    if (result s> 0)
        int32_t var_10_1 = result
        int32_t esi_1 = 1
        int32_t i
        
        do
            int32_t edi_1 = esi_1 * 0x23
            bool o_1 = unimplemented  {imul edi, esi, 0x23}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(ebx + (edi_1 << 3) - 0xf1) != 0 && *(ebx + (edi_1 << 3) - 0xf8) == 0
                    && *(ebx + (edi_1 << 3) - 0x98) s> 0x16)
                int32_t eax_2 = sx.d(*(ebx + 4))
                
                if (add_overflow(eax_2, 0xffffffd2))
                    sub_403010()
                    noreturn
                
                *(ebx + 4) = eax_2.w - 0x2e
                *(ebx + (edi_1 << 3) - 0xf6) = 0
                *(ebx + (edi_1 << 3) - 0x98) = 0x2d
                *(ebx + (edi_1 << 3) - 0x9c) = 0x2d
                int32_t var_30
                sub_402e64(&var_30, (*data_530110).b, 0x20)
                int32_t eax_6 = *data_530920
                
                if (eax_6 u<= 0xff)
                    var_30 |= 1 << (eax_6 u% 0x20)
                
                bool c_1 = esi_1 u< 0xff
                
                if (esi_1 == 0xff || c_1)
                    c_1 = test_bit(var_30, esi_1)
                
                if (c_1)
                    int32_t eax_10
                    
                    if (*(ebx + (edi_1 << 3) - 0xf0) u<= 2)
                        eax_10 = 0
                    else
                        bool o_3 = unimplemented  {imul eax, esi, 0x23}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        eax_10 = zx.d(*(ebx + esi_1 * 0x118 - 0xf0)) * 0xd
                        bool o_4 = unimplemented  {imul eax, eax, 0xd}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                    
                    int32_t edx_6 = var_8 + eax_10
                    
                    if (add_overflow(var_8, eax_10))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edx_6, 5))
                        sub_403010()
                        noreturn
                    
                    var_8 = edx_6 + 5
                    int32_t temp9_1 = *(ebx + (edi_1 << 3) - 0x9c)
                    *(ebx + (edi_1 << 3) - 0x9c) += eax_10
                    
                    if (add_overflow(temp9_1, eax_10))
                        sub_403010()
                        noreturn
                
                if (esi_1 == *data_530920)
                    int32_t temp4_1 = var_8
                    var_8 += 0x23
                    
                    if (add_overflow(temp4_1, 0x23))
                        sub_403010()
                        noreturn
                
                result = var_c * 0x2e
                bool o_9 = unimplemented  {imul eax, dword [ebp-0x8], 0x2e}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                *(ebx + (edi_1 << 3) - 0xf4) = result.w
                int32_t temp5_1 = var_c
                var_c += 1
                
                if (add_overflow(temp5_1, 1))
                    sub_403010()
                    noreturn
            
            esi_1 += 1
            i = var_10_1
            var_10_1 -= 1
        while (i != 1)
    
    return result
}
