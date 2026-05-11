// ============================================================
// 函数名称: sub_469cc8
// 虚拟地址: 0x469cc8
// WARP GUID: 4e698e11-2d4a-52a9-b975-51368cc42463
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4054f4, sub_403010
// [被调用的父级函数]: sub_483f98, sub_47ab08
// ============================================================

int32_t __convention("regparm")sub_469cc8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (add_overflow(arg2, 1))
    if (add_overflow(arg2, 1))
        sub_403010()
        noreturn
    
    int32_t temp1 = *(arg1 + 0x314)
    *(arg1 + 0x314) += arg2 + 1
    
    if (add_overflow(temp1, arg2 + 1))
        sub_403010()
        noreturn
    
    int32_t var_10 = *(arg1 + 0x314)
    sub_4054f4()
    int32_t eax_4 = *(arg1 + 0x314)
    int32_t edx_2 = eax_4 - arg2
    
    if (add_overflow(eax_4, neg.d(arg2)))
        sub_403010()
        noreturn
    
    int32_t edx_3 = edx_2 - 1
    
    if (add_overflow(edx_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_4, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_4 - 1 s>= edx_3)
        int32_t i_1 = eax_4 - 1 - edx_3 + 1
        int32_t i
        
        do
            *(*(arg1 + 0x31c) + (edx_3 << 1)) = 0
            edx_3 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_7 = *(arg1 + 0x314)
    
    if (not(add_overflow(eax_7, 0xffffffff)))
        return eax_7 - 1
    
    sub_403010()
    noreturn
}
