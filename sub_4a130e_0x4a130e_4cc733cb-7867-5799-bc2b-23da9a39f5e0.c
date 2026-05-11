// ============================================================
// 函数名称: sub_4a130e
// 虚拟地址: 0x4a130e
// WARP GUID: 4cc733cb-7867-5799-bc2b-23da9a39f5e0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a170f
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a130e(int32_t* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0, uint16_t* arg8, void* arg9, char* arg10, char* arg11, int32_t* arg12, void* arg13)
{
    // 第一条实际指令: *arg1
    *arg1
    char* entry_ebx
    entry_ebx:1.b *= 2
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[-0x20000000].b += arg1.b
    *arg1
    char* eax = arg1 | *arg1
    bool c = false
    void* esp_1 = &__return_addr:2
    void* ebp = arg4 + 1
    
    if (arg4 + 1 s< 0)
        goto label_4a1394
    
    *eax += eax.b
    eax[1] += (&eax[1]).b
    *arg3 += 1
    eax[1] += (&eax[1]).b
    eax[1] += (&eax[1]).b
    eax[1] += (&eax[1]).b
    eax[1] = eax[1]
    char temp5_1 = eax[0x4c0c000d]
    eax[0x4c0c000d] += (&eax[1]).b
    void* const __return_addr_1 = __return_addr
    arg5 = arg8
    ebp = arg9
    entry_ebx = arg10
    arg2 = arg11
    arg3 = arg12
    void* eax_2 = arg13
    
    if (temp5_1 + (&eax[1]).b u>= temp5_1)
        *arg3 += eax_2:1.b
    label_4a13be:
        arg2 -= 1
        *eax_2 += arg3.b
        eax_2.b |= 0x41
        *(entry_ebx + arg3) += entry_ebx.b
        arg3 += 1
        *arg5 += arg3.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *entry_ebx += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 + arg2 + 0x80040) += entry_ebx:1.b
        *eax_2 += eax_2.b
        esp_1 = 0x10004010
        *eax_2 += eax_2.b
        *(eax_2 + arg2 + 0x140040) += entry_ebx:1.b
        goto label_4a13e8
    
    ebp -= 1
    int32_t eflags
    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
    TEB* fsbase
    int32_t* esp_2 = *(fsbase + arg5 + 0x69) * 0x10bc6465
    *(eax_2 + 1) += arg3.b
    entry_ebx:1.b *= 2
    *eax_2 += eax_2.b
    *arg3 += 1
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 = *eax_2
    char temp6_1 = *(eax_2 + 0x5006000d)
    *(eax_2 + 0x5006000d) += eax_2.b
    void* esp_4
    int16_t ss
    bool c_5
    
    if (temp6_1 + eax_2.b u< temp6_1)
        eax_2 += *eax_2
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 + arg2 + 0x100040) += entry_ebx:1.b
        *eax_2 += eax_2.b
        esp_4 = 0x14004010
        *eax_2 += eax_2.b
        char temp8_1 = *arg5
        *arg5 += arg2.b
        c_5 = temp8_1 + arg2.b u< temp8_1
    else
        uint16_t temp0_1
        temp0_1, temp0_1 = __insd(__return_addr_1.w, arg2.w, eflags)
        __return_addr_1.w = temp0_1
        *__return_addr_1 = temp0_1
        arg6 = *esp_2
        arg5 = esp_2[1]
        ebp = esp_2[2]
        entry_ebx = esp_2[4]
        arg2 = esp_2[5]
        int32_t ecx = esp_2[6]
        eax = esp_2[7]
        esp_1 = 0x4a13
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        char temp9_1 = eax.b
        eax.b += ecx.b
        int32_t ecx_1 = adc.d(ecx, *arg2, temp9_1 + ecx.b u< temp9_1)
        arg2[ecx_1 << 1] |= arg2.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        char temp10_1 = arg2.b
        arg2.b += ecx_1:1.b
        bool c_4 = temp10_1 + ecx_1:1.b u< temp10_1
        int32_t temp12_1 = *arg2
        arg3 = adc.d(ecx_1, temp12_1, c_4)
        c = adc.d(ecx_1, temp12_1, c_4) u< ecx_1 || (c_4 && adc.d(ecx_1, temp12_1, c_4) == ecx_1)
    label_4a1394:
        eax.b = sbb.b(eax.b, 0, c)
        *eax += eax.b
        uint8_t temp0_2
        temp0_2, __return_addr_1 = __insb(arg6, arg2.w, eflags)
        *__return_addr_1 = temp0_2
        eax.b = __in_al_dx(arg2.w, eflags)
        void* eax_5
        eax_5:1.b = (&eax[1]):1.b + arg2:1.b
        eax_5.b ^= *eax_5
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (eax_5 + 1).b
        *(eax_5 + 2) += arg3.b
        eax_2 = (eax_5 + 2) ^ *(eax_5 + 2)
        eax_2.b ^= *eax_2
        char temp4_1 = *(fsbase + eax_2)
        *(fsbase + eax_2) ^= eax_2.b
        
        if ((temp4_1 ^ eax_2.b) s>= 0)
            eax_2:1.b = (eax_2 + 1):1.b + arg3:1.b
            *arg2 &= arg3.b
            eax_2.b &= 0x21
            goto label_4a13be
        
        eax_2.b = adc.b(eax_2.b, 0, false)
    label_4a13e8:
        char temp7_1 = *eax_2
        *eax_2 += eax_2.b
        c_5 = temp7_1 + eax_2.b u< temp7_1
        *(esp_1 - 4) = zx.d(ss)
        esp_4 = esp_1 - 4
    
    *(esp_4 - 4) = esp_4
    void* ecx_2 = arg3 - 1
    *(esp_4 - 8) = eax_2
    void* esp_6 = esp_4 - 8
    bool c_6
    bool z_1
    
    if (c_5)
        *(esp_6 - 4) = 0x69746e65
        esp_6 -= 4
    label_4a1465:
        int16_t temp0_8
        temp0_8, eflags = __arpl_memw_gpr16(*(ecx_2 + 0x74), esp_6.w)
        *(ecx_2 + 0x74) = temp0_8
        ebp = *(__return_addr_1 + 0x6e) * &data_4010bc
    label_4a146f:
        *eax_2 |= eax_2.b
        entry_ebx:1.b *= 2
        *eax_2 |= eax_2.b
        entry_ebx:1.b *= 2
        *eax_2 += eax_2
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 - 0x80000000) += eax_2.b
        *eax_2 += eax_2
        void* temp16_1 = eax_2
        eax_2 |= 0x786f7250
        c_6 = false
        z_1 = (temp16_1 | 0x786f7250) == 0
        
        if ((temp16_1 | 0x786f7250) s>= 0)
            goto label_4a14de
        
        goto label_4a148c
    
    if (arg3 - 1 s< 0)
        *eax_2 = adc.b(*eax_2, eax_2.b, c_5)
        goto label_4a146f
    
    entry_ebx = &entry_ebx[1]
    uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
    uint16_t* esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    uint16_t* gsbase
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(gsbase + ecx_2 + (ebp << 1) + 0x6f), esi_2.w)
    *(gsbase + ecx_2 + (ebp << 1) + 0x6f) = temp0_4
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
    void* ecx_3 = ecx_2 - 1
    uint16_t* esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags)
    arg5 = __outsw(arg2.w, *esi_4, esi_4, eflags)
    arg2[ecx_3 << 1] |= arg2.b
    char temp14_1 = *__return_addr_1
    *__return_addr_1 += eax_2.b
    c_6 = temp14_1 + eax_2.b u< temp14_1
    *(esp_6 - 4) = zx.d(ss)
    *(esp_6 - 8) = esp_6 - 4
    ecx_2 = ecx_3 - 1
    z_1 = ecx_3 == 1
    *(esp_6 - 0xc) = eax_2
    void* esp_9 = esp_6 - 0xc
    int16_t cs
    
    if (not(c_6))
        if (ecx_3 - 1 s< 0)
        label_4a148b:
            *(esp_9 - 4) = eax_2
            esp_6 = esp_9 - 4
        label_4a148c:
            __return_addr_1 = *esp_6
            arg5 = *(esp_6 + 4)
            ebp = *(esp_6 + 8)
            entry_ebx = *(esp_6 + 0x10)
            arg2 = *(esp_6 + 0x14)
            ecx_2 = *(esp_6 + 0x18)
            eax_2 = *(esp_6 + 0x1c)
            esp_6 += 0x20
            
            if (not(c_6))
            label_4a1502:
                *(esp_6 + 4)
                *(esp_6 + 8)
                *(esp_6 + 0x10)
                arg2 = *(esp_6 + 0x14)
                ecx_2 = *(esp_6 + 0x18)
                eax_2 = *(esp_6 + 0x1c)
                esp_9 = esp_6 + 0x20
                int16_t* edi_1
                int16_t temp0_9
                temp0_9, edi_1 = __insd(*esp_6, arg2.w, eflags)
                *edi_1 = temp0_9
            label_4a1508:
                *(esp_9 - 4) = esp_9
                esp_6 = esp_9 - 4
                eax_2 = adc.d(eax_2, 0x4a, c_6)
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                char temp25_1 = *eax_2
                *eax_2 += eax_2.b
                
                if (not(add_overflow(temp25_1, eax_2.b)))
                    arg2 -= 1
                    char temp27_1 = eax_2:1.b
                    eax_2:1.b += arg2:1.b
                    eax_2 = adc.d(eax_2, 0x4a, temp27_1 + arg2:1.b u< temp27_1)
                    *eax_2 += eax_2.b
                label_4a1520:
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    *eax_2 += eax_2.b
                    arg7 f- float.t(*0x88004a)
                    goto label_4a152e
            else
                if (not(z_1) && not(c_6))
                label_4a1500:
                    
                    if (not(c_6))
                        goto label_4a1502
                    
                    *(esp_6 - 4) = zx.d(cs)
                    goto label_4a1571
                
                if (c_6)
                    goto label_4a14f7
                
                *(esp_6 - 4) = esp_6
                esp_6 -= 4
                *eax_2 = adc.b(*eax_2, eax_2.b, c_6)
                eax_2.b = eax_2.b
                entry_ebx:1.b *= 2
                *arg2 <<= 0x4a
                *ecx_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 = *eax_2
                char temp28_1 = *(eax_2 + 0x50090002)
                *(eax_2 + 0x50090002) += eax_2.b
                bool c_9 = temp28_1 + eax_2.b u< temp28_1
                
                if (c_9)
                    goto label_4a1520
                
                if (temp28_1 + eax_2.b s< 0)
                    *eax_2 = eax_2.b
                label_4a152e:
                    char temp29_1 = *eax_2
                    *eax_2 += eax_2.b
                    *esp_6
                    *arg2 = adc.b(*arg2, ecx_2.b, temp29_1 + eax_2.b u< temp29_1)
                    trap(0xd)
                
                *(esp_6 - 4) = eax_2
                __outsd(arg2.w, *arg5, arg5, eflags)
                
                if (not(c_9))
                    *eax_2 += eax_2.b
                    jump(eax_2)
            
            char temp26_1 = *(eax_2 + 0x5c000000)
            *(eax_2 + 0x5c000000) += ecx_2.b
            *arg2 = adc.b(*arg2, ecx_2.b, temp26_1 + ecx_2.b u< temp26_1)
            trap(0xd)
        
        uint16_t* esi_5 = __outsd(arg2.w, *arg5, arg5, eflags)
        uint16_t* esi_6 = __outsb(arg2.w, *esi_5, esi_5, eflags)
        uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags)
        int16_t temp0_5
        temp0_5, eflags = __arpl_memw_gpr16(*(gsbase + ecx_2 + (ebp << 1) + 0x6f), esi_7.w)
        *(gsbase + ecx_2 + (ebp << 1) + 0x6f) = temp0_5
        uint16_t* esi_8 = __outsb(arg2.w, *esi_7, esi_7, eflags)
        uint16_t* esi_9 = __outsb(arg2.w, *esi_8, esi_8, eflags)
        __outsw(arg2.w, *esi_9, esi_9, eflags)
        eax_2.b = __in_al_dx(arg2.w, eflags)
        char temp18_1 = *0x64491000
        *0x64491000 += (eax_2 + 1).b
        bool c_7 = temp18_1 + (eax_2 + 1).b u< temp18_1
        *0xe0004a0f = 0xe0004a13
        *0xe0004a0b = 0xe0004a0f
        *0xe0004a07 = eax_2
        __return_addr_1 = *0xe0004a07
        arg5 = *0xe0004a0b
        ebp = *0xe0004a0f
        entry_ebx = *0xe0004a17
        arg2 = *0xe0004a1b
        ecx_2 = *0xe0004a1f
        eax_2 = *0xe0004a23
        esp_9 = 0xe0004a27
        
        if (c_7)
            goto label_4a1481
        
        uint16_t* esi_11 = __outsb(arg2.w, *arg5, arg5, eflags)
        __outsw(arg2.w, *esi_11, esi_11, eflags)
        *(eax_2 + 0x40100000) += entry_ebx.b
        *(eax_2 + 0x40100000) += (eax_2 + 0x40100000).b
        char* eax_11
        int32_t* ecx_4
        eax_11, ecx_4 = (*(eax_2 + 0x40100000))()
        *eax_11 += eax_11.b
        *ecx_4 += 1
        *eax_11 += eax_11.b
        *eax_11 += eax_11.b
        *eax_11 += eax_11.b
        *eax_11 = *eax_11
        char temp23_1 = eax_11[0x42130000]
        eax_11[0x42130000] += eax_11.b
        bool z_2 = temp23_1 == neg.b(eax_11.b)
        __return_addr_1 = *0xe0004a27
        arg5 = *0xe0004a2b
        ebp = *0xe0004a2f
        entry_ebx = *0xe0004a37
        arg2 = *0xe0004a3b
        ecx_2 = *0xe0004a3f
        eax_2 = *0xe0004a43
        esp_6 = 0xe0004a47
        
        if (temp23_1 + eax_11.b u>= temp23_1)
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *(eax_2 - 0x80000000) += eax_2.b
            eax_2 += *eax_2
        else
            int16_t temp0_7
            temp0_7, eflags = __arpl_memw_gpr16(*(ecx_2 + 0x75), eax_2.w)
            *(ecx_2 + 0x75) = temp0_7
            
            if (z_2)
                *(eax_2 - 0x80000000) += eax_2.b
                eax_2 += *eax_2
            else
                arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
                
                if (not(z_2))
                    goto label_4a1465
                
                *entry_ebx = *entry_ebx
        
        char* temp33_1 = arg2
        arg2 |= *(eax_2 + 0x72)
        bool s_6 = (temp33_1 | *(eax_2 + 0x72)) s< 0
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (s_6)
            *arg2 -= 0x4a
        label_4a1553:
            *(ebp + 0x4a) += arg2:1.b
            *eax_2 += ecx_2.b
            eax_2.b |= 0x41
            *(entry_ebx + ecx_2) += entry_ebx.b
            *eax_2 += arg2.b
            ecx_2 = (ecx_2 + 1) & *arg2
            eax_2 = sx.d(eax_2.w)
        label_4a1567:
            *eax_2 += entry_ebx.b
            arg2 -= 2
            goto label_4a156b
        
        *0xe0004a43 = entry_ebx
        esp_6 = 0xe0004a43
    label_4a14de:
        char temp20_1 = *eax_2
        *eax_2 = adc.b(temp20_1, eax_2.b, false)
        eax_2.b = adc.b(eax_2.b, 0, adc.b(temp20_1, eax_2.b, false) u< temp20_1)
        char temp21_1 = entry_ebx:1.b
        char temp22_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        eax_2.b = adc.b(eax_2.b, 0, temp21_1 + temp22_1 u< temp21_1)
        entry_ebx:1.b *= 2
        *eax_2 += eax_2
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 - 0x80000000) += eax_2.b
        eax_2.b = eax_2.b
    label_4a14f7:
        void* temp24_1 = eax_2
        eax_2 |= 0x786f7250
        c_6 = false
        
        if ((temp24_1 | 0x786f7250) s>= 0)
            goto label_4a1553
        
        goto label_4a14fe
    
    *eax_2 += eax_2.b
    label_4a1481:
    char temp17_1 = *(eax_2 + 0x500d0001)
    *(eax_2 + 0x500d0001) += eax_2.b
    c_6 = temp17_1 + eax_2.b u< temp17_1
    z_1 = temp17_1 == neg.b(eax_2.b)
    bool s_3 = temp17_1 + eax_2.b s< 0
    
    if (not(c_6))
        if (s_3)
            goto label_4a1508
        
        goto label_4a148b
    
    *(esp_9 - 4) = eax_2
    
    if (c_6)
        arg2 -= 1
    label_4a156b:
        *(eax_2 + 0xe004a19) += eax_2.b
    label_4a1571:
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 * 2) += ecx_2.b
    else
        if (not(s_3))
            *(esp_9 - 8) = ebp
            esp_6 = esp_9 - 8
        label_4a14fe:
            
            if (not(c_6))
                goto label_4a1567
            
            goto label_4a1500
        
        eax_2.b = eax_2.b
    
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 + 0x540040) += entry_ebx:1.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 + 0x5c0040) += entry_ebx:1.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 + 0x640040) += entry_ebx:1.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 + 0x6c0040) += entry_ebx:1.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 + 0x740040) += entry_ebx:1.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 + 0x800040) += entry_ebx:1.b
    char temp30 = *eax_2
    *eax_2 += eax_2.b
    bool c_14 = temp30 + eax_2.b u< temp30
    char temp31 = eax_2.b
    eax_2.b = adc.b(temp31, 0x54, c_14)
    bool c_15 = adc.b(temp31, 0x54, c_14) u< temp31 || (c_14 && adc.b(temp31, 0x54, c_14) == temp31)
    void* ecx_6 = ecx_2 - 1
    *0x7800400c = arg2
    int32_t* esp_17 = 0x7800400c
    
    if (not(add_overflow(ecx_2, 0xffffffff)))
        goto label_4a1657
    
    uint16_t esp_18
    bool z_3
    bool o_3
    
    if (c_15)
        __return_addr_1 = *0x7800400c
        arg5 = *0x78004010
        ebp = *0x78004014
        entry_ebx = *0x7800401c
        arg2 = *0x78004020
        int32_t ecx_7 = *0x78004024
        eax_2 = *0x78004028
        
        if (not(c_15))
            uint16_t* esi_15 = __outsb(arg2.w, *arg5, arg5, eflags)
            __outsw(arg2.w, *esi_15, esi_15, eflags)
            trap(0xd)
        
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 - 0x80000000) += eax_2.b
        *0x78004028 = zx.d(cs)
        esp_18 = 0x4028
        *arg5 += eax_2.b
        z_3 = ecx_7 == 0xffffffff
        o_3 = add_overflow(ecx_7, 1)
        goto label_4a1643
    
    while (true)
        *eax_2 += eax_2.b
        *eax_2 = *eax_2
        char temp35_1 = *(eax_2 + 0x410d000f)
        *(eax_2 + 0x410d000f) += eax_2.b
        bool c_16 = temp35_1 + eax_2.b u< temp35_1
        int32_t eflags_2
        int16_t temp0_11
        temp0_11, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x65), esp_17.w)
        *(entry_ebx + 0x65) = temp0_11
        
        if (add_overflow(temp35_1, eax_2.b))
            bool z_4 = arg2 == 0xffffffff
            void* edi_2 = *esp_17
            uint16_t* esi_19 = esp_17[1]
            esp_17[2]
            esp_17[4]
            int16_t edx_2 = (esp_17[5]).w
            void* ecx_11 = esp_17[6]
            char* eax_17 = esp_17[7]
            
            if (c_16)
                int32_t eflags_6
                int16_t temp0_15
                temp0_15, eflags_6 = __arpl_memw_gpr16(*(ecx_11 + 0x75), eax_17.w)
                *(ecx_11 + 0x75) = temp0_15
                
                if (z_4)
                    __outsd(edx_2, *esi_19, esi_19, eflags_6)
                label_4a174f:
                    
                    if (c_16)
                        if (c_16)
                            jump(&data_4a1824:1)
                        
                        jump(0x4a17b7)
                    
                    *eax_17 += eax_17.b
                else
                    __outsb(edx_2, *(gsbase + esi_19), esi_19, eflags_6)
                    
                    if (not(z_4))
                        int32_t eflags_7
                        int16_t temp0_16
                        temp0_16, eflags_7 = __arpl_memw_gpr16(*(ecx_11 + 0x74), (&esp_17[8]).w)
                        *(ecx_11 + 0x74) = temp0_16
                        *(edi_2 + 0x6e)
                        
                        if (&arg2[1] s< 0)
                            jump(0x4a16f6)
                        
                        jump(0x4a16f6)
                    
                    *(&eax_17[1] * 2) += ecx_11:1.b
                
                undefined
            
            esp_17[8]
            esp_17[9]
            char* ebp_6 = esp_17[0xa]
            int16_t ebx_2 = (esp_17[0xc]).w
            char* edx_4 = esp_17[0xd]
            char* ecx_13 = esp_17[0xe]
            eax_17 = esp_17[0xf]
            
            if (c_16)
                if (not(z_4) && not(c_16))
                    *eax_17 = *eax_17
                    *(eax_17 + 0x1ff0000) += 1
                    goto label_4a17c7
                
                goto label_4a174f
            
            ebx_2:1.b *= 2
            *eax_17 = *eax_17
            *ecx_13 += 1
        label_4a17c7:
            *eax_17 += eax_17.b
            *eax_17 += eax_17.b
            *eax_17 += eax_17.b
            *eax_17 = *eax_17
            char temp47 = eax_17[0x500f0019]
            eax_17[0x500f0019] += eax_17.b
            
            if (temp47 + eax_17.b u>= temp47)
                if (temp47 + eax_17.b s< 0)
                    jump(0x4a1853)
                
                jump("Connection")
            
            *(edx_4 + ebp_6 + 0xe004a) += edx_4:1.b
            *eax_17 += eax_17.b
            *eax_17 += eax_17.b
            void* eax_20 = &eax_17[*eax_17]
            *eax_20 += eax_20.b
            *eax_20 += eax_20.b
            *(eax_20 + edx_4 + 0x540040) += ebx_2:1.b
            *eax_20 += eax_20.b
            *eax_20 += eax_20.b
            char temp50 = *0x52644954
            *0x52644954 += edx_4.b
            
            if (temp50 + edx_4.b u>= temp50)
                jump(0x4a18e6)
            
            jump("onseHeaderInfo")
        
        *(esp_17 - 4) = 0x65537261
        
        if (entry_ebx != 0xffffffff)
            *eax_2 = adc.b(*eax_2, eax_2.b, c_16)
            char* eax_13 = *(esp_17 - 4)
            *eax_13 += eax_13.b
            int32_t* eax_14
            int32_t ecx_9
            int16_t edx_1
            eax_14, edx_1, ecx_9 = (*eax_13)()
            entry_ebx:1.b = (&entry_ebx[1]):1.b * 2
            *eax_14 += eax_14
            *eax_14 += eax_14.b
            *eax_14 += eax_14.b
            char temp42 = eax_14[-0x20000000].b
            eax_14[-0x20000000].b += eax_14.b
            *eax_14 = adc.b(*eax_14, eax_14.b, temp42 + eax_14.b u< temp42)
            *(esp_17 - 4) = zx.d(cs)
            int32_t eflags_3
            int16_t temp0_12
            temp0_12, eflags_3 = __arpl_memw_gpr16(*(entry_ebx + 0x65), (esp_17 - 4).w)
            *(entry_ebx + 0x65) = temp0_12
            
            if (add_overflow(ecx_9, 1))
                char temp44 = *eax_14
                *eax_14 += eax_14.b
                *entry_ebx = adc.b(*entry_ebx, 0, temp44 + eax_14.b u< temp44)
                char temp45 = eax_14.b
                eax_14.b += 0x48
                __outsd(edx_1, *arg5, arg5, eflags_3)
                
                if (temp45 u< 0xb8)
                    jump(0x4a1783)
                
                return sub_4a170f(eax_14) __tailcall
            
            void* esi_17 = __outsb(edx_1, *arg5, arg5, eflags_3)
            int32_t eflags_4
            int16_t temp0_13
            temp0_13, eflags_4 = __arpl_memw_gpr16(*(__return_addr_1 + 0x64), ebp.w + 1)
            *(__return_addr_1 + 0x64) = temp0_13
            *(esi_17 + 0x67)
            uint16_t esp_22 = (*(esp_17 - 4)).w
            *eax_14 += eax_14.b
            char* eax_15
            int32_t* ecx_10
            eax_15, ecx_10 = (*(eax_14 * 2))()
            *ecx_10 += 1
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 += eax_15.b
            *eax_15 = *eax_15
            char temp46 = eax_15[0x410e0011]
            eax_15[0x410e0011] += eax_15.b
            int32_t eflags_5
            int16_t temp0_14
            temp0_14, eflags_5 = __arpl_memw_gpr16(*(entry_ebx + 0x65), esp_22)
            *(entry_ebx + 0x65) = temp0_14
            
            if (add_overflow(temp46, eax_15.b))
                jump(0x4a172e)
            
            jump("Language")
        
        entry_ebx:1.b = (&entry_ebx[1]):1.b * 2
        *(esp_17 - 8) = eax_2
        esp_18 = (esp_17 - 4).w - 4
        *eax_2 += eax_2.b
        *ecx_6 += 1
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 = *eax_2
        char temp41_1 = *(eax_2 + 0x4106000e)
        *(eax_2 + 0x4106000e) += eax_2.b
        z_3 = temp41_1 == neg.b(eax_2.b)
        o_3 = add_overflow(temp41_1, eax_2.b)
    label_4a1643:
        int32_t eflags_1
        int16_t temp0_10
        temp0_10, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), esp_18)
        *(entry_ebx + 0x65) = temp0_10
        
        if (o_3)
            int32_t esi_18 = __outsb(arg2.w, *arg5, arg5, eflags_1)
            
            if (z_3)
                *(gsbase + &entry_ebx[esi_18]) += arg2.b
                *((eax_2 + 1) * 2) += entry_ebx:1.b
                undefined
            
            char temp48 = *(eax_2 - 0x80000000)
            *(eax_2 - 0x80000000) += eax_2.b
            eax_2.b = adc.b(eax_2.b, 0, temp48 + eax_2.b u< temp48)
            char temp49 = eax_2.b
            eax_2.b += 0x46
            
            if (temp49 u>= 0xba)
                jump(0x4a179c)
            
            jump(0x4a172d)
        
        esp_17 = 0x54004010
        *eax_2 += eax_2.b
        eax_2, arg2, ecx_6 = (*(eax_2 * 2))()
        *ecx_6 += 1
        *eax_2 += eax_2.b
    label_4a1657:
        *eax_2 += eax_2.b
}
