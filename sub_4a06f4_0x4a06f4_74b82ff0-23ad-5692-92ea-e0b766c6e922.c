// ============================================================
// 函数名称: sub_4a06f4
// 虚拟地址: 0x4a06f4
// WARP GUID: 74b82ff0-23ad-5692-92ea-e0b766c6e922
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_40422c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a06f4(void* arg1, int32_t arg2, char* arg3, int32_t arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, uint32_t arg7[0x4] @ xmm0)
{
    // 第一条实际指令: *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    (arg1 + 1)[arg6 + 0x4a] += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, (arg2 - 1).w, eflags)
    *edi = temp0
    int32_t edx_1 = arg2 - 2
    *((arg1 + 1) * 2) += edx_1.b
    *(arg1 + 1) += (arg1 + 1).b
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, edx_1.w, eflags)
    *edi_1 = temp0_1
    char* eax
    eax.b = __in_al_dx(edx_1.w, eflags)
    void* eax_1
    eax_1:1.b = (&eax[1]):1.b + edx_1:1.b
    eax_1.b ^= *eax_1
    char* entry_ebx
    *entry_ebx += edx_1:1.b
    *(entry_ebx + arg5) += (eax_1 + 1).b
    *(eax_1 + 2) += arg3.b
    char* eax_4 = (eax_1 + 2) ^ *(eax_1 + 2)
    eax_4.b ^= *eax_4
    TEB* fsbase
    char temp2 = *(fsbase + eax_4) ^ eax_4.b
    *(fsbase + eax_4) = temp2
    void* eax_7
    
    if (temp2 s< 0)
        eax_7 = &eax_4[1]
    else
        eax_4[0xc] += arg3.b
        eax_4[1] += (&eax_4[1]).b
        void* eax_5
        eax_5.b = (&eax_4[1]).b | 0x41
        *eax_5 += arg3.b
        eax_5.b |= 0x41
        *(entry_ebx + arg3) += entry_ebx.b
        arg3 = &arg3[1]
        entry_ebx[arg4 + 0x40] += (edx_1 - 1):1.b
        *eax_5 += (edx_1 - 1):1.b
        char* eax_6 = eax_5 | 0xce0004a
        *eax_6 += arg3.b
        eax_7 = eax_6 | 0xaf8004a
        *(eax_7 + 0xc) += entry_ebx:1.b
        edx_1 -= 4
        entry_ebx[arg4 + 0x40] += edx_1:1.b
        entry_ebx[arg4 + 0x40] += edx_1:1.b
    
    *arg3 += edx_1.b
    void arg_4
    __return_addr = &arg_4
    void* const* esp_1 = &__return_addr
    void* ecx_1 = arg3
    void* eax_8
    int32_t edx_11
    int32_t edx_5
    
    if (arg3 != 0)
        *(entry_ebx + arg5) += eax_7.b
        *(eax_7 + 1) += ecx_1.b
        eax_8 = (eax_7 + 1) ^ *(eax_7 + 1)
        eax_8.b ^= *eax_8
        char temp4_1 = *(fsbase + eax_8) ^ eax_8.b
        *(fsbase + eax_8) = temp4_1
        
        if (temp4_1 s< 0)
            edx_11 = edx_1 - 1
            *arg5 += ecx_1.b
        else
            *(eax_8 + 0xc) += ecx_1.b
            edx_5 = edx_1 - 1
            *(eax_8 + 1) += (eax_8 + 1).b
            eax_7.b = (eax_8 + 1).b | 0x41
        label_4a0803:
            *eax_7 += ecx_1.b
            eax_7.b |= 0x41
            *(entry_ebx + ecx_1) += entry_ebx.b
            ecx_1 += 1
            *eax_7 += eax_7:1.b
            int16_t cs
            *(esp_1 - 4) = zx.d(cs)
            esp_1 -= 4
            *(edi_1 + ecx_1 + 0xce0004a) += entry_ebx:1.b
            *eax_7 += ecx_1.b
            eax_8 = eax_7 | 0xd34004a
            *(edi_1 + ecx_1 + 0xd74004a) += eax_8:1.b
            edx_11 = edx_5 - 4
            *(eax_8 + 0xe004a0f) += eax_8:1.b
    else
        void* var_4
        __builtin_strncpy(&var_4, "enti", 4)
        esp_1 = &var_4
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(ecx_1 + 0x74), &var_4)
        *(ecx_1 + 0x74) = temp0_3
        *(edi_1 + 0x6e)
        edx_5 = edx_1 - 1
        uint8_t temp5_1 = *edi_1
        *edi_1 += eax_7.b
        *(ecx_1 * 3 + 0x64) = adc.d(*(ecx_1 * 3 + 0x64), edx_5, temp5_1 + eax_7.b u< temp5_1)
        int32_t ebp_1
        void* temp6_1
        
        do
            temp6_1 = ecx_1
            ecx_1 += 1
            
            if (temp6_1 != 0xffffffff)
                *(ecx_1 + (eax_7 << 1)) += ecx_1.b
                goto label_4a0803
            
            *(esp_1 - 4) = 0x69746e65
            esp_1 -= 4
            int16_t temp0_4
            temp0_4, eflags = __arpl_memw_gpr16(*(ecx_1 + 0x74), esp_1.w)
            *(ecx_1 + 0x74) = temp0_4
            ebp_1 = *(edi_1 + 0x6e) * 0x4a0740
            ecx_1 -= 1
        while (temp6_1 != 0xffffffff && ecx_1 != 0)
        eax_8 = eax_7 + 1
        *eax_8 += eax_8.b
        *eax_8 += edx_5.b
        void* ecx_2 = ecx_1 - 1
        ecx_1 = ecx_2 + 1
        
        if (ecx_2 == 0xffffffff)
            *(esp_1 - 4) = 0x69746e65
            int32_t eflags_1
            int16_t temp0_5
            temp0_5, eflags_1 = __arpl_memw_gpr16(*(ecx_1 + 0x74), esp_1.w - 4)
            *(ecx_1 + 0x74) = temp0_5
            *(edi_1 + 0x6e)
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *(eax_8 + ecx_1) += ecx_1:1.b
            *(eax_8 + ecx_1 + 0x4a) += entry_ebx.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *arg5 += entry_ebx:1.b
            *(edx_5 - 2)
            *(edx_5 - 2) |= ecx_1.b
            *eax_8 = sbb.b(*eax_8, eax_8.b, false)
            *eax_8 += eax_8.b
            trap(0xd)
        
        *(ecx_1 + 0xfa4004a) += edx_5:1.b
        edx_11 = edx_5 - 1
        *(ebp_1 + ecx_1 + 0x4a) += edx_11:1.b
        *(eax_8 + 0xe004a0f) += eax_8:1.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *ecx_1 += eax_8.b
    *eax_8 += eax_8.b
    *(eax_8 + edx_11 + 0x140040) += entry_ebx:1.b
    char temp7 = *eax_8
    *eax_8 += eax_8.b
    int16_t ss
    *(esp_1 - 4) = zx.d(ss)
    *(esp_1 - 8) = esp_1 - 4
    int32_t edi_2 = *(esp_1 - 8)
    int32_t* esi = *(esp_1 - 4)
    void* ebp_3 = *esp_1
    char* ebx = esp_1[2]
    char* edx_12 = esp_1[3]
    void* ecx_3 = esp_1[4]
    char* eax_10 = esp_1[5]
    void* esp_10 = &esp_1[6]
    char* eax_14
    uint16_t* gsbase
    
    if (temp7 + eax_8.b u>= temp7)
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
    label_4a08b3:
        eax_10.b += eax_10:1.b
        *edx_12 |= ecx_3.b
    label_4a08b8:
        eax_10.b = eax_10.b
        *eax_10 += eax_10.b
        eax_10.b = *0xf4004988
        eax_10.b ^= *eax_10
        *ebx += edx_12:1.b
        *(ebx + esi) += (&eax_10[1]).b
        eax_10[2] += ecx_3.b
        eax_14 = &eax_10[2] ^ *(eax_10 + 2)
    else
        int16_t temp0_6
        temp0_6, eflags = __arpl_memw_gpr16(*(ecx_3 + 0x75), eax_10.w)
        *(ecx_3 + 0x75) = temp0_6
        
        if (edx_11 == 0xffffffff)
            goto label_4a08b3
        
        esi = __outsb(edx_12.w, *(gsbase + esi), esi, eflags)
        
        if (edx_11 == 0xffffffff)
            goto label_4a08b8
        
        int16_t temp0_7
        temp0_7, eflags = __arpl_memw_gpr16(*(ecx_3 + 0x74), esp_10.w)
        *(ecx_3 + 0x74) = temp0_7
        char temp11_1 = *edx_12 | ecx_3.b
        *edx_12 = temp11_1
        *esp_10
        *(esp_10 - 2) = zx.d(ss)
        *(esp_10 - 6) = esp_10 - 2
        bool cond:8_1 = edx_12 == 0xffffffff
        edi_2 = *(esp_10 - 6)
        esi = *(esp_10 - 2)
        ebp_3 = *(esp_10 + 2)
        ebx = *(esp_10 + 0xa)
        edx_12 = *(esp_10 + 0xe)
        ecx_3 = *(esp_10 + 0x12)
        void* eax_11 = *(esp_10 + 0x16)
        esp_10 += 0x1a
        
        if (temp11_1 u< 0)
            int32_t eflags_2
            int16_t temp0_8
            temp0_8, eflags_2 = __arpl_memw_gpr16(*(ecx_3 + 0x75), eax_11.w)
            *(ecx_3 + 0x75) = temp0_8
            
            if (cond:8_1)
                jump(0x4a08d2)
            
            jump("entication")
        
        eax_14:1.b = (eax_11 + 1):1.b + ebx:1.b
    
    eax_14.b ^= *eax_14
    char temp13 = *(fsbase + eax_14) ^ eax_14.b
    *(fsbase + eax_14) = temp13
    
    if (temp13 s< 0)
        eax_14[0xa] += ebx.b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[1] += (&eax_14[1]).b
        eax_14[0xa] += ebx.b
        eax_14[1] += ecx_3.b
        eax_14[1] += (&eax_14[1]).b
        char temp14 = (&eax_14[1]).b
        char* eax_17
        eax_17.b = (&eax_14[1]).b + ebx.b
        *eax_17 = adc.b(*eax_17, eax_17.b, temp14 + ebx.b u< temp14)
        trap(0xd)
    
    void* eax_15
    eax_15.b = (&eax_14[1]).b * 2
    *eax_15 ^= eax_15.b
    char temp15 = *(ebp_3 + 0x49)
    *(ebp_3 + 0x49) -= eax_15.b
    void* ecx_4 = ecx_3 + 1
    uint8_t* edi_3
    uint8_t temp0_9
    temp0_9, edi_3 = __insb(edi_2, edx_12.w, eflags)
    *edi_3 = temp0_9
    bool cond:7
    
    if (temp15 u< eax_15.b)
        char temp17_1 = *eax_15 ^ eax_15.b
        *eax_15 = temp17_1
        cond:7 = temp17_1 s< 0
    else
        int32_t edi_4 = *esp_10
        esi = *(esp_10 + 4)
        ebp_3 = *(esp_10 + 8)
        ebx = *(esp_10 + 0x10)
        edx_12 = *(esp_10 + 0x14)
        ecx_4 = *(esp_10 + 0x18)
        void* eax_16 = *(esp_10 + 0x1c)
        esp_10 += 0x20
        
        if (ecx_3 + 1 s< 0)
            *(gsbase + ebp_3 + edi_4 + 0x74)
            
            if (ecx_4 != 0xffffffff)
                undefined
            
            jump("henticationMetho")
        
        *(ebx + esi) += (eax_16 + 1).b
        *(eax_16 + 2) += ecx_4.b
        eax_15 = (eax_16 + 2) ^ *(eax_16 + 2)
        eax_15.b ^= *eax_15
        char temp18_1 = *(fsbase + eax_15) ^ eax_15.b
        *(fsbase + eax_15) = temp18_1
        cond:7 = temp18_1 s< 0
    
    if (not(cond:7))
        void* eax_20
        eax_20.b = (eax_15 + 1).b * 2
        char temp20_1 = *eax_20 ^ eax_20.b
        *eax_20 = temp20_1
        __andps_xmmxud_memxud(arg7, *(ecx_4 + 0x75))
        
        if (temp20_1 == 0)
            eax_20.b |= 9
            eax_20.b += ecx_4:1.b
            *esi <<= 1
            char temp1 = mods.dp.b(eax_20.w, ebx:1.b)
            eax_20.b = divs.dp.b(eax_20.w, ebx:1.b)
            eax_20:1.b = temp1
            *(eax_20 + 4) = ebx
            *(ebp_3 - 4)
            (*(*data_52fbf4 + 0x38))()
            jump(sub_4a0968+0xe9)
        
        int32_t eflags_3
        int16_t temp0_10
        temp0_10, eflags_3 =
            __arpl_memw_gpr16(*(ebp_3 + (edx_12 << 1) - 0x75), (*(ebx + 0x74)).w * 0x624f)
        *(ebp_3 + (edx_12 << 1) - 0x75) = temp0_10
        eax_20.b = __in_al_dx(edx_12.w, eflags_3)
        *(esp_10 - 0x119) = ebx
        esp_10 -= 0x119
        ecx_4 = nullptr
        *(ebp_3 - 8) = 0
        *(ebp_3 - 0x114) = 0
        *(ebp_3 - 4) = eax_20
    
    sub_40422c(*(ebp_3 - 4))
    *(esp_10 - 4) = ebp_3
    *(esp_10 - 8) = j_sub_4037f0
    *(esp_10 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_10 - 0xc
    
    if (data_52fbf4 == 0)
        int32_t edx_15
        edx_15.b = 1
        data_52fbf4 = sub_4030a0(ecx_4, edx_15)
    
    *(ebp_3 - 4)
    
    if ((*(*data_52fbf4 + 0x50))() s>= 0)
        jump(sub_4a0968+0x7b)
    
    jump(sub_4a0968+0x5b)
}
