// ============================================================
// 函数名称: sub_45b8c0
// 虚拟地址: 0x45b8c0
// WARP GUID: e6b51b0e-5b8a-598c-8581-11a2b9ac3753
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45b5d4
// [被调用的父级函数]: sub_45c55c
// ============================================================

int32_t __convention("regparm")sub_45b8c0(void* arg1)
{
    // 第一条实际指令: void var_1c
    void var_1c
    void* esi = &var_1c
    void* edx = *(arg1 + 0x19e)
    int32_t i = 0
    void* ebx = arg1 + 0x13e
    void* var_2c
    
    while (*(arg1 + 0x13a) s> i)
        var_2c = *ebx
        *(arg1 + 0x90)
        *(edx + (*(var_2c + 4) << 2) + 0x48)
        *esi = (*(*(arg1 + 4) + 0x20))(1, *(var_2c + 0xc))
        esi += 4
        i += 1
        ebx += 4
    
    int32_t j
    int32_t i_1
    int32_t var_30
    void* var_28
    void* var_24
    void* var_20
    
    for (i_1 = *(edx + 0x18); *(edx + 0x1c) s> i_1; i_1 += 1)
        for (j = *(edx + 0x14); *(arg1 + 0x14e) u> j; j += 1)
            int32_t ebx_1 = 0
            i = 0
            var_20 = &var_1c
            var_28 = arg1 + 0x13e
            
            while (*(arg1 + 0x13a) s> i)
                var_2c = *var_28
                var_30 = *(var_2c + 0x34) * j
                int32_t esi_1 = 0
                var_24 = var_20
                
                for (; esi_1 s< *(var_2c + 0x38); esi_1 += 1)
                    int32_t edx_13 = *(*var_24 + ((i_1 + esi_1) << 2)) + (var_30 << 7)
                    int32_t ecx_9 = 0
                    void* eax_16 = edx + (ebx_1 << 2) + 0x20
                    
                    for (; ecx_9 s< *(var_2c + 0x34); ecx_9 += 1)
                        *eax_16 = edx_13
                        edx_13 += 0x80
                        ebx_1 += 1
                        eax_16 += 4
                
                i += 1
                var_20 += 4
                var_28 += 4
            
            if ((*(*(arg1 + 0x1ae) + 4))(arg1, edx, j, i, i_1, var_30, var_2c, var_28, var_24, var_20)
                    == 0)
                *(edx + 0x18) = i_1
                *(edx + 0x14) = j
                return 0
        
        *(edx + 0x14) = 0
    
    *(arg1 + 0x90) += 1
    
    if (*(arg1 + 0x90) u>= *(arg1 + 0x132))
        (*(*(arg1 + 0x1a6) + 0xc))(arg1, edx, j, i, i_1, var_30, var_2c, var_28, var_24, var_20)
        return 4
    
    sub_45b5d4(arg1)
    return 3
}
