// ============================================================
// 函数名称: sub_4a6018
// 虚拟地址: 0x4a6018
// WARP GUID: c1c8241f-bd95-53ef-a521-b36ff45f797b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a6018(int32_t arg1, int32_t arg2, char* arg3, char* arg4 @ ebp, char* arg5 @ edi)
{
    // 第一条实际指令: bool c
    bool c
    arg1.b = sbb.b(arg1.b, 0x60, c)
    char* edx = arg2 - 1
    char* entry_ebx
    *entry_ebx += arg1.b
    char* eax = arg1 | 0x636f5354
    bool z = (arg1 | 0x636f5354) == 0
    *(entry_ebx + 0x56)
    char* esi = *(entry_ebx + 0x56) * 0x65
    bool c_1 = unimplemented  {imul esi, dword [ebx+0x56], 0x65}
    char* var_4
    int32_t eflags
    char* eax_3
    void* ecx
    void* edx_1
    char* edx_4
    void* edx_7
    void* esp
    void** esp_1
    char** esp_2
    int32_t esp_12
    
    if (not(c_1))
        arg4 = *(arg5 + 0x6e)
        *entry_ebx += eax.b
        *eax += eax.b
        *eax += entry_ebx.b
        var_4 = eax
        char* var_10 = entry_ebx
        char** var_14_1 = &var_10
        char* var_18_1 = arg4
        char* var_1c_1 = esi
        char* var_20 = arg5
        esp_1 = &var_20
        edx_1 = edx - 1
        char temp3_1 = *arg3
        *arg3 += arg3.b
        
        if (temp3_1 + arg3.b u>= temp3_1)
            goto label_4a60b1
        
        uint16_t* esi_2 = __outsd(edx_1.w, *(esi - 1), esi - 1, eflags)
        uint16_t* esi_3 = __outsd(edx_1.w, *esi_2, esi_2, eflags)
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_1
        entry_ebx[0x76] |= edx_1:1.b
        char* var_28_1 = entry_ebx
        uint16_t* esi_4 = __outsd(edx_1.w, *esi_3, esi_3, eflags_1)
        int16_t temp0_2
        temp0_2, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_2
        eax.b ^= 9
        
        if (eax.b u>= 0)
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            arg5 = entry_ebx
            esi = var_20
            entry_ebx = var_14_1
            edx_4 = var_10
            ecx = edx
            eax_3 = arg3
            esp_2 = &var_4
            goto label_4a60d3
        
        char* var_2c_1 = entry_ebx
        uint16_t* esi_5 = __outsd(edx_1.w, *esi_4, esi_4, eflags)
        int32_t eflags_2
        int16_t temp0_3
        temp0_3, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_3
        eax.b ^= 0x41
        entry_ebx[0x76] |= edx_1:1.b
        char* var_30_1 = entry_ebx
        uint16_t* esi_6 = __outsd(edx_1.w, *esi_5, esi_5, eflags_2)
        int32_t eflags_3
        int16_t temp0_4
        temp0_4, eflags_3 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_4
        eax ^= 0x6064c08b
        edx = edx_1 - 1
        char temp4_1 = *entry_ebx
        *entry_ebx += eax.b
        eax.b = adc.b(eax.b, 0x54, temp4_1 + eax.b u< temp4_1)
        char* var_34 = entry_ebx
        esp_2 = &var_34
        esi = __outsd(edx.w, *esi_6, esi_6, eflags_3)
        int16_t temp0_5
        temp0_5, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_5
        ecx = &arg3[1]
        
        if (arg3 != 0xffffffff)
            goto label_4a60e3
        
        int32_t var_38
        __builtin_strncpy(&var_38, "enti", 4)
        esp = &var_38
        int16_t temp0_6
        temp0_6, eflags = __arpl_memw_gpr16(*(ecx + 0x74), &var_38)
        *(ecx + 0x74) = temp0_6
        arg4 = *(arg5 + 0x6e)
        *ecx += eax.b
        *eax += eax.b
        eax[0x60] += eax:1.b
        edx -= 1
        char temp7_1 = *edx
        *edx += edx.b
        
        if (temp7_1 + edx.b u>= temp7_1)
            eax:1.b += entry_ebx:1.b
            goto label_4a60ed
        
        esi = __outsd(edx.w, *(esi - 1), esi - 1, eflags)
        arg3 = ecx + 1
        z = ecx == 0xffffffff
        
        if (z)
            int32_t var_3c
            __builtin_strncpy(&var_3c, "enti", 4)
            esp = &var_3c
            int16_t temp0_7
            temp0_7, eflags = __arpl_memw_gpr16(*(arg3 + 0x74), &var_3c)
            *(arg3 + 0x74) = temp0_7
            *(arg5 + 0x6e)
            arg4 = *(arg5 + 0x6e) * 0x55617312
            c_1 = unimplemented  {imul ebp, dword [edi+0x6e], 0x55617312}
            goto label_4a609e
        
        *(entry_ebx + arg3) += entry_ebx.b
        arg3 = &arg3[1]
        eax[0x61] += entry_ebx:1.b
    label_4a610b:
        eax[0x41] += eax.b
        arg3[0x627c0042] += eax.b
        arg3 = &arg3[2]
    label_4a6117:
        *(esp + 0x61940041) += arg3:1.b
    label_4a611e:
        ecx = &arg3[1]
        *(ecx + 0x64b40041) += ecx.b
    label_4a6127:
        eax.b *= 2
        __bound_gprv_mema32(ecx + 1, *edx)
        edx_7 = edx - 1
        int32_t eax_4
        eax_4.b = (eax ^ 0x3594004a).b + entry_ebx.b
        char* eax_5 = eax_4 ^ 0xe004a
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        void* eax_6 = &eax_5[*eax_5]
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *(eax_6 + edx_7 + 0x680040) += entry_ebx:1.b
        *eax_6 += eax_6.b
        esp_12 = 0x70004010
        *eax_6 += eax_6.b
        *(0x70004010 + (edx_7 << 1)) += (ecx + 1).b
        goto label_4a615d
    
    TEB* fsbase
    
    if (not(c_1))
        edx -= 1
        eax[0x1c004160] += eax:1.b
    label_4a6105:
        eax |= *arg3
        
        if (eax s>= 0)
            goto label_4a610b
    else
        var_4 = arg4
        esp = &var_4
    label_4a609e:
        
        if (not(c_1))
            goto label_4a6105
        
        if (c_1)
            arg3[0x41]
            edx[0x41] += entry_ebx:1.b
            goto label_4a6117
        
        int32_t eax_1 = *(esp + 0x1c)
        int16_t* edi_1
        int16_t temp0_8
        temp0_8, edi_1 = __insd(*esp, (*(esp + 0x14)).w, eflags)
        *edi_1 = temp0_8
        *(esp + 0x1c) = eax_1
        arg5 = *(esp + 0x1c)
        esi = *(esp + 0x20)
        arg4 = *(esp + 0x24)
        entry_ebx = *(esp + 0x2c)
        edx_1 = *(esp + 0x30)
        arg3 = *(esp + 0x34)
        char* eax_2 = *(esp + 0x38)
        esp_1 = esp + 0x3c
        
        if (not(c_1))
            arg5 = *eax_2
            esi = *(eax_2 + 4)
            arg4 = *(eax_2 + 8)
            entry_ebx = *(eax_2 + 0x10)
            edx = *(eax_2 + 0x14)
            arg3 = *(eax_2 + 0x18)
            eax = *(eax_2 + 0x1c)
            goto label_4a611e
        
        if (z || c_1)
            if (c_1)
                arg5 = *esp_1
                esi = esp_1[1]
                arg4 = esp_1[2]
                entry_ebx = esp_1[4]
                edx = esp_1[5]
                eax = esp_1[7]
                esp = &esp_1[8]
                arg3 = esp_1[6] + 1
                edx[0x41] += entry_ebx:1.b
                goto label_4a6117
            
            eax = eax_2
        label_4a60b1:
            *(esp_1 - 4) = eax
            *(esp_1 - 8) = arg3
            *(esp_1 - 0xc) = edx_1
            *(esp_1 - 0x10) = entry_ebx
            *(esp_1 - 0x14) = esp_1 - 0x10
            *(esp_1 - 0x18) = arg4
            *(esp_1 - 0x1c) = esi
            *(esp_1 - 0x20) = arg5
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += entry_ebx:1.b
            arg5 = *(esp_1 - 0x20)
            esi = *(esp_1 - 0x1c)
            *(esp_1 - 0x18)
            entry_ebx = *(esp_1 - 0x10)
            ecx = *(esp_1 - 8)
            eax_3 = *(esp_1 - 4)
            esp_2 = esp_1
            edx_4 = *(esp_1 - 0xc) - 1
            *(ecx + 0x4a) += ecx:1.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            edx_4[0x61] += entry_ebx.b
        label_4a60d3:
            *(eax_3 * 2) += entry_ebx:1.b
            eax_3[0x32] += ecx:1.b
            edx = edx_4 - 2
            *(esp_2 + 0x33000041) += edx.b
            eax = &eax_3[1]
        label_4a60e3:
            eax:1.b += ecx:1.b
            arg4 = *esp_2
            esp = &esp_2[1]
            ecx += 1
            *eax += ecx.b
            eax ^= *eax
        label_4a60ed:
            eax.b ^= *eax
            char temp8_1 = *(fsbase + eax) ^ eax.b
            *(fsbase + eax) = temp8_1
            
            if (temp8_1 s< 0)
                goto label_4a6127
            
            eax.b = (&eax[1]).b + edx:1.b
            arg3 = ecx ^ *edx
            *(esp - 4) = eax
            *(esp - 8) = arg3
            *(esp - 0xc) = edx
            *(esp - 0x10) = entry_ebx
            *(esp - 0x14) = esp - 0x10
            *(esp - 0x18) = arg4
            *(esp - 0x1c) = esi
            *(esp - 0x20) = arg5
            esp -= 0x20
            __bound_gprv_mema32(arg3, *edx)
            eax.b = *0x1c004160
            goto label_4a6105
        
        arg3[0x618c0042] += edx_1.b
        *(esp_1 + 0x62c00041) += edx_1:1.b
        *(arg4 + esi + 0x4a) += (&arg3[1]).b + 1
        *(arg4 + esi + 0x35d8004a) += (edx_1 - 1).b
        edx_7 = edx_1 - 2
        *esi += (&arg3[1]).b + 1
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *entry_ebx += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 + edx_7 + 0x640040) += entry_ebx:1.b
        *eax_2 += eax_2.b
        esp_12 = 0x68004010
        *eax_2 += eax_2.b
        *(eax_2 + edx_7 + 0x700040) += entry_ebx:1.b
        *eax_2 += eax_2.b
        eax_2.b |= 0x54
    label_4a615d:
        *(esp_12 - 4) = entry_ebx
        uint16_t* esi_8 = __outsd(edx_7.w, *esi, esi, eflags)
        int16_t temp0_9
        temp0_9, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_9
        uint16_t* esi_9 = __outsb(edx_7.w, *esi_8, esi_8, eflags)
        __outsw(edx_7.w, *esi_9, esi_9, eflags)
        uint8_t* edi_2
        uint8_t temp0_10
        temp0_10, edi_2 = __insb(arg5, edx_7.w, eflags)
        *edi_2 = temp0_10
        arg5 = *(esp_12 - 4)
        esi = *esp_12
        arg4 = *(esp_12 + 4)
        entry_ebx = *(esp_12 + 0xc)
        arg3 = *(esp_12 + 0x14)
        eax = *(esp_12 + 0x18)
        esp = esp_12 + 0x1c
        edx = *(esp_12 + 0x10) - 1
    
    *arg5 += eax.b
    eax.b |= 0x54
    *(esp - 4) = entry_ebx
    uint16_t* esi_11 = __outsd(edx.w, *esi, esi, eflags)
    int32_t eflags_4
    int16_t temp0_11
    temp0_11, eflags_4 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
    *(entry_ebx + 0x73) = temp0_11
    uint16_t* esi_12 = __outsb(edx.w, *esi_11, esi_11, eflags_4)
    uint16_t* esi_13 = __outsw(edx.w, *esi_12, esi_12, eflags_4)
    *(esp - 8) = eax
    *(esp - 0xc) = arg3 - 2
    *(esp - 0x10) = edx
    *(esp - 0x14) = entry_ebx
    *(esp - 0x18) = esp - 0x14
    *(esp - 0x1c) = arg4
    *(esp - 0x20) = esi_13
    *(esp - 0x24) = arg5
    *eax += eax.b
    int32_t ecx_8 = (arg3 - 2) ^ *(edx - 1)
    *eax |= eax
    int16_t es = *(esp - 0x24)
    *(esp - 0x26) = entry_ebx
    int32_t esi_14 = __outsd((edx - 1).w, *esi_13, esi_13, eflags_4)
    int32_t eflags_5
    int16_t temp0_12
    temp0_12, eflags_5 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
    *(entry_ebx + 0x73) = temp0_12
    *(esp - 0x2a) = zx.d(es)
    eax[0x60] += eax:1.b
    *eax += eax:1.b
    entry_ebx:1.b *= 2
    *(esp - 0x2e) = eax
    *(esp - 0x32) = ecx_8 - 1
    *(esp - 0x36) = edx - 2
    *(esp - 0x3a) = entry_ebx
    *(esp - 0x3e) = esp - 0x3a
    *(esp - 0x42) = arg4
    *(esp - 0x46) = esi_14
    *(esp - 0x4a) = arg5
    *eax += eax.b
    *(ecx_8 - 1) += 1
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax = *eax
    *eax += eax.b
    char* eax_7 = &eax[*eax]
    int16_t cs
    *(esp - 0x4e) = zx.d(cs)
    
    if (ecx_8 == 0)
        *(esp - 0x52) = 0x69746e65
        int32_t eflags_6
        int16_t temp0_13
        temp0_13, eflags_6 = __arpl_memw_gpr16(*(ecx_8 + 0x74), (esp - 0x4e).w - 4)
        *(ecx_8 + 0x74) = temp0_13
        *(arg5 + 0x6e)
        *(fsbase + eax_7) += eax_7.b
        jump(*(eax_7 * 2))
    
    entry_ebx:1.b *= 2
    *eax_7 = &eax_7[*eax_7]
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    eax_7[0x80000000] += eax_7.b
    *(esp - 0x4e)
    char temp10 = *eax_7
    *eax_7 += ecx_8.b
    bool c_5 = temp10 + ecx_8.b u< temp10
    *(esp - 0x50) = arg4
    
    if (not(c_5))
        uint8_t* edi_5
        uint8_t temp0_15
        temp0_15, edi_5 = __insb(arg5, (edx - 2).w, eflags_5)
        *edi_5 = temp0_15
        *(edi_5 + 0x6c) = eax_7
        sub_403e4c(&edi_5[0x70], *(entry_ebx + 0x70))
        char result = entry_ebx[0x74]
        edi_5[0x74] = result
        *(esp - 0x50)
        *(esp - 0x4c)
        *(esp - 0x48)
        *(esp - 0x44)
        return result
    
    while (c_5)
        *0x8afff5db = eax_7.b
        char* temp12_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        
        if (temp12_1 != 0xffffffff)
            if (arg5 == 0xffffffff)
                jump(0x4a629c)
            
            jump(0x4a62b1)
    
    int32_t esi_15 = *(esp - 0x4c)
    *(esp - 0x48)
    *(esp - 0x40)
    int16_t edx_11 = (*(esp - 0x3c)).w
    int32_t* ecx_11 = *(esp - 0x38)
    void* eax_8 = *(esp - 0x34)
    int16_t* edi_4
    int16_t temp0_14
    temp0_14, edi_4 = __insd(*(esp - 0x50), edx_11, eflags_5)
    *edi_4 = temp0_14
    int32_t gsbase
    *(gsbase + eax_8 + 0x4a) = sbb.b(*(gsbase + eax_8 + 0x4a), eax_8:1.b, c_5)
    *(eax_8 * 2) += edx_11:1.b
    *(esp - 0x34) = *(eax_8 * 2)
    *ecx_11 += 1
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 = *eax_8
    *eax_8 += eax_8.b
    *eax_8
    *eax_8 |= eax_8.b
    *(esp - 0x34)
    *(esp - 0x36) = esi_15
    jump(0x4a625a)
}
