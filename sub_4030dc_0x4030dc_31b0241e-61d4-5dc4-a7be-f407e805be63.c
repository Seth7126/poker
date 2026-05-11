// ============================================================
// 函数名称: sub_4030dc
// 虚拟地址: 0x4030dc
// WARP GUID: 31b0241e-61d4-5dc4-a7be-f407e805be63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403064
// ============================================================

int32_t* __convention("regparm")sub_4030dc(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    void* ebx_1 = arg1
    *arg2 = arg1
    int32_t ecx = *(ebx_1 - 0x28)
    int32_t* i = &var_c
    __builtin_memset(__builtin_memset(&arg2[1], 0, ((ecx u>> 2) - 1) << 2), 0, ecx & 3)
    
    while (true)
        int32_t ecx_5 = *(ebx_1 - 0x48)
        
        if (ecx_5 != 0)
            *(i - 4) = ecx_5
            i -= 4
        
        void** ebx_2 = *(ebx_1 - 0x24)
        
        if (ebx_2 == 0)
            break
        
        ebx_1 = *ebx_2
    
    while (i != &var_c)
        int32_t* ebx_3 = *i
        i = &i[1]
        int32_t j_1 = *ebx_3
        void* ebx_4 = &ebx_3[1]
        int32_t j
        
        do
            int32_t esi_1 = *(ebx_4 + 0x10)
            
            if (esi_1 != 0)
                *(arg2 + *(ebx_4 + 0x14)) = esi_1
            
            ebx_4 += 0x1c
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    *i
    i[1]
    i[2]
    return arg2
}
