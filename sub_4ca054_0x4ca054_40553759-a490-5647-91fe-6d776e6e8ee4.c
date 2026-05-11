// ============================================================
// 函数名称: sub_4ca054
// 虚拟地址: 0x4ca054
// WARP GUID: 40553759-a490-5647-91fe-6d776e6e8ee4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc140, sub_4d41ec, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void*sub_4ca054()
{
    // 第一条实际指令: int32_t i = 1
    int32_t i = 1
    void* result_2 = &data_536440
    void* result
    
    do
        char j = 0
        void* result_1 = result_2
        
        do
            result = result_1
            int32_t k_2 = *result
            
            if (add_overflow(k_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (k_2 - 1 s>= 0)
                int32_t k_1 = k_2
                int32_t esi_1 = 0
                void* ebx_1 = result_1 - 0x34b0
                int32_t k
                
                do
                    int32_t eax_4 = sub_4cc140(i, j, esi_1)
                    char var_40_1 = 0
                    int32_t var_48 = 0
                    float var_30[0x6]
                    result = sub_4d41ec(i, esi_1, 2, &var_30, var_48.b, eax_4, var_40_1)
                    __builtin_memcpy(ebx_1, &var_30, 0x18)
                    esi_1 += 1
                    ebx_1 += 0x50
                    k = k_1
                    k_1 -= 1
                while (k != 1)
            
            j += 1
            result_1 += 0x353c
        while (j != 7)
        
        i += 1
        result_2 += 0x174e0
    while (i != 0xb)
    
    return result
}
