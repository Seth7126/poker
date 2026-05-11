// ============================================================
// 函数名称: sub_438550
// 虚拟地址: 0x438550
// WARP GUID: 25718d34-b16d-5d50-86b7-f8b93d078bc5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_438550(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, int32_t arg5 @ esi, void* arg6 @ edi)
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
    char* entry_ebx
    *entry_ebx
    arg1.b = sbb.b(arg1.b, 0, false)
    *arg1 += arg1.b
    entry_ebx[0x43] &= arg1:1.b
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    *entry_ebx += arg2:1.b
    entry_ebx[arg5] += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp2 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp2
    
    if (temp2 s>= 0)
        *0x97380041 += entry_ebx:1.b
        eax_2[0x66] += arg2:1.b
        void* eax_3
        eax_3:1.b = (&eax_2[1]):1.b * 2
        int32_t eax_4 = sx.d(eax_3.w)
        entry_ebx = &entry_ebx[2]
        *(eax_4 + 0xc004165) += entry_ebx.b
        int32_t ecx_1
        eax_2, arg2, ecx_1 = 0x653785f3()
        *(arg4 + 0x41) = eax_2:1.b
        eax_2.b += arg2.b
        arg3 = ecx_1 + 1
        *(arg6 + (arg2 << 2) + 0x43) += arg2.b
        *(arg6 + (arg2 << 2) - 0x6843ffbd) += arg3.b
    
    eax_2:1.b += arg3:1.b
    *(arg6 + (&entry_ebx[2] << 2)) += (&entry_ebx[2]).b
    *(arg6 - 0x68) += arg2.b
    *(arg6 - 0x4bffbc68) += arg6.b
    int32_t eax_6 = sx.d(arg6.w)
    *(arg3 + (&entry_ebx[5] << 2)) += arg3.b
    *(arg3 + (&entry_ebx[6] << 2)) += arg3:1.b
    *(arg3 + (&entry_ebx[7] << 2) + 0x43) += arg3.b
    *(arg3 + (&entry_ebx[7] << 2) + 0x43) += arg3:1.b
    *(eax_6 - 0x53ffbc67) += arg3.b
    int32_t eax_7
    int32_t edx
    edx:eax_7 = sx.q(eax_6)
    eax_7:1.b += arg3.b
    int32_t eax_8
    int32_t edx_1
    edx_1:eax_8 = sx.q(eax_7)
    eax_8:1.b += arg3:1.b
    char* eax_9
    int16_t edx_2
    edx_2:eax_9 = sx.q(eax_8)
    void* ebx_10 = &entry_ebx[0xa]
    *eax_2 += arg3.b
    void* const* var_4 = &__return_addr
    int32_t eflags
    uint16_t* gsbase
    uint16_t* esi = __outsb(edx_2, *(gsbase + arg5), arg5, eflags)
    char* eax_12
    
    if (arg4 != 1)
        *ebx_10 |= edx_2:1.b
        eax_12:1.b = (&eax_9[1]):1.b + ebx_10:1.b
    else
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg3 + ((arg4 - 1) << 1) + 0x6f), esi.w)
        *(arg3 + ((arg4 - 1) << 1) + 0x6f) = temp0_1
        __outsb(edx_2, *esi, esi, eflags_1)
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        char temp0_2 = *ebx_10
        *ebx_10 = eax_9.w.b
        int32_t eax_10
        eax_10.b = temp0_2
        eax_10.b = __in_al_dx(edx_2, eflags_1)
        char temp0_4 = *ebx_10
        *ebx_10 = eax_10.b
        eax_10.b = temp0_4
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        edx_2.b = 0x86
        ebx_10 += 1
        edx_2:1.b += ebx_10.b
        char temp0_5 = *ebx_10
        *ebx_10 = eax_10.b
        eax_10.b = temp0_5
        eax_10.b = *0xc0000000
        *eax_10
        *ebx_10 += edx_2:1.b
        char* eax_11
        eax_11:1.b = (eax_10 + 1):1.b + arg3:1.b
        *eax_11 += (arg3 + 1).b
        eax_12 = eax_11 ^ *eax_11
    
    eax_12.b ^= *eax_12
    char temp4 = *(fsbase + eax_12) ^ eax_12.b
    *(fsbase + eax_12) = temp4
    
    if (temp4 s>= 0)
        jump(0x43864e)
    
    *eax_12 += ebx_10:1.b
    int32_t edx_3 = 0xb46786cb()
    *0xdc0043a2 += edx_3.b
    *0xdc0043a2 -= 0x5e
    *0xdc0043a2 -= 0x5e
    char* eax_13
    eax_13.b = 0xa2 + *0xdc0043a2
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    eax_13[edx_3 + 0x4c0040] += (ebx_10.w + 1):1.b
    *eax_13 += eax_13.b
    *0x24004010
    eax_13.b += edx_3:1.b
    undefined
}
