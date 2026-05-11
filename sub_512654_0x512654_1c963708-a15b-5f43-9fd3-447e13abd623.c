// ============================================================
// 函数名称: sub_512654
// 虚拟地址: 0x512654
// WARP GUID: 1c963708-a15b-5f43-9fd3-447e13abd623
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_5168a7, sub_51260b
// ============================================================

int32_t __convention("regparm")sub_512654(void* arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t i_1 = *(arg1 + 0x348)
    
    if (i_1 s> 0)
        int32_t edx_1 = 1
        int32_t i
        
        do
            int32_t esi_1 = edx_1 * 0xe9
            bool o_1 = unimplemented  {imul esi, edx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + (esi_1 << 2) - 0x50) == 1)
                *(arg1 + (esi_1 << 2) - 0x50) = 4
                *(arg1 + (esi_1 << 2) + 0x185) = 0
            
            edx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return entry_result
}
