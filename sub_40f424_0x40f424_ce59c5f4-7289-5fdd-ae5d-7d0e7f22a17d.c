// ============================================================
// 函数名称: sub_40f424
// 虚拟地址: 0x40f424
// WARP GUID: ce59c5f4-7289-5fdd-ae5d-7d0e7f22a17d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40f424(char* arg1, void* arg2, void* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, uint32_t arg6[0x4] @ xmm2, void* arg7, int32_t arg8, int32_t arg9, uint16_t arg10, int32_t arg11, int32_t arg12)
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
    char i
    
    do
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        i = *arg1
        *arg1 += arg1.b
    while (i s< neg.b(arg1.b))
    char* entry_ebx
    arg1[1] += entry_ebx.b
    arg1[1] += (&arg1[1]).b
    void* eax
    eax:1.b = (&arg1[1]):1.b + (&arg1[1]).b
    void* eax_1
    eax_1:1.b = (eax + 1):1.b + arg2:1.b
    eax_1.b ^= *eax_1
    *entry_ebx += arg2:1.b
    entry_ebx[arg5] += (eax_1 + 1).b
    *(eax_1 + 2) += arg3.b
    char* eax_4 = (eax_1 + 2) ^ *(eax_1 + 2)
    eax_4.b ^= *eax_4
    TEB* fsbase
    char temp2 = *(fsbase + eax_4) ^ eax_4.b
    *(fsbase + eax_4) = temp2
    
    if (temp2 s< 0)
        jump(*(*eax_4 + 8))
    
    void* eax_5
    eax_5:1.b = (&eax_4[1]):1.b + entry_ebx.b
    int32_t eflags
    int32_t eflags_1
    char temp0
    temp0, eflags_1 = __das(eax_5.b, eflags)
    eax_5.b = temp0
    eax_5:1.b += arg2:1.b
    *(arg3 + 1) -= eax_5.b
    eax_5.b = 0x2b
    *(eax_5 + arg5) += arg2.b
    eax_5.b = 0x2b + (arg3 + 3):1.b
    int32_t temp4 = *(arg3 + 3)
    void* eax_6 = eax_5 - *(arg3 + 3)
    __andps_xmmxud_memxud(arg6, *(arg2 + 0x65))
    
    if (eax_5 u>= temp4)
        eax_6.b &= 4
        eax_6.b = __in_al_dx(arg2.w, eflags_1)
        eax_6 = arg7
    else
        if (eax_5 == temp4)
            int32_t eflags_2
            int16_t temp0_1
            temp0_1, eflags_2 = __arpl_memw_gpr16(*(arg4 + 0x53), &__return_addr)
            *(arg4 + 0x53) = temp0_1
            
            if (eax_5 != temp4)
                int32_t* edi_1
                int32_t temp0_2
                temp0_2, edi_1 = __insd(__return_addr, arg10, eflags_2)
                *edi_1 = temp0_2
                breakpoint
            
            void* var_4 = eax_6
            int32_t* var_8 = arg3 + 3
            void* var_c = arg2
            char* var_10 = entry_ebx
            char** var_14 = &var_10
            void* var_18 = arg4
            eax_6.b &= 0x83
            eax_6.b &= 4
            eax_6.b = __in_al_dx(arg2.w, eflags_2)
            jump(*(*arg5 + 0x28))
        
        eax_6.b &= 4
    
    jump(*(*eax_6 + 0x24))
}
