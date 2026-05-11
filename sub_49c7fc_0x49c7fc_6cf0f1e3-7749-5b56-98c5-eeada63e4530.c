// ============================================================
// 函数名称: sub_49c7fc
// 虚拟地址: 0x49c7fc
// WARP GUID: 6cf0f1e3-7749-5b56-98c5-eeada63e4530
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49c7fc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_2 = *(arg1 + 4)
    int32_t i_2 = *(arg1 + 4)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s< 0)
        return 
    
    int32_t i_1 = i_2
    int32_t ecx_1 = 0
    int32_t i
    
    do
        if (arg2 == *(arg1 + (ecx_1 << 2) + 8))
            int32_t temp2 = *(arg1 + 4)
            *(arg1 + 4) -= 1
            
            if (add_overflow(temp2, 0xffffffff))
                sub_403010()
                noreturn
            
            *(arg1 + (ecx_1 << 2) + 8) = *(arg1 + (*(arg1 + 4) << 2) + 8)
            *(arg1 + (*(arg1 + 4) << 2) + 8) = 0
            return 
        
        ecx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
