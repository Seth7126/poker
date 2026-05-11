// ============================================================
// 函数名称: sub_407ca8
// 虚拟地址: 0x407ca8
// WARP GUID: 3afaec8c-b56f-59a4-856f-dcb82d96a483
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_407ca8(void* arg1, char* arg2, char* arg3, char* arg4 @ esi, void* arg5 @ edi, int80_t arg6 @ st0, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: arg1.b = *arg4
    arg1.b = *arg4
    void* esi = &arg4[1]
    char* entry_ebx
    void* ebp
    bool s
    bool o
    
    if (s == o)
        *arg2 += arg3.b
        *(esi + (arg1 << 1) + 0x69) |= arg2
        int32_t eflags
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg5, arg2.w, eflags)
        *edi = temp0_1
        int16_t* edi_2
        int16_t temp0_2
        temp0_2, edi_2 = __insd(__return_addr, arg8.w, eflags)
        *edi_2 = temp0_2
        int32_t edx
        edx.b = arg8.b | *(arg7 + (arg8 << 1) + 0x65)
        arg5 = *0xe00407c
        esi = *0xe004080
        ebp = *0xe004084
        entry_ebx = *0xe00408c
        arg2 = *0xe004090
        arg3 = *0xe004094
        int32_t* eax = *0xe004098
        
        if (edx.b u< 0)
            *eax += eax.b
            *arg3 += eax.b
            *eax += eax.b
            *(eax + arg2 + 0x40040) += entry_ebx:1.b
            *eax += eax.b
            int32_t temp3 = *(ebp + 0x78) | eax
            *(ebp + 0x78) = temp3
            int32_t eflags_1
            int16_t temp0_3
            temp0_3, eflags_1 = __arpl_memw_gpr16(*(ebp + 0x70), 0x409c)
            *(ebp + 0x70) = temp0_3
            
            if (temp3 == 0)
                jump(0x407da7)
            
            jump(0x407d3e)
        
        __builtin_strncpy(0xe004098, "RecX", 4)
        *eax += eax
        *arg3 += eax.b
        *eax += eax.b
        eax[0x300101f].b += arg3:1.b
        *eax += eax.b
        *((arg5 << 1) + 0x40) += eax:1.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        eax.b &= 0x7d
        arg1 = eax + 1
        *arg1 += arg1.b
        *arg1 += arg1.b
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *esi
    *esi += arg2:1.b
    bool o_1 = add_overflow(temp1, arg2:1.b)
    
    if (temp1 + arg2:1.b s< 0 != o_1)
        *(arg1 * 2) += arg3.b
        *arg1 += arg1.b
        arg6 f- fconvert.t(*arg1)
        char* eax_1
        eax_1:1.b = (arg1 + 1):1.b + arg2:1.b
        eax_1.b ^= *eax_1
        *entry_ebx += arg2:1.b
        *(entry_ebx + esi) += (&eax_1[1]).b
        eax_1[2] += arg3.b
        char* eax_4 = &eax_1[2] ^ *(eax_1 + 2)
        eax_4.b ^= *eax_4
        TEB* fsbase
        char temp2 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp2
        
        if (temp2 s< 0)
            jump(0x407d4e)
        
        jump(0x407d1e)
    
    if (o_1)
        *arg1 += arg1.b
        char temp4 = arg1.b
        char temp5 = arg1:1.b
        arg1.b += arg1:1.b
        
        if (temp4 s>= neg.b(temp5))
            jump(sub_407df4+3)
        
        return sub_407db7(arg1, arg2, arg3, ebp, esi, arg5) __tailcall
    
    *(arg5 + 0x6e)
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
    undefined
}
