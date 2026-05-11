// ============================================================
// 函数名称: sub_40e6c4
// 虚拟地址: 0x40e6c4
// WARP GUID: 8ce47a8a-5f93-5cbf-94b5-b9dd4c0cd9ee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e812, sub_4ce8e2, sub_4ce88a, sub_40e8c2, sub_4ce832
// [被调用的父级函数]: 无
// ============================================================

int80_t __convention("regparm")sub_40e6c4(char* arg1, void* arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi, long double arg7 @ st0)
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
    label_40e6da:
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b |= 0xe7
    label_40e6e3:
    *(&arg1[1] * 2) += arg3.b
    arg1[1] += (&arg1[1]).b
    int32_t eflags
    __out_immb_al(0x40, (&arg1[1]).b, eflags)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1_1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1_1
    int32_t* esp
    
    if (temp1_1 s< 0)
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *(esp - 4) = 0xc0040e7
        esp -= 4
        *eax_3 += eax_3.b
        arg5[0x20].b += eax_3:1.b
        goto label_40e747
    
    void* eax_4
    eax_4.b = (&eax_3[1]).b * 2
    *eax_4 ^= eax_4.b
    int32_t eax_5 = eax_4 | 0x72434645
    arg6 = *esp
    arg5 = esp[1]
    arg4 = esp[2]
    entry_ebx = esp[4]
    arg2 = esp[5]
    arg3 = esp[6]
    char* eax_6 = esp[7]
    esp = &esp[8]
    
    if (eax_5 != 0)
        arg4 += 1
        
        if (eax_5 u< 0)
            goto label_40e78a
        
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (eax_5 u< 0)
            arg1 = &eax_6[1]
            arg1[0x30] += entry_ebx:1.b
            
            while (true)
                eax_6.b = (&arg1[1]).b * 2
                *eax_6 ^= eax_6.b
                eax_6.b |= 0x45
                bool cond:5_1 = eax_6.b u< 0
                bool cond:6_1 = eax_6.b u< 0
                *(esp - 4) = entry_ebx
                esp -= 4
                
                if (eax_6.b == 0)
                    goto label_40e727
                
                int32_t edi_5 = *esp
                arg5 = esp[1]
                void* ebp_2 = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax_6 = esp[7]
                esp = &esp[8]
                int16_t temp0_6
                temp0_6, arg6 = __insd(edi_5, arg2.w, eflags)
                *arg6 = temp0_6
                arg4 = ebp_2 + 1
                
                if (cond:5_1)
                    break
                
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                
                if (cond:6_1)
                    entry_ebx[0x61] |= eax_6.b
                    uint8_t* edi
                    uint8_t temp0_1
                    temp0_1, edi = __insb(arg6, arg2.w, eflags)
                    *edi = temp0_1
                    uint8_t* edi_1
                    uint8_t temp0_2
                    temp0_2, edi_1 = __insb(edi, arg2.w, eflags)
                    *edi_1 = temp0_2
                    uint8_t* edi_2
                    uint8_t temp0_3
                    temp0_3, edi_2 = __insb(edi_1, arg2.w, eflags)
                    *edi_2 = temp0_3
                    
                    if (not(add_overflow(eax_6, 0xffffffff)))
                        uint16_t* esi = __outsd(arg2.w + 1, *arg5, arg5, eflags)
                        __outsd(arg2.w + 1, *esi, esi, eflags)
                        uint8_t* edi_3
                        uint8_t temp0_4
                        temp0_4, edi_3 = __insb(edi_2, arg2.w + 1, eflags)
                        *edi_3 = temp0_4
                        edi_2 = *esp
                        uint16_t* esi_2 = esp[1]
                        esp[2]
                        esp[4]
                        arg2 = esp[5]
                        esp[6]
                        esp[7]
                        esp = &esp[8]
                        arg5 = __outsb(arg2.w, *esi_2, esi_2, eflags)
                    
                    *esp
                    uint16_t* esi_3 = __outsd(arg2.w + 1, *arg5, arg5, eflags)
                    __outsd(arg2.w + 1, *esi_3, esi_3, eflags)
                    uint8_t* edi_4
                    uint8_t temp0_5
                    temp0_5, edi_4 = __insb(edi_2, arg2.w + 1, eflags)
                    *edi_4 = temp0_5
                    arg6 = *(esp + 2)
                    uint16_t* esi_5 = *(esp + 6)
                    arg4 = *(esp + 0xa)
                    entry_ebx = *(esp + 0x12)
                    arg2 = *(esp + 0x16)
                    arg3 = *(esp + 0x1a)
                    *(esp + 0x1e)
                    esp += 0x22
                    arg5 = __outsb(arg2.w, *esi_5, esi_5, eflags)
                    void* eax_31
                    eax_31.b = 0xe6
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    *(eax_31 + 0xc0040e7) += arg2:1.b
                    *(eax_31 + 1) += (eax_31 + 1).b
                    arg1.b = (eax_31 + 1).b + entry_ebx.b
                    
                    if ((eax_31 + 1).b s>= neg.b(entry_ebx.b))
                        arg1:1.b += arg2:1.b
                        arg1.b ^= *arg1
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (&arg1[1]).b
                        arg1[2] += arg3.b
                        arg1 = &arg1[2] ^ *(arg1 + 2)
                        arg1.b ^= *arg1
                        char temp13_1 = *(fsbase + arg1) ^ arg1.b
                        *(fsbase + arg1) = temp13_1
                        
                        if (temp13_1 s< 0)
                            goto label_40e6da
                        
                        continue
                else
                    *arg6 += arg3.b
                    arg1 = &eax_6[2]
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
                *arg6 += arg3.b
                goto label_40e6e3
        else
            eax_6[0xffffffe7] u>>= 0x40
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
        label_40e727:
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
        
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        
        while (true)
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            eax_6[0xffffffe7] += arg3:1.b
            eax_3 = &eax_6[1]
            *(eax_3 * 2) += arg3.b
            *eax_3 += eax_3.b
            __out_immb_al(0x40, eax_3.b, eflags)
        label_40e747:
            eax_3:1.b += arg2:1.b
            eax_3.b ^= *eax_3
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (&eax_3[1]).b
            eax_3[2] += arg3.b
            eax_6 = &eax_3[2] ^ *(eax_3 + 2)
            eax_6.b ^= *eax_6
            char temp2_1 = *(fsbase + eax_6) ^ eax_6.b
            *(fsbase + eax_6) = temp2_1
            
            if (temp2_1 s< 0)
                goto label_40e792
            
            void* eax_9
            eax_9.b = (&eax_6[1]).b * 2
            *eax_9 ^= eax_9.b
            eax_6 = eax_9 | *(arg4 + 0x46)
            char* temp3_1 = arg6
            arg6 -= 1
            
            if (add_overflow(temp3_1, 0xffffffff))
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                goto label_40e7dd
            
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            arg4 += 1
            
            if (eax_6 u< 0)
                break
            
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (eax_6 u>= 0)
                __out_immb_oeax(0x40, eax_6, eflags)
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
                __out_immb_oeax(0x40, eax_6, eflags)
                goto label_40e797
        
        goto label_40e7e4
    
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    label_40e78a:
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    label_40e792:
    *eax_6 += eax_6.b
    entry_ebx:1.b <<= 0x40
    label_40e797:
    *(eax_6 * 2) += arg3.b
    *eax_6 += eax_6.b
    __out_immb_al(0x40, eax_6.b, eflags)
    eax_6:1.b += arg2:1.b
    eax_6.b ^= *eax_6
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&eax_6[1]).b
    eax_6[2] += arg3.b
    eax_6 = &eax_6[2] ^ *(eax_6 + 2)
    eax_6.b ^= *eax_6
    char temp4_1 = *(fsbase + eax_6) ^ eax_6.b
    *(fsbase + eax_6) = temp4_1
    
    if (temp4_1 s>= 0)
        void* eax_12
        eax_12.b = (&eax_6[1]).b * 2
        *eax_12 ^= eax_12.b
        eax_6 = eax_12 | *(arg4 + 0x46)
        *(arg4 + 0x72)
        arg4 = *(arg4 + 0x72) * 0x6f727245
        bool c_1 = unimplemented  {imul ebp, dword [ebp+0x72], 0x6f727245}
        
        if (c_1)
            goto label_40e7e5
        
        long double st0_1
        st0_1, eax_6, arg3, arg2 = sub_40e812(eax_6, arg4, arg7)
        arg7 = st0_1
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
    label_40e7e4:
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
    
    char temp5_1 = *eax_6
    *eax_6 += eax_6.b
    eax_6.b = sbb.b(eax_6.b, arg3:1.b, temp5_1 + eax_6.b u< temp5_1)
    eax_6 = &eax_6[1]
    *(eax_6 * 2) += arg3.b
    
    while (true)
        char temp7_1 = *eax_6
        *eax_6 += eax_6.b
        
        if (temp7_1 != neg.b(eax_6.b))
            void* eax_13
            eax_13:1.b = (&eax_6[1]):1.b + arg2:1.b
            eax_13.b ^= *eax_13
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (eax_13 + 1).b
            *(eax_13 + 2) += arg3.b
            void* eax_16 = (eax_13 + 2) ^ *(eax_13 + 2)
            eax_16.b ^= *eax_16
            char temp8 = *(fsbase + eax_16) ^ eax_16.b
            *(fsbase + eax_16) = temp8
            
            if (temp8 s>= 0)
                return sub_40e812(eax_16, arg4, arg7) __tailcall
            
            while (true)
                char temp9_1 = *eax_16
                *eax_16 += eax_16.b
                
                if (not(add_overflow(temp9_1, eax_16.b)))
                    break
                
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
            
            while (true)
                eax_16 += 1
                *(eax_16 * 2) += arg3.b
                
                while (true)
                    char temp12_1 = *eax_16
                    *eax_16 += eax_16.b
                    
                    if (temp12_1 == neg.b(eax_16.b))
                        break
                    
                    void* eax_18
                    eax_18:1.b = (eax_16 + 1):1.b + arg2:1.b
                    eax_18.b ^= *eax_18
                    *entry_ebx += arg2:1.b
                    *(entry_ebx + arg5) += (eax_18 + 1).b
                    *(eax_18 + 2) += arg3.b
                    void* eax_21 = (eax_18 + 2) ^ *(eax_18 + 2)
                    eax_21.b ^= *eax_21
                    char temp14_1 = *(fsbase + eax_21) ^ eax_21.b
                    *(fsbase + eax_21) = temp14_1
                    
                    if (temp14_1 s< 0)
                        goto label_40e89a
                    
                    void* eax_22
                    eax_22.b = (eax_21 + 1).b * 2
                    *eax_22 ^= eax_22.b
                    char* eax_23 = eax_22 | *(arg4 + 0x57)
                    
                    if (eax_23 u< 0)
                        goto label_40e8de
                    
                    if (eax_23 == 0)
                        *eax_23 += eax_23.b
                    label_40e8de:
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                    label_40e8ec:
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                    label_40e8f2:
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        *eax_23 += eax_23.b
                        eax_23.b &= 0xe9
                        *(&eax_23[1] * 2) += arg3.b
                        eax_23[1] += (&eax_23[1]).b
                        *((eax_23 + 1) * 3)
                        trap(0xd)
                    
                    arg4 += 1
                    
                    if (eax_23 u< 0)
                        goto label_40e8ec
                    
                    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                    
                    if (eax_23 u>= 0)
                        long double st0_3
                        int80_t x87_r1
                        st0_3, eax_21, arg3, arg2 = sub_40e8c2(eax_23, arg2, arg6, arg7, x87_r1)
                        arg7 = st0_3
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                        *eax_21 += eax_21.b
                    label_40e89a:
                        *eax_21 += eax_21.b
                        *(esp - 4) = arg4
                        eax_21.b = eax_21.b
                        
                        while (true)
                            char temp15_1 = *eax_21
                            *eax_21 += eax_21.b
                            
                            if (temp15_1 != neg.b(eax_21.b))
                                break
                            
                            *eax_21 += eax_21.b
                            *eax_21 += eax_21.b
                            *eax_21 += eax_21.b
                            *eax_21 += eax_21.b
                            *eax_21 += eax_21.b
                            *eax_21 += eax_21.b
                            *eax_21 += eax_21.b
                            eax_21.b += arg3.b
                            eax_21, arg3, arg2 = sub_4ce8e2(eax_21.b, arg2, arg3, esp - 4, arg5, arg6)
                        
                        void* eax_24
                        eax_24:1.b = (eax_21 + 1):1.b + arg2:1.b
                        eax_24.b ^= *eax_24
                        *entry_ebx += arg2:1.b
                        *(entry_ebx + arg5) += (eax_24 + 1).b
                        *(eax_24 + 2) += arg3.b
                        eax_23 = (eax_24 + 2) ^ *(eax_24 + 2)
                        eax_23.b ^= *eax_23
                        char temp16_1 = *(fsbase + eax_23) ^ eax_23.b
                        *(fsbase + eax_23) = temp16_1
                        
                        if (temp16_1 s>= 0)
                            return sub_40e8c2(eax_23, arg2, arg6, arg7, x87_r1) __tailcall
                        
                        goto label_40e8f2
                    
                    eax_16, arg3, arg2 = sub_4ce88a(arg4)
                
                *eax_16 += eax_16.b
                *eax_16 += eax_16.b
                *eax_16 += eax_16.b
                *eax_16 += eax_16.b
                *eax_16 += eax_16.b
                *eax_16 += eax_16.b
                *eax_16 += eax_16.b
                *(eax_16 - 0x18) += arg2:1.b
        
    label_40e7dd:
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
    label_40e7e5:
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += entry_ebx.b
        eax_6, arg3, arg2 = sub_4ce832(eax_6, arg2.w, arg3, arg4, arg5, arg6)
}
