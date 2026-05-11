// ============================================================
// 函数名称: sub_4d63bc
// 虚拟地址: 0x4d63bc
// WARP GUID: e8a7a616-e470-5211-bb66-467a5abfea73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __fastcallsub_4d63bc(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = data_61cae4
    int32_t edx = data_61cae4
    bool o = unimplemented  {imul eax, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ecx_2 = sx.d(*(*(data_61c8c8 + 0xab0) + edx * 0x81c0 + 0x8130))
    
    if (ecx_2 s>= 3)
        int32_t i_2 = ecx_2 - 2
        int32_t eax_1 = 3
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul edi, edx, 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t esi_1 = eax_1 * 0x23
            bool o_2 = unimplemented  {imul esi, eax, 0x23}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(*(data_61c8c8 + 0xab0) + edx * 0x81c0 + (esi_1 << 3) - 0xf8) == 1)
                bool o_3 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t edi_7 = sx.d(*(*(data_61c8c8 + 0xab0) + edx * 0x81c0 + (esi_1 << 3) - 0xf6))
                
                if (add_overflow(edi_7, 8))
                    sub_403010()
                    noreturn
                
                bool o_5 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                *(*(data_61c8c8 + 0xab0) + edx * 0x81c0 + (esi_1 << 3) - 0xf6) = edi_7.w + 8
            
            eax_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t edx_1 = data_61caec
    bool o_6 = unimplemented  {imul eax, edx, 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    int32_t ecx_6 = sx.d(*(*(data_61c8c8 + 0xab0) + edx_1 * 0x81c0 + 0x8130))
    
    if (ecx_6 s>= 3)
        int32_t i_3 = ecx_6 - 2
        int32_t eax_3 = 3
        int32_t i_1
        
        do
            bool o_7 = unimplemented  {imul edi, edx, 0x1038}
            
            if (o_7)
                sub_403010()
                noreturn
            
            int32_t esi_2 = eax_3 * 0x23
            bool o_8 = unimplemented  {imul esi, eax, 0x23}
            
            if (o_8)
                sub_403010()
                noreturn
            
            if (*(*(data_61c8c8 + 0xab0) + edx_1 * 0x81c0 + (esi_2 << 3) - 0xf8) == 1)
                bool o_9 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                int32_t edi_18 = sx.d(*(*(data_61c8c8 + 0xab0) + edx_1 * 0x81c0 + (esi_2 << 3) - 0xf6))
                
                if (add_overflow(edi_18, 0xf))
                    sub_403010()
                    noreturn
                
                bool o_11 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                *(*(data_61c8c8 + 0xab0) + edx_1 * 0x81c0 + (esi_2 << 3) - 0xf6) = edi_18.w + 0xf
            
            eax_3 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    bool o_12 = unimplemented  {imul eax, edx, 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    data_61cbc0
    bool o_13 = unimplemented  {imul edx, dword [0x61cbc0], 0x23}
    
    if (o_13)
        sub_403010()
        noreturn
    
    void* result = *(data_61c8c8 + 0xab0) + edx_1 * 0x81c0 + data_61cbc0 * 0x118 - 0xf8
    int32_t edx_5 = sx.d(*(result + 2))
    
    if (add_overflow(edx_5, 0xfffffff4))
        sub_403010()
        noreturn
    
    *(result + 2) = edx_5.w - 0xc
    int32_t temp5 = *(result + 0x5c)
    *(result + 0x5c) += 0x1a
    
    if (not(add_overflow(temp5, 0x1a)))
        result.b = arg1.b
        return result
    
    sub_403010()
    noreturn
}
