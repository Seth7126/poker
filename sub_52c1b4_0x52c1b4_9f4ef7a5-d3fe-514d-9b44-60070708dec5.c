// ============================================================
// 函数名称: sub_52c1b4
// 虚拟地址: 0x52c1b4
// WARP GUID: 9f4ef7a5-d3fe-514d-9b44-60070708dec5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52c000, sub_403010
// [被调用的父级函数]: sub_4ee958, sub_502b8c
// ============================================================

int32_t __fastcallsub_52c1b4(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_10 = arg1
    int32_t var_10 = arg1
    int32_t result_2 = arg2
    
    if (var_10 == 0)
        result_2 = 1
        var_10 = *(arg3 + 0x8978)
    
    int32_t result = result_2
    int32_t edx_1 = result_2 + var_10
    
    if (add_overflow(result_2, var_10))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_1 - 1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (edx_1 - 2 s>= result)
        int32_t i_1 = edx_1 - 2 - result + 1
        int32_t i
        
        do
            int32_t result_3 = result_2
            int32_t edi_2 = result_2 + var_10
            
            if (add_overflow(result_2, var_10))
                sub_403010()
                noreturn
            
            if (add_overflow(edi_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (add_overflow(edi_2 - 1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (edi_2 - 2 s>= result_3)
                int32_t j_1 = edi_2 - 2 - result_3 + 1
                result = result_3 * 0x35
                bool o_6 = unimplemented  {imul eax, esi, 0x35}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                void* ebx_1 = arg3 + (result << 2)
                int32_t j
                
                do
                    if (result_3 s> 0 && result_3 s<= 0xa6)
                        result = sub_52c000(ebx_1, ebx_1 - 0xd4)
                        
                        if (result.b != arg4)
                            result.b = *ebx_1
                            char var_e8_1 = result.b
                            result.b = *(ebx_1 + 1)
                            char var_e7_1 = result.b
                            result = *(ebx_1 + 0x4c)
                            int32_t result_1 = result
                            *ebx_1 = *(ebx_1 - 0xd4)
                            *(ebx_1 + 1) = *(ebx_1 - 0xd3)
                            *(ebx_1 + 0x4c) = *(ebx_1 - 0x88)
                            int32_t edx_9
                            edx_9.b = var_e8_1
                            *(ebx_1 - 0xd4) = edx_9.b
                            edx_9.b = var_e7_1
                            *(ebx_1 - 0xd3) = edx_9.b
                            *(ebx_1 - 0x88) = result
                    
                    result_3 += 1
                    ebx_1 += 0xd4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
