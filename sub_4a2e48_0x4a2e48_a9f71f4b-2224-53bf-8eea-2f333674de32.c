// ============================================================
// 函数名称: sub_4a2e48
// 虚拟地址: 0x4a2e48
// WARP GUID: a9f71f4b-2224-53bf-8eea-2f333674de32
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4033d0, sub_415d18, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_4a2e48(char* arg1, int32_t arg2, int32_t arg3, double* arg4 @ esi, int32_t arg5 @ edi, long double arg6 @ st0, int32_t* arg7, void* arg8, int32_t arg9, void* arg10, char* arg11, char arg12, char arg13)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    long double result = fconvert.t(*arg4) - arg6
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1:1.b += arg1.b
    char* edx_1 = arg2 - 2
    *arg1 += edx_1:1.b
    *arg1 += arg1.b
    *arg1 += arg3:1.b
    arg12 += edx_1.b
    void* eax
    eax:1.b = (&arg1[1]):1.b + (arg3 - 1):1.b
    void* const __return_addr_1 = __return_addr
    void* ecx_1 = arg3
    *eax += ecx_1.b
    char* eax_1 = eax ^ *eax
    eax_1.b ^= *eax_1
    TEB* fsbase
    char temp1 = *(fsbase + eax_1) ^ eax_1.b
    *(fsbase + eax_1) = temp1
    
    if (temp1 s< 0)
        goto label_4a2ebb
    
    eax_1[0x31] += (&eax_1[1]):1.b
    edx_1 -= 1
    eax_1[1] += (&eax_1[1]).b
    void* eax_2
    eax_2.b = (&eax_1[1]).b | 0x41
    *(eax_2 + 0x1c004160) += eax_2:1.b
    eax_1 = eax_2 | *ecx_1
    void* ecx_9
    int32_t arg_4
    int32_t eflags
    void* eax_3
    int32_t* eax_7
    void* eax_8
    void* ecx_6
    void* entry_ebx
    void* const* esp_1
    void* esp_2
    void* esp_5
    int32_t ebp_1
    int32_t* esi
    
    if (eax_1 s< 0)
        *(arg4 + 0x72)
        bool c_1 = unimplemented  {imul eax, dword [esi+0x72], 0x657a6565}
        arg5 = arg_4
        esi = arg7
        __return_addr_1 = arg8
        edx_1 = arg11
        void* arg_1c
        void* ecx_8 = arg_1c
        char* arg_20
        char* eax_5 = arg_20
        
        if (c_1)
            eax_5.b = eax_5.b
            *eax_5 += edx_1.b
            *(&eax_5[1] * 2) += (&eax_5[1]):1.b
            entry_ebx:1.b = arg10:1.b * 2
            void* eax_6
            eax_6.b = 0
            entry_ebx:1.b *= 2
            *eax_6 += eax_6
            *eax_6 = *eax_6
            *eax_6 = *eax_6
            *(eax_6 + 1) = *(eax_6 + 1)
            eax_6.b = *eax_6
            int16_t es
            arg_20 = zx.d(es)
            esp_1 = &arg_20
            ecx_6 = ecx_8 + 1
            int16_t temp0_1
            temp0_1, eflags = __arpl_memw_gpr16(*(ecx_6 + (__return_addr_1 << 1) + 0x76), esi.w)
            *(ecx_6 + (__return_addr_1 << 1) + 0x76) = temp0_1
            char* gsbase
            *(gsbase + eax_6) += edx_1.b
            eax_3 = eax_6 + 1
            *0x25ff0000 += eax_3:1.b
            *eax_3 += eax_3.b
            *ecx_6 += 1
            goto label_4a2f3a
        
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        eax_5.b = eax_5.b
        ecx_9 = ecx_8 | *(ecx_8 + 0x64)
        uint8_t* edi_3
        uint8_t temp0_3
        temp0_3, edi_3 = __insb(arg5, edx_1.w, eflags)
        *edi_3 = temp0_3
        void arg_24
        arg_20 = &arg_24
        *(__return_addr_1 + 0x65)
        ebp_1 = *(__return_addr_1 + 0x65) * 0x74754f
        bool c_4 = unimplemented  {imul ebp, dword [ebp+0x65], 0x74754f}
        *eax_5 = adc.b(*eax_5, eax_5.b, c_4)
        eax_5.b = eax_5.b
        entry_ebx:1.b = arg10:1.b * 2
        eax_5.b = eax_5.b
        entry_ebx:1.b *= 2
        *eax_5 = &eax_5[*eax_5]
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        eax_5[1] += eax_5.b
        eax_7 = &eax_5[0x6e4f0c00]
        uint8_t* edi_4
        uint8_t temp0_4
        temp0_4, edi_4 = __insb(edi_3, edx_1.w, eflags)
        *edi_4 = temp0_4
        
        if (&eax_5[0x6e4f0c00] s< 0)
            __builtin_strncpy(&arg_1c, "enId", 4)
            esp_5 = &arg_1c
            uint8_t* edi_6
            uint8_t temp0_6
            temp0_6, edi_6 = __insb(edi_4, edx_1.w, eflags)
            *edi_6 = temp0_6
        label_4a2fac:
            *(esp_5 - 4) = ebp_1
            __return_addr_1 = esp_5 - 4
            *(esp_5 - 8) = 0
            *(esp_5 - 0xc) = entry_ebx
            *(esp_5 - 0x10) = esi
            void* esp_9 = esp_5 - 0x10
            
            if (edx_1.b != 0)
                esp_9 -= 0x10
                eax_7 = sub_4033d0(ecx_9, edx_1)
            
            esi = eax_7
            eax_8 = nullptr
            *(esp_9 - 4) = __return_addr_1
            *(esp_9 - 8) = 0x4a303b
            esp_2 = esp_9 - 8
            goto label_4a2fcb
    else
        eax_1[0x41] += eax_1.b
        *(ecx_1 + 0x627c0042) += eax_1.b
        arg13 += (ecx_1 + 2):1.b
        ecx_1 += 3
        *(ecx_1 + 0x64b40041) += ecx_1.b
    label_4a2ebb:
        *(arg5 + __return_addr_1 + 0x2b74004a) += (ecx_1 + 1):1.b
        eax_3 = &eax_1[1]
        char temp2_1 = *(ecx_1 + 1)
        *(ecx_1 + 1) += edx_1.b
        bool c = temp2_1 + edx_1.b u< temp2_1
        __return_addr = &arg_4
        esp_1 = &__return_addr
        ecx_6 = ecx_1 + 1
        esi = __outsb(edx_1.w, *arg4, arg4, eflags)
        
        if (ecx_1 == 0xffffffff)
            eax_3 &= 0x1ff0000
        label_4a2f3a:
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *ecx_6 = *ecx_6
            *eax_3 += eax_3.b
        else
            esi += 1
            bool p_1 = unimplemented  {inc esi}
            
            if (c)
                jump(*0x1ff0000)
            
            if (not(p_1))
                if (not(c))
                    jump(0x4a2f3b)
                
                jump(0x4a2ed6)
            
            entry_ebx:1.b *= 2
            *eax_3 += eax_3
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *(eax_3 + 1) += eax_3.b
        
        eax_8 = eax_3 + *eax_3
        bool c_2 = eax_3 + *eax_3 u< eax_3
        int16_t ss
        *(esp_1 - 4) = zx.d(ss)
        esp_2 = esp_1 - 4
        ecx_9 = ecx_6 + 1
        
        if (not(add_overflow(ecx_6, 1)))
            uint8_t* edi_1
            uint8_t temp0_2
            temp0_2, edi_1 = __insb(arg5, edx_1.w, eflags)
            *edi_1 = temp0_2
            *(entry_ebx + 0x61)
            int32_t* esp_3 = *(entry_ebx + 0x61) * 0x6e6f6974
            bool c_3 = unimplemented  {imul esp, dword [ebx+0x61], 0x6e6f6974}
            esi = esp_3[1]
            ebp_1 = esp_3[2]
            entry_ebx = esp_3[4]
            edx_1 = esp_3[5]
            eax_7 = esp_3[7]
            esp_5 = &esp_3[8]
            
            if (not(c_3))
                ecx_9 = esp_3[6] - 1
                uint8_t* edi_5
                uint8_t temp0_5
                temp0_5, edi_5 = __insb(*esp_3, edx_1.w, eflags)
                *edi_5 = temp0_5
                goto label_4a2fac
            
            if (c_3)
                undefined
            
            jump("ority")
        
        int32_t temp11_1 = *(esi * 9)
        *(esi * 9) = adc.d(temp11_1, eax_8, c_2)
        *(entry_ebx + 0x33f08bda) -= 1
        *(__return_addr_1 + 0x68) = rlc.b(*(__return_addr_1 + 0x68), 0x3b, 
            adc.d(temp11_1, eax_8, c_2) u< temp11_1 || (c_2 && adc.d(temp11_1, eax_8, c_2) == temp11_1))
        *edx_1 ^= ecx_9.b
    label_4a2fcb:
        *(esp_2 - 4) = *(fsbase + eax_8)
        *(fsbase + eax_8) = esp_2 - 4
        sub_415d18(esi, 0, ecx_9)
        
        if ((esi[8].b & 0x10) == 0)
            data_52fbf8 = esi
        label_4a3012:
            esi[9].b = 1
            *(esi + 0x25) = 1
            esi[0xa] = 0xfa
            esi[0xb].b = 1
            *(esp_2 + 4)
            fsbase->NtTib.ExceptionList = *(esp_2 - 4)
            *(esp_2 + 4) = 0x4a3042
            sub_403df8(__return_addr_1 - 4)
            return result
        
        if (data_52fbf8 == 0)
            goto label_4a3012
        
        sub_405ae8(data_530094, __return_addr_1 - 4)
        ecx_9 = *(__return_addr_1 - 4)
        edx_1.b = 1
    sub_40b4b0(0x4988ec, edx_1, ecx_9)
    sub_403828()
    noreturn
}
