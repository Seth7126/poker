// ============================================================
// 函数名称: sub_498fba
// 虚拟地址: 0x498fba
// WARP GUID: d4357b77-412f-5209-9fea-04e83bd24193
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_498fba(char* arg1, void* arg2, int32_t arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi)
{
    // 第一条实际指令: *(arg1 * 2) += (arg3 - 1).b
    *(arg1 * 2) += (arg3 - 1).b
    *arg1 += arg1.b
    void* ecx = arg3 - 2
    arg1:1.b += arg2:1.b
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
    void* eax_3
    
    if (temp1 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_3 = eax_2 - 1
        goto label_49901f
    
    eax_3.b = (&eax_2[1]).b * 2
    *eax_3
    *eax_3 ^= eax_3.b
    bool c_1 = false
    void* esp = &__return_addr:2
    arg4 += 1
    
    while (true)
        void* ecx_1 = ecx - 1
        *(esp - 4) = entry_ebx
        esp -= 4
        int32_t eflags
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_1
        ecx = ecx_1 + 1
        uint16_t* gsbase
        bool z_1
        
        if (ecx_1 != 0xffffffff)
        label_499064:
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
        label_49906c:
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
        label_499072:
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *(eax_3 * 2) += (ecx - 1).b
            *eax_3 += eax_3.b
            ecx -= 2
            eax_3:1.b += arg2:1.b
            eax_3.b ^= *eax_3
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax_3 + 1).b
            *(eax_3 + 2) += ecx.b
            eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
            eax_3.b ^= *eax_3
            char temp5_1 = *(fsbase + eax_3) ^ eax_3.b
            *(fsbase + eax_3) = temp5_1
            
            if (temp5_1 s>= 0)
                eax_3.b = (eax_3 + 1).b * 2
                *eax_3
                *eax_3 ^= eax_3.b
                char temp8_1 = eax_3.b
                char temp9_1 = *(arg4 + 0x49)
                eax_3.b = sbb.b(temp8_1, temp9_1, false)
                c_1 = unimplemented  {sbb al, byte [ebp+0x49]}
                z_1 = sbb.b(temp8_1, temp9_1, false) == 0
                *(esp - 4) = entry_ebx
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                int16_t temp0_3
                temp0_3, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                *(entry_ebx + 0x73) = temp0_3
                *(esp - 8) = entry_ebx
                esp -= 8
                
                if (c_1)
                    if (c_1)
                        goto label_49919c
                    
                    goto label_49912d
                
                if (c_1)
                    eax_3:1.b += entry_ebx:1.b
                    goto label_499101
                
                arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
                goto label_4990ba
        else
            *(esp - 4) = 0x6874654d
            esp -= 4
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            arg4 += 1
            
            if (c_1)
                goto label_49906c
            
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (not(c_1))
                ecx -= 1
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
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *(eax_3 - 0x70) += ecx.b
            label_49901f:
                *(eax_3 * 2) += (ecx - 1).b
                *eax_3 += eax_3.b
                ecx -= 2
                eax_3:1.b += arg2:1.b
                eax_3.b ^= *eax_3
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (eax_3 + 1).b
                *(eax_3 + 2) += ecx.b
                eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
                eax_3.b ^= *eax_3
                char temp3_1 = *(fsbase + eax_3) ^ eax_3.b
                *(fsbase + eax_3) = temp3_1
                
                if (temp3_1 s< 0)
                    break
                
                eax_3.b = (eax_3 + 1).b * 2
            
            *eax_3
            *eax_3 ^= eax_3.b
            int32_t temp11_1 = *(arg4 + 0x49)
            *(arg4 + 0x49) = adc.d(temp11_1, eax_3, false)
            c_1 = adc.d(temp11_1, eax_3, false) u< temp11_1
            *(esp - 4) = entry_ebx
            esp -= 4
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            int16_t temp0_2
            temp0_2, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
            *(entry_ebx + 0x73) = temp0_2
            void* temp12_1 = ecx
            ecx += 1
            
            if (temp12_1 == 0xffffffff)
            label_499054:
                *(esp - 4) = 0x6f727245
                esp -= 4
                
                if (c_1)
                    continue
                else
                    *(eax_3 + 0x4990) = *(eax_3 + 0x4990)
                    *eax_3 += eax_3.b
                
                goto label_499064
            
            *eax_3 += eax_3.b
        label_4990ca:
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
        *eax_3 += eax_3.b
        char temp6_1 = *eax_3
        *eax_3 += eax_3.b
        *(ecx + 0xc0049) = adc.b(*(ecx + 0xc0049), arg2.b, temp6_1 + eax_3.b u< temp6_1)
        
        while (true)
            *eax_3 += eax_3.b
            ecx -= 1
            eax_3:1.b += arg2:1.b
            eax_3.b ^= *eax_3
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax_3 + 1).b
            *(eax_3 + 2) += ecx.b
            eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
        label_499101:
            eax_3.b ^= *eax_3
            char temp13_1 = *(fsbase + eax_3) ^ eax_3.b
            *(fsbase + eax_3) = temp13_1
            
            if (temp13_1 s>= 0)
                void* eax_10
                eax_10.b = (eax_3 + 1).b * 2
                *eax_10
                *eax_10 ^= eax_10.b
                eax_3 = sbb.d(eax_10, 0x53644945, false)
                c_1 = unimplemented  {sbb eax, 0x53644945}
                z_1 = sbb.d(eax_10, 0x53644945, false) == 0
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                int16_t temp0_6
                temp0_6, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                *(entry_ebx + 0x73) = temp0_6
                *(esp - 4) = entry_ebx
                esp -= 4
                
                if (c_1)
                    goto label_499193
                
                if (not(c_1))
                    goto label_499120
                
            label_499170:
                char temp17_1 = *(fsbase + eax_3) ^ eax_3.b
                *(fsbase + eax_3) = temp17_1
                
                if (temp17_1 s< 0)
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
                    *eax_3 += eax_3.b
                    *eax_3 += eax_3.b
                    eax_3.b = __in_al_dx(arg2.w, eflags)
                    goto label_4991c1
                
                eax_3.b = (eax_3 + 1).b * 2
                *eax_3 ^= eax_3.b
                int32_t temp18_1 = *(arg4 + 0x49)
                *(arg4 + 0x49) &= eax_3
                c_1 = false
                z_1 = (temp18_1 & eax_3) == 0
                bool s_1 = (temp18_1 & eax_3) s< 0
                *(esp - 4) = entry_ebx
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                int16_t temp0_7
                temp0_7, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                *(entry_ebx + 0x73) = temp0_7
                *(esp - 8) = entry_ebx
                esp -= 8
                char* eax_16
                void* ecx_7
                bool s_2
                
                if (z_1)
                    while (true)
                        if (s_1)
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
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            esp = *esp
                            int16_t temp0_16 = arg2
                            arg2 = eax_3
                            eax_16 = temp0_16
                            ecx_7 = ecx - 1
                            goto label_499233
                        
                        eax_3.b = (eax_3 + 1).b * 2
                        *eax_3 ^= eax_3.b
                        char temp22_1 = eax_3.b
                        eax_3.b &= *(arg4 + 0x49)
                        c_1 = false
                        z_1 = (temp22_1 & *(arg4 + 0x49)) == 0
                        *(esp - 4) = entry_ebx
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        int16_t temp0_13
                        temp0_13, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                        *(entry_ebx + 0x73) = temp0_13
                        *(esp - 8) = entry_ebx
                        esp -= 8
                    label_4991f9:
                        
                        if (c_1)
                            eax_3.b += 0x33
                            goto label_499247
                        
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        
                        if (not(c_1))
                            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                            goto label_499274
                        
                        *(esp - 4) = arg4
                        esp -= 4
                        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                        
                        if (c_1)
                            if (z_1 || c_1)
                                char temp26_1 = *0x53644945
                                *0x53644945 += entry_ebx.b
                                c_1 = temp26_1 + entry_ebx.b u< temp26_1
                                s_2 = temp26_1 + entry_ebx.b s< 0
                                goto label_4992d5
                            
                            if (c_1)
                                goto label_4992af
                            
                        label_49926c:
                            uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
                            uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
                            arg5 = __outsb(arg2.w, *esi_1, esi_1, eflags)
                            break
                        
                        arg6 = *esp
                        arg5 = *(esp + 4)
                        arg4 = *(esp + 8)
                        entry_ebx = *(esp + 0x10)
                        arg2 = *(esp + 0x14)
                        ecx = *(esp + 0x18)
                        eax_3 = *(esp + 0x1c)
                        esp += 0x20
                        int16_t temp0_14
                        temp0_14, eflags = __arpl_memw_gpr16(*(eax_3 + 0x61), arg4.w)
                        *(eax_3 + 0x61) = temp0_14
                        __bound_gprv_mema32(arg4, *(arg4 + 0x45))
                        
                        if (c_1)
                            goto label_49927f
                        
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                    label_49920e:
                        
                        if (not(c_1))
                            goto label_499210
                        
                    label_4991a0:
                        eax_3.b = __in_al_dx(arg2.w, eflags)
                        int16_t temp0_10 = ecx
                        ecx = eax_3
                        eax_3 = temp0_10
                    label_4991a2:
                        ecx -= 1
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
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        eax_3:1.b += ecx:1.b
                    label_4991c1:
                        char* eax_13 = ecx
                        *(eax_13 * 2) += (eax_3 - 1).b
                        *eax_13 += eax_13.b
                        ecx = eax_3 - 2
                        eax_13:1.b += arg2:1.b
                        eax_13.b ^= *eax_13
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (&eax_13[1]).b
                        eax_13[2] += ecx.b
                        eax_3 = &eax_13[2] ^ *(eax_13 + 2)
                        eax_3.b ^= *eax_3
                        char temp20_1 = *(fsbase + eax_3)
                        *(fsbase + eax_3) ^= eax_3.b
                        s_1 = (temp20_1 ^ eax_3.b) s< 0
                else
                    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                    
                    while (true)
                        if (c_1)
                            if (not(c_1))
                                goto label_4991f9
                            
                            break
                        
                        arg6 = *esp
                        arg5 = *(esp + 4)
                        arg4 = *(esp + 8)
                        entry_ebx = *(esp + 0x10)
                        arg2 = *(esp + 0x14)
                        ecx = *(esp + 0x18)
                        eax_3 = *(esp + 0x1c)
                        esp += 0x20
                    label_499193:
                        int16_t temp0_8
                        temp0_8, eflags = __arpl_memw_gpr16(*(eax_3 + 0x61), arg4.w)
                        *(eax_3 + 0x61) = temp0_8
                        __bound_gprv_mema32(arg4, *(arg4 + 0x45))
                        
                        if (c_1)
                            goto label_49920e
                        
                    label_49919c:
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        
                        if (not(c_1))
                            eax_3:1.b u>>= 0x91
                            goto label_4991a2
                        
                    label_49912a:
                        
                        if (c_1)
                            goto label_4991a0
                        
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                    label_49912d:
                        
                        if (not(c_1))
                            *(ecx + (arg2 << 2) + 0x49) = *(ecx + (arg2 << 2) + 0x49)
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            goto label_49913a
                        
                    label_4990ba:
                        
                        if (not(c_1))
                            uint8_t temp0_4
                            temp0_4, arg6 = __insb(arg6, arg2.w, eflags)
                            *arg6 = temp0_4
                            arg4 += 1
                            
                            if (not(c_1))
                                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                                
                                if (c_1)
                                    goto label_499054
                                
                                *(ecx + 0x49) = adc.b(*(ecx + 0x49), arg2.b, c_1)
                                goto label_4990ca
                            
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
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *(ecx + (arg2 << 2) + 0x49) += entry_ebx:1.b
                            goto label_499153
                        
                        if (c_1)
                            goto label_499170
                        
                    label_499120:
                        
                        if (not(c_1))
                            *(entry_ebx + 0x73)
                            arg5 = *(entry_ebx + 0x73) * 0x456e6f69
                            c_1 = unimplemented  {imul esi, dword [ebx+0x73], 0x456e6f69}
                            goto label_49912a
                
                int16_t temp0_18
                temp0_18, eflags = __arpl_memw_gpr16(*(gsbase + ecx + (arg4 << 1) + 0x6f), arg5.w)
                *(gsbase + ecx + (arg4 << 1) + 0x6f) = temp0_18
            label_499274:
                arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                *(esp - 4) = arg2
                esp -= 4
                
                if (z_1)
                    goto label_49927a
                
                while (true)
                    if (not(c_1))
                        entry_ebx[arg2 << 2] s>>= 0x49
                    label_4992f3:
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
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        entry_ebx[arg2 << 2] += entry_ebx:1.b
                        goto label_499313
                    
                label_49927a:
                    arg4 += 1
                    
                    if (c_1)
                        int16_t temp0_22 = entry_ebx
                        entry_ebx = eax_3
                        eax_3 = temp0_22
                        ecx -= 1
                        goto label_4992f3
                    
                label_49927f:
                    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                    void* eax_18
                    
                    if (c_1)
                    label_499210:
                        esp = *esp
                        int16_t temp0_15 = arg2
                        arg2 = eax_3
                        eax_16 = temp0_15
                        ecx_7 = ecx - 1
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *eax_16 += eax_16.b
                        *(arg2 * 5 + 0x49) += entry_ebx.b
                    label_499233:
                        *(eax_16 * 2) += ecx_7.b
                        *eax_16 += eax_16.b
                        ecx = ecx_7 - 1
                        eax_16:1.b += arg2:1.b
                        eax_16.b ^= *eax_16
                        *entry_ebx += arg2:1.b
                        eax_3 = &eax_16[1]
                        *(entry_ebx + arg5) += eax_3.b
                    label_499247:
                        *(eax_3 + 1) += ecx.b
                        eax_18 = (eax_3 + 1) ^ *(eax_3 + 1)
                        eax_18.b ^= *eax_18
                        char temp21_1 = *(fsbase + eax_18) ^ eax_18.b
                        *(fsbase + eax_18) = temp21_1
                        
                        if (temp21_1 s>= 0)
                            eax_3.b = (eax_18 + 1).b * 2
                            *eax_3 ^= eax_3.b
                            eax_3.b &= 0x45
                            c_1 = false
                            void* temp25_1 = ecx
                            ecx -= 1
                            z_1 = temp25_1 == 1
                            *(esp - 4) = entry_ebx
                            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                            int16_t temp0_17
                            temp0_17, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                            *(entry_ebx + 0x73) = temp0_17
                            *(esp - 8) = entry_ebx
                            esp -= 8
                            break
                    else
                        void* eax_19
                        eax_19.b = (eax_3 + 1).b + arg2.b
                        int16_t temp0_19 = arg2
                        arg2 = eax_19
                        eax_18 = temp0_19
                    
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    *eax_18 += eax_18.b
                    eax_18.b += arg2.b
                    int16_t temp0_20 = arg2
                    arg2 = eax_18
                    eax_3 = temp0_20
                    *(eax_3 * 2) += (ecx - 2).b
                    *eax_3 += eax_3.b
                    ecx -= 3
                label_4992af:
                    eax_3:1.b += arg2:1.b
                    eax_3.b ^= *eax_3
                    *entry_ebx += arg2:1.b
                    *(entry_ebx + arg5) += (eax_3 + 1).b
                    *(eax_3 + 2) += ecx.b
                    eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
                    eax_3.b ^= *eax_3
                    char temp27_1 = *(fsbase + eax_3) ^ eax_3.b
                    *(fsbase + eax_3) = temp27_1
                    char* eax_25
                    void* ecx_11
                    
                    if (temp27_1 s< 0)
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
                    label_499313:
                        *(eax_3 * 2) += (ecx - 1).b
                        *eax_3 += eax_3.b
                        ecx -= 2
                        eax_3:1.b += arg2:1.b
                        eax_3.b ^= *eax_3
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (eax_3 + 1).b
                        *(eax_3 + 2) += ecx.b
                        eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
                        eax_3.b ^= *eax_3
                        char temp31_1 = *(fsbase + eax_3)
                        *(fsbase + eax_3) ^= eax_3.b
                        s_2 = (temp31_1 ^ eax_3.b) s< 0
                    label_499334:
                        
                        if (s_2)
                        label_499366:
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                            *arg6 = *arg5
                            arg6 = &arg6[1]
                            arg5 += 1
                            int16_t temp0_27 = entry_ebx
                            entry_ebx = eax_3
                            eax_25 = temp0_27
                            ecx_11 = ecx - 1
                            *(eax_25 * 2) += ecx_11.b
                        label_49937e:
                            *eax_25 += eax_25.b
                            ecx = ecx_11 - 1
                            eax_25:1.b += arg2:1.b
                            eax_25.b ^= *eax_25
                            *entry_ebx += arg2:1.b
                            *(entry_ebx + arg5) += (&eax_25[1]).b
                            eax_3 = &eax_25[2]
                            goto label_49938f
                        
                        eax_3.b = (eax_3 + 1).b * 2
                        *eax_3
                        *eax_3 ^= eax_3.b
                        eax_3.b = sbb.b(eax_3.b, *(arg4 + 0x49), false)
                        c_1 = unimplemented  {sbb al, byte [ebp+0x49]}
                        *(esp - 4) = entry_ebx
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        int16_t temp0_23
                        temp0_23, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                        *(entry_ebx + 0x73) = temp0_23
                        *(esp - 8) = entry_ebx
                        esp -= 8
                        
                        if (c_1)
                        label_4993c0:
                            eax_3.b |= 0x94
                            ecx -= 1
                            *eax_3 += eax_3.b
                            *eax_3 += eax_3.b
                        else
                            if (c_1)
                            label_49938f:
                                *eax_3 += ecx.b
                                eax_3 ^= *eax_3
                                eax_3.b ^= *eax_3
                                char temp41_1 = *(fsbase + eax_3) ^ eax_3.b
                                *(fsbase + eax_3) = temp41_1
                                
                                if (temp41_1 s< 0)
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    goto label_4993d6
                                
                                eax_3.b = (eax_3 + 1).b * 2
                                *eax_3
                                *eax_3 ^= eax_3.b
                                eax_3.b = sbb.b(eax_3.b, *(arg4 + 0x49), false)
                                c_1 = unimplemented  {sbb al, byte [ebp+0x49]}
                                *(esp - 4) = entry_ebx
                                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                                int16_t temp0_28
                                temp0_28, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                                *(entry_ebx + 0x73) = temp0_28
                                *(esp - 8) = entry_ebx
                                esp -= 8
                                
                                if (c_1)
                                    goto label_499427
                                
                                if (c_1)
                                    void* eax_28 = eax_3 ^ *eax_3
                                    *entry_ebx |= arg2:1.b
                                    eax_3:1.b = (eax_28 + 1):1.b + entry_ebx:1.b
                                    goto label_4993fd
                                
                                if (c_1)
                                    goto label_499420
                                
                                if (not(c_1))
                                    goto label_49942d
                                
                                arg4 += 1
                                
                                if (c_1)
                                    goto label_49942f
                                
                                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                                
                                if (not(c_1))
                                    goto label_4993c0
                            else
                                __outsd(arg2.w, *arg5, arg5, eflags)
                                int16_t* edi
                                int16_t temp0_24
                                temp0_24, edi = __insd(arg6, arg2.w, eflags)
                                *edi = temp0_24
                                int16_t* edi_1
                                int16_t temp0_25
                                temp0_25, edi_1 = __insd(edi, arg2.w, eflags)
                                *edi_1 = temp0_25
                                arg6 = *esp
                                arg5 = *(esp + 4)
                                arg4 = *(esp + 8)
                                entry_ebx = *(esp + 0x10)
                                arg2 = *(esp + 0x14)
                                ecx = *(esp + 0x18)
                                eax_3 = *(esp + 0x1c)
                                esp += 0x20
                            
                            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                            arg4 += 1
                        label_499353:
                            
                            if (not(c_1))
                                goto label_499355
                    else
                        void* eax_22
                        eax_22.b = (eax_3 + 1).b * 2
                        *eax_22
                        *eax_22 ^= eax_22.b
                        eax_3 = sbb.d(eax_22, 0x53644945, false)
                        c_1 = unimplemented  {sbb eax, 0x53644945}
                        s_2 = sbb.d(eax_22, 0x53644945, false) s< 0
                    label_4992d5:
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        int16_t temp0_21
                        temp0_21, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                        *(entry_ebx + 0x73) = temp0_21
                        *(esp - 4) = entry_ebx
                        esp -= 4
                        
                        if (c_1)
                            goto label_499353
                        
                        if (c_1)
                            goto label_499334
                        
                        *(esp - 4) = esp
                        esp -= 5
                        void* temp30_1 = arg4
                        arg4 += 1
                        
                        if (temp30_1 + 1 s< 0)
                        label_499355:
                            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                            
                            if (c_1)
                                arg4 += 1
                                
                                if (c_1)
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    goto label_499366
                                
                                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                                continue
                            
                            *arg6 = *arg5
                            arg6 = &arg6[1]
                            arg5 += 1
                            int16_t temp0_26 = entry_ebx
                            entry_ebx = eax_3
                            eax_25 = temp0_26
                            ecx_11 = ecx - 1
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            *eax_25 += eax_25.b
                            entry_ebx[(arg2 << 2) + 0xc0049] += eax_25:1.b
                            goto label_49937e
                        else
                            *(arg2 + 0x65)
                            arg5 = *(arg2 + 0x65) * 0x72724564
                            c_1 = unimplemented  {imul esi, dword [edx+0x65], 0x72724564}
                            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                            continue
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
                    *eax_3 += eax_3.b
                    *(esp + (arg2 << 2)) += ecx.b
                    
                    while (true)
                        ecx -= 1
                        *(eax_3 * 2) += ecx.b
                        *eax_3 += eax_3.b
                        eax_3.b = *0xf4004988
                        eax_3.b ^= *eax_3
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (eax_3 + 1).b
                        *(eax_3 + 2) += ecx.b
                        eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
                    label_4993fd:
                        eax_3.b ^= *eax_3
                        char temp36_1 = *(fsbase + eax_3) ^ eax_3.b
                        *(fsbase + eax_3) = temp36_1
                        
                        if (temp36_1 s>= 0)
                            eax_3.b = (eax_3 + 1).b * 2
                            *eax_3
                            *eax_3 ^= eax_3.b
                            char temp39_1 = *(arg4 + 0x49)
                            *(arg4 + 0x49) = adc.b(temp39_1, eax_3.b, false)
                            bool c_3 = adc.b(temp39_1, eax_3.b, false) u< temp39_1
                            void* temp40_1 = ecx
                            ecx -= 1
                            bool z_2 = temp40_1 == 1
                            
                            while (true)
                                arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                                
                                if (not(z_2) && not(c_3))
                                    uint8_t temp0_29
                                    temp0_29, arg6 = __insb(arg6, arg2.w, eflags)
                                    *arg6 = temp0_29
                                    esp = *(entry_ebx + (arg2 << 1) + 0x6f) * 0x74656b63
                                label_499420:
                                    uint8_t temp0_30
                                    temp0_30, arg6 = __insb(arg6, arg2.w, eflags)
                                    *arg6 = temp0_30
                                    int16_t temp0_31 = esp
                                    esp = eax_3
                                    eax_3 = temp0_31
                                    ecx -= 1
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                label_499427:
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                label_49942d:
                                    *eax_3 += eax_3.b
                                label_49942f:
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *eax_3 += eax_3.b
                                    *(eax_3 - 0x6c) += arg2:1.b
                                label_499442:
                                    void* ecx_12 = ecx - 1
                                    *eax_3 += arg2.b
                                    *eax_3 += eax_3.b
                                    *(eax_3 - 0xbffb678) += eax_3:1.b
                                    eax_3.b ^= *eax_3
                                    *entry_ebx += arg2:1.b
                                    *(entry_ebx + arg5) += (eax_3 + 1).b
                                    *(eax_3 + 2) += ecx_12.b
                                    void* eax_33 = (eax_3 + 2) ^ *(eax_3 + 2)
                                    eax_33.b ^= *eax_33
                                    char temp42_1 = *(fsbase + eax_33) ^ eax_33.b
                                    *(fsbase + eax_33) = temp42_1
                                    
                                    if (temp42_1 s< 0)
                                        sub_40b4b0(eax_33, 0, *(arg4 + 8))
                                        *(eax_33 + 0xc) = arg5
                                        
                                        if (entry_ebx.b != 0)
                                            sub_403428(eax_33)
                                            fsbase->NtTib.ExceptionList = *esp
                                            esp += 0x10
                                        
                                        eax_3 = eax_33
                                        *esp
                                        *(esp + 4)
                                        esp += 8
                                    label_4994c0:
                                        *esp
                                        *(esp + 4)
                                        return eax_3
                                    
                                    eax_3.b = (eax_33 + 1).b * 2
                                    *eax_3
                                    *eax_3 ^= eax_3.b
                                    c_3 = false
                                    *(esp - 4) = arg4
                                    int16_t cs
                                    *(esp - 0x499c) = zx.d(cs)
                                    arg4 = esp - 3
                                    ecx = ecx_12 - 1
                                    z_2 = ecx_12 == 1
                                    *(esp - 0x49a0) = entry_ebx
                                    esp -= 0x49a0
                                
                                uint16_t* esi_3 = __outsd(arg2.w, *arg5, arg5, eflags)
                                int16_t temp0_32
                                temp0_32, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
                                *(entry_ebx + 0x65) = temp0_32
                                
                                if (z_2)
                                    break
                                
                                if (c_3)
                                    if (entry_ebx.b != 0)
                                        sub_403428(arg6)
                                        fsbase->NtTib.ExceptionList = *esp
                                        esp += 0x10
                                    
                                    *esp
                                    *(esp + 4)
                                    *(esp + 8)
                                    *(esp + 0xc)
                                    return arg6
                                
                                arg5 = __outsd(arg2.w, *esi_3, esi_3, eflags)
                                
                                if (not(c_3))
                                    return sub_499480(ecx, arg2, eax_3) __tailcall
                                
                                void* temp48_1 = ecx
                                ecx -= 1
                                z_2 = temp48_1 == 1
                            
                            goto label_4994c0
                        
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        char temp37_1 = *eax_3
                        *eax_3 += eax_3.b
                        
                        if (not(add_overflow(temp37_1, eax_3.b)))
                            goto label_499442
                        
                    label_4993d6:
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        *eax_3 += eax_3.b
                        eax_3.b |= 0x94
                
                goto label_49926c
            
        label_49913a:
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
            char temp14_1 = *eax_3
            *eax_3 += eax_3.b
            
            if (temp14_1 s>= neg.b(eax_3.b))
                ecx -= 1
            label_499153:
                *(eax_3 * 2) += ecx.b
                *eax_3 += eax_3.b
                ecx -= 1
                eax_3:1.b += arg2:1.b
                eax_3.b ^= *eax_3
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (eax_3 + 1).b
                *(eax_3 + 2) += ecx.b
                eax_3 = (eax_3 + 2) ^ *(eax_3 + 2)
                eax_3.b ^= *eax_3
                break
            
            *eax_3 += arg2.b
            void* ecx_4 = eax_3
            eax_3 = ecx
            ecx = ecx_4 - 1
            *(eax_3 * 2) += ecx.b
        
        goto label_499170
    
    goto label_499072
}
