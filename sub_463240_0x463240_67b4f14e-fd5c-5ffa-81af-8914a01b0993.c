// ============================================================
// 函数名称: sub_463240
// 虚拟地址: 0x463240
// WARP GUID: 67b4f14e-fd5c-5ffa-81af-8914a01b0993
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_462ca0
// [被调用的父级函数]: sub_462cec, sub_462fb0
// ============================================================

int32_t __convention("regparm")sub_463240(void* arg1)
{
    // 第一条实际指令: void var_1c
    void var_1c
    void* esi = &var_1c
    void* edx = *(arg1 + 0x14d)
    int32_t i = 0
    void* ebx = arg1 + 0xed
    void* var_2c
    
    while (*(arg1 + 0xe9) s> i)
        var_2c = *ebx
        *(edx + 8)
        *(edx + (*(var_2c + 4) << 2) + 0x40)
        *esi = (*(*(arg1 + 4) + 0x20))(0, *(var_2c + 0xc))
        esi += 4
        i += 1
        ebx += 4
    
    for (int32_t i_1 = *(edx + 0x10); *(edx + 0x14) s> i_1; i_1 += 1)
        for (int32_t j = *(edx + 0xc); *(arg1 + 0xfd) u> j; j += 1)
            int32_t ebx_1 = 0
            int32_t k = 0
            void* var_20_1 = &var_1c
            void* var_28_1 = arg1 + 0xed
            int32_t var_30
            void* var_24
            
            while (*(arg1 + 0xe9) s> k)
                var_2c = *var_28_1
                var_30 = *(var_2c + 0x34) * j
                int32_t esi_1 = 0
                var_24 = var_20_1
                
                for (; esi_1 s< *(var_2c + 0x38); esi_1 += 1)
                    int32_t edx_13 = *(*var_24 + ((i_1 + esi_1) << 2)) + (var_30 << 7)
                    int32_t ecx_9 = 0
                    void* eax_16 = edx + (ebx_1 << 2) + 0x18
                    
                    for (; ecx_9 s< *(var_2c + 0x34); ecx_9 += 1)
                        *eax_16 = edx_13
                        edx_13 += 0x80
                        ebx_1 += 1
                        eax_16 += 4
                
                k += 1
                var_20_1 += 4
                var_28_1 += 4
            
            if ((*(*(arg1 + 0x161) + 4))(arg1, edx, j, k, i_1, var_30, var_2c, var_28_1, var_24, 
                    var_20_1) == 0)
                *(edx + 0x10) = i_1
                *(edx + 0xc) = j
                return 0
        
        *(edx + 0xc) = 0
    
    *(edx + 8) += 1
    sub_462ca0(arg1)
    return 1
}
