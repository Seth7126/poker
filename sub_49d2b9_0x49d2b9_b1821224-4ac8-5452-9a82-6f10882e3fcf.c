// ============================================================
// 函数名称: sub_49d2b9
// 虚拟地址: 0x49d2b9
// WARP GUID: b1821224-4ac8-5452-9a82-6f10882e3fcf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ebc, sub_403e4c, sub_408b84, sub_403e1c, sub_49df54
// [被调用的父级函数]: sub_49d2a3
// ============================================================

int32_t __convention("regparm")sub_49d2b9(int32_t* arg1, int32_t arg2, char* arg3, uint16_t* arg4 @ esi, char* arg5, void* arg6, int32_t* arg7, int32_t arg8, int32_t* arg9, char* arg10, int32_t arg11, int32_t* arg12, int32_t arg13, int32_t* arg14, char* arg15)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
    __outsb(arg2.w, *esi, esi, eflags)
    *arg1 += arg1
    *arg1 += arg1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    char temp1 = *(arg2 * 9 + 0x6d0b0049)
    *(arg2 * 9 + 0x6d0b0049) += arg3:1.b
    bool c = temp1 + arg3:1.b u< temp1
    char* esi_2 = arg5
    int32_t* ebx = arg7
    int32_t edx = arg8
    int32_t* ecx = arg9
    char* eax = arg10
    uint16_t* arg_20
    int32_t* esp_1 = &arg_20
    void* ebp_1 = arg6 + 1
    bool z = arg6 == 0xffffffff
    bool s = arg6 + 1 s< 0
    char* eax_4
    TEB* fsbase
    
    if (not(s))
        if (add_overflow(arg6, 1))
            goto label_49d34c
        
        *(__return_addr + 0x6e)
        ebp_1 = *(__return_addr + 0x6e) * 0x53616d07
        bool o_1 = unimplemented  {imul ebp, dword [edi+0x6e], 0x53616d07}
        
        if (o_1)
            if (not(s))
                goto label_49d3a5
            
            goto label_49d34f
        
        esi_2 = *(eax + (edx << 2) + 0x30) * 0x49d3
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        eax[0xffffffd3] += eax.b
        ecx -= 1
        *eax += edx.b
        *eax += eax.b
        eax:1.b += eax.b
        void* eax_1
        eax_1:1.b = (&eax[1]):1.b + edx:1.b
        eax_1.b ^= *eax_1
        *ebx += edx:1.b
        *(ebx + esi_2) += (eax_1 + 1).b
        *(eax_1 + 2) += ecx.b
        eax_4 = (eax_1 + 2) ^ *(eax_1 + 2)
        eax_4.b ^= *eax_4
        char temp9_1 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp9_1
        
        if (temp9_1 s>= 0)
            void* eax_5
            eax_5.b = (&eax_4[1]).b * 2
            *eax_5 ^= eax_5.b
            trap(0xd)
        
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        eax_4.b = *0xc0049d3
        goto label_49d379
    
    eax.b = adc.b(eax.b, 0xeb, c)
    eax.b += (ecx - 1):1.b
    bool c_1 = eax u< *(ecx - 1)
    int32_t temp6_1 = *((ecx - 1) * 3 + 0x64)
    char* edx_1 = adc.d(edx, temp6_1, c_1)
    c = adc.d(edx, temp6_1, c_1) u< edx || (c_1 && adc.d(edx, temp6_1, c_1) == edx)
    uint16_t* esi_3 = arg_20
    ebx = arg12
    edx = arg13
    ecx = arg14
    eax = arg15
    void arg_3c
    esp_1 = &arg_3c
    ebp_1 = arg11 - 1
    z = arg11 == 1
    int16_t* edi_2
    int16_t temp0_1
    temp0_1, edi_2 = __insd(edx_1, edx.w, eflags)
    *edi_2 = temp0_1
    esi_2 = __outsd(edx.w, *esi_3, esi_3, eflags)
    label_49d34c:
    
    if (c)
        goto label_49d3c7
    
    *(esp_1 - 4) = ebx
    esp_1 -= 4
    label_49d34f:
    int32_t ecx_2
    int32_t edx_2
    void* esp_5
    
    if (z)
        *ecx += edx.b
        ecx:1.b += *esi_2
    label_49d3c7:
        *(eax * 2)
    label_49d3ca:
        *eax += eax.b
        *eax += eax.b
        eax.b += ebx.b
        *ecx
        *ecx = ror.d(*ecx, ecx.b)
        bool c_2 = unimplemented  {ror dword [ecx], cl}
        *ebx = adc.d(*ebx, eax, c_2)
        char* cs
        *(cs + ecx) ^= edx:1.b
        eax.b = eax.b
        *eax += eax.b
        *eax += eax.b
        *(ebp_1 - 0x74aaffc0) += ecx.b
        eax.b = __in_al_dx(edx.w, eflags)
        *0x4800400c = 0
        *0x48004008 = 0
        *0x48004004 = ebp_1
        *0x48004000 = j_sub_4037f0
        *0x48003ffc = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = 0x48003ffc
        *0x48003ff8 = 1
        *0x48003ff4 = ebp_1 - 4
        ecx.b = 1
        ecx_2 = sub_49df54(ecx, *(*(ebp_1 + 8) - 8), *(*(ebp_1 + 8) - 4))
        esp_5 = 0x48003ffc
        *(ebp_1 - 4)
        edx_2 = 1
    else
        int32_t edi_3 = *esp_1
        esi_2 = esp_1[1]
        ebp_1 = esp_1[2]
        ebx = esp_1[4]
        edx = esp_1[5]
        ecx = esp_1[6]
        esp_1[7]
        esp_1 = &esp_1[8]
        int16_t* edi_4
        int16_t temp0_2
        temp0_2, edi_4 = __insd(edi_3, edx.w, eflags)
        *edi_4 = temp0_2
        eax_4.b = *0x49d3
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        eax_4[0xc0049d3] += eax_4:1.b
    label_49d379:
        *eax_4 += eax_4.b
        eax_4[0xf4004988] += eax_4:1.b
        eax_4.b ^= *eax_4
        *ebx += edx:1.b
        *(ebx + esi_2) += (&eax_4[1]).b
        eax_4[2] += ecx.b
        eax = &eax_4[2] ^ *(eax_4 + 2)
        eax.b ^= *eax
        char temp12_1 = *(fsbase + eax) ^ eax.b
        *(fsbase + eax) = temp12_1
        
        if (temp12_1 s< 0)
            goto label_49d3ca
        
        void* eax_8
        eax_8.b = (&eax[1]).b * 2
        *eax_8 ^= eax_8.b
        *esp_1
        esp_1 += 2
    label_49d3a5:
        *esp_1
        esp_1[4]
        edx_2 = esp_1[5]
        ecx_2 = esp_1[6]
        esp_1[7]
        esp_5 = &esp_1[8]
        ebp_1 = *(esp_1[2] + 0x64) * 0x65526f54
        
        if (esi_2 != 0xffffffff)
            int32_t gsbase
            uint16_t* esi_5 = *(gsbase + esp_1[1] + 0x65) * 0x656d6954
            int16_t edx_3 = (*esp_5).w
            uint16_t* esi_6 = __outsd(edx_3, *esi_5, esi_5, eflags)
            uint16_t* esi_7 = __outsb(edx_3, *esi_6, esi_6, eflags)
            uint16_t* esi_8 = __outsb(edx_3, *esi_7, esi_7, eflags)
            __outsw(edx_3, *esi_8, esi_8, eflags)
            undefined
    
    *(*(ebp_1 + 8) - 0xa) = sub_408ebc(ecx_2, edx_2)
    sub_408b84(**(*(ebp_1 + 8) - 4), ebp_1 - 8)
    sub_403e4c(*(*(ebp_1 + 8) - 4), *(ebp_1 - 8))
    *(esp_5 + 8)
    fsbase->NtTib.ExceptionList = *esp_5
    *(esp_5 + 8) = sub_49d46e
    return sub_403e1c(ebp_1 - 8, 2)
}
