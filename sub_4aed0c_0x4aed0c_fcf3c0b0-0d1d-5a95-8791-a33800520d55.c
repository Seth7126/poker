// ============================================================
// 函数名称: sub_4aed0c
// 虚拟地址: 0x4aed0c
// WARP GUID: fcf3c0b0-0d1d-5a95-8791-a33800520d55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aed0c(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, uint32_t arg7[0x4] @ xmm1)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    int32_t eflags
    int32_t edx
    char*** esp
    
    if (temp1 == neg.b(arg1.b))
        void* const* var_4 = &__return_addr
        void* const** var_8_1 = &var_4
        char* var_c = arg1
        *arg1 += arg1.b
        char** var_10 = &var_c
        esp = &var_10
        arg1 = __in_oeax_dx(arg2.w, eflags)
        edx = arg2 - 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg4 * 9 + 0x4a) += edx:1.b
    else
        edx = arg2 - 1
    
    char* entry_ebx
    *(arg4 * 9 + 0x4a) += entry_ebx.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = arg3:1.b
    arg3:1.b = arg3:1.b
    arg3:1.b = temp0
    *(arg1 * 2 + 0x15080000) += entry_ebx.b
    int32_t edx_2 = edx - 2
    arg1:1.b += edx_2:1.b
    arg1.b ^= *arg1
    *entry_ebx += edx_2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp2 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp2
    void* esp_2
    int16_t cs
    bool c_1
    
    if (temp2 s< 0)
        esp_2 = 0x8c004010
        *eax_2 += eax_2.b
        char temp3_1 = *arg5
        *arg5 += arg3.b
        c_1 = temp3_1 + arg3.b u< temp3_1
    else
        eax_2[0x74004a2b] += (&eax_2[1]).b
        void* eax_4 = &eax_2[1] & 0xc08004a
        *(entry_ebx + &arg3[1]) += entry_ebx.b
        *eax_4 += edx_2.b
        arg3 = &arg3[2] & *edx_2
        eax_2 = sx.d(eax_4.w)
        *eax_2 += entry_ebx.b
        edx_2 -= 2
        char temp4_1 = eax_2[0x10004a19]
        eax_2[0x10004a19] += eax_2.b
        arg3.b = adc.b(arg3.b, *entry_ebx, temp4_1 + eax_2.b u< temp4_1)
        *(esp - 4) = zx.d(cs)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *arg3 += eax_2.b
        *eax_2 += eax_2.b
        eax_2[edx_2 + 0x8c0040] += entry_ebx:1.b
        char temp5_1 = *eax_2
        *eax_2 += eax_2.b
        c_1 = temp5_1 + eax_2.b u< temp5_1
        *(esp - 8) = zx.d(cs)
        esp_2 = esp - 8
    
    *(esp_2 - 4) = esp_2
    void* eax_5 = eax_2 - 1
    bool p = unimplemented  {dec eax}
    bool a = unimplemented  {dec eax}
    bool o = add_overflow(eax_2, 0xffffffff)
    *(esp_2 - 8) = esp_2 - 4
    *(esp_2 - 0xc) = esp_2 - 8
    *(esp_2 - 0x10) = eax_5
    *(esp_2 - 0x14) = edx_2
    void* eax_8
    void* ecx_2
    void* esp_14
    
    if (not(o))
        char temp7_1 = eax_5.b
        eax_5.b += (arg3 - 1).b
        c_1 = temp7_1 + (arg3 - 1).b u< temp7_1
    label_4aee09:
        char temp8_1 = (arg3 - 1).b
        char temp9_1 = *entry_ebx
        ecx_2.b = adc.b(temp8_1, temp9_1, c_1)
        __andps_xmmxud_memxud(arg7, *(ecx_2 + 0x64))
        eax_8 = eax_5 - 1
        *(esp_2 - 0x18) = esp_2 - 0x14
        *(esp_2 - 0x1c) = esp_2 - 0x18
        *(esp_2 - 0x20) = eax_8
        *(esp_2 - 0x24) = eax_8
        void* esp_18 = esp_2 - 0x24
        void* ecx_8
        void* edx_9
        
        if (adc.b(temp8_1, temp9_1, c_1) u< temp8_1 || (c_1 && adc.b(temp8_1, temp9_1, c_1) == temp8_1))
            *(ecx_2 + 0x618c0042) += edx_2.b
            ecx_8 = ecx_2 + 2
            *(esp_18 - 0xb77ffbf) += edx_2:1.b
            *(arg4 + arg5 + 0x4a) += ecx_8.b
            *(arg4 + arg5 + 0x35d8004a) += (edx_2 - 1).b
            edx_9 = edx_2 - 2
            *(arg5 + ecx_8) += ecx_8:1.b
        label_4aeea7:
            *(arg6 * 3 + 0x723c004a) += edx_9:1.b
            char temp13 = eax_8:1.b
            char temp14 = eax_8:1.b
            eax_8:1.b *= 2
            
            if (temp13 + temp14 u>= temp13)
                arg6[(eax_8 << 2) - 0x76bfffb6] += (entry_ebx - 1).b
                *(entry_ebx - 1 + (arg5 << 1) + 0x751c004a) += eax_8:1.b
                arg5[(eax_8 << 2) + 0x4a] += ecx_8.b
                *(arg4 + (arg5 << 1) + 0x7610004a) += ecx_8.b
                *(arg4 + (arg5 << 1) + 0x76d4004a) += (edx_9 - 4):1.b
                char temp17 = *(eax_8 - 0x33ffb587)
                *(eax_8 - 0x33ffb587) += eax_8:1.b
                
                if (temp17 s> neg.b(eax_8:1.b))
                    if ((eax_8 | 0x43644954) != 0)
                        jump(0x4aefa3)
                    
                    jump("tomHTTP")
                
                *(eax_8 * 5 - 0x7bafffb6) += ecx_8:1.b
                *(eax_8 - 0x1bffb57c) += (edx_9 - 6):1.b
                *(edx_9 - 6) |= 0xfc
                *(esp_18 - 4) = zx.d(cs)
                *(arg6 + ecx_8) += eax_8:1.b
                eax_8:1.b += eax_8.b
                undefined
            
            char* ecx_9
            int16_t es
            ecx_9, es = __les_gprz_memp(*(edx_9 - 1))
            void* edx_10
            edx_10:1.b = (edx_9 - 1):1.b + eax_8.b
            *(ecx_9 * 2) += (edx_10 - 1).b
            *(entry_ebx - 2 + ecx_9 + 0x4b) += (entry_ebx - 2):1.b
            eax_8:1.b += (edx_10 - 1).b
            *(edx_10 - 1)
            eax_8.b += 0x4b
            char temp16 = *0x43644954
            *0x43644954 += ecx_9.b
            
            if (temp16 == neg.b(ecx_9.b))
                if (temp16 == neg.b(ecx_9.b))
                    jump(&data_4aef8c)
                
                jump(0x4aef1d)
            
            *(eax_8 + 0x31) += (entry_ebx - 2):1.b
            *(arg4 + (arg5 << 3) + 0x4a) += (eax_8 + 2):1.b
            *(eax_8 + 2) += (eax_8 + 2).b
            void* eax_15
            eax_15.b = (eax_8 + 2).b | 0x41
            *(eax_15 + 0x1c004160) += eax_15:1.b
            
            if ((eax_15 | *ecx_9) s< 0)
                jump(&data_4af004:3)
            
            jump(0x4aefa6)
        
        if (eax_5 == 1)
            arg6 = *eax_8
            arg5 = *(eax_8 + 4)
            arg4 = *(eax_8 + 8)
            entry_ebx = *(eax_8 + 0x10)
            void* edx_7 = *(eax_8 + 0x14)
            void* eax_11 = *(eax_8 + 0x1c)
            esp_18 = eax_8 + 0x20
            void* ecx_7 = *(eax_8 + 0x18) + 1
            *(ecx_7 + 0x64b40041) += ecx_7.b
            ecx_8 = ecx_7 + 1
            *(eax_11 + 0x4c004af4) += ecx_8.b
            edx_9 = edx_7 - 1
            int32_t eax_12
            eax_12.b = (eax_11 ^ 0x3594004a).b + entry_ebx.b
            eax_8 = eax_12 ^ 0xe2c004a
            goto label_4aeea7
        
        char temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg6 + 0x6c), arg4.w)
        *(arg6 + 0x6c) = temp0_1
        *(esp_18 - 4) = 0x4aee
        esp_14 = esp_18 - 4
    else
        if (not(c_1))
            goto label_4aee09
        
        *(esp_2 - 0x18) = (o ? 1 : 0) << 0xb | (eax_2 - 1 s< 0 ? 1 : 0) << 7 | (eax_2 == 1 ? 1 : 0) << 6
            | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c_1 ? 1 : 0)
        int32_t eax_7 = __in_oeax_dx(edx_2.w, eflags)
        char temp11_1 = *arg6
        *arg6 += eax_7.b
        *(esp_2 - 0x1c) = zx.d(cs)
        *(esp_2 - 0x20) = esp_2 - 0x1c
        ecx_2 = arg3 - 2
        eax_8 = eax_7 - 1
        *(esp_2 - 0x24) = esp_2 - 0x20
        *(esp_2 - 0x28) = esp_2 - 0x24
        *(esp_2 - 0x2c) = eax_8
        *(esp_2 - 0x30) = edx_2 - 1
        esp_14 = esp_2 - 0x30
        
        if (add_overflow(eax_7, 0xffffffff))
            if (temp11_1 + eax_7.b u>= temp11_1)
                jump(0x4aee20)
            
            jump(&data_4aedac)
        
        edx_2 -= 2
        *eax_8 += eax_8.b
    
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += ecx_2:1.b
    __out_dx_oeax(edx_2.w, eax_8, eflags)
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    arg6[arg4 << 3] += (edx_2 - 1).b
    *(ecx_2 + eax_8) += eax_8.b
    *(edx_2 - 2 + (eax_8 << 3) + 0x6494004a) += (edx_2 - 2).b
    *eax_8 += eax_8.b
    *eax_8
    char* eax_9
    eax_9.b = __in_al_dx((edx_2 - 2).w, eflags)
    *esp_14
    *eax_9 += ecx_2.b + 2
    char* eax_10 = eax_9 ^ *eax_9
    eax_10.b ^= *eax_10
    char temp15 = *(fsbase + eax_10) ^ eax_10.b
    *(fsbase + eax_10) = temp15
    
    if (temp15 s< 0)
        jump(0x4aee92)
    
    jump(0x4aee62)
}
