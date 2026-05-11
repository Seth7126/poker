// ============================================================
// 函数名称: sub_42146f
// 虚拟地址: 0x42146f
// WARP GUID: 5fbc8f98-3574-5660-93c1-27c1dc249719
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42146f(char* arg1, int32_t arg2, char* arg3, char* arg4 @ esi, long double arg5 @ st0, char arg6, char* arg7, int32_t arg8, char* arg9, int32_t arg10, char* arg11, char* arg12, char* arg13, char* arg14)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    *arg1 += arg1.b
    int16_t ss
    uint32_t var_4 = zx.d(ss)
    char temp1 = *arg4
    *arg4 += arg3.b
    char* var_8 = arg1
    char* eax = arg9
    uint16_t* arg_18
    int32_t* esp_1 = &arg_18
    int32_t eflags
    char* ecx_1
    char* edx_2
    char* ebx_1
    uint16_t* esi_2
    uint16_t* esi_5
    char* edi_1
    bool c_2
    bool c_5
    bool z_1
    bool z_3
    bool o_1
    
    if (temp1 + arg3.b u>= temp1)
        __outsb(arg7.w, *var_4, var_4, eflags)
        
        if (temp1 != neg.b(arg3.b))
            *(arg8 + (__return_addr << 1) + 0x4d)
            char* eax_1 = *(arg8 + (__return_addr << 1) + 0x4d) * 0x65646f
            bool c_1 = unimplemented  {imul eax, dword [ecx+ebp*2+0x4d], 0x65646f}
            *eax_1 = adc.b(*eax_1, eax_1.b, c_1)
            *eax_1 += eax_1.b
            undefined
        
        *eax += eax.b
        *eax += arg6
        char temp4_1 = *arg7
        *arg7 += arg8.b
        bool c_4 = temp4_1 + arg8.b u< temp4_1
        bool z_2 = temp4_1 == neg.b(arg8.b)
        edi_1 = eax
        esi_5 = arg_18
        ebx_1 = arg11
        edx_2 = arg12
        ecx_1 = arg13
        eax = arg14
        void arg_34
        esp_1 = &arg_34
        
        while (true)
            if (c_4)
                goto label_421537
            
            esi_2 = __outsb(edx_2.w, *esi_5, esi_5, eflags)
            
            if (not(z_2))
                uint16_t* esi_6 = __outsd(edx_2.w, *esi_2, esi_2, eflags)
                __outsb(edx_2.w, *esi_6, esi_6, eflags)
                *eax = adc.b(*eax, eax.b, c_4)
                eax.b = *eax
                char temp10_1 = ebx_1:1.b
                char temp11_1 = ebx_1:1.b
                ebx_1:1.b *= 2
                
                if (temp10_1 == neg.b(temp11_1) || ecx_1 == 1)
                    *(ecx_1 - 1) += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *(ecx_1 - 1) = *(ecx_1 - 1)
                    char temp15_1 = *eax
                    *eax += eax.b
                    c_5 = temp15_1 + eax.b u< temp15_1
                    goto label_4214f0
                
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *(ecx_1 - 1) = *(ecx_1 - 1)
                *eax += eax.b
                *esp_1
                char temp14_1 = *ebx_1
                *ebx_1 += (ecx_1 - 1).b
                c_2 = temp14_1 + (ecx_1 - 1).b u< temp14_1
                z_1 = temp14_1 == neg.b((ecx_1 - 1).b)
                *(esp_1 - 2) = eax
                edi_1 = *(esp_1 - 2)
                esi_2 = *(esp_1 + 2)
                *(esp_1 + 6)
                ebx_1 = *(esp_1 + 0xe)
                edx_2 = *(esp_1 + 0x12)
                ecx_1 = *(esp_1 + 0x16)
                eax = *(esp_1 + 0x1a)
                esp_1 += 0x1e
                
                if (c_2)
                    *eax += eax.b
                    char temp16_1 = eax[0x80000000]
                    eax[0x80000000] += eax.b
                    eax.b = sbb.b(eax.b, *eax, temp16_1 + eax.b u< temp16_1)
                else
                    uint16_t* esi_3 = __outsb(edx_2.w, *esi_2, esi_2, eflags)
                    
                    if (z_1)
                        goto label_4214f2
                    
                    uint16_t* esi_4 = __outsd(edx_2.w, *esi_3, esi_3, eflags)
                    uint8_t temp0_1
                    temp0_1, edi_1 = __insb(edi_1, edx_2.w, eflags)
                    *edi_1 = temp0_1
                    esi_5 = __outsd(edx_2.w, *esi_4, esi_4, eflags)
                    *eax = adc.b(*eax, eax.b, c_2)
                    *eax += eax.b
                    eax, edx_2, ecx_1 = (*(eax + (edi_1 << 2) + 0x10042))()
                    *eax += eax.b
                    *eax += eax.b
                    char temp22_1 = eax[1]
                    eax[1] += eax.b
                    *eax = sbb.b(*eax, eax.b, temp22_1 + eax.b u< temp22_1)
                    char temp23_1 = edx_2.b
                    edx_2.b |= eax[0x61]
                    c_4 = false
                    z_2 = (temp23_1 | eax[0x61]) == 0
                    continue
            
            int32_t temp8_1 = *(eax + 0x6f)
            *(eax + 0x6f) |= edx_2
            c_2 = false
            z_3 = (temp8_1 | edx_2) == 0
            o_1 = false
            break
        
        goto label_42151e
    
    *eax += eax.b
    char temp2_1 = eax[1]
    eax[1] += eax.b
    c_5 = temp2_1 + eax.b u< temp2_1
    label_4214f0:
    int32_t temp3_1 = *eax
    *eax = sbb.d(temp3_1, eax, c_5)
    c_2 = unimplemented  {sbb dword [eax], eax}
    z_1 = sbb.d(temp3_1, eax, c_5) == 0
    label_4214f2:
    int16_t cs
    *(esp_1 - 4) = zx.d(cs)
    *(esp_1 - 8) = eax
    int32_t edi_2 = *(esp_1 - 8)
    esi_5 = *(esp_1 - 4)
    *esp_1
    ebx_1 = esp_1[2]
    edx_2 = esp_1[3]
    ecx_1 = esp_1[4]
    eax = esp_1[5]
    void* esp_8 = &esp_1[6]
    
    if (c_2)
        goto label_42155c
    
    esi_5 = __outsb(edx_2.w, *esi_5, esi_5, eflags)
    char* ecx_5
    char* ebx_4
    void** esp_20
    int32_t ebp_5
    uint16_t* esi_11
    uint16_t* gsbase
    bool c_10
    
    if (z_1)
        *eax += edx_2.b
    label_421550:
        ecx_1[0xbcff0000] += ecx_1.b
        eax = 0xb8880042
        edx_2 = &edx_2[1]
    label_42155c:
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        char temp6_1 = eax[0x5308001c]
        eax[0x5308001c] += eax.b
        c_2 = temp6_1 + eax.b u< temp6_1
        *(esp_8 - 4) = 0x6948776f
        esp_1 = esp_8 - 4
    label_42156e:
        __outsb(edx_2.w, *esi_5, esi_5, eflags)
    label_421571:
        *eax = adc.b(*eax, eax.b, c_2)
        eax.b = *0xd400423c
        *ecx_1 += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        char temp12_1 = *eax
        *eax += eax.b
        c_2 = unimplemented  {sbb eax, 0x72540b00}
        z_3 = sbb.d(eax, 0x72540b00, temp12_1 + eax.b u< temp12_1) == 0
        bool o_2 = unimplemented  {sbb eax, 0x72540b00}
        *esp_1
        uint16_t* esi_9 = esp_1[1]
        esp_1[2]
        esp_1[4]
        esp_1[6]
        char* eax_2 = esp_1[7]
        __outsb((esp_1[5]).w, *esi_9, esi_9, eflags)
        
        if (not(c_2))
        label_421601:
            *eax_2 = &eax_2[*eax_2]
            *eax_2 -= 1
            *eax_2 = &eax_2[*eax_2]
            jump(*(eax_2 + 0xffffffd4))
        
        edi_1 = esp_1[8]
        esi_11 = esp_1[9]
        ebp_5 = esp_1[0xa]
        ebx_4 = esp_1[0xc]
        edx_2 = esp_1[0xd]
        ecx_5 = esp_1[0xe]
        eax = esp_1[0xf]
        esp_1 = &esp_1[0x10]
        
        if (c_2)
            while (true)
                if (not(c_2))
                    if (not(o_2))
                        eax_2 = __in_oeax_immb(0x40, eflags)
                        *eax_2 += ecx_5.b
                        break
                    
                    esi_11 = __outsd(edx_2.w, *esi_11, esi_11, eflags)
                    
                    if (not(c_2))
                        *(esp_1 - 4) = edi_1
                        esp_1 -= 4
                        continue
                
                *eax += eax.b
                *ebx_4 = 0
                ecx_5.b |= edi_1[0x6e]
                __bound_gprv_mema32(ebp_5, *(ebx_4 + (eax << 1) + 0x6c))
                void* esp_18 = *(ebx_4 + 0x6b) * &data_4274b0
                *eax = rol.b(*eax, 1)
                ebx_4:1.b *= 2
                *eax = rol.b(*eax, 1)
                ebx_4:1.b *= 2
                *eax = &eax[*eax]
                *eax += eax.b
                *eax += eax.b
                eax[0x80000000] += eax.b
                eax.b = 0
                edi_1[0x6e]
                ecx_5.b |= edi_1[0x6e]
                c_10 = false
                esp_20 = esp_18 + 2
                
                if (add_overflow(esp_18 + 1, 1))
                    goto label_4216d2
                
                if (esp_18 == 0xfffffffe)
                    jump(0x4216d6)
                
                jump(0x421694)
            
            goto label_421601
        
        esi_2 = __outsb(edx_2.w, *esi_11, esi_11, eflags)
    else
        *(esp_8 - 4) = 0x6948776f
        esp_1 = esp_8 - 4
        esi_5 = __outsb(edx_2.w, *esi_5, esi_5, eflags)
        
        if (z_1)
            goto label_42156e
        
        *ebx_1
        uint8_t temp0_2
        temp0_2, edi_1 = __insb(edi_2, edx_2.w, eflags)
        *edi_1 = temp0_2
        *eax += eax.b
        *(esp_1 - 4) = *eax
        esp_1 -= 4
        ebx_1:1.b = 0x42
        *ecx_1 += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        char temp9_1 = eax[0x5009001a]
        eax[0x5009001a] += eax.b
        c_2 = temp9_1 + eax.b u< temp9_1
        z_3 = temp9_1 == neg.b(eax.b)
        o_1 = add_overflow(temp9_1, eax.b)
        esi_2 = __outsd(edx_2.w, *esi_5, esi_5, eflags)
    label_42151e:
        
        if (not(o_1))
            if (o_1)
                goto label_421571
            
            esi_5 = __outsb(edx_2.w, *(gsbase + esi_2), esi_2, eflags)
            *eax = adc.b(*eax, eax.b, c_2)
            *ecx_1 ^= eax.b
            ebx_1:1.b *= 2
            edx_2[eax << 1] = edx_2[eax << 1]
            *eax = &eax[*eax]
            *eax += eax.b
            *eax += eax.b
        label_421537:
            eax[1] += eax.b
            ecx_1 = &ecx_1[1]
            int16_t temp0_3
            temp0_3, eflags = __arpl_memw_gpr16(*(ebx_1 + 0x65), esp_1.w)
            *(ebx_1 + 0x65) = temp0_3
            uint8_t* edi_3
            uint8_t temp0_4
            temp0_4, edi_3 = __insb(edi_1, edx_2.w, eflags)
            *edi_3 = temp0_4
            *(esp_1 - 4) = 0x10007261
            esp_8 = esp_1 - 4
            goto label_421550
    
    if (z_3)
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        *eax += eax.b
    else
        *edx_2 = adc.b(*edx_2, eax.b, c_2)
        *(cs + eax) = &eax[*(cs + eax)]
        eax = (*(edi_1 + 0x10042))()
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
    
    int16_t ds
    *(esp_1 - 4) = zx.d(ds)
    *esi_2 += eax.b
    edi_1 = *(esp_1 - 5)
    uint16_t* esi_12 = *(esp_1 - 1)
    ebp_5 = *(esp_1 + 3)
    void* ebx_5 = *(esp_1 + 0xb)
    edx_2 = *(esp_1 + 0xf)
    ecx_5 = *(esp_1 + 0x13)
    eax = *(esp_1 + 0x17)
    void* esp_16 = esp_1 + 0x1b
    
    if (esp_1 - 5 s>= 0)
        char temp20_1 = ebx_5:1.b
        char temp21_1 = ebx_5:1.b
        ebx_5:1.b *= 2
        *ecx_5 = sbb.b(*ecx_5, eax.b, temp20_1 + temp21_1 u< temp20_1)
        ebx_5:1.b *= 2
        *eax = &eax[*eax]
        *eax += eax.b
        *eax += eax.b
        eax[0x80000000] += eax.b
        eax.b &= *eax
        *(esp_16 - 4) = zx.d(cs)
        esp_16 -= 4
        edi_1 -= 1
    else
        if (esp_1 == 5)
            *eax += edx_2.b
            *edi_1 += (&eax[1]).b
            ebx_5:1.b *= 2
            edx_2:1.b = 0x42
            eax[0xffffffd5] += (&eax[1]).b
            eax[1] += (&eax[1]).b
            eax[1] += (&eax[1]).b
            *ecx_5 = *ecx_5
            eax[1] += (&eax[1]).b
            *esp_16
            *edi_1 += (&eax[1]).b
            *(esp_16 - 2) = esi_12
            *(ebx_5 + 0x69)
            *(ebx_5 + 0x69)
            bool c_8 = unimplemented  {imul esi, dword [ebx+0x69], 0x656c62}
            eax[1] = adc.b(eax[1], (&eax[1]).b, c_8)
            int32_t eflags_1
            char temp0_5
            temp0_5, eflags_1 = __das((&eax[1]).b, eflags)
            void* eax_3
            eax_3.b = temp0_5
            *eax_3 += eax_3
            undefined
        
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        eax[0x4f0e0022] += eax.b
    
    uint16_t* esi_14 = __outsb(edx_2.w, *esi_12, esi_12, eflags)
    ebx_4 = ebx_5 + 1
    uint16_t* esi_15 = __outsd(edx_2.w, *esi_14, esi_14, eflags)
    esi_11 = __outsb(edx_2.w, *esi_15, esi_15, eflags)
    int32_t ebp_6
    int32_t* esi_19
    
    if (ebx_5 != 0xffffffff)
        if (ebx_5 + 1 s>= 0)
            *(esp_16 - 4) = eax
            __outsd(edx_2.w, *esi_11, esi_11, eflags)
            
            if (add_overflow(ebx_5, 1))
                jump(0x4216bb)
            
            jump(0x421646)
        
        edx_2 = &edx_2[1]
        eax.b += edx_2:1.b
        *eax += eax.b
        *(esp_16 - 4) = eax
        esp_20 = esp_16 - 4
        *eax += eax.b
        *ecx_5 += 1
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        char temp34_1 = eax[0x4f090026]
        eax[0x4f090026] += eax.b
        c_10 = temp34_1 + eax.b u< temp34_1
    label_4216d2:
        uint16_t* esi_17 = __outsb(edx_2.w, *esi_11, esi_11, eflags)
        ebp_6 = ebp_5 + 1
        uint16_t* esi_18 = __outsb(edx_2.w, *esi_17, esi_17, eflags)
        void** temp32_1 = esp_20
        esp_20 += 1
        esi_19 = __outsd(edx_2.w, *esi_18, esi_18, eflags)
        int16_t temp0_6
        temp0_6, eflags = __arpl_memw_gpr16(*(ebx_4 + 0x3c), ebp_6.w)
        *(ebx_4 + 0x3c) = temp0_6
        
        if (temp32_1 == 0xffffffff)
            jump(0x4216dd)
        
        goto label_42171f
    
    *eax += eax.b
    char temp31_1 = eax[0x4f0a0025]
    eax[0x4f0a0025] += eax.b
    bool c_11 = temp31_1 + eax.b u< temp31_1
    esi_11 = __outsb(edx_2.w, *esi_11, esi_11, eflags)
    esp_20 = esp_16 + 1
    
    if (not(c_11))
        if (edi_1 == 1 || c_11)
            jump(0x42171a)
        
        jump("r<uB")
    
    *eax += eax.b
    char temp36_1 = eax[0x4f0b0028]
    eax[0x4f0b0028] += eax.b
    c_10 = temp36_1 + eax.b u< temp36_1
    uint16_t* esi_21 = __outsb(edx_2.w, *esi_11, esi_11, eflags)
    ebp_6 = ebp_5 - 1
    bool z_7 = ebp_5 == 1
    esi_19 = __outsd(edx_2.w, *esi_21, esi_21, eflags)
    
    if (z_7)
    label_42171f:
        void** temp35_1 = esp_20
        esp_20 += 1
        z_7 = temp35_1 == 0xffffffff
        esi_19 = __outsd(edx_2.w, *esi_19, esi_19, eflags)
        
        if (z_7 || c_10)
            jump(&data_421724)
    
    int32_t eflags_2
    int16_t temp0_7
    temp0_7, eflags_2 = __arpl_memw_gpr16(*(ebx_4 - 4), ebp_6.w)
    *(ebx_4 - 4) = temp0_7
    
    if (not(z_7))
        eax.b += ebx_4:1.b
        *eax += eax.b
        undefined
    
    ss = *esp_20
    esp_20 += 2
    char temp40_1 = *eax
    *eax += ecx_5.b
    c_10 = temp40_1 + ecx_5.b u< temp40_1
    int32_t eflags_3
    int16_t temp0_8
    temp0_8, eflags_3 = __arpl_memw_gpr16(*(gsbase + esi_19 + 0x6f), ecx_5.w)
    *(gsbase + esi_19 + 0x6f) = temp0_8
    
    if (not(c_10))
        esp_20[1]
        void* ebp_7 = esp_20[2]
        esp_20[4]
        esp_20[6]
        esp_20[7]
        uint8_t* edi_7
        uint8_t temp0_10
        temp0_10, edi_7 = __insb(*esp_20, (esp_20[5]).w, eflags_3)
        *edi_7 = temp0_10
        *(ebp_7 + 0x63)
        *((&esp_20[8] | *(ebp_7 + 0x63)) - 4) = ebp_7
        jump(0x4217eb)
    
    edx_2.b = adc.b((&edx_2[1]).b, ecx_5.b, c_10)
    *(ebx_4 + ecx_5) += ebx_4.b
    eax[0x4c0042d4] += eax.b
    char* eax_5 = *esi_19
    void* esi_24 = &esi_19[1]
    *eax_5 += eax_5.b
    *(edx_2 + 2)
    void* eax_6 = *esp_20
    void* ecx_7
    ecx_7:1.b = 0x42
    *(esp_20 + 0x61940045) += 0x42
    *(ecx_7 + 0x64b40042) += (ecx_7 + 1).b
    *(eax_6 + 0x3e) += (&edx_2[2]).b
    *(eax_6 - 0x1fffbce2) += (ecx_7 + 2):1.b
    void* eax_7
    eax_7.b = (eax_6 & *ebx_4).b | 0x23
    *(eax_7 + 0x19) += (&ebx_4[1]):1.b
    *(eax_7 - 0xfffbce7) += (&ebx_4[2]).b
    *esp_20 = zx.d(ss)
    ebx_4[3 + (ebp_6 << 2)] += eax_7.b
    *eax_7 += (ecx_7 + 2).b
    *edi_1 = eax_7
    void* edi_8 = &edi_1[4]
    *(esi_24 + (&edx_2[5] << 3) + 0x42) += (ecx_7 + 2).b
    *(eax_7 - 0x2a) += (&ebx_4[3]):1.b
    *(&esp_20[ebp_6] - 0x492bffbe) += eax_7.b
    *(esi_24 * 5 + 0x42) += eax_7.b
    *(eax_7 - 0x47) += (ecx_7 + 2).b
    *(eax_7 + (edi_8 << 2)) += (ecx_7 + 2).b
    *(eax_7 - 0xe) += (ecx_7 + 2):1.b
    eax_7.b += (&ebx_4[3]):1.b
    eax_7.b = __salc(eflags_3)
    *(edi_8 + &edx_2[0xb] + 0x43) += eax_7.b
    eax_7.b *= 2
    *esp_20
    *(&ebx_4[4] + &edx_2[0xb] + 0x43) += eax_7.b
    *(edi_8 + &edx_2[0xb] - 0x2387ffbd) += eax_7:1.b
    *eax_7 += eax_7:1.b
    
    if (ecx_7 != 0xffffffff)
        jump(&data_421918:1)
    
    jump(0x4218d7)
}
