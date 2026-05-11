// ============================================================
// 函数名称: sub_4acb0c
// 虚拟地址: 0x4acb0c
// WARP GUID: 67aa3674-12d0-53c1-a6dc-83c774ed1b30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4acb0c(char* arg1, int32_t arg2, char* arg3, uint16_t* arg4 @ esi, char* arg5 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char* entry_ebx
    entry_ebx.b |= 0x4a
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0xffffffcb] += arg2:1.b
    *(arg1 * 2) += arg1:1.b
    *arg1 += arg1.b
    void* eax
    eax:1.b = (&arg1[1]):1.b + (arg2 - 1):1.b
    eax.b ^= *eax
    *entry_ebx += (arg2 - 1):1.b
    *(entry_ebx + arg4) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp0 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp0
    int32_t eflags
    int32_t edx
    
    if (temp0 s< 0)
        edx = arg2 - 2
    else
        void arg_c00004a
        *(&arg_c00004a + (entry_ebx << 3)) += (&eax_3[1]).b
        eax_3[1] += (&arg3[1]).b
        void* eax_4
        eax_4.b = (&eax_3[1]).b | 0x41
        *(arg5 + &arg3[1]) += (arg2 - 1):1.b
        char temp1_1 = *eax_4
        *eax_4 += (&arg3[2]).b
        eax_4.b = adc.b(eax_4.b, 0x41, temp1_1 + (&arg3[2]).b u< temp1_1)
        *(&__return_addr + arg2 - 1) += (&arg3[2]).b
        arg3 = &arg3[3]
        char temp2_1 = eax_4:1.b
        eax_4:1.b += arg3.b
        
        if (not(add_overflow(temp2_1, arg3.b)))
            eax_4 = *eax_4
        
        eax_3 = eax_4 - 1
        *arg3 = adc.b(*arg3, eax_3.b, temp2_1 + arg3.b u< temp2_1)
        edx.b = (arg2 - 1).b | *(arg3 * 3 + 0x64)
        uint16_t* esi = __outsd(edx.w, *arg4, arg4, eflags)
        arg4 = __outsd(edx.w, *esi, esi, eflags)
        *(arg3 + 0x65)
        entry_ebx.b = (&entry_ebx[1]).b | 0x4a
    
    *arg5 += eax_3.b
    edx.b |= *(arg3 * 3 + 0x64)
    uint16_t* esi_1 = __outsd(edx.w, *arg4, arg4, eflags)
    __outsd(edx.w, *esi_1, esi_1, eflags)
    *(arg3 + 0x65)
    undefined
}
