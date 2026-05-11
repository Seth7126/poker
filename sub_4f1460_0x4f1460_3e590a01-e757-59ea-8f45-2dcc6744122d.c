// ============================================================
// 函数名称: sub_4f1460
// 虚拟地址: 0x4f1460
// WARP GUID: 3e590a01-e757-59ea-8f45-2dcc6744122d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_502b8c
// ============================================================

int32_t __convention("regparm")sub_4f1460(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: char var_e0
    char var_e0
    __builtin_memcpy(&var_e0, arg2, 0xd4)
    int32_t result = 0
    int32_t result_1 = 1
    int32_t i_1 = *(arg1 + 0x8978)
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            int32_t edi_1 = *(arg1 + 0x8978)
            int32_t edx_1 = edi_1 - esi_1
            
            if (add_overflow(edi_1, neg.d(esi_1)))
                sub_403010()
                noreturn
            
            result_1 = edx_1 + 1
            
            if (add_overflow(edx_1, 1))
                sub_403010()
                noreturn
            
            if (result == 0)
                bool o_3 = unimplemented  {imul ecx, edx, 0x35}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t ecx_1
                ecx_1.b = *(arg1 + result_1 * 0xd4 - 0xd4)
                
                if (ecx_1.b s< var_e0)
                    if (add_overflow(result_1, 1))
                        sub_403010()
                        noreturn
                    
                    result = result_1 + 1
                    
                    if (arg3 == 0)
                        if (edi_1 s>= result_1)
                            int32_t j_1 = edi_1 - result_1 + 1
                            int32_t result_2 = result_1
                            int32_t j
                            
                            do
                                int32_t ecx_4 = *(arg1 + 0x8978)
                                int32_t ecx_5 = ecx_4 + result_1
                                
                                if (add_overflow(ecx_4, result_1))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(ecx_5, neg.d(result_2)))
                                    sub_403010()
                                    noreturn
                                
                                bool o_7 = unimplemented  {imul ecx, ecx, 0x35}
                                
                                if (o_7)
                                    sub_403010()
                                    noreturn
                                
                                int32_t edi_4 = *(arg1 + 0x8978)
                                int32_t edi_5 = edi_4 + result_1
                                
                                if (add_overflow(edi_4, result_1))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(edi_5, neg.d(result_2)))
                                    sub_403010()
                                    noreturn
                                
                                bool o_10 = unimplemented  {imul edi, edi, 0x35}
                                
                                if (o_10)
                                    sub_403010()
                                    noreturn
                                
                                *(arg1 + (edi_5 - result_2) * 0xd4) =
                                    *(arg1 + (ecx_5 - result_2) * 0xd4 - 0xd4)
                                result_2 += 1
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                        
                        bool o_11 = unimplemented  {imul ecx, edx, 0x35}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        *(arg1 + result_1 * 0xd4 - 0xd4) = var_e0.d
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (result == 0)
        result = result_1
    
    if (arg3 == 0)
        int32_t temp1_1 = *(arg1 + 0x8978)
        *(arg1 + 0x8978) += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
    
    return result
}
