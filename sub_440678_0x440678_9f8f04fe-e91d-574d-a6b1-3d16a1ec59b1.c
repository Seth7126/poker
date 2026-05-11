// ============================================================
// 函数名称: sub_440678
// 虚拟地址: 0x440678
// WARP GUID: 9f8f04fe-e91d-574d-a6b1-3d16a1ec59b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_440678(char* arg1, void* const arg2, void* arg3, int32_t arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, int80_t arg7 @ st0)
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
    *arg5 = rol.b(*arg5, 0x44)
    *(arg1 * 2) += arg3.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*arg1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1
    int32_t eflags
    void* esp
    
    if (temp1 s< 0)
        *eax_3 += eax_3.b
        arg2 = __return_addr
        void arg_6
        esp = &arg_6
    else
        eax_3.b = (&eax_3[1]).b * 2
        *eax_3 ^= eax_3.b
        *(arg4 + (arg3 << 1) + 0x6f) |= arg2.b
        __outsb(arg2.w, *arg5, arg5, eflags)
        arg5 = *(arg6 + (arg4 << 1) + 0x72) * 0x1800408d
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        eax_3[7] += arg3.b
        eax_3[7] += arg3:1.b
        int16_t arg_4
        esp = &arg_4:1
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *(arg2 + 7) += entry_ebx.b
    
    eax_3[0xc0000000] += entry_ebx.b
    *eax_3
    *entry_ebx += arg2:1.b
    void* eax_4
    eax_4:1.b = (&eax_3[1]):1.b + arg3:1.b
    *(esp + 1)
    void* esp_2 = esp + 5
    char* ecx = arg3 + 1
    *eax_4 += ecx.b
    char* eax_5 = eax_4 ^ *eax_4
    eax_5.b ^= *eax_5
    char temp2 = *(fsbase + eax_5) ^ eax_5.b
    *(fsbase + eax_5) = temp2
    bool c
    
    if (temp2 s< 0)
        ecx = &ecx[1]
        eax_5.b += ecx.b
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        *arg5 += ecx.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *ecx += eax_5.b
        *eax_5 += eax_5.b
        *(eax_5 + arg2 + 0x2c0040) += entry_ebx:1.b
        char temp3_1 = *eax_5
        *eax_5 += eax_5.b
        c = temp3_1 + eax_5.b u< temp3_1
        *(esp_2 + 1)
        esp_2 += 3
    else
        char temp4_1 = (&eax_5[1]).b
        eax_5.b = (&eax_5[1]).b + arg2:1.b
        c = temp4_1 + arg2:1.b u< temp4_1
        
        if (not(add_overflow(temp4_1, arg2:1.b)))
            *eax_5 += eax_5.b
            eax_5.b |= 0x41
            eax_5[0x1c004160] += eax_5:1.b
            
            if ((eax_5 | *ecx) s< 0)
                jump(&data_440784:3)
            
            jump(0x440726)
    
    *(esp_2 - 4) = esp_2
    *(esp_2 - 8) = entry_ebx
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x65), arg5.w)
    *(arg2 + 0x65) = temp0
    uint16_t* gsbase
    int32_t esi_1 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags_1)
    *(esp_2 - 0xc) = 0x7004407
    *(esp_2 - 0xc)
    *(esp_2 - 0xe) = esp_2 - 0xa
    *(esp_2 - 0x12) = entry_ebx
    int32_t eflags_2
    int16_t temp0_1
    temp0_1, eflags_2 = __arpl_memw_gpr16(*(arg2 + 0x65), esi_1.w)
    *(arg2 + 0x65) = temp0_1
    uint16_t* esi_2 = __outsb(arg2.w, *(gsbase + esi_1), esi_1, eflags_2)
    *arg6 = sbb.b(*arg6, eax_5.b, c)
    eax_5[0x20040f8] += entry_ebx:1.b
    *0x6d726f46 += eax_5.b
    eax_5[0x440788] += arg2.b
    int16_t cs
    *(esp_2 - 0x15) = zx.d(cs)
    int32_t temp5 = *(eax_5 + (ecx << 1) + 0x69) | arg2
    *(eax_5 + (ecx << 1) + 0x69) = temp5
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags_2)
    
    if (temp5 != 0)
        uint16_t* esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags_2)
        __outsw(arg2.w, *esi_4, esi_4, eflags_2)
        eax_5[1] += (&eax_5[1]).b
        *ecx += (&eax_5[1]).b
        eax_5[1] += (&eax_5[1]).b
        *(&eax_5[1] + arg2 + 0x380040) += entry_ebx:1.b
        eax_5[1] += (&eax_5[1]).b
        undefined
    
    *(esp_2 - 0x15)
    *eax_5 += ecx.b + 1
    char* eax_9 = eax_5 ^ *eax_5
    eax_9.b ^= *eax_9
    char temp6 = *(fsbase + eax_9) ^ eax_9.b
    *(fsbase + eax_9) = temp6
    
    if (temp6 s< 0)
        jump(&data_440818:2)
    
    jump(0x4407ea)
}
