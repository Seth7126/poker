// ============================================================
// 函数名称: sub_42710b
// 虚拟地址: 0x42710b
// WARP GUID: bfc4db7f-8e3e-5dcf-8fd8-cd2b40a6a079
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_426fb7
// ============================================================

int32_t __convention("regparm")sub_42710b(char* arg1, uint16_t arg2, char arg3, int32_t arg4 @ ebp, int32_t arg5 @ edi, long double arg6 @ st0, uint16_t* arg7, char* arg8, char* arg9, char* arg10, char* arg11, void* arg12)
{
    // 第一条实际指令: *arg1 += arg3
    *arg1 += arg3
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg5, arg2, eflags)
    *edi = temp0
    void* const __return_addr_1 = __return_addr
    char* ebp = arg8
    char* ebx = arg9
    char* edx = arg10
    char* ecx = arg11
    void* eax = arg12
    void arg_20
    void* esp = &arg_20
    uint16_t* esi_1 = __outsb(edx.w, *arg7, arg7, eflags)
    TEB* fsbase
    
    if (arg4 == 1)
        uint8_t* edi_1
        uint8_t temp0_1
        temp0_1, edi_1 = __insb(__return_addr_1, edx.w, eflags)
        *edi_1 = temp0_1
        esp = &arg_20 | *(ebp * 3 + 0x41)
        bool cond:3_1 = esp == 0
        
        if (esp != 0)
            goto label_42718f
        
        __outsd(edx.w, *esi_1, esi_1, eflags)
        int16_t* edi_2
        int16_t temp0_2
        temp0_2, edi_2 = __insd(edi_1, edx.w, eflags)
        *edi_2 = temp0_2
        *esp
        esi_1 = *(esp + 4)
        void* ebp_1 = *(esp + 8)
        ebx = *(esp + 0x10)
        edx = *(esp + 0x14)
        int16_t ecx_1 = (*(esp + 0x18)).w
        eax = *(esp + 0x1c)
        esp += 0x20
        
        if (cond:3_1)
            *eax += eax
            *eax += eax.b
            goto label_42718d
        
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(ebp_1 + 0x71280040), ecx_1)
        *(ebp_1 + 0x71280040) = temp0_3
        *ebx += eax.b
        *(esp + (eax << 1) + 0x72) |= &edx[1]
        void* edi_4 = *esp
        esi_1 = *(esp + 4)
        *(esp + 0x10)
        int32_t edx_2 = *(esp + 0x14)
        char* ecx_2 = *(esp + 0x18)
        char* eax_1 = *(esp + 0x1c)
        int32_t ebp_2 = *(esi_1 + 0x64)
        *ecx_2 += eax_1.b
        *eax_1 += eax_1.b
        ecx_2[esi_1 << 1] += eax_1:1.b
        *esi_1 += eax_1.b
        int16_t es
        *(esp + 0x1c) = zx.d(es)
        *(fsbase + edi_4 + (ebp_2 << 1) + 0x63)
        bool o_1 = unimplemented  {imul eax, dword [fs:edi+ebp*2+0x63], 0x6b}
        eax = *(fsbase + edi_4 + (ebp_2 << 1) + 0x63) * 0x6b
        *(esp + 0x18) = esp + 0x1c
        esp += 0x18
        
        if (not(o_1))
            goto label_427195
        
        *ecx_2 += eax.b
        int32_t temp9 = *(esp + ((edx_2 + 1) << 1) + 0x61) | (edx_2 + 1)
        *(esp + ((edx_2 + 1) << 1) + 0x61) = temp9
        __bound_gprv_mema32(ecx_2, *(edi_4 + 0x72))
        
        if (temp9 u< 0)
            jump(sub_426fb7+0x1ab)
        
        jump(0x427160)
    
    esi_1 = __outsb(edx.w, *esi_1, esi_1, eflags)
    void* eax_8
    void* eax_9
    bool c_3
    bool cond:8_1
    
    if (arg4 s< 1)
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        edx[(esi_1 << 1) + 0x42] += eax:1.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        edx[(esi_1 << 1) + 0x42] += eax.b
        edx[(esi_1 << 1) + 0x42] += ecx.b
        *eax += eax:1.b
        *eax += eax.b
        void arg_60
        *(&arg_60 + (ebp << 3)) += ecx:1.b
        eax:1.b += edx:1.b
        eax.b ^= *eax
        *ebx += edx:1.b
        *(ebx + esi_1) += (eax + 1).b
        *(eax + 2) += ecx.b
        eax_8 = (eax + 2) ^ *(eax + 2)
        eax_8.b ^= *eax_8
        char temp2_1 = *(fsbase + eax_8) ^ eax_8.b
        *(fsbase + eax_8) = temp2_1
        
        if (temp2_1 s>= 0)
        label_42722f:
            eax.b = (eax_8 + 1).b + edx:1.b
            eax.b |= *ecx
            int16_t fs
            *(ebp + 0xc080042) = fs
            ecx = &ecx[1]
        label_42723b:
            *(ebx + ecx) += ebx.b
            *(eax - 0x5b) += edx.b
            edx = &edx[1]
            ecx[1] += eax.b
            char* ecx_3
            ecx_3:1.b = (&ecx[1]):1.b + ebx:1.b
            int32_t temp7_1 = *(eax + 0x100042a6)
            *(eax + 0x100042a6) += 1
            cond:8_1 = temp7_1 == 0xffffffff
            *(esp - 4) = esp
            *(esp - 8) = ebx
            esp -= 8
            goto label_42724f
        
        eax_9 = eax_8 + 1
        edx[(esi_1 << 1) + 0x42] += eax_9:1.b
    label_427263:
        char temp5_1 = *__return_addr_1
        *__return_addr_1 += eax_9.b
        bool c_2 = temp5_1 + eax_9.b u< temp5_1
        char temp6_1 = ebx[(edx << 1) + 0x69]
        ebx[(edx << 1) + 0x69] = adc.b(temp6_1, edx.b, c_2)
        c_3 = adc.b(temp6_1, edx.b, c_2) u< temp6_1 || (c_2 && adc.b(temp6_1, edx.b, c_2) == temp6_1)
        bool p_1 = unimplemented  {adc byte [ebx+edx*2+0x69], dl}
        
        if (p_1)
            if (adc.b(temp6_1, edx.b, c_2) == 0)
                __bound_gprv_mema32(ebp, *(edx + 0x65))
                int32_t eflags_2
                int16_t temp0_7
                temp0_7, eflags_2 = __arpl_memw_gpr16(*(eax_9 * 2 + 6), esi_1.w)
                *(eax_9 * 2 + 6) = temp0_7
                
                if (edx != 0xffffffff)
                    jump(0x4273b8)
                
                jump(0x427344)
            
            *(esp - 4) = ebp
            ebp = esp - 4
        label_4272d6:
            *eax_9 = adc.b(*eax_9, eax_9.b, c_3)
            ebx:1.b *= 2
            *(ebp + 0x10042)
            *eax_9 += eax_9.b
            eax_9.b += *eax_9
        else
            ebx = &ebx[1]
            uint16_t* esi_7 = __outsd(edx.w, *esi_1, esi_1, eflags)
            esi_1 = __outsb(edx.w, *esi_7, esi_7, eflags)
            
            if (c_3)
                if (c_3)
                    jump(0x4272d3)
                
                jump("ints4rB")
        
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        eax_9.b += *eax_9
        *(ebp + 0x69) |= ecx
        uint16_t* esi_8 = __outsb(edx.w, *esi_1, esi_1, eflags)
        int32_t gsbase
        int32_t esp_11 = *(gsbase + __return_addr_1 + 0x68) * 0x4271c874
        *((eax_9 - 1) * 2) += edx.b
        ebx:1.b *= 2
        *(ebp + 0x10042)
        *(eax_9 - 1) += (eax_9 - 1).b
        void* eax_11 = eax_9 - 1 + *(eax_9 - 1)
        *eax_11 += eax_11.b
        *eax_11 += eax_11.b
        *eax_11 += eax_11.b
        *eax_11
        ebp[0x69] |= ecx.b
        int32_t esi_9 = __outsb(edx.w, *esi_8, esi_8, eflags)
        *(esp_11 - 4) = __return_addr_1
        *(esp_11 - 4 + (esi_9 << 1) + 0x68)
        *(esp_11 - 4 + (esi_9 << 1) + 0x68)
        bool c_4 = unimplemented  {imul esp, dword [esp+esi*2+0x68], 0x2000408d}
        
        if (not(c_4))
            jump("tState")
        
        jump(0x42731f)
    
    *ebx += eax.b
    edx = &edx[1] | *(ecx + (eax << 1) + 0x6e)
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(eax + 0x6f), ebp.w)
    *(eax + 0x6f) = temp0_4
    
    if (edx u>= 0)
        *(esi_1 + 0x64)
    label_42718d:
        *ebx += eax.b
    label_42718f:
        *eax += eax.b
        *(eax + 0x71) += ebx:1.b
    label_427195:
        *esi_1 += eax.b
        int32_t edi_5 = *esp
        uint16_t* esi_3 = *(esp + 4)
        ebp = *(esp + 8)
        ebx = *(esp + 0x10)
        void* edx_6 = *(esp + 0x14)
        void* eax_3 = *(esp + 0x1c)
        esp += 0x20
        ecx = *(ebp + 0x66) * 0x74
        void* eax_4 = eax_3 + 0x6f546b61
        
        if (add_overflow(eax_3, 0x6f546b61))
            ecx[0x6b] |= eax_4:1.b
        else
            edi_5 = *esp
            esi_3 = *(esp + 4)
            ebp = *(esp + 8)
            ebx = *(esp + 0x10)
            ecx = *(esp + 0x18)
            eax_4 = *(esp + 0x1c)
            edx_6 = *(*(esp + 0x14) + 0x69) * 0x67
            *(esp + 0x1c) = 0x6b610874
            esp += 0x1c
        
        edx = edx_6 + 1
        uint16_t* esi_4 = __outsd(edx.w, *esi_3, esi_3, eflags)
        
        if (edx_6 != 0xffffffff)
            __outsd(edx.w, *esi_4, esi_4, eflags)
            int16_t* edi_6
            int16_t temp0_5
            temp0_5, edi_6 = __insd(edi_5, edx.w, eflags)
            *edi_6 = temp0_5
            char temp15 = ecx[0xc008550] | edx.b
            ecx[0xc008550] = temp15
            int32_t eflags_1
            int16_t temp0_6
            temp0_6, eflags_1 = __arpl_memw_gpr16(*0x60042e0, ebp.w)
            *0x60042e0 = temp0_6
            
            if (temp15 u< 0)
                jump(0x427235)
            
            jump(0x4271c2)
        
        eax_8 = eax_4 + 1
        *(eax_8 + esi_4 + 0x40) += eax_8:1.b
        *(eax_8 + 0x30) += ebx:1.b
        goto label_42722f
    
    void* esi_6 = __outsb(edx.w, *esi_1, esi_1, eflags)
    
    if (edx u< 0)
        if (edx u>= 0)
            *(esi_6 + 0x74)
            undefined
        
        *eax += ecx.b
        eax.b |= 0x41
        goto label_42723b
    
    char temp8_1 = *(esi_6 + 0x54100042) & 0x53
    *(esi_6 + 0x54100042) = temp8_1
    cond:8_1 = temp8_1 == 0
    label_42724f:
    *(edx + 0x65)
    
    if (cond:8_1)
        bool cond:7_1 = ebp - 1 s< 0
        bool cond:12_1 = ebp != 1
        __return_addr_1 = *esp
        esi_1 = *(esp + 4)
        ebp = *(esp + 8)
        ebx = *(esp + 0x10)
        edx = *(esp + 0x14)
        ecx = *(esp + 0x18)
        eax_9 = *(esp + 0x1c)
        
        if (not(cond:7_1))
            *(esp + 0x20 + (esi_1 << 1) + 0x68)
            *(esp + 0x20 + (esi_1 << 1) + 0x68)
            c_3 = unimplemented  {imul esp, dword [esp+esi*2+0x68], 0x4271c8}
            goto label_4272d6
        
        if (cond:12_1)
            jump(0x42739a)
        
        jump("eEvent")
    
    __return_addr_1 = *esp
    esi_1 = *(esp + 4)
    ebx = *(esp + 0x10)
    edx = *(esp + 0x14)
    ecx = *(esp + 0x18)
    eax_9 = *(esp + 0x1c)
    esp += 0x20
    *(esi_1 + 0x74)
    ebp = *(esi_1 + 0x74) * 0x408d73
    bool c_1 = unimplemented  {imul ebp, dword [esi+0x74], 0x408d73}
    
    if (not(c_1))
        goto label_427263
    
    int32_t temp17 = *(ebp + 0x61) | ecx
    *(ebp + 0x61) = temp17
    
    if (temp17 s< 0)
        jump(0x4272f2)
    
    jump("eight")
}
