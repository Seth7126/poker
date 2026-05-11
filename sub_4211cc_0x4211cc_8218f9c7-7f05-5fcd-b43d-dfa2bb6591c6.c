// ============================================================
// 函数名称: sub_4211cc
// 虚拟地址: 0x4211cc
// WARP GUID: 8218f9c7-7f05-5fcd-b43d-dfa2bb6591c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4211cc(void* arg1, void* arg2, void* arg3, int32_t arg4 @ ebp, char* arg5 @ esi, char** arg6 @ edi, char arg7)
{
    // 第一条实际指令: bool c
    bool c
    arg1.b = sbb.b(arg1.b, 0xb, c)
    int32_t entry_ebx
    *(entry_ebx + arg6 + 0x3d500042) += (arg3 + 1).b
    *(arg1 + 0x580042ac) += entry_ebx:1.b
    void* ecx
    ecx:1.b = 0x42
    arg7 += 0x42
    *(ecx + 0x64b40042) += (ecx + 1).b
    *(arg1 - 0x7bffbdc8) += entry_ebx.b
    char* eax
    int16_t ds
    eax, ds = __lds_gprz_memp(*(arg2 + 1))
    eax[0xffffffc6] += (arg2 + 1).b
    eax[0xffffffb2] += eax:1.b
    eax:1.b += eax.b
    eax[0xffffffba] += (arg2 + 3):1.b
    *(entry_ebx + (arg4 << 2)) += eax.b
    *eax += 0x42
    *arg6 = eax
    void* edi = &arg6[1]
    arg5[((arg2 + 6) << 3) + 0x42] += 0x42
    eax[0xffffffd6] += entry_ebx:1.b
    char var_492bffbe[0x492bffbe]
    var_492bffbe[arg4 << 2] += eax.b
    *(arg5 * 5 + 0x42) += eax.b
    eax[0xffffffb9] += 0x42
    eax[edi << 2] += 0x42
    *eax += eax:1.b
    unimplemented  {enter 0x42, 0xf8}
    int32_t eflags
    eax.b = __salc(eflags)
    *eax += (arg2 + 0xb):1.b
    arg5[arg4 << 2] += eax:1.b
    eax[0xffffffbc] += entry_ebx:1.b
    eax[0x400423a] += 0x42
    *(arg2 + 0xe)
    *(arg2 + 0xe + (eax << 1))
    *arg5 += eax.b
    *0xbc94003e = 0xbc940042
    int32_t edi_1 = *0xbc94003d
    int32_t esi = *0xbc940041
    void* ebp = *0xbc940045
    int32_t ebx = *0xbc94004d
    int32_t edx_14 = *0xbc940051
    int32_t ecx_2 = *0xbc940055
    int32_t eax_1 = *0xbc940059
    __bound_gprv_mema32(0xbc94005d, *(ebp + 0x6c))
    *0xbc940059 = eax_1
    *0xbc940055 = ecx_2
    *0xbc940051 = edx_14
    *0xbc94004d = ebx
    *0xbc940049 = 0xbc94004d
    *0xbc940045 = ebp
    *0xbc940041 = esi
    *0xbc94003d = edi_1
    *0xbc94003b = zx.d(*0xbc94003d)
    *0xbc940037 = 0xbc94003b
    int32_t edi_2 = *0xbc940036
    int32_t* esi_1 = *0xbc94003a
    void* ebp_1 = *0xbc94003e
    int32_t ebx_1 = *0xbc940046
    *0xbc94004a
    uint64_t* ecx_3 = *0xbc94004e
    char* eax_2 = *0xbc940052
    __bound_gprv_mema32(0xbc940056, *(ebp_1 + 0x6c))
    void* edx_16
    int16_t es_1
    edx_16, es_1 = __les_gprz_memp(*ecx_3)
    eax_2[0x11] += (edx_16 + 1).b
    void* edx_18 = edx_16 + 2
    char temp2 = *0x74530800
    *0x74530800 += ecx_3:1.b
    int32_t ebx_2 = ebx_1 + 1
    
    if (ebx_1 != 0xffffffff)
        uint8_t* edi_3
        uint8_t temp0_1
        temp0_1, edi_3 = __insb(edi_2, edx_18.w, eflags)
        *edi_3 = temp0_1
        
        if (temp2 + ecx_3:1.b u>= temp2)
            eax_2.b -= 1
        else
            *((ebp_1 << 1) + &data_4b0042) += eax_2:1.b
            ebx_2:1.b *= 2
            char* eax_3 = *esi_1
            void* esi_2 = &esi_1[1]
            edx_18 += 1
            *ecx_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 = *eax_3
            *eax_3 += eax_3.b
            *eax_3 |= eax_3.b
            esi_1 = __outsb(edx_18.w, *esi_2, esi_2, eflags)
            ecx_3:1.b = sbb.b(ecx_3:1.b, (&eax_3[0x67696c41]):1.b, eax_3 u>= 0x989693bf)
            eax_2 = &eax_3[0x67696c42]
            *(ecx_3 + eax_2) += ecx_3:1.b
        
        char temp6 = ebx_2:1.b
        char temp7 = ebx_2:1.b
        ebx_2:1.b *= 2
        
        if (add_overflow(temp6, temp7))
            jump(sub_4212a7+0x3c)
        
        return sub_4212a7(eax_2, edx_18, ecx_3, ebp_1, esi_1, edi_3) __tailcall
    
    *eax_2 = es_1
    edx_18:1.b += ebx_2:1.b
    *eax_2 = &eax_2[*eax_2]
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    eax_2[1] += eax_2.b
    char* eax_6 = eax_2 | *eax_2
    char temp4 = *(ecx_3 + 0x75) | eax_6.b
    *(ecx_3 + 0x75) = temp4
    
    if (temp4 != 0)
        *0xbc940052 = ebx_2
        *(edx_18 + 0x65)
        *eax_6 += eax_6.b
        undefined
    
    ebx_2:1.b *= 2
    TEB* fsbase
    *(fsbase + eax_6) += eax_6.b
    *ecx_3 += 1
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 = *eax_6
    char temp5 = eax_6[0x430b000f]
    eax_6[0x430b000f] += eax_6.b
    uint16_t* esi_3 = __outsd(edx_18.w, *esi_1, esi_1, eflags)
    __outsb(edx_18.w, *esi_3, esi_3, eflags)
    
    if (temp5 + eax_6.b u< temp5)
        jump("raints")
    
    *(eax_6 * 2) += ecx_3.b
    undefined
}
