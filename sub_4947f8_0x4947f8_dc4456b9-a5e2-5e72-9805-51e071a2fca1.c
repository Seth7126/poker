// ============================================================
// 函数名称: sub_4947f8
// 虚拟地址: 0x4947f8
// WARP GUID: dc4456b9-a5e2-5e72-9805-51e071a2fca1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4947f8(char* arg1, uint16_t arg2, int32_t arg3, uint16_t* arg4 @ esi, int32_t arg5 @ edi, long double arg6 @ st0, char arg7, char arg8)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    void* entry_ebx
    *(arg1 - 1 + ((arg3 - 1) << 1) + 0x49) += entry_ebx:1.b
    *((arg1 - 1) * 2 + 0x47340000) += (arg1 - 1).b
    arg7 += arg2.b
    void* eax_1
    eax_1:1.b = arg1:1.b + (arg3 - 2):1.b
    void arg_4
    void* esp = &arg_4
    int32_t* ecx_2 = arg3 - 1
    *eax_1 += ecx_2.b
    char* eax_2 = eax_1 ^ *eax_1
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    
    if (temp1 s>= 0)
        *(__return_addr + (arg4 << 1) + 0x49) += entry_ebx.b
        eax_2[1] += (&eax_2[1]).b
        void* eax_3
        eax_3.b = (&eax_2[1]).b | 0x41
        *(eax_3 + 0x1c004160) += eax_3:1.b
        *ecx_2
        eax_2.b = adc.b((eax_3 | *ecx_2).b, 0x72, false)
        eax_2[0x41] += eax_2.b
        ecx_2[0x189f0010].b += eax_2.b
        arg8 += ecx_2:1.b
        ecx_2 += 1
        *(ecx_2 + 0x64b40041) += ecx_2.b
    
    void* ecx_6 = ecx_2 + 1
    char temp2 = eax_2:1.b
    eax_2:1.b += entry_ebx:1.b
    
    if (temp2 == neg.b(entry_ebx:1.b))
        goto label_4948b8
    
    char temp5_1 = eax_2.b
    eax_2.b += ecx_6:1.b
    
    if (temp5_1 + ecx_6:1.b u>= temp5_1)
        goto label_4948bc
    
    char temp6_1 = eax_2.b
    eax_2.b += entry_ebx.b
    
    if (temp6_1 == neg.b(entry_ebx.b))
    label_4948c0:
        *eax_2 = &eax_2[*eax_2]
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2[0x80000000] += eax_2.b
        eax_2.b += *eax_2
        int16_t es
        *(esp - 4) = zx.d(es)
        ecx_6 += 1
    else
        *(__return_addr + (arg4 << 1) + 0x540d0049) += ecx_6.b
        int32_t eflags
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg5, arg2, eflags)
        *edi = temp0_1
        *(__return_addr + 0x74)
        int32_t esp_1 = *(__return_addr + 0x74) * 0xffffff8b
        bool c_2 = unimplemented  {imul esp, dword [ebp+0x74], 0xffffff8b}
        eax_2[0x7004948] = rlc.b(eax_2[0x7004948], 0xd, c_2)
        *(esp_1 - 4) = esp_1
        void* ebx_1 = entry_ebx + 2
        uint8_t* edi_1
        uint8_t temp0_2
        temp0_2, edi_1 = __insb(edi, arg2, eflags)
        *edi_1 = temp0_2
        int32_t esp_2 = *(__return_addr + 0x74) * 0x40
        eax_2:1.b = (eax_2 - 1):1.b + (ecx_6 - 1).b
        ecx_6 -= 2
        edi_1[1] += ecx_6.b
        *eax_2 += ecx_6.b
        *(esp_2 - 4) = ebx_1
        esp = esp_2 - 4
        int32_t eflags_1
        int16_t temp0_3
        temp0_3, eflags_1 = __arpl_memw_gpr16(*(ebx_1 + 0x74), __return_addr.w)
        *(ebx_1 + 0x74) = temp0_3
        entry_ebx = ebx_1 + 1
        arg4 = __outsd(arg2, *arg4, arg4, eflags_1)
        int16_t* edi_3
        int16_t temp0_4
        temp0_4, edi_3 = __insd(&edi_1[1], arg2, eflags_1)
        *edi_3 = temp0_4
        
        if (add_overflow(ebx_1, 1))
            goto label_4948c0
        
        char temp9_1 = *eax_2
        *eax_2 += eax_2.b
        *eax_2 = adc.b(*eax_2, eax_2.b, temp9_1 + eax_2.b u< temp9_1)
    label_4948b8:
        eax_2.b = 0
        entry_ebx:1.b *= 2
    label_4948bc:
        *(ecx_6 + 0x49)
        *ecx_6 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 = *eax_2
        eax_2[0x41060002] += eax_2.b
    
    int32_t eflags_2
    int16_t temp0_5
    temp0_5, eflags_2 = __arpl_memw_gpr16(*(ecx_6 + (__return_addr << 1) + 0x76), arg4.w)
    *(ecx_6 + (__return_addr << 1) + 0x76) = temp0_5
    *eax_2 += eax_2.b
    undefined
}
