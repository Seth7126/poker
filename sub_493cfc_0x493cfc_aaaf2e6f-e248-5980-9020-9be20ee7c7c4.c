// ============================================================
// 函数名称: sub_493cfc
// 虚拟地址: 0x493cfc
// WARP GUID: aaaf2e6f-e248-5980-9020-9be20ee7c7c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CloseHandle
// [内部子函数调用]: sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_493cfc(int32_t arg1, void* arg2, int32_t arg3, void* arg4 @ ebp, char* arg5 @ esi, void* arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    char* var_4 = arg1 - 1
    char** esp_1 = &var_4
    *(arg1 - 1) += (arg1 - 1).b
    arg7 - fconvert.t(*(arg1 - 1))
    void* eax
    eax:1.b = arg1:1.b + arg2:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1
    
    if (temp1 s< 0)
        goto label_493d72
    
    eax_3.b = (&eax_3[1]).b * 2
    *eax_3 ^= eax_3.b
    int32_t eflags
    eax_3.b = __in_al_dx(arg2.w, eflags)
    eax_3.b += arg2:1.b
    arg3 -= 2
    char temp3_1 = *arg5
    *arg5 += arg3.b
    char** var_8_1 = &var_4
    char* var_c = entry_ebx
    esp_1 = &var_c
    int32_t ecx_5
    
    if (temp3_1 + arg3.b s>= 0)
        *eax_3 = rlc.b(*eax_3, 0x3e, temp3_1 + arg3.b u< temp3_1)
    label_493dc7:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += entry_ebx.b
        ecx_5 = arg3 - 2
    else
        int32_t eflags_1
        int16_t temp0_2
        temp0_2, eflags_1 = __arpl_memw_gpr16(*(eax_3 + 0x72), arg4.w)
        *(eax_3 + 0x72) = temp0_2
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags_1)
        arg6 -= 1
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(eax_3 + (arg2 << 2) - 0x54), arg5.w)
        *(eax_3 + (arg2 << 2) - 0x54) = temp0_3
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
    label_493d72:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        eax_3:1.b = 0x3d
        *(eax_3 * 2) += (arg3 - 1).b
        *eax_3 += eax_3.b
        eax_3:1.b = 0x3d + arg2:1.b
        eax_3.b ^= *eax_3
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&eax_3[1]).b
        eax_3[2] += (arg3 - 1).b
        eax_3 = &eax_3[2] ^ *(eax_3 + 2)
        eax_3.b ^= *eax_3
        char temp2_1 = *(fsbase + eax_3) ^ eax_3.b
        *(fsbase + eax_3) = temp2_1
        
        if (temp2_1 s>= 0)
            eax_3:1.b = (&eax_3[1]):1.b + arg2:1.b
            eax_3:1.b += (arg3 - 2):1.b
            eax_3.b += arg2:1.b
            arg3 -= 4
            char temp5_1 = *0x6e614854
            *0x6e614854 += arg3.b
            uint8_t* edi
            uint8_t temp0_4
            temp0_4, edi = __insb(arg6, arg2.w, eflags)
            *edi = temp0_4
            arg6 = edi - 1
            __bound_gprv_mema32(arg4, *(arg2 + 0x65))
            int16_t temp0_5
            temp0_5, eflags = __arpl_memw_gpr16(*(entry_ebx + (arg3 << 2) - 0x40), arg5.w)
            *(entry_ebx + (arg3 << 2) - 0x40) = temp0_5
            *arg5 = adc.b(*arg5, entry_ebx:1.b, temp5_1 + arg3.b u< temp5_1)
            goto label_493dc7
        
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        char temp4_1 = *eax_3
        *eax_3 += eax_3.b
        *arg5 = sbb.b(*arg5, entry_ebx:1.b, temp4_1 + eax_3.b u< temp4_1)
        ecx_5 = arg3 - 2
    
    *(eax_3 * 2) += ecx_5.b
    *eax_3 += eax_3.b
    *(esp_1 - 4) = eax_3
    *(esp_1 - 8) = ecx_5
    *(esp_1 - 0xc) = arg2
    *(esp_1 - 0x10) = entry_ebx
    *(esp_1 - 0x14) = esp_1 - 0x10
    *(esp_1 - 0x18) = arg4
    *(esp_1 - 0x1c) = arg5
    *(esp_1 - 0x20) = arg6
    void* esp_3 = esp_1 - 0x20
    eax_3[1] += (&eax_3[1]).b
    void* eax_7
    eax_7.b = (&eax_3[1] ^ *(eax_3 + 1)).b + 0x33
    *(eax_7 + 1) += ecx_5.b
    char* eax_9 = (eax_7 + 1) ^ *(eax_7 + 1)
    eax_9.b ^= *eax_9
    char temp6 = *(fsbase + eax_9) ^ eax_9.b
    *(fsbase + eax_9) = temp6
    
    if (temp6 s>= 0)
        eax_9:1.b = (&eax_9[1]):1.b + arg2:1.b
        ecx_5 -= 1
    label_493e0f:
        eax_9:1.b += ecx_5:1.b
        eax_9.b += arg2:1.b
        ecx_5 -= 2
        char temp9_1 = *arg5
        *arg5 += eax_9.b
        *(esp_3 - 4) = esp_3
        esp_3 -= 4
        bool z_1 = arg4 == 0xffffffff
        
        if (z_1 || temp9_1 + eax_9.b u< temp9_1)
            goto label_493e83
        
        __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (z_1)
            undefined
        
        jump(&data_493e20)
    
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    char temp7_1 = *eax_9
    *eax_9 += eax_9.b
    bool cond:1_1 = temp7_1 == neg.b(eax_9.b)
    
    if (temp7_1 == neg.b(eax_9.b))
        goto label_493e80
    
    *(eax_9 * 2) += (ecx_5 - 1).b
    *eax_9 += eax_9.b
    int32_t edi_1
    int16_t es_1
    edi_1, es_1 = __les_gprz_memp(*0x32f40049)
    eax_9[1] += (&eax_9[1]).b
    void* eax_11
    eax_11.b = (&eax_9[1] ^ *(eax_9 + 1)).b + 0x33
    *(eax_11 + 1) += (ecx_5 - 1).b
    void* eax_13 = (eax_11 + 1) ^ *(eax_11 + 1)
    eax_13.b ^= *eax_13
    char temp8_1 = *(fsbase + eax_13) ^ eax_13.b
    *(fsbase + eax_13) = temp8_1
    int32_t ecx_11
    
    if (temp8_1 s< 0)
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *arg5
        ecx_11 = ecx_5 - 2
    else
        eax_9:1.b = (eax_13 + 1):1.b + arg2:1.b
        eax_9:1.b += (ecx_5 - 2):1.b
        eax_9.b += arg2:1.b
        ecx_5 -= 4
        char temp11_1 = *(esp_3 + (arg2 << 1))
        *(esp_3 + (arg2 << 1)) += ecx_5.b
        cond:1_1 = temp11_1 == neg.b(ecx_5.b)
        *(esp_3 - 4) = entry_ebx
        esp_3 -= 4
        arg4 = *(arg4 + 0x70) * 0x7645656c
        uint16_t* gsbase
        arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
    label_493e80:
        
        if (cond:1_1)
            goto label_493e0f
        
    label_493e83:
        eax_13.b = (&eax_9[1]).b + arg2.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        *eax_13 += eax_13.b
        eax_13.b += entry_ebx.b
        ecx_11 = ecx_5 - 2
    
    *(eax_13 * 2) += entry_ebx.b
    *eax_13 += eax_13.b
    eax_13:1.b += arg2:1.b
    eax_13.b ^= *eax_13
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax_13 + 1).b
    *(eax_13 + 2) += ecx_11.b
    char* eax_16 = (eax_13 + 2) ^ *(eax_13 + 2)
    eax_16.b ^= *eax_16
    char temp12 = *(fsbase + eax_16) ^ eax_16.b
    *(fsbase + eax_16) = temp12
    
    if (temp12 s< 0)
        *(entry_ebx - 0x740f7426) -= 1
        eax_16.b += 0x50
        char* edx
        edx.b = entry_ebx.b & 0xfc
        sub_4030c0(CloseHandle(), edx)
        
        if (entry_ebx.b s<= 0)
            jump(sub_493ef4+0x2b)
        
        jump(sub_493ef4+0x24)
    
    eax_16[1] += (&eax_16[1]).b
    eax_16[2] += arg2:1.b
    *(&eax_16[3] * 3) += entry_ebx:1.b
    char temp13 = eax_16[3]
    eax_16[3] += arg2.b
    *(esp_3 - 4) = esp_3
    
    if (temp13 + arg2.b u< temp13)
        jump(sub_493f24+0x22)
    
    jump("ticalSectio")
}
