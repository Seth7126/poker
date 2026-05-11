// ============================================================
// 函数名称: sub_52c3cc
// 虚拟地址: 0x52c3cc
// WARP GUID: 4419cd0f-fc3a-5e67-ae92-87b19eb5e2da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52c0c8, sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4cd400, sub_4cd498, sub_4bf070
// ============================================================

int32_t __fastcallsub_52c3cc(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_10 = arg1
    int32_t var_10 = arg1
    int32_t result_1 = arg2
    
    if (var_10 == 0)
        result_1 = 1
        var_10 = sx.d(*(arg3 + 0x100))
    
    int32_t result = result_1
    int32_t edx_1 = result_1 + var_10
    
    if (add_overflow(result_1, var_10))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_1 - 1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_1 - 2, 1))
        sub_403010()
        noreturn
    
    if (edx_1 - 1 s>= result)
        int32_t i_1 = edx_1 - 1 - result + 1
        int32_t i
        
        do
            result = result_1
            int32_t esi_2 = result_1 + var_10
            
            if (add_overflow(result_1, var_10))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_2 - 1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (esi_2 - 2 s>= result)
                int32_t j_1 = esi_2 - 2 - result + 1
                void* edi_1 = arg3 + (result << 2)
                int32_t j
                
                do
                    int16_t edx_9
                    result, edx_9 = sub_52c0c8(*edi_1, (*(edi_1 - 4)).w)
                    
                    if (arg4 != result.b)
                        result.b = *edi_1
                        char var_14_1 = result.b
                        result.b = *(edi_1 + 1)
                        char var_13_1 = result.b
                        result.w = *(edi_1 + 2)
                        int16_t var_12_1 = result.w
                        edx_9.b = *(edi_1 - 4)
                        *edi_1 = edx_9.b
                        edx_9.b = *(edi_1 - 3)
                        *(edi_1 + 1) = edx_9.b
                        *(edi_1 + 2) = *(edi_1 - 2)
                        edx_9.b = var_14_1
                        *(edi_1 - 4) = edx_9.b
                        edx_9.b = var_13_1
                        *(edi_1 - 3) = edx_9.b
                        *(edi_1 - 2) = result.w
                    
                    edi_1 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
