// ============================================================
// 函数名称: sub_4a07dd
// 虚拟地址: 0x4a07dd
// WARP GUID: 46d23874-2995-5b2b-8666-e586fcbd3f0f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_40422c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a07dd(char* arg1, int32_t arg2, char* arg3, char* arg4 @ esi, int32_t arg5 @ edi, uint32_t arg6[0x4] @ xmm0)
{
    // 第一条实际指令: int16_t es
    int16_t es
    uint32_t var_4 = zx.d(es)
    uint32_t* esp_1 = &var_4
    arg1:1.b += (arg2 - 1):1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += (arg2 - 1):1.b
    *(entry_ebx + arg4) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp2 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp2
    int32_t edx_5
    
    if (temp2 s< 0)
        edx_5 = arg2 - 2
        *arg4 += arg3.b
    else
        eax_2[0xc] += arg3.b
        eax_2[1] += (&eax_2[1]).b
        void* eax_3
        eax_3.b = (&eax_2[1]).b | 0x41
        *eax_3 += arg3.b
        eax_3.b |= 0x41
        *(entry_ebx + arg3) += entry_ebx.b
        arg3 = &arg3[1]
        *eax_3 += eax_3:1.b
        int16_t cs
        uint32_t var_8 = zx.d(cs)
        esp_1 = &var_8
        arg3[arg5 + 0xce0004a] += entry_ebx:1.b
        *eax_3 += arg3.b
        eax_2 = eax_3 | 0xd34004a
        arg3[arg5 + 0xd74004a] += eax_2:1.b
        edx_5 = arg2 - 6
        eax_2[0xe004a0f] += eax_2:1.b
    
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *arg3 += eax_2.b
    *eax_2 += eax_2.b
    eax_2[edx_5 + 0x140040] += entry_ebx:1.b
    char temp3 = *eax_2
    *eax_2 += eax_2.b
    int16_t ss
    *(esp_1 - 4) = zx.d(ss)
    *(esp_1 - 8) = esp_1 - 4
    int32_t edi = *(esp_1 - 8)
    int32_t* esi = *(esp_1 - 4)
    void* ebp = *esp_1
    char* ebx = esp_1[2]
    char* edx_6 = esp_1[3]
    void* ecx = esp_1[4]
    char* eax_4 = esp_1[5]
    void* esp_9 = &esp_1[6]
    int32_t eflags
    char* eax_8
    uint16_t* gsbase
    
    if (temp3 + eax_2.b u>= temp3)
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
    label_4a08b3:
        eax_4.b += eax_4:1.b
        *edx_6 |= ecx.b
    label_4a08b8:
        eax_4.b = eax_4.b
        *eax_4 += eax_4.b
        eax_4.b = *0xf4004988
        eax_4.b ^= *eax_4
        *ebx += edx_6:1.b
        *(ebx + esi) += (&eax_4[1]).b
        eax_4[2] += ecx.b
        eax_8 = &eax_4[2] ^ *(eax_4 + 2)
    else
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(ecx + 0x75), eax_4.w)
        *(ecx + 0x75) = temp0_1
        
        if (edx_5 == 0xffffffff)
            goto label_4a08b3
        
        esi = __outsb(edx_6.w, *(gsbase + esi), esi, eflags)
        
        if (edx_5 == 0xffffffff)
            goto label_4a08b8
        
        int16_t temp0_2
        temp0_2, eflags = __arpl_memw_gpr16(*(ecx + 0x74), esp_9.w)
        *(ecx + 0x74) = temp0_2
        char temp5_1 = *edx_6 | ecx.b
        *edx_6 = temp5_1
        *esp_9
        *(esp_9 - 2) = zx.d(ss)
        *(esp_9 - 6) = esp_9 - 2
        bool cond:7_1 = edx_6 == 0xffffffff
        edi = *(esp_9 - 6)
        esi = *(esp_9 - 2)
        ebp = *(esp_9 + 2)
        ebx = *(esp_9 + 0xa)
        edx_6 = *(esp_9 + 0xe)
        ecx = *(esp_9 + 0x12)
        void* eax_5 = *(esp_9 + 0x16)
        esp_9 += 0x1a
        
        if (temp5_1 u< 0)
            int32_t eflags_1
            int16_t temp0_3
            temp0_3, eflags_1 = __arpl_memw_gpr16(*(ecx + 0x75), eax_5.w)
            *(ecx + 0x75) = temp0_3
            
            if (cond:7_1)
                jump(0x4a08d2)
            
            jump("entication")
        
        eax_8:1.b = (eax_5 + 1):1.b + ebx:1.b
    
    eax_8.b ^= *eax_8
    char temp7 = *(fsbase + eax_8) ^ eax_8.b
    *(fsbase + eax_8) = temp7
    
    if (temp7 s< 0)
        eax_8[0xa] += ebx.b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[1] += (&eax_8[1]).b
        eax_8[0xa] += ebx.b
        eax_8[1] += ecx.b
        eax_8[1] += (&eax_8[1]).b
        char temp8 = (&eax_8[1]).b
        char* eax_11
        eax_11.b = (&eax_8[1]).b + ebx.b
        *eax_11 = adc.b(*eax_11, eax_11.b, temp8 + ebx.b u< temp8)
        trap(0xd)
    
    void* eax_9
    eax_9.b = (&eax_8[1]).b * 2
    *eax_9 ^= eax_9.b
    char temp9 = *(ebp + 0x49)
    *(ebp + 0x49) -= eax_9.b
    void* ecx_1 = ecx + 1
    uint8_t* edi_1
    uint8_t temp0_4
    temp0_4, edi_1 = __insb(edi, edx_6.w, eflags)
    *edi_1 = temp0_4
    bool cond:6
    
    if (temp9 u< eax_9.b)
        char temp11_1 = *eax_9 ^ eax_9.b
        *eax_9 = temp11_1
        cond:6 = temp11_1 s< 0
    else
        int32_t edi_2 = *esp_9
        esi = *(esp_9 + 4)
        ebp = *(esp_9 + 8)
        ebx = *(esp_9 + 0x10)
        edx_6 = *(esp_9 + 0x14)
        ecx_1 = *(esp_9 + 0x18)
        void* eax_10 = *(esp_9 + 0x1c)
        esp_9 += 0x20
        
        if (ecx + 1 s< 0)
            *(gsbase + ebp + edi_2 + 0x74)
            
            if (ecx_1 != 0xffffffff)
                undefined
            
            jump("henticationMetho")
        
        *(ebx + esi) += (eax_10 + 1).b
        *(eax_10 + 2) += ecx_1.b
        eax_9 = (eax_10 + 2) ^ *(eax_10 + 2)
        eax_9.b ^= *eax_9
        char temp12_1 = *(fsbase + eax_9) ^ eax_9.b
        *(fsbase + eax_9) = temp12_1
        cond:6 = temp12_1 s< 0
    
    if (not(cond:6))
        void* eax_14
        eax_14.b = (eax_9 + 1).b * 2
        char temp14_1 = *eax_14 ^ eax_14.b
        *eax_14 = temp14_1
        __andps_xmmxud_memxud(arg6, *(ecx_1 + 0x75))
        
        if (temp14_1 == 0)
            eax_14.b |= 9
            eax_14.b += ecx_1:1.b
            *esi <<= 1
            char temp1 = mods.dp.b(eax_14.w, ebx:1.b)
            eax_14.b = divs.dp.b(eax_14.w, ebx:1.b)
            eax_14:1.b = temp1
            *(eax_14 + 4) = ebx
            *(ebp - 4)
            (*(*data_52fbf4 + 0x38))()
            jump(sub_4a0968+0xe9)
        
        int32_t eflags_2
        int16_t temp0_5
        temp0_5, eflags_2 = __arpl_memw_gpr16(*(ebp + (edx_6 << 1) - 0x75), (*(ebx + 0x74)).w * 0x624f)
        *(ebp + (edx_6 << 1) - 0x75) = temp0_5
        eax_14.b = __in_al_dx(edx_6.w, eflags_2)
        *(esp_9 - 0x119) = ebx
        esp_9 -= 0x119
        ecx_1 = nullptr
        *(ebp - 8) = 0
        *(ebp - 0x114) = 0
        *(ebp - 4) = eax_14
    
    sub_40422c(*(ebp - 4))
    *(esp_9 - 4) = ebp
    *(esp_9 - 8) = j_sub_4037f0
    *(esp_9 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_9 - 0xc
    
    if (data_52fbf4 == 0)
        int32_t edx_9
        edx_9.b = 1
        data_52fbf4 = sub_4030a0(ecx_1, edx_9)
    
    *(ebp - 4)
    
    if ((*(*data_52fbf4 + 0x50))() s>= 0)
        jump(sub_4a0968+0x7b)
    
    jump(sub_4a0968+0x5b)
}
