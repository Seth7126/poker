// ============================================================
// 函数名称: sub_4cc738
// 虚拟地址: 0x4cc738
// WARP GUID: 6d41ca59-e913-5eae-b797-06a6c18d21e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517f20, sub_403010
// [被调用的父级函数]: sub_4cca24
// ============================================================

int32_t __convention("regparm")sub_4cc738(int32_t arg1)
{
    // 第一条实际指令: int32_t i = 1
    int32_t i = 1
    void* var_14 = data_530594
    int32_t j_1
    int32_t i_1
    
    do
        int32_t j = 1
        void* edx_1 = var_14
        
        do
            if (arg1 == *edx_1)
                i_1 = i
                j_1 = j
                break
            
            j += 1
            edx_1 += 4
        while (j != 0xe)
        
        if (i_1 s> 0 && j_1 s> 0)
            bool o_1 = unimplemented  {imul edx, dword [ebp-0x8], 0x7}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (arg1 == *(data_530594 + i_1 * 0x38 + (j_1 << 2) - 0x3c))
                break
        
        i += 1
        var_14 += 0x38
    while (i != 5)
    
    if (i_1 s> 0 && j_1 s> 0)
        bool o_2 = unimplemented  {imul edx, dword [ebp-0x8], 0x7}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (arg1 == *(data_530594 + i_1 * 0x38 + (j_1 << 2) - 0x3c))
            return sub_517f20(j_1.b, i_1.b)
    
    return sub_517f20(0, 0)
}
