// ============================================================
// 函数名称: sub_43ea4c
// 虚拟地址: 0x43ea4c
// WARP GUID: b604faef-49df-54e1-924f-463f6d5dbfd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43eb31
// [被调用的父级函数]: 无
// ============================================================

int80_t __convention("regparm")sub_43ea4c(void* arg1, void* arg2, void* arg3, int32_t arg4 @ ebp, int32_t* arg5 @ esi, void** arg6 @ edi, long double arg7 @ st0, char arg8)
{
    // 第一条实际指令: bool c
    bool c
    arg1.b = sbb.b(arg1.b, 0xb, c)
    *(arg1 + 0x4c0042d4) += arg1.b
    char* eax = *arg5
    void* esi = &arg5[1]
    *eax += eax.b
    *(arg2 + 1)
    void* const __return_addr_1 = __return_addr
    void* ecx
    ecx:1.b = 0x42
    arg8 += 0x42
    *(ecx + 0x64b40042) += (ecx + 1).b
    char* entry_ebx
    *entry_ebx += entry_ebx.b
    *(__return_addr_1 - 0x1fffbce2) += ((ecx + 1).w + 1):1.b
    void* eax_1
    eax_1.b = (__return_addr_1 & *entry_ebx).b | 0x23
    *(eax_1 + 0x19) += (&entry_ebx[1]):1.b
    *(eax_1 - 0xfffbce7) += (&entry_ebx[2]).b
    int16_t __return_addr_2
    __return_addr = zx.d(__return_addr_2)
    void* esp = &__return_addr:1
    void* ebx_2 = &entry_ebx[3]
    *(ebx_2 + (arg4 << 2)) += eax_1.b
    *eax_1 += ((ecx + 1).w + 1).b
    *arg6 = eax_1
    void* edi = &arg6[1]
    *(esi + ((arg2 + 3) << 3) + 0x42) += ((ecx + 1).w + 1).b
    *(eax_1 - 0x2a) += ebx_2:1.b
    char var_492bffbd[0x492bffbd]
    var_492bffbd[arg4 << 2] += eax_1.b
    *(esi * 5 + 0x42) += eax_1.b
    *(eax_1 - 0x47) += ((ecx + 1).w + 1).b
    void* edx_5 = arg2 + 6
    int32_t eflags
    void* edx_11
    
    do
        *(eax_1 + (edi << 2)) += ((ecx + 1).w + 1).b
        *(eax_1 - 0xe) += ((ecx + 1).w + 1):1.b
        eax_1.b += ebx_2:1.b
        eax_1.b = __salc(eflags)
        *(edi + edx_5 + 3 + 0x43) += eax_1.b
        eax_1.b *= 2
        *esp
        *(ebx_2 + 1 + edx_5 + 3 + 0x43) += eax_1.b
        *(edi + edx_5 + 3 + 0x22180043) += eax_1:1.b
        eax_1:1.b += ((ecx + 1).w + 1):1.b
        *(eax_1 * 2 - 0x60)
        void* eax_3 = __in_oeax_dx((edx_5 + 3).w, eflags)
        *(ebx_2 + 0x45) += (ebx_2 + 1):1.b
        *(eax_3 - 0x14) += (ebx_2 + 1).b
        eax_3.b *= 2
        *(eax_3 * 2 - 0xc)
        void* eax_4
        eax_4.b = __in_al_dx((edx_5 + 5).w, eflags)
        edx_11 = edx_5 + 6
        *(esp + 3 + (arg4 << 3) + 0x18e40042) += (ebx_2 + 1).b
        char temp4_1 = *(eax_4 - 0x5fffbd0a)
        *(eax_4 - 0x5fffbd0a) += ((ecx + 1).w + 1):1.b
        int32_t eax_5 = adc.d(eax_4, 0x18500043, temp4_1 + ((ecx + 1).w + 1):1.b u< temp4_1)
        ebx_2 += 3
        *(esp + 3 + ebx_2) += ((ecx + 1).w + 1).b
        *(esi + ebx_2 + 0x20f00044) += ebx_2:1.b
        *edx_11 += eax_5.b
        *(eax_5 * 2 + 0x23e0b010) += eax_5.b
        eax_5.b += ((ecx + 1).w + 1):1.b
        eax_1 = eax_5 & *(eax_5 * 2 + 0xa)
        *(esp + 2) = esp + 6
        *(esp - 2) = ebx_2
        esp -= 2
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(edx_11 + 0x6f), esi.w)
        *(edx_11 + 0x6f) = temp0_3
        uint8_t* edi_1
        uint8_t temp0_4
        temp0_4, edi_1 = __insb(edi, edx_11.w, eflags)
        *edi_1 = temp0_4
        uint8_t temp0_5
        temp0_5, edi = __insb(edi_1, edx_11.w, eflags)
        *edi = temp0_5
        edx_5 = edx_11 + 1
        esi = __outsd(edx_5.w, *esi, esi, eflags)
    while (edx_11 + 1 s< 0)
    *(ebx_2 + (arg4 << 3)) += (eax_1 + 1):1.b
    *edi += (eax_1 + 1).b
    edx_5.b |= *(ebx_2 + 1 + (edx_5 << 1) + 0x63)
    
    if (edx_5.b u>= 0)
        uint8_t* edi_2
        uint8_t temp0_6
        temp0_6, edi_2 = __insb(edi, edx_5.w, eflags)
        *edi_2 = temp0_6
        uint8_t* edi_3
        uint8_t temp0_7
        temp0_7, edi_3 = __insb(edi_2, edx_5.w, eflags)
        *edi_3 = temp0_7
        __outsd(edx_5.w + 1, *esi, esi, eflags)
        
        if (edx_5 + 1 s< 0)
            jump(sub_43eb38+0x3d)
        
        return sub_43eb31() __tailcall
    
    *(eax_1 + 1) += (eax_1 + 1).b
    char* eax_7 = (eax_1 + 1) | 0x75410a00
    
    if (eax_7 == 0)
        if (eax_7 s>= 0)
            jump(sub_43ebb1+0xcf)
        
        jump("e`rB")
    
    *(esp - 4) = ebx_2 + 1
    int32_t eflags_1
    int16_t temp0_8
    temp0_8, eflags_1 = __arpl_memw_gpr16(*(edx_5 + 0x6f), esi.w)
    *(edx_5 + 0x6f) = temp0_8
    uint8_t* edi_4
    uint8_t temp0_9
    temp0_9, edi_4 = __insb(edi, edx_5.w, eflags_1)
    *edi_4 = temp0_9
    uint8_t* edi_5
    uint8_t temp0_10
    temp0_10, edi_5 = __insb(edi_4, edx_5.w, eflags_1)
    *edi_5 = temp0_10
    *eax_7 += edx_5.b
    *(&eax_7[1] * 2) += ((ecx + 1).w + 1).b
    undefined
}
