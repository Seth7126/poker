// ============================================================
// 函数名称: sub_4a9d19
// 虚拟地址: 0x4a9d19
// WARP GUID: 0e89b8fd-77aa-56a5-af22-d5bcc7a46388
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4a9ae8
// ============================================================

int32_t __convention("regparm")sub_4a9d19(char* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: arg1.b ^= *arg1
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    int32_t* esp
    
    if (temp1 s< 0)
        esp = 0x20004010
        *eax_2 += eax_2.b
        *0x53644954 += arg3.b
        goto label_4a9d6f
    
    void* eax_3 = &eax_2[1]
    *(eax_3 + 0xe004ab4) += arg3:1.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    char temp2_1 = *0xbc000000
    *0xbc000000 += eax_3.b
    *eax_3 = adc.b(*eax_3, eax_3.b, temp2_1 + eax_3.b u< temp2_1)
    *eax_3 |= eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *(eax_3 + arg2 + 0x100040) += entry_ebx:1.b
    *eax_3 += eax_3.b
    esp = 0x1c004010
    
    while (true)
        *eax_3 += eax_3.b
        *(eax_3 + arg2 + 0x200040) += entry_ebx:1.b
        *eax_3 += eax_3.b
        eax_2 = eax_3 | 0x53644954
    label_4a9d6f:
        *(esp - 4) = entry_ebx
        esp -= 5
        char* temp3_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        int32_t eflags
        uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
        arg5 = __outsb(arg2.w, *esi, esi, eflags)
        
        if (temp3_1 == 0xffffffff)
            break
        
        int16_t es
        
        if (&temp3_1[1] s< 0)
            *eax_2 += eax_2.b
        else
            int32_t ebx
            int16_t es_1
            ebx, es_1 = __les_gprz_memp(*(arg4 + 0x4a))
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            entry_ebx, es = __les_gprz_memp(*(arg4 + 0x18004a))
            *eax_2 += eax_2.b
            arg7 f- fconvert.t(*eax_2)
            void* eax_4
            eax_4:1.b = (&eax_2[1]):1.b + arg2:1.b
            eax_4.b ^= *eax_4
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax_4 + 1).b
            *(eax_4 + 2) += arg3.b
            eax_2 = (eax_4 + 2) ^ *(eax_4 + 2)
            eax_2.b ^= *eax_2
            char temp4_1 = *(fsbase + eax_2) ^ eax_2.b
            *(fsbase + eax_2) = temp4_1
            
            if (temp4_1 s>= 0)
                eax_3:1.b = (&eax_2[1]):1.b + arg3:1.b
                arg2 = 0x540c004a
                arg3 -= 1
                *(esp - 4) = entry_ebx
                *(esp - 8) = entry_ebx
                bool cond:3_1 = esp == 9
                *(esp - 0xd) = entry_ebx
                esp -= 0xd
                arg5 = __outsd(0x4a, *arg5, arg5, eflags)
                int16_t temp0_1
                temp0_1, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4.w)
                *(entry_ebx + 0x65) = temp0_1
                
                if (cond:3_1)
                    continue
                else
                    eax_2 = eax_3 + 1
                    *eax_2 += eax_2:1.b
                    arg2 = 0x540c0049
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                label_4a9ddb:
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    arg5[entry_ebx * 2 + 0x25].b += arg2:1.b
                    *eax_2 += eax_2.b
                
                *eax_2 += eax_2.b
        
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        int32_t eax_7 = sx.d(eax_2.w)
        *(eax_7 * 2 - 0x72bc0000) += (arg2 - 1):1.b
        void* edx_1 = arg2 - 2
        *(esp + 0x33000041) += edx_1.b
        char* eax_8
        eax_8:1.b = (eax_7 + 1):1.b + arg3:1.b
        void* ebp = *esp
        void* esp_5 = &esp[1]
        void* ecx = arg3 + 1
        *eax_8 += ecx.b
        char* eax_9 = eax_8 ^ *eax_8
        eax_9.b ^= *eax_9
        char temp5 = *(fsbase + eax_9) ^ eax_9.b
        *(fsbase + eax_9) = temp5
        void* ecx_1
        bool c_2
        
        if (temp5 s>= 0)
            void* eax_10
            eax_10:1.b = (&eax_9[1]):1.b + (&eax_9[1]).b
            *arg6
            arg6 = &arg6[4]
            edx_1 -= 1
            *eax_10 += eax_10.b
            eax_10.b |= 0x41
            *(eax_10 + 0x1c004160) += eax_10:1.b
            eax_9 = eax_10 | *ecx
            
            if (eax_9 s< 0)
                eax_9[0x84004ab1] += edx_1:1.b
                entry_ebx.b = 0x4a
                char temp13_1 = *0x53644954
                *0x53644954 += edx_1.b
                c_2 = temp13_1 + edx_1.b u< temp13_1
                goto label_4a9e9d
            
            ecx_1 = ecx + 1
            *(ebp + (edx_1 << 2) + 0x4a) += edx_1.b
            *(ecx_1 + 0x627c0041) += eax_9.b
            goto label_4a9e3b
        
        while (true)
            arg6[(ebp << 2) + 0x4a] += (ecx.w + 1):1.b
            *(ebp + arg5 + 0x4a) += (ecx.w + 1).b
            *(ebp + arg5 + 0x35d8004a) += edx_1.b
            eax_9.b *= 2
            int16_t ecx_3
            ecx_3.b = 0x4a
            eax_9[0x14004ab0] += ecx_3:1.b
            eax_9.b = 0x4a
            eax_9[0xd4004a92] += entry_ebx.b
            eax_9.b = 0x4a
            *eax_9 += eax_9:1.b
            eax_9 = entry_ebx
            eax_9.b += eax_9:1.b
            eax_9.b = 0x4a
            *eax_9 += 0x4a
            eax_9:1.b += 0x4a
            entry_ebx.b = 0x4a
            eax_9.b = 0x4a + eax_9:1.b
            void* edx_3
            edx_3.b = 0x4a
            entry_ebx[arg5 << 2] += entry_ebx:1.b
            entry_ebx[(arg5 << 2) + 0x4a] += 0x4a
            eax_9[0xb0004ab1] += eax_9:1.b
            char temp7_1 = entry_ebx[(arg5 << 2) + 0x5415004a]
            entry_ebx[(arg5 << 2) + 0x5415004a] += eax_9.b
            c_2 = temp7_1 + eax_9.b u< temp7_1
            *(esp_5 - 4) = entry_ebx
            esp_5 -= 4
        label_4a9e9d:
            *(esp_5 - 4) = entry_ebx
            bool cond:2_1 = eax_9 == 1
            int32_t edi = *(esp_5 - 5)
            void* esi_1 = *(esp_5 - 1)
            ebp = *(esp_5 + 3)
            entry_ebx = *(esp_5 + 0xb)
            edx_1 = *(esp_5 + 0xf)
            ecx_1 = *(esp_5 + 0x13)
            eax_9 = *(esp_5 + 0x17)
            esp_5 += 0x1b
            uint16_t* esi_2 = __outsb(edx_1.w, *esi_1, esi_1, eflags)
            uint8_t temp0_3
            temp0_3, arg6 = __insb(edi, edx_1.w, eflags)
            *arg6 = temp0_3
            uint16_t* eax_11
            void* esp_13
            uint16_t* edi_2
            bool c_5
            bool z_1
            
            if (c_2)
                eax_11 = &eax_9[0x53530a00]
                esp_13 = esp_5 - 1
                edi_2 = arg6 - 1
                
                if (add_overflow(arg6, 0xffffffff))
                    if (arg6 - 1 s>= 0)
                        *(ecx_1 + (eax_11 << 1)) += ecx_1.b
                        goto label_4a9fcf
                    
                    if (eax_9 u< 0xacacf600)
                        breakpoint
                    
                    *(eax_11 + 0x1ff0000) -= 1
                else
                    *(edi_2 + 0x6e)
                    eax_11[-0x3b808000].b += ecx_1.b
                    *eax_11 += eax_11.b
                    *ecx_1 += 1
                
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 += eax_11.b
                *eax_11 = *eax_11
                char temp14_1 = eax_11[0x27860003].b
                eax_11[0x27860003].b += eax_11.b
                c_5 = temp14_1 + eax_11.b u< temp14_1
                z_1 = temp14_1 == neg.b(eax_11.b)
                break
            
            arg5 = __outsd(edx_1.w, *esi_2, esi_2, eflags)
            int16_t temp0_4
            temp0_4, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp.w)
            *(entry_ebx + 0x65) = temp0_4
            
            if (not(cond:2_1))
                arg5[entry_ebx * 2 + 0xa838025].b
                arg5[entry_ebx * 2 + 0xa838025].b <<= 0x54
                bool c_3 = unimplemented  {shl byte [esi+ebx*4+0x1507004a], 0x54}
                *(esp_5 - 4) = entry_ebx
                *(esp_5 - 8) = entry_ebx
                int32_t edi_1 = *(esp_5 - 9)
                uint16_t* esi_3 = *(esp_5 - 5)
                int16_t ebp_1 = (*(esp_5 - 1)).w
                entry_ebx = *(esp_5 + 7)
                edx_1 = *(esp_5 + 0xb)
                ecx_1 = *(esp_5 + 0xf)
                eax_11 = *(esp_5 + 0x13)
                esi_2 = __outsb(edx_1.w, *esi_3, esi_3, eflags)
                uint8_t temp0_5
                temp0_5, edi_2 = __insb(edi_1, edx_1.w, eflags)
                *edi_2 = temp0_5
                
                if (not(c_3))
                    __outsd(edx_1.w, *esi_2, esi_2, eflags)
                    int32_t eflags_1
                    int16_t temp0_6
                    temp0_6, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), ebp_1)
                    *(entry_ebx + 0x65) = temp0_6
                    
                    if (eax_9 != 1)
                        *eax_11 += eax_11.b
                        undefined
                    
                    if (eax_9 s< 1)
                        jump(0x4a9eee)
                    
                    jump(0x4a9eee)
                
                *eax_11 += eax_11.b
                eax_11[-0x40000000].b += eax_11.b
                *(esp_5 + 0x13) = zx.d(es)
                esp_13 = esp_5 + 0x13
                char temp15_1 = edi_2[ecx_1].b
                edi_2[ecx_1].b += ecx_1.b
                c_5 = temp15_1 + ecx_1.b u< temp15_1
                z_1 = temp15_1 == neg.b(ecx_1.b)
            label_4a9f25:
                esi_2 = __outsb(edx_1.w, *esi_2, esi_2, eflags)
                *(esp_13 - 4) = entry_ebx
                
                if (z_1)
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    eax_11[0x25].b
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    char temp16_1 = *eax_11
                    *eax_11 += eax_11.b
                    c_5 = temp16_1 + eax_11.b u< temp16_1
                else if (not(z_1))
                    if (not(c_5))
                        jump(0x4a9f76)
                    
                    jump(0x4a9f2d)
                
                eax_11.b = sbb.b(eax_11.b, 0xa0, c_5)
                eax_11[0xe000000].b += ecx_1.b
                int16_t temp0_7 = edi_2
                edi_2 = eax_11
                edx_1 -= 2
                *(esp_13 + 0x3300003d) += edx_1.b
                char* eax_13
                eax_13:1.b = (temp0_7 + 1):1.b + ecx_1:1.b
                ebp = *(esp_13 - 4)
                ecx_1 += 1
                *eax_13 += ecx_1.b
                char* eax_14 = eax_13 ^ *eax_13
                eax_14.b ^= *eax_14
                char temp17_1 = *(fsbase + eax_14) ^ eax_14.b
                *(fsbase + eax_14) = temp17_1
                
                if (temp17_1 s>= 0)
                    *(ebp * 5 + 0x4a) += ecx_1.b
                    eax_14[1] += (&eax_14[1]).b
                    eax_11.b = (&eax_14[1]).b | 0x41
                label_4a9fcf:
                    eax_11[0xe0020b0].b += eax_11:1.b
                    eax_14 = eax_11 | *ecx_1
                    
                    if (eax_14 s< 0)
                        *(esp_13 - 4) = entry_ebx
                        
                        if (eax_14 u< 0)
                            jump(sub_4a9f84+0x133)
                        
                        jump(sub_4a9f84+0xbd)
                    
                    eax_14[0x41] += eax_14.b
                    *(ecx_1 + 0x627c0042) += eax_14.b
                    *(esp_13 + 0x61940041) += (ecx_1 + 2):1.b
                    ecx_1 += 3
                    *(ecx_1 + 0x64b40041) += ecx_1.b
                
                *eax_14 += eax_14.b
                char eax_15 = (*esi_2).b
                void* esi_5 = &esi_2[2]
                *(ebp + esi_5 + 0x4a) += (ecx_1.w + 1).b
                *(ebp + esi_5 + 0x35d8004a) += edx_1.b - 1
                *(ebp * 5 - 0x51b7ffb6) += (ecx_1.w + 1).b
                *edi_2
                void* edi_3 = edi_2 + 1
                *(edi_3 + (ebp << 2)) += (ecx_1.w + 1):1.b
                *(edi_3 + (ebp << 2) + 0x4a) += eax_15 + entry_ebx.b
                char temp18 = *0x53644954
                *0x53644954 += edx_1.b - 5
                
                if (temp18 + edx_1.b - 5 u< temp18)
                    jump(sub_4a9f84+0x116)
                
                jump(sub_4a9f84+0xa0)
            
        label_4a9e3b:
            *(esp_5 + 0x61940041) += (ecx_1 + 1):1.b
            ecx = ecx_1 + 2
            *(ecx + 0x64b40041) += ecx.b
        
        goto label_4a9f25
    
    goto label_4a9ddb
}
