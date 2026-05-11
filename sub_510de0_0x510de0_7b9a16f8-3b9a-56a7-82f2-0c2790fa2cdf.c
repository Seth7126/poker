// ============================================================
// 函数名称: sub_510de0
// 虚拟地址: 0x510de0
// WARP GUID: 7b9a16f8-3b9a-56a7-82f2-0c2790fa2cdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_50b624
// ============================================================

int32_t __convention("regparm")sub_510de0(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *(arg1 + 0x1e8) s> 0
    
    if (result.b != 0)
        *arg2 = *(arg1 + 0x1ec)
        *arg3 = *(arg1 + 0x218)
        int32_t temp0_1 = *(arg1 + 0x1e8)
        *(arg1 + 0x1e8) -= 1
        
        if (add_overflow(temp0_1, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t i_2 = *(arg1 + 0x1e8)
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t edx_1 = 0
            int32_t i
            
            do
                *(arg1 + 0x1e8 + (edx_1 << 2) + 4) = *(arg1 + 0x1e8 + (edx_1 << 2) + 8)
                *(arg1 + 0x1e8 + (edx_1 << 2) + 0x30) = *(arg1 + 0x1e8 + (edx_1 << 2) + 0x34)
                edx_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
