// ============================================================
// 函数名称: sub_49fb84
// 虚拟地址: 0x49fb84
// WARP GUID: dcbb0e81-57a3-52b3-9327-ef219f387cba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_49fd80, sub_404078
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_49fb84(char* arg1, void* arg2, int32_t arg3, char* arg4 @ esi, char* arg5 @ edi, char arg6, char arg7)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    entry_ebx.b s>>= 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    (&__return_addr)[arg5 * 2].b += arg1.b
    (&__return_addr)[arg5 * 2].b += (arg3 - 2):1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg4 += arg2.b
    *(arg1 * 2) += (arg3 - 4):1.b
    *arg1 += arg1.b
    arg1.b &= 0xf9
    arg6 += arg2.b
    void* eax
    eax:1.b = (&arg1[1]):1.b + (arg3 - 5):1.b
    void* const __return_addr_1 = __return_addr
    uint32_t __return_addr_4
    int32_t* esp_1 = &__return_addr_4
    void* ecx_5 = arg3 - 4
    *eax += ecx_5.b
    char* eax_1 = eax ^ *eax
    eax_1.b ^= *eax_1
    TEB* fsbase
    char temp2 = *(fsbase + eax_1) ^ eax_1.b
    *(fsbase + eax_1) = temp2
    
    if (temp2 s< 0)
        goto label_49fbfb
    
    *(__return_addr_1 + (entry_ebx << 1) + 0x41) += (&eax_1[1]):1.b
    eax_1[1] += (&eax_1[1]).b
    void* eax_2
    eax_2.b = (&eax_1[1]).b | 0x41
    *(eax_2 + 0x1c004160) += eax_2:1.b
    eax_1 = eax_2 | *ecx_5
    
    if (eax_1 s< 0)
        goto label_49fc3f
    
    eax_1[0x41] += eax_1.b
    *(ecx_5 + 0x627c0042) += eax_1.b
    arg7 += (ecx_5 + 2):1.b
    ecx_5 += 3
    *(ecx_5 + 0x64b40041) += ecx_5.b
    label_49fbfb:
    *eax_1 += entry_ebx.b
    uint32_t __return_addr_5 = __return_addr_4
    eax_1:1.b += eax_1.b
    *(ecx_5 + 2) -= 1
    int16_t __return_addr_2
    __return_addr_4 = zx.d(__return_addr_2)
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *(ecx_5 + 2) += eax_1.b
    *eax_1 += eax_1.b
    *(eax_1 + arg2 + 0x240040) += entry_ebx:1.b
    char temp3_1 = *eax_1
    *eax_1 += eax_1.b
    bool c_1 = temp3_1 + eax_1.b u< temp3_1
    __return_addr = zx.d(__return_addr_2)
    void* const* var_4 = &__return_addr
    esp_1 = &var_4
    void* ecx_10 = ecx_5 + 1
    int32_t eflags
    arg4 = __outsb(arg2.w, *arg4, arg4, eflags)
    int32_t eflags_1
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg5 + 0x64), (__return_addr_5 + 1).w)
    *(arg5 + 0x64) = temp0_1
    char* gsbase
    
    if (c_1)
        *eax_1 = adc.b(*eax_1, eax_1.b, c_1)
        eax_1.b = 0
    label_49fc5a:
        entry_ebx:1.b *= 2
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = &eax_1[*eax_1]
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        eax_1[0x80000000] += eax_1.b
    label_49fc6c:
        eax_1.b += *eax_1
        void* eax_3 = eax_1 | *(entry_ebx + 0x6f)
        *(fsbase + arg4 + 0x67)
        *(gsbase + eax_3) -= arg2.b
        *(eax_3 + 1) += ecx_10:1.b
        *(eax_3 + 1) += (eax_3 + 1).b
        undefined
    
    if (__return_addr_5 == 0xffffffff)
        *eax_1 += ecx_10.b
        arg4 = &arg4[1]
        void arg_3f
        *(&arg_3f + ((__return_addr_5 + 1) << 1))
        eax_1 = &eax_1[1]
    label_49fc9f:
        eax_1:1.b += ecx_10:1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *((arg5 << 3) + 0x49) += arg2:1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        ecx_10:1.b = (ecx_10 - 1):1.b & entry_ebx:1.b
    else
        eax_1.b ^= 0x8d
        eax_1 = &eax_1[1]
        (&var_4)[arg5 * 2].b += ecx_10:1.b
        char temp7_1 = *arg5
        *arg5 += eax_1.b
        uint32_t __return_addr_3 = zx.d(__return_addr_2)
        uint32_t* var_c = &__return_addr_3
        esp_1 = &var_c
        ecx_10 -= 2
        arg4 = __outsb(arg2.w, *arg4, arg4, eflags_1)
        int32_t eflags_2
        int16_t temp0_2
        temp0_2, eflags_2 = __arpl_memw_gpr16(*(arg5 + 0x64), (__return_addr_5 + 1).w + 1)
        *(arg5 + 0x64) = temp0_2
        
        if (temp7_1 + eax_1.b u< temp7_1)
            goto label_49fc6c
        
        if (__return_addr_5 == 0xfffffffe)
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            eax_1.b ^= 0xfd
            ecx_10 -= 1
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1:1.b
        else
            eax_1.b ^= 0xd0
            eflags = __sti(eflags_2)
            ecx_5 = ecx_10 - 1
        label_49fc3f:
            eax_1[0x40049f9] += arg2:1.b
            char temp5_1 = *entry_ebx
            *entry_ebx += ecx_5.b
            ecx_10 = ecx_5 - 1
            char* temp6_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (temp5_1 + ecx_5.b u< temp5_1)
                *eax_1 -= eax_1.b
                entry_ebx:1.b *= 2
                *eax_1 = &eax_1[*eax_1]
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                eax_1[0x80000000] += eax_1.b
                eax_1 = &eax_1[*eax_1]
                arg4[0x69] |= eax_1.b
                uint8_t* edi
                uint8_t temp0_3
                temp0_3, edi = __insb(arg5, arg2.w, eflags)
                *edi = temp0_3
                uint8_t temp0_4
                temp0_4, arg5 = __insb(edi, arg2.w, eflags)
                *arg5 = temp0_4
                entry_ebx = &entry_ebx[1]
                *(esp_1 - 4) = 0x408d7261
                esp_1 -= 4
                goto label_49fc9f
            
            if (temp6_1 != 0xffffffff)
                eax_1.b ^= 2
                *(eax_1 + arg2 + 0x240040) += entry_ebx:1.b
                goto label_49fc5a
            
            ecx_10:1.b &= entry_ebx:1.b
    
    *(eax_1 * 2 - 0x62c0000) += eax_1:1.b
    *(esp_1 + 0x33000041) += arg2.b
    void* eax_5
    eax_5:1.b = (&eax_1[1]):1.b + (ecx_10 - 2):1.b
    int32_t ebp_4 = *esp_1
    void* esp_2 = &esp_1[1]
    void* ecx_14 = ecx_10 - 1
    *eax_5 += ecx_14.b
    char* result = eax_5 ^ *eax_5
    result.b ^= *result
    char temp9 = *(fsbase + result) ^ result.b
    *(fsbase + result) = temp9
    
    if (temp9 s< 0)
        goto label_49fd17
    
    *(ebp_4 + (entry_ebx << 1) + 0x41) += (&result[1]):1.b
    result[1] += (&result[1]).b
    void* eax_6
    eax_6.b = (&result[1]).b | 0x41
    *(eax_6 + 0x1c004160) += eax_6:1.b
    result = eax_6 | *ecx_14
    
    if (result s< 0)
        goto label_49fd5b
    
    result[0x41] += result.b
    *(ecx_14 + 0x627c0042) += result.b
    *(esp_2 + 0x61940041) += (ecx_14 + 2):1.b
    ecx_14 += 3
    *(ecx_14 + 0x64b40041) += ecx_14.b
    label_49fd17:
    *result += entry_ebx.b
    ebp_4 = *esp_2
    result.b += arg2.b
    char temp10_1 = *arg4
    *arg4 += (ecx_14 + 1).b
    *esp_2 = esp_2 + 4
    void* esp_4 = esp_2
    esp_2 = esp_4 + 1
    int32_t eflags_3
    int16_t temp0_5
    temp0_5, eflags_3 = __arpl_memw_gpr16(*(gsbase + arg5 + 0x64), ebp_4.w)
    *(gsbase + arg5 + 0x64) = temp0_5
    
    if (temp10_1 + (ecx_14 + 1).b u>= temp10_1)
        char ecx_25
        char* edx_2
        void* esp_9
        bool o_1
        
        if (esp_4 == 0xffffffff)
            char temp1_1 = mods.dp.b(result.w, entry_ebx:1.b)
            result.b = divs.dp.b(result.w, entry_ebx:1.b)
            result:1.b = temp1_1
        label_49fd9f:
            edx_2 = result
            
            if (edx_2 s<= 0)
                goto label_49fdc8
            
            result = 1
            char* i
            
            do
                int32_t ecx_23
                ecx_23.b = *(entry_ebx + result - 1)
                *(esp_2 - 4) = &arg4[ecx_23 - 1]
                esp_9 = esp_2 - 4
                ecx_25 = result.b - 1
                o_1 = add_overflow(result, 0xffffffff)
            label_49fdba:
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                esp_2 = esp_9 + 4
                **esp_9 = ecx_25
                result = &result[1]
                i = edx_2
                edx_2 -= 1
            while (i != 1)
            goto label_49fdc8
        
        arg2 ^= *(result + 0x49fd34)
        *esp_2
        *(esp_2 - 2) = zx.d(__return_addr_2)
        *(esp_2 - 6) = esp_2 - 2
        void* esp_7 = esp_2 - 6
        ecx_14 -= 1
        esp_2 = esp_7 + 1
        o_1 = add_overflow(esp_7, 1)
        int32_t eflags_4
        int16_t temp0_6
        temp0_6, eflags_4 = __arpl_memw_gpr16(*(gsbase + arg5 + 0x64), ebp_4.w)
        *(gsbase + arg5 + 0x64) = temp0_6
        
        if (arg2 u< 0)
            *result += ecx_14.b
            *(esp_2 + (ebp_4 << 1) + 0x43)
            return sub_49fd80(ecx_14, arg2) __tailcall
        
        if (esp_7 == 0xffffffff)
            *(esp_2 - 4) = zx.d(__return_addr_2)
            result, edx_2, ecx_25 = (*(ecx_14 - 0x75))()
            esp_9 = esp_2
            unimplemented  {enter 0xe983, 0x1}
            goto label_49fdba
        
        ebp_4 ^= esp_2
        result[0xfffffffa] += result:1.b
        *entry_ebx += result.b
        char temp14_1 = *entry_ebx
        *entry_ebx += (ecx_14 - 2).b
        bool c_5 = temp14_1 + (ecx_14 - 2).b u< temp14_1
        ecx_14 -= 3
        char* temp15_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        arg4 = __outsd(arg2.w, *arg4, arg4, eflags_4)
        
        if (c_5)
            int32_t i_2 = 0x7f
            char* edx_1 = arg4
            int32_t i_1
            
            do
                *edx_1 = 0xff
                edx_1 = &edx_1[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            result = sub_404078(entry_ebx)
            goto label_49fd9f
        
        if (temp15_1 == 0xffffffff)
        label_49fdc8:
            *esp_2
            *(esp_2 + 4)
            *(esp_2 + 8)
            *(esp_2 + 0xc)
            return result
        
        result.b ^= 1
    label_49fd5b:
        char temp12_1 = *result
        *result += ecx_14:1.b
        *result = adc.b(*result, result.b, temp12_1 + ecx_14:1.b u< temp12_1)
    
    *0xa3ff0000 = result
    *result += result.b
    *ecx_14 += 1
    *result += result.b
    *result += result.b
    *result += result.b
    *result = *result
    result[0x46080002] += result.b
    *(esp_2 + (ebp_4 << 1) + 0x43)
    return sub_49fd80(ecx_14, arg2) __tailcall
}
