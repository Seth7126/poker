// ============================================================
// 函数名称: sub_4ada94
// 虚拟地址: 0x4ada94
// WARP GUID: 58cbfcf1-75e7-50ee-a881-308e2fa32f73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405340, sub_4054f4, sub_40b4b0, sub_403010
// [被调用的父级函数]: sub_4ad8c0
// ============================================================

int32_t __convention("regparm")sub_4ada94(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: *(arg1 + 0x48)
    *(arg1 + 0x48)
    int32_t eax_1 = sub_405340()
    
    if (add_overflow(arg2, neg.d(eax_1)))
        sub_403010()
        noreturn
    
    if (arg2 - eax_1 s> 1 || arg2 s< 0)
        int32_t edx_2
        edx_2.b = 1
        sub_40b4b0(0x4988ec, edx_2, "Index out of range.")
        sub_403828()
        noreturn
    
    *(arg1 + 0x48)
    int32_t eax_3 = sub_405340()
    
    if (add_overflow(arg2, neg.d(eax_3)))
        sub_403010()
        noreturn
    
    if (arg2 - eax_3 == 1)
        if (add_overflow(arg2, 1))
            sub_403010()
            noreturn
        
        int32_t var_14_1 = arg2 + 1
        sub_4054f4()
    
    int32_t result = *(arg1 + 0x48)
    *(result + (arg2 << 2)) = arg3
    return result
}
