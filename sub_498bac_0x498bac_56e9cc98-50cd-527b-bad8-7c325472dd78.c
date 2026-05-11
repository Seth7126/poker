// ============================================================
// 函数名称: sub_498bac
// 虚拟地址: 0x498bac
// WARP GUID: 56e9cc98-50cd-527b-bad8-7c325472dd78
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_498bac(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi)
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
    char* ecx = *arg3
    *arg1 = adc.b(*arg1, arg1.b, false)
    *arg1 += arg1.b
    arg1.b = *0xf4004988
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += ecx.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    char* var_8
    char* var_4
    int32_t eflags
    void* eax_3
    char** esp_1
    bool c
    bool s_1
    bool o_1
    
    if (temp1 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        char temp2_1 = *eax_2
        *eax_2 += eax_2.b
        var_4 = eax_2
        var_8 = ecx
        char* var_c_1 = arg2
        char* var_10 = entry_ebx
        char** var_14_1 = &var_10
        void* var_18_1 = arg4
        uint16_t* var_1c_1 = arg5
        uint8_t* var_20 = arg6
        esp_1 = &var_20
        int16_t cs
        *ecx = cs
        *eax_2 = adc.b(*eax_2, eax_2.b, temp2_1 + eax_2.b u< temp2_1)
        *eax_2 += eax_2.b
        ecx -= 1
        eax_2:1.b += arg2:1.b
        eax_2.b ^= *eax_2
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&eax_2[1]).b
        eax_2[2] += ecx.b
        eax_3 = &eax_2[2] ^ *(eax_2 + 2)
        eax_3.b ^= *eax_3
        char temp3_1 = *(fsbase + eax_3) ^ eax_3.b
        *(fsbase + eax_3) = temp3_1
        
        if (temp3_1 s< 0)
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
            void* var_24 = arg4
            arg4 = &var_24
            void var_49b0
            esp_1 = &var_49b0
            eax_3.b = eax_3.b
            *eax_3 += eax_3.b
            eax_3.b = *0xf4004988
            eax_3.b ^= *eax_3
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax_3 + 1).b
            *(eax_3 + 2) += ecx.b
            eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
            eax_3.b ^= *eax_3
            char temp6_1 = *(fsbase + eax_3) ^ eax_3.b
            *(fsbase + eax_3) = temp6_1
            
            if (temp6_1 s< 0)
                goto label_498cf2
            
            goto label_498cc3
        
    label_498c57:
        eax_3.b = (eax_3 + 1).b * 2
        *eax_3
        *eax_3 ^= eax_3.b
        char temp8_1 = *(ecx * 3 + 0x49451800)
        *(ecx * 3 + 0x49451800) = adc.b(temp8_1, 0x64, false)
        c = adc.b(temp8_1, 0x64, false) u< temp8_1
        *(esp_1 - 4) = entry_ebx
        *(esp_1 - 8) = entry_ebx
        esp_1 -= 8
        bool z_2
        
        while (true)
            z_2 = esp_1 == 1
            s_1 = esp_1 - 1 s< 0
            o_1 = add_overflow(esp_1, 0xffffffff)
            *(esp_1 - 5) = eax_3
            esp_1 -= 5
            
            if (not(c))
                break
            
            if (not(z_2))
                goto label_498cdb
        
        if (not(z_2))
            int16_t temp0_2
            temp0_2, eflags = __arpl_memw_gpr16(*(arg6 + 0x6c), arg4.w)
            *(arg6 + 0x6c) = temp0_2
            goto label_498c6f
        
    label_498cdb:
        *eax_3 u>>= 0x8d
        ecx -= 1
    label_498cdf:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
    label_498ce9:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += ecx:1.b
        eax_3.b = eax_3.b
        goto label_498d02
    
    eax_3.b = (&eax_2[1]).b * 2
    *eax_3
    *eax_3 ^= eax_3.b
    char temp5_1 = *(ecx * 3 + 0x49451500)
    *(ecx * 3 + 0x49451500) = adc.b(temp5_1, 0x64, false)
    c = adc.b(temp5_1, 0x64, false) u< temp5_1
    s_1 = adc.b(temp5_1, 0x64, false) s< 0
    o_1 = unimplemented  {adc byte [ecx+ecx*2+0x49451500], 0x64}
    var_4 = eax_3
    esp_1 = &var_4
    
    if (not(c))
        if (adc.b(temp5_1, 0x64, false) == 0)
            goto label_498c70
        
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg6 + 0x6c), arg4.w)
        *(arg6 + 0x6c) = temp0_1
        var_8 = arg2
        esp_1 = &var_8
        
        if (not(o_1))
            if (s_1)
                if (c)
                    jump(&data_498c7c:2)
                
                jump(0x498c0c)
            
            *(eax_3 + arg5 + 0x40) += eax_3:1.b
            *(eax_3 + 0x30) += entry_ebx:1.b
            goto label_498c57
        
        arg4 += 1
    label_498c75:
        
        if (c)
            goto label_498ce9
        
        __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (c)
            jump(0x498c07)
        
        jump(0x498c7a)
    
    uint8_t temp0_3
    temp0_3, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_3
    label_498c6f:
    *(esp_1 - 4) = arg2
    esp_1 -= 4
    label_498c70:
    
    if (o_1)
        goto label_498cdf
    
    if (s_1)
        goto label_498c75
    
    eax_3 += 1
    *(eax_3 + arg5 + 0x40) += eax_3:1.b
    *(eax_3 + 0x30) += entry_ebx:1.b
    label_498cc3:
    char* eax_8
    eax_8.b = (eax_3 + 1).b * 2
    *eax_8
    *eax_8 ^= eax_8.b
    *(arg4 + 0x49) = adc.d(*(arg4 + 0x49), eax_8, false)
    char* temp10_1 = entry_ebx
    entry_ebx = &entry_ebx[1]
    uint16_t* esi_1 = __outsd(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    int32_t esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
    uint16_t* gsbase
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(gsbase + esp_1 + (arg2 << 1) + 0x69), esi_3.w)
    *(gsbase + esp_1 + (arg2 << 1) + 0x69) = temp0_4
    int16_t temp0_5
    temp0_5, arg6 = __insd(arg6, arg2.w, eflags)
    *arg6 = temp0_5
    arg5 = __outsd(arg2.w, *(gsbase + esi_3), esi_3, eflags)
    
    if (temp10_1 != 0xffffffff)
        goto label_498d4e
    
    eax_3 = eax_8
    *(arg4 + 0x49) -= ecx.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    label_498cf2:
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *(arg4 + 0xc0049) -= ecx.b
    label_498d02:
    *eax_3 += eax_3.b
    eax_3.b = *0xf4004988
    eax_3.b ^= *eax_3
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax_3 + 1).b
    *(eax_3 + 2) += ecx.b
    eax_8 = (eax_3 + 2) ^ *(eax_3 + 2)
    eax_8.b ^= *eax_8
    char temp12_1 = *(fsbase + eax_8) ^ eax_8.b
    *(fsbase + eax_8) = temp12_1
    
    if (temp12_1 s< 0)
        goto label_498d52
    
    void* eax_11
    eax_11.b = (&eax_8[1]).b * 2
    *eax_11
    *eax_11 ^= eax_11.b
    eax_8 = adc.d(eax_11, *(arg4 + 0x49), false)
    char* temp15_1 = entry_ebx
    entry_ebx = &entry_ebx[1]
    uint16_t* esi_4 = __outsd(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
    arg5 = __outsb(arg2.w, *esi_5, esi_5, eflags)
    int32_t eflags_1
    int16_t temp0_6
    temp0_6, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg4 + (eax_8 << 1) + 0x78), arg5.w)
    *(gsbase + arg4 + (eax_8 << 1) + 0x78) = temp0_6
    int16_t temp0_7
    temp0_7, eflags = __arpl_memw_gpr16(*(arg4 + 0x70), esp_1.w)
    *(arg4 + 0x70) = temp0_7
    char* ecx_1
    
    if (temp15_1 == 0xffffffff)
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        eax_8:1.b *= 2
        ecx_1 = ecx
        eax_8.b = eax_8.b
    else
        uint16_t* esi_6 = __outsd(arg2.w, *arg5, arg5, eflags)
        arg5 = __outsb(arg2.w, *esi_6, esi_6, eflags)
        *(arg4 + 0x49) = ecx.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
    label_498d4e:
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
    label_498d52:
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *(arg4 + 0xc0049) = ecx.b
        *eax_8 += eax_8.b
        eax_8.b = *0xf4004988
        eax_8.b ^= *eax_8
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&eax_8[1]).b
        eax_8[2] += ecx.b
        eax_8 = &eax_8[2] ^ *(eax_8 + 2)
        eax_8.b ^= *eax_8
        char temp13_1 = *(fsbase + eax_8) ^ eax_8.b
        *(fsbase + eax_8) = temp13_1
        
        if (temp13_1 s>= 0)
            void* eax_14
            eax_14.b = (&eax_8[1]).b * 2
            *eax_14 ^= eax_14.b
            __outsd(arg2.w, *arg5, arg5, eflags)
            int32_t eflags_2
            int16_t temp0_8
            temp0_8, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
            *(entry_ebx + 0x73) = temp0_8
            
            if ((eax_14 | 0x53644945) u< 0)
                jump(sub_498dde+0x28)
            
            jump(0x498d94)
        
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        eax_8.b = __in_al_immb(0x8d, eflags)
        ecx_1 = ecx - 1
        *(eax_8 * 2) += ecx_1.b
    
    *eax_8 += eax_8.b
    eax_8:1.b += arg2:1.b
    eax_8.b ^= *eax_8
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&eax_8[1]).b
    eax_8[2] += (ecx_1 - 1).b
    char* eax_18 = &eax_8[2] ^ *(eax_8 + 2)
    eax_18.b ^= *eax_18
    char temp16 = *(fsbase + eax_18) ^ eax_18.b
    *(fsbase + eax_18) = temp16
    
    if (temp16 s>= 0)
        return sub_498dde(eax_18, arg2, ecx_1 - 1, arg4, arg5, arg6) __tailcall
    
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    undefined
}
