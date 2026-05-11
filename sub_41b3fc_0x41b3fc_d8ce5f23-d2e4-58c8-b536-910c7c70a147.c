// ============================================================
// 函数名称: sub_41b3fc
// 虚拟地址: 0x41b3fc
// WARP GUID: d8ce5f23-d2e4-58c8-b536-910c7c70a147
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4030a0, sub_41b614, sub_405ae8, sub_403e1c
// [被调用的父级函数]: sub_41b614, sub_41b738
// ============================================================

int32_t __convention("regparm")sub_41b3fc(void* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, void* arg5 @ esi, int32_t arg6 @ edi, void* arg7, void* const arg8, char* arg9, char* arg10, char* arg11)
{
    // 第一条实际指令: int16_t cs
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    *(arg5 + (arg1 << 1) + 0x69)
    char* edx = arg2 | *(arg5 + (arg1 << 1) + 0x69)
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, edx.w, eflags)
    *edi = temp0
    __outsd(edx.w, *(arg5 + 1), arg5 + 1, eflags)
    void* const __return_addr_1 = __return_addr
    arg4 = arg7
    char* entry_ebx = arg8
    char* ecx = arg10
    char* eax = arg11
    void arg_1c
    uint32_t* esp_1 = &arg_1c
    
    if (arg5 == 0xffffffff)
        *eax = adc.b(*eax, eax.b, false)
        *eax |= eax.b
        char temp6_1 = *eax
        *eax += eax.b
        
        if (add_overflow(temp6_1, eax.b))
            char temp8 = *arg9
            *arg9 += entry_ebx:1.b
            arg11 = &eax[1]
            *(arg9 + ecx - 0x78) =
                sbb.d(*(arg9 + ecx - 0x78), __return_addr_1, temp8 + entry_ebx:1.b u< temp8)
            bool c_1 = unimplemented  {sbb dword [edx+ecx-0x78], esi}
            arg10 = &eax[1]
            *(entry_ebx - 0xf77430) = sbb.d(*(entry_ebx - 0xf77430), ecx, c_1)
            bool c_2 = unimplemented  {sbb dword [ebx-0xf77430], ecx}
            arg9 = ecx
            entry_ebx.b = adc.b(entry_ebx.b, (&eax[1]).b, c_2)
            arg8 = __return_addr_1
            return (*(*(eax + 1) + 0x54))()
    else
        *eax += eax.b
        *arg9 += eax.b
        *eax += eax.b
        *(eax + arg9 + 0x40040) += entry_ebx:1.b
        *eax += eax.b
        esp_1 = 0x8004010
        *eax += eax.b
        *(arg4 - 0x4b8fffc0) += ecx.b
    
    int32_t* ecx_1 = &ecx[1]
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
    *eax += eax.b
    eax[0x100041b4] += eax.b
    *eax += eax.b
    entry_ebx[(arg4 << 3) + 0x40] += entry_ebx.b
    eax:1.b += arg9:1.b
    eax.b ^= *eax
    *entry_ebx += arg9:1.b
    *(entry_ebx + __return_addr_1) += (&eax[1]).b
    eax[2] += ecx_1.b
    char* eax_3 = &eax[2] ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp11_1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp11_1
    
    if (temp11_1 s< 0)
        goto label_41b49a
    
    arg1.b = (&eax_3[1]).b + ecx_1.b
    ecx_1:1.b = 0x41
    *(arg4 + arg1 + 0x41) += ecx_1.b
    *(arg1 - 0x3ffbef9) += ecx_1.b
    eax_3 = arg1 + *ecx_1
    
    if (arg1 + *ecx_1 s>= 0)
        ecx_1 += 1
        *eax_3 += arg9.b
        *(esp_1 - 4) = esp_1
        esp_1 -= 4
    
    char* esi_1 = __return_addr_1 + 1
    *(arg4 + 0x46)
    
    if (__return_addr_1 != 0xffffffff)
        __return_addr_1 = *(entry_ebx + 0x74) * 0x5500408d
        arg4 = esp_1 - 1
        ecx_1 = nullptr
        *(esp_1 - 5) = 0
        esp_1 -= 5
    label_41b49a:
        *(esp_1 - 4) = ecx_1
        *(esp_1 - 8) = ecx_1
        *(esp_1 - 0xc) = ecx_1
        *(esp_1 - 0x10) = entry_ebx
        *(esp_1 - 0x14) = __return_addr_1
        void* esp_7 = esp_1 - 0x14
        
        if (arg9.b != 0)
            esp_7 -= 0x10
            eax_3 = sub_4033d0(ecx_1, arg9)
        
        esi_1 = eax_3
        *(esp_7 - 4) = arg4
        *(esp_7 - 8) = j_sub_4037f0
        *(esp_7 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_7 - 0xc
        sub_4030a0(ecx_1, 0)
        *(esp_7 - 4) = 0
        *(esp_7 - 8) = &data_417940
        sub_405ae8(data_530514, arg4 - 4)
        void* ebp_1 = sub_41b614(esi_1, &data_41b5a0, *(arg4 - 4))
        *(esp_7 - 0xc) = 0
        *(esp_7 - 0x10) = &data_417940
        esp_1 = esp_7 - 0x10
        sub_405ae8(data_530078, ebp_1 - 8)
        ecx_1 = *(ebp_1 - 8)
    
    void* ebp_3 = sub_41b614(esi_1, &data_41b5ac, ecx_1)
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0x417bbc
    sub_405ae8(data_530074, ebp_3 - 0xc)
    void* ebp_4 = sub_41b614(esi_1, &data_41b5b8, *(ebp_3 - 0xc))
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = 0x417a7c
    sub_405ae8(data_530060, ebp_4 - 0x10)
    void* ebp_5 = sub_41b614(esi_1, &data_41b5c4, *(ebp_4 - 0x10))
    *(esp_1 - 8)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0x10)
    *(esp_1 - 8) = sub_41b578
    return sub_403e1c(ebp_5 - 0x10, 4)
}
