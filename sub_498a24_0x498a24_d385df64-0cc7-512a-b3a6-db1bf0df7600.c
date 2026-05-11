// ============================================================
// 函数名称: sub_498a24
// 虚拟地址: 0x498a24
// WARP GUID: d385df64-0cc7-512a-b3a6-db1bf0df7600
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_498a24(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
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
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0
    arg3.b = *arg3
    arg1.b = arg1.b
    *arg1 += arg1.b
    arg1.b = *0xf4004988
    char* entry_ebx
    void* esp
    TEB* fsbase
    int16_t cs
    
    while (true)
        arg1.b ^= *arg1
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&arg1[1]).b
        arg1[2] += arg3.b
        arg1 = &arg1[2] ^ *(arg1 + 2)
        arg1.b ^= *arg1
        char temp1_1 = *(fsbase + arg1) ^ arg1.b
        *(fsbase + arg1) = temp1_1
        
        if (temp1_1 s< 0)
        label_498a96:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *(esp - 4) = arg4
            arg4 = esp - 4
            esp -= 0x498e
            arg1.b = arg1.b
            *arg1 += arg1.b
            arg1.b = *0xf4004988
            arg1.b ^= *arg1
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (&arg1[1]).b
            arg1[2] += arg3.b
            arg1 = &arg1[2] ^ *(arg1 + 2)
            arg1.b ^= *arg1
            char temp2_1 = *(fsbase + arg1) ^ arg1.b
            *(fsbase + arg1) = temp2_1
            
            if (temp2_1 s< 0)
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                arg1.b &= 0x8b
                break
            
            void* eax_4
            eax_4.b = (&arg1[1]).b * 2
            *eax_4 ^= eax_4.b
            *(esp - 4) = zx.d(cs)
            *(esp - 8) = arg2
            edi = *(esp - 8)
            arg5 = *(esp - 4)
            void* ebp = *esp
            entry_ebx = *(esp + 8)
            arg2 = *(esp + 0xc)
            arg3 = *(esp + 0x10)
            arg1 = *(esp + 0x14)
            *(esp + 0x14) = esp + 0x18
            esp += 0x14
            arg4 = *(ebp + 0x65) * 0x9074756f
            arg1.b &= 0x8b
        else
            arg1.b = (&arg1[1]).b * 2
            char temp3_1 = *arg1 ^ arg1.b
            *arg1 = temp3_1
            
            if (temp3_1 != 0)
                arg3 = *(arg3 + 0x64)
            
            char* temp4_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            uint8_t temp0_1
            temp0_1, edi = __insb(edi, arg2.w, eflags)
            *edi = temp0_1
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (temp3_1 u< 0)
                *(esp - 4) = entry_ebx
                esp -= 4
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                int16_t temp0_2
                temp0_2, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
                *(entry_ebx + 0x65) = temp0_2
                
                if (temp4_1 == 0xffffffff)
                    *arg1 += arg1.b
                    arg1[0xf4004988] += arg1:1.b
                    continue
                else
                    arg3.b = *arg3
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
                
                goto label_498a96
        
        arg3 -= 1
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
        entry_ebx[arg3 << 2] += arg1:1.b
        break
    
    void* ecx_1 = arg3 - 1
    *(arg1 * 2) += ecx_1.b
    *arg1 += arg1.b
    arg1.b = *0xf4004988
    arg1.b ^= *arg1
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += ecx_1.b
    char* eax_7 = &arg1[2] ^ *(arg1 + 2)
    eax_7.b ^= *eax_7
    char temp5 = *(fsbase + eax_7) ^ eax_7.b
    *(fsbase + eax_7) = temp5
    
    if (temp5 s< 0)
        goto label_498b4e
    
    void* eax_8
    eax_8.b = (&eax_7[1]).b * 2
    *eax_8 ^= eax_8.b
    int16_t ds
    *(esp - 4) = zx.d(ds)
    *(esp - 8) = arg2
    uint16_t* esi = *(esp - 4)
    int32_t ebp_1 = *esp
    __outsb((*(esp + 0xc)).w, *esi, esi, eflags)
    edi = *(esp + 0x17)
    arg5 = *(esp + 0x1b)
    arg4 = *(esp + 0x1f)
    entry_ebx = *(esp + 0x27)
    arg2 = *(esp + 0x2b)
    void** ecx = *(esp + 0x2f)
    eax_7 = *(esp + 0x33)
    esp += 0x37
    char* eax_11
    
    if (ebp_1 - 1 s< 0)
        eax_11:1.b = (&eax_7[1]):1.b + entry_ebx:1.b
        goto label_498b81
    
    void* ebp_2 = *(arg5 + 0x65) * 0x676e654c
    
    if (ebp_1 != 1)
        arg4 = ebp_2 + 1
        
        if (ebp_2 + 1 s>= 0)
            ecx_1 = *ecx
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
        label_498b4e:
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            *eax_7 += eax_7.b
            ecx = *ecx_1
            eax_7.b = eax_7.b
            *eax_7 += eax_7.b
            eax_7.b = *0xf4004988
            eax_7.b ^= *eax_7
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (&eax_7[1]).b
            eax_7[2] += ecx.b
            eax_11 = &eax_7[2] ^ *(eax_7 + 2)
        label_498b81:
            eax_11.b ^= *eax_11
            char temp7_1 = *(fsbase + eax_11) ^ eax_11.b
            *(fsbase + eax_11) = temp7_1
            void* eax_13
            void* ecx_3
            void* esp_11
            bool c_1
            bool z_2
            bool s_1
            bool o_1
            
            if (temp7_1 s< 0)
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                ecx_3 = *ecx
                *eax_11 = adc.b(*eax_11, eax_11.b, false)
                *eax_11 += eax_11.b
                eax_11.b = *0xf4004988
                eax_11.b ^= *eax_11
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (&eax_11[1]).b
                eax_11[2] += ecx_3.b
                char* eax_18 = &eax_11[2] ^ *(eax_11 + 2)
                eax_18.b ^= *eax_18
                char temp8_1 = *(fsbase + eax_18) ^ eax_18.b
                *(fsbase + eax_18) = temp8_1
                
                if (temp8_1 s< 0)
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    char temp12_1 = *eax_18
                    *eax_18 += eax_18.b
                    *(esp - 4) = eax_18
                    *(esp - 8) = ecx_3
                    *(esp - 0xc) = arg2
                    *(esp - 0x10) = entry_ebx
                    *(esp - 0x14) = esp - 0x10
                    *(esp - 0x18) = arg4
                    *(esp - 0x1c) = arg5
                    *(esp - 0x20) = edi
                    esp_11 = esp - 0x20
                    *ecx_3 = cs
                    *eax_18 = adc.b(*eax_18, eax_18.b, temp12_1 + eax_18.b u< temp12_1)
                    *eax_18 += eax_18.b
                    ecx_3 -= 1
                    eax_18:1.b += arg2:1.b
                    eax_18.b ^= *eax_18
                    *entry_ebx += arg2:1.b
                    *(entry_ebx + arg5) += (&eax_18[1]).b
                    eax_18[2] += ecx_3.b
                    eax_13 = &eax_18[2] ^ *(eax_18 + 2)
                    eax_13.b ^= *eax_13
                    char temp13_1 = *(fsbase + eax_13) ^ eax_13.b
                    *(fsbase + eax_13) = temp13_1
                    
                    if (temp13_1 s< 0)
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *(esp_11 - 4) = arg4
                        arg4 = esp_11 - 4
                        esp_11 -= 0x4990
                        eax_13.b = eax_13.b
                        *eax_13 += eax_13.b
                        eax_13.b = *0xf4004988
                        eax_13.b ^= *eax_13
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (eax_13 + 1).b
                        *(eax_13 + 2) += ecx_3.b
                        eax_13 = (eax_13 + 2) ^ *(eax_13 + 2)
                        eax_13.b ^= *eax_13
                        char temp17_1 = *(fsbase + eax_13) ^ eax_13.b
                        *(fsbase + eax_13) = temp17_1
                        
                        if (temp17_1 s< 0)
                            goto label_498cf2
                        
                        goto label_498cc3
                    
                label_498c57:
                    eax_13.b = (eax_13 + 1).b * 2
                    *eax_13
                    *eax_13 ^= eax_13.b
                    char temp19_1 = *(ecx_3 * 3 + 0x49451800)
                    *(ecx_3 * 3 + 0x49451800) = adc.b(temp19_1, 0x64, false)
                    c_1 = adc.b(temp19_1, 0x64, false) u< temp19_1
                    *(esp_11 - 4) = entry_ebx
                    *(esp_11 - 8) = entry_ebx
                    esp_11 -= 8
                    bool z_3
                    
                    while (true)
                        z_3 = esp_11 == 1
                        s_1 = esp_11 - 1 s< 0
                        o_1 = add_overflow(esp_11, 0xffffffff)
                        *(esp_11 - 5) = eax_13
                        esp_11 -= 5
                        
                        if (not(c_1))
                            break
                        
                        if (not(z_3))
                            goto label_498cdb
                    
                    if (not(z_3))
                        int16_t temp0_6
                        temp0_6, eflags = __arpl_memw_gpr16(*(edi + 0x6c), arg4.w)
                        *(edi + 0x6c) = temp0_6
                        goto label_498c6f
                    
                label_498cdb:
                    *eax_13 u>>= 0x8d
                    ecx_3 -= 1
                label_498cdf:
                    *eax_13 += eax_13.b
                    *eax_13 += eax_13.b
                    *eax_13 += eax_13.b
                    *eax_13 += eax_13.b
                    *eax_13 += eax_13.b
                else
                    eax_13.b = (&eax_18[1]).b * 2
                    *eax_13
                    *eax_13 ^= eax_13.b
                    char temp15_1 = *(ecx_3 * 3 + 0x49451500)
                    *(ecx_3 * 3 + 0x49451500) = adc.b(temp15_1, 0x64, false)
                    c_1 = adc.b(temp15_1, 0x64, false) u< temp15_1
                    z_2 = adc.b(temp15_1, 0x64, false) == 0
                    s_1 = adc.b(temp15_1, 0x64, false) s< 0
                    o_1 = unimplemented  {adc byte [ecx+ecx*2+0x49451500], 0x64}
                    *(esp - 4) = eax_13
                    esp_11 = esp - 4
                label_498bfd:
                    
                    if (c_1)
                        uint8_t temp0_7
                        temp0_7, edi = __insb(edi, arg2.w, eflags)
                        *edi = temp0_7
                    label_498c6f:
                        *(esp_11 - 4) = arg2
                        esp_11 -= 4
                    label_498c70:
                        
                        if (o_1)
                            goto label_498cdf
                        
                        if (s_1)
                            goto label_498c75
                        
                        eax_13 += 1
                        *(eax_13 + arg5 + 0x40) += eax_13:1.b
                        *(eax_13 + 0x30) += entry_ebx:1.b
                    label_498cc3:
                        char* eax_23
                        eax_23.b = (eax_13 + 1).b * 2
                        *eax_23
                        *eax_23 ^= eax_23.b
                        *(arg4 + 0x49) = adc.d(*(arg4 + 0x49), eax_23, false)
                        char* temp21_1 = entry_ebx
                        entry_ebx = &entry_ebx[1]
                        uint16_t* esi_5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        uint16_t* esi_6 = __outsb(arg2.w, *esi_5, esi_5, eflags)
                        int32_t esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags)
                        uint16_t* gsbase
                        int16_t temp0_8
                        temp0_8, eflags =
                            __arpl_memw_gpr16(*(gsbase + esp_11 + (arg2 << 1) + 0x69), esi_7.w)
                        *(gsbase + esp_11 + (arg2 << 1) + 0x69) = temp0_8
                        int16_t temp0_9
                        temp0_9, edi = __insd(edi, arg2.w, eflags)
                        *edi = temp0_9
                        arg5 = __outsd(arg2.w, *(gsbase + esi_7), esi_7, eflags)
                        
                        if (temp21_1 != 0xffffffff)
                            goto label_498d4e
                        
                        eax_13 = eax_23
                        *(arg4 + 0x49) -= ecx_3.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                    label_498cf2:
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *eax_13 += eax_13.b
                        *(arg4 + 0xc0049) -= ecx_3.b
                    label_498d02:
                        *eax_13 += eax_13.b
                        eax_13.b = *0xf4004988
                        eax_13.b ^= *eax_13
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (eax_13 + 1).b
                        *(eax_13 + 2) += ecx_3.b
                        eax_23 = (eax_13 + 2) ^ *(eax_13 + 2)
                        eax_23.b ^= *eax_23
                        char temp23_1 = *(fsbase + eax_23) ^ eax_23.b
                        *(fsbase + eax_23) = temp23_1
                        
                        if (temp23_1 s< 0)
                            goto label_498d52
                        
                        void* eax_26
                        eax_26.b = (&eax_23[1]).b * 2
                        *eax_26
                        *eax_26 ^= eax_26.b
                        eax_23 = adc.d(eax_26, *(arg4 + 0x49), false)
                        char* temp26_1 = entry_ebx
                        entry_ebx = &entry_ebx[1]
                        uint16_t* esi_8 = __outsd(arg2.w, *arg5, arg5, eflags)
                        uint16_t* esi_9 = __outsb(arg2.w, *esi_8, esi_8, eflags)
                        arg5 = __outsb(arg2.w, *esi_9, esi_9, eflags)
                        int32_t eflags_1
                        int16_t temp0_10
                        temp0_10, eflags_1 =
                            __arpl_memw_gpr16(*(gsbase + arg4 + (eax_23 << 1) + 0x78), arg5.w)
                        *(gsbase + arg4 + (eax_23 << 1) + 0x78) = temp0_10
                        int16_t temp0_11
                        temp0_11, eflags = __arpl_memw_gpr16(*(arg4 + 0x70), esp_11.w)
                        *(arg4 + 0x70) = temp0_11
                        void* ecx_4
                        
                        if (temp26_1 == 0xffffffff)
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            eax_23:1.b *= 2
                            ecx_4 = ecx_3
                            eax_23.b = eax_23.b
                        else
                            uint16_t* esi_10 = __outsd(arg2.w, *arg5, arg5, eflags)
                            arg5 = __outsb(arg2.w, *esi_10, esi_10, eflags)
                            *(arg4 + 0x49) = ecx_3.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                        label_498d4e:
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                        label_498d52:
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *(arg4 + 0xc0049) = ecx_3.b
                            *eax_23 += eax_23.b
                            eax_23.b = *0xf4004988
                            eax_23.b ^= *eax_23
                            *entry_ebx += arg2:1.b
                            *(entry_ebx + arg5) += (&eax_23[1]).b
                            eax_23[2] += ecx_3.b
                            eax_23 = &eax_23[2] ^ *(eax_23 + 2)
                            eax_23.b ^= *eax_23
                            char temp24_1 = *(fsbase + eax_23) ^ eax_23.b
                            *(fsbase + eax_23) = temp24_1
                            
                            if (temp24_1 s>= 0)
                                void* eax_29
                                eax_29.b = (&eax_23[1]).b * 2
                                *eax_29 ^= eax_29.b
                                __outsd(arg2.w, *arg5, arg5, eflags)
                                int32_t eflags_2
                                int16_t temp0_12
                                temp0_12, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                                *(entry_ebx + 0x73) = temp0_12
                                
                                if ((eax_29 | 0x53644945) u< 0)
                                    jump(sub_498dde+0x28)
                                
                                jump(0x498d94)
                            
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            *eax_23 += eax_23.b
                            eax_23.b = __in_al_immb(0x8d, eflags)
                            ecx_4 = ecx_3 - 1
                            *(eax_23 * 2) += ecx_4.b
                        
                        *eax_23 += eax_23.b
                        eax_23:1.b += arg2:1.b
                        eax_23.b ^= *eax_23
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (&eax_23[1]).b
                        eax_23[2] += (ecx_4 - 1).b
                        char* eax_33 = &eax_23[2] ^ *(eax_23 + 2)
                        eax_33.b ^= *eax_33
                        char temp27 = *(fsbase + eax_33) ^ eax_33.b
                        *(fsbase + eax_33) = temp27
                        
                        if (temp27 s>= 0)
                            return sub_498dde(eax_33, arg2, ecx_4 - 1, arg4, arg5, edi) __tailcall
                        
                        *eax_33 += eax_33.b
                        *eax_33 += eax_33.b
                        *eax_33 += eax_33.b
                        *eax_33 += eax_33.b
                        *eax_33 += eax_33.b
                        *eax_33 += eax_33.b
                        *eax_33 += eax_33.b
                        undefined
                    
                    if (z_2)
                        goto label_498c70
                    
                    int16_t temp0_5
                    temp0_5, eflags = __arpl_memw_gpr16(*(edi + 0x6c), arg4.w)
                    *(edi + 0x6c) = temp0_5
                    *(esp_11 - 4) = arg2
                    esp_11 -= 4
                    
                    if (not(o_1))
                        if (not(s_1))
                            *(eax_13 + arg5 + 0x40) += eax_13:1.b
                            *(eax_13 + 0x30) += entry_ebx:1.b
                            goto label_498c57
                        
                        if (c_1)
                            jump(&data_498c7c:2)
                        
                        jump(0x498c0c)
                    
                    arg4 += 1
                label_498c75:
                    
                    if (not(c_1))
                        __outsd(arg2.w, *arg5, arg5, eflags)
                        
                        if (c_1)
                            jump(0x498c07)
                        
                        jump(0x498c7a)
                
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += ecx_3:1.b
                eax_13.b = eax_13.b
                goto label_498d02
            
            void* eax_12
            eax_12.b = (&eax_11[1]).b * 2
            *eax_12
            *eax_12 ^= eax_12.b
            eax_13 = adc.d(eax_12, 0x49644945, false)
            c_1 = adc.d(eax_12, 0x49644945, false) u< eax_12
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (adc.d(eax_12, 0x49644945, false) == 0 || c_1)
                arg4 += 1
                ecx_3 = ecx - 1
                z_2 = ecx == 1
                s_1 = ecx - 1 s< 0
                o_1 = add_overflow(ecx, 0xffffffff)
                *(esp - 4) = eax_13
                esp_11 = esp - 4
                goto label_498bfd
            
            uint8_t* edi_1
            uint8_t temp0_3
            temp0_3, edi_1 = __insb(edi, arg2.w, eflags)
            *edi_1 = temp0_3
            esp = *(entry_ebx + (arg2 << 1) + 0x65) * 0x63697672
    
    *(esp + 4)
    *(esp + 8)
    *(esp + 0x10)
    *(esp + 0x18)
    *(esp + 0x1c)
    int16_t* edi_3
    int16_t temp0_4
    temp0_4, edi_3 = __insd(*esp, (*(esp + 0x14)).w, eflags)
    *edi_3 = temp0_4
    trap(0xd)
}
