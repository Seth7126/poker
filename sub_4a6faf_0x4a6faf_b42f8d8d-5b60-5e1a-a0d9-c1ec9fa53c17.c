// ============================================================
// 函数名称: sub_4a6faf
// 虚拟地址: 0x4a6faf
// WARP GUID: b42f8d8d-5b60-5e1a-a0d9-c1ec9fa53c17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a747c, sub_403df8, sub_404080
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a6faf(int32_t* arg1, int32_t* arg2, char* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi)
{
    // 第一条实际指令: *arg2 ^= arg3
    *arg2 ^= arg3
    *arg1
    int32_t* entry_ebx
    entry_ebx:1.b *= 2
    *arg1
    entry_ebx:1.b *= 2
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[-0x20000000].b += arg1.b
    char* eax = arg1 | 0x6e4f0b00
    uint8_t* var_4 = arg6
    int32_t* esp_1 = &var_4
    int32_t eflags
    uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_4
    bool c_1
    
    if (eax u< 0)
        eax = &eax[1]
        eax[0x30] += entry_ebx:1.b
    label_4a703f:
        void* eax_3
        eax_3.b = (&eax[1]).b * 2
        *eax_3
        *eax_3 ^= eax_3.b
        eax = adc.d(eax_3, 0x54644945, false)
        c_1 = adc.d(eax_3, 0x54644945, false) u< eax_3
    else
        arg2 += 1
        int32_t gsbase
        arg4 = *(gsbase + arg4 - 0x20) * 0x40004a31
        *eax += eax.b
        *eax += 1
        entry_ebx:1.b *= 2
        *eax = &eax[*eax]
        *eax += eax.b
        *eax += eax.b
    label_4a6fe6:
        eax[0x80000000] += eax.b
        int16_t cs
        *(esp_1 - 4) = zx.d(cs)
        char temp3_1 = *arg3
        *arg3 += arg3.b
        c_1 = temp3_1 + arg3.b u< temp3_1
        arg6 -= 1
        uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
        *(esp_1 - 8) = arg6
        esp_1 -= 8
        esi = __outsd(arg2.w, *esi_1, esi_1, eflags)
        
        if (c_1)
            *eax += eax.b
            goto label_4a7062
        
        arg4 += 1
        esi = __outsb(arg2.w, *esi, esi, eflags)
        int32_t* temp4_1 = esp_1
        esp_1 += 1
        
        if (not(add_overflow(temp4_1, 1)))
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
            eax[(esi << 1) + 0x4a] += eax.b
            *(eax * 2) += arg3.b
            *eax += eax.b
            eax.b = *0xf4004988
            eax.b ^= *eax
            *entry_ebx += arg2:1.b
            *(entry_ebx + esi) += (&eax[1]).b
            eax[2] += arg3.b
            eax = &eax[2] ^ *(eax + 2)
            eax.b ^= *eax
            TEB* fsbase
            char temp5_1 = *(fsbase + eax) ^ eax.b
            *(fsbase + eax) = temp5_1
            
            if (temp5_1 s>= 0)
                goto label_4a703f
            
            while (true)
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *(eax * 2) += arg3.b
                *eax += eax.b
                esi_4 = __outsd((arg2 - 1).w, *esi, esi, eflags)
                arg2 -= 2
                eax:1.b += arg2:1.b
                eax.b ^= *eax
                *entry_ebx += arg2:1.b
                *(entry_ebx + esi_4) += (&eax[1]).b
                eax[2] += arg3.b
                eax = &eax[2] ^ *(eax + 2)
                eax.b ^= *eax
                char temp6_1 = *(fsbase + eax) ^ eax.b
                *(fsbase + eax) = temp6_1
                void* eax_6
                bool z_1
                bool o_2
                
                if (temp6_1 s< 0)
                label_4a70d2:
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    char temp7_1 = *eax
                    *eax += eax.b
                    arg3[0x4a] = adc.b(arg3[0x4a], arg2:1.b, temp7_1 + eax.b u< temp7_1)
                label_4a70e7:
                    *(eax * 2) += arg3.b
                    *eax += eax.b
                    esi_4 = __outsd(arg2.w, *esi_4, esi_4, eflags)
                    arg2 -= 1
                    eax:1.b += arg2:1.b
                    eax.b ^= *eax
                    *entry_ebx += arg2:1.b
                    eax_6 = &eax[1]
                    *(entry_ebx + esi_4) += eax_6.b
                label_4a70fb:
                    *(eax_6 + 1) += arg3.b
                    eax = (eax_6 + 1) ^ *(eax_6 + 1)
                    eax.b ^= *eax
                    char temp11_1 = *(fsbase + eax) ^ eax.b
                    *(fsbase + eax) = temp11_1
                    
                    if (temp11_1 s< 0)
                        goto label_4a713a
                    
                    eax.b = (&eax[1]).b * 2
                    *eax
                    *eax ^= eax.b
                    c_1 = false
                    *esp_1
                    esp_1 += 2
                label_4a7116:
                    z_1 = eax == 1
                    o_2 = add_overflow(eax, 0xffffffff)
                    int32_t edi = *esp_1
                    uint16_t* esi_7 = esp_1[1]
                    arg4 = esp_1[2]
                    entry_ebx = esp_1[4]
                    arg2 = esp_1[5]
                    arg3 = esp_1[6]
                    eax = esp_1[7]
                    esp_1 = &esp_1[8]
                    esi_4 = __outsb(arg2.w, *esi_7, esi_7, eflags)
                    uint8_t temp0_2
                    temp0_2, arg6 = __insb(edi, arg2.w, eflags)
                    *arg6 = temp0_2
                label_4a711b:
                    
                    if (c_1)
                        goto label_4a716f
                    
                    if (c_1)
                        goto label_4a718f
                    
                    if (o_2)
                        eax[0x30] += entry_ebx:1.b
                    label_4a716f:
                        void* eax_10
                        eax_10.b = (&eax[1]).b * 2
                        char temp15_1 = *eax_10 ^ eax_10.b
                        *eax_10 = temp15_1
                        
                        if (temp15_1 != 0)
                            *(arg3 + 0x64)
                        
                        __outsd(arg2.w, *(esi_4 - 1), esi_4 - 1, eflags)
                        bool cond:2_1 = esp_1 == 0xffffffff
                        *(esp_1 + 1)
                        esi_4 = *(esp_1 + 5)
                        arg4 = *(esp_1 + 9)
                        entry_ebx = *(esp_1 + 0x11)
                        arg2 = *(esp_1 + 0x15)
                        arg3 = *(esp_1 + 0x19)
                        eax = *(esp_1 + 0x1d)
                        esp_1 += 0x21
                        
                        if (not(cond:2_1))
                            *(esp_1 - 4) = esp_1
                            __outsd(arg2.w, *esi_4, esi_4, eflags)
                            *(esp_1 - 8) = arg2
                            *(esp_1 - 8)
                            esi_4 = *(esp_1 - 4)
                            arg4 = *esp_1
                            entry_ebx = esp_1[2]
                            arg2 = esp_1[3]
                            arg3 = esp_1[4]
                            eax = esp_1[5]
                            esp_1 = &esp_1[6]
                            *(fsbase + &arg3[0x4a]) <<= 1
                            goto label_4a7187
                        
                        eax.b -= 0x72
                    label_4a71e2:
                        arg2 -= 1
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                    else
                        esi_4 = __outsb(arg2.w, *esi_4, esi_4, eflags)
                        
                        if (not(z_1) && not(c_1))
                            goto label_4a7125
                        
                        arg2 -= 1
                    label_4a7187:
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                    label_4a718f:
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
                        char temp19_1 = eax.b
                        eax.b += arg2.b
                        
                        if (add_overflow(temp19_1, arg2.b))
                            goto label_4a71a7
                    
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *(arg2 + (esi_4 << 1)) += arg3:1.b
                    goto label_4a7203
                
                eax.b = (&eax[1]).b * 2
                *eax
                *eax ^= eax.b
                *(arg4 + 0x49) = sbb.b(*(arg4 + 0x49), eax.b, false)
                c_1 = unimplemented  {sbb byte [ebp+0x49], al}
                z_1 = esi_4 == 1
                o_2 = add_overflow(esi_4, 0xffffffff)
                esi_4 = __outsd(arg2.w, *(esi_4 - 1), esi_4 - 1, eflags)
                
                if (z_1)
                    eax_6.b = (eax ^ *eax).b + 0x33
                    goto label_4a70fb
                
                uint16_t* esi_6 = __outsb(arg2.w, *esi_4, esi_4, eflags)
                esi_4 = __outsd(arg2.w, *esi_6, esi_6, eflags)
                
                if (not(z_1))
                    goto label_4a711b
                
                *(esp_1 - 4) = 0x61746144
                esp_1 -= 4
                arg3 -= 1
                esi_4 = __outsb(arg2.w, *esi_4, esi_4, eflags)
                int32_t* temp12_1 = arg2
                arg2 += 1
                
                if (temp12_1 != 0xffffffff)
                    arg6 = *esp_1
                    esi_4 = esp_1[1]
                    arg4 = esp_1[2]
                    entry_ebx = esp_1[4]
                    arg2 = esp_1[5]
                    arg3 = esp_1[6]
                    eax = esp_1[7]
                    esp_1 = &esp_1[8]
                label_4a7125:
                    uint8_t* edi_1
                    uint8_t temp0_3
                    temp0_3, edi_1 = __insb(arg6, arg2.w, eflags)
                    *edi_1 = temp0_3
                    esp_1 = *(esp_1 + (esi_4 << 1) + 0x71) * 0x4a
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                label_4a713a:
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    char temp13_1 = *eax
                    *eax += eax.b
                    
                    if (temp13_1 == neg.b(eax.b))
                        goto label_4a71bb
                    
                    arg2 -= 1
                else
                    if (c_1)
                    label_4a704f:
                        int16_t temp0_1
                        temp0_1, eflags =
                            __arpl_memw_gpr16(*(gsbase + arg3 + (arg4 << 1) + 0x6f), esi_4.w)
                        *(gsbase + arg3 + (arg4 << 1) + 0x6f) = temp0_1
                        esi_4 = __outsb(arg2.w, *esi_4, esi_4, eflags)
                        arg4 += 1
                        
                        if (c_1)
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                        else
                            esi = __outsd(arg2.w, *esi_4, esi_4, eflags)
                            
                            if (c_1)
                                break
                            
                            eax[0x4a70] = eax[0x4a70]
                        label_4a7062:
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            continue
                        
                        goto label_4a70d2
                    
                    eax = &eax[1]
                    char temp20_1 = *eax
                    *eax += arg2.b
                    c_1 = temp20_1 + arg2.b u< temp20_1
                    
                    if (not(add_overflow(temp20_1, arg2.b)))
                        goto label_4a7116
                    
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
                    char temp23_1 = *eax
                    *eax += arg2.b
                    
                    if (add_overflow(temp23_1, arg2.b))
                        goto label_4a70e7
                    
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
                    arg3[(esi_4 << 1) + 0x4a] += arg2:1.b
                
                *(eax * 2) += arg3.b
                *eax += eax.b
                esi_4 = __outsd(arg2.w, *esi_4, esi_4, eflags)
                arg2 -= 1
                eax:1.b += arg2:1.b
                eax.b ^= *eax
                *entry_ebx += arg2:1.b
                *(entry_ebx + esi_4) += (&eax[1]).b
                eax[2] += arg3.b
                eax = &eax[2] ^ *(eax + 2)
                eax.b ^= *eax
                char temp22_1 = *(fsbase + eax) ^ eax.b
                *(fsbase + eax) = temp22_1
                
                if (temp22_1 s>= 0)
                    goto label_4a716f
                
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                arg3[0x4a] <<= 1
            label_4a71a7:
                *(eax * 2) += arg3.b
                *eax += eax.b
                esi_4 = __outsd(arg2.w, *esi_4, esi_4, eflags)
                arg2 -= 1
                eax:1.b += arg2:1.b
                eax.b ^= *eax
                *entry_ebx += arg2:1.b
                *(entry_ebx + esi_4) += (&eax[1]).b
                eax = &eax[2]
            label_4a71bb:
                *eax += arg3.b
                eax ^= *eax
                eax.b ^= *eax
                char temp16_1 = *(fsbase + eax) ^ eax.b
                *(fsbase + eax) = temp16_1
                uint16_t* esi_12
                
                if (temp16_1 s< 0)
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    eax.b -= 0x72
                label_4a7203:
                    *(eax * 2) += arg3.b
                    *eax += eax.b
                    esi_12 = __outsd((arg2 - 1).w, *esi_4, esi_4, eflags)
                    arg2 -= 2
                    eax:1.b += arg2:1.b
                    eax.b ^= *eax
                    *entry_ebx += arg2:1.b
                    *(entry_ebx + esi_12) += (&eax[1]).b
                    eax[2] += arg3.b
                    eax = &eax[2] ^ *(eax + 2)
                else
                    eax.b = (&eax[1]).b * 2
                    char temp21_1 = *eax ^ eax.b
                    *eax = temp21_1
                    
                    if (temp21_1 != 0)
                        arg3 = *(arg3 + 0x64)
                    
                    esi_12 = __outsd(arg2.w, *(esi_4 - 1), esi_4 - 1, eflags)
                    
                    if (esi_4 != 1)
                        uint16_t* esi_13 = __outsd(arg2.w, *esi_12, esi_12, eflags)
                        uint16_t* esi_14 = __outsb(arg2.w, *esi_13, esi_13, eflags)
                        esi_4 = __outsb(arg2.w, *esi_14, esi_14, eflags)
                        int16_t temp0_4
                        temp0_4, eflags = __arpl_memw_gpr16(*(gsbase + arg4 + 0x64), esi_4.w)
                        *(gsbase + arg4 + 0x64) = temp0_4
                        eax.b -= 0x72
                        goto label_4a71e2
                    
                    eax:1.b += entry_ebx:1.b
                
                eax.b ^= *eax
                char temp25 = *(fsbase + eax) ^ eax.b
                *(fsbase + eax) = temp25
                
                if (temp25 s< 0)
                    goto label_4a7256
                
                void* eax_14
                eax_14.b = (&eax[1]).b * 2
                char temp26_1 = *eax_14 ^ eax_14.b
                *eax_14 = temp26_1
                
                if (temp26_1 != 0)
                    arg3 = *(arg3 + 0x64)
                
                if (esi_12 != 0xffffffff)
                    *(entry_ebx + 0x88bfc45) = ror.b(*(entry_ebx + 0x88bfc45), arg3.b)
                else
                    *(esp_1 - 4) = *(arg4 + 0x4e) * 0x6f46746f
                    arg4 = esp_1 - 4
                    esp_1[-4] = entry_ebx
                    esp_1[-5] = esi_12 + 1
                    *(arg4 - 8) = 0
                    entry_ebx = arg2
                    *(arg4 - 4) = eax_14
                    eax = nullptr
                    esp_1[-6] = arg4
                    esp_1[-7] = j_sub_4037f0
                    esp_1 = &esp_1[-7]
                label_4a7256:
                    *(esp_1 - 4) = *(fsbase + eax)
                    *(fsbase + eax) = esp_1 - 4
                    (*(**(arg4 - 4) + 0x30))()
                    *(esp_1 - 4) = arg4
                    *(esp_1 - 8) = j_sub_4037f0
                    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = esp_1 - 0xc
                    sub_403df8(entry_ebx)
                    
                    while ((*(**(arg4 - 4) + 0x54))() != 0)
                        sub_4a747c(*(arg4 - 4), arg4 - 8)
                        sub_404080(entry_ebx, *(arg4 - 8))
                    
                    fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
                    *(esp_1 - 4) = sub_4a72bf
                    arg3 = **(arg4 - 4)
                
                return (*(arg3 + 0x38))()
            
            goto label_4a6fe6
        
        arg4 += 1
        arg3 -= 1
        *(esp_1 - 4) = esp_1
        esp_1 -= 4
    *(esp_1 - 4) = eax
    esp_1 -= 4
    entry_ebx += 2
    uint16_t* esi_2 = __outsd(arg2.w, *esi, esi, eflags)
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
    esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags)
    goto label_4a704f
}
