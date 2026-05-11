// ============================================================
// 函数名称: sub_467493
// 虚拟地址: 0x467493
// WARP GUID: 3f638481-3fc4-52a3-9199-cae286a96335
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_467493(void* arg1 @ ebp, char* arg2 @ esi, char* arg3 @ edi, void* arg4, char* arg5, int32_t arg6, char* arg7)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    void* eax_6
    char* ecx_1
    int32_t edx_2
    eax_6, edx_2, ecx_1 = (*(eax + 0xe004674))()
    bool c
    int32_t* edx = adc.d(edx_2, *(arg3 + (ecx_1 << 1) + 0x56), c)
    void* entry_ebx
    void* ebx = entry_ebx + 1
    char* eax_1
    
    if (entry_ebx == 0xffffffff)
        eax_1 = eax_6 + 1
        eax_1[1] += ebx.b
    else
        void* edi = ebx
        eax_1 = arg7
        void* ebp = *(__return_addr + 0x65) * 0x1472
        *arg5 += eax_1.b
        *eax_1 += eax_1.b
        void arg_62
        *(&arg_62 + (__return_addr << 1)) += arg6:1.b
        *eax_1 += arg6.b
        *eax_1 += eax_1.b
        eax_1[0xc004674] += eax_1.b
        *eax_1 += eax_1.b
        *(ebp + 0x74cc0040) += arg6.b
        *(__return_addr + 1) += arg6.b
        *(edi + (arg6 << 1) + 0x56) |= arg5.b
        ecx_1 = arg6 - 1
        int32_t eflags
        uint16_t* esi_2 = __outsb(arg5.w, *(__return_addr + 1), __return_addr + 1, eflags)
        arg2 = __outsw(arg5.w, *esi_2, esi_2, eflags)
        arg7 = 0x2000000
        *eax_1 += eax_1.b
        *(eax_1 + arg5 + 0x5c0040) += (arg4 + 1):1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(arg4 + 0x4674f4c1) += ecx_1.b
        *arg2 += ecx_1.b
        edx = arg5 | *(edi + (ecx_1 << 1) + 0x56)
        ebx = arg4 + 2
        arg3 = edi - 1
        
        if (add_overflow(edi, 0xffffffff))
            if (edi == 1)
                *ecx_1 += edx.b
                ecx_1:1.b += *arg2
                *nullptr = *nullptr
                ebx:1.b *= 2
                undefined
            
            *eax_1 += eax_1.b
            char temp9 = eax_1.b
            char temp10 = eax_1.b
            eax_1.b *= 2
            
            if (temp9 != neg.b(temp10))
                jump(0x467605)
            
            jump(&data_4675bc:3)
        
        arg1 = *(arg3 + 0x6e) * 0x4e473
        *(eax_1 * 2) += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(eax_1 + edx + 0x1580040) += ebx:1.b
    
    *eax_1 += eax_1.b
    *eax_1 = &eax_1[*eax_1]
    *(eax_1 + edx + 0x1600040) += ebx:1.b
    *eax_1 += eax_1.b
    *(arg1 + 0x46) ^= edx:1.b
    *ebx += eax_1.b
    char temp3 = *(ebx + (arg1 << 1) + 0x62) | edx.b
    *(ebx + (arg1 << 1) + 0x62) = temp3
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x65), ecx_1.w)
    *(arg2 + 0x65) = temp0
    char* eax_2
    
    if (temp3 s>= 0)
        *eax_1 = &eax_1[*eax_1]
        *eax_1 += eax_1.b
        *(eax_1 * 2) += eax_1.b
        *eax_1 += eax_1.b
        eax_2.b = eax_1.b - 0x75
        char temp8 = *arg3
        *arg3 += eax_2.b
        bool z_2 = temp8 == neg.b(eax_2.b)
        *(edx + 0x63)
        
        if (z_2)
            if (add_overflow(eax_2, 0x5563626b))
                jump(0x467566)
            
            jump(0x46755f)
        
        int16_t* esp_4 = *(arg3 + 0x68) * 0x626b0574
        int32_t eflags_2
        int16_t temp0_1
        temp0_1, eflags_2 = __arpl_memw_gpr16(*(arg1 + 0x70), edx.w)
        *(arg1 + 0x70) = temp0_1
        *esp_4
        *(edx + 0x63)
        *(edx + 0x63)
        bool c_1 = unimplemented  {imul esp, dword [edx+0x63], 0x44}
        __outsd(edx.w, *(arg2 + 1), &arg2[1], eflags_2)
        
        if (not(z_2) && not(c_1))
            jump(0x4675d4)
        
        jump(0x467566)
    
    eax_2.b = eax_1.b ^ 4
    *eax_2 += eax_2.b
    *(eax_2 + edx + "Sehr niedrig") += ebx:1.b
    *eax_2 += eax_2.b
    *(arg1 + 0x46)
    *(arg1 + 0x46) = *(arg1 + 0x46)
    bool c_2 = unimplemented  {shl byte [ebp+0x46], 0x0}
    *edx = adc.d(*edx, eax_2, c_2)
    char* eax_4 = eax_2 ^ 4
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    void* eax_5 = &eax_4[*eax_4]
    *eax_5 += eax_5.b
    int32_t eflags_3
    char temp0_2
    char temp1_1
    temp0_2, temp1_1, eflags_3 = __aam_immb(0x75, eax_5.b)
    eax_5.b = temp0_2
    eax_5:1.b = temp1_1
    char temp5 = arg2[1]
    arg2[1] += ecx_1.b
    bool c_3 = temp5 + ecx_1.b u< temp5
    char temp6 = edx.b
    char temp7 = *(ebx + (eax_5 << 1) + 0x75)
    edx.b = adc.b(temp6, temp7, c_3)
    
    if (adc.b(temp6, temp7, c_3) u< temp6 || (c_3 && adc.b(temp6, temp7, c_3) == temp6))
        __outsd(edx.w, *(arg2 + 1), &arg2[1], eflags_3)
        int16_t* edi_1
        int16_t temp0_3
        temp0_3, edi_1 = __insd(arg3, edx.w, eflags_3)
        *edi_1 = temp0_3
        *0x5c00400c = 0x5c004010
        
        if (adc.b(temp6, temp7, c_3) s< 0)
            jump(0x467655)
        
        jump(sub_467598+0x49)
    
    *0x5c00400c = &arg2[1]
    *0x5c004008 = 0x5c00400c
    *(arg1 + 0x65)
    *ecx_1 += eax_5.b
    *eax_5 += eax_5.b
    *(&arg2[1] * 3) += edx:1.b
    char temp11 = *(eax_5 * 2 - 0x4b700000)
    *(eax_5 * 2 - 0x4b700000) += ecx_1:1.b
    
    if (temp11 == neg.b(ecx_1:1.b) || temp11 + ecx_1:1.b u< temp11)
        jump(&data_4676b0:1)
    
    jump(sub_467598+0xd3)
}
