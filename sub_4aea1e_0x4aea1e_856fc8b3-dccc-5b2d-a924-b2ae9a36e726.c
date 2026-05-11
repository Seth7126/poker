// ============================================================
// 函数名称: sub_4aea1e
// 虚拟地址: 0x4aea1e
// WARP GUID: 856fc8b3-dccc-5b2d-a924-b2ae9a36e726
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aea1e(char* arg1, void* arg2, int32_t arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi, uint32_t arg7[0x4] @ xmm1, void* arg8, int32_t arg9, void* arg10)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint16_t* esi_39 = __outsd(arg2.w, *arg5, arg5, eflags)
    bool z = arg3 == 1
    uint16_t* esi = __outsb(arg2.w, *esi_39, esi_39, eflags)
    char* var_4 = arg1
    int32_t* esp = &var_4
    void* eax
    bool c
    bool c_1
    
    if (not(c))
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg4 + 0x73), &var_4)
        *(arg4 + 0x73) = temp0_1
        
        if (not(c))
            jump(0x40d7eab9)
        
        if (not(z))
            arg1 = &arg1[0x5f317670]
            goto label_4aeaa4
        
        int32_t var_8 = 0x4b6f6812
        esp = &var_8
        
        if (add_overflow(arg3, 0xffffffff))
            esi = __outsd(arg2.w, *esi, esi, eflags)
            uint8_t temp0_6
            temp0_6, arg6 = __insb(arg6, arg2.w, eflags)
            *arg6 = temp0_6
            goto label_4aea85
        
        if (c)
            arg1 = &arg1[0x5f317670]
            goto label_4aeaa4
        
        char* var_c = arg1
        esp = &var_c
        
        if (c)
            undefined
        
        if (z)
            goto label_4aeaab
        
        int32_t eflags_1
        int16_t temp0_2
        temp0_2, eflags_1 = __arpl_memw_gpr16(*(arg6 + 0x6c), arg4.w)
        *(arg6 + 0x6c) = temp0_2
        int32_t temp14_1 = *(arg1 + 0x6f)
        c_1 = adc.d(arg4, temp14_1, c) u< arg4 || (c && adc.d(arg4, temp14_1, c) == arg4)
        uint16_t* esi_2 = __outsd(arg2.w, *(esi + 1), esi + 1, eflags_1)
        
        if (c_1)
            undefined
        
        __outsb(arg2.w, *esi_2, esi_2, eflags_1)
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(arg6 + 0x64), (adc.d(arg4, temp14_1, c)).w + 1)
        *(arg6 + 0x64) = temp0_3
        esi = var_c
        arg2 = arg8
        eax = arg10
        void arg_10
        esp = &arg_10
        
        if (c_1)
            goto label_4aeab2
        
        int16_t* edi_1
        int16_t temp0_4
        temp0_4, edi_1 = __insd(arg1, arg2.w, eflags)
        *edi_1 = temp0_4
        
        if (not(c_1))
            undefined
        
        jump(&data_4aea54)
    
    char temp2_1 = *arg1
    *arg1 += arg1.b
    c = temp2_1 + arg1.b u< temp2_1
    
    if (not(add_overflow(temp2_1, arg1.b)))
        goto label_4aea97
    
    esi = __outsd(arg2.w, *esi, esi, eflags)
    int16_t temp0_5
    temp0_5, eflags = __arpl_memw_gpr16(*(arg6 + 0x6c), arg4.w)
    *(arg6 + 0x6c) = temp0_5
    label_4aea85:
    *(esp - 4) = esi
    esp -= 4
    void* eax_1
    char* eax_9
    char* ecx_2
    void* ecx_8
    void* ecx_11
    char* ebx_2
    void* esp_16
    void* esp_22
    void* esp_33
    void* esp_34
    int32_t ebp_3
    char* ebp_11
    char* esi_5
    uint16_t* esi_27
    uint16_t* esi_36
    TEB* fsbase
    uint16_t* gsbase
    bool c_4
    bool p_1
    bool a_1
    bool z_1
    bool z_3
    bool s_1
    bool o_2
    bool cond:5_1
    
    if (not(c))
        arg4 = *(arg6 + 0x6e)
        *(arg3 - 1) += arg1.b
        *arg1 += arg1.b
        arg1[0xffffffea] += arg2:1.b
    label_4aea97:
        arg2 -= 1
        *0x5f317670 += arg1.b
        *0x5f317670 ^= arg1.b
    label_4aeaa4:
        *(arg4 - 0x1553ffc0) ^= arg3 - 1
        arg2 -= 1
    label_4aeaab:
        char temp3_1 = *arg1
        *arg1 += (arg3 - 1).b
        *((arg3 - 1) * 3 + 0x64) =
            sbb.d(*((arg3 - 1) * 3 + 0x64), arg2, temp3_1 + (arg3 - 1).b u< temp3_1)
        c_1 = unimplemented  {sbb dword [ecx+ecx*2+0x64], edx}
        eax = arg1 - 1
    label_4aeab2:
        *(esp - 4) = esp
        *(esp - 8) = esp - 4
        *(esp - 0xc) = eax
        __outsb(arg2.w, *esi, esi, eflags)
        z_1 = eax == 1
        arg6 = *(esp - 0xc)
        esi_5 = *(esp - 8)
        ebp_3 = *(esp - 4)
        ebx_2 = esp[1]
        arg2 = esp[2]
        ecx_2 = esp[3]
        eax_1 = esp[4]
        esp = &esp[5]
        
        if (c_1)
            if (z_1)
                goto label_4aeb34
            
            char temp10_1 = eax_1.b
            eax_1.b += 0x64
            c_1 = temp10_1 u>= 0x9c
            z_1 = temp10_1 == 0x9c
            goto label_4aeb35
        
        char* temp7_1 = ecx_2
        ecx_2 = &ecx_2[1]
        
        if (temp7_1 == 0xffffffff || c_1)
            *esi_5
            *esi_5 |= eax_1.b
            c_1 = false
            *(esp - 4) = ebx_2
            esp -= 4
            esi_5 = __outsb(arg2.w, *(gsbase + esi_5), esi_5, eflags)
            goto label_4aeb27
        
        int32_t ebp_4 = *(ecx_2 + 0x62) * 0x300656c
        char temp12_1 = *esi_5 | eax_1.b
        *esi_5 = temp12_1
        bool cond:3_1 = temp12_1 u< 0
        *(esp - 4) = ebx_2
        void* esp_5 = esp - 4
        uint16_t esi_6 = __outsb(arg2.w, *(gsbase + esi_5), esi_5, eflags)
        
        if (temp12_1 u< 0)
            char temp16_1 = *eax_1 | ecx_2.b
            *eax_1 = temp16_1
            cond:3_1 = temp16_1 u< 0
        else
            *(esp_5 - 4) = esp_5
            esp_5 -= 4
            __bound_gprv_mema32(ebp_4, *(arg2 + 0x65))
            int16_t temp0_7
            temp0_7, eflags = __arpl_memw_gpr16(*(eax_1 + ecx_2 + 8), esi_6)
            *(eax_1 + ecx_2 + 8) = temp0_7
        
        *esp_5
        *(esp_5 + 4)
        *(esp_5 + 8)
        *(esp_5 + 0x10)
        *(esp_5 + 0x14)
        *(esp_5 + 0x18)
        esp_16 = esp_5 + 0x20
        uint8_t* edi_7
        uint8_t temp0_12
        
        if (cond:3_1)
        label_4aeb57:
            int32_t edi_6 = *esp_16
            uint16_t* esi_19 = *(esp_16 + 4)
            *(esp_16 + 8)
            *(esp_16 + 0x10)
            void* edx_3 = *(esp_16 + 0x14)
            *(esp_16 + 0x18)
            *(esp_16 + 0x1c)
            uint16_t* esi_20 = __outsb(edx_3.w, *esi_19, esi_19, eflags)
            uint8_t temp0_11
            temp0_11, arg6 = __insb(edi_6, edx_3.w, eflags)
            *arg6 = temp0_11
            *(esp_16 + 0x20)
            esp = esp_16 + 0x22
            arg2 = edx_3 + 1
            uint16_t* esi_21 = __outsd(arg2.w, *esi_20, esi_20, eflags)
            __outsd(arg2.w, *esi_21, esi_21, eflags)
            temp0_12, edi_7 = __insb(arg6, arg2.w, eflags)
            *edi_7 = temp0_12
        else
            z_1 = (*(esp_5 + 0x1c) | 0x48644954) == 0
            arg6 = *esp_16
            *(esp_16 + 4)
            *(esp_16 + 8)
            arg2 = *(esp_16 + 0x14)
            *(esp_16 + 0x18)
            *(esp_16 + 0x1c)
            esp = esp_16 + 0x20
            uint16_t* esi_8 = *(*(esp_16 + 0x10) + 0x74) * 0x43560901
            uint16_t* esi_9 = __outsd(arg2.w, *esi_8, esi_8, eflags)
            uint16_t* esi_10 = __outsb(arg2.w, *esi_9, esi_9, eflags)
            
            if (not(z_1))
                esi = __outsb(arg2.w, *esi_10, esi_10, eflags)
                
                if (z_1)
                    goto label_4aeafc
                
                temp0_12, edi_7 = __insb(arg6, arg2.w, eflags)
                *edi_7 = temp0_12
        int32_t* edi_8 = *esp
        uint16_t* esi_23 = esp[1]
        int32_t ebp_9 = esp[2]
        ebx_2 = esp[4]
        arg2 = esp[5]
        ecx_11 = esp[6]
        int32_t eax_6 = esp[7]
        uint16_t* esi_24 = __outsb(arg2.w, *esi_23, esi_23, eflags)
        int32_t temp25_1 = *edi_8
        *edi_8 += eax_6
        c_4 = temp25_1 + eax_6 u< temp25_1
        esp[7] = esi_24
        p_1 = unimplemented  {dec ebp}
        a_1 = unimplemented  {dec ebp}
        z_3 = ebp_9 == 1
        s_1 = ebp_9 - 1 s< 0
        o_2 = add_overflow(ebp_9, 0xffffffff)
        
        if (not(z_3))
            uint16_t* esi_25 = __outsd(arg2.w, *esi_24, esi_24, eflags)
            eax_1 = eax_6 | 0x48644954
            esp[6] = &esp[7]
            esp[5] = &esp[6]
            esp[4] = eax_1
            esp_22 = &esp[4]
            ebp_11 = ebp_9 - 2
            
            if (ebp_9 == 2)
                goto label_4aebe2
            
            uint16_t* esi_26 = __outsd(arg2.w, *esi_25, esi_25, eflags)
            ebx_2.b -= 0x4a
            char temp37_1 = *eax_1
            *eax_1 += ecx_11.b
            *(ecx_11 * 3 + 0x64) = sbb.b(*(ecx_11 * 3 + 0x64), arg2.b, temp37_1 + ecx_11.b u< temp37_1)
            bool c_6 = unimplemented  {sbb byte [ecx+ecx*2+0x64], dl}
            bool p_2 = unimplemented  {dec edi}
            bool z_4 = edi_8 == 1
            esi_27 = __outsb(arg2.w, *esi_26, esi_26, eflags)
            *(esp_22 - 4) = ebx_2
            esp_16 = esp_22 - 4
            uint8_t* edi_10
            uint8_t temp0_13
            temp0_13, edi_10 = __insb(edi_8 - 1, arg2.w, eflags)
            *edi_10 = temp0_13
            int16_t temp0_14
            temp0_14, eflags = __arpl_memw_gpr16(*(gsbase + ecx_11 + (eax_1 << 1) + 0x75), esi_27.w)
            *(gsbase + ecx_11 + (eax_1 << 1) + 0x75) = temp0_14
            
            if (not(z_4))
                __outsd(arg2.w, *esi_27, esi_27, eflags)
                
                if (c_6)
                    if (z_4)
                        jump(0x4aec67)
                    
                    jump(0x4aebff)
                
                if (p_2)
                    jump(0x4aebf7)
                
                jump("tion")
            
            arg6 = edi_10 - 1
            goto label_4aebfa
        
        uint8_t* edi_11
        uint8_t temp0_17
        temp0_17, edi_11 = __insb(edi_8, arg2.w, eflags)
        *edi_11 = temp0_17
        arg6 = esp[7]
        esi_5 = esp[8]
        ebp_11 = esp[9]
        ebx_2 = esp[0xb]
        arg2 = esp[0xc]
        ecx_2 = esp[0xd]
        eax_1 = esp[0xe]
        esp_16 = &esp[0xf]
        
        if (c_4)
            goto label_4aebd8
        
        arg6 = *esp_16
        esi_36 = *(esp_16 + 4)
        ebp_11 = *(esp_16 + 8)
        ebx_2 = *(esp_16 + 0x10)
        arg2 = *(esp_16 + 0x14)
        ecx_8 = *(esp_16 + 0x18)
        *(esp_16 + 0x1c)
        esp_33 = esp_16 + 0x20
    label_4aec4c:
        esi_5 = __outsb(arg2.w, *esi_36, esi_36, eflags)
        bool d
        *(esp_33 - 4) = (o_2 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s_1 ? 1 : 0) << 7
            | (z_3 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (c_4 ? 1 : 0)
        esp_16 = esp_33 - 4
    label_4aec51:
        eax_1.b = __in_al_dx(arg2.w, eflags)
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(esp_16 + (ebp_11 << 3) - 0x131bffb6) += ebx_2:1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        arg2:1.b = (arg2 - 2):1.b + ecx_8.b
        eax_1.b = __in_al_dx(arg2.w, eflags)
    label_4aec73:
        *(eax_1 - 0x1c000000) += eax_1.b
        *esp_16
        esp_34 = esp_16 + 2
        arg2 -= 2
        eax_1:1.b += arg2:1.b
        eax_1.b ^= *eax_1
        *ebx_2 += arg2:1.b
        *(ebx_2 + esi_5) += (eax_1 + 1).b
        *(eax_1 + 2) += ecx_8.b
        eax_9 = (eax_1 + 2) ^ *(eax_1 + 2)
        eax_9.b ^= *eax_9
        char temp35_1 = *(fsbase + eax_9) ^ eax_9.b
        *(fsbase + eax_9) = temp35_1
        cond:5_1 = temp35_1 s< 0
        goto label_4aec94
    
    label_4aeafc:
    int16_t es = *esp
    uint16_t* esi_11 = __outsd(arg2.w + 1, *esi, esi, eflags)
    __outsd(arg2.w + 1, *esi_11, esi_11, eflags)
    uint8_t* edi_4
    uint8_t temp0_8
    temp0_8, edi_4 = __insb(arg6, arg2.w + 1, eflags)
    *edi_4 = temp0_8
    int32_t edi_5 = *(esp + 2)
    uint16_t* esi_13 = *(esp + 6)
    ebp_3 = *(esp + 0xa)
    ebx_2 = *(esp + 0x12)
    int32_t edx_2 = *(esp + 0x16)
    int32_t ecx_4 = *(esp + 0x1a)
    char* eax_3 = *(esp + 0x1e)
    uint16_t* esi_14 = __outsb(edx_2.w, *esi_13, esi_13, eflags)
    ebx_2.b |= ecx_4:1.b
    arg2 = edx_2 - 1
    *eax_3 += ecx_4.b
    int16_t ss
    *(esp + 0x1e) = zx.d(ss)
    *(esp + 0x1a) = esp + 0x1e
    ecx_2 = ecx_4 - 1
    *(esp + 0x16) = esp + 0x1a
    *(esp + 0x12) = esp + 0x16
    *(esp + 0xe) = eax_3 - 1
    arg6 = edi_5 - 1
    __outsb(arg2.w, *esi_14, esi_14, eflags)
    *(esp + 0xa) = arg2
    esp += 0xa
    int32_t esi_16 = *(fsbase + arg2 + 0x65) * 0x76457463
    uint16_t* esi_17 = __outsb(arg2.w, *(gsbase + esi_16), esi_16, eflags)
    eax_1 = &eax_3[0x65530607]
    c_1 = eax_3 - 1 u>= 0x9aacf9f8
    esi_5 = __outsb(arg2.w, *esi_17, esi_17, eflags)
    label_4aeb27:
    
    if (not(c_1))
        *(esp - 4) = esp
        esp -= 4
        char* temp9_1 = arg6
        arg6 -= 1
        z_1 = temp9_1 == 1
        __bound_gprv_mema32(ebp_3, *(arg2 + 0x65))
        int16_t temp0_9
        temp0_9, eflags = __arpl_memw_gpr16(*(ecx_2 + eax_1 + 4), esi_5.w)
        *(ecx_2 + eax_1 + 4) = temp0_9
    label_4aeb34:
        
        if (not(c_1))
            goto label_4aebac
        
        goto label_4aeb38
    
    int32_t temp8_1 = *esp
    *esp += eax_1
    c_1 = temp8_1 + eax_1 u< temp8_1
    z_1 = temp8_1 == neg.d(eax_1)
    label_4aeb35:
    
    if (c_1)
    label_4aeb38:
        *(esp - 4) = zx.d(es)
        *(esp - 8) = ebx_2
        esp -= 8
        
        if (z_1)
            goto label_4aebae
        
        *(esi_5 + 0x67)
        int16_t temp0_10
        temp0_10, arg6 = __insd(arg6, arg2.w, eflags)
        *arg6 = temp0_10
        *(esp - 4) = arg2
        esp_16 = esp - 4
        *(fsbase + arg2 + 0x65)
        uint16_t* esi_18 = *(fsbase + arg2 + 0x65) * 0x49077463
        bool c_3 = unimplemented  {imul esi, dword [fs:edx+0x65], 0x49077463}
        esi_5 = __outsb(arg2.w, *esi_18, esi_18, eflags)
        
        if (z_1)
            goto label_4aebb6
        
        if (not(c_3))
            *esp_16
            esp_16 += 2
        
        goto label_4aeb57
    
    label_4aebac:
    int32_t temp15_1 = *ebx_2
    *ebx_2 += arg2
    c_1 = temp15_1 + arg2 u< temp15_1
    label_4aebae:
    char* temp17_1 = ecx_2
    ecx_2 = &ecx_2[1]
    void* esp_29
    
    if (temp17_1 == 0xffffffff)
        *(esp - 4) = 0x69746e65
        esp_16 = esp - 4
    label_4aebb6:
        int16_t temp0_15
        temp0_15, eflags = __arpl_memw_gpr16(*(ecx_2 + 0x74), esp_16.w)
        *(ecx_2 + 0x74) = temp0_15
        *(arg6 + 0x6e)
        ebp_11 = *(arg6 + 0x6e) * 0x73616c43
        bool c_7 = unimplemented  {imul ebp, dword [edi+0x6e], 0x73616c43}
        
        if (c_7)
            *(esp_16 - 4) = esp_16
            
            if (ecx_2 != 0)
                int32_t temp32_1 = *arg6
                *arg6 += eax_1
                c_4 = temp32_1 + eax_1 u< temp32_1
                arg6 = *(esp_16 - 4)
                esi_5 = *esp_16
                *(esp_16 + 4)
                *(esp_16 + 0xc)
                arg2 = *(esp_16 + 0x10)
                *(esp_16 + 0x14)
                *(esp_16 + 0x18)
                esp_29 = esp_16 + 0x1c
                goto label_4aec40
            
            *(esp_16 - 8) = 0x69746e65
            esp_22 = esp_16 - 8
            int16_t temp0_16
            temp0_16, eflags = __arpl_memw_gpr16(*(ecx_2 + 0x74), esp_22.w)
            *(ecx_2 + 0x74) = temp0_16
            *(arg6 + 0x6e)
            *(arg6 + 0x6e)
            bool c_8 = unimplemented  {imul ebp, dword [edi+0x6e], 0x73616c43}
            
            if (not(c_8))
                __outsd(arg2.w, *esi_5, esi_5, eflags)
                goto label_4aebe2
            
            char temp36_1 = ecx_2[0x75]
            ecx_2[0x75] |= eax_1.b
            c_4 = false
            
            if ((temp36_1 | eax_1.b) == 0)
                goto label_4aec46
            
            uint16_t* esi_29 = __outsb(arg2.w, *esi_5, esi_5, eflags)
            __outsw(arg2.w, *esi_29, esi_29, eflags)
            goto label_4aebe2
        
    label_4aebd8:
        *eax_1 |= ecx_2.b
        ecx_8 = &ecx_2[1]
        
        if (ecx_2 != 0xffffffff)
            goto label_4aec51
        
        *(esp_16 - 4) = 0x6f666e49
        esp_22 = esp_16 - 4
    label_4aebe2:
        bool cond:6_1 = (eax_1 | 0x48644954) u< 0
        arg6 = *esp_22
        esi_5 = *(esp_22 + 4)
        ebp_11 = *(esp_22 + 8)
        ebx_2 = *(esp_22 + 0x10)
        arg2 = *(esp_22 + 0x14)
        int32_t ecx_10 = *(esp_22 + 0x18)
        eax_1 = *(esp_22 + 0x1c)
        esp_29 = esp_22 + 0x20
        
        if (cond:6_1)
            goto label_4aec39
        
        esi_27 = *(ebx_2 + 0x74) * 0x4aebf4
        *arg2 |= arg2.b
        *(esp_29 - 4) = esp_29
        esp_16 = esp_29 - 4
        ecx_11 = ecx_10 - 1
        arg6 -= 1
    label_4aebfa:
        esi_5 = __outsb(arg2.w, *esi_27, esi_27, eflags)
        ecx_8 = ecx_11 + 1
        
        if (ecx_11 != 0xffffffff)
            goto label_4aec73
        
        *(esp_16 - 4) = 0x7a69726f
        *(esp_16 - 4)
        *esp_16
        *(esp_16 + 4)
        *(esp_16 + 0xc)
        *(esp_16 + 0x10)
        *(esp_16 + 0x14)
        *(esp_16 + 0x18)
        
        if (ecx_11 == 0xffffffff)
            jump(0x4aec6f)
        
        jump(0x4aec06)
    
    arg6 = *esp
    esi_5 = esp[1]
    ebp_11 = esp[2]
    ebx_2 = esp[4]
    arg2 = esp[5]
    ecx_8 = esp[6]
    eax_9 = esp[7]
    esp_34 = &esp[8]
    void* eax_16
    void* ecx_15
    bool c_11
    char* eax_15
    
    if (temp17_1 == 0xffffffff)
        char temp20_1 = *eax_9 ^ eax_9.b
        *eax_9 = temp20_1
        cond:5_1 = temp20_1 s< 0
    label_4aec94:
        
        if (not(cond:5_1))
            *(ebx_2 + ebp_11) += ecx_8:1.b
            char temp28_1 = eax_9[1]
            eax_9[1] += ecx_8:1.b
            ecx_8.b = sbb.b(ecx_8.b, *(arg2 - 1), temp28_1 + ecx_8:1.b u< temp28_1)
            *(ecx_8 + (&eax_9[1] << 1)) |= ecx_8.b
            *(ebx_2 + ecx_8) += ebx_2.b
            ecx_15 = ecx_8 + 1
            char temp29_1 = eax_9[0xc8004a2c]
            eax_9[0xc8004a2c] += (arg2 - 1).b
            eax_15 = sbb.d(&eax_9[1], 0x2d88004a, temp29_1 + (arg2 - 1).b u< temp29_1)
            arg2 -= 2
            *(arg2 + ebp_11 + 0xf98004a) += arg2:1.b
            ebx_2 -= 1
            *esi_5 += ecx_15.b
            goto label_4aecbd
        
        *eax_9 += eax_9.b
        char temp27_1 = *arg6
        *arg6 += ecx_8.b
        c_11 = temp27_1 + ecx_8.b u< temp27_1
        *0x7000400c = 0x70004010
        esp_34 = 0x7000400c
        ecx_15 = ecx_8 - 1
        eax_16 = eax_9 - 1
    else
        uint16_t* esi_33 = __outsd(arg2.w, *esi_5, esi_5, eflags)
        esi_5 = __outsb(arg2.w, *esi_33, esi_33, eflags)
        *(ecx_8 * 3 + 0x64) = adc.d(*(ecx_8 * 3 + 0x64), arg2, c_1)
        
        if (ecx_8 == 0xffffffff)
            *(esp_34 - 4) = 0x69746e65
            esp_29 = esp_34 - 4
            int16_t temp0_18
            temp0_18, eflags = __arpl_memw_gpr16(*(ecx_8 + 0x75), esp_29.w)
            *(ecx_8 + 0x75) = temp0_18
        label_4aec39:
            *(arg6 + 0x6e)
            *(arg6 + 0x6e)
            c_4 = unimplemented  {imul ebp, dword [edi+0x6e], 0x61480701}
        label_4aec40:
            esi_5 = __outsb(arg2.w, *esi_5, esi_5, eflags)
            uint8_t temp0_19
            temp0_19, arg6 = __insb(arg6, arg2.w, eflags)
            *arg6 = temp0_19
            *esp_29
            esp_22 = esp_29 + 2
        label_4aec46:
            p_1 = unimplemented  {inc edx}
            a_1 = unimplemented  {inc edx}
            z_3 = arg2 == 0xffffffff
            s_1 = arg2 + 1 s< 0
            o_2 = add_overflow(arg2, 1)
            uint16_t* esi_34 = __outsd(arg2.w + 1, *esi_5, esi_5, eflags)
            __outsd(arg2.w + 1, *esi_34, esi_34, eflags)
            uint8_t* edi_13
            uint8_t temp0_20
            temp0_20, edi_13 = __insb(arg6, arg2.w + 1, eflags)
            *edi_13 = temp0_20
            arg6 = *esp_22
            esi_36 = *(esp_22 + 4)
            ebp_11 = *(esp_22 + 8)
            ebx_2 = *(esp_22 + 0x10)
            arg2 = *(esp_22 + 0x14)
            ecx_8 = *(esp_22 + 0x18)
            *(esp_22 + 0x1c)
            esp_33 = esp_22 + 0x20
            goto label_4aec4c
        
        eax_15 = eax_9 | *(ecx_8 + 1)
        ecx_15 = ecx_8 + 1 - *arg2
        *(esp_34 - 4) = ebp_11
        esp_34 -= 0x4a21
        *0x2ab4004a = ecx_15:1.b
        arg2 -= 1
        eax_15[0xe004b0f] += ebx_2.b
    label_4aecbd:
        *eax_15 += eax_15.b
        *eax_15 += eax_15.b
        *ecx_15 += eax_15.b
        *eax_15 += eax_15.b
        *(eax_15 + arg2 + 0x700040) += ebx_2:1.b
        char temp30_1 = *eax_15
        *eax_15 += eax_15.b
        c_11 = temp30_1 + eax_15.b u< temp30_1
        arg7 = __andps_xmmxud_memxud(arg7, *(ecx_15 + 0x64))
        eax_16 = eax_15 - 1
    *(esp_34 - 4) = esp_34
    *(esp_34 - 8) = esp_34 - 4
    *(esp_34 - 0xc) = eax_16
    *(esp_34 - 0x10) = arg2
    
    if (c_11)
        uint16_t* esi_37 = __outsd(arg2.w, *esi_5, esi_5, eflags)
        __outsb(arg2.w, *esi_37, esi_37, eflags)
        
        if (not(c_11))
            eax_16:1.b += ebx_2:1.b
            eax_16.b ^= *eax_16
            char temp47 = *(fsbase + eax_16) ^ eax_16.b
            *(fsbase + eax_16) = temp47
            
            if (temp47 s< 0)
                jump(0x4aed7e)
            
            jump(0x4aed4e)
        
        void* eax_17
        eax_17.b = __in_al_immb(0xec, eflags)
        char temp48 = *arg6
        *arg6 += eax_17.b
        __andps_xmmxud_memxud(arg7, *(ecx_15 + 0x64))
        *(esp_34 - 0x14) = esp_34 - 0x10
        *(esp_34 - 0x18) = esp_34 - 0x14
        *(esp_34 - 0x1c) = eax_17 - 1
        *(esp_34 - 0x20) = arg2 - 1
        
        if (temp48 + eax_17.b u>= temp48)
            jump(0x4aed61)
        
        jump("onse")
    
    *(eax_16 + 0x31) += ebx_2:1.b
    *(eax_16 + 0x74004a2c) += (eax_16 + 2).b
    char* eax_21 = (eax_16 + 2) & 0xc08004a
    *(ebx_2 + ecx_15 + 1) += ebx_2.b
    *eax_21 += arg2.b
    char* ecx_18 = (ecx_15 + 2) & *arg2
    int32_t eax_22 = sx.d(eax_21.w)
    *eax_22 += ebx_2.b
    char temp40 = *(eax_22 + 0x10004a19)
    *(eax_22 + 0x10004a19) += eax_22.b
    ecx_18.b = adc.b(ecx_18.b, *ebx_2, temp40 + eax_22.b u< temp40)
    int16_t cs
    *(esp_34 - 0x14) = zx.d(cs)
    *eax_22 += eax_22.b
    *eax_22 += eax_22.b
    *ecx_18 += eax_22.b
    *eax_22 += eax_22.b
    *(eax_22 + arg2 - 2 + 0x8c0040) += ebx_2:1.b
    char temp41 = *eax_22
    *eax_22 += eax_22.b
    *(esp_34 - 0x18) = zx.d(cs)
    *(esp_34 - 0x1c) = esp_34 - 0x18
    *(esp_34 - 0x20) = esp_34 - 0x1c
    *(esp_34 - 0x24) = esp_34 - 0x20
    *(esp_34 - 0x28) = eax_22 - 1
    *(esp_34 - 0x2c) = arg2 - 2
    
    if (add_overflow(eax_22, 0xffffffff))
        if (temp41 + eax_22.b u>= temp41)
            jump(0x4aee09)
        
        jump(sub_4aed0c+0x89)
    
    char temp44 = (eax_22 - 1).b
    int32_t eax_23
    eax_23.b = (eax_22 - 1).b + (ecx_18 - 1).b
    bool c_15 = temp44 + (ecx_18 - 1).b u< temp44
    char temp45 = (ecx_18 - 1).b
    char temp46 = *ebx_2
    void* ecx_19
    ecx_19.b = adc.b(temp45, temp46, c_15)
    __andps_xmmxud_memxud(arg7, *(ecx_19 + 0x64))
    *(esp_34 - 0x30) = esp_34 - 0x2c
    *(esp_34 - 0x34) = esp_34 - 0x30
    *(esp_34 - 0x38) = eax_23 - 1
    *(esp_34 - 0x3c) = eax_23 - 1
    
    if (adc.b(temp45, temp46, c_15) u< temp45 || (c_15 && adc.b(temp45, temp46, c_15) == temp45))
        jump(&data_4aee84:2)
    
    jump(sub_4aed0c+0x10b)
}
