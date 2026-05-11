// ============================================================
// 函数名称: sub_51b810
// 虚拟地址: 0x51b810
// WARP GUID: 2899e898-f47e-5975-91e5-b37e1a04ea47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_5047f4, sub_524d14
// ============================================================

void __convention("regparm")sub_51b810(void* arg1)
{
    // 第一条实际指令: int32_t i_3
    int32_t i_3
    int32_t i_2 = i_3
    int32_t i_4 = *(arg1 + 0x3cf8)
    
    if (i_4 s> 0)
        i_2 = i_4
        int32_t ebx_1 = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul edx, ebx, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t j_2 = sx.d(*(arg1 + ebx_1 * 0x104))
            
            if (j_2 s> 0)
                int32_t ecx = 1
                int32_t j
                
                do
                    bool o_2 = unimplemented  {imul edx, ebx, 0x41}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_3 = sx.d(*(arg1 + ebx_1 * 0x104 + (ecx << 2) - 0x102))
                    bool o_3 = unimplemented  {imul edi, edx, 0x35}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + edx_3 * 0xd4 + 0x60f58) = ebx_1
                    bool o_4 = unimplemented  {imul edx, edx, 0x35}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + edx_3 * 0xd4 + 0x60f5c) = ecx
                    ecx += 1
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            ebx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_5 = *(arg1 + 0x3cfc)
    
    if (i_5 s<= 0)
        return 
    
    i_2 = i_5
    int32_t ebx_2 = 1
    int32_t i_1
    
    do
        bool o_5 = unimplemented  {imul edx, ebx, 0x41}
        
        if (o_5)
            sub_403010()
            noreturn
        
        int32_t j_3 = sx.d(*(arg1 + ebx_2 * 0x104 + 0x1450))
        
        if (j_3 s> 0)
            int32_t ecx_1 = 1
            int32_t j_1
            
            do
                bool o_6 = unimplemented  {imul edx, ebx, 0x41}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                int32_t edx_8 = sx.d(*(arg1 + ebx_2 * 0x104 + (ecx_1 << 2) + 0x134e))
                bool o_7 = unimplemented  {imul edi, edx, 0x35}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ebx_2, 0x14))
                    sub_403010()
                    noreturn
                
                *(data_5301b0 + edx_8 * 0xd4 + 0x60f58) = ebx_2 + 0x14
                bool o_9 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                *(data_5301b0 + edx_8 * 0xd4 + 0x60f5c) = ecx_1
                ecx_1 += 1
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        ebx_2 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
}
