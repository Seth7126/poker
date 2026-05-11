// ============================================================
// 函数名称: sub_4734c4
// 虚拟地址: 0x4734c4
// WARP GUID: 107cc48e-5127-581b-ba10-98cbf98e6610
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowCursor
// [内部子函数调用]: sub_4807f4, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_4734c4(int32_t* arg1, void* arg2, char arg3, void* arg4 @ ebp, int32_t arg5 @ edi, long double arg6 @ st0)
{
    // 第一条实际指令: *arg1 += arg1
    *arg1 += arg1
    *arg1 += arg1.b
    long double result = fconvert.t(*(arg1 * 3)) / arg6
    *(arg5 + (arg1 << 1)) <<= 1
    arg2:1.b += arg1.b
    int32_t eflags
    __sti(eflags)
    void* eax = arg1 + arg4 + 1
    bool cond:0 = arg1 s>= neg.d(arg4 + 1)
    uint32_t* esp
    
    while (true)
        if (not(cond:0))
            char temp2_1 = *(eax + 0x7500fa7d)
            *(eax + 0x7500fa7d) += eax.b
            void* entry_ebx
            *(entry_ebx - 0x6f7403bb) =
                sbb.b(*(entry_ebx - 0x6f7403bb), arg3, temp2_1 + eax.b u< temp2_1)
            int16_t cs
            uint32_t var_4 = zx.d(cs)
            esp = &var_4
            *(eax - 1) += (eax - 1).b
            break
        
        int32_t temp1_1 = *(eax - 0x7fff0483)
        *(eax - 0x7fff0483) += 1
        cond:0 = temp1_1 s>= 0xffffffff
        
        if (temp1_1 s< 0xffffffff)
            *(arg4 + 0x19) += arg2:1.b
            arg2 = *(*(arg4 - 3) + 0xe48)
            break
    
    int32_t esi
    sub_4807f4(*(arg4 - 3), arg2, esi, 0x80fff903)
    *(esp - 4) = 0xffffffff
    ShowCursor()
    
    if (*(*(arg4 - 3) + 0xa2c) != 3)
        *(*(arg4 - 3) + 0xa2c) = 2
    
    esp[2]
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_47352e
    sub_403df8(arg4 - 0x1b)
    return result
}
