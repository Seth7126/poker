// ============================================================
// 函数名称: sub_4683f7
// 虚拟地址: 0x4683f7
// WARP GUID: ef2739e1-122f-5a88-aad1-03b7eb73b9ee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_406010, sub_405f88, sub_403e4c, sub_404080, sub_402824, sub_468970, sub_403fa0, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4683f7(int32_t* arg1, char* arg2, char* arg3, char* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    entry_ebx:1.b *= 2
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[-0x20000000].b += arg1.b
    __bound_gprv_mema32(arg1, *arg1)
    char* eax = arg1 | 0x6c456e6f
    bool c = false
    bool z = (arg1 | 0x6c456e6f) == 0
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg6, arg2.w, eflags)
    *edi = temp0
    uint16_t* gsbase
    uint16_t* esi = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
    
    if (z)
        goto label_468461
    
    if (z)
        goto label_468479
    
    int32_t* esp
    TEB* fsbase
    bool c_4
    bool z_1
    bool z_4
    bool o_1
    
    if (not(z))
        eax[9] += arg3:1.b
        entry_ebx:1.b *= 2
        int32_t var_4 = 0x1ff0009
        esp = &var_4
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        eax[0x6f0c0063] += eax.b
        int32_t esi_1 = __outsb(arg2.w, *esi, esi, eflags)
        char* temp7_1 = arg4
        arg4 = &arg4[1]
        uint8_t* edi_1
        uint8_t temp0_1
        temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
        *edi_1 = temp0_1
        int16_t temp0_2
        temp0_2, edi = __insd(edi_1, arg2.w, eflags)
        *edi = temp0_2
        esi = __outsb(arg2.w, *(gsbase + esi_1), esi_1, eflags)
        
        if (temp7_1 == 0xffffffff)
            jump(*eax)
        
        if (temp7_1 != 0xffffffff)
            goto label_4684b0
        
        *eax += arg2.b
        eax = &eax[1]
        arg4[9] += entry_ebx:1.b
        char temp14_1 = entry_ebx:1.b
        char temp15_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        
        if (temp14_1 s>= neg.b(temp15_1))
            *eax = *eax
            char temp16_1 = eax[0x660a0064]
            eax[0x660a0064] += eax.b
            c = temp16_1 + eax.b u< temp16_1
            z_1 = temp16_1 == neg.b(eax.b)
            
            if (not(z_1))
                goto label_4684c6
            
            goto label_46845a
        
        entry_ebx:1.b *= 2
        *eax = &eax[*eax]
        *eax += eax.b
        *eax += eax.b
        eax[0x80000000] += eax.b
        char temp6_1 = *(fsbase + arg2)
        *(fsbase + arg2) += arg3.b
        c = temp6_1 + arg3.b u< temp6_1
        z_1 = temp6_1 == neg.b(arg3.b)
        
        if (not(z_1))
            goto label_4684c6
        
    label_46845a:
        uint8_t temp0_3
        temp0_3, edi = __insb(edi, arg2.w, eflags)
        *edi = temp0_3
        
        if (not(c))
            arg3[(arg4 << 1) + 0x77] |= arg2:1.b
        else if (not(c))
            esi = __outsb(arg2.w, *(gsbase + esi), esi, eflags)
            goto label_468461
        
        arg4 = *(esi + 0x64) * 0x1054776f
        eax = &eax[1]
        *(arg3 * 2 + 0x99cff00) += entry_ebx.b
        entry_ebx:1.b *= 2
        *eax = &eax[*eax]
    label_4684d7:
        *eax += eax.b
        *eax += eax.b
        char temp8_1 = eax[0x80000000]
        eax[0x80000000] += eax.b
        c_4 = temp8_1 + eax.b u< temp8_1
        z_4 = temp8_1 == neg.b(eax.b)
        o_1 = add_overflow(temp8_1, eax.b)
        *(esp - 4) = 0x616c1000
        
        if (not(c_4))
            eax = &eax[1]
            goto label_46855d
        
        edi = *(esp - 4)
        esi = *esp
        arg4 = esp[1]
        entry_ebx = esp[3]
        arg2 = esp[4]
        arg3 = esp[5]
        eax = esp[6]
        esp = &esp[7]
    label_4684e9:
        int16_t temp0_4
        temp0_4, eflags = __arpl_memw_gpr16(*(arg3 + (arg4 << 1) + 0x76), esi.w)
        *(arg3 + (arg4 << 1) + 0x76) = temp0_4
        
        if (o_1)
            *entry_ebx -= 5
            goto label_468555
        
    label_4684f0:
        
        if (c_4)
            edi = *esp
            esi = esp[1]
            arg4 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            goto label_46855b
        
        esi = __outsb(arg2.w, *esi, esi, eflags)
        
        if (z_4)
            goto label_468549
        
        *eax = adc.b(*eax, eax.b, c_4)
        *edi = *esi
        *eax |= eax.b
        jump(*(eax + arg3 + 0x1ff00))
    
    esi = __outsb(arg2.w, *(gsbase + esi), esi, eflags)
    label_468461:
    *(esp - 4) = esp
    esp -= 4
    char temp2_1 = *eax
    *eax = adc.b(temp2_1, eax.b, c)
    eax.b = sbb.b(eax.b, 9, 
        adc.b(temp2_1, eax.b, c) u< temp2_1 || (c && adc.b(temp2_1, eax.b, c) == temp2_1))
    char temp3_1 = entry_ebx:1.b
    char temp4_1 = entry_ebx:1.b
    entry_ebx:1.b *= 2
    eax.b = sbb.b(eax.b, 9, temp3_1 + temp4_1 u< temp3_1)
    entry_ebx:1.b *= 2
    *eax = &eax[*eax]
    *eax += eax.b
    *eax += eax.b
    eax[0x80000000] += eax.b
    label_468479:
    char temp5_1 = *(gsbase + esi)
    *(gsbase + esi) += eax.b
    c_4 = temp5_1 + eax.b u< temp5_1
    z_4 = temp5_1 == neg.b(eax.b)
    o_1 = add_overflow(temp5_1, eax.b)
    void* eax_1
    
    if (z_4)
        if (not(z_4))
            goto label_4684e9
        
        *eax += eax.b
        eax[0x80000000] += eax.b
        eax = *eax * 5
    label_468555:
        *(fsbase + arg3 + 0x67)
    label_46855d:
        eax[0xb0ff0009] += arg2:1.b
        *eax |= eax
        *arg3 += 1
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        eax[0x6b04006c] += eax.b
    label_468576:
        int32_t eflags_3
        int16_t temp0_8
        temp0_8, eflags_3 = __arpl_memw_gpr16(edi[0x37], arg4.w)
        edi[0x37] = temp0_8
        *eax += arg2.b
        eax_1 = &eax[1]
        arg2[0xb2ff0009] += arg2:1.b
        *eax_1 |= eax_1
        *arg3 += 1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = *eax_1
        *(eax_1 + 0x6b05006d) += eax_1.b
        int16_t temp0_10
        temp0_10, eflags = __arpl_memw_gpr16(*(arg3 + 0x6f), arg4.w)
        *(arg3 + 0x6f) = temp0_10
    else
        if (temp5_1 + eax.b s< 0)
            if (z_4)
                goto label_468555
            
            if (not(z_4) && not(c_4))
                if (o_1)
                    *entry_ebx -= 5
                    goto label_468555
                
                goto label_4684f0
            
            char temp11_1 = *0x67616964
            *0x67616964 += eax.b
            c_4 = temp11_1 + eax.b u< temp11_1
        label_46855b:
            *eax = adc.b(*eax, eax.b, c_4)
            eax.b = 9
            entry_ebx:1.b *= 2
            eax.b = 9
            entry_ebx:1.b *= 2
            *eax = &eax[*eax]
            *eax += 9
            *eax += 9
            eax[0x80000000] += 9
            uint8_t temp0_7
            temp0_7, edi = __insb(edi, arg2.w, eflags)
            *edi = temp0_7
            entry_ebx[arg4 << 1] += 9
            goto label_468576
        
        if (z_4)
            goto label_4684d7
        
        *eax = adc.b(*eax, eax.b, c_4)
        *arg3 &= arg3.b
        entry_ebx:1.b *= 2
        *arg3 &= arg3.b
        entry_ebx:1.b *= 2
        *eax = &eax[*eax]
        *eax += eax.b
        *eax += eax.b
        eax[0x80000000] += eax.b
        char temp9_1 = *arg3
        *arg3 += arg3.b
        
        if (temp9_1 != neg.b(arg3.b))
            esi = __outsd(arg2.w, *esi, esi, eflags)
            
            if (add_overflow(temp9_1, arg3.b))
                esi = *(esi + 0x65) * &data_401054
                goto label_46851d
            
            arg4 = *(edi + 0x6e) * 0x40105473
            *(arg3 * 2) += eax:1.b
            entry_ebx:1.b *= 2
            eax.b &= 9
        label_4684b0:
            entry_ebx:1.b *= 2
            *eax = &eax[*eax]
            *eax += eax.b
            *eax += eax.b
            eax[0x80000000] += eax.b
            char temp13_1 = *(entry_ebx + esi)
            *(entry_ebx + esi) += arg3.b
            c = temp13_1 + arg3.b u< temp13_1
            z_1 = temp13_1 == neg.b(arg3.b)
            
            if (z_1)
                goto label_46852c
            
            if (not(z_1) && not(c))
                *eax += eax.b
                *arg2 -= 6
                edi = *esp
                esi = esp[1]
                arg4 = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                goto label_468535
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
        label_4684c6:
            esi = __outsd(arg2.w, *(fsbase + esi), esi, eflags)
            
            if (not(z_1) && not(c))
                *eax |= eax.b
                jump(*(eax + 0x1ff0008))
            
            char temp10_1 = *eax
            *eax = adc.b(temp10_1, eax.b, c)
            bool p_1 = unimplemented  {adc byte [eax], al}
            bool a_1 = unimplemented  {adc byte [eax], al}
            bool o_3 = unimplemented  {adc byte [eax], al}
            bool d
            *(esp - 4) = (o_3 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
                | (adc.b(temp10_1, eax.b, c) s< 0 ? 1 : 0) << 7
                | (adc.b(temp10_1, eax.b, c) == 0 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
                | (p_1 ? 1 : 0) << 2 | (
                adc.b(temp10_1, eax.b, c) u< temp10_1 || (c && adc.b(temp10_1, eax.b, c) == temp10_1)
                ? 1 : 0)
            *eax |= eax
            eax, arg2, arg3 = (*(arg3 * 2 + 0x1ff00))()
            goto label_4684d7
        
        *eax += eax.b
        char temp12_1 = eax[0x6c0a0069]
        eax[0x6c0a0069] += eax.b
        bool c_5 = temp12_1 + eax.b u< temp12_1
        int32_t edi_3 = *esp
        esi = esp[1]
        arg4 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        eax_1 = esp[7]
        
        if (c_5)
            edi = esp[8]
            esi = esp[9]
            arg4 = esp[0xa]
            entry_ebx = esp[0xc]
            arg2 = esp[0xd]
            arg3 = esp[0xe]
            eax = esp[0xf]
            int32_t eflags_1
            int16_t temp0_5
            temp0_5, eflags_1 = __arpl_memw_gpr16(*(arg3 + (arg4 << 1) + 0x76), esi.w)
            *(arg3 + (arg4 << 1) + 0x76) = temp0_5
            esp[0xf] = &esp[0x10]
            *eax = adc.b(*eax, eax.b, c_5)
        label_46851d:
            eax.b = *0xa0ff0008
            *eax |= eax.b
            *arg3 += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
        label_46852c:
            *eax = *eax
            eax[0x6106006a] += eax.b
        label_468535:
            int32_t eflags_2
            int16_t temp0_6
            temp0_6, eflags_2 = __arpl_memw_gpr16(*(arg3 + (arg4 << 1) + 0x76), esi.w)
            *(arg3 + (arg4 << 1) + 0x76) = temp0_6
            *(gsbase + &arg4[0x46])
            eax[0xb0ff000a] += arg2:1.b
            eax.b |= *eax
            *arg3 += 1
            *eax += eax.b
        label_468549:
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            eax[0x6405006b] += eax.b
            *(arg3 + 0x67)
            goto label_46855d
        
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(eax_1 - 0x80000000) += eax_1.b
        int16_t temp0_9
        temp0_9, edi = __insd(edi_3, arg2.w, eflags)
        *edi = temp0_9
        *0x6f69636b += eax_1.b
    
    eax_1.b -= 0x75
    uint16_t* esi_4 = __outsb(arg2.w, *esi, esi, eflags) + 1
    *(arg3 * 2 + 0x9bcff00) += entry_ebx:1.b
    entry_ebx:1.b *= 2
    *eax_1 += eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *(eax_1 - 0x80000000) += eax_1.b
    uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
    *entry_ebx += eax_1.b
    *(entry_ebx + 0x6c)
    bool c_6 = unimplemented  {imul esp, dword [ebx+0x6c], 0x54}
    *eax_1 = adc.b(*eax_1, eax_1.b, c_6)
    eax_1:1.b = 9
    entry_ebx:1.b *= 2
    eax_1:1.b = 9
    entry_ebx:1.b *= 2
    *eax_1 += eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *(eax_1 - 0x80000000) += eax_1.b
    uint16_t* esi_6 = __outsd(arg2.w, *esi_5, esi_5, eflags)
    char temp18 = *eax_1
    *eax_1 += arg3.b
    *(entry_ebx + 0x45)
    int16_t* esp_11 = *(entry_ebx + 0x45) * 0x49
    bool c_7 = unimplemented  {imul esp, dword [ebx+0x45], 0x49}
    uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags)
    void* esp_14
    int16_t es_1
    
    if (temp18 + arg3.b s>= 0)
        *eax_1 = adc.b(*eax_1, eax_1.b, c_7)
        *0xb8ff0009 |= 0xb8ff0009
        *arg3 += 1
        *0xb8ff0009 += 9
        *0xb8ff0009 += 9
        *0xb8ff0009 += 9
        *0xb8ff0009 = *0xb8ff0009
        char temp20_1 = *0x24070079
        *0x24070079 += 9
        int32_t eflags_4
        int16_t temp0_11
        temp0_11, eflags_4 = __arpl_memw_gpr16(*(arg3 * 3 + 0x6e), 9)
        *(arg3 * 3 + 0x6e) = temp0_11
        *0xb8ff0009 = adc.b(*0xb8ff0009, 9, temp20_1 + 9 u< temp20_1)
        arg3.b = 9
        entry_ebx:1.b *= 2
        arg3.b = 9
        entry_ebx:1.b *= 2
        *0xb8ff0009 -= 0x4700fff7
        *0xb8ff0009 += 9
        *0xb8ff0009 += 9
        *0x38ff0009 += 9
        es_1 = *esp_11
        *(entry_ebx + 0x62)
        void* esp_12 = *(entry_ebx + 0x62) * 0x6c
        bool c_9 = unimplemented  {imul esp, dword [ebx+0x62], 0x6c}
        esi_7 = __outsd(arg2.w, *esi_7, esi_7, eflags_4)
        int16_t temp0_12
        temp0_12, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x54), arg4.w)
        *(entry_ebx + 0x54) = temp0_12
        *0xb8ff0009 = adc.b(*0xb8ff0009, 9, c_9)
        *arg3 = ror.b(*arg3, 0)
        *0xb8ff000a |= 0xb8ff000a
        *arg3 += 1
        *0xb8ff000a += 0xa
        *0xb8ff000a += 0xa
        *0xb8ff000a += 0xa
        *0xb8ff000a = *0xb8ff000a
        *0x1f05007c += 0xa
        arg4 = *(esp_12 + (esi_7 << 1) + 0x65) * 0x40105472
        eax_1:1.b = 0xa
        *0xb8ff0a0a |= 0xb8ff0a0a
        esp_14 = esp_12 + 1
        *0xb8ff0a0a |= 0xb8ff0a0a
        *arg3 += 1
        *0xb8ff0a0a += 0xa
        *0xb8ff0a0a += 0xa
        *0xb8ff0a0a += 0xa
        *0xb8ff0a0a = *0xb8ff0a0a
        char temp24_1 = *0x2d060a7d
        *0x2d060a7d += 0xa
        
        if (temp24_1 == 0xf6)
            goto label_4686c3
        
        goto label_468660
    
    *eax_1 += eax_1.b
    *(eax_1 - 0x80000000) += eax_1.b
    int16_t es
    *(esp_11 - 4) = zx.d(es)
    *(esp_11 - 4 + (esi_7 << 1) + 0x65)
    arg4.w = *(esp_11 - 4 + (esi_7 << 1) + 0x65) * 0x5472
    bool c_10 = unimplemented  {imul bp, word [esp+esi*2+0x65], 0x5472}
    *eax_1 = adc.b(*eax_1, eax_1.b, c_10)
    uint64_t* ecx
    int16_t es_2
    ecx, es_2 = __les_gprz_memp(*arg3)
    entry_ebx:1.b *= 2
    int16_t es_3
    arg3, es_3 = __les_gprz_memp(*ecx)
    entry_ebx:1.b *= 2
    *eax_1 += eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    char temp22_1 = *(eax_1 - 0x80000000)
    *(eax_1 - 0x80000000) += eax_1.b
    es_1 = *(esp_11 - 4)
    esp_14 = esp_11 - 2
    uint16_t* esi_12
    uint16_t* esi_13
    bool c_13
    bool z_5
    
    if (temp22_1 == neg.b(eax_1.b) || temp22_1 == neg.b(eax_1.b))
    label_4686c3:
        eax_1.b += 0x69
    label_4686c5:
        uint16_t* esi_8 = __outsb(arg2.w, *esi_7, esi_7, eflags)
        esi_7 = __outsw(arg2.w, *esi_8, esi_8, eflags)
        *eax_1 += arg2.b
        arg4[0x95ff000a] += arg2.b
        eax_1.b = (eax_1 + 1).b | *(eax_1 + 1)
        *arg3 += 1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = *eax_1
        char temp26_1 = *(eax_1 + 0x6b070077)
        *(eax_1 + 0x6b070077) += eax_1.b
        c_13 = temp26_1 + eax_1.b u< temp26_1
        z_5 = temp26_1 == neg.b(eax_1.b)
        __bound_gprv_mema32(esp_14, *(entry_ebx + 0x62))
    label_4686e7:
        esi_12 = __outsd(arg2.w, *esi_7, esi_7, eflags)
        
        if (not(z_5))
            eax_1.b |= *eax_1
            jump(*(arg2 + arg3))
        
    label_468752:
        int16_t temp0_18
        temp0_18, edi = __insd(edi, arg2.w, eflags)
        *edi = temp0_18
        esi_13 = __outsd(arg2.w, *esi_12, esi_12, eflags)
        
        if (z_5 || c_13)
            goto label_4687bd
        
        if (not(c_13))
            *(esp_14 - 4) = esp_14
            *eax_1 = adc.b(*eax_1, eax_1.b, c_13)
            breakpoint
        
        uint16_t* esi_14 = __outsd(arg2.w, *esi_13, esi_13, eflags)
        *eax_1 = adc.b(*eax_1, eax_1.b, c_13)
        int16_t temp0_19 = esp_14
        esp_14 = eax_1
        char* eax_2 = temp0_19
        eax_2.b |= *eax_2
        eax_1, arg2, arg3 = (*(arg2 + arg3 + 0x1ff00))()
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(eax_1 - 0x80000000) += eax_1.b
        char temp36_1 = eax_1:1.b
        eax_1:1.b |= edi[0x36].b
        bool z_7 = (temp36_1 | edi[0x36].b) == 0
        uint16_t* esi_15 = __outsd(arg2.w, *esi_14, esi_14, eflags)
        __bound_gprv_mema32(esp_14, *(arg3 + 0x6c))
        
        if (z_7)
            *eax_1 = adc.b(*eax_1, eax_1.b, false)
            eax_1 = 0xb8ff0008
            goto label_4687ee
        
        int16_t temp0_20
        temp0_20, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x3c), arg4.w)
        *(entry_ebx + 0x3c) = temp0_20
        *eax_1 = adc.b(*eax_1, eax_1.b, false)
        entry_ebx:1.b *= 2
        entry_ebx:1.b *= 2
        *eax_1 += eax_1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(eax_1 - 0x80000000) += eax_1.b
        *(arg3 + (arg4 << 1) + 0x5f)
        *(arg3 + (arg4 << 1) + 0x5f) |= esi_15
        esi_13 = __outsd(arg2.w, *esi_15, esi_15, eflags)
        arg4 = *(edi + 0x6e) * &data_401054
        goto label_4687a7
    
    label_468660:
    arg4 = *(esp_14 + (arg2 << 1) + 0x10) * 0x9c80040
    entry_ebx:1.b *= 2
    unimplemented  {enter 0x9, 0xff}
    *eax_1 += eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    char temp25_1 = *(eax_1 - 0x80000000)
    *(eax_1 - 0x80000000) += eax_1.b
    z_5 = temp25_1 == neg.b(eax_1.b)
    es_1 = *esp_14
    esp_14 += 2
    
    if (z_5)
        *(arg2 + 0x63)
        esp_14 = *(arg2 + 0x63) * 0x62
        c_13 = unimplemented  {imul esp, dword [edx+0x63], 0x62}
        goto label_4686e7
    
    arg4 = *(eax_1 + (esi_7 << 3) + 0x74) * 0xce80046
    entry_ebx:1.b *= 2
    eax_1, arg2, arg3 = 0x245869d()
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp28_1 = *(eax_1 + 0x610a0075)
    *(eax_1 + 0x610a0075) += eax_1.b
    bool o_4 = add_overflow(temp28_1, eax_1.b)
    
    if (o_4)
        entry_ebx:1.b *= 2
        uint8_t temp0_13
        temp0_13, edi = __insb(edi, arg2.w, eflags)
        *edi = temp0_13
        eax_1.b |= *eax_1
        *arg3 += 1
    else
        esi_7 = __outsd(arg2.w, *esi_7, esi_7, eflags)
        
        if (not(o_4))
            arg4 = *(edi + 0x6e) * 0x4674c873
            char temp30_1 = eax_1:1.b
            eax_1:1.b += arg3.b
            bool c_11 = temp30_1 + arg3.b u< temp30_1
            int32_t temp31_1 = *eax_1
            *eax_1 = adc.d(temp31_1, eax_1, c_11)
            esp_14 -= 1
            *eax_1 = adc.d(*eax_1, eax_1, 
                adc.d(temp31_1, eax_1, c_11) u< temp31_1
                    || (c_11 && adc.d(temp31_1, eax_1, c_11) == temp31_1))
            *arg3 += 1
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 = *eax_1
            *(eax_1 + 0x69040076) += eax_1.b
            goto label_4686c5
    
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp29_1 = *(eax_1 + 0x670a0079)
    *(eax_1 + 0x670a0079) += eax_1.b
    bool c_14 = temp29_1 + eax_1.b u< temp29_1
    uint8_t* edi_4
    uint8_t temp0_14
    temp0_14, edi_4 = __insb(edi, arg2.w, eflags)
    *edi_4 = temp0_14
    uint16_t* esi_9 = __outsd(arg2.w, *esi_7, esi_7, eflags)
    __bound_gprv_mema32(esp_14, *(arg3 + 0x6c))
    int16_t temp0_15
    temp0_15, edi = __insd(edi_4, arg2.w, eflags)
    *edi = temp0_15
    char* esi_10 = __outsd(arg2.w, *esi_9, esi_9, eflags)
    
    if (temp29_1 != neg.b(eax_1.b) && not(c_14))
        eax_1.b = *esi_10
        uint16_t* esi_11 = &esi_10[1]
        *eax_1 = adc.b(*eax_1, eax_1.b, c_14)
        bool o_5 = unimplemented  {adc byte [eax], al}
        
        if (o_5)
            goto label_468741
        
        char temp39_1 = entry_ebx:1.b
        char temp40_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        
        if (add_overflow(temp39_1, temp40_1))
            *eax_1 += eax_1.b
            char temp44_1 = *(eax_1 + 0x670e007a)
            *(eax_1 + 0x670e007a) += eax_1.b
            c_13 = temp44_1 + eax_1.b u< temp44_1
            z_5 = temp44_1 == neg.b(eax_1.b)
            uint8_t temp0_17
            temp0_17, edi = __insb(edi, arg2.w, eflags)
            *edi = temp0_17
        else
            entry_ebx:1.b *= 2
            *eax_1 += eax_1
            *eax_1 += eax_1.b
        label_468741:
            *eax_1 += eax_1.b
            char temp38_1 = *(eax_1 - 0x80000000)
            *(eax_1 - 0x80000000) += eax_1.b
            c_13 = temp38_1 + eax_1.b u< temp38_1
            z_5 = temp38_1 == neg.b(eax_1.b)
            int16_t cs
            *(esp_14 - 4) = zx.d(cs)
            esp_14 -= 4
            uint16_t temp0_16
            temp0_16, temp0_16 = __insb(edi.w, arg2.w, eflags)
            edi.w = temp0_16
            *edi = temp0_16
        
        esi_12 = __outsd(arg2.w, *esi_11, esi_11, eflags)
        __bound_gprv_mema32(esp_14, *(arg3 + 0x6c))
        goto label_468752
    
    *(eax_1 * 2 + 9)
    *(edi + 0x6f)
    entry_ebx = *(edi + 0x6f) * 0x6f697470
    bool c_15 = unimplemented  {imul ebx, dword [edi+0x6f], 0x6f697470}
    esi_13 = __outsb(arg2.w, *esi_10, esi_10, eflags)
    *(esp_14 - 4) = esp_14
    esp_14 -= 4
    *eax_1 = adc.b(*eax_1, eax_1.b, c_15)
    label_4687a7:
    unimplemented  {enter 0x8, 0xff}
    unimplemented  {enter 0x8, 0xff}
    *eax_1 += eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    char temp33_1 = *(eax_1 - 0x80000000)
    *(eax_1 - 0x80000000) += eax_1.b
    z_5 = temp33_1 == neg.b(eax_1.b)
    label_4687bd:
    *(esp_14 - 4) = zx.d(es_1)
    esp_14 -= 4
    
    if (not(z_5))
        edi = *esp_14
        __outsw(arg2.w, *esi_13, esi_13, eflags)
        *(eax_1 + arg2 + 0x40) ^= arg2
        eax_1:1.b += arg3.b
        *eax_1 |= eax_1.b
        esp_14 += 3
        *eax_1 |= eax_1.b
        *arg3 += 1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = *eax_1
        *(eax_1 + 0x7406007e) += eax_1.b
        entry_ebx = *(edi + 0x66) * 0x1054326f
        eax_1 += 1
        *(eax_1 - 0x4700fff8) += entry_ebx:1.b
    label_4687ee:
        *eax_1 |= eax_1.b
        *arg3 += 1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = *eax_1
        *(eax_1 + 0x7406007f) += eax_1.b
        arg4 = *(edi + (arg4 << 1) + 0x67) * 0x40103c6f
        *arg2 += arg2:1.b
        *eax_1 |= eax_1
        *(esp_14 - 4) = *arg2
        *eax_1 |= eax_1
        *arg3 += 1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = *eax_1
        *(eax_1 + 0x74060080) += eax_1.b
        esp_14 = *(arg2 + 0x61) * 0x103c6b63
    
    *(arg3 * 2) += arg2:1.b
    entry_ebx:1.b *= 2
    eax_1.b = (eax_1 + 1).b ^ 9
    entry_ebx:1.b *= 2
    *eax_1 += eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *(eax_1 - 0x80000000) += eax_1.b
    *eax_1 += 0x74697407
    uint16_t* esi_17 = *(arg4 + 0x6c) * &data_401000
    void* ebp = 0xbdff000a
    eax_1.b |= *eax_1
    *arg3 += 1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp35_1 = *(eax_1 + 0x64060082)
    *(eax_1 + 0x64060082) += eax_1.b
    uint16_t* esi_18 = __outsd(arg2.w, *esi_17, esi_17, eflags)
    char* eax_10
    void* esp_20
    
    if (temp35_1 != neg.b(eax_1.b) && temp35_1 + eax_1.b u>= temp35_1)
        uint8_t temp0_21
        temp0_21, edi = __insb(edi, arg2.w, eflags)
        *edi = temp0_21
        *eax_1 += arg2.b
        *(entry_ebx + arg2) += arg2:1.b
        entry_ebx:1.b *= 2
        void* eax_3
        eax_3.b = (eax_1 + 1).b ^ 0x13
        entry_ebx:1.b *= 2
        *eax_3 += eax_3
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *(eax_3 - 0x80000000) += eax_3.b
        char temp0_22 = *eax_3
        *eax_3 = eax_3.b
        eax_3.b = temp0_22
        *(eax_3 + 0x616c6675) += (eax_3 + 0x616c666c).b
        entry_ebx:1.b *= 2
        *(eax_3 + 0x616c666d) |= eax_3 + 0x616c666d
        *arg3 += 1
        *(eax_3 + 0x616c666d) += (eax_3 + 0x616c666d).b
        *(eax_3 + 0x616c666d) += (eax_3 + 0x616c666d).b
        *(eax_3 + 0x616c666d) += (eax_3 + 0x616c666d).b
        *(eax_3 + 0x616c666d) = *(eax_3 + 0x616c666d)
        *(eax_3 - 0x2a8b990c) += (eax_3 + 0x616c666d).b
        *0xbdff007e
        int32_t esp_18 = *0xbdff007e * 0xbc6c6961
        bool c_18 = unimplemented  {imul esp, dword [ebp+0x74], 0xbc6c6961}
        *(eax_3 + 0x616c666d) = adc.b(*(eax_3 + 0x616c666d), (eax_3 + 0x616c666d).b, c_18)
        *(esp_18 - 4) = esp_18
        *(eax_3 + 0x616c666d)
        eax_10, arg2, arg3 = (*(entry_ebx + arg2))()
        esp_20 = esp_18
    else
        int32_t esi_19 = *(esp_14 + (arg2 << 1) + 0x10) * 0xcc80040
        entry_ebx:1.b *= 2
        unimplemented  {enter 0xc, 0xff}
        *eax_1 += eax_1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(eax_1 - 0x80000000) += eax_1.b
        int32_t temp43_1 = *eax_1
        *eax_1 += 7
        bool c_17 = temp43_1 u>= 0xfffffff9
        esi_18 = __outsb(arg2.w, gsbase[*(esp_14 + (arg2 << 1) + 0x10) * 0x6640020].b, esi_19, eflags)
        
        if (temp43_1 != 0xfffffff9 && not(c_17))
            *esp_14
            eax_1.b = eax_1.b
            jump(eax_1)
        
        *eax_1 = adc.b(*eax_1, eax_1.b, c_17)
        *(eax_1 + 1) |= eax_1 + 1
        *(eax_1 + 0xa) += 1
        entry_ebx:1.b *= 2
        *(eax_1 + 1) += eax_1 + 1
        *(eax_1 + 1) += (eax_1 + 1).b
        *(eax_1 + 1) += (eax_1 + 1).b
        *(eax_1 - 0x7fffffff) += (eax_1 + 1).b
        int16_t temp0_23 = *(eax_1 + 1)
        *(eax_1 + 1) = eax_1 + 1
        int32_t* eax_8 = temp0_23
        char temp47_1 = arg3[0x7bfe0078]
        arg3[0x7bfe0078] |= arg2:1.b
        
        if ((temp47_1 | arg2:1.b) == 0)
            int16_t* edi_6
            int16_t temp0_27
            temp0_27, edi_6 = __insd(edi, arg2.w, eflags)
            *edi_6 = temp0_27
            return sub_468970(eax_8, arg2, arg3) __tailcall
        
        ebp = *(esp_14 + (edi << 2) + 0x10) * 0x13540040
        char temp49_1 = entry_ebx:1.b
        char temp50_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        *(esp_14 - 4) = esp_14
        esp_20 = esp_14 - 4
        eax_10 = adc.d(eax_8, *eax_8, temp49_1 + temp50_1 u< temp49_1)
    
    *arg3 += 1
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 = *eax_10
    char temp45 = eax_10[0x6c050088]
    eax_10[0x6c050088] += eax_10.b
    bool c_21 = temp45 + eax_10.b u< temp45
    uint16_t* esi_20 = __outsd(arg2.w, *esi_18, esi_18, eflags)
    int32_t eflags_5
    int16_t temp0_24
    temp0_24, eflags_5 = __arpl_memw_gpr16(*(arg3 + 0x6c), esp_20.w)
    *(arg3 + 0x6c) = temp0_24
    *(esp_20 - 4) = esp_20
    char temp46 = *eax_10
    *eax_10 = adc.b(temp46, eax_10.b, c_21)
    int32_t* eax_11 = *(esp_20 - 4)
    int32_t* eax_13
    void* ecx_1
    int32_t edx
    eax_13, edx, ecx_1 = (*(adc.d(eax_11, *eax_11, 
        adc.b(temp46, eax_10.b, c_21) u< temp46 || (c_21 && adc.b(temp46, eax_10.b, c_21) == temp46))
        + 0x13))()
    entry_ebx:1.b *= 2
    *eax_13 += eax_13
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    eax_13[-0x20000000].b += eax_13.b
    *eax_13 = eax_13
    *esp_20
    uint8_t* edi_5
    uint8_t temp0_25
    temp0_25, edi_5 = __insb(edi, edx.w, eflags_5)
    *edi_5 = temp0_25
    int32_t esi_21 = __outsd(edx.w, *esi_20, esi_20, eflags_5)
    int32_t eflags_6
    int16_t temp0_26
    temp0_26, eflags_6 = __arpl_memw_gpr16(*(ecx_1 + 0x6c), (esp_20 + 2).w)
    *(ecx_1 + 0x6c) = temp0_26
    int32_t esp_24 = *(esp_20 + 2 + (edx << 1) + 0x10) * 0x60500040
    entry_ebx:1.b *= 2
    *(esp_24 - 4) = eax_13
    *(esp_24 - 8) = eax_13
    *(esp_24 - 0xc) = ecx_1
    *(esp_24 - 0x10) = edx
    *(esp_24 - 0x14) = entry_ebx
    *(esp_24 - 0x18) = esp_24 - 0x14
    *(esp_24 - 0x1c) = ebp
    *(esp_24 - 0x20) = esi_21
    *(esp_24 - 0x24) = edi_5
    *eax_13 += eax_13
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    eax_13[-0x20000000].b += eax_13.b
    eax_13.b = *eax_13
    *(ebp - 4) = *(eax_13 - 0x3da60f37) * 0xf18b5653
    sub_40422c(*(ebp - 4))
    *(esp_24 - 0x28) = ebp
    *(esp_24 - 0x2c) = j_sub_4037f0
    *(esp_24 - 0x30) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_24 - 0x30
    sub_403e4c(&eax_13[0x1c1b5e32], *(ebp - 4))
    eax_13[0x1c1b5e33] = esi_21
    *(esp_24 - 0x28)
    fsbase->NtTib.ExceptionList = *(esp_24 - 0x30)
    *(esp_24 - 0x28) = sub_4689c4
    sub_403df8(ebp - 4)
    return ebp - 4
}
