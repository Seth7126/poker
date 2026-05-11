// ============================================================
// 函数名称: sub_498c80
// 虚拟地址: 0x498c80
// WARP GUID: a0538a58-48e4-5a69-b259-fb8b702d332f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_498dde
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_498c80(char* arg1, void* arg2, char arg3, uint16_t* arg4 @ esi, int16_t* arg5 @ edi, int32_t arg6, int16_t arg7, char arg8)
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
    int32_t ebp
    int32_t var_4 = ebp
    arg1.b = arg1.b
    *arg1 += arg1.b
    arg1.b = *0xf4004988
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg4) += (&arg1[1]).b
    arg1[2] += arg3
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    
    if (temp1 s< 0)
        goto label_498cf2
    
    void* eax_3
    eax_3.b = (&eax_2[1]).b * 2
    *eax_3
    *eax_3 ^= eax_3.b
    char* temp4_1 = entry_ebx
    entry_ebx = &entry_ebx[1]
    int32_t eflags
    uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
    uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
    int32_t esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    void var_4990
    uint16_t* gsbase
    int16_t temp0_1
    temp0_1, eflags = __arpl_memw_gpr16(*(gsbase + &var_4990 + (arg2 << 1) + 0x69), esi_2.w)
    *(gsbase + &var_4990 + (arg2 << 1) + 0x69) = temp0_1
    int16_t temp0_2
    temp0_2, arg5 = __insd(arg5, arg2.w, eflags)
    *arg5 = temp0_2
    arg4 = __outsd(arg2.w, *(gsbase + esi_2), esi_2, eflags)
    
    if (temp4_1 != 0xffffffff)
        goto label_498d4e
    
    eax_2 = eax_3
    arg6.b = adc.d(arg6, eax_3, false).b - arg3
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    label_498cf2:
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    arg8 -= arg3
    *eax_2 += eax_2.b
    eax_2.b = *0xf4004988
    eax_2.b ^= *eax_2
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg4) += (&eax_2[1]).b
    eax_2[2] += arg3
    eax_3 = &eax_2[2] ^ *(eax_2 + 2)
    eax_3.b ^= *eax_3
    char temp2_1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp2_1
    
    if (temp2_1 s< 0)
        goto label_498d52
    
    void* eax_6
    eax_6.b = (eax_3 + 1).b * 2
    *eax_6
    *eax_6 ^= eax_6.b
    eax_3 = adc.d(eax_6, arg6, false)
    char* temp7_1 = entry_ebx
    entry_ebx = &entry_ebx[1]
    uint16_t* esi_3 = __outsd(arg2.w, *arg4, arg4, eflags)
    uint16_t* esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags)
    arg4 = __outsb(arg2.w, *esi_4, esi_4, eflags)
    int32_t eflags_1
    int16_t temp0_3
    temp0_3, eflags_1 = __arpl_memw_gpr16(*(gsbase + &var_4 + (eax_3 << 1) + 0x78), arg4.w)
    *(gsbase + &var_4 + (eax_3 << 1) + 0x78) = temp0_3
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(arg7, &var_4990)
    arg7 = temp0_4
    char ecx
    
    if (temp7_1 == 0xffffffff)
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
        eax_3:1.b *= 2
        ecx = arg3
        eax_3.b = eax_3.b
    else
        uint16_t* esi_5 = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsb(arg2.w, *esi_5, esi_5, eflags)
        arg6.b = arg3
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
    label_498d4e:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
    label_498d52:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        arg8 = arg3
        *eax_3 += eax_3.b
        eax_3.b = *0xf4004988
        eax_3.b ^= *eax_3
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg4) += (eax_3 + 1).b
        *(eax_3 + 2) += arg3
        eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
        eax_3.b ^= *eax_3
        char temp5_1 = *(fsbase + eax_3) ^ eax_3.b
        *(fsbase + eax_3) = temp5_1
        
        if (temp5_1 s>= 0)
            void* eax_9
            eax_9.b = (eax_3 + 1).b * 2
            *eax_9 ^= eax_9.b
            __outsd(arg2.w, *arg4, arg4, eflags)
            int32_t eflags_2
            int16_t temp0_5
            temp0_5, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x73), &var_4)
            *(entry_ebx + 0x73) = temp0_5
            
            if ((eax_9 | 0x53644945) u< 0)
                jump(sub_498dde+0x28)
            
            jump(0x498d94)
        
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        eax_3.b = __in_al_immb(0x8d, eflags)
        ecx = arg3 - 1
        *(eax_3 * 2) += ecx
    
    *eax_3 += eax_3.b
    eax_3:1.b += arg2:1.b
    eax_3.b ^= *eax_3
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg4) += (eax_3 + 1).b
    *(eax_3 + 2) += ecx - 1
    char* eax_13 = (eax_3 + 2) ^ *(eax_3 + 2)
    eax_13.b ^= *eax_13
    char temp8 = *(fsbase + eax_13) ^ eax_13.b
    *(fsbase + eax_13) = temp8
    
    if (temp8 s>= 0)
        return sub_498dde(eax_13, arg2, ecx - 1, &var_4, arg4, arg5) __tailcall
    
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    undefined
}
