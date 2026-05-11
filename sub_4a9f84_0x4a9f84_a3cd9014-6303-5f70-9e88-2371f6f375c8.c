// ============================================================
// 函数名称: sub_4a9f84
// 虚拟地址: 0x4a9f84
// WARP GUID: a3cd9014-6303-5f70-9e88-2371f6f375c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a9f84(char* arg1, int32_t arg2, void* arg3, char** arg4 @ esi, void* arg5 @ edi, int80_t arg6 @ st0, uint16_t* arg7, void* arg8, char* arg9, char arg10, char arg11)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x4a]
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    arg1.b = sbb.b(arg1.b, 0xa0, temp1 + arg1.b u< temp1)
    arg1[0x1c000000] += arg3.b
    char* edi = arg1
    char* edx_1 = arg2 - 2
    arg10 += edx_1.b
    char* eax_1
    eax_1:1.b = (arg5 + 1):1.b + arg3:1.b
    void* const __return_addr_1 = __return_addr
    int32_t arg_4
    int32_t* esp_1 = &arg_4
    void* ecx = arg3 + 1
    *eax_1 += ecx.b
    char* eax_2 = eax_1 ^ *eax_1
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp2 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp2
    
    if (temp2 s< 0)
        goto label_4a9ff6
    
    *(__return_addr_1 * 5 + 0x4a) += ecx.b
    eax_2[1] += (&eax_2[1]).b
    void* eax_3
    eax_3.b = (&eax_2[1]).b | 0x41
    *(eax_3 + 0x1c004160) += eax_3:1.b
    eax_2 = eax_3 | *ecx
    bool cond:0_1 = eax_2 u< 0
    bool cond:2_1 = eax_2 u< 0
    bool cond:3_1 = eax_2 u< 0
    int32_t eflags
    char* entry_ebx
    
    if (eax_2 s< 0)
    label_4aa03b:
        ecx -= 1
        *(esp_1 - 4) = entry_ebx
        esp_1 -= 4
        
        if (not(cond:0_1))
            if (cond:2_1)
                *(esp_1 - 4) = eax_2
                *(esp_1 - 8) = ecx
                *(esp_1 - 0xc) = edx_1
                *(esp_1 - 0x10) = entry_ebx
                *(esp_1 - 0x14) = esp_1 - 0x10
                *(esp_1 - 0x18) = __return_addr_1
                *(esp_1 - 0x1c) = arg4
                *(esp_1 - 0x20) = edi
                esp_1 -= 0x20
                eax_2, edx_1, ecx = 0xbaa0df()
                goto label_4aa097
            
            int32_t edi_2 = *esp_1
            uint16_t* esi_1 = esp_1[1]
            esp_1[2]
            entry_ebx = esp_1[4]
            edx_1 = esp_1[5]
            ecx = esp_1[6]
            eax_2 = esp_1[7]
            esp_1 = &esp_1[8]
            arg4 = __outsb(edx_1.w, *esi_1, esi_1, eflags)
            uint8_t temp0_2
            temp0_2, edi = __insb(edi_2, edx_1.w, eflags)
            *edi = temp0_2
            
            if (cond:3_1)
                goto label_4aa0a0
            
            *(esp_1 - 4) = entry_ebx
            breakpoint
        
        *eax_2 += entry_ebx:1.b
    label_4aa0ba:
        entry_ebx:1.b *= 2
        entry_ebx:1.b *= 2
        *eax_2 = &eax_2[*eax_2]
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2[0x80000000] += eax_2.b
        bool c_2 = eax_2 u>= 0x91b0f300
        bool z_2 = edi == 0xffffffff
        char* eax_5
        
        if (not(z_2))
            *esp_1
            esp_1[1]
            esp_1[2]
            entry_ebx = esp_1[4]
            edx_1 = esp_1[5]
            ecx = esp_1[6]
            eax_5 = esp_1[7]
            esp_1 = &esp_1[8]
            
            if (not(c_2))
                goto label_4aa14b
            
            if (z_2 || c_2)
                jump(0x4aa0da)
            
            *eax_5 ^= eax_5.b
            undefined
        
    label_4aa125:
        char* eax_6 = *0x10004a
        *eax_6 += eax_6.b
        arg6 f- fconvert.t(*eax_6)
        char* eax_7
        eax_7:1.b = (&eax_6[1]):1.b + edx_1:1.b
        eax_7.b ^= *eax_7
        *entry_ebx += edx_1:1.b
        *(entry_ebx + arg4) += (&eax_7[1]).b
        eax_7[2] += ecx.b
        eax_2 = &eax_7[2] ^ *(eax_7 + 2)
        eax_2.b ^= *eax_2
        char temp7_1 = *(fsbase + eax_2) ^ eax_2.b
        *(fsbase + eax_2) = temp7_1
        
        if (temp7_1 s< 0)
        label_4aa17a:
            *eax_2 += eax_2.b
            *eax_2 += ecx.b
        else
            eax_5 = &eax_2[1]
        label_4aa14b:
            eax_5:1.b += eax_5.b
            *edx_1 = ror.b(*edx_1, 0x78)
            *edx_1 = ror.b(*edx_1, 7)
        label_4aa155:
            *(esp_1 - 4) = esp_1
            eax_2 = *(esp_1 - 4) ^ 0xa1a83930
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
            *eax_2 += eax_2.b
            eax_2[0x8004aa1] += (ecx.w - 1):1.b
        
        *eax_2 += eax_2.b
        char temp12 = eax_2.b
        eax_2.b += entry_ebx.b
        *eax_2 = adc.b(*eax_2, eax_2.b, temp12 + entry_ebx.b u< temp12)
        trap(0xd)
    
    eax_2[0x41] += eax_2.b
    *(ecx + 0x627c0042) += eax_2.b
    arg11 += (ecx + 2):1.b
    ecx += 3
    *(ecx + 0x64b40041) += ecx.b
    label_4a9ff6:
    ecx += 1
    *eax_2 += eax_2.b
    eax_2 = *arg4
    arg4 = &arg4[1]
    *(__return_addr_1 + arg4 + 0x4a) += ecx.b
    *(__return_addr_1 + arg4 + 0x35d8004a) += (edx_1 - 1).b
    *(__return_addr_1 * 5 - 0x51b7ffb6) += ecx.b
    eax_2.b += entry_ebx.b
    *edi
    edi = &edi[1]
    edi[__return_addr_1 << 2] += ecx:1.b
    edx_1 -= 5
    edi[(__return_addr_1 << 2) + 0x4a] += eax_2.b
    char temp3_1 = *0x53644954
    *0x53644954 += edx_1.b
    bool c_1 = temp3_1 + edx_1.b u< temp3_1
    bool s_1
    
    if (not(c_1))
        if (c_1)
            *(fsbase + eax_2) += eax_2.b
            *ecx += 1
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 = *eax_2
            char temp9_1 = eax_2[0x530a0003]
            eax_2[0x530a0003] += eax_2.b
            c_1 = temp9_1 + eax_2.b u< temp9_1
        label_4aa084:
            *(esp_1 - 4) = entry_ebx
            esp_1 -= 5
            char* temp10_1 = edi
            edi -= 1
            s_1 = temp10_1 - 1 s< 0
            
            if (add_overflow(temp10_1, 0xffffffff))
                goto label_4aa0fd
            
            *(edi + 0x6e)
            *eax_2 += edx_1:1.b
            entry_ebx:1.b *= 2
            goto label_4aa097
        
        int32_t edi_1 = arg_4
        __return_addr_1 = arg8
        entry_ebx = arg9
        char* arg_18
        edx_1 = arg_18
        void* arg_1c
        ecx = arg_1c
        char* arg_20
        eax_2 = arg_20
        arg4 = __outsb(edx_1.w, *arg7, arg7, eflags)
        uint8_t temp0_1
        temp0_1, edi = __insb(edi_1, edx_1.w, eflags)
        *edi = temp0_1
        
        if (c_1)
            arg_20 = entry_ebx
            esp_1 = &arg_20
            goto label_4aa084
        
        arg_20 = entry_ebx
        char temp11_1 = eax_2[0x1507004a]
        cond:0_1 = temp11_1 u< eax_2:1.b
        cond:2_1 = temp11_1 u< eax_2:1.b
        cond:3_1 = temp11_1 u< eax_2:1.b
        arg_18 = &arg_1c:3
        esp_1 = &arg_18:3
        goto label_4aa03b
    
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    label_4aa0a0:
    *eax_2 = *eax_2
    char temp6_1 = eax_2[0x4f0c0004]
    eax_2[0x4f0c0004] += eax_2.b
    c_1 = temp6_1 + eax_2.b u< temp6_1
    bool z_1 = temp6_1 == neg.b(eax_2.b)
    s_1 = temp6_1 + eax_2.b s< 0
    
    while (true)
        arg4 = __outsb(edx_1.w, *arg4, arg4, eflags)
        *(esp_1 - 4) = entry_ebx
        esp_1 -= 4
        
        if (z_1)
            goto label_4aa10e
        
        if (not(z_1))
            if (c_1)
                uint16_t* esi_2 = __outsb(edx_1.w, *arg4, arg4, eflags)
                arg4 = __outsw(edx_1.w, *esi_2, esi_2, eflags)
                edx_1[0x78004a]
                goto label_4aa0ba
            
            if (c_1)
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
                goto label_4aa17a
            
        label_4aa0fd:
            
            if (not(s_1))
                if (not(s_1))
                    *edi += eax_2.b
                    break
            else if (c_1)
                *(esp_1 - 4) = *eax_2
                esp_1 -= 4
            label_4aa097:
                entry_ebx:1.b *= 2
                *eax_2 = &eax_2[*eax_2]
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                eax_2[0x80000000] += eax_2.b
                eax_2.b = eax_2.b
                char temp8_1 = eax_2.b
                eax_2.b |= 0x4f
                c_1 = false
                z_1 = (temp8_1 | 0x4f) == 0
                s_1 = (temp8_1 | 0x4f) s< 0
                continue
            else
                *(esp_1 - 4) = eax_2
                esp_1 -= 4
                eax_2 = *0x4a
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
            label_4aa10e:
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
        
        *(esp_1 - 4) = esp_1
        esp_1 -= 4
        goto label_4aa125
    
    goto label_4aa155
}
