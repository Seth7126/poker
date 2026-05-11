// ============================================================
// 函数名称: sub_509d44
// 虚拟地址: 0x509d44
// WARP GUID: 03599625-9c5f-5018-bdc2-f78581951501
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2f1c, sub_50a53c, sub_4c2d7c, sub_512d1c, sub_403010
// [被调用的父级函数]: sub_509ed4, sub_4c5eb0
// ============================================================

int32_tsub_509d44()
{
    // 第一条实际指令: int32_t result = 1
    int32_t result = 1
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0 && sub_4c2f1c(ebx_1) == 0)
                if (sub_512d1c(*data_530454, ebx_1, 0) == 0)
                label_509dad:
                    int32_t result_1 = result
                    result += 1
                    
                    if (add_overflow(result_1, 1))
                        sub_403010()
                        noreturn
                else
                    int32_t eax_10 = sub_50a53c(ebx_1) * 0xe9
                    bool o_1 = unimplemented  {imul eax, eax, 0xe9}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_530454 + (eax_10 << 2) - 0x50) == 0)
                        goto label_509dad
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
