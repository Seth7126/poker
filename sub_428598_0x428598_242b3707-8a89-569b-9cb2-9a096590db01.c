// ============================================================
// 函数名称: sub_428598
// 虚拟地址: 0x428598
// WARP GUID: 242b3707-8a89-569b-9cb2-9a096590db01
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_428598(void* arg1, void* arg2, void* arg3, int32_t arg4 @ ebp, int32_t* arg5 @ esi, void** arg6 @ edi, long double arg7 @ st0, char arg8)
{
    // 第一条实际指令: bool c
    bool c
    arg1.b = sbb.b(arg1.b, 0xb, c)
    *(arg1 + 0x4c0042d4) += arg1.b
    char* eax = *arg5
    void* esi = &arg5[1]
    *eax += eax.b
    long double result = arg7 + fconvert.t(*(arg2 + 1))
    void* ecx
    ecx:1.b = 0x42
    arg8 += 0x42
    *(ecx + 0x64b40042) += (ecx + 1).b
    *(__return_addr + 0x2a) += (arg2 + 1):1.b
    *(__return_addr - 0x1fffbce2) += (ecx + 2):1.b
    void* eax_2
    void* entry_ebx
    eax_2.b = (__return_addr & *(entry_ebx + 1)).b | 0x23
    *(eax_2 + 0x19) += (entry_ebx + 2):1.b
    *(eax_2 - 0xfffbce7) += (entry_ebx + 3).b
    int16_t __return_addr_1
    __return_addr = zx.d(__return_addr_1)
    *(entry_ebx + 4 + (arg4 << 2)) += eax_2.b
    *eax_2 += (ecx + 2).b
    *arg6 = eax_2
    void* edi = &arg6[1]
    *(esi + ((arg2 + 3) << 3) + 0x42) += (ecx + 2).b
    *(eax_2 - 0x2a) += (entry_ebx + 4):1.b
    char var_492bffbe[0x492bffbe]
    var_492bffbe[arg4 << 2] += eax_2.b
    *(esi * 5 + 0x42) += eax_2.b
    *(eax_2 - 0x47) += (ecx + 2).b
    *(eax_2 + (edi << 2)) += (ecx + 2).b
    *(eax_2 - 0xe) += (ecx + 2):1.b
    eax_2.b += (entry_ebx + 4):1.b
    int32_t eflags
    eax_2.b = __salc(eflags)
    *(edi + arg2 + 9 + 0x43) += eax_2.b
    eax_2.b *= 2
    *(entry_ebx + 5 + arg2 + 9 + 0x43) += eax_2.b
    *(edi + arg2 + 9 - 0x2387ffbd) += eax_2:1.b
    *eax_2 += eax_2:1.b
    void* ecx_3 = ecx + 1
    
    if (ecx_3 == 0)
        *(eax_2 - 0x27ffbd13) += eax_2:1.b
        __in_al_dx((arg2 + 0xa).w, eflags)
        undefined
    
    *(arg2 + 0xa) += (arg2 + 0xa).b
    eax_2.b = 0x14
    void* eax_4
    eax_4.b = sbb.b((eax_2 - *(entry_ebx + 5)).b, 0x2b, eax_2 u< *(entry_ebx + 5))
    void* ebx_5 = entry_ebx + 6
    char arg_540b0045[0xd890000]
    arg_540b0045[arg4] += eax_4:1.b
    *(esi + 0x74)
    uint16_t ebp = (*(esi + 0x74)).w * 0x6957
    bool c_2 = unimplemented  {imul ebp, dword [esi+0x74], 0x646e6957}
    uint16_t* esi_1 = __outsd((arg2 + 0xa).w, *esi, esi, eflags)
    
    if (eax_4 == 1 || c_2)
        char temp0_2 = *(arg2 + 0xa)
        *(arg2 + 0xa) = (eax_4 - 1).b
        void* eax_5
        eax_5.b = temp0_2
        char* edx_11 = (arg2 + 0xa) | *(eax_5 + (ecx_3 << 1) + 0x69)
        uint16_t* esi_2 = __outsb(edx_11.w, *esi_1, esi_1, eflags)
        
        if (edx_11 != 0)
            ebp = (*(esi_2 + 0x64)).w * 0x776f
            edx_11 = &edx_11[1]
            *eax_5 += ebx_5.b
            *edx_11
            *eax_5 |= eax_5
            char temp5_1 = *(ebx_5 + 0x6f)
            *(ebx_5 + 0x6f) |= eax_5.b
            bool p_1 = unimplemented  {or byte [ebx+0x6f], al}
            bool a_1 = undefined
            bool z_1 = (temp5_1 | eax_5.b) == 0
            uint16_t* esi_3 = __outsb(edx_11.w, *esi_2, esi_2, eflags)
            
            if (z_1)
                int16_t gs
                ecx_3 = gs
                eax_5:1.b = ((temp5_1 | eax_5.b) s< 0 ? 1 : 0) << 7 | (z_1 ? 1 : 0) << 6
                    | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2
                ebx_5.b = 0
                *(ebx_5 - 0x74af7340) += eax_5.b
            label_428716:
                *(ebx_5 + 0x4870840) += ecx_3.b
                eax_5.b &= 0xc3
                __return_addr = *(*(eax_5 - 0x74) + 0xc)
                return result
            
            esi_2 = __outsd(edx_11.w, *esi_3, esi_3, eflags)
            uint8_t* edi_1
            uint8_t temp0_3
            temp0_3, edi_1 = __insb(edi, edx_11.w, eflags)
            *edi_1 = temp0_3
            *(ebx_5 + 0x4286ecc0) += ecx_3.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            eax_5:1.b += ecx_3:1.b
            char temp0_4 = *edx_11
            *edx_11 = eax_5.b
            eax_5.b = temp0_4
            eax_5.b = 0
            *eax_5 = *eax_5
            result - fconvert.t(*eax_5)
            char* eax_6
            eax_6:1.b = (eax_5 + 1):1.b + edx_11:1.b
            eax_6.b ^= *eax_6
            *ebx_5 += edx_11:1.b
            *(ebx_5 + esi_2) += (&eax_6[1]).b
            eax_6[2] += ecx_3.b
            eax_5 = &eax_6[2] ^ *(eax_6 + 2)
            goto label_4286dd
        
        eax_5:1.b += ebx_5:1.b
    label_4286dd:
        eax_5.b ^= *eax_5
        TEB* fsbase
        char temp6_1 = *(fsbase + eax_5) ^ eax_5.b
        *(fsbase + eax_5) = temp6_1
        
        if (temp6_1 s< 0)
            goto label_428716
        
        eax_5.b = (eax_5 + 1).b * 2
        *eax_5 ^= eax_5.b
        void arg_73
        *(&arg_73 + (eax_5 << 1)) |= edx_11
        int32_t eflags_1
        int16_t temp0_5
        temp0_5, eflags_1 = __arpl_memw_gpr16(*(ebx_5 + 0x5a), ebp)
        *(ebx_5 + 0x5a) = temp0_5
        uint16_t* esi_4 = __outsd(edx_11.w, *esi_2, esi_2, eflags_1)
        __outsb(edx_11.w, *esi_4, esi_4, eflags_1)
    
    breakpoint
}
