// ============================================================
// 函数名称: sub_4b234e
// 虚拟地址: 0x4b234e
// WARP GUID: fb503678-2948-5b73-b73f-f250bd9bd373
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b234e(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, uint8_t* arg6 @ edi, int80_t arg7 @ st0, char* arg8, char* arg9, int32_t* arg10, char* arg11)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint16_t* gsbase
    uint16_t* esi_13 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(arg3[0x15].w, arg6.w)
    arg3[0x15].w = temp0
    char temp1 = *arg1
    bool c
    *arg1 = adc.b(temp1, arg1.b, c)
    *arg2 = adc.b(*arg2, arg1.b, 
        adc.b(temp1, arg1.b, c) u< temp1 || (c && adc.b(temp1, arg1.b, c) == temp1))
    char* entry_ebx
    entry_ebx:1.b *= 2
    entry_ebx[arg3 << 1] |= arg3:1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp2 = arg1[0x5008001b]
    arg1[0x5008001b] += arg1.b
    bool c_2 = temp2 + arg1.b u< temp2
    bool z = temp2 == neg.b(arg1.b)
    uint16_t* esi = __outsd(arg2.w, *esi_13, esi_13, eflags_1)
    
    if (not(c_2))
        uint8_t temp0_1
        temp0_1, arg6 = __insb(arg6, arg2.w, eflags_1)
        *arg6 = temp0_1
    else if (not(z))
        uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags_1)
        __outsb(arg2.w, *esi_1, esi_1, eflags_1)
        *arg1 += arg2.b
        arg1[1] += (&arg1[1]).b
        void* eax
        eax.b = (&arg1[1]).b + arg1[1]
        jump(*(arg4 * 2 + 0x4b))
    
    char* var_4 = entry_ebx
    int32_t* esp_1 = &var_4
    char** var_8
    bool c_3
    
    if (not(z))
        char temp4_1
        
        if (not(c_2))
            *arg1 += arg2.b
            arg3[-0x10c04000].b += arg3.b
            arg1 = 0xb8880042
            arg2 = &arg2[1]
            *0xb8880042 += 0x42
            *0xb8880042 += 0x42
            *0xb8880042 = *0xb8880042
            temp4_1 = *0xb900061
            *0xb900061 += 0x42
            c_3 = temp4_1 + 0x42 u< temp4_1
            __builtin_strncpy(&var_8, "owHi", 4)
            esp_1 = &var_8
            esi = __outsb(arg2.w, *esi, esi, eflags_1)
        
        if (c_2 || temp4_1 == 0xbe)
            *arg1 = &arg1[*arg1]
            goto label_4b2457
        
        if (not(add_overflow(temp4_1, 0x42)))
            char*** var_c = &var_8
            esp_1 = &var_c
            goto label_4b244a
        
        *(arg2 + entry_ebx + 0x43) = *(arg2 + entry_ebx + 0x43)
        arg1:1.b = 0
        arg1.b = sbb.b(0x42, *entry_ebx, false)
        *arg1 = &arg1[*arg1]
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0xffffffff] += arg1.b
        *arg1 &= arg1.b
        *(arg3 + 0x62)
        *(arg3 + 0x62) |= arg2.b
        char temp17 = adc.b(*arg1, arg1.b, false)
        *arg1 = temp17
        
        if (temp17 == 0)
            jump(0x4b242e)
        
        jump(0x4b242d)
    
    uint8_t temp3_1 = *arg6
    *arg6 += arg1.b
    c_3 = temp3_1 + arg1.b u< temp3_1
    bool o_2 = add_overflow(temp3_1, arg1.b)
    var_8 = &var_4
    arg6 = var_8
    char* esi_3 = var_4
    arg4 = __return_addr
    entry_ebx = arg8
    arg2 = arg9
    arg3 = arg10
    arg1 = arg11
    void arg_18
    esp_1 = &arg_18
    __bound_gprv_mema32(arg2, *(entry_ebx + 0x74))
    esi = __outsd(arg2.w, *esi_3, esi_3, eflags_1)
    
    if (not(o_2))
    label_4b244a:
        *arg1 = adc.b(*arg1, arg1.b, c_3)
        entry_ebx -= 1
        *(arg4 + 0x1004b) += arg3:1.b
    label_4b2457:
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0x14] += arg1.b
        arg1.b &= *arg1
        int32_t edx = arg2 | *(arg1 + (arg4 << 1) + 0x75)
        bool z_2 = (arg2 | *(arg1 + (arg4 << 1) + 0x75)) == 0
        int16_t* edi_1
        int16_t temp0_2
        temp0_2, edi_1 = __insd(arg6, edx.w, eflags_1)
        *edi_1 = temp0_2
        __bound_gprv_mema32(arg3, *(arg4 + 0x6e))
        
        if (not(z_2))
            arg1.b &= 0x1f
            arg3.b += edx:1.b
            *arg1 = &arg1[*arg1]
            jump(*(arg1 + 0x1004b2c))
        
        uint8_t temp0_4
        temp0_4, arg6 = __insb(edi_1, edx.w, eflags_1)
        *arg6 = temp0_4
        arg1.b = sbb.b(arg1.b, 0x79, false)
        goto label_4b24dc
    
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    arg1[0x54090024] += arg1.b
    esp_1 = *(entry_ebx + 0x6b) * 0x6c797453
    *(gsbase + arg1) += arg2.b
    *arg6 += (&arg1[1]).b
    entry_ebx:1.b *= 2
    arg2:1.b = 0x42
    arg1[0xffffffd5] += (&arg1[1]).b
    void* edx_1 = &arg2[1]
    arg1[1] += (&arg1[1]).b
    arg1[1] += (&arg1[1]).b
    *arg3 = *arg3
    arg1[1] += (&arg1[1]).b
    arg1 = &arg1[1] & 0x69560700
    void* esp_5
    bool c_4
    
    if (arg1 u< 0)
        __bound_gprv_mema32(arg4, *(arg4 + 0x1c))
        
        if (arg1 s>= 0)
            uint16_t* esi_6 = __outsb(edx_1.w, *esi, esi, eflags_1)
            entry_ebx = &entry_ebx[1]
            *(esp_1 - 4) = 0x65676e61
            arg1.b = 0x74
            arg1.b = edx_1.b + 0x75
            *arg1 += arg1.b
            arg1, edx_1, arg3 = arg1()
            *arg1 += arg1.b
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            char temp12_1 = arg1[0x4f0a0028]
            arg1[0x4f0a0028] += arg1.b
            c_4 = temp12_1 + arg1.b u< temp12_1
            esi = __outsb(edx_1.w, *esi_6, esi_6, eflags_1)
            goto label_4b2543
        
    label_4b24dc:
        *arg1 += entry_ebx.b
        *arg1 = &arg1[*arg1]
        arg1, edx_1, arg3 = (*arg1)()
        void* esp_2 = esp_1 + 3
        *arg1 = &arg1[*arg1]
        *arg3 += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        arg1[0x4f0e0026] += arg1.b
        uint16_t* esi_4 = __outsb(edx_1.w, *esi, esi, eflags_1)
        char* temp13_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        bool o_3 = add_overflow(temp13_1, 1)
        uint16_t* esi_5 = __outsd(edx_1.w, *esi_4, esi_4, eflags_1)
        esi = __outsb(edx_1.w, *esi_5, esi_5, eflags_1)
        
        if (temp13_1 == 0xffffffff)
            char temp16_1 = arg1[0x4f0a0029]
            arg1[0x4f0a0029] += arg1.b
            c_4 = temp16_1 + arg1.b u< temp16_1
            esi = __outsb(edx_1.w, *esi, esi, eflags_1)
            
            if (c_4)
                *arg1 += arg1.b
                goto label_4b25cd
            
            if (arg6 == 1 || c_4)
                goto label_4b25d3
            
            if (c_4)
                jump(0x4b25ac)
            
            jump(0x4b2570)
        
        while (true)
            if (&temp13_1[1] s< 0)
                edx_1 += 1
                arg1.b += edx_1:1.b
                *arg1 += arg1.b
            else
                *(esp_2 - 4) = arg1
                esp_2 -= 4
                esi = __outsd(edx_1.w, *esi, esi, eflags_1)
                
                if (not(o_3))
                    if (not(o_3))
                        return sub_4b2503() __tailcall
                    
                    continue
            
            *(esp_2 - 4) = arg1
            esp_5 = esp_2 - 4
            *arg1 += arg1.b
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            char temp24_1 = arg1[0x4f09002a]
            arg1[0x4f09002a] += arg1.b
            c_4 = temp24_1 + arg1.b u< temp24_1
            break
        
        goto label_4b258b
    
    arg6[0x6e]
    arg3.b |= arg6[0x6e]
    c_4 = false
    label_4b2543:
    
    if (c_4)
        goto label_4b25a6
    
    esp_5 = esp_1 + 2
    
    if (c_4)
    label_4b25b8:
        arg1 = __in_oeax_immb(0x40, eflags_1)
        arg1[0x98ff0001] += entry_ebx.b
        *arg1 = &arg1[*arg1]
        *arg3 += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
    label_4b25cd:
        char temp21_1 = arg1[0x4f07002c]
        arg1[0x4f07002c] += arg1.b
        c_4 = temp21_1 + arg1.b u< temp21_1
    label_4b25d3:
        uint16_t* esi_10 = __outsb(edx_1.w, *esi, esi, eflags_1)
        __outsb(edx_1.w, *esi_10, esi_10, eflags_1)
        
        if (arg4 == 0xffffffff)
            if (arg4 + 1 s< 0)
                jump("ress")
            
            *arg1 += arg1.b
            undefined
    else
        if (not(add_overflow(esp_1 + 1, 1)))
            if (esp_1 == 0xfffffffe)
                jump(0x4b258f)
            
            jump(0x4b254d)
        
    label_4b258b:
        uint16_t* esi_7 = __outsb(edx_1.w, *esi, esi, eflags_1)
        arg4 += 1
        uint16_t* esi_8 = __outsb(edx_1.w, *esi_7, esi_7, eflags_1)
        esi = __outsd(edx_1.w, *esi_8, esi_8, eflags_1)
        int16_t temp0_5
        temp0_5, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x3c), arg4.w)
        *(entry_ebx + 0x3c) = temp0_5
        
        if (esp_5 == 0xffffffff)
            *arg1 += arg1.b
            *arg1 = &arg1[*arg1]
            *arg1 += 1
            *arg1 = &arg1[*arg1]
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
        label_4b25a6:
            *arg1 = *arg1
            char temp14_1 = arg1[0x4f09002b]
            arg1[0x4f09002b] += arg1.b
            uint16_t* esi_9 = __outsb(edx_1.w, *esi, esi, eflags_1)
            arg4 += 1
            esi = __outsb(edx_1.w, *esi_9, esi_9, eflags_1)
            
            if (temp14_1 + arg1.b u>= temp14_1)
                goto label_4b25b8
            
            if (entry_ebx - 1 s< 0)
                return sub_4b261b(arg1, edx_1, arg3, esi, arg6, arg7) __tailcall
            
            int32_t esi_12 = __outsb(edx_1.w, *esi, esi, eflags_1)
            
            if (entry_ebx - 2 s< 0)
                if (add_overflow(entry_ebx - 1, 0xffffffff))
                    jump("nKeyDown")
                
                jump(0x4b2666)
            
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg3.b
            int32_t eflags_2
            char temp0_6
            temp0_6, eflags_2 = __daa(arg1.b, eflags_1)
            arg1.b = temp0_6
            *(arg1 * 2) += arg1.b
            *arg1 += arg1.b
            arg7 f- fconvert.t(*arg1)
            void* eax_4
            eax_4:1.b = (&arg1[1]):1.b + edx_1:1.b
            eax_4.b ^= *eax_4
            *(entry_ebx - 3) += edx_1:1.b
            (entry_ebx - 3)[esi_12] += (eax_4 + 1).b
            *(eax_4 + 2) += arg3.b
            char* eax_7 = (eax_4 + 2) ^ *(eax_4 + 2)
            eax_7.b ^= *eax_7
            TEB* fsbase
            char temp25 = *(fsbase + eax_7) ^ eax_7.b
            *(fsbase + eax_7) = temp25
            
            if (temp25 s< 0)
                jump(sub_4b2693+0x97)
            
            jump(sub_4b2693+0x67)
    
    if (c_4)
        jump(0x4b25d2)
    
    jump(0x4b25da)
}
