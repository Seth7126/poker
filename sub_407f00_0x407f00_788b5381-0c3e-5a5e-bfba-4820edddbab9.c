// ============================================================
// 函数名称: sub_407f00
// 虚拟地址: 0x407f00
// WARP GUID: 788b5381-0c3e-5a5e-bfba-4820edddbab9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_407f00(char* arg1, uint16_t* arg2, uint16_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi, long double arg7 @ st0) __noreturn
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
    void* eax = arg1 - 1
    char* eax_4
    TEB* fsbase
    
    if (arg1 s<= 1)
        *eax += arg2.b
        *eax += eax.b
        arg5[&arg6[0x197a0020]].b += eax:1.b
        *(eax + 1) += (eax + 1).b
        void* eax_2
        eax_2.b = ((eax + 1) ^ *(eax + 1)).b + 0x33
        *(eax_2 + 1) += arg3.b
        eax_4 = (eax_2 + 1) ^ *(eax_2 + 1)
        eax_4.b ^= *eax_4
        char temp2_1 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp2_1
        
        if (temp2_1 s< 0)
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            eax = &eax_4[1]
            *eax += arg2.b
            goto label_407f81
        
        goto label_407f43
    
    while (true)
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
        *(eax + 0x1000407f) += arg3:1.b
    label_407f81:
        *eax += eax.b
        arg5[&arg6[0x197a0020]].b += eax:1.b
        *(eax + 1) += (eax + 1).b
        void* eax_6
        eax_6.b = ((eax + 1) ^ *(eax + 1)).b + 0x33
        *(eax_6 + 1) += arg3.b
        eax = (eax_6 + 1) ^ *(eax_6 + 1)
        eax.b ^= *eax
        char temp3_1 = *(fsbase + eax) ^ eax.b
        *(fsbase + eax) = temp3_1
        
        if (temp3_1 s< 0)
            break
        
        char* eax_8
        eax_8.b = (eax + 1).b * 2
        *eax_8 ^= eax_8.b
        int32_t temp8_1 = *(arg4 + 0x49) | eax_8
        *(arg4 + 0x49) = temp8_1
        int32_t eflags
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        void* eax_12
        char* entry_ebx
        int32_t* esp
        
        if (temp8_1 == 0)
            *(eax_8 + arg5 + 0x40) += eax_8:1.b
            eax_8[0x30] += entry_ebx:1.b
        label_407ffb:
            void* eax_11
            eax_11.b = (&eax_8[1]).b * 2
            *eax_11 ^= eax_11.b
            uint16_t* esi = *(arg5 + 0x42) * 0x72655a79
            arg5 = __outsd(arg2.w, *esi, esi, eflags)
            eax = *esp
            esp = &esp[1]
            *eax = *eax
            *eax += eax.b
            *eax += eax.b
        label_408015:
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
        label_40801f:
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *(eax - 0x80) += entry_ebx.b
            eax_12 = eax + 1
            *eax_12 += arg2.b
        else
            if (temp8_1 u< 0)
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
            else
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                
                if (temp8_1 u< 0)
                    eax_4 = &eax_8[1]
                    eax_4[0x30] += entry_ebx:1.b
                label_407f43:
                    eax.b = (&eax_4[1]).b * 2
                    *eax
                    *eax ^= eax.b
                    char temp5_1 = eax.b
                    char temp6_1 = *(arg4 + 0x45)
                    eax.b = adc.b(temp5_1, temp6_1, false)
                    
                    if (adc.b(temp5_1, temp6_1, false) s< 0)
                        goto label_407fc1
                    
                    if (adc.b(temp5_1, temp6_1, false) u< temp5_1)
                        goto label_407fbe
                    
                    int32_t edi = *esp
                    arg5 = esp[1]
                    void* ebp = esp[2]
                    entry_ebx = esp[4]
                    arg2 = esp[5]
                    arg3 = esp[6]
                    eax = esp[7]
                    esp = &esp[8]
                    uint8_t temp0_1
                    temp0_1, arg6 = __insb(edi, arg2.w, eflags)
                    *arg6 = temp0_1
                    arg4 = ebp + 1
                    
                    if (ebp + 1 s< 0)
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                    label_407fbe:
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                    else if (not(add_overflow(ebp, 1)))
                        arg4 = *(arg6 + 0x6e) * 0x407fa890
                        continue
                    
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                label_407fd2:
                    *eax += eax.b
                    *(eax + 0x100040) += eax.b
                    char temp7_1 = *eax
                    *eax += eax.b
                    esp = *esp
                    
                    if (temp7_1 s> neg.b(eax.b))
                        goto label_40801f
                    
                    goto label_407fdf
                
                *eax_8 = rol.b(*eax_8, 0x80)
                eax = &eax_8[1]
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
            label_407fc1:
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
                *eax += 0x10
                *eax += eax.b
                *(arg6 * 3 + 0x40) += entry_ebx.b
            label_407fdf:
                eax:1.b += arg2:1.b
                eax.b ^= *eax
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (eax + 1).b
                *(eax + 2) += arg3.b
                eax_8 = (eax + 2) ^ *(eax + 2)
                eax_8.b ^= *eax_8
                char temp9_1 = *(fsbase + eax_8) ^ eax_8.b
                *(fsbase + eax_8) = temp9_1
                
                if (temp9_1 s>= 0)
                    goto label_407ffb
            
            *eax_8 += eax_8.b
            eax_12 = *esp
            esp = &esp[1]
            *eax_12 += 0x10
        
        *eax_12 += eax_12.b
        *(arg6 * 3 + 0x40) += entry_ebx.b
        eax_12:1.b += arg2:1.b
        eax_12.b ^= *eax_12
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (eax_12 + 1).b
        *(eax_12 + 2) += arg3.b
        eax = (eax_12 + 2) ^ *(eax_12 + 2)
        eax.b ^= *eax
        char temp11_1 = *(fsbase + eax) ^ eax.b
        *(fsbase + eax) = temp11_1
        
        if (temp11_1 s< 0)
            *eax += eax.b
            eax.b = 0x80
            eax += 1
            *eax += arg2.b
            goto label_408089
        
        while (true)
            void* eax_15
            eax_15.b = (eax + 1).b * 2
            *eax_15 ^= eax_15.b
            int32_t eax_16 = eax_15 | *(arg4 + 0x52)
            arg6 = *esp
            uint16_t* esi_1 = esp[1]
            void* ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            arg5 = __outsb(arg2.w, *esi_1, esi_1, eflags)
            arg4 = ebp_1 + 1
            void* eax_25
            bool c_2
            bool z_2
            
            if (eax_16 u< 0)
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
            label_4080da:
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                eax.b |= 0x81
            label_4080e3:
                *(eax + 1) += arg2.b
                *(eax + 1) += (eax + 1).b
                arg5[&arg6[0x197a0020]].b += (eax + 1):1.b
                *(eax + 2) += (eax + 2).b
                void* eax_22
                eax_22.b = ((eax + 2) ^ *(eax + 2)).b + 0x33
                *(eax_22 + 1) += arg3.b
                eax = (eax_22 + 1) ^ *(eax_22 + 1)
                eax.b ^= *eax
                char temp15_1 = *(fsbase + eax) ^ eax.b
                *(fsbase + eax) = temp15_1
                
                if (temp15_1 s< 0)
                label_408136:
                    *eax += eax.b
                    *(fsbase + eax) += 0x10
                    *(eax + 0x32f40040) = rol.b(*(eax + 0x32f40040), 0x40)
                    *eax += eax.b
                    eax_25.b = (eax ^ *eax).b + 0x33
                    goto label_40814f
                
                void* eax_24
                eax_24.b = (eax + 1).b * 2
                *eax_24 ^= eax_24.b
                char temp18_1 = eax_24.b
                eax_24.b |= *(arg4 + 0x4d)
                c_2 = false
                z_2 = (temp18_1 | *(arg4 + 0x4d)) == 0
                goto label_40810f
            
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (eax_16 u< 0)
                break
            
            *eax = *eax
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
            *(eax + 0x10004080) += arg2:1.b
        label_408089:
            *eax += eax.b
            *(arg6 * 3 + 0x40) += entry_ebx.b
            eax:1.b += arg2:1.b
            eax.b ^= *eax
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax + 1).b
            *(eax + 2) += arg3.b
            eax = (eax + 2) ^ *(eax + 2)
            eax.b ^= *eax
            char temp12_1 = *(fsbase + eax) ^ eax.b
            *(fsbase + eax) = temp12_1
            bool cond:9_1 = temp12_1 s< 0
        label_4080a8:
            
            if (cond:9_1)
                goto label_4080da
            
            eax.b = (eax + 1).b * 2
            *eax ^= eax.b
            eax.b |= 0x45
            uint16_t* temp14_1 = arg3
            arg3 -= 1
            bool z_1 = temp14_1 == 1
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (z_1)
                *eax ^= eax.b
                *eax <<= 0x40
                char temp16_1 = *arg2
                *arg2 += arg3.b
                c_2 = temp16_1 + arg3.b u< temp16_1
                z_2 = arg4 == 0
            label_40810f:
                arg6 = *esp
                arg5 = esp[1]
                arg4 = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp = &esp[8]
                void* eax_27
                
                if (z_2)
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
                label_40818e:
                    *eax += eax.b
                    esp = 0x10004081
                    *eax += eax.b
                    eax.b *= 2
                    *eax -= 0xc
                    eax.b ^= *eax
                    *entry_ebx += arg2:1.b
                    eax_27 = eax + 1
                    *(entry_ebx + arg5) += eax_27.b
                else
                    void* temp21_1 = arg4
                    arg4 += 1
                    cond:9_1 = temp21_1 + 1 s< 0
                    
                    if (not(c_2))
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        
                        if (c_2)
                            goto label_4080a8
                        
                        *(fsbase + eax) = *(fsbase + eax)
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
                        goto label_408136
                    
                label_408187:
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    arg3[eax * 2 + 0x80020].b += entry_ebx:1.b
                    *eax += eax.b
                    *(eax + 0x32f40040) = rol.b(*(eax + 0x32f40040), 0x40)
                    *eax += eax.b
                    eax_27.b = (eax ^ *eax).b + 0x33
                
                *(eax_27 + 1) += arg3.b
                eax = (eax_27 + 1) ^ *(eax_27 + 1)
                goto label_4081ad
            
            if (not(z_1))
                uint8_t temp0_2
                temp0_2, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_2
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                
                if (not(z_1))
                    *(eax + arg5 + 0x40) += eax:1.b
                    *(eax + 0x30) += entry_ebx:1.b
                    continue
                else
                    arg3[(eax + 1) * 2].b += arg3.b
                    eax += 2
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
                    arg3[eax * 2].b += arg3.b
                
                goto label_4080e3
            
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
            arg3[eax * 2 + 0x20].b += eax:1.b
            *eax += arg2.b
            *eax += eax.b
            eax.b *= 2
            *eax -= 0xc
            eax.b ^= *eax
            *entry_ebx += arg2:1.b
            eax_25 = eax + 1
            *(entry_ebx + arg5) += eax_25.b
        label_40814f:
            *(eax_25 + 1) += arg3.b
            eax = (eax_25 + 1) ^ *(eax_25 + 1)
            eax.b ^= *eax
            char temp20_1 = *(fsbase + eax) ^ eax.b
            *(fsbase + eax) = temp20_1
            
            if (temp20_1 s< 0)
                goto label_40818e
            
            eax.b = (eax + 1).b * 2
            *eax ^= eax.b
            eax.b |= *(arg4 + 0x49)
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (eax.b u<= 0)
                while (true)
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
                    arg2[eax * 2].b += arg2.b
                label_4081eb:
                    *(eax + 1) += arg2.b
                    *(eax + 1) += (eax + 1).b
                    void* eax_31
                    eax_31.b = (eax + 1).b * 2
                    *eax_31 -= 0xc
                    eax_31.b ^= *eax_31
                    *entry_ebx += arg2:1.b
                    *(entry_ebx + arg5) += (eax_31 + 1).b
                    *(eax_31 + 2) += arg3.b
                    char* eax_30 = (eax_31 + 2) ^ *(eax_31 + 2)
                    eax_30.b ^= *eax_30
                    
                    while (true)
                        char temp24_1 = *(fsbase + eax_30) ^ eax_30.b
                        *(fsbase + eax_30) = temp24_1
                        
                        if (temp24_1 s< 0)
                            goto label_40823e
                        
                        eax_30.b = (&eax_30[1]).b * 2
                        *eax_30 ^= eax_30.b
                        int32_t temp25_1 = *(arg4 + 0x4f) | eax_30
                        *(arg4 + 0x4f) = temp25_1
                        char* eax_37
                        void* eax_39
                        
                        if (temp25_1 u<= 0)
                        label_40827e:
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                        label_408296:
                            *eax_30 += eax_30.b
                            char* eax_36
                            int16_t es_2
                            eax_36, es_2 = __les_gprz_memp(*(arg2 + 0x100040))
                            char temp27_1 = *eax_36
                            *eax_36 += eax_36.b
                            int16_t temp0_7 = esp
                            esp = eax_36
                            eax_37 = temp0_7
                            
                            if (temp27_1 s< neg.b(eax_36.b))
                                eax_37:1.b += arg2:1.b
                                eax_37.b ^= *eax_37
                                *entry_ebx += arg2:1.b
                                eax_39 = &eax_37[1]
                                *(entry_ebx + arg5) += eax_39.b
                                goto label_4082af
                            
                            while (true)
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37:1.b
                            label_4082f5:
                                *eax_37 += 0xc
                                *eax_37 += eax_37.b
                                char temp28_1 = eax_37.b
                                eax_37.b += entry_ebx.b
                                
                                if (temp28_1 s< neg.b(entry_ebx.b))
                                    goto label_40833f
                                
                                eax_37:1.b += arg2:1.b
                                eax_37.b ^= *eax_37
                                *entry_ebx += arg2:1.b
                                *(entry_ebx + arg5) += (&eax_37[1]).b
                                eax_37[2] += arg3.b
                                eax_37 = &eax_37[2] ^ *(eax_37 + 2)
                                eax_37.b ^= *eax_37
                                char temp31_1 = *(fsbase + eax_37) ^ eax_37.b
                                *(fsbase + eax_37) = temp31_1
                                
                                if (temp31_1 s>= 0)
                                    eax_37.b = (&eax_37[1]).b * 2
                                    *eax_37 ^= eax_37.b
                                    eax_37.b |= 0x45
                                    uint16_t* temp35_1 = arg3
                                    arg3 -= 1
                                    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                                    
                                    if (temp35_1 != 1)
                                        uint8_t* edi_1
                                        uint8_t temp0_9
                                        temp0_9, edi_1 = __insb(arg6, arg2.w, eflags)
                                        *edi_1 = temp0_9
                                        *(entry_ebx + (eax_37 << 1) + 0x61)
                                        entry_ebx[(eax_37 << 2) + 0x40] += entry_ebx:1.b
                                        break
                                    
                                    eax_37.b = rrc.b(eax_37.b, 0x83, false)
                                    eax_37 = &eax_37[1]
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    goto label_4083a1
                                
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                char temp33_1 = *eax_37
                                *eax_37 += eax_37.b
                                
                                if (temp33_1 s>= neg.b(eax_37.b))
                                    eax_37 = &eax_37[1]
                                    goto label_408353
                                
                            label_4082d5:
                                *eax_37 = *eax_37
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                                *eax_37 += eax_37.b
                        else
                            if (temp25_1 u>= 0)
                                uint8_t temp0_4
                                temp0_4, arg6 = __insb(arg6, arg2.w, eflags)
                                *arg6 = temp0_4
                                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                                
                                if (temp25_1 u> 0)
                                    eax:1.b = (&eax_30[1]):1.b + entry_ebx:1.b
                                label_4081ad:
                                    eax.b ^= *eax
                                    char temp22_1 = *(fsbase + eax) ^ eax.b
                                    *(fsbase + eax) = temp22_1
                                    
                                    if (temp22_1 s< 0)
                                        char temp23_1 = *eax
                                        *eax += eax.b
                                        eax.b = adc.b(eax.b, 0x82, temp23_1 + eax.b u< temp23_1)
                                        goto label_4081eb
                                    
                                    void* eax_29
                                    eax_29.b = (eax + 1).b * 2
                                    *eax_29 ^= eax_29.b
                                    eax_30 = eax_29 | *(arg4 + 0x5a)
                                    
                                    if (eax_30 u>= 0)
                                        esp += 1
                                        arg5 = *(arg5 + 0x69) * 0x82146564
                                        eax = &eax_30[1]
                                        break
                                    
                                    *eax_30 += eax_30.b
                                    *eax_30 += eax_30.b
                                    *eax_30 += eax_30.b
                                    *eax_30 += eax_30.b
                                    *eax_30 += eax_30.b
                                    *eax_30 += eax_30.b
                                    *eax_30 += eax_30.b
                                    arg2[eax_30 * 2 + 0x20].b += arg3:1.b
                                    *eax_30 += arg2.b
                                    goto label_408245
                                
                                arg2[eax_30 * 2 + 0x20].b = arg2[eax_30 * 2 + 0x20].b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                            label_40823e:
                                *eax_30 += eax_30.b
                                uint8_t temp0_5
                                temp0_5, arg6 = __insb(arg6, arg2.w, eflags)
                                *arg6 = temp0_5
                                *eax_30 += 0x10
                            label_408245:
                                *eax_30 += eax_30.b
                                eax_30.b *= 2
                                *eax_30 -= 0xc
                                eax_30.b ^= *eax_30
                                *entry_ebx += arg2:1.b
                                *(entry_ebx + arg5) += (&eax_30[1]).b
                                eax_30[2] += arg3.b
                                eax_30 = &eax_30[2] ^ *(eax_30 + 2)
                                eax_30.b ^= *eax_30
                                char temp26_1 = *(fsbase + eax_30) ^ eax_30.b
                                *(fsbase + eax_30) = temp26_1
                                
                                if (temp26_1 s< 0)
                                    goto label_408296
                                
                                eax_30.b = (&eax_30[1]).b * 2
                                *eax_30 ^= eax_30.b
                                eax_30.b |= *(arg4 + 0x55)
                                uint16_t* esi_2 = __outsb(arg2.w, *arg5, arg5, eflags)
                                
                                if (eax_30.b u>= 0)
                                    uint8_t temp0_6
                                    temp0_6, arg6 = __insb(arg6, arg2.w, eflags)
                                    *arg6 = temp0_6
                                    arg5 = __outsd(arg2.w, *esi_2, esi_2, eflags)
                                    int16_t es_1
                                    
                                    if (eax_30.b u> 0)
                                        continue
                                    else
                                        eax_30, es_1 = __les_gprz_memp(*(arg2 + 0x40))
                                    goto label_40827e
                                
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                *eax_30 += eax_30.b
                                entry_ebx[0xc0040] &= eax_30.b
                                *eax_30 += eax_30.b
                                *(eax_30 * 3)
                                trap(0xd)
                            
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            *eax_30 += eax_30.b
                            eax_30:1.b += eax_30.b
                            *eax_30 += 0x10
                            *eax_30 += eax_30.b
                            *(arg4 + (arg6 << 1) + 0x32f40040) += arg2.b
                            eax_30[1] += (&eax_30[1]).b
                            eax_39.b = (&eax_30[1] ^ *(eax_30 + 1)).b + 0x33
                        label_4082af:
                            *(eax_39 + 1) += arg3.b
                            char* eax_41 = (eax_39 + 1) ^ *(eax_39 + 1)
                            
                            while (true)
                                eax_41.b ^= *eax_41
                                *(fsbase + eax_41) ^= eax_41.b
                                arg5[0x18600020].b
                                eax_37 = &eax_41[1]
                                uint8_t temp29_1 = *arg6
                                *arg6 += arg3.b
                                bool c_4 = temp29_1 + arg3.b u< temp29_1
                                arg4 += 1
                                uint16_t* temp30_1 = arg3
                                arg3 -= 1
                                arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                                
                                if (temp30_1 != 1 && not(c_4))
                                    uint8_t temp0_8
                                    temp0_8, arg6 = __insb(arg6, arg2.w, eflags)
                                    *arg6 = temp0_8
                                    *(eax_37 + (arg2 << 1) + 0x6f)
                                    esp = *(eax_37 + (arg2 << 1) + 0x6f) * 0x65746e69
                                    bool c_5 =
                                        unimplemented  {imul esp, dword [eax+edx*2+0x6f], 0x65746e69}
                                    
                                    if (c_5)
                                        goto label_4082f5
                                    
                                    goto label_4082d5
                                
                                if (not(c_4))
                                label_4083a1:
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    *eax_37 += eax_37.b
                                    eax_37.b += entry_ebx.b
                                    *eax_37 += 0x10
                                    *eax_37 += eax_37.b
                                    arg5[&arg6[0x197a0020]].b += eax_37:1.b
                                    eax_37[1] += (&eax_37[1]).b
                                    void* eax_45
                                    eax_45.b = (&eax_37[1] ^ *(eax_37 + 1)).b + 0x33
                                    *(eax_45 + 1) += arg3.b
                                    eax_37 = (eax_45 + 1) ^ *(eax_45 + 1)
                                    eax_37.b ^= *eax_37
                                    char temp36_1 = *(fsbase + eax_37) ^ eax_37.b
                                    *(fsbase + eax_37) = temp36_1
                                    void* eax_49
                                    void* eax_53
                                    
                                    if (temp36_1 s< 0)
                                        *eax_37 += eax_37.b
                                        *eax_37 += eax_37.b
                                        *eax_37 += eax_37.b
                                        *eax_37 += eax_37.b
                                        *eax_37 += eax_37.b
                                        *(eax_37 * 3 + 0x1000)
                                        arg5[&arg6[0x197a0020]].b += eax_37:1.b
                                        eax_37[1] += (&eax_37[1]).b
                                        eax_49.b = (&eax_37[1] ^ *(eax_37 + 1)).b + 0x33
                                    else
                                        char* eax_47
                                        eax_47.b = (&eax_37[1]).b * 2
                                        *eax_47
                                        *eax_47 ^= eax_47.b
                                        char temp38_1 = *(arg4 + 0x41)
                                        *(arg4 + 0x41) = adc.b(temp38_1, eax_47.b, false)
                                        int16_t temp0_10
                                        temp0_10, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), esp.w)
                                        *(entry_ebx + 0x65) = temp0_10
                                        
                                        if (adc.b(temp38_1, eax_47.b, false) u>= temp38_1)
                                            *eax_47 += eax_47.b
                                            *eax_47 += eax_47.b
                                        label_408457:
                                            *eax_47 += eax_47.b
                                            *eax_47 += eax_47.b
                                            *eax_47 += eax_47.b
                                            *eax_47 += eax_47.b
                                            *eax_47 += eax_47.b
                                            *eax_47 += eax_47.b
                                            eax_47[0x10004084] += arg2.b
                                            *eax_47 += eax_47.b
                                            arg5[&arg6[0x197a0020]].b += eax_47:1.b
                                            eax_47[1] += (&eax_47[1]).b
                                            eax_53.b = (&eax_47[1] ^ *(eax_47 + 1)).b + 0x33
                                            goto label_40847b
                                        
                                        *(esp - 4) = arg5
                                        esp -= 4
                                        arg4 = *(arg6 + 0x6c) * 0x6f697461
                                        uint8_t* esi_3 = __outsb(arg2.w, *arg5, arg5, eflags)
                                        *(eax_47 * 3)
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += eax_47.b
                                        *eax_47 += entry_ebx:1.b
                                        *eax_47
                                        *eax_47 = adc.b(*eax_47, eax_47.b, false)
                                        char temp41_1 = *eax_47
                                        *eax_47 += eax_47.b
                                        *arg6 = *esi_3
                                        arg6 = &arg6[1]
                                        arg5 = &esi_3[1]
                                        
                                        if (temp41_1 s<= neg.b(eax_47.b))
                                            goto label_408457
                                        
                                        eax_47:1.b += arg2:1.b
                                        eax_47.b ^= *eax_47
                                        *entry_ebx += arg2:1.b
                                        eax_49 = &eax_47[1]
                                        *(entry_ebx + arg5) += eax_49.b
                                    
                                    *(eax_49 + 1) += arg3.b
                                    char* eax_51 = (eax_49 + 1) ^ *(eax_49 + 1)
                                    eax_51.b ^= *eax_51
                                    char temp39_1 = *(fsbase + eax_51)
                                    *(fsbase + eax_51) ^= eax_51.b
                                    bool s_4 = (temp39_1 ^ eax_51.b) s< 0
                                    
                                    while (true)
                                        if (s_4)
                                            goto label_408462
                                        
                                        eax_51.b = (&eax_51[1]).b * 2
                                        *eax_51 ^= eax_51.b
                                        eax_51.b |= *(arg4 + 0x50)
                                        
                                        if (eax_51.b u>= 0)
                                            if (eax_51.b u<= 0)
                                                goto label_4084a8
                                            
                                            uint8_t temp0_11
                                            temp0_11, arg6 = __insb(arg6, arg2.w, eflags)
                                            *arg6 = temp0_11
                                            *eax_51
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                        label_408462:
                                            *eax_51 += eax_51.b
                                            *eax_51
                                            *eax_51 = adc.b(*eax_51, eax_51.b, false)
                                            char temp43_1 = *eax_51
                                            *eax_51 += eax_51.b
                                            *arg6 = *arg5
                                            arg6 = &arg6[1]
                                            arg5 += 1
                                            
                                            if (temp43_1 s<= neg.b(eax_51.b))
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                eax_51:1.b += arg3:1.b
                                                goto label_4084c1
                                            
                                            eax_51:1.b += arg2:1.b
                                            eax_51.b ^= *eax_51
                                            *entry_ebx += arg2:1.b
                                            eax_53 = &eax_51[1]
                                            *(entry_ebx + arg5) += eax_53.b
                                        label_40847b:
                                            *(eax_53 + 1) += arg3.b
                                            eax_51 = (eax_53 + 1) ^ *(eax_53 + 1)
                                            eax_51.b ^= *eax_51
                                            char temp44_1 = *(fsbase + eax_51) ^ eax_51.b
                                            *(fsbase + eax_51) = temp44_1
                                            
                                            if (temp44_1 s< 0)
                                                break
                                            
                                            eax_51.b = (&eax_51[1]).b * 2
                                            *eax_51
                                            *eax_51 ^= eax_51.b
                                            int16_t cs
                                            *(esp - 4) = zx.d(cs)
                                            void* temp46_1 = arg4
                                            arg4 += 1
                                            bool z_5 = temp46_1 == 0xffffffff
                                            s_4 = temp46_1 + 1 s< 0
                                            *(esp - 8) = entry_ebx
                                            esp -= 8
                                            
                                            if (z_5)
                                            label_4084f9:
                                                *eax_51
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                            label_408516:
                                                *eax_51 += eax_51.b
                                                *eax_51
                                                eax_51.b = eax_51.b
                                            else
                                                int16_t temp0_12
                                                temp0_12, eflags =
                                                    __arpl_memw_gpr16(*(entry_ebx + 0x4f), arg4.w)
                                                *(entry_ebx + 0x4f) = temp0_12
                                                
                                                if (not(z_5))
                                                    uint8_t temp0_13
                                                    temp0_13, arg6 = __insb(arg6, arg2.w, eflags)
                                                    *arg6 = temp0_13
                                                    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                                                    
                                                    if (not(z_5))
                                                        continue
                                                    else
                                                        eax_51.b = __in_al_dx(arg2.w, eflags)
                                                        *eax_51
                                                        *eax_51 += eax_51.b
                                                    
                                                    goto label_4084a6
                                                
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                            label_40850b:
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *(arg4 + (eax_51 << 2) + 0x40) += eax_51.b
                                                *(eax_51 * 2) += arg3.b
                                            
                                            *eax_51 += eax_51.b
                                            *(eax_51 * 3)
                                            trap(0xd)
                                        
                                    label_4084a6:
                                        *eax_51 += eax_51.b
                                    label_4084a8:
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                    label_4084ba:
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        eax_51.b = __in_al_dx(arg2.w, eflags)
                                    label_4084c1:
                                        *eax_51
                                        *eax_51 = adc.b(*eax_51, eax_51.b, false)
                                        char temp48_1 = *eax_51
                                        *eax_51 += eax_51.b
                                        *arg6 = *arg5
                                        void* edi_2 = &arg6[1]
                                        void* esi_4 = arg5 + 1
                                        
                                        if (temp48_1 s<= neg.b(eax_51.b))
                                            goto label_40850b
                                        
                                        eax_51:1.b += arg2:1.b
                                        eax_51.b ^= *eax_51
                                        *entry_ebx += arg2:1.b
                                        *(entry_ebx + esi_4) += (&eax_51[1]).b
                                        eax_51[2] += arg3.b
                                        eax_51 = &eax_51[2] ^ *(eax_51 + 2)
                                        eax_51.b ^= *eax_51
                                        char temp49_1 = *(fsbase + eax_51) ^ eax_51.b
                                        *(fsbase + eax_51) = temp49_1
                                        
                                        if (temp49_1 s< 0)
                                            goto label_408516
                                        
                                        eax_51.b = (&eax_51[1]).b * 2
                                        *eax_51 ^= eax_51.b
                                        int32_t temp50_1 = *(arg4 + 0x43) | eax_51
                                        *(arg4 + 0x43) = temp50_1
                                        uint16_t* esi_5 = __outsd(arg2.w, *esi_4, esi_4, eflags)
                                        uint16_t* esi_6 = __outsb(arg2.w, *esi_5, esi_5, eflags)
                                        
                                        if (temp50_1 != 0)
                                            __outsd(arg2.w, *esi_6, esi_6, eflags)
                                            uint8_t* edi_3
                                            uint8_t temp0_16
                                            temp0_16, edi_3 = __insb(edi_2, arg2.w, eflags)
                                            *edi_3 = temp0_16
                                            goto label_4084f9
                                        
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        *eax_51 += eax_51.b
                                        eax_51[0xc004085] += eax_51:1.b
                                        *eax_51 += eax_51.b
                                        char temp51 = eax_51.b
                                        eax_51.b += entry_ebx.b
                                        
                                        if (temp51 s< neg.b(entry_ebx.b))
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            char temp0_17 = *eax_51
                                            *eax_51 = eax_51.b
                                            eax_51.b = temp0_17
                                            eax_51.b = eax_51.b
                                        else
                                            eax_51:1.b += arg2:1.b
                                            eax_51.b ^= *eax_51
                                            *entry_ebx += arg2:1.b
                                            *(entry_ebx + esi_6) += (&eax_51[1]).b
                                            eax_51[2] += arg3.b
                                            eax_51 = &eax_51[2] ^ *(eax_51 + 2)
                                            eax_51.b ^= *eax_51
                                            char temp52_1 = *(fsbase + eax_51) ^ eax_51.b
                                            *(fsbase + eax_51) = temp52_1
                                            
                                            if (temp52_1 s>= 0)
                                                void* eax_59
                                                eax_59.b = (&eax_51[1]).b * 2
                                                *eax_59
                                                *eax_59 ^= eax_59.b
                                                char temp54_1 = *(arg4 + 0x41)
                                                *(arg4 + 0x41) = adc.b(temp54_1, eax_59.b, false)
                                                bool c_7 = adc.b(temp54_1, eax_59.b, false) u< temp54_1
                                                
                                                if (not(c_7))
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                label_40861c:
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *esp
                                                    char temp0_18 = *eax_59
                                                    *eax_59 = eax_59.b
                                                    eax_59.b = temp0_18
                                                    eax_59.b = eax_59.b
                                                    *eax_59 += eax_59.b
                                                    *(eax_59 * 3)
                                                    trap(0xd)
                                                
                                                if (c_7)
                                                    goto label_40861c
                                                
                                                *(edi_2 + 0x6e)
                                                eax_51 = eax_59
                                                esi_6[0x20].b += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                                *eax_51 += eax_51.b
                                            
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            *eax_51 += eax_51.b
                                            esi_6[0x60020].b += eax_51.b
                                        
                                        *eax_51 += eax_51.b
                                        *(eax_51 * 3)
                                        trap(0xd)
                                    
                                    goto label_4084ba
                                
                                eax_41 = eax_37
                                
                                if (temp30_1 - 1 s< 0 == add_overflow(temp30_1, 0xffffffff))
                                    eax_37 = &eax_41[1]
                                    break
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                    label_40833f:
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        *eax_37 += eax_37.b
                        entry_ebx[(eax_37 << 2) + 0x40] += entry_ebx:1.b
                    label_408353:
                        *(eax_37 * 2) += arg3.b
                        *eax_37 += eax_37.b
                        *(eax_37 * 3)
                        trap(0xd)
            else
                uint8_t temp0_3
                temp0_3, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_3
                esp = *(arg6 + (arg3 << 1) + 0x70) * 0x4081bc90
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
            
            goto label_408187
        
        goto label_408015
    
    goto label_407fd2
}
