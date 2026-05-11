// ============================================================
// 函数名称: sub_517950
// 虚拟地址: 0x517950
// WARP GUID: 52c6ff0c-bfa9-5836-840d-8dcbd7cbbf96
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_517fc8
// ============================================================

int32_t __convention("regparm")sub_517950(void* arg1)
{
    // 第一条实际指令: char var_c
    char var_c
    
    if (*(arg1 + 0x298) s<= 0)
        var_c = 0
        char var_b_1 = 0
    else
        int32_t eax =
            sub_402b4c(sub_402d38() * (float.t(*(arg1 + 0x298)) - data_5179cc) + fconvert.t(0.5f))
        var_c.d = *(arg1 + (eax << 2) - 4)
        int16_t temp0_1 = *(arg1 + 0x298)
        *(arg1 + 0x298) -= 1
        
        if (add_overflow(temp0_1, 0xffff))
            sub_403010()
            noreturn
        
        int32_t edx_2 = sx.d(*(arg1 + 0x298))
        
        if (edx_2 s>= eax)
            int32_t i_1 = edx_2 - eax + 1
            void* eax_1 = arg1 + (eax << 2)
            int32_t i
            
            do
                *(eax_1 - 4) = *eax_1
                eax_1 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return var_c.d
}
