// ============================================================
// 函数名称: sub_51ab70
// 虚拟地址: 0x51ab70
// WARP GUID: c0c3098e-134f-5ab0-a997-f63bd6f3e94d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c, sub_403010
// [被调用的父级函数]: sub_51ad40
// ============================================================

void*sub_51ab70(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    *(arg1 - 4) = 0x64
    *(arg1 - 8) = 0
    void* result = arg1
    
    if (*(result - 0xc) s> 0)
        result = arg1
        
        if (*(result + 8) s> 0)
            int32_t ebx_1 = *(arg1 - 0xc)
            int32_t esi_1 = *(arg1 + 8)
            
            if (ebx_1 s< 0)
                int32_t temp0_1 = ebx_1
                ebx_1 = neg.d(ebx_1)
                
                if (neg.d(temp0_1) == 0x80000000)
                    sub_403010()
                    noreturn
            
            int32_t esi_2
            int32_t edi_2
            
            if (ebx_1 != 0xc || *(*data_5301f4 + 0x4580) == 0)
                int32_t edi_3 = ebx_1 * 0x2345
                bool o_4 = unimplemented  {imul edi, ebx, 0x2345}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                bool o_5 = unimplemented  {imul edx, esi, 0x35}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                esi_2 = sub_402b4c(fconvert.t(*(data_5301b0 + (edi_3 << 2) - 0x394))
                    + fconvert.t(*(data_5301b0 + (edi_3 << 2) + esi_1 * 0xd4 - 0x8de4)))
                edi_2 = sub_402b4c(fconvert.t(*(data_5301b0 + (edi_3 << 2) - 0x38c)))
            else
                int32_t edi_1 = ebx_1 * 0x2345
                bool o_2 = unimplemented  {imul edi, ebx, 0x2345}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                bool o_3 = unimplemented  {imul edx, esi, 0x35}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                esi_2 = sub_402b4c(fconvert.t(*(data_5301b0 + (edi_1 << 2) - 0x394))
                    + fconvert.t(*(data_5301b0 + (edi_1 << 2) + esi_1 * 0xd4 - 0x8de4)))
                edi_2 = sub_402b4c(fconvert.t(*(data_5301b0 + (edi_1 << 2) - 0x38c)))
            
            if (neg.d(edi_2) == 0x80000000)
                sub_403010()
                noreturn
            
            *(arg1 - 4) = sub_402b4c(fconvert.t(120f) - float.t(neg.d(edi_2)) / fconvert.t(14f))
            
            if (*(arg1 - 4) s> 0x64)
                *(arg1 - 4) = 0x64
            
            if (*(arg1 - 4) s< 0)
                *(arg1 - 4) = 0
            
            if (add_overflow(esi_2, 0xfffffd76))
                sub_403010()
                noreturn
            
            *(arg1 - 8) = sub_402b4c(float.t(esi_2 - 0x28a) / data_51ad34)
            
            if (ebx_1 == 1)
                *(arg1 - 8)
                bool o_8 = unimplemented  {imul eax, dword [eax-0x8], 0x3}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                *(arg1 - 8) = sub_402b4c(float.t(*(arg1 - 8) * 3))
            
            if (*(arg1 - 8) s> 0x64)
                *(arg1 - 8) = 0x64
            
            result = arg1
            
            if (*(result - 8) s< 0xffffff9c)
                result = arg1
                *(result - 8) = 0xffffff9c
    
    return result
}
