// ============================================================
// 函数名称: sub_4362e0
// 虚拟地址: 0x4362e0
// WARP GUID: 997aa189-2878-585e-aa51-798a9c122bbc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4367cc, sub_403420, sub_416620, sub_416128
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_4362e0(void* arg1, uint16_t arg2, void* arg3, void* arg4 @ ebp, int16_t* arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: long double result = fconvert.t(*(arg4 + 0x43)) - arg7
    long double result = fconvert.t(*(arg4 + 0x43)) - arg7
    void* entry_ebx
    arg1:1.b += entry_ebx:1.b
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg6, arg2, eflags)
    *edi = temp0
    int32_t* ebx = entry_ebx + 1
    char temp1 = *0x73754354
    *0x73754354 += arg3.b
    void* ebx_3
    void* esp
    bool p
    bool a
    bool z
    bool s
    bool d
    char* eax_1
    char* eax_5
    void* ecx
    char* ecx_1
    
    if (temp1 == neg.b(arg3.b))
        eax_5 = arg1 + 1
        *(eax_5 + arg5 + 0x40) += eax_5:1.b
        eax_5[0x30] += ebx:1.b
    label_436366:
        eax_1 = &eax_5[1]
        *0x65380041 += ebx:1.b
        ecx_1 = arg3 + 1
    label_43636f:
        eax_1[0x65] += arg2:1.b
        ecx = &ecx_1[1]
    label_436373:
        eax_1:1.b += eax_1.b
        eax_1[0xc8004165] += ebx.b
        eax_1:1.b += arg2:1.b
        eax_1[0xd0004165] += (ecx + 3).b
        eax_1.b += arg2:1.b
        *(esp - 4) = 0x69040043
        ebx_3 = ebx + 1
        *eax_1 += ebx_3.b
        int32_t eax_6 = *ebx_3 * sub_43692c
        p = unimplemented  {inc eax}
        a = unimplemented  {inc eax}
        z = eax_6 == 0xffffffff
        s = eax_6 + 1 s< 0
        *(esp - 8) = 0x7c004369
        esp = *ebx_3 * sub_436990
    else
        int16_t temp0_1
        temp0_1, edi = __insd(edi, arg2, eflags)
        *edi = temp0_1
        ecx = arg3 + 1
        int16_t temp0_2
        temp0_2, eflags = __arpl_memw_gpr16(*(ecx + (arg4 << 1) + 0x6f), arg5.w)
        *(ecx + (arg4 << 1) + 0x6f) = temp0_2
        arg5 = __outsb(arg2, *arg5, arg5, eflags)
        d = false
        __bound_gprv_mema32(arg1, *ebx)
        esp = &__return_addr:2
        eax_1 = arg1 | 0x73754354
        
        if (eax_1 == 0)
            goto label_436373
        
        int16_t temp0_3
        temp0_3, edi = __insd(edi, arg2, eflags)
        *edi = temp0_3
        ecx_1 = ecx + 1
        int16_t temp0_4
        temp0_4, eflags = __arpl_memw_gpr16(*(ecx_1 + (arg4 << 1) + 0x6f), arg5.w)
        *(ecx_1 + (arg4 << 1) + 0x6f) = temp0_4
        arg5 = __outsb(arg2, *arg5, arg5, eflags)
        
        if (ecx + 1 s< 0)
            goto label_43636f
        
        *ecx_1 += eax_1.b
        *(ebx + 2) += eax_1.b
        *eax_1 += ecx_1.b
        arg3 = &ecx_1[1]
        int32_t eflags_1
        int16_t temp0_5
        temp0_5, eflags_1 = __arpl_memw_gpr16(arg5[arg4 + 0x26], arg5.w)
        arg5[arg4 + 0x26] = temp0_5
        arg5 = *(ebx + 0x76) * 0x636c0000
        ebx += 3
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        char temp5_1 = eax_1:1.b
        eax_1:1.b += arg3.b
        int16_t temp0_6
        temp0_6, eflags = __arpl_memw_gpr16(*ebx, eax_1.w)
        *ebx = temp0_6
        *eax_1 = sbb.b(*eax_1, eax_1.b, temp5_1 + arg3.b u< temp5_1)
        char temp6_1 = *eax_1
        *eax_1 += eax_1.b
        eax_1.b = sbb.b(eax_1.b, 0xf9, temp6_1 + eax_1.b u< temp6_1)
        void* eax_2
        eax_2:1.b = (&eax_1[1]):1.b + arg2:1.b
        eax_2.b ^= *eax_2
        *ebx += arg2:1.b
        *(ebx + arg5) += (eax_2 + 1).b
        *(eax_2 + 2) += arg3.b
        eax_5 = (eax_2 + 2) ^ *(eax_2 + 2)
        d = false
        eax_5.b ^= *eax_5
        TEB* fsbase
        char temp7_1 = *(fsbase + eax_5) ^ eax_5.b
        *(fsbase + eax_5) = temp7_1
        
        if (temp7_1 s>= 0)
            goto label_436366
        
        *(arg3 + (arg4 << 1)) += arg3:1.b
        eax_5[0x69] += eax_5.b
        *(arg3 + (arg4 << 1) + 0x43) += arg2.b
        eax_5[0x69] += arg3:1.b
        ebx_3 = &ebx[1]
        *(arg3 + (arg4 << 1) + 0x43) += ebx_3:1.b
        char temp8_1 = eax_5[0x94004369]
        eax_5[0x94004369] += arg2.b
        p = unimplemented  {add byte [eax-0x6bffbc97], dl}
        a = unimplemented  {add byte [eax-0x6bffbc97], dl}
        z = temp8_1 == neg.b(arg2.b)
        s = temp8_1 + arg2.b s< 0
    *ebx_3
    bool c_3 = unimplemented  {imul eax, dword [ebx], 0x436998}
    bool o = unimplemented  {imul eax, dword [ebx], 0x436998}
    *(esp - 4) = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c_3 ? 1 : 0)
    *ebx_3
    *edi = *arg5
    void* esi = arg5 + 1
    *ebx_3
    int32_t eax_10
    eax_10.b = *esi
    void* esi_1 = esi + 1
    void* eax_11 = *ebx_3 * 0x6341540b
    
    if (z)
        *(ebx_3 + eax_11 - 0x50) += arg2:1.b
        return result
    
    uint16_t* esi_2 = __outsd(arg2, *esi_1, esi_1, eflags)
    void* esi_3 = __outsb(arg2, *esi_2, esi_2, eflags)
    *(esi_3 + 0x6b)
    eax_11:1.b s>>= 1
    *(ebx_3 - 0x740f7426) -= 1
    
    if (eax_11 != 0)
        sub_4367cc(eax_11, esi_3 + 1)
    
    void* edx_1
    edx_1.b = ebx_3.b & 0xfc
    sub_416620(esi_3 + 1, edx_1)
    
    if (ebx_3.b s> 0)
        sub_403420(esi_3 + 1)
    
    *(esp - 6)
    *(esp - 2)
    return result
}
