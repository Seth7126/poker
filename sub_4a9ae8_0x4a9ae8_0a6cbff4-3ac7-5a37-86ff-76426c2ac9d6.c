// ============================================================
// 函数名称: sub_4a9ae8
// 虚拟地址: 0x4a9ae8
// WARP GUID: 0a6cbff4-3ac7-5a37-86ff-76426c2ac9d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a9ae8(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x4a9b] += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg5[0xffffff9b] += arg3:1.b
    char* edx_1 = arg2 - 2
    *(arg1 * 2) += arg1:1.b
    *arg1 += arg1.b
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, edx_1.w, eflags)
    *edi = temp0
    arg1.b = __in_al_dx(edx_1.w, eflags)
    void* eax
    eax:1.b = (&arg1[1]):1.b + edx_1:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += edx_1:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1
    void* eax_4
    int32_t esp_1
    bool c_1
    bool o_1
    
    if (temp1 s>= 0)
        eax_4.b = (&eax_3[1]).b + edx_1:1.b
        eax_4.b |= *arg3
        edx_1[(arg3 << 1) + 0x410c0800]
        *(entry_ebx + arg3) += entry_ebx.b
        arg3 = &arg3[1]
        *arg5 += arg3.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        char temp3_1 = *0xa8000000
        *0xa8000000 += eax_4.b
        o_1 = add_overflow(temp3_1, eax_4.b)
        
        if (temp3_1 + eax_4.b s< 0 != o_1)
            goto label_4a9b89
        
        *(eax_4 * 2) += eax_4.b
        *eax_4 += eax_4.b
        eax_4 += 1
        *eax_4 += arg3.b
        *eax_4 += eax_4.b
        *(eax_4 + 0xc00407c) += arg3:1.b
        *eax_4 += eax_4.b
        *(eax_4 + edx_1 + 0x1c0040) += entry_ebx:1.b
        *eax_4 += eax_4.b
        esp_1 = 0x20004010
        *eax_4 += eax_4.b
        char temp5_1 = *0x53644954
        *0x53644954 += arg3.b
        c_1 = temp5_1 + arg3.b u< temp5_1
        goto label_4a9b73
    
    eax_3.b = eax_3.b
    *eax_3 += eax_3.b
    esp_1 = 0x1c004010
    *eax_3 += eax_3.b
    *(eax_3 + edx_1 + 0x200040) += entry_ebx:1.b
    *eax_3 += eax_3.b
    eax_4 = eax_3 | 0x53644954
    c_1 = false
    label_4a9b73:
    *(esp_1 - 4) = entry_ebx
    int16_t* esp = esp_1 - 5
    uint8_t* temp4_1 = edi
    edi -= 1
    int16_t es
    bool c_4
    bool cond:0_1
    
    if (add_overflow(temp4_1, 0xffffffff))
        if (c_1)
            goto label_4a9c62
        
    label_4a9bee:
        arg5 = &arg5[1]
        arg4 = *(arg4 - 0x58) * 0xc00407c
        *eax_4 += eax_4.b
        *(eax_4 * 2) -= 1
        entry_ebx:1.b *= 2
        *eax_4 += eax_4
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *(eax_4 - 0x80000000) += eax_4.b
        eax_4.b += *eax_4
    label_4a9c0c:
        es = *esp
        esp = &esp[1]
    label_4a9c0d:
        char* temp17_1 = entry_ebx
        entry_ebx -= 1
        cond:0_1 = temp17_1 - 1 s>= 0
    else
        arg4 = *(edi + 0x6e) * 0x4a9b8073
        *edi += eax_4.b
        eax_4 |= 0x53644954
        *(esp - 4) = entry_ebx
        esp -= 5
        uint8_t* temp6_1 = edi
        edi -= 1
        o_1 = add_overflow(temp6_1, 0xffffffff)
    label_4a9b89:
        
        if (not(o_1))
            arg4 = *(edi + 0x6e) * 0x4a9b3073
            eax_4.b += eax_4:1.b
            eax_4.b = __in_al_dx(edx_1.w, eflags)
            eax_4 += 1
            *arg3 += arg3.b
            *(arg3 * 3) += arg3.b
            *(esp - 4) = entry_ebx
            *(esp - 8) = entry_ebx
            esp -= 9
            uint8_t* temp8_1 = edi
            edi -= 1
            
            if (add_overflow(temp8_1, 0xffffffff))
                *eax_4 += eax_4.b
                *edx_1 = *edx_1
                goto label_4a9c0c
            
            uint16_t* esi = __outsb(edx_1.w, *arg5, arg5, eflags)
            *(esp - 4) = entry_ebx
            *(esp - 8) = entry_ebx
            esp -= 9
            *eax_4 |= eax_4
            *((eax_4 + 1) * 2) += (eax_4 + 1).b
            entry_ebx:1.b *= 2
            eax_4.b = (eax_4 + 1).b
            entry_ebx:1.b *= 2
            *eax_4 += eax_4
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *(eax_4 - 0x80000000) += eax_4.b
            *eax_4 += eax_4.b
            eax_4.b |= 0x52
            uint16_t* esi_1 = __outsd(edx_1.w, *esi, esi, eflags)
            arg5 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
            
            if (eax_4.b == 0)
                *edi += eax_4.b
                goto label_4a9c0d
            
            if (eax_4.b u< 0)
                entry_ebx:1.b *= 2
                *eax_4 += eax_4
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *(eax_4 - 0x80000000) += eax_4.b
                eax_4.b = eax_4.b
                char temp19_1 = eax_4.b
                eax_4.b += 0x4d
                c_4 = temp19_1 u>= 0xb3
                goto label_4a9c51
            
            arg5 = &arg5[1]
            arg4 = *(arg4 - 0x58) * 0x800407c
            *eax_4 += eax_4.b
            *eax_4 -= 1
            *eax_4 += eax_4.b
            *arg3 += 1
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 = *eax_4
            char temp20_1 = *(eax_4 + 0x43080001)
            *(eax_4 + 0x43080001) += eax_4.b
            
            if (temp20_1 + eax_4.b u< temp20_1)
                goto label_4a9c62
            
            goto label_4a9bee
        
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 = *eax_4
        char temp7_1 = *(eax_4 + 0x4b070002)
        *(eax_4 + 0x4b070002) += eax_4.b
        cond:0_1 = temp7_1 + eax_4.b s>= 0
    
    char* eax_5
    bool c_5
    bool s_3
    
    if (cond:0_1)
        *eax_4 += entry_ebx.b
        *eax_4 += eax_4.b
        eax_5, edx_1, arg3 = (*eax_4)()
        *eax_5 += eax_5.b
        *arg3 += 1
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 = *eax_5
        char temp12_1 = eax_5[0x560a0005]
        eax_5[0x560a0005] += eax_5.b
        c_5 = temp12_1 + eax_5.b u< temp12_1
        s_3 = temp12_1 + eax_5.b s< 0
        
        if (c_5)
            goto label_4a9cdc
        
        goto label_4a9c73
    
    arg4 = *(arg4 + 0x50) * 0x10004a99
    *eax_4 += eax_4.b
    eax_5, edx_1, arg3 = (*eax_4)()
    *eax_5 += eax_5.b
    *arg3 += 1
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *eax_5 = *eax_5
    char temp13_1 = eax_5[0x4d060003]
    eax_5[0x4d060003] += eax_5.b
    bool c_3 = temp13_1 + eax_5.b u< temp13_1
    bool p_1 = unimplemented  {add byte [eax+0x4d060003], al}
    bool a_1 = unimplemented  {add byte [eax+0x4d060003], al}
    bool z_1 = temp13_1 == neg.b(eax_5.b)
    bool o_4 = add_overflow(temp13_1, eax_5.b)
    void* esp_16
    
    if (z_1)
    label_4a9c9b:
        
        if (o_4)
            *eax_5 += eax_5.b
            arg7 f- fconvert.t(*eax_5)
            void* eax_8
            eax_8:1.b = (&eax_5[1]):1.b + edx_1:1.b
            return sub_4a9d19(eax_8, edx_1, arg3, arg4, arg5, edi, arg7) __tailcall
        
        *(esp - 4) = &data_4010bc
        eax_5.b = sbb.b(eax_5.b, 0, c_3)
        char temp23_1 = entry_ebx:1.b
        char temp24_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        eax_5.b = sbb.b(eax_5.b, 0, temp23_1 + temp24_1 u< temp23_1)
        entry_ebx:1.b *= 2
        *eax_5 = &eax_5[*eax_5]
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        eax_5[0x80000000] += eax_5.b
        es = *(esp - 4)
        char temp25_1 = *edx_1
        *edx_1 += arg3.b
        *(esp - 6) = arg5
        
        if (temp25_1 + arg3.b u>= temp25_1)
            if (temp25_1 + arg3.b s>= 0)
                goto label_4a9d05
            
            *(edx_1 + 0x73)
            goto label_4a9cc8
        
        eax_5:1.b += entry_ebx:1.b
        eax_5.b ^= *eax_5
        char temp26_1 = *(fsbase + eax_5) ^ eax_5.b
        *(fsbase + eax_5) = temp26_1
        
        if (temp26_1 s>= 0)
            void* eax_10 = &eax_5[1]
            *(eax_10 + 0xe004ab4) += arg3:1.b
            *eax_10 += eax_10.b
            *eax_10 += eax_10.b
            char temp21_1 = *0xbc000000
            *0xbc000000 += eax_10.b
            *eax_10 = adc.b(*eax_10, eax_10.b, temp21_1 + eax_10.b u< temp21_1)
            *eax_10 |= eax_10.b
            *eax_10 += eax_10.b
            *eax_10 += eax_10.b
            *(eax_10 + edx_1 + 0x100040) += entry_ebx:1.b
            *eax_10 += eax_10.b
            esp_16 = 0x1c004010
            
            while (true)
                *eax_10 += eax_10.b
                *(eax_10 + edx_1 + 0x200040) += entry_ebx:1.b
                *eax_10 += eax_10.b
                eax_5 = eax_10 | 0x53644954
            label_4a9d6f:
                *(esp_16 - 4) = entry_ebx
                esp_16 -= 5
                char* temp27_1 = entry_ebx
                entry_ebx = &entry_ebx[1]
                uint16_t* esi_3 = __outsd(edx_1.w, *arg5, arg5, eflags)
                arg5 = __outsb(edx_1.w, *esi_3, esi_3, eflags)
                
                if (temp27_1 == 0xffffffff)
                    break
                
                if (&temp27_1[1] s< 0)
                    *eax_5 += eax_5.b
                else
                    int32_t ebx
                    int16_t es_1
                    ebx, es_1 = __les_gprz_memp(*(arg4 + 0x4a))
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    entry_ebx, es = __les_gprz_memp(*(arg4 + 0x18004a))
                    *eax_5 += eax_5.b
                    arg7 f- fconvert.t(*eax_5)
                    void* eax_11
                    eax_11:1.b = (&eax_5[1]):1.b + edx_1:1.b
                    eax_11.b ^= *eax_11
                    *entry_ebx += edx_1:1.b
                    *(entry_ebx + arg5) += (eax_11 + 1).b
                    *(eax_11 + 2) += arg3.b
                    eax_5 = (eax_11 + 2) ^ *(eax_11 + 2)
                    eax_5.b ^= *eax_5
                    char temp30_1 = *(fsbase + eax_5) ^ eax_5.b
                    *(fsbase + eax_5) = temp30_1
                    
                    if (temp30_1 s>= 0)
                        eax_10:1.b = (&eax_5[1]):1.b + arg3:1.b
                        edx_1 = 0x540c004a
                        arg3 -= 1
                        *(esp_16 - 4) = entry_ebx
                        *(esp_16 - 8) = entry_ebx
                        bool cond:6_1 = esp_16 == 9
                        *(esp_16 - 0xd) = entry_ebx
                        esp_16 -= 0xd
                        arg5 = __outsd(0x4a, *arg5, arg5, eflags)
                        int16_t temp0_3
                        temp0_3, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
                        *(entry_ebx + 0x65) = temp0_3
                        
                        if (cond:6_1)
                            continue
                        else
                            eax_5 = eax_10 + 1
                            *eax_5 += eax_5:1.b
                            edx_1 = 0x540c0049
                            *eax_5 += eax_5.b
                            *eax_5 += eax_5.b
                        label_4a9ddb:
                            *eax_5 += eax_5.b
                            *eax_5 += eax_5.b
                            *eax_5 += eax_5.b
                            *eax_5 += eax_5.b
                            arg5[(entry_ebx << 2) + 0x4a] += edx_1:1.b
                            *eax_5 += eax_5.b
                        
                        *eax_5 += eax_5.b
                
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                int32_t eax_14 = sx.d(eax_5.w)
                *(eax_14 * 2 - 0x72bc0000) += (edx_1 - 1):1.b
                void* edx_8 = edx_1 - 2
                *(esp_16 + 0x33000041) += edx_8.b
                char* eax_15
                eax_15:1.b = (eax_14 + 1):1.b + arg3:1.b
                char* ebp = *esp_16
                void* esp_21 = esp_16 + 4
                void* ecx_2 = &arg3[1]
                *eax_15 += ecx_2.b
                char* eax_16 = eax_15 ^ *eax_15
                eax_16.b ^= *eax_16
                char temp31 = *(fsbase + eax_16) ^ eax_16.b
                *(fsbase + eax_16) = temp31
                void* ecx_3
                bool c_12
                
                if (temp31 s>= 0)
                    void* eax_17
                    eax_17:1.b = (&eax_16[1]):1.b + (&eax_16[1]).b
                    *edi
                    edi = &edi[4]
                    edx_8 -= 1
                    *eax_17 += eax_17.b
                    eax_17.b |= 0x41
                    *(eax_17 + 0x1c004160) += eax_17:1.b
                    eax_16 = eax_17 | *ecx_2
                    
                    if (eax_16 s< 0)
                        eax_16[0x84004ab1] += edx_8:1.b
                        entry_ebx.b = 0x4a
                        char temp39_1 = *0x53644954
                        *0x53644954 += edx_8.b
                        c_12 = temp39_1 + edx_8.b u< temp39_1
                        goto label_4a9e9d
                    
                    ecx_3 = ecx_2 + 1
                    ebp[(edx_8 << 2) + 0x4a] += edx_8.b
                    *(ecx_3 + 0x627c0041) += eax_16.b
                    goto label_4a9e3b
                
                while (true)
                    edi[(ebp << 2) + 0x4a] += (ecx_2.w + 1):1.b
                    *(ebp + arg5 + 0x4a) += (ecx_2.w + 1).b
                    *(ebp + arg5 + 0x35d8004a) += edx_8.b
                    eax_16.b *= 2
                    int16_t ecx_5
                    ecx_5.b = 0x4a
                    eax_16[0x14004ab0] += ecx_5:1.b
                    eax_16.b = 0x4a
                    eax_16[0xd4004a92] += entry_ebx.b
                    eax_16.b = 0x4a
                    *eax_16 += eax_16:1.b
                    eax_16.b = entry_ebx.b + entry_ebx:1.b
                    eax_16.b = 0x4a
                    *eax_16 += 0x4a
                    eax_16:1.b += 0x4a
                    entry_ebx.b = 0x4a
                    eax_16.b = 0x4a + eax_16:1.b
                    void* edx_10
                    edx_10.b = 0x4a
                    entry_ebx[arg5 << 2] += entry_ebx:1.b
                    entry_ebx[(arg5 << 2) + 0x4a] += 0x4a
                    eax_16[0xb0004ab1] += eax_16:1.b
                    char temp33_1 = entry_ebx[(arg5 << 2) + 0x5415004a]
                    entry_ebx[(arg5 << 2) + 0x5415004a] += eax_16.b
                    c_12 = temp33_1 + eax_16.b u< temp33_1
                    *(esp_21 - 4) = entry_ebx
                    esp_21 -= 4
                label_4a9e9d:
                    *(esp_21 - 4) = entry_ebx
                    bool cond:5_1 = eax_16 == 1
                    int32_t edi_1 = *(esp_21 - 5)
                    char* esi_4 = *(esp_21 - 1)
                    ebp = *(esp_21 + 3)
                    entry_ebx = *(esp_21 + 0xb)
                    edx_8 = *(esp_21 + 0xf)
                    ecx_3 = *(esp_21 + 0x13)
                    eax_16 = *(esp_21 + 0x17)
                    esp_21 += 0x1b
                    uint16_t* esi_5 = __outsb(edx_8.w, *esi_4, esi_4, eflags)
                    uint8_t temp0_5
                    temp0_5, edi = __insb(edi_1, edx_8.w, eflags)
                    *edi = temp0_5
                    uint16_t* eax_18
                    void* esp_29
                    void* edi_3
                    bool c_15
                    bool z_2
                    
                    if (c_12)
                        eax_18 = &eax_16[0x53530a00]
                        esp_29 = esp_21 - 1
                        edi_3 = edi - 1
                        
                        if (add_overflow(edi, 0xffffffff))
                            if (edi - 1 s>= 0)
                                *(ecx_3 + (eax_18 << 1)) += ecx_3.b
                                goto label_4a9fcf
                            
                            if (eax_16 u< 0xacacf600)
                                breakpoint
                            
                            *(eax_18 + 0x1ff0000) -= 1
                        else
                            *(edi_3 + 0x6e)
                            eax_18[-0x3b808000].b += ecx_3.b
                            *eax_18 += eax_18.b
                            *ecx_3 += 1
                        
                        *eax_18 += eax_18.b
                        *eax_18 += eax_18.b
                        *eax_18 += eax_18.b
                        *eax_18 = *eax_18
                        char temp40_1 = eax_18[0x27860003].b
                        eax_18[0x27860003].b += eax_18.b
                        c_15 = temp40_1 + eax_18.b u< temp40_1
                        z_2 = temp40_1 == neg.b(eax_18.b)
                        break
                    
                    arg5 = __outsd(edx_8.w, *esi_5, esi_5, eflags)
                    int16_t temp0_6
                    temp0_6, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
                    *(entry_ebx + 0x65) = temp0_6
                    
                    if (not(cond:5_1))
                        arg5[(entry_ebx << 2) + 0x1507004a]
                        arg5[(entry_ebx << 2) + 0x1507004a] <<= 0x54
                        bool c_13 = unimplemented  {shl byte [esi+ebx*4+0x1507004a], 0x54}
                        *(esp_21 - 4) = entry_ebx
                        *(esp_21 - 8) = entry_ebx
                        int32_t edi_2 = *(esp_21 - 9)
                        uint16_t* esi_6 = *(esp_21 - 5)
                        int16_t ebp_1 = (*(esp_21 - 1)).w
                        entry_ebx = *(esp_21 + 7)
                        edx_8 = *(esp_21 + 0xb)
                        ecx_3 = *(esp_21 + 0xf)
                        eax_18 = *(esp_21 + 0x13)
                        esi_5 = __outsb(edx_8.w, *esi_6, esi_6, eflags)
                        uint8_t temp0_7
                        temp0_7, edi_3 = __insb(edi_2, edx_8.w, eflags)
                        *edi_3 = temp0_7
                        
                        if (not(c_13))
                            __outsd(edx_8.w, *esi_5, esi_5, eflags)
                            int32_t eflags_1
                            int16_t temp0_8
                            temp0_8, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp_1)
                            *(entry_ebx + 0x65) = temp0_8
                            
                            if (eax_16 != 1)
                                *eax_18 += eax_18.b
                                undefined
                            
                            if (eax_16 s< 1)
                                jump(0x4a9eee)
                            
                            jump(0x4a9eee)
                        
                        *eax_18 += eax_18.b
                        eax_18[-0x40000000].b += eax_18.b
                        *(esp_21 + 0x13) = zx.d(es)
                        esp_29 = esp_21 + 0x13
                        char temp41_1 = *(edi_3 + (ecx_3 << 1))
                        *(edi_3 + (ecx_3 << 1)) += ecx_3.b
                        c_15 = temp41_1 + ecx_3.b u< temp41_1
                        z_2 = temp41_1 == neg.b(ecx_3.b)
                    label_4a9f25:
                        esi_5 = __outsb(edx_8.w, *esi_5, esi_5, eflags)
                        *(esp_29 - 4) = entry_ebx
                        
                        if (z_2)
                            *eax_18 += eax_18.b
                            *eax_18 += eax_18.b
                            *eax_18 += eax_18.b
                            eax_18[0x25].b
                            *eax_18 += eax_18.b
                            *eax_18 += eax_18.b
                            *eax_18 += eax_18.b
                            *eax_18 += eax_18.b
                            char temp42_1 = *eax_18
                            *eax_18 += eax_18.b
                            c_15 = temp42_1 + eax_18.b u< temp42_1
                        else if (not(z_2))
                            if (not(c_15))
                                jump(0x4a9f76)
                            
                            jump(0x4a9f2d)
                        
                        eax_18.b = sbb.b(eax_18.b, 0xa0, c_15)
                        eax_18[0xe000000].b += ecx_3.b
                        int16_t temp0_9 = edi_3
                        edi_3 = eax_18
                        edx_8 -= 2
                        *(esp_29 + 0x3300003d) += edx_8.b
                        char* eax_20
                        eax_20:1.b = (temp0_9 + 1):1.b + ecx_3:1.b
                        ebp = *(esp_29 - 4)
                        ecx_3 += 1
                        *eax_20 += ecx_3.b
                        char* eax_21 = eax_20 ^ *eax_20
                        eax_21.b ^= *eax_21
                        char temp43_1 = *(fsbase + eax_21) ^ eax_21.b
                        *(fsbase + eax_21) = temp43_1
                        
                        if (temp43_1 s>= 0)
                            *(ebp * 5 + 0x4a) += ecx_3.b
                            eax_21[1] += (&eax_21[1]).b
                            eax_18.b = (&eax_21[1]).b | 0x41
                        label_4a9fcf:
                            eax_18[0xe0020b0].b += eax_18:1.b
                            eax_21 = eax_18 | *ecx_3
                            
                            if (eax_21 s< 0)
                                *(esp_29 - 4) = entry_ebx
                                
                                if (eax_21 u< 0)
                                    jump(sub_4a9f84+0x133)
                                
                                jump(sub_4a9f84+0xbd)
                            
                            eax_21[0x41] += eax_21.b
                            *(ecx_3 + 0x627c0042) += eax_21.b
                            *(esp_29 + 0x61940041) += (ecx_3 + 2):1.b
                            ecx_3 += 3
                            *(ecx_3 + 0x64b40041) += ecx_3.b
                        
                        *eax_21 += eax_21.b
                        char eax_22 = (*esi_5).b
                        void* esi_8 = &esi_5[2]
                        *(ebp + esi_8 + 0x4a) += (ecx_3.w + 1).b
                        *(ebp + esi_8 + 0x35d8004a) += edx_8.b - 1
                        *(ebp * 5 - 0x51b7ffb6) += (ecx_3.w + 1).b
                        *edi_3
                        void* edi_4 = edi_3 + 1
                        *(edi_4 + (ebp << 2)) += (ecx_3.w + 1):1.b
                        *(edi_4 + (ebp << 2) + 0x4a) += eax_22 + entry_ebx.b
                        char temp44 = *0x53644954
                        *0x53644954 += edx_8.b - 5
                        
                        if (temp44 + edx_8.b - 5 u< temp44)
                            jump(sub_4a9f84+0x116)
                        
                        jump(sub_4a9f84+0xa0)
                    
                label_4a9e3b:
                    *(esp_21 + 0x61940041) += (ecx_3 + 1):1.b
                    ecx_2 = ecx_3 + 2
                    *(ecx_2 + 0x64b40041) += ecx_2.b
                
                goto label_4a9f25
            
            goto label_4a9ddb
    else
        arg5 = __outsd(edx_1.w, *arg5, arg5, eflags)
        *(esp - 4) = (o_4 ? 1 : 0) << 0xb | (temp13_1 + eax_5.b s< 0 ? 1 : 0) << 7 | (z_1 ? 1 : 0) << 6
            | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (c_3 ? 1 : 0)
        char* eax_6
        char edx_2
        edx_2:eax_6 = sx.q(eax_5)
        *arg3 += edx_2 - 1
        *eax_6 += eax_6.b
        int32_t* ecx
        eax_4, edx_1, ecx = (*arg3)()
        *eax_4 += eax_4.b
        *ecx += 1
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 = *eax_4
        char temp18_1 = *(eax_4 + 0x4d040004)
        *(eax_4 + 0x4d040004) += eax_4.b
        c_4 = temp18_1 + eax_4.b u< temp18_1
    label_4a9c51:
        arg5 = __outsd(edx_1.w, *arg5, arg5, eflags)
        eax_4, edx_1, arg3 = (&data_629ca6)()
        *eax_4 = sbb.b(*eax_4, eax_4.b, c_4)
        entry_ebx:1.b *= 2
        *eax_4 += eax_4
    label_4a9c62:
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *(eax_4 - 0x80000000) += eax_4.b
        eax_5 = eax_4 + 0x65560a00
        c_5 = eax_4 u>= 0x9aa9f600
        s_3 = eax_4 + 0x65560a00 s< 0
        
        if (c_5)
            goto label_4a9cdc
        
    label_4a9c73:
        
        if (not(s_3))
            if (not(c_5))
                goto label_4a9c81
            
            *eax_5 = adc.b(*eax_5, eax_5.b, c_5)
        label_4a9cc8:
            *eax_5 &= eax_5.b
            entry_ebx:1.b *= 2
            *eax_5 &= eax_5.b
            entry_ebx:1.b *= 2
            *eax_5 = &eax_5[*eax_5]
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            eax_5[0x80000000] += eax_5.b
        label_4a9cdc:
            *eax_5 |= eax_5.b
            entry_ebx[0x69]
            eax_5.b |= entry_ebx[0x69]
            *(entry_ebx + 0x74)
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += entry_ebx:1.b
            edx_1 -= 2
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
        label_4a9d01:
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
        label_4a9d05:
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            edx_1[0xffffff9d] += arg3:1.b
        label_4a9d0f:
            *eax_5 += entry_ebx:1.b
            *eax_5 += eax_5.b
            char temp29 = eax_5.b
            eax_5.b += entry_ebx.b
            *eax_5 = adc.b(*eax_5, eax_5.b, temp29 + entry_ebx.b u< temp29)
            trap(0xd)
        
        arg5 = __outsd(edx_1.w, *arg5, arg5, eflags)
        *(esp - 4) = esp
        esp -= 4
        char temp14_1 = *eax_5
        *eax_5 = adc.b(temp14_1, eax_5.b, c_5)
        eax_5.b = adc.b(eax_5.b, 0, 
            adc.b(temp14_1, eax_5.b, c_5) u< temp14_1
                || (c_5 && adc.b(temp14_1, eax_5.b, c_5) == temp14_1))
        char temp15_1 = entry_ebx:1.b
        char temp16_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        c_5 = temp15_1 + temp16_1 u< temp15_1
    label_4a9c81:
        eax_5.b = adc.b(eax_5.b, 0, c_5)
        entry_ebx:1.b *= 2
        *eax_5 = &eax_5[*eax_5]
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        eax_5[0x80000000] += eax_5.b
        *(esp - 4) = zx.d(es)
        char temp22_1 = *entry_ebx
        *entry_ebx += arg3.b
        c_3 = temp22_1 + arg3.b u< temp22_1
        o_4 = add_overflow(temp22_1, arg3.b)
        *(esp - 8) = arg5
        esp -= 8
        
        if (c_3)
            goto label_4a9d01
        
        if (temp22_1 + arg3.b s< 0)
            goto label_4a9c9b
        
        entry_ebx = &entry_ebx[1]
        *(eax_5 + 0x68)
        arg5 = *(eax_5 + 0x68) * 0x694c7265
        bool c_9 = unimplemented  {imul esi, dword [eax+0x68], 0x694c7265}
        
        if (c_9)
            *(arg4 + 0x4a)
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *(arg4 + 0x4a)
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *(esp - 4) = 0xffffff9d
            goto label_4a9d0f
        
        *(eax_5 * 2) += entry_ebx.b
        *eax_5 += eax_5.b
    
    esp_16 = 0x20004010
    *eax_5 += eax_5.b
    *0x53644954 += arg3.b
    goto label_4a9d6f
}
