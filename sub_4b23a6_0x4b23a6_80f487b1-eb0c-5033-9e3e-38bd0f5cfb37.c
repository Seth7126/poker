// ============================================================
// 函数名称: sub_4b23a6
// 虚拟地址: 0x4b23a6
// WARP GUID: 80f487b1-eb0c-5033-9e3e-38bd0f5cfb37
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int80_t __convention("regparm")sub_4b23a6(int32_t arg1, void* const arg2, int32_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0, int32_t* arg8, char* arg9)
{
    // 第一条实际指令: *(arg1 - 0x1004b) += (arg1 - 0x1004b).b
    *(arg1 - 0x1004b) += (arg1 - 0x1004b).b
    *(arg1 - 0x1004b) += (arg1 - 0x1004b).b
    char temp1 = *(arg1 + 0x7ffeffb5)
    *(arg1 + 0x7ffeffb5) += (arg1 - 0x1004b).b
    char* eax = sbb.d(arg1 - 0x1004b, 0x65530600, temp1 + (arg1 - 0x1004b).b u< temp1)
    bool c_1 = unimplemented  {sbb eax, 0x65530600}
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0
    void* const* ebp = arg4 + 1
    uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
    void* const* var_4 = &__return_addr
    char temp3 = *eax
    *eax = adc.b(temp3, eax.b, c_1)
    eax.b =
        adc.b(eax.b, 2, adc.b(temp3, eax.b, c_1) u< temp3 || (c_1 && adc.b(temp3, eax.b, c_1) == temp3))
    void* const* entry_ebx
    entry_ebx:1.b *= 2
    long double x87_r0 = fconvert.t(*0x1004b) - arg7
    *eax += eax.b
    *eax += eax.b
    eax[0x80000000] += eax.b
    int16_t ds
    uint32_t var_8 = zx.d(ds)
    char temp4 = *eax
    *eax += arg3.b
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
    *edi_1 = temp0_1
    void* const* var_10 = entry_ebx
    void* const** esp_1 = &var_10
    void** var_14
    bool c_4
    
    if (temp4 != neg.b(arg3.b))
        char temp6_1
        
        if (temp4 + arg3.b u>= temp4)
            *eax += arg2.b
            arg3[-0x10c04000].b += arg3.b
            eax = 0xb8880042
            arg2 += 1
            *0xb8880042 += 0x42
            *0xb8880042 += 0x42
            *0xb8880042 = *0xb8880042
            temp6_1 = *0xb900061
            *0xb900061 += 0x42
            c_4 = temp6_1 + 0x42 u< temp6_1
            __builtin_strncpy(&var_14, "owHi", 4)
            esp_1 = &var_14
            esi = __outsb(arg2.w, *esi, esi, eflags)
        
        if (temp4 + arg3.b u< temp4 || temp6_1 == 0xbe)
            *eax = &eax[*eax]
            goto label_4b2457
        
        if (not(add_overflow(temp6_1, 0x42)))
            void*** var_18 = &var_14
            esp_1 = &var_18
            goto label_4b244a
        
        *(arg2 + entry_ebx + 0x43) = *(arg2 + entry_ebx + 0x43)
        eax:1.b = 0
        eax.b = sbb.b(0x42, *entry_ebx, false)
        *eax = &eax[*eax]
        *eax += eax.b
        *eax += eax.b
        eax[0xffffffff] += eax.b
        *eax &= eax.b
        *(arg3 + 0x62)
        *(arg3 + 0x62) |= arg2.b
        char temp19 = adc.b(*eax, eax.b, false)
        *eax = temp19
        
        if (temp19 == 0)
            jump(0x4b242e)
        
        jump(0x4b242d)
    
    uint8_t temp5_1 = *edi_1
    *edi_1 += eax.b
    c_4 = temp5_1 + eax.b u< temp5_1
    bool o_2 = add_overflow(temp5_1, eax.b)
    var_14 = &var_10
    edi_1 = var_14
    void* const* esi_1 = var_10
    ebp = entry_ebx
    entry_ebx = var_4
    arg2 = __return_addr
    arg3 = arg8
    eax = arg9
    void arg_c
    esp_1 = &arg_c
    __bound_gprv_mema32(arg2, *(entry_ebx + 0x74))
    esi = __outsd(arg2.w, *esi_1, esi_1, eflags)
    
    if (not(o_2))
    label_4b244a:
        *eax = adc.b(*eax, eax.b, c_4)
        entry_ebx -= 1
        *(ebp + 0x1004b) += arg3:1.b
    label_4b2457:
        *eax += eax.b
        *eax += eax.b
        eax[0x14] += eax.b
        eax.b &= *eax
        int32_t edx = arg2 | *(eax + (ebp << 1) + 0x75)
        bool z_2 = (arg2 | *(eax + (ebp << 1) + 0x75)) == 0
        int16_t* edi_3
        int16_t temp0_2
        temp0_2, edi_3 = __insd(edi_1, edx.w, eflags)
        *edi_3 = temp0_2
        __bound_gprv_mema32(arg3, *(ebp + 0x6e))
        
        if (not(z_2))
            eax.b &= 0x1f
            arg3.b += edx:1.b
            *eax = &eax[*eax]
            jump(*(eax + 0x1004b2c))
        
        uint8_t temp0_4
        temp0_4, edi_1 = __insb(edi_3, edx.w, eflags)
        *edi_1 = temp0_4
        eax.b = sbb.b(eax.b, 0x79, false)
        goto label_4b24dc
    
    *arg3 += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax = *eax
    eax[0x54090024] += eax.b
    esp_1 = *(entry_ebx + 0x6b) * 0x6c797453
    char* gsbase
    *(gsbase + eax) += arg2.b
    *edi_1 += (&eax[1]).b
    entry_ebx:1.b *= 2
    arg2:1.b = 0x42
    eax[0xffffffd5] += (&eax[1]).b
    void* edx_1 = arg2 + 1
    eax[1] += (&eax[1]).b
    eax[1] += (&eax[1]).b
    *arg3 = *arg3
    eax[1] += (&eax[1]).b
    eax = &eax[1] & 0x69560700
    void* esp_5
    bool c_5
    
    if (eax u< 0)
        __bound_gprv_mema32(ebp, *(ebp + 0x1c))
        
        if (eax s>= 0)
            uint16_t* esi_4 = __outsb(edx_1.w, *esi, esi, eflags)
            entry_ebx += 1
            *(esp_1 - 4) = 0x65676e61
            eax.b = 0x74
            eax.b = edx_1.b + 0x75
            *eax += eax.b
            eax, edx_1, arg3 = eax()
            *eax += eax.b
            *arg3 += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            char temp14_1 = eax[0x4f0a0028]
            eax[0x4f0a0028] += eax.b
            c_5 = temp14_1 + eax.b u< temp14_1
            esi = __outsb(edx_1.w, *esi_4, esi_4, eflags)
            goto label_4b2543
        
    label_4b24dc:
        *eax += entry_ebx.b
        *eax = &eax[*eax]
        eax, edx_1, arg3 = (*eax)()
        void* esp_2 = esp_1 + 0xf
        *eax = &eax[*eax]
        *arg3 += 1
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
        eax[0x4f0e0026] += eax.b
        uint16_t* esi_2 = __outsb(edx_1.w, *esi, esi, eflags)
        void* const* temp15_1 = entry_ebx
        entry_ebx += 1
        bool o_3 = add_overflow(temp15_1, 1)
        uint16_t* esi_3 = __outsd(edx_1.w, *esi_2, esi_2, eflags)
        esi = __outsb(edx_1.w, *esi_3, esi_3, eflags)
        
        if (temp15_1 == 0xffffffff)
            char temp18_1 = eax[0x4f0a0029]
            eax[0x4f0a0029] += eax.b
            c_5 = temp18_1 + eax.b u< temp18_1
            esi = __outsb(edx_1.w, *esi, esi, eflags)
            
            if (c_5)
                *eax += eax.b
                goto label_4b25cd
            
            if (edi_1 == 1 || c_5)
                goto label_4b25d3
            
            if (c_5)
                jump(0x4b25ac)
            
            jump(0x4b2570)
        
        while (true)
            if (temp15_1 + 1 s< 0)
                edx_1 += 1
                eax.b += edx_1:1.b
                *eax += eax.b
            else
                *(esp_2 - 4) = eax
                esp_2 -= 4
                esi = __outsd(edx_1.w, *esi, esi, eflags)
                
                if (not(o_3))
                    if (not(o_3))
                        return sub_4b2503() __tailcall
                    
                    continue
            
            *(esp_2 - 4) = eax
            esp_5 = esp_2 - 4
            *eax += eax.b
            *arg3 += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            char temp26_1 = eax[0x4f09002a]
            eax[0x4f09002a] += eax.b
            c_5 = temp26_1 + eax.b u< temp26_1
            break
        
        goto label_4b258b
    
    edi_1[0x6e]
    arg3.b |= edi_1[0x6e]
    c_5 = false
    label_4b2543:
    
    if (c_5)
        goto label_4b25a6
    
    esp_5 = esp_1 + 2
    
    if (c_5)
    label_4b25b8:
        eax = __in_oeax_immb(0x40, eflags)
        eax[0x98ff0001] += entry_ebx.b
        *eax = &eax[*eax]
        *arg3 += 1
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax = *eax
    label_4b25cd:
        char temp23_1 = eax[0x4f07002c]
        eax[0x4f07002c] += eax.b
        c_5 = temp23_1 + eax.b u< temp23_1
    label_4b25d3:
        uint16_t* esi_8 = __outsb(edx_1.w, *esi, esi, eflags)
        __outsb(edx_1.w, *esi_8, esi_8, eflags)
        
        if (ebp == 0xffffffff)
            if (ebp + 1 s< 0)
                jump("ress")
            
            *eax += eax.b
            undefined
    else
        if (not(add_overflow(esp_1 + 1, 1)))
            if (esp_1 == 0xfffffffe)
                jump(0x4b258f)
            
            jump(0x4b254d)
        
    label_4b258b:
        uint16_t* esi_5 = __outsb(edx_1.w, *esi, esi, eflags)
        ebp += 1
        uint16_t* esi_6 = __outsb(edx_1.w, *esi_5, esi_5, eflags)
        esi = __outsd(edx_1.w, *esi_6, esi_6, eflags)
        int16_t temp0_5
        temp0_5, eflags = __arpl_memw_gpr16(entry_ebx[0xf].w, ebp.w)
        entry_ebx[0xf].w = temp0_5
        
        if (esp_5 == 0xffffffff)
            *eax += eax.b
            *eax = &eax[*eax]
            *eax += 1
            *eax = &eax[*eax]
            *arg3 += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
        label_4b25a6:
            *eax = *eax
            char temp16_1 = eax[0x4f09002b]
            eax[0x4f09002b] += eax.b
            uint16_t* esi_7 = __outsb(edx_1.w, *esi, esi, eflags)
            ebp += 1
            esi = __outsb(edx_1.w, *esi_7, esi_7, eflags)
            
            if (temp16_1 + eax.b u>= temp16_1)
                goto label_4b25b8
            
            if (entry_ebx - 1 s< 0)
                return sub_4b261b(eax, edx_1, arg3, esi, edi_1, x87_r0) __tailcall
            
            int32_t esi_10 = __outsb(edx_1.w, *esi, esi, eflags)
            
            if (entry_ebx - 2 s< 0)
                if (add_overflow(entry_ebx - 1, 0xffffffff))
                    jump("nKeyDown")
                
                jump(0x4b2666)
            
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
            *eax += arg3.b
            int32_t eflags_1
            char temp0_6
            temp0_6, eflags_1 = __daa(eax.b, eflags)
            eax.b = temp0_6
            *(eax * 2) += eax.b
            *eax += eax.b
            x87_r0 - fconvert.t(*eax)
            void* eax_4
            eax_4:1.b = (&eax[1]):1.b + edx_1:1.b
            eax_4.b ^= *eax_4
            *(entry_ebx - 3) += edx_1:1.b
            (entry_ebx - 3)[esi_10] += (eax_4 + 1).b
            *(eax_4 + 2) += arg3.b
            char* eax_7 = (eax_4 + 2) ^ *(eax_4 + 2)
            eax_7.b ^= *eax_7
            TEB* fsbase
            char temp27 = *(fsbase + eax_7) ^ eax_7.b
            *(fsbase + eax_7) = temp27
            
            if (temp27 s< 0)
                jump(sub_4b2693+0x97)
            
            jump(sub_4b2693+0x67)
    
    if (c_5)
        jump(0x4b25d2)
    
    jump(0x4b25da)
}
