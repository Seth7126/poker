// ============================================================
// 函数名称: sub_4b207d
// 虚拟地址: 0x4b207d
// WARP GUID: 8a046445-8c58-507c-a69f-d74c0e2d9fd5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4b207d(char* arg1, int32_t arg2, int32_t arg3 @ ebp, uint16_t* arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    void* eax
    eax.b = __in_al_dx(arg2.w, eflags)
    int32_t edx = arg2 + 1
    arg1[arg3 + 0x18e4004b] += edx:1.b
    char temp1 = *(eax - 0x5fffbd0a)
    *(eax - 0x5fffbd0a) += arg1:1.b
    void** eax_1 = adc.d(eax, 0x18500043, temp1 + arg1:1.b u< temp1)
    void* entry_ebx
    *(entry_ebx + 2) += eax_1.b
    *((arg5 << 2) + 0xffb6bd15) += edx.b
    *(entry_ebx + 2) -= arg1
    eax_1.b += 0x2e
    void* ebx_2 = entry_ebx + 1
    char temp2 = *arg1
    *arg1 += arg1.b
    bool c_1 = temp2 + arg1.b u< temp2
    *0xfc004b25 = 0xfc004b29
    *0xfc004b21 = 0xfc004b25
    int32_t* esp_1 = 0xfc004b21
    int32_t eflags_2
    void* ecx
    void* esp_6
    uint16_t* esi
    
    if (not(c_1))
        while (true)
            int16_t temp0
            temp0, eflags_2 = __arpl_memw_gpr16(*(ebx_2 + 0x42), arg3.w)
            *(ebx_2 + 0x42) = temp0
            int32_t edi = *esp_1
            esi = esp_1[1]
            arg3 = esp_1[2]
            ebx_2 = esp_1[4]
            edx = esp_1[5]
            ecx = esp_1[6]
            eax_1 = esp_1[7]
            
            if (not(c_1))
                break
            
            *(esi * 5 + 0x42) += eax_1.b
            *(eax_1 - 0x47) += ecx.b
            eax_1[edi].b += ecx.b
            *(eax_1 - 0xe) += ecx:1.b
            eax_1.b += ebx_2:1.b
            eax_1.b = __salc(eflags_2)
            *(edi + edx + 5 + 0x43) += eax_1.b
            eax_1.b *= 2
            esp_1[8].w
            esp_1 += 0x22
            ebx_2 += 1
            *(ebx_2 + edx + 5 + 0x43) += eax_1.b
            *(edi + edx + 5 - 0x2387ffbd) += eax_1:1.b
            char temp5_1 = *eax_1
            *eax_1 += eax_1:1.b
            c_1 = temp5_1 + eax_1:1.b u< temp5_1
            
            if (ecx == 1)
                *(eax_1 + 0x400042ed) += eax_1:1.b
                *ebx_2 -= (ecx - 1).b
                *esp_1
                int16_t eax_11
                eax_11.b = __in_al_dx((edx + 5).w + 1, eflags_2)
                eax_11:1.b += ((edx + 5).w + 1).b + 1
                *ebx_2 -= (ecx - 1).b
                trap(0xd)
        
        eax_1[0x1c012c8].b
        eax_1[0x1c012c8].b s>>= 9
        bool c_2 = unimplemented  {sar byte [eax+0x7004b20], 0x9}
        esp_1[7] = &esp_1[8]
        esp_1[6] = &esp_1[7]
        
        if (c_2)
            void* temp8_1 = *eax_1
            *eax_1 += eax_1
            esp_1[5] = eax_1
            esp_6 = &esp_1[5]
            *ebx_2 = sbb.d(*ebx_2, eax_1, temp8_1 + eax_1 u< temp8_1)
            goto label_4b2126
        
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(ebx_2 + 0x42), arg3.w)
        *(ebx_2 + 0x42) = temp0_1
        esp_1[8]
        esp_1[0xa]
        
        if (c_2)
            jump(0x4b20a4)
        
        return sub_4b20c4(esp_1[0xd], esp_1[0xb], esp_1[0xc], esp_1[7], esp_1[6]) __tailcall
    
    *eax_1 += eax_1.b
    eax_1.b |= *eax_1
    *0xfc004b21
    esp_6 = 0xfc004b23
    ecx = &arg1[1]
    esi = __outsb(edx.w, *arg4, arg4, eflags)
    int16_t temp0_2
    temp0_2, eflags_2 = __arpl_memw_gpr16(*(eax_1 + 0x6f), arg3.w)
    *(eax_1 + 0x6f) = temp0_2
    char* eax_5
    
    if (eax_1.b u< 0)
        eax_5 = *eax_1
        ebx_2:1.b *= 2
        *eax_5 = &eax_5[*eax_5]
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
    else
        eax_1.b ^= 0x7e
        edx += 1
        *(ecx + eax_1) += ecx:1.b
        char temp3_1 = ebx_2:1.b
        char temp4_1 = ebx_2:1.b
        ebx_2:1.b *= 2
        *ebx_2 = sbb.d(*ebx_2, eax_1, temp3_1 + temp4_1 u< temp3_1)
    label_4b2126:
        *eax_1 += eax_1
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        eax_5 = eax_1 | *eax_1 | *(edx + 0x6f)
        
        if (eax_5 u>= 0)
            if (eax_5 u< 0)
                jump(0x4b2193)
            
            return sub_4b213c(eax_5, edx, ecx) __tailcall
    
    int16_t cs
    *(esp_6 - 4) = zx.d(cs)
    char temp7 = *eax_5
    *eax_5 += ecx.b
    bool c_5 = temp7 + ecx.b u< temp7
    
    if (c_5)
        *ecx = adc.b(*ecx, 0, c_5)
        char* eax_9 = eax_5 | *(ebx_2 + 0x6f)
        __outsb(edx.w, *esi, esi, eflags_2)
        
        if (eax_9 u< 0)
            if (eax_9 u< 0)
                jump(sub_4b21f8+0x78)
            
            jump(sub_4b21f8+0x17)
        
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 = *eax_9
        char temp10 = eax_9[0x4f0b0015]
        eax_9[0x4f0b0015] += eax_9.b
        
        if (temp10 + eax_9.b u< temp10)
            jump(sub_4b227d+0x7c)
        
        jump(sub_4b227d+0x13)
    
    void* ebp_2 = *(esi + 0x64) * 0x4270f0 - 1
    *eax_5 += eax_5.b
    int32_t* eax_7
    char* ecx_4
    char* edx_4
    eax_7, edx_4, ecx_4 = (*eax_5)()
    edx_4:1.b += (ebx_2 - 1):1.b
    *eax_7 += eax_7
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    char temp9 = *eax_7
    *eax_7 += eax_7.b
    int0_t tr
    *eax_7 = __str_memw(tr)
    
    if (temp9 + eax_7.b u>= temp9)
        __outsd(edx_4.w, *esi, esi, eflags_2)
        char* gsbase
        *(gsbase + eax_7) += edx_4.b
        *((eax_7 + 1) * 2) += ecx_4.b
        undefined
    
    *eax_7 += eax_7
    char temp11 = *eax_7
    *eax_7 += eax_7.b
    eax_7.b = adc.b(eax_7.b, *eax_7, temp11 + eax_7.b u< temp11)
    ecx_4[(ebp_2 << 1) + 0x6e] |= ecx_4.b
    *(esp_6 - 6) = ebx_2 - 1
    *(edx_4 + 0x65)
    *edx_4 |= eax_7.b
    void* ebx_4
    ebx_4:1.b = (ebx_2 - 1):1.b * 2
    *(ebx_4 + (ecx_4 << 1))
    *ecx_4 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *edx_4 = *edx_4
    *eax_7
    *eax_7 += eax_7.b
    *eax_7
    *(ebp_2 + 0x61)
    
    if (&ecx_4[*(ebp_2 + 0x61)] s< 0)
        jump(0x4b22a9)
    
    jump(0x4b2255)
}
