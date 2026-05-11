// ============================================================
// 函数名称: sub_4c3194
// 虚拟地址: 0x4c3194
// WARP GUID: ea2860c6-e456-501d-a9a2-ff80e320eb8d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c30b4, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4c3194()
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    void* eax_1
    
    if (*(*data_5301f4 + 0x20095) == 1)
        int32_t i_1 = *data_5300d0
        
        if (i_1 s> 0)
            eax_1 = 1
            int32_t i
            
            do
                bool o_1 = unimplemented  {imul edx, eax, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + eax_1 * 0x208 + 0x1fea0) == 1)
                    int32_t edx_2 = eax_1 * 0x41
                    bool o_2 = unimplemented  {imul edx, eax, 0x41}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + (edx_2 << 3) + 0x1fea4) s< *(*data_5301f4 + 0x21104)
                            && *(*data_5301f4 + (edx_2 << 3) + 0x20084) == 0)
                        result = 0
                    
                    int32_t edi_3 = eax_1 * 0x41
                    bool o_3 = unimplemented  {imul edi, eax, 0x41}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_4
                    edx_4.b = *(*data_5301f4 + (edi_3 << 3) + 0x1fea2)
                    
                    if (edx_4.b == 0)
                    label_4c3248:
                        
                        if (*(*data_5301f4 + (edi_3 << 3) + 0x20084) == 0)
                            result = 0
                    else
                        char temp1_1 = edx_4.b
                        edx_4.b -= 0xb
                        
                        if (temp1_1 == 0xb)
                            goto label_4c3248
                
                eax_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    eax_1.b = 1
    
    if (sub_4c30b4(eax_1.b) != 0)
        result.b = 1
    
    return result
}
