// ============================================================
// 函数名称: sub_52dab4
// 虚拟地址: 0x52dab4
// WARP GUID: c7f0ff3a-5867-59d2-a39b-f58cdb9182db
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_52de46, _start
// ============================================================

int32_t __convention("regparm")sub_52dab4(int32_t* arg1, char* arg2, void* arg3, void* arg4 @ ebp, int16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: char* eax_5 = *arg1
    char* eax_5 = *arg1
    *eax_5 += eax_5.b
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg6, arg2.w, eflags)
    *edi = temp0
    eax_5[1] += arg3.b
    int16_t* edi_1
    int16_t temp0_1
    temp0_1, edi_1 = __insd(edi, arg2.w, eflags)
    *edi_1 = temp0_1
    void* eax_1
    eax_1:1.b = (&eax_5[2]):1.b + arg2.b
    *0x380052d6 = 0x40
    arg2[(arg4 << 1) + 0x40] += arg3:1.b
    char temp1 = *(eax_1 + 0x58004079)
    *(eax_1 + 0x58004079) += arg3.b
    char* entry_ebx
    bool d
    
    if (temp1 + arg3.b s>= 0)
    label_52db13:
        *(arg4 * 3 + 0x41) += arg3:1.b
        *((arg4 << 1) + 0x36ac5317) += arg2:1.b
        eax_1.b += entry_ebx.b
        d = true
        arg3 += 2
    else
        *(eax_1 + 0x5000420a) += eax_1.b
        eax_1.b |= *arg2
        char temp2_1 = *(arg3 + 0x40)
        *(arg3 + 0x40) = temp2_1
        
        if (temp2_1 s< 0)
            *(entry_ebx * 9 + 0x40) += arg3.b
            *(entry_ebx * 9) += entry_ebx.b
            
            while (true)
                int16_t eax_2
                eax_2:1.b = (eax_1.w + 1):1.b + arg2:1.b
                eax_2.b += *arg2
                int16_t es_1
                eax_1, es_1 = __les_gprz_memp(*arg2)
                arg2 = &arg2[1]
                char temp3_1 = *(eax_1 + 0x7000407c)
                *(eax_1 + 0x7000407c) += eax_1:1.b
                
                if (temp3_1 s< neg.b(eax_1:1.b))
                    goto label_52db3b
                
                arg2[entry_ebx << 3] += eax_1.b
                char temp5_1 = (eax_1 + 1):1.b
                char temp6_1 = (eax_1 + 1).b
                eax_1:1.b = (eax_1 + 1):1.b + (eax_1 + 1).b
                unimplemented  {fadd dword [eax]}
                
                if (temp5_1 + temp6_1 s< 0 == add_overflow(temp5_1, temp6_1))
                    edi_1[entry_ebx * 4 + 0x20].b += arg3.b
                    *(eax_1 + 1) += arg2.b
                    eax_1.b = __in_oeax_immb(0x40, eflags).b * 2
                    eax_1.b = __in_al_immb(0x40, eflags)
                    break
                
                int16_t top = top - 1
                unimplemented  {fild st0, dword [eax]}
                eax_1.b = sbb.b(eax_1.b, 0xdb, temp5_1 + temp6_1 u< temp5_1)
            
            goto label_52db13
    
    eax_1.b += eax_1:1.b
    *entry_ebx -= 0x50
    *entry_ebx -= 0x40
    eax_1.b |= *arg2
    eax_1.b |= *arg2
    TEB* fsbase
    *(fsbase + arg2) += eax_1
    eax_1.b ^= 1
    arg2 = &arg2[1]
    label_52db3b:
    *(eax_1 - 0x1c) += eax_1:1.b
    eax_1.b += arg2:1.b
    
    if (arg3 != 0)
        *eax_1 += arg3.b
        *(eax_1 + 0x5000435f) += (&entry_ebx[2]):1.b
        uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
        *eax_1 += eax_1:1.b
        __outsb(arg2.w, *esi, esi, eflags)
        *eax_1 += eax_1:1.b
        eax_1.b += (&arg2[1]):1.b
        *(eax_1 + 0x6b) += (&entry_ebx[4]).b
        entry_ebx[4 + (arg4 << 1)] += (&entry_ebx[4]).b
        *((arg4 << 1) + 0x6cd40042) += eax_1.b
        char temp4 = eax_1:1.b
        eax_1:1.b += (&entry_ebx[4]):1.b
        
        if (temp4 + (&entry_ebx[4]):1.b u< temp4)
            *eax_1
        
        breakpoint
    
    *eax_1 += (&entry_ebx[1]):1.b
    eax_1.b |= 0x42
    *(arg4 - 0x5ac7ffbc) += arg3.b
    arg5[-0x2cd1ffde].b += arg3.b
    arg5[0x22].b += (arg2.w + 1).b
    *arg5 += eax_1:1.b
    *arg5 += (&entry_ebx[1]).b
    eax_1:1.b += arg3:1.b
    void* esi_2
    void* edi_2
    
    if (d)
        *edi_1 = *arg5
        edi_2 = edi_1 - 4
        esi_2 = arg5 - 4
    else
        *edi_1 = *arg5
        edi_2 = &edi_1[2]
        esi_2 = &arg5[2]
    
    eax_1:1.b *= 2
    void* esi_3
    void* edi_3
    
    if (d)
        *edi_2 = *esi_2
        edi_3 = edi_2 - 4
        esi_3 = esi_2 - 4
    else
        *edi_2 = *esi_2
        edi_3 = edi_2 + 4
        esi_3 = esi_2 + 4
    
    *(arg4 - 0x593bffbc) += (arg2.w + 1):1.b
    *(esi_3 - 0x5903ffbc) += (arg2.w + 1).b
    eax_1:1.b += arg3.b
    *esi_3 - *edi_3
    void* edi_4
    
    if (d)
        edi_4 = edi_3 - 1
    else
        edi_4 = edi_3 + 1
    
    *((eax_1 << 3) + 0x38005323) += (&entry_ebx[1]):1.b
    *((eax_1 << 3) + 0x38005323) += arg3.b
    *((eax_1 << 3) + 0x38005323) += eax_1.b
    *(0x380052df + (eax_1 << 3)) += (arg2.w + 1).b
    *(edi_4 + (arg3 << 3) - 0x30a7ffbc) += (arg2.w + 1):1.b
    *eax_1 += eax_1.b
    *(eax_1 * 2 - 0x30) = rol.b(*(eax_1 * 2 - 0x30), 1)
    undefined
}
