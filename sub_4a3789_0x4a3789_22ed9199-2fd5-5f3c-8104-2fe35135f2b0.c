// ============================================================
// 函数名称: sub_4a3789
// 虚拟地址: 0x4a3789
// WARP GUID: 22ed9199-2fd5-5f3c-8104-2fe35135f2b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49adfc, sub_4a3f84
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4a3789(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi, uint32_t arg7[0x4] @ xmm1, void* arg8, char* arg9, int32_t arg10, int32_t arg11, uint16_t* arg12, void* arg13, char* arg14, char* arg15, char* arg16)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    int32_t eflags_2
    char temp0_8
    char temp1_1
    temp0_8, temp1_1, eflags_2 = __aaa(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0_8
    arg1:1.b = temp1_1
    char* edx = arg2 - 1
    char temp1 = *arg6
    *arg6 += arg1.b
    __andps_xmmxud_memxud(arg7, *(arg3 + 0x64))
    char* entry_ebx
    char* var_4 = entry_ebx
    uint16_t* esi = __outsd(edx.w, *arg5, arg5, eflags_2)
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
    *(entry_ebx + 0x65) = temp0
    int32_t* eax_1
    char* eax
    void** esp_1
    uint16_t* esi_4
    uint16_t* esi_5
    bool c_2
    bool z_1
    
    if (temp1 == neg.b(arg1.b))
        char** var_8 = &var_4
        esp_1 = &var_8
        *arg1 = adc.b(*arg1, arg1.b, temp1 + arg1.b u< temp1)
        *arg1 -= arg1.b
        entry_ebx:1.b *= 2
        *arg1 -= arg1.b
        entry_ebx:1.b *= 2
        *arg1 = &arg1[*arg1]
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = &arg1[*arg1]
        eax = arg1 | 0x65696c43
        c_2 = false
        z_1 = (arg1 | 0x65696c43) == 0
    label_4a37ff:
        esi_5 = __outsb(edx.w, *esi, esi, eflags_1)
        
        if (z_1)
            goto label_4a3852
        
        esi_5 = __outsd(edx.w, *esi_5, esi_5, eflags_1)
        
        if (c_2)
            void* eax_3 = eax ^ *eax
            *entry_ebx |= edx:1.b
            eax:1.b = (eax_3 + 1):1.b + entry_ebx:1.b
            goto label_4a3881
        
        bool cond:2_1 = arg4 - 1 s< 0
        arg6 = *esp_1
        esi_4 = esp_1[1]
        arg4 = esp_1[2]
        entry_ebx = esp_1[4]
        edx = esp_1[5]
        arg3 = esp_1[6]
        eax_1 = esp_1[7]
        esp_1 = &esp_1[8]
        
        if (cond:2_1)
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 = *eax_1
            *eax_1 += eax_1.b
            goto label_4a37d0
        
        char temp8_1 = *eax_1
        *eax_1 = adc.b(temp8_1, eax_1.b, c_2)
        eax_1.b = adc.b(eax_1.b, 0, 
            adc.b(temp8_1, eax_1.b, c_2) u< temp8_1 || (c_2 && adc.b(temp8_1, eax_1.b, c_2) == temp8_1))
        char temp9_1 = entry_ebx:1.b
        char temp10_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        eax_1.b = adc.b(eax_1.b, 0, temp9_1 + temp10_1 u< temp9_1)
        entry_ebx:1.b *= 2
        *eax_1 += eax_1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        eax_1[-0x20000000].b += eax_1.b
        eax_1.b += *eax_1
        char temp11_1 = arg3.b
        char temp12_1 = arg3[0x50]
        arg3.b += arg3[0x50]
        bool c_5 = temp11_1 + temp12_1 u< temp11_1
        *(esp_1 - 4) = esp_1
        esp_1 -= 4
        char temp13_1 = *eax_1
        *eax_1 = adc.b(temp13_1, eax_1.b, c_5)
        eax_1.b = sbb.b(eax_1.b, 0, 
            adc.b(temp13_1, eax_1.b, c_5) u< temp13_1
                || (c_5 && adc.b(temp13_1, eax_1.b, c_5) == temp13_1))
        char temp14_1 = entry_ebx:1.b
        char temp15_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        eax_1.b = sbb.b(eax_1.b, 0, temp14_1 + temp15_1 u< temp14_1)
    else
        char* edi = var_4
        arg4 = arg8
        entry_ebx = arg9
        char* arg_18
        eax = arg_18
        char* esi_2 = __outsb(arg10.w, *__return_addr, __return_addr, eflags_1)
        uint8_t temp0_1
        temp0_1, arg6 = __insb(edi, arg10.w, eflags_1)
        *arg6 = temp0_1
        eax.b ^= 0x37
        edx = arg10 - 1
        eax[0x40040ed] += edx.b
        *esi_2 += arg11.b
        arg3 = arg11 - 1
        arg_18 = entry_ebx
        esp_1 = &arg_18
        esi = __outsd(edx.w, *esi_2, esi_2, eflags_1)
        int16_t temp0_2
        temp0_2, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
        *(entry_ebx + 0x65) = temp0_2
        
        if (arg11 == 1)
            char temp4_1 = *0x65696c43
            *0x65696c43 += arg3.b
            c_2 = temp4_1 + arg3.b u< temp4_1
            z_1 = temp4_1 == neg.b(arg3.b)
            goto label_4a37ff
        
        char* edi_1 = arg_18
        arg4 = arg13
        edx = arg15
        arg3 = arg16
        int32_t* arg_34
        eax_1 = arg_34
        esi_4 = __outsb(edx.w, *arg12, arg12, eflags_1)
        uint8_t temp0_3
        temp0_3, arg6 = __insb(edi_1, edx.w, eflags_1)
        *arg6 = temp0_3
        char temp5_1 = eax_1.b
        eax_1.b = eax_1.b
        void arg_38
        arg_34 = &arg_38
        esp_1 = &arg_34
        *eax_1 = adc.b(*eax_1, eax_1.b, temp5_1 u>= 0)
        eax_1.b = 0
        entry_ebx:1.b = arg14:1.b * 2
        eax_1.b = 0
        entry_ebx:1.b *= 2
        *eax_1 += eax_1
        *eax_1 = *eax_1
        *eax_1 = *eax_1
        *eax_1 = *eax_1
    label_4a37d0:
        *eax_1 += eax_1.b
        eax = eax_1 | 0x65696c43
        esi_4 = __outsb(edx.w, *esi_4, esi_4, eflags_1)
        
        if (eax != 0)
            esi_5 = __outsd(edx.w, *esi_4, esi_4, eflags_1)
            
            if (eax u>= 0)
                *(esi_5 + 0x54)
                *eax += eax.b
                undefined
            
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            eax[0xc004a38] += edx.b
            *eax += eax.b
            eax[0xf4004988] += eax:1.b
            
            while (true)
                eax.b ^= *eax
                *entry_ebx += edx:1.b
                *(entry_ebx + esi_5) += (&eax[1]).b
                eax[2] += arg3.b
                eax = &eax[2] ^ *(eax + 2)
            label_4a3881:
                eax.b ^= *eax
                TEB* fsbase
                char temp7_1 = *(fsbase + eax) ^ eax.b
                *(fsbase + eax) = temp7_1
                
                if (temp7_1 s< 0)
                    break
                
                eax_1.b = (&eax[1]).b * 2
                *eax_1
                *eax_1 ^= eax_1.b
                char temp17_1 = eax_1.b
                eax_1.b = adc.b(temp17_1, 0x45, false)
                bool c_9 = adc.b(temp17_1, 0x45, false) u< temp17_1
                char* temp18_1 = arg3
                arg3 -= 1
                bool cond:9_1 = temp18_1 == 1
                *(esp_1 - 4) = entry_ebx
                esp_1 -= 4
                uint16_t* esi_6 = __outsd(edx.w, *esi_5, esi_5, eflags_1)
            label_4a3896:
                int16_t temp0_4
                temp0_4, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
                *(entry_ebx + 0x65) = temp0_4
                
                if (not(cond:9_1))
                    void* edi_2 = *esp_1
                    char* esi_7 = esp_1[1]
                    char* ebp_1 = esp_1[2]
                    entry_ebx = esp_1[4]
                    edx = esp_1[5]
                    arg3 = esp_1[6]
                    eax_1 = esp_1[7]
                    esp_1 = &esp_1[8]
                    uint16_t* esi_8 = __outsb(edx.w, *esi_7, esi_7, eflags_1)
                    uint8_t temp0_5
                    temp0_5, arg6 = __insb(edi_2, edx.w, eflags_1)
                    *arg6 = temp0_5
                    arg4 = &ebp_1[1]
                    
                    if (c_9)
                        goto label_4a3915
                    
                    esi_4 = __outsd(edx.w, *esi_8, esi_8, eflags_1)
                    
                    if (c_9)
                    label_4a3833:
                        *eax_1 += eax_1.b
                        *eax_1 += eax_1.b
                        eax_1[-0x20000000].b += eax_1.b
                        eax = eax_1 + *eax_1
                        char temp19_1 = eax.b
                        eax.b += 0x50
                        esi_5 = __outsd(edx.w, *esi_4, esi_4, eflags_1)
                        
                        if (temp19_1 u< 0xb0)
                            *edx
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                        label_4a3852:
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *eax += eax.b
                            *edx
                            eax.b = eax.b
                            *eax += eax.b
                            eax.b = *0xf4004988
                            continue
                    else
                        eax:1.b = (eax_1 + 1):1.b + edx:1.b
                        *edx
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                    
                    *eax += eax.b
                label_4a38ba:
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    trap(0xd)
                
                eax_1:1.b += entry_ebx:1.b
                eax_1.b ^= *eax_1
                char temp20_1 = *(fsbase + eax_1) ^ eax_1.b
                *(fsbase + eax_1) = temp20_1
                
                if (temp20_1 s< 0)
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *edx
                    eax_1.b = (*esp_1).b
                else
                    void* eax_5
                    eax_5.b = (eax_1 + 1).b * 2
                    *eax_5
                    *eax_5 ^= eax_5.b
                    eax_1 = adc.d(eax_5, 0x43644945, false)
                    char* esi_9 = __outsd(edx.w, *esi_6, esi_6, eflags_1)
                    int32_t* ebx
                    
                    if (adc.d(eax_5, 0x43644945, false) != 0)
                        if (adc.d(eax_5, 0x43644945, false) u>= eax_5)
                            goto label_4a396b
                        
                    label_4a39de:
                        ebx = eax_1
                        edx.b = 1
                        (*(*ebx + 0x1c))()
                        
                        if (ebx[4].b != 0)
                            sub_4a3f84(ebx, 1)
                        
                        goto label_4a39fd
                    
                    cond:9_1 = esi_9 == 1
                    esi_6 = __outsd(edx.w, *(esi_9 - 1), esi_9 - 1, eflags_1)
                    
                    if (esi_9 == 1)
                        *eax_1 += arg3.b
                        char* eax_6 = eax_1 ^ *eax_1
                        eax_6.b ^= *eax_6
                        char temp24_1 = *(fsbase + eax_6) ^ eax_6.b
                        *(fsbase + eax_6) = temp24_1
                        
                        if (temp24_1 s< 0)
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *arg3 s>>= 0x4a
                            *(eax_6 * 2) += arg3.b
                            goto label_4a399a
                        
                        void* eax_7
                        eax_7.b = (&eax_6[1]).b * 2
                        *eax_7
                        *eax_7 ^= eax_7.b
                        *(arg4 + 0x49) = sbb.b(*(arg4 + 0x49), eax_7.b, false)
                        arg6 = *esp_1
                        int32_t* esi_11 = esp_1[1]
                        int32_t* ebp_2 = esp_1[2]
                        ebx = esp_1[4]
                        edx = esp_1[5]
                        int32_t* ecx_1 = esp_1[6]
                        int32_t* eax_8 = esp_1[7]
                        esp_1 = &esp_1[8]
                        int32_t esi_12 = __outsb(edx.w, *esi_11, esi_11, eflags_1)
                        esi_9 = __outsd(edx.w, *(esi_12 - 1), esi_12 - 1, eflags_1)
                        
                        if (esi_12 != 1)
                            *(esi_9 + 0x64)
                        label_4a396b:
                            __outsb(edx.w, *esi_9, esi_9, eflags_1)
                            *(esp_1 - 4) = edx
                            *(esp_1 - 4)
                            uint16_t* esi_15 = *esp_1
                            esp_1[1]
                            edx = esp_1[4]
                            uint16_t* ecx_2 = esp_1[5]
                            eax_6 = esp_1[3] + __outsb(edx.w, *esi_15, esi_15, eflags_1)
                            *ecx_2 s>>= 0x4a
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            *eax_6 += eax_6.b
                            eax_6.b *= 2
                            *edx
                            eax_6.b = eax_6.b
                        label_4a399a:
                            *eax_6 += eax_6.b
                            *edx
                            trap(0xd)
                        
                        void* eax_9
                        eax_9.b = (eax_8 ^ *eax_8).b + 0x33
                        *(eax_9 + 1) += ecx_1.b
                        int32_t* eax_11 = (eax_9 + 1) ^ *(eax_9 + 1)
                        eax_11.b ^= *eax_11
                        char temp28_1 = *(fsbase + eax_11)
                        *(fsbase + eax_11) ^= eax_11.b
                        bool p_1 = unimplemented  {xor byte [fs:eax], al}
                        
                        if ((temp28_1 ^ eax_11.b) s< 0)
                            if (not(p_1))
                                ebx[-0x1d0c1d40].b += ecx_1.b
                                eax_11.b = __salc(eflags_1)
                            else
                                *(ecx_1 * 2 - 0x4e) += edx:1.b
                                *(ebx + 0x58ce8c3) += ecx_1
                                *eax_11 += eax_11.b
                            label_4a39fd:
                                eax_11 = *data_5308e0
                                ecx_1 = arg6
                                edx = esi_9
                            
                            char** eax_16 = sub_49adfc(eax_11, edx, ecx_1)
                            ebx[3] = eax_16
                            ebx[4].b = 1
                            *esp_1
                            esp_1[1]
                            esp_1[2]
                            esp_1[3]
                            return eax_16
                        
                        void* eax_12
                        eax_12.b = (eax_11 + 1).b * 2
                        *eax_12
                        *eax_12 ^= eax_12.b
                        int32_t temp31_1 = *(ebp_2 + 0x49)
                        eax_1 = adc.d(eax_12, temp31_1, false)
                        uint16_t* esi_17 = __outsb(edx.w, *esi_9, esi_9, eflags_1)
                        
                        if (ecx_1 == 1 || adc.d(eax_12, temp31_1, false) u< eax_12)
                            ebx[0x6e40].b += (ecx_1 - 1).b
                            *eax_1 += eax_1.b
                            ebx[3]
                            (*(*eax_1 + 0x64))()
                            ebx[3]
                            int32_t eax_19 = (*(**data_5308e0 + 0x18))()
                            *esp_1
                            esp_1[1]
                            esp_1[2]
                            return eax_19
                        
                        uint8_t* edi_4
                        uint8_t temp0_6
                        temp0_6, edi_4 = __insb(arg6, edx.w, eflags_1)
                        *edi_4 = temp0_6
                        int32_t esp_9 = *(eax_1 + (edx << 1) + 0x6f) * 0x61527472
                        int32_t esi_18 = __outsb(edx.w, *esi_17, esi_17, eflags_1)
                        *(esp_9 - 4) = ebp_2
                        *(esp_9 - 8) = ebx
                        *(esp_9 - 0xc) = esi_18
                        *(esp_9 - 0x10) = edi_4
                        esp_1 = esp_9 - 0x10
                        arg6 = ecx_1 - 1
                        esi_9 = edx
                        goto label_4a39de
                    
                    *(esi_6 + 0x64)
                    arg4 = *(esi_6 + 0x64) * 0x6b636f53
                    c_9 = unimplemented  {imul ebp, dword [esi+0x64], 0x6b636f53}
                    
                    if (esi_9 == 1)
                        goto label_4a3896
                    
                    *(eax_1 + 0x39) = rrc.b(*(eax_1 + 0x39), 0x4a, c_9)
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                label_4a3915:
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *eax_1 += eax_1.b
                    *(eax_1 + 0x39) += entry_ebx.b
                    edx -= 1
                    *(eax_1 * 2) += arg3.b
                
                *eax_1 += eax_1.b
                *edx
                trap(0xd)
            
            goto label_4a38ba
        
        *eax += eax.b
        eax_1, edx, arg3 = (*(eax * 2))()
    entry_ebx:1.b *= 2
    *eax_1 += eax_1
    goto label_4a3833
}
