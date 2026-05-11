// ============================================================
// 函数名称: sub_528538
// 虚拟地址: 0x528538
// WARP GUID: 8877ef5d-8102-52c6-850b-200467d1c114
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5286dc, sub_5289d0, sub_403010
// [被调用的父级函数]: sub_5223e8, sub_520efc
// ============================================================

int32_t __convention("regparm")sub_528538(void* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_5289d0(arg1)
    sub_5289d0(arg1)
    int32_t i_2 = sub_5286dc(arg1)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t ecx_1 = 0
        void var_650
        void* eax_2 = &var_650
        int32_t i
        
        do
            if (*eax_2 == 0 && arg2 == *(eax_2 + 0x324))
                if (not(add_overflow(ecx_1, 1)))
                    return ecx_1 + 1
                
                sub_403010()
                noreturn
            
            ecx_1 += 1
            eax_2 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0
}
