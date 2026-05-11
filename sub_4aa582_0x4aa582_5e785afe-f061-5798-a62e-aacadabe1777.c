// ============================================================
// 函数名称: sub_4aa582
// 虚拟地址: 0x4aa582
// WARP GUID: 5e785afe-f061-5798-a62e-aacadabe1777
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_403248, sub_404078, sub_409440, sub_4aa788, sub_40423c, sub_494048, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4aa478, sub_4aa3c5, sub_4aa582, sub_4aa540, sub_4aa410, sub_4aa4dc
// ============================================================

int32_t __convention("regparm")sub_4aa582(char* arg1, int32_t* arg2, int32_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t* arg6 @ edi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    char* eax
    char* entry_ebx
    void* esp_7
    TEB* fsbase
    bool c_2
    
    while (true)
        eax.b = (&arg1[1]).b * 2
        *eax
        *eax ^= eax.b
        *(arg4 + 0x49) = sbb.d(*(arg4 + 0x49), eax, false)
        arg6 -= 1
        void* esp
        *(esp - 4) = entry_ebx
        *(esp - 8) = entry_ebx
        bool cond:0_1 = esp == 9
        *(esp - 0xd) = entry_ebx
        esp -= 0xd
        
        if (cond:0_1)
            *(esp - 4) = esp
            esp_7 = esp - 4
        label_4aa609:
            *arg5 - *arg6
            arg5 += 1
            arg6 += 1
            arg2 -= 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            arg5[0x25].b += arg2.b
            break
        
        *(arg5 + 0x67)
        arg4 = *(arg5 + 0x67) * 0x68706943
        bool c_1 = unimplemented  {imul ebp, dword [esi+0x67], 0x68706943}
        
        if (c_1)
            *(eax + arg5 + 0x40) += eax:1.b
            eax[0x30] += entry_ebx:1.b
        else
            if (c_1)
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
            label_4aa61a:
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *(esp - 4) = esp
                esp_7 = esp - 4
                *arg5 - *arg6
                arg5 += 1
                arg6 += 1
                arg2 -= 1
                break
            
            int32_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (c_1)
                arg6 = *esp
                esi = *(esp + 4)
                entry_ebx = *(esp + 0x10)
                arg2 = *(esp + 0x14)
                arg3 = *(esp + 0x18)
                eax = *(esp + 0x1c)
                esp += 0x20
                *(fsbase + esi + 0x67)
                arg4 = *(fsbase + esi + 0x67) * 0x4579654b
                bool c_5 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x4579654b}
                
                if (not(c_5))
                    arg5 = __outsd(arg2.w, *esi, esi, eflags)
                    
                    if (c_5)
                        *(arg5 + 0x67)
                        bool c_4 = unimplemented  {imul ebp, dword [esi+0x67], 0x74726543}
                        arg4 = *(arg5 + 0x67) * 0x74726543 + 1
                        
                        if (not(c_4))
                            __outsd(arg2.w, *arg5, arg5, eflags)
                            
                            if (c_4)
                                jump(sub_4aa4dc+0x21)
                            
                            jump(&data_4aa4d8:1)
                    else
                        *(arg4 + 0x4a) = eax:1.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                    
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *(arg4 + 0xc004a) = eax:1.b
                    *eax += eax.b
                    void* const eax_28
                    eax_28.b = 0xa1 ^ *0xf4004aa1
                    *entry_ebx += arg2:1.b
                    *(entry_ebx + arg5) += (eax_28 + 1).b
                    *(eax_28 + 2) += arg3.b
                    arg1 = (eax_28 + 2) ^ *(eax_28 + 2)
                    arg1.b ^= *arg1
                    char temp16_1 = *(fsbase + arg1) ^ arg1.b
                    *(fsbase + arg1) = temp16_1
                    
                    if (temp16_1 s>= 0)
                        continue
                    
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
            else
                eax.b <<= 0xa5
                arg2 -= 1
                *eax += eax.b
                *eax += eax.b
            
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            eax.b += arg2:1.b
            *arg6 = *esi
            arg6 = &arg6[1]
            arg5 = &esi[1]
            arg2 -= 1
            *(eax * 2) += arg3.b
            *eax += eax.b
            void* eax_1
            eax_1.b = 0xa1 ^ *0xf4004aa1
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax_1 + 1).b
            *(eax_1 + 2) += arg3.b
            eax = (eax_1 + 2) ^ *(eax_1 + 2)
            eax.b ^= *eax
            char temp15_1 = *(fsbase + eax) ^ eax.b
            *(fsbase + eax) = temp15_1
            
            if (temp15_1 s< 0)
                goto label_4aa61a
        
        void* eax_4
        eax_4.b = (&eax[1]).b * 2
        *eax_4
        *eax_4 ^= eax_4.b
        c_2 = false
        *esp
        *(esp - 2) = entry_ebx
        *(esp - 6) = entry_ebx
        esp_7 = esp - 7
        goto label_4aa5f8
    
    *(eax * 2) += arg3.b
    *eax += eax.b
    void* eax_5
    eax_5.b = 0xa1 ^ *0xf4004aa1
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax_5 + 1).b
    *(eax_5 + 2) += arg3.b
    eax = (eax_5 + 2) ^ *(eax_5 + 2)
    eax.b ^= *eax
    char temp7_1 = *(fsbase + eax) ^ eax.b
    *(fsbase + eax) = temp7_1
    int16_t edx
    
    if (temp7_1 s>= 0)
        eax.b = (&eax[1]).b * 2
        *eax
        *eax ^= eax.b
        char temp10_1 = eax.b
        char temp11_1 = *(arg4 + 0x49)
        eax.b = adc.b(temp10_1, temp11_1, false)
        c_2 = adc.b(temp10_1, temp11_1, false) u< temp10_1
        arg6 -= 1
        *(esp_7 - 4) = entry_ebx
        *(esp_7 - 8) = entry_ebx
        esp_7 -= 9
        int32_t* temp12_1 = arg3
        arg3 += 1
        bool o_1 = add_overflow(temp12_1, 1)
        
        while (true)
            int16_t temp0_1
            temp0_1, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), esp_7.w)
            *(entry_ebx + 0x65) = temp0_1
            
            if (o_1)
                goto label_4aa6d6
            
            arg4 += 1
            
            if (c_2)
                arg3:1.b = 0xa7
                *(arg6 * 9 + 0x30) += eax:1.b
                break
            
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (not(c_2))
                eax:1.b = 0xa6
                edx = arg2.w - 1
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                arg5[0x60025].b += edx:1.b
                goto label_4aa68e
            
        label_4aa5f8:
            bool z_1 = esp_7 == 0xffffffff
            o_1 = add_overflow(esp_7, 1)
            arg6 = *(esp_7 + 1)
            arg5 = *(esp_7 + 5)
            arg4 = *(esp_7 + 9)
            entry_ebx = *(esp_7 + 0x11)
            arg2 = *(esp_7 + 0x15)
            arg3 = *(esp_7 + 0x19)
            eax = *(esp_7 + 0x1d)
            esp_7 += 0x21
            
            if (not(z_1))
                arg2 += 1
                *(arg5 + 0x64)
                arg4 = *(arg5 + 0x64) * 0x45676e69
                c_2 = unimplemented  {imul ebp, dword [esi+0x64], 0x45676e69}
                o_1 = unimplemented  {imul ebp, dword [esi+0x64], 0x45676e69}
                
                if (c_2)
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    goto label_4aa67e
                
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                
                if (not(c_2))
                    goto label_4aa609
        
        goto label_4aa6de
    
    label_4aa67e:
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    eax:1.b = 0xa6
    edx = arg2.w - 1
    *(eax * 2) += arg3.b
    label_4aa68e:
    *eax += eax.b
    void* eax_8
    eax_8.b = 0xa1 ^ *0xf4004aa1
    *entry_ebx += edx:1.b
    *(entry_ebx + arg5) += (eax_8 + 1).b
    *(eax_8 + 2) += arg3.b
    eax = (eax_8 + 2) ^ *(eax_8 + 2)
    eax.b ^= *eax
    char temp14_1 = *(fsbase + eax) ^ eax.b
    *(fsbase + eax) = temp14_1
    
    if (temp14_1 s< 0)
        goto label_4aa6de
    
    void* eax_11
    eax_11.b = (&eax[1]).b * 2
    *eax_11
    *eax_11 ^= eax_11.b
    int32_t temp19_1 = *(arg4 + 0x49)
    int32_t eax_12 = adc.d(eax_11, temp19_1, false)
    bool c_3 = adc.d(eax_11, temp19_1, false) u< eax_11
    *(esp_7 - 4) = entry_ebx
    *(esp_7 - 8) = entry_ebx
    void* esp_14 = esp_7 - 9
    uint16_t* esi_1 = __outsd(edx, *arg5, arg5, eflags)
    uint16_t* esi_2 = __outsb(edx, *esi_1, esi_1, eflags)
    int32_t* esi_3 = __outsb(edx, *esi_2, esi_2, eflags)
    int32_t eflags_1
    int32_t gsbase
    int16_t temp0_2
    temp0_2, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg4 + (eax_12 << 1) + 0x72), esi_3.w)
    *(gsbase + arg4 + (eax_12 << 1) + 0x72) = temp0_2
    
    if (c_3)
        (*(*esi_3 + 0x48))()
    else
        if (not(c_3))
            arg4 = esp_14
            *(esp_14 - 4) = 0
            *(esp_14 - 8) = 0
            *(esp_14 - 0xc) = 0
            *(esp_14 - 0x10) = &entry_ebx[1]
            *(esp_14 - 0x14) = esi_3
            eax = nullptr
            *(esp_14 - 0x18) = arg4
            esp_7 = esp_14 - 0x18
        label_4aa6d6:
            *(esp_7 - 4) = j_sub_4037f0
            *(esp_7 - 8) = *(fsbase + eax)
            esp_7 -= 8
        label_4aa6de:
            *(fsbase + eax) = esp_7
            sub_494048(data_5325e8)
            *(esp_7 - 4) = arg4
            *(esp_7 - 8) = j_sub_4037f0
            *(esp_7 - 0xc) = fsbase->NtTib.ExceptionList
            esp_14 = esp_7 - 0xc
            fsbase->NtTib.ExceptionList = esp_14
            sub_403df8(arg4 - 8)
            void* ebx_1 = *(arg4 + 0x14)
            int32_t* esi_4 = *(ebx_1 + 0x34)
            
            if (sub_403248(esi_4, 0x4a9e20) != 0)
                (*(*esi_4 + 0x64))()
            
            esi_3 = *(ebx_1 + 0x34)
            goto label_4aa72d
        
        void* ebx
        ebx:1.b = (&entry_ebx[1]):1.b
        *(esp_14 - 4) = arg3
        esp_14 -= 4
        esi_3 = *(&fsbase->LastErrorValue + ebx)
    label_4aa72d:
        
        if (sub_403248(esi_3, 0x4a9fcc) != 0)
            (*(*esi_3 + 0x48))()
    
    int32_t eax_22 = sub_404078(*(arg4 - 8))
    sub_4040c4(arg4 - 0xc, *(arg4 - 8), sub_4aa7cb+5)
    char* eax_25 = sub_40423c(*(arg4 - 0xc))
    
    if (add_overflow(eax_22, 1))
        sub_403010()
        noreturn
    
    sub_409440(*(arg4 + 8), eax_25, eax_22 + 1)
    *(arg4 - 4) = eax_22
    *(esp_14 + 8)
    fsbase->NtTib.ExceptionList = *esp_14
    *(esp_14 + 8) = sub_4aa79a
    return sub_4aa788() __tailcall
}
