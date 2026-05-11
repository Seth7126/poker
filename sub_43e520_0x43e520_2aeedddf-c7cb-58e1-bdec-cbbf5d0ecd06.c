// ============================================================
// 函数名称: sub_43e520
// 虚拟地址: 0x43e520
// WARP GUID: 2aeedddf-c7cb-58e1-bdec-cbbf5d0ecd06
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int80_t __convention("regparm")sub_43e520(char* arg1, void* arg2, char* arg3, uint16_t* arg4 @ esi, uint8_t* arg5 @ edi, long double arg6 @ st0)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int16_t fs
    void* ebp = fs
    void* entry_ebx
    char* ebx = entry_ebx + 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(ebp + 0x43) += arg2:1.b
    label_43e53f:
    *arg1 += arg3.b
    *arg1 += arg1.b
    int32_t eflags
    uint8_t temp0_1
    temp0_1, arg5 = __insb(arg5, arg2.w, eflags)
    *arg5 = temp0_1
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    *ebx += arg2:1.b
    *(ebx + arg4) += (eax + 1).b
    *(eax + 2) += arg3.b
    arg1 = (eax + 2) ^ *(eax + 2)
    arg1.b ^= *arg1
    TEB* fsbase
    char temp1_1 = *(fsbase + arg1)
    *(fsbase + arg1) ^= arg1.b
    bool c_1 = false
    bool z_1 = temp1_1 == arg1.b
    void* esp
    
    if ((temp1_1 ^ arg1.b) s>= 0)
        arg1.b = (&arg1[1]).b + arg2:1.b
        arg1.b |= *arg3
        arg3[arg1 << 1] += arg3.b
    label_43e56b:
        *arg1 += arg3.b
        arg1.b |= 0x41
        char temp2_1 = *arg1
        *arg1 += ebx.b
        bool c_2 = temp2_1 + ebx.b u< temp2_1
        char temp3_1 = *(arg1 * 2 + 0x11)
        *(arg1 * 2 + 0x11) = adc.b(temp3_1, arg1.b, c_2)
        bool c_3 =
            adc.b(temp3_1, arg1.b, c_2) u< temp3_1 || (c_2 && adc.b(temp3_1, arg1.b, c_2) == temp3_1)
        *(esp - 4) = esp
        esp -= 4
        char* temp4_1 = ebx
        ebx = &ebx[1]
        bool cond:2_1 = temp4_1 == 0xffffffff
        uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsb(arg2.w, *esi, esi, eflags)
        
        while (true)
            if (cond:2_1)
                goto label_43e5ed
            
            uint16_t esi_1 = __outsd(arg2.w, *arg4, arg4, eflags)
            uint8_t* edi
            uint8_t temp0_3
            temp0_3, edi = __insb(arg5, arg2.w, eflags)
            *edi = temp0_3
            *(esp - 4) = ebx
            int16_t temp0_4
            temp0_4, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), esi_1)
            *(arg2 + 0x6f) = temp0_4
            uint8_t* edi_1
            uint8_t temp0_5
            temp0_5, edi_1 = __insb(edi, arg2.w, eflags)
            *edi_1 = temp0_5
            uint8_t* edi_2
            uint8_t temp0_6
            temp0_6, edi_2 = __insb(edi_1, arg2.w, eflags)
            *edi_2 = temp0_6
            arg5 = *(esp - 4)
            uint16_t* esi_2 = *esp
            ebp = *(esp + 4)
            ebx = *(esp + 0xc)
            arg2 = *(esp + 0x10)
            arg3 = *(esp + 0x14)
            arg1 = *(esp + 0x18)
            esp += 0x1c
            
            if (not(c_3))
                *(ebp + 0x11070043)
                *(ebp + 0x11070043) = ror.b(*(ebp + 0x11070043), 0x54)
                c_1 = unimplemented  {ror byte [ebp+0x11070043], 0x54}
                char* temp16_1 = ebx
                ebx = &ebx[1]
                z_1 = temp16_1 == 0xffffffff
                uint16_t* esi_3 = __outsd(arg2.w, *esi_2, esi_2, eflags)
                arg4 = __outsb(arg2.w, *esi_3, esi_3, eflags)
                break
            
            char* temp14_1 = arg1
            arg1 -= 1
            cond:2_1 = temp14_1 == 1
            arg4 = __outsd(arg2.w, *esi_2, esi_2, eflags)
            
            if (temp14_1 == 1)
                arg3 = &arg3[1]
                goto label_43e56b
            
            if (not(c_3))
                int16_t temp0_30
                temp0_30, eflags = __arpl_memw_gpr16(*(ebx - 0x75), ebp.w)
                *(ebx - 0x75) = temp0_30
                arg1[0xffffffe5] u>>= 0x43
                *arg1 += arg1.b
                *arg1 += arg1.b
                char i
                
                do
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *(ebp + 0x43) += arg3.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    i = *arg1
                    *arg1 += arg1.b
                while (i == neg.b(arg1.b))
                ebx = &ebx[1]
                goto label_43e53f
    
    if (z_1)
        *arg1 += arg1.b
        goto label_43e608
    
    uint16_t esi_4 = __outsd(arg2.w, *arg4, arg4, eflags)
    uint8_t* edi_3
    uint8_t temp0_7
    temp0_7, edi_3 = __insb(arg5, arg2.w, eflags)
    *edi_3 = temp0_7
    *(esp - 4) = ebx
    esp -= 4
    int16_t temp0_8
    temp0_8, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), esi_4)
    *(arg2 + 0x6f) = temp0_8
    uint8_t* edi_4
    uint8_t temp0_9
    temp0_9, edi_4 = __insb(edi_3, arg2.w, eflags)
    *edi_4 = temp0_9
    
    while (true)
        uint8_t* edi_5
        uint8_t temp0_10
        temp0_10, edi_5 = __insb(edi_4, arg2.w, eflags)
        *edi_5 = temp0_10
        arg5 = *esp
        arg4 = *(esp + 4)
        ebp = *(esp + 8)
        ebx = *(esp + 0x10)
        arg2 = *(esp + 0x14)
        arg3 = *(esp + 0x18)
        arg1 = *(esp + 0x1c)
        esp += 0x20
        void* esp_8
        int16_t ss
        
        if (not(c_1))
            void* eax_3 = __in_oeax_immb(0x43, eflags)
            eax_3.b += eax_3:1.b
            eax_3.b = __in_al_dx(arg2.w, eflags)
            arg1 = eax_3 + 1
            char temp6_1 = *0x6f460500
            *0x6f460500 += arg3.b
            c_1 = temp6_1 + arg3.b u< temp6_1
            
            if (c_1)
                goto label_43e61b
            
            if (not(c_1))
                *arg1 = &arg1[*arg1]
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                goto label_43e5c9
            
            *(arg1 + arg2 + 0x40) += arg2.b
            *(arg1 * 2) += arg1:1.b
            
            while (true)
                ebx:1.b *= 2
                *(esp - 4) = zx.d(ss)
                esp -= 3
                *arg3 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 = *arg1
                *arg1 += arg1.b
            label_43e5c9:
                *arg1 += arg1.b
                arg1.b |= *(arg2 + 0x75)
                
                if (arg1.b == 0)
                    ss = *esp
                    esp_8 = esp + 2
                    break
                
                uint16_t* esi_5 = __outsd(arg2.w, *arg4, arg4, eflags)
                arg4 = __outsb(arg2.w, *esi_5, esi_5, eflags)
                *(esp - 4) = ebx
                arg5 = *(arg2 + 0x65) * &data_416de0
                *arg1 -= arg1.b
                ebx:1.b *= 2
                esp -= 3
                *arg3 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                char temp19_1 = *arg1
                *arg1 += arg1.b
                *(arg1 * 2) = adc.b(*(arg1 * 2), 0, temp19_1 + arg1.b u< temp19_1)
            label_43e5ed:
                *arg3 = *arg3
                char* temp7_1 = arg1
                arg1 = &arg1[0x6f6c6f43]
                
                if (temp7_1 u< 0x909390bd)
                    arg1.b = __in_al_immb(0x43, eflags)
                    *arg1 += arg3.b
                    *arg1 += arg1.b
                    *arg1 -= 1
                    char temp13_1 = *arg1
                    *arg1 += arg1.b
                    bool c_6 = temp13_1 + arg1.b u< temp13_1
                    arg1, arg2, arg3 = (*arg1)()
                    *(arg1 * 2) = adc.b(*(arg1 * 2), arg1.b, c_6)
                    *arg1 += arg1.b
                    *arg1 = *arg1
                    *arg1 += arg1.b
                    goto label_43e60e
            
            break
        
    label_43e608:
        arg1[8] += arg1.b
    label_43e60e:
        arg1.b += *arg1
        int32_t temp5_1 = *(arg3 + 0x6e)
        *(arg3 + 0x6e) |= arg3
        c_1 = false
        int16_t temp0_13
        temp0_13, eflags = __arpl_memw_gpr16(*(arg2 + 0x65), arg4.w)
        *(arg2 + 0x65) = temp0_13
        int16_t temp0_14
        temp0_14, edi_4 = __insd(arg5, arg2.w, eflags)
        *edi_4 = temp0_14
        uint16_t* gsbase
        __outsb(arg2.w, *(gsbase + arg4), arg4, eflags)
        
        if ((temp5_1 | arg3) != 0)
        label_43e61b:
            char temp8_1 = *arg1
            *arg1 = adc.b(temp8_1, arg1.b, c_1)
            arg1.b = sbb.b(arg1.b, *arg1, 
                adc.b(temp8_1, arg1.b, c_1) u< temp8_1
                    || (c_1 && adc.b(temp8_1, arg1.b, c_1) == temp8_1))
            char temp9_1 = ebx:1.b
            arg1.b = sbb.b(arg1.b, *arg1, temp9_1 + ebx:1.b u< temp9_1)
            *arg1 = &arg1[*arg1]
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            bool c_9 = &arg1[*arg1] u< arg1
            int16_t es
            *(esp - 4) = zx.d(es)
            arg5 = *(esp - 4)
            arg4 = *esp
            *(esp + 4)
            ebx = *(esp + 0xc)
            *(esp + 0x10)
            *(esp + 0x14)
            char* eax_4 = *(esp + 0x18)
            esp_8 = esp + 0x1c
            void* edx_1
            
            if (c_9)
            label_43e6a0:
                arg5 = *esp_8
                uint16_t* esi_10 = *(esp_8 + 4)
                ebp = *(esp_8 + 8)
                ebx = *(esp_8 + 0x10)
                int16_t edx_2 = (*(esp_8 + 0x14)).w
                *(esp_8 + 0x18)
                arg1 = *(esp_8 + 0x1c)
                esp_8 += 0x20
                arg4 = __outsb(edx_2, *esi_10, esi_10, eflags)
                *(gsbase + ebx + arg4) += edx_2.b
            else
                ebp = *arg4 * 0x2c004010
                *eax_4 += eax_4.b
                arg1, arg2, arg3 = (*(eax_4 + 0x17))()
            label_43e645:
                esp_8 += 1
                *arg3 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg3 = *arg3
                *arg1 += arg1.b
                arg1.b = arg1.b
                edx_1 = arg2 | *(arg1 + 0x61)
                bool z_3 = (arg2 | *(arg1 + 0x61)) == 0
                uint16_t* esi_7 = __outsb(edx_1.w, *arg4, arg4, eflags)
                
                if (z_3)
                    goto label_43e6a0
                
                uint16_t* esi_8 = __outsd(edx_1.w, *esi_7, esi_7, eflags)
                uint8_t temp0_15
                temp0_15, arg5 = __insb(arg5, edx_1.w, eflags)
                *arg5 = temp0_15
                arg4 = __outsd(edx_1.w, *esi_8, esi_8, eflags)
                *arg1 = adc.b(*arg1, arg1.b, false)
                arg1.b = arg1.b
                char temp29_1 = ebx:1.b
                char temp30_1 = ebx:1.b
                ebx:1.b *= 2
                bool c_11 = temp29_1 + temp30_1 u< temp29_1
                
                if (not(add_overflow(temp29_1, temp30_1)))
                    *arg3 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 = *arg1
                    *arg1 += arg1.b
                    
                    if (arg1 u>= 0x90aff800)
                        jump("tion")
                    
                    arg1[0x6f500800] += (&arg1[0x6f500800]).b
                    undefined
                
                uint16_t* esi_9 = __outsd(edx_1.w, *arg4, arg4, eflags)
                arg4 = __outsb(edx_1.w, *esi_9, esi_9, eflags)
                *(esp_8 - 4) = esp_8
                char temp32_1 = *arg1
                *arg1 = adc.b(temp32_1, arg1.b, c_11)
                *arg1 = adc.b(*arg1, arg1.b, 
                    adc.b(temp32_1, arg1.b, c_11) u< temp32_1
                        || (c_11 && adc.b(temp32_1, arg1.b, c_11) == temp32_1))
                char temp33_1 = ebx:1.b
                char temp34_1 = ebx:1.b
                ebx:1.b *= 2
                *arg1 = rrc.b(*arg1, 0x44, temp33_1 + temp34_1 u< temp33_1)
                char temp35_1 = arg1:1.b
                arg1:1.b += edx_1.b
                *(arg1 * 2) = sbb.b(*(arg1 * 2), arg1.b, temp35_1 + edx_1.b u< temp35_1)
                *arg1 += arg1.b
                *arg1 = *arg1
                *arg1 += arg1.b
                *(esp_8 - 8) = zx.d(es)
                esp_8 -= 8
                *0x676e6152 += arg1.b
                *(gsbase + arg1) += edx_1.b
            
            *arg5 += ebx.b
            arg1[1] += (&arg1[1]).b
            arg1, edx_1, arg3 = (*arg5)()
            *arg1 += arg1.b
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            *arg1 += arg1.b
            *esp_8
            esp_8 += 2
            char temp20_1 = *arg4
            *arg4 += arg1.b
            *(esp_8 - 4) = ebx
            void* esp_13 = esp_8 - 4
            int16_t* edi_6
            int16_t temp0_16
            temp0_16, edi_6 = __insd(arg5, edx_1.w, eflags)
            *edi_6 = temp0_16
            uint16_t* esi_11 = __outsd(edx_1.w, *arg4, arg4, eflags)
            uint16_t* esi_12 = __outsd(edx_1.w, *esi_11, esi_11, eflags)
            void* eax_7
            void* eax_9
            
            if (temp20_1 == neg.b(arg1.b))
                *arg1 += arg1.b
                eax_9, edx_1, arg3 = (*0x1ff0000)()
            label_43e735:
                *eax_9 += eax_9.b
                *eax_9 += eax_9.b
                *eax_9 += eax_9.b
                *eax_9 = *eax_9
                *eax_9 += eax_9.b
                void* eax_10 = eax_9 | *eax_9
                *(edx_1 + (esi_12 << 1) + 0x61) |= edx_1.b
                int16_t temp0_18
                temp0_18, eflags = __arpl_memw_gpr16(*(ebx + 0x69), ebp.w)
                *(ebx + 0x69) = temp0_18
                int32_t esi_13 = __outsb(edx_1.w, *esi_12, esi_12, eflags)
                ebx[esi_13] += edx_1.b
                char* eax_11 = eax_10 + 1
                *(eax_11 * 2) += ebx.b
                char temp24_1 = ebx:1.b
                char temp25_1 = ebx:1.b
                ebx:1.b *= 2
                
                if (temp24_1 != neg.b(temp25_1) && arg3 != 1)
                    if (temp24_1 == neg.b(temp25_1))
                        *eax_11 += eax_11.b
                        *eax_11 += eax_11.b
                        eax_11[1] += eax_11.b
                        goto label_43e763
                    
                    ebx = &ebx[1]
                else
                    esp_13 += 1
                    *(arg3 - 1) += eax_11.b
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    *eax_11 += eax_11.b
                    *(arg3 - 1) = *(arg3 - 1)
                    *eax_11 += eax_11.b
                label_43e763:
                    eax_11.b = eax_11.b
                    *esp_13
                    *(esp_13 - 2) = esi_13
                    esp_13 -= 2
                    eax_11 = &eax_11[1]
                    *(edi_6 + 0x43) += edx_1:1.b
                
                *ebx += eax_11.b
                eax_11.b |= 0x54
                *(esp_13 - 4) = edi_6
                edi_6 = *(esp_13 - 4)
                esi_12 = *esp_13
                ebp = *(esp_13 + 4)
                ebx = *(esp_13 + 0xc)
                edx_1 = *(esp_13 + 0x10)
                arg3 = *(esp_13 + 0x14)
                eax_7 = *(esp_13 + 0x18)
                esp_13 += 0x1c
                
                if (eax_11.b == 0)
                    *eax_7 += arg3.b
                    *eax_7
                    trap(0xd)
                
                *eax_7 += eax_7
                *eax_7 += eax_7.b
                *edx_1 += eax_7.b
                *eax_7 += eax_7.b
                *(eax_7 - 0x19) += edx_1:1.b
            else
                *(esp_13 - 4) = esp_13
                *arg1 = adc.b(*arg1, arg1.b, temp20_1 + arg1.b u< temp20_1)
                *arg1 ^= arg1.b
                ebx:1.b *= 2
                arg1.b ^= 0x18
                esp_13 -= 3
                *arg3 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 = *arg1
                *arg1 += arg1.b
                *arg1 |= arg1.b
                arg1.b += 0x53
                int32_t edi_7 = *(edx_1 + 0x65) * &data_43e4dc
                arg1.b = arg1.b
                char temp22_1 = ebx:1.b
                char temp23_1 = ebx:1.b
                ebx:1.b *= 2
                
                if (temp22_1 + temp23_1 s< 0)
                    arg1[1] += ebx:1.b
                    arg1[1] += (&arg1[1]).b
                    eax_7, edx_1, arg3 = (*(arg1 + 0x1004419))()
                else
                    *arg3 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 = *arg1
                    *arg1 += arg1.b
                    *arg1 |= arg1
                    eax_7 = &arg1[0x6c797453]
                    *(esp_13 - 3) = esp_13 + 1
                    esp_13 -= 3
                    *eax_7 = adc.b(*eax_7, eax_7.b, arg1 u>= 0x93868bad)
                    *eax_7
                    char temp27_1 = ebx:1.b
                    char temp28_1 = ebx:1.b
                    ebx:1.b *= 2
                    *(eax_7 * 2 + 1) = sbb.b(*(eax_7 * 2 + 1), eax_7.b, temp27_1 + temp28_1 u< temp27_1)
                
                *eax_7 += eax_7.b
                *eax_7 += eax_7.b
                *eax_7 += eax_7.b
                *eax_7 = *eax_7
                *eax_7 += eax_7.b
                eax_7.b |= *eax_7
                *(eax_7 + (ebp << 1) + 0x75)
                *(eax_7 + (ebp << 1) + 0x75) |= edx_1
                bool p_1 = unimplemented  {or dword [eax+ebp*2+0x75], edx}
                int16_t temp0_17
                temp0_17, edi_6 = __insd(edi_7, edx_1.w, eflags)
                *edi_6 = temp0_17
                __bound_gprv_mema32(edx_1, *(ebx + 0x69))
                
                if (not(p_1))
                    *eax_7 += edx_1.b
                    eax_9 = eax_7 + 1
                    *0x1dff0000 += ebx.b
                    *eax_9 += eax_9.b
                    *arg3 += 1
                    goto label_43e735
            char temp37 = *eax_7
            *eax_7 += arg3.b
            bool c_18 = temp37 + arg3.b u< temp37
            char* eax_15
            
            if (temp37 != neg.b(arg3.b) && not(c_18))
                *arg3
                eax_15:1.b = adc.b((eax_7 | *arg3):1.b, 0x42, false)
                *(ebp * 5 + 0x42) += arg3.b
            else
                int32_t* esi_15 = __outsd(edx_1.w, *(esi_12 - 1), esi_12 - 1, eflags)
                
                if (not(c_18))
                    int32_t esi_16 = *(esp_13 + 4)
                    uint8_t* edi_9
                    uint8_t temp0_19
                    temp0_19, edi_9 = __insb(*esp_13, (*(esp_13 + 0x14)).w, eflags)
                    *edi_9 = temp0_19
                    *(esp_13 + 0x20)
                    *(esp_13 + 0x24)
                    *(esp_13 + 0x28)
                    *(esp_13 + 0x30)
                    *(esp_13 + 0x34)
                    *(esp_13 + 0x38)
                    *(esp_13 + 0x3c)
                    
                    if (*((esi_16 | *(edi_9 + 0x73)) + 0x69) * 0x657a696d - 1 s< 0)
                        jump(0x43e814)
                    
                    jump("mized")
                
                *(&ebx[1] + arg3) += (&ebx[1]).b
                *(eax_7 + 0x4c0042d4) += eax_7.b
                eax_15 = *esi_15
                esi_12 = &esi_15[1]
                edx_1 += 1
            
            *eax_15 += eax_15.b
            *edx_1
            void* eax_16 = *esp_13
            arg3:1.b = 0x42
            *(esp_13 + 0x61940045) += 0x42
            arg3[0x64b40042] += (&arg3[1]).b
            *(&ebx[1] * 2) += ((&arg3[1]).w + 1).b
            *(eax_16 - 0x1fffbce2) += ((&arg3[1]).w + 1):1.b
            void* eax_17
            eax_17.b = (eax_16 & *(ebx + 1)).b | 0x23
            *(eax_17 + 0x19) += (&ebx[2]):1.b
            *(eax_17 - 0xfffbce7) += (&ebx[3]).b
            *(esp_13 + 1) = zx.d(ss)
            ebx[4 + (ebp << 2)] += eax_17.b
            *eax_17 += ((&arg3[1]).w + 1).b
            *edi_6 = eax_17
            void* edi_11 = &edi_6[2]
            esi_12[(edx_1 + 2) * 4 + 0x21].b += ((&arg3[1]).w + 1).b
            *(eax_17 - 0x2a) += (&ebx[4]):1.b
            *(esp_13 + 1 + (ebp << 2) - 0x492bffbe) += eax_17.b
            *(esi_12 * 5 + 0x42) += eax_17.b
            *(eax_17 - 0x47) += ((&arg3[1]).w + 1).b
            *(eax_17 + (edi_11 << 2)) += ((&arg3[1]).w + 1).b
            *(eax_17 - 0xe) += ((&arg3[1]).w + 1):1.b
            eax_17.b += (&ebx[4]):1.b
            eax_17.b = __salc(eflags)
            *(edi_11 + edx_1 + 8 + 0x43) += eax_17.b
            eax_17.b *= 2
            *(esp_13 + 1)
            *(&ebx[5] + edx_1 + 8 + 0x43) += eax_17.b
            *(edi_11 + edx_1 + 8 + 0x22180043) += eax_17:1.b
            eax_17:1.b += ((&arg3[1]).w + 1):1.b
            *(eax_17 * 2 - 0x60)
            void* eax_19 = __in_oeax_dx((edx_1 + 8).w, eflags)
            *(eax_19 + 0x5800441b) += (edx_1 + 9):1.b
            eax_19.b = __in_al_dx((edx_1 + 9).w, eflags)
            eax_19.b *= 2
            *(eax_19 * 2 - 0xc)
            void* eax_20
            eax_20.b = __in_al_dx((edx_1 + 0xa).w, eflags)
            *(esp_13 + 4 + (ebp << 3) + 0x18e40042) += (&ebx[5]).b
            char temp44 = *(eax_20 - 0x5fffbd0a)
            *(eax_20 - 0x5fffbd0a) += ((&arg3[1]).w + 1):1.b
            int32_t eax_21 = adc.d(eax_20, 0x18500043, temp44 + ((&arg3[1]).w + 1):1.b u< temp44)
            *(esp_13 + 4 + &ebx[7]) += ((&arg3[1]).w + 1).b
            *(esi_12 + &ebx[7] + 0x20f00044) += (&ebx[7]):1.b
            *esi_12 += eax_21.b
            *0x15011400 += eax_21.b
            *(eax_21 + (esi_12 << 2)) += edi_11
            int32_t eax_22 = __in_oeax_dx((edx_1 + 0xb).w, eflags)
            *(esp_13 + 2) = esp_13 + 6
            *(eax_22 * 2 - 0x30) &= eax_22.b
            *(eax_22 * 2 - 0xc) &= eax_22
            *(eax_22 * 2 - 0x74) &= eax_22
            eax_22.b &= *(eax_22 * 2 - 0x34)
            *(eax_22 * 2 + 0x2c)
            *(eax_22 * 2 + 0x2c) &= eax_22.b
            eax_22.b = sbb.b(eax_22.b, 0x44, false)
            char temp46 = *(esp_13 + 2 + ((edx_1 + 0xb) << 1))
            *(esp_13 + 2 + ((edx_1 + 0xb) << 1)) += (edx_1 + 0xb).b
            *(esp_13 - 2) = &ebx[7]
            int32_t eflags_1
            int16_t temp0_23
            temp0_23, eflags_1 = __arpl_memw_gpr16(*(edx_1 + 0x7a), esi_12.w)
            *(edx_1 + 0x7a) = temp0_23
            uint8_t* edi_13
            uint8_t temp0_24
            temp0_24, edi_13 = __insb(edi_11 + 1, (edx_1 + 0xb).w, eflags_1)
            *edi_13 = temp0_24
            uint8_t* edi_14
            uint8_t temp0_25
            temp0_25, edi_14 = __insb(edi_13, (edx_1 + 0xb).w, eflags_1)
            *edi_14 = temp0_25
            *(esi_12 + 0x67)
            *(esi_12 + 0x67)
            bool c_22 = unimplemented  {imul ebp, dword [esi+0x67], 0x436e6957}
            uint16_t* esi_19 = __outsd((edx_1 + 0xb).w, *esi_12, esi_12, eflags_1)
            uint16_t* esi_20 = __outsb((edx_1 + 0xb).w, *esi_19, esi_19, eflags_1)
            
            if (temp46 == neg.b((edx_1 + 0xb).b))
                *(esp_13 - 6) = esi_20
                
                if (c_22)
                    jump(sub_43e99b+0x44)
                
                jump("ScrollBar")
            
            uint16_t* esi_21 = __outsd((edx_1 + 0xb).w, *esi_20, esi_20, eflags_1)
            uint8_t* edi_15
            uint8_t temp0_26
            temp0_26, edi_15 = __insb(edi_14, (edx_1 + 0xb).w, eflags_1)
            *edi_15 = temp0_26
            int32_t eax_23
            int32_t ecx_6
            void* edx_16
            eax_23, edx_16, ecx_6 = 0x144ae941()
            *(esp_13 - 6) = esp_13 - 2
            *(esp_13 - 0xa) = &ebx[7]
            int32_t eflags_2
            int16_t temp0_27
            temp0_27, eflags_2 = __arpl_memw_gpr16(*(edx_16 + 0x6f), esi_21.w)
            *(edx_16 + 0x6f) = temp0_27
            uint8_t* edi_16
            uint8_t temp0_28
            temp0_28, edi_16 = __insb(edi_15, edx_16.w, eflags_2)
            *edi_16 = temp0_28
            uint8_t* edi_17
            uint8_t temp0_29
            temp0_29, edi_17 = __insb(edi_16, edx_16.w, eflags_2)
            *edi_17 = temp0_29
            int32_t ebp_5 = *(esi_21 + 0x67) * 0x436e6957
            uint16_t* esi_22 = __outsd(edx_16.w, *esi_21, esi_21, eflags_2)
            int32_t esi_23 = __outsb(edx_16.w, *esi_22, esi_22, eflags_2)
            
            if (temp46 == neg.b((edx_1 + 0xb).b))
                jump("derSty")
            
            return sub_43e910(eax_23, edx_16, ecx_6, ebp_5, esi_23, edi_17) __tailcall
    
    goto label_43e645
}
