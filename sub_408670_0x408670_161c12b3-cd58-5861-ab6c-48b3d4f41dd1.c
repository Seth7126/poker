// ============================================================
// 函数名称: sub_408670
// 虚拟地址: 0x408670
// WARP GUID: 161c12b3-cd58-5861-ab6c-48b3d4f41dd1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_408670(char* arg1, int16_t arg2, char arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi, long double arg7 @ st0) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *0x10004086 -= 0x7a
    char* eax
    char* entry_ebx
    eax.b = 0x86 + entry_ebx.b
    
    if (0x86 s< neg.b(entry_ebx.b))
        goto label_4086d7
    
    eax:1.b = 0x40 + arg2:1.b
    eax.b ^= *eax
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&eax[1]).b
    eax[2] += arg3
    char* eax_3 = &eax[2] ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp2_1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp2_1
    
    if (temp2_1 s< 0)
        goto label_4086e2
    
    void* eax_4
    eax_4.b = (&eax_3[1]).b * 2
    *eax_4 ^= eax_4.b
    eax = eax_4 | *(arg4 + 0x57)
    *(arg5 + 0x33)
    *(arg5 + 0x33)
    bool c_1 = unimplemented  {imul ebp, dword [esi+0x33], 0x72724532}
    int32_t eflags
    __outsd(arg2, *arg5, arg5, eflags)
    
    if (c_1)
        *eax += eax.b
    label_4086d7:
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += arg2.b
        char* temp0_2 = *eax
        *eax = eax
        eax_3.b = temp0_2.b
    else
        char* temp0_1 = *eax
        *eax = eax
        eax_3 = temp0_1
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
    label_4086e2:
        char temp3_1 = *eax_3
        *eax_3 += eax_3.b
        *(arg6 + 0xc0040) = adc.b(*(arg6 + 0xc0040), eax_3.b, temp3_1 + eax_3.b u< temp3_1)
    
    *eax_3 += eax_3.b
    *(eax_3 * 3)
    trap(0xd)
}
