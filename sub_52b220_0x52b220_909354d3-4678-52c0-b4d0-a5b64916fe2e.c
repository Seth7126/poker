// ============================================================
// 函数名称: sub_52b220
// 虚拟地址: 0x52b220
// WARP GUID: 909354d3-4678-52c0-b4d0-a5b64916fe2e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4cd114
// ============================================================

int32_t __convention("regparm")sub_52b220(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t i_2 = sx.d(*(arg1 + 0x100))
    int16_t result = 1
    
    if (add_overflow(i_2, 1))
        sub_403010()
        noreturn
    
    if (add_overflow(i_2 + 1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(i_2 - 1, 1))
        sub_403010()
        noreturn
    
    if (i_2 s>= 1)
        int32_t i_1 = i_2
        int32_t i
        
        do
            result = 1
            
            if (add_overflow(i_2, 1))
                sub_403010()
                noreturn
            
            if (add_overflow(i_2 + 1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (add_overflow(i_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (i_2 - 1 s>= 1)
                int32_t j_1 = i_2 - 1
                void* edx_2 = arg1 + 5
                int32_t j
                
                do
                    result.b = *edx_2
                    
                    if (result.b s< *(edx_2 - 4))
                        ebx.b = *(edx_2 - 1)
                        char var_10_1 = ebx.b
                        char var_f_1 = result.b
                        result = *(edx_2 + 1)
                        int16_t result_1 = result
                        ebx.b = *(edx_2 - 5)
                        *(edx_2 - 1) = ebx.b
                        ebx.b = *(edx_2 - 4)
                        *edx_2 = ebx.b
                        ebx.w = *(edx_2 - 3)
                        *(edx_2 + 1) = ebx.w
                        ebx.b = var_10_1
                        *(edx_2 - 5) = ebx.b
                        ebx.b = var_f_1
                        *(edx_2 - 4) = ebx.b
                        *(edx_2 - 3) = result
                    
                    edx_2 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
