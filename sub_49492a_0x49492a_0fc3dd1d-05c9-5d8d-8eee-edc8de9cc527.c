// ============================================================
// 函数名称: sub_49492a
// 虚拟地址: 0x49492a
// WARP GUID: 0fc3dd1d-05c9-5d8d-8eee-edc8de9cc527
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WSAGetLastError
// [内部子函数调用]: sub_403828, sub_494e64, sub_40b5a8, sub_40ac70, sub_406c44, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49492a(char* arg1, char* arg2, char* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x80000000] += arg1.b
    bool c = arg1 u>= 0x90b7fc00
    int32_t eflags
    void* eax
    char* eax_2
    void* ecx_2
    void* entry_ebx
    void* const** esp
    void* esp_1
    uint16_t* esi
    uint16_t* gsbase
    
    if (not(c))
        arg1[0x6f480400] += (&arg1[0x6f480400]).b
        arg1[0xef480400] += (&arg1[0x6f480400]).b
        *(arg1 + 0x6f480400) |= &arg1[0x6f480400]
        eax.b = (&arg1[0x6f480400]).b | 0x4f
    label_4949bb:
        uint16_t* esi_3 = __outsb(arg2.w, *arg5, arg5, eflags)
        uint16_t* esi_4 = __outsd(arg2.w, *esi_3, esi_3, eflags)
        uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
        esi = __outsb(arg2.w, *esi_5, esi_5, eflags)
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(gsbase + arg3 + (arg4 << 1) + 0x6e), esi.w)
        *(gsbase + arg3 + (arg4 << 1) + 0x6e) = temp0_1
        eax.b = *0x4942
        *eax += eax.b
        entry_ebx:1.b = (entry_ebx + 1):1.b * 2
    else
        void* const* var_4 = &__return_addr
        esp = &var_4
        arg1[0x6f480400] = adc.b(arg1[0x6f480400], (&arg1[0x6f480400]).b, c)
        arg1[0x6f480400] -= (&arg1[0x6f480400]).b
        entry_ebx:1.b *= 2
        eax.b = (&arg1[0x6f480400]).b - 0x73
        arg3 -= 1
        *arg3 += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        char temp2_1 = *(eax + 0x50040006)
        *(eax + 0x50040006) += eax.b
        esi = __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (temp2_1 + eax.b u>= temp2_1)
            esp_1 = 0x34004010
            *eax += eax.b
            char* eax_1
            int32_t ecx
            void* edx
            eax_1, edx, ecx = (*(eax + 0x73))()
            *(ecx - 1) += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 = *eax_1
            char temp3_1 = eax_1[0x53070007]
            eax_1[0x53070007] += eax_1.b
            
            if (temp3_1 + eax_1.b u< temp3_1)
                *eax_1 += eax_1.b
                eax_2, arg2, ecx_2 = (*eax_1)()
                entry_ebx:1.b *= 2
                *eax_2 = &eax_2[*eax_2]
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                eax_2[0x80000000] += eax_2.b
                goto label_494a04
            
            int32_t esp_2 = *(entry_ebx + 0x65) * &data_4942a0
            *eax_1
            entry_ebx:1.b *= 2
            *eax_1
            entry_ebx:1.b *= 2
            *eax_1 = &eax_1[*eax_1]
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            eax_1[0x80000000] += eax_1.b
            *eax_1 |= eax_1.b
            *(arg6 + 0x6e) |= (ecx - 1).b
            esp = esp_2 - 1
            uint16_t* esi_1 = __outsd(edx.w, *esi, esi, eflags)
            __outsd(edx.w, *esi_1, esi_1, eflags)
            arg5 = *(arg4 + 0x70) * 0xffffffa0
            arg2 = edx + 1
            arg3 = ecx - 2
            *eax_1 += arg3.b
            entry_ebx:1.b *= 2
            *(eax_1 - 1) += (eax_1 - 1).b
            *arg3 += 1
            *(eax_1 - 1) += (eax_1 - 1).b
            *(eax_1 - 1) += (eax_1 - 1).b
            *(eax_1 - 1) += (eax_1 - 1).b
            *(eax_1 - 1) = *(eax_1 - 1)
            eax_1[0x4f0c0008] += (eax_1 - 1).b
            goto label_4949bb
    
    void* eax_3 = eax + 1
    *eax_3 += eax_3.b
    *arg3 += 1
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 = *eax_3
    *(eax_3 + 0x4f09000a) += eax_3.b
    uint16_t* esi_6 = __outsb(arg2.w, *esi, esi, eflags)
    uint16_t* esi_7 = __outsd(arg2.w, *esi_6, esi_6, eflags)
    uint16_t* esi_8 = __outsb(arg2.w, *esi_7, esi_7, eflags)
    esi = __outsb(arg2.w, *esi_8, esi_8, eflags)
    int16_t temp0_2
    temp0_2, eflags = __arpl_memw_gpr16(*(gsbase + eax_3 + 0x42), esi.w)
    *(gsbase + eax_3 + 0x42) = temp0_2
    ecx_2 = arg3 - 1
    *eax_3 += arg2.b
    entry_ebx:1.b = (entry_ebx + 1):1.b * 2
    *(esp - 4) = eax_3
    esp_1 = esp - 4
    *eax_3 += eax_3.b
    *ecx_2 += 1
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 = *eax_3
    *(eax_3 + 0x4f0c000b) += eax_3.b
    
    while (true)
        __outsb(arg2.w, *esi, esi, eflags)
        uint16_t* esi_10 = *(entry_ebx + 0x63) * 0x656e6e6f
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(eax_3 + 0x42), esi_10.w)
        *(eax_3 + 0x42) = temp0_3
        *eax_3 += (ecx_2.w - 1):1.b
        *(esp_1 - 3) = 0x1ff0000
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 = *eax_3
        *(eax_3 + 0x4f06000c) += eax_3.b
        __outsb(arg2.w, *esi_10, esi_10, eflags)
        *(esp_1 - 7) = arg2
        void** edi = *(esp_1 - 7)
        esi = *(esp_1 - 3)
        char* ebp = *(esp_1 + 1)
        entry_ebx = *(esp_1 + 9)
        arg2 = *(esp_1 + 0xd)
        char* ecx_4 = *(esp_1 + 0x11)
        *(esp_1 + 0x15)
        void* eax_4
        TEB* fsbase
        eax_4.b = fsbase->__offset(0x70004942).b
        *eax_4 += eax_4.b
        *(esp_1 + 0x15) = *eax_4
        entry_ebx:1.b *= 2
        *eax_4 += eax_4
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *(eax_4 - 0x80000000) += eax_4.b
        eax_2 = eax_4 | 0x6e4f0700
        *(esp_1 + 0x11) = edi
        esp_1 += 0x11
        bool c_4
        bool z_1
        
        if (eax_2 u< 0)
            eax_2[0x30] += entry_ebx:1.b
        label_494abf:
            char temp4_1 = (&eax_2[1]):1.b
            eax_2:1.b = (&eax_2[1]):1.b + arg2:1.b
            c_4 = temp4_1 + arg2:1.b u< temp4_1
            z_1 = temp4_1 == neg.b(arg2:1.b)
            
            if (not(z_1))
                goto label_494b0c
            
            *eax_2 += eax_2.b
            eax_2.b |= 0x41
            eax_2[0x1c004160] += eax_2:1.b
            *ecx_4
            eax_2.b = adc.b((eax_2 | *ecx_4).b, 0x72, false)
            eax_2[0x41] += eax_2.b
            ecx_4[0x627c0040] += eax_2.b
            ecx_2 = ecx_4
            *(esp_1 + 0x61940041) += ecx_2:1.b
            goto label_494ae6
        
        bool cond:3_1
        
        if (eax_2 == 0)
            char temp5_1 = *eax_2 ^ eax_2.b
            *eax_2 = temp5_1
            cond:3_1 = temp5_1 s< 0
        label_494abc:
            
            if (cond:3_1)
                goto label_494aee
            
            goto label_494abf
        
        ecx_2 = ecx_4
        *eax_2 += entry_ebx:1.b
        entry_ebx:1.b *= 2
        entry_ebx:1.b *= 2
        *eax_2 = &eax_2[*eax_2]
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2[0x80000000] += eax_2.b
        int16_t cs
        *(esp_1 - 4) = zx.d(cs)
        esp_1 -= 4
        char temp8_1 = *edi
        *edi += eax_2.b
        bool c_3 = temp8_1 + eax_2.b u< temp8_1
        edi -= 1
        esi = __outsb(arg2.w, *esi, esi, eflags)
        
        if (c_3)
        label_494ae6:
            ecx_4 = ecx_2 + 1
            ecx_4[0x64b40041] += ecx_4.b
        label_494aee:
            ecx_4 = &ecx_4[1]
            *eax_2 += entry_ebx.b
            ebp = *esp_1
            esp_1 += 4
            
            while (true)
                char temp12_1 = eax_2.b
                eax_2.b += (&ecx_4[1]):1.b
                void* ecx_13
                void* ebx_1
                
                if (temp12_1 + (&ecx_4[1]):1.b u>= temp12_1)
                    *eax_2 += eax_2.b
                label_494b45:
                    ebx_1 = entry_ebx - 1
                    ecx_13 = ecx_4
                label_494b47:
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    eax_2.b += eax_2:1.b
                    ecx_4 = ecx_13 - 1
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    eax_2:1.b += ecx_4.b
                    entry_ebx = ebx_1 - 2
                label_494b67:
                    eax_2[0x78000000] += (ecx_4 - 1).b
                    arg2 -= 1
                    ecx_4 -= 2
                    *(esp_1 + 0x33000041) += arg2.b
                    eax_2:1.b = (&eax_2[1]):1.b + ecx_4:1.b
                    goto label_494b79
                
                char temp16_1 = eax_2.b
                eax_2.b += entry_ebx.b
                
                if (temp16_1 == neg.b(entry_ebx.b))
                    goto label_494b45
                
                *(esi * 3) += eax_2:1.b
                char temp17_1 = *entry_ebx
                *entry_ebx += arg2.b
                c_4 = temp17_1 + arg2.b u< temp17_1
                *(esp_1 - 4) = esp_1
                esp_1 -= 4
                void* temp18_1 = entry_ebx
                entry_ebx += 1
                z_1 = temp18_1 == 0xffffffff
                int16_t es
                
                if (not(z_1))
                    eax_2.b = __in_al_dx(arg2.w, eflags)
                label_494b79:
                    ebp = *esp_1
                    esp_1 += 4
                    ecx_4 = &ecx_4[1]
                else
                    if (z_1)
                        eax_2:1.b = (&eax_2[1]):1.b + ecx_4:1.b
                        goto label_494b79
                    
                    int16_t temp0_4
                    temp0_4, edi = __insd(edi, arg2.w, eflags)
                    *edi = temp0_4
                    *(esp_1 - 4) = entry_ebx
                    esp_1 -= 4
                    
                    if (c_4)
                        eax_2 = &eax_2[1]
                        *(eax_2 + esi + 0x40) += eax_2:1.b
                        eax_2[0x30] += entry_ebx:1.b
                        goto label_494b8b
                    
                label_494b0c:
                    
                    if (c_4)
                        *eax_2 += eax_2.b
                        breakpoint
                    
                    esi = __outsd(arg2.w, *esi, esi, eflags)
                    int16_t temp0_5
                    temp0_5, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
                    *(entry_ebx + 0x65) = temp0_5
                    void* ecx_12
                    
                    if (z_1)
                        ecx_12, es = __les_gprz_memp(*(arg2 + 0x49))
                        break
                    
                    entry_ebx -= 1
                    ecx_4 -= 1
                    char temp9_1 = *edi
                    *edi += eax_2.b
                    bool c_6 = temp9_1 + eax_2.b u< temp9_1
                    char* temp10_1 = arg2
                    int32_t temp11_1 = *(entry_ebx + (eax_2 << 1) + 0x75)
                    arg2 = adc.d(temp10_1, temp11_1, c_6)
                    bool c_7 = adc.d(temp10_1, temp11_1, c_6) u< temp10_1
                        || (c_6 && adc.d(temp10_1, temp11_1, c_6) == temp10_1)
                    
                    if (not(c_7))
                        goto label_494b93
                    
                    esi = __outsd(arg2.w, *esi, esi, eflags)
                    int16_t temp0_6
                    temp0_6, edi = __insd(edi, arg2.w, eflags)
                    *edi = temp0_6
                    *(esp_1 - 4) = entry_ebx
                    esp_1 -= 4
                    
                    if (c_7)
                        arg2[esi << 1] += arg2.b
                        goto label_494b9f
                    
                    if (not(c_7))
                        esi = __outsd(arg2.w, *esi, esi, eflags)
                        int16_t temp0_7
                        temp0_7, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
                        *(entry_ebx + 0x65) = temp0_7
                        
                        if (adc.d(temp10_1, temp11_1, c_6) == 0)
                            continue
                        else
                            arg2 -= 1
                            ecx_12 = ecx_4 - 1
                        label_494b30:
                            eax_2:1.b += ecx_12.b
                            ecx_13 = ecx_12 - 1
                            *arg2 += eax_2.b
                            *eax_2 += ecx_13.b
                            *(esp_1 - 4) = entry_ebx
                            esp_1 -= 4
                            int16_t temp0_8
                            temp0_8, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x74), ebp.w)
                            *(entry_ebx + 0x74) = temp0_8
                            ebx_1 = entry_ebx + 1
                            esi = __outsd(arg2.w, *esi, esi, eflags)
                            int16_t temp0_9
                            temp0_9, edi = __insd(edi + 1, arg2.w, eflags)
                            *edi = temp0_9
                            *(ebx_1 + 0x494b90c0) += ecx_13.b
                        
                        goto label_494b47
                
                *eax_2 += ecx_4.b
                eax_2 ^= *eax_2
                
                while (true)
                    eax_2.b ^= *eax_2
                    char temp23_1 = *(fsbase + eax_2) ^ eax_2.b
                    *(fsbase + eax_2) = temp23_1
                    char* ecx_20
                    void* esp_8
                    bool c_10
                    bool c_11
                    
                    if (temp23_1 s>= 0)
                    label_494b8b:
                        char temp25_1 = (&eax_2[1]):1.b
                        eax_2:1.b = (&eax_2[1]):1.b + arg2:1.b
                        
                        if (temp25_1 != neg.b(arg2:1.b))
                            if (temp25_1 == neg.b(arg2:1.b))
                                break
                            
                        label_494bdb:
                            eax_2.b <<= 0x4b
                            ecx_4 -= 1
                            *edi += eax_2.b
                            eax_2 |= 0x72655354
                            
                            if (eax_2 u<= 0)
                                if (eax_2 u>= 0)
                                    goto label_494c98
                                
                                goto label_494c4f
                            
                            if (eax_2 u< 0)
                                eax_2 = &eax_2[*eax_2]
                                char temp29_1 = eax_2.b
                                eax_2.b += 0x50
                                c_11 = temp29_1 u>= 0xb0
                                goto label_494c41
                            
                            esi = __outsd(arg2.w, *esi, esi, eflags)
                            int16_t temp0_12
                            temp0_12, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
                            *(entry_ebx + 0x65) = temp0_12
                            
                            if (eax_2 == 0)
                                continue
                            else
                                void* ebx_3 = entry_ebx - 1
                                *(ebx_3 + ((ecx_4 - 1) << 1)) += arg2.b
                                ecx_20 = ecx_4 - 2
                                *arg2 += arg2.b
                                *eax_2 += ecx_20.b
                                *(esp_1 - 4) = ebx_3
                                esp_8 = esp_1 - 4
                                int32_t eflags_1
                                int16_t temp0_13
                                temp0_13, eflags_1 = __arpl_memw_gpr16(*(ebx_3 + 0x74), ebp.w)
                                *(ebx_3 + 0x74) = temp0_13
                                entry_ebx = ebx_3 + 1
                                esi = __outsd(arg2.w, *esi, esi, eflags_1)
                                int16_t temp0_14
                                temp0_14, edi = __insd(edi, arg2.w, eflags_1)
                                *edi = temp0_14
                                
                                if (not(add_overflow(ebx_3, 1)))
                                    char temp35_1 = *eax_2
                                    *eax_2 += eax_2.b
                                    *eax_2 = adc.b(*eax_2, eax_2.b, temp35_1 + eax_2.b u< temp35_1)
                                    eax_2.b = 0
                                    entry_ebx:1.b *= 2
                                    *(ecx_20 + 0x49)
                                    *ecx_20 = *ecx_20
                                    *eax_2 = *eax_2
                                
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                *eax_2 = *eax_2
                                char temp34_1 = eax_2[0x41060002]
                                eax_2[0x41060002] += eax_2.b
                                c_10 = temp34_1 + eax_2.b u< temp34_1
                            
                            goto label_494c20
                        
                        *eax_2 += eax_2.b
                        eax_2.b |= 0x41
                    label_494b93:
                        eax_2[0x1c004160] += eax_2:1.b
                        *ecx_4
                        eax_2.b = adc.b((eax_2 | *ecx_4).b, 0x72, false)
                    label_494b9f:
                        eax_2[0x41] += eax_2.b
                        ecx_4[0x627c0040] += eax_2.b
                        *(esp_1 + 0x61940041) += ecx_4:1.b
                        ecx_4 = &ecx_4[1]
                        ecx_4[0x64b40041] += ecx_4.b
                        goto label_494bbb
                    
                label_494bbb:
                    eax_2[(edi << 1) + 0x73e80049] += arg2.b
                    char temp19_1 = eax_2.b
                    eax_2.b += entry_ebx.b
                    
                    if (temp19_1 != neg.b(entry_ebx.b))
                        *(esi * 3) += eax_2:1.b
                        ecx_4 -= 1
                        char temp22_1 = *0x72655354
                        *0x72655354 += ecx_4.b
                        bool c_8 = temp22_1 + ecx_4.b u< temp22_1
                        bool z_3 = temp22_1 == neg.b(ecx_4.b)
                        
                        if (z_3 || c_8)
                            goto label_494c38
                        
                        if (c_8)
                            *eax_2 += ecx_4:1.b
                            *eax_2 += eax_2.b
                            undefined
                        
                        esi = __outsd(arg2.w, *esi, esi, eflags)
                        int16_t temp0_11
                        temp0_11, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
                        *(entry_ebx + 0x65) = temp0_11
                        
                        if (z_3)
                            goto label_494b67
                        
                        goto label_494bdb
                    
                    *eax_2 = &eax_2[*eax_2]
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    eax_2[0x80000000] += eax_2.b
                    char temp20_1 = eax_2.b
                    char temp21_1 = *eax_2
                    eax_2.b += *eax_2
                    c_10 = temp20_1 + temp21_1 u< temp20_1
                    *(esp_1 - 4) = zx.d(es)
                    esp_8 = esp_1 - 4
                    ecx_20 = &ecx_4[1]
                label_494c20:
                    int16_t temp0_15
                    temp0_15, eflags = __arpl_memw_gpr16(*(ecx_20 + (ebp << 1) + 0x76), esi.w)
                    *(ecx_20 + (ebp << 1) + 0x76) = temp0_15
                    *(esp_8 - 4) = esp_8
                    esp_1 = esp_8 - 4
                    *eax_2 = adc.b(*eax_2, eax_2.b, c_10)
                    *eax_2 -= eax_2.b
                    entry_ebx:1.b *= 2
                    eax_2.b -= 0x73
                    ecx_4 = ecx_20 - 1
                    *ecx_4 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                label_494c38:
                    *eax_2 = *eax_2
                    char temp24_1 = eax_2[0x50040003]
                    eax_2[0x50040003] += eax_2.b
                    c_11 = temp24_1 + eax_2.b u< temp24_1
                label_494c41:
                    esi = __outsd(arg2.w, *esi, esi, eflags)
                    bool c_22
                    bool z_13
                    void* esp_15
                    int16_t temp0_24
                    bool c_18
                    bool z_10
                    
                    if (c_11)
                        *eax_2 += entry_ebx.b
                        entry_ebx:1.b *= 2
                        eax_2 = *esp_1
                        esp_15 = esp_1 + 4
                        *eax_2 += eax_2.b
                        *ecx_4 += 1
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 = *eax_2
                        eax_2[0x4f080007] += eax_2.b
                    label_494cd1:
                        __outsb(arg2.w, *esi, esi, eflags)
                        esp_1 = esp_15 - 1
                        esi = *(entry_ebx + 0x74) * 0x42a06e65
                    label_494cda:
                        void* ecx_24 = ecx_4 - 1
                        *eax_2 += eax_2:1.b
                        entry_ebx:1.b *= 2
                        *(esp_1 - 4) = eax_2
                        *(esp_1 - 8) = ecx_24
                        *(esp_1 - 0xc) = arg2
                        *(esp_1 - 0x10) = entry_ebx
                        *(esp_1 - 0x14) = esp_1 - 0x10
                        *(esp_1 - 0x18) = ebp
                        *(esp_1 - 0x1c) = esi
                        *(esp_1 - 0x20) = edi
                        esp_1 -= 0x20
                        *eax_2 += eax_2.b
                        *ecx_24 += 1
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 = *eax_2
                        eax_2[0x4f080008] += eax_2.b
                        esi = __outsb(arg2.w, *esi, esi, eflags)
                        ecx_4 = ecx_24 + 1
                        bool z_7 = ecx_24 == 0xffffffff
                        int16_t temp0_17
                        temp0_17, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), esp_1.w)
                        *(entry_ebx + 0x65) = temp0_17
                        
                        if (add_overflow(ecx_24, 1))
                        label_494d6f:
                            
                            if (not(z_7))
                                goto label_494d71
                            
                            esi = __outsb(arg2.w, *(gsbase + esi), esi, eflags)
                            
                            if (not(z_7))
                                uint16_t* esi_14 = __outsd(arg2.w, *esi, esi, eflags)
                                esi = __outsb(arg2.w, *esi_14, esi_14, eflags)
                                goto label_494dbb
                            
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            eax_2[0x4f0c000f] += eax_2.b
                            goto label_494e08
                        
                    label_494cfb:
                        arg2[0x49] ^= eax_2.b
                    label_494cfe:
                        char temp33_1 = eax_2[0x94004976]
                        eax_2[0x94004976] += eax_2.b
                        
                        if (temp33_1 != neg.b(eax_2.b) && temp33_1 + eax_2.b u>= temp33_1)
                            *ecx_4 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 = *eax_2
                            eax_2[0x4f0b0009] += eax_2.b
                            esi = __outsb(arg2.w, *esi, esi, eflags)
                        label_494d18:
                            void** temp43_1 = edi
                            edi += 1
                            
                            if (temp43_1 == 0xffffffff)
                                esp_1 += 1
                            label_494d71:
                                ecx_4 -= 1
                                char temp32_1 = *eax_2
                                *eax_2 += arg2.b
                                c_22 = temp32_1 + arg2.b u< temp32_1
                                z_13 = temp32_1 == neg.b(arg2.b)
                                
                                if (z_13 || c_22)
                                    goto label_494d76
                                
                                eax_2.b = *0x68004942
                                
                                if (z_13 || c_22)
                                    goto label_494dc6
                                
                                *(esp_1 - 4) = arg2
                                edi = *(esp_1 - 4)
                                esi = *esp_1
                                ebp = *(esp_1 + 4)
                                entry_ebx = *(esp_1 + 0xc)
                                arg2 = *(esp_1 + 0x10)
                                ecx_4 = *(esp_1 + 0x14)
                                *(esp_1 + 0x18)
                                esp_1 += 0x1c
                                goto label_494e12
                            
                            *(esp_1 - 4) = 0x64616572
                            esp_1 -= 4
                            char temp0_18
                            char temp1_1
                            temp0_18, temp1_1, eflags = __aam_immb(0x41, eax_2.b)
                            eax_2.b = temp0_18
                            eax_2:1.b = temp1_1
                            ecx_4 -= 1
                            char temp48_1 = eax_2[0xc4004976]
                            eax_2[0xc4004976] += arg2:1.b
                            
                            if (temp48_1 != neg.b(arg2:1.b) && temp48_1 + arg2:1.b u>= temp48_1)
                                goto label_494d2c
                            
                            ecx_4 -= 1
                        label_494d76:
                            eax_2[0x77] += ecx_4.b
                            ecx_4 -= 1
                            *ecx_4 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 = *eax_2
                            char temp36_1 = eax_2[0x4f0b000c]
                            eax_2[0x4f0b000c] += eax_2.b
                            c_18 = temp36_1 + eax_2.b u< temp36_1
                            uint16_t* esi_13 = __outsb(arg2.w, *esi, esi, eflags)
                            *(esp_1 - 4) = esp_1
                            *(esp_1 - 8) = 0x64616572
                            esp_1 -= 8
                            char* temp37_1 = ebp
                            ebp = &ebp[1]
                            z_10 = temp37_1 == 0xffffffff
                            esi = __outsb(arg2.w, *esi_13, esi_13, eflags)
                            eax_2.b = fsbase->__offset(0x68004942).b
                        label_494d9a:
                            
                            if (not(z_10) && not(c_18))
                                goto label_494de5
                            
                            goto label_494d9c
                        
                        *(edi + 0x49) -= arg2:1.b
                    label_494d52:
                        *ecx_4 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 = *eax_2
                        char temp42_1 = eax_2[0x4f0d000b]
                        eax_2[0x4f0d000b] += eax_2.b
                        z_7 = temp42_1 == neg.b(eax_2.b)
                        esi = __outsb(arg2.w, *esi, esi, eflags)
                        *(esp_1 - 4) = esp_1
                        *(esp_1 - 8) = 0x64616572
                        *(esp_1 - 0xc) = entry_ebx
                        esp_1 -= 0xc
                        
                        if (z_7)
                        label_494dce:
                            *entry_ebx += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *esi
                            *esi = *esi
                            ecx_4.b = adc.b(ecx_4.b, *(edi + 0x6e), false)
                            entry_ebx += 1
                            uint8_t temp0_22
                            temp0_22, edi = __insb(edi, arg2.w, eflags)
                            *edi = temp0_22
                            esp_1 = *(ebp + 0x6e) * 0x73694474
                        label_494de5:
                            int32_t eflags_2
                            int16_t temp0_23
                            temp0_23, eflags_2 = __arpl_memw_gpr16(*(edi + 0x6e), ebp.w)
                            *(edi + 0x6e) = temp0_23
                            esi = __outsb(arg2.w, *esi, esi, eflags_2)
                            temp0_24, eflags = __arpl_memw_gpr16(*(gsbase + eax_2 + 0x42), esi.w)
                            *(gsbase + eax_2 + 0x42) = temp0_24
                        else
                            if (temp42_1 + eax_2.b u>= temp42_1)
                                goto label_494d6f
                            
                            esi = *(entry_ebx + 0x63) * 0x656e6e6f
                            int16_t temp0_25
                            temp0_25, eflags = __arpl_memw_gpr16(*(eax_2 + 0x42), esi.w)
                            *(eax_2 + 0x42) = temp0_25
                    else
                        esp_1 = 0x34004010
                        *eax_2 += eax_2.b
                        int32_t ecx_21
                        eax_2, arg2, ecx_21 = (*(eax_2 + 0x73))()
                        ecx_4 = ecx_21 - 1
                    label_494c4f:
                        *ecx_4 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 = *eax_2
                        char temp26_1 = eax_2[0x53070004]
                        eax_2[0x53070004] += eax_2.b
                        
                        if (temp26_1 + eax_2.b u< temp26_1)
                            arg2 = &arg2[1]
                            goto label_494cda
                        
                        *(entry_ebx + 0x65)
                        int32_t esp_9 = *(entry_ebx + 0x65) * &data_4940ec
                        bool c_13 = unimplemented  {imul esp, dword [ebx+0x65], 0x4940ec}
                        *(esp_9 - 4) = 0x74004976
                        esp_1 = esp_9 - 4
                        
                        if (temp26_1 == neg.b(eax_2.b) || c_13)
                            goto label_494cba
                        
                        *ecx_4 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 = *eax_2
                        char temp30_1 = eax_2[0x530a0005]
                        eax_2[0x530a0005] += eax_2.b
                        bool c_14 = temp30_1 + eax_2.b u< temp30_1
                        
                        if (c_14)
                            goto label_494cfb
                        
                        if (c_14)
                            *(esp_1 - 4) = eax_2
                            *(esp_1 - 8) = ecx_4
                            *(esp_1 - 0xc) = arg2
                            *(esp_1 - 0x10) = entry_ebx
                            *(esp_1 - 0x14) = esp_1 - 0x10
                            *(esp_1 - 0x18) = ebp
                            *(esp_1 - 0x1c) = esi
                            *(esp_1 - 0x20) = edi
                            *eax_2 += eax_2.b
                            jump(*eax_2)
                        
                        if (temp30_1 + eax_2.b s< 0)
                            *(esp_1 - 4) = esp_1
                            esp_1 -= 4
                            char temp44_1 = adc.b(*eax_2, eax_2.b, c_14)
                            *eax_2 = temp44_1
                            
                            if (temp44_1 != 0 && ecx_4 != 1)
                                *eax_2 = &eax_2[*eax_2]
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                eax_2[0x80000000] += eax_2.b
                                *eax_2 |= eax_2
                                ecx_4 = (ecx_4 - 1) | *(edi + 0x6e)
                                goto label_494d18
                            
                            ecx_4 -= 2
                            char temp51_1 = eax_2:1.b
                            eax_2:1.b += ecx_4:1.b
                            
                            if (temp51_1 == neg.b(ecx_4:1.b) || temp51_1 + ecx_4:1.b u< temp51_1)
                                jump(*eax_2)
                            
                            *ecx_4 += eax_2.b
                        label_494c98:
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *arg2 = *arg2
                            *eax_2 += eax_2.b
                            *(esp_1 - 4) = zx.d(es)
                            *edi += ecx_4.b
                            *(esp_1 - 8) = esp_1 - 4
                            *(esp_1 - 0xc) = 0x64616572
                            esi = *(esp_1 - 8)
                            ebp = *(esp_1 - 4)
                            entry_ebx = *(esp_1 + 4)
                            void* edx_1 = *(esp_1 + 8)
                            *(esp_1 + 0xc)
                            void* eax_6 = *(esp_1 + 0x10)
                            int16_t temp0_16
                            temp0_16, eflags = __arpl_memw_gpr16(*(eax_6 + 0x65), ebp.w)
                            *(eax_6 + 0x65) = temp0_16
                            *(esp_1 + 0x10) = entry_ebx
                            edi = *(edx_1 + 0x65) * &data_4942a0
                            eax_2 = *(esp_1 + 0x10)
                            esp_1 += 0x14
                        label_494cba:
                            *eax_2 += eax_2.b
                            eax_2, arg2, ecx_4 = (*eax_2)()
                            entry_ebx:1.b *= 2
                            *eax_2 = &eax_2[*eax_2]
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            eax_2[0x80000000] += eax_2.b
                            *esp_1
                            esp_15 = esp_1 + 2
                            *eax_2 += ecx_4.b
                            edi -= 1
                            goto label_494cd1
                        
                        if (temp30_1 != neg.b(eax_2.b))
                            arg2 = &arg2[1]
                            ecx_4 -= 1
                            goto label_494cfe
                        
                    label_494d2c:
                        *ecx_4 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 += eax_2.b
                        *eax_2 = *eax_2
                        char temp49_1 = eax_2[0x4f0b000a]
                        eax_2[0x4f0b000a] += eax_2.b
                        c_18 = temp49_1 + eax_2.b u< temp49_1
                        esi = __outsb(arg2.w, *esi, esi, eflags)
                        void** temp50_1 = edi
                        edi += 1
                        z_10 = temp50_1 == 0xffffffff
                        
                        if (z_10)
                            eax_2.b = *0x68004942
                            goto label_494d9a
                        
                        esi = __outsd(arg2.w, *esi, esi, eflags)
                        int16_t temp0_19
                        temp0_19, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
                        *(entry_ebx + 0x65) = temp0_19
                        
                        if (z_10)
                            goto label_494dbc
                        
                        esp_1 += 1
                        ecx_4 -= 1
                        char temp56_1 = eax_2.b
                        eax_2.b += entry_ebx:1.b
                        
                        if (temp56_1 == neg.b(entry_ebx:1.b) || temp56_1 + entry_ebx:1.b u< temp56_1)
                            ecx_4 -= 1
                            eax_2[0x77] += ecx_4:1.b
                        else
                            char temp58_1 = *eax_2
                            *eax_2 += ecx_4:1.b
                            
                            if (temp58_1 == neg.b(ecx_4:1.b) || temp58_1 + ecx_4:1.b u< temp58_1)
                                goto label_494d52
                        
                        ecx_4 -= 1
                    label_494d9c:
                        char temp45_1 = eax_2.b
                        char temp46_1 = eax_2:1.b
                        eax_2.b += eax_2:1.b
                        
                        if (temp45_1 == neg.b(temp46_1) || temp45_1 + temp46_1 u< temp45_1)
                            *ecx_4 += eax_2.b
                            *eax_2 += eax_2.b
                            *arg2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *0x6e4f0f00 |= 0x43
                            uint8_t temp0_20
                            temp0_20, edi = __insb(edi, arg2.w, eflags)
                            *edi = temp0_20
                            esp_1 = *(ebp + 0x6e) * 0x6e6f4374
                        label_494dbb:
                            esi = __outsb(arg2.w, *esi, esi, eflags)
                        label_494dbc:
                            int16_t temp0_21
                            temp0_21, eflags = __arpl_memw_gpr16(*(gsbase + eax_2 + 0x42), esi.w)
                            *(gsbase + eax_2 + 0x42) = temp0_21
                            eax_2[0x77] += (ecx_4 - 1):1.b
                            ecx_4 -= 2
                        label_494dc6:
                            char temp40_1 = eax_2.b
                            char temp41_1 = eax_2:1.b
                            eax_2.b += eax_2:1.b
                            c_22 = temp40_1 + temp41_1 u< temp40_1
                            z_13 = temp40_1 == neg.b(temp41_1)
                            
                            if (not(z_13) && not(c_22))
                                eax_2.b = *0x68004942
                                goto label_494e18
                            
                            *ecx_4 += eax_2.b
                            *eax_2 += eax_2.b
                            goto label_494dce
                        
                        temp0_24, eflags = __arpl_memw_gpr16(*(gsbase + eax_2 + 0x42), esi.w)
                        *(gsbase + eax_2 + 0x42) = temp0_24
                    eax_2[0x77] += (ecx_4 - 1):1.b
                    ecx_4 -= 2
                    char temp54_1 = eax_2.b
                    char temp55_1 = eax_2:1.b
                    eax_2.b += eax_2:1.b
                    
                    if (temp54_1 == neg.b(temp55_1) || temp54_1 + temp55_1 u< temp54_1)
                        goto label_494df7
                    
                    void* esp_23
                    
                    if (temp54_1 + temp55_1 s< 0)
                        *(ecx_4 + 0x2733fb)
                        char temp59_1 = arg2[0xffffffe8]
                        arg2[0xffffffe8] += arg2:1.b
                        *edi = eax_2
                        bool c_29 = unimplemented  {sbb eax, 0xb883fff7}
                        char* eax_11
                        eax_11.b =
                            adc.b(sbb.d(eax_2, 0xb883fff7, temp59_1 + arg2:1.b u< temp59_1).b, 0, c_29)
                        *eax_11 += eax_11.b
                        *(ecx_4 + arg2 - 0x18) += arg2:1.b
                        esp_23 = esp_1 + 4
                        bool c_31 = unimplemented  {sbb eax, 0xb08bfff7}
                        char* eax_13
                        eax_13.b = adc.b(sbb.d(eax_11, 0xb08bfff7, test_bit(*esp_1, 0)).b, 0, c_31)
                        *eax_13 += eax_13.b
                    else
                        while (true)
                            eax_2[(edi << 1) + 0x49] += arg2:1.b
                            *ecx_4 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 += eax_2.b
                            *eax_2 = *eax_2
                            eax_2[0x4f0d0011] += eax_2.b
                            uint16_t* esi_15 = __outsb(arg2.w, *esi, esi, eflags)
                            void* temp60_1 = entry_ebx
                            entry_ebx += 1
                            uint8_t temp0_27
                            temp0_27, edi = __insb(edi, arg2.w, eflags)
                            *edi = temp0_27
                            *(ebp + 0x6e)
                            bool c_27 = unimplemented  {imul esp, dword [ebp+0x6e], 0x72724574}
                            esi = __outsd(arg2.w, *esi_15, esi_15, eflags)
                            
                            if (not(c_27))
                                return sub_494e64(eax_2) __tailcall
                            
                            void* ecx_27 = ecx_4 - 1
                            bool cond:11_1
                            void* esp_26
                            
                            if (temp60_1 != 0xffffffff && ecx_27 != 0)
                                char* esp_27 = ebp
                                ebp = *esp_27
                                esp_26 = &esp_27[4]
                            label_494e6e:
                                *(ebp - 0x1c) = ecx_27
                                esi = arg2
                                *(esp_26 - 4) = ebp
                                *(esp_26 - 8) = j_sub_4037f0
                                *(esp_26 - 0xc) = fsbase->NtTib.ExceptionList
                                esp_23 = esp_26 - 0xc
                                fsbase->NtTib.ExceptionList = esp_23
                                
                                if (eax_2 == 0)
                                    goto label_494efa
                                
                                entry_ebx = WSAGetLastError()
                                
                                if (entry_ebx == 0x2733)
                                    goto label_494efa
                                
                                cond:11_1 = *(sub_406c44() + 0x14) == 0
                            else
                                ecx_4 = ecx_27 - 1
                            label_494df7:
                                *ecx_4 += eax_2.b
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                *edi = *edi
                                eax_2.b |= 0x4f
                            label_494e08:
                                esi = __outsb(arg2.w, *esi, esi, eflags)
                                void* temp38_1 = entry_ebx
                                entry_ebx += 1
                                z_13 = temp38_1 == 0xffffffff
                                uint8_t temp0_26
                                temp0_26, edi = __insb(edi, arg2.w, eflags)
                                *edi = temp0_26
                                *(ebp + 0x6e)
                                esp_1 = *(ebp + 0x6e) * 0x61655274
                                c_22 = unimplemented  {imul esp, dword [ebp+0x6e], 0x61655274}
                            label_494e12:
                                eax_2.b = fsbase->__offset(0x68004942).b
                            label_494e18:
                                
                                if (not(z_13) && not(c_22))
                                    return sub_494e64(eax_2) __tailcall
                                
                                char temp52_1 = eax_2.b
                                char temp53_1 = eax_2:1.b
                                eax_2.b += eax_2:1.b
                                
                                if (temp52_1 != neg.b(temp53_1) && temp52_1 + temp53_1 u>= temp52_1)
                                    *(esp_1 - 0x20) = entry_ebx
                                    *(esp_1 - 0x24) = esi
                                    esp_26 = esp_1 - 0x24
                                    ecx_27 = nullptr
                                    goto label_494e6e
                                
                                *ecx_4 += eax_2.b
                                *eax_2 += eax_2.b
                                *ecx_4 += eax_2.b
                                *eax_2 += eax_2.b
                                *eax_2 += eax_2.b
                                char temp57_1 = *eax_2
                                *eax_2 += eax_2.b
                                *eax_2 = adc.b(*eax_2, 0, temp57_1 + eax_2.b u< temp57_1)
                                eax_2 |= 0x6c436e4f
                                cond:11_1 = eax_2 == 0
                                esp_23 = *(ebp + 0x6e) * 0x69725774
                                
                                if (eax_2 != 0)
                                    eax_2[(edi << 1) + 0x49] += entry_ebx.b
                                    continue
                            
                            if (not(cond:11_1))
                                esi = *(sub_406c44() + 0x14)
                                break
                            
                            sub_40ac70(entry_ebx, &ebp[0xffffffe4])
                            *(ebp - 0x18) = *(ebp - 0x1c)
                            ebp[0xffffffec] = 0xb
                            *(ebp - 0x10) = entry_ebx
                            ebp[0xfffffff4] = 0
                            *(ebp - 8) = esi
                            ebp[0xfffffffc] = 0xb
                            *(esp_23 - 4) = &ebp[0xffffffe8]
                            *(esp_23 - 8) = 2
                            int32_t edx_5
                            edx_5.b = 1
                            sub_40b5a8(0x4940dc, edx_5, data_530808)
                            sub_403828()
                            noreturn
                    
                    esi()
                label_494efa:
                    *(esp_23 + 8)
                    fsbase->NtTib.ExceptionList = *esp_23
                    *(esp_23 + 8) = sub_494f13
                    sub_403df8(&ebp[0xffffffe4])
                    return 
                
                goto label_494b67
            
            goto label_494b30
        
        esi = __outsd(arg2.w, *esi, esi, eflags)
        
        if (not(c_3))
            eax_2:1.b = rol.b(eax_2:1.b, 0x4a)
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += entry_ebx.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            entry_ebx -= 2
            *(eax_2 * 2 + 0x47340000) += eax_2.b
            *(esp_1 + 0x33000041) += arg2.b
            void* eax_5
            eax_5:1.b = (&eax_2[1]):1.b + (ecx_2 - 4):1.b
            ebp = *esp_1
            esp_1 += 4
            ecx_4 = ecx_2 - 3
            *eax_5 += ecx_4.b
            eax_2 = eax_5 ^ *eax_5
            eax_2.b ^= *eax_2
            char temp13_1 = *(fsbase + eax_2) ^ eax_2.b
            *(fsbase + eax_2) = temp13_1
            cond:3_1 = temp13_1 s< 0
            goto label_494abc
        
    label_494a04:
        eax_3.b = (eax_2 | *eax_2).b | 0x4f
}
