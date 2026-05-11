// ============================================================
// 函数名称: sub_4aa3c5
// 虚拟地址: 0x4aa3c5
// WARP GUID: 255ce944-07b7-528b-84bd-7dcaef6a2ed3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa3c5(char* arg1, int32_t arg2, void* arg3, char* arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi, char* arg7, char* arg8, void* arg9)
{
    // 第一条实际指令: *0xc004a = arg1
    *0xc004a = arg1
    *arg1 += arg1.b
    void* eax
    eax.b = 0xa1 ^ *0xf4004aa1
    char* entry___return_addr
    *entry___return_addr += arg2:1.b
    *(entry___return_addr + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp0 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp0
    char* entry___return_addr_1
    int32_t eflags
    char* eax_6
    char* edx
    void* esp_1
    void* esp_2
    void* edi_1
    bool c
    
    if (temp0 s>= 0)
        void* eax_4
        eax_4.b = (&eax_3[1]).b * 2
        *eax_4
        *eax_4 ^= eax_4.b
        *(arg4 + 0x49)
        c = unimplemented  {sbb eax, dword [ebp+0x49]}
        entry___return_addr_1 = entry___return_addr
        void* var_9
        esp_1 = &var_9
        bool cond:0_1 = entry___return_addr == 0xffffffff
        bool cond:2_1 = entry___return_addr == 0xffffffff
        
        if (c)
            goto label_4aa461
        
        edi_1 = var_9
        char* entry___return_addr_4 = entry___return_addr_1
        arg4 = entry___return_addr
        entry___return_addr = arg7
        edx = arg8
        arg3 = arg9
        char* arg_13
        eax_6 = arg_13
        void arg_17
        esp_2 = &arg_17
        
        if (cond:0_1)
            arg_13 = edx
            esp_2 = &arg_13
            uint16_t* esi_3 = __outsd(edx.w, *entry___return_addr_4, entry___return_addr_4, eflags)
            arg5 = __outsd(edx.w, *esi_3, esi_3, eflags)
        else
            uint16_t* esi = __outsb(edx.w, *entry___return_addr_4, entry___return_addr_4, eflags)
            char* entry___return_addr_3 = entry___return_addr
            entry___return_addr = &entry___return_addr[1]
            cond:2_1 = entry___return_addr_3 == 0xffffffff
            uint16_t* esi_1 = __outsd(edx.w, *esi, esi, eflags)
            arg5 = __outsb(edx.w, *esi_1, esi_1, eflags)
            
            if (entry___return_addr_3 != 0xffffffff)
                if (&entry___return_addr_3[1] s< 0)
                    jump(sub_4aa478+3)
                
                jump("Error")
        
        if (not(cond:2_1))
            goto label_4aa46c
        
        eax_6:1.b += entry___return_addr:1.b
        goto label_4aa4b1
    
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    char* __return_addr_1 = __return_addr
    void arg_4
    esp_2 = &arg_4
    *arg6 = *arg5
    edi_1 = &arg6[1]
    arg5 += 1
    *(__return_addr_1 * 2) += arg3.b
    char temp6_1 = *__return_addr_1
    *__return_addr_1 += __return_addr_1.b
    __return_addr_1.b = adc.b(__return_addr_1.b, 0xa2, temp6_1 + __return_addr_1.b u< temp6_1)
    arg2 -= 2
    __return_addr_1:1.b += arg2:1.b
    __return_addr_1.b ^= *__return_addr_1
    *entry___return_addr += arg2:1.b
    *(entry___return_addr + arg5) += (&__return_addr_1[1]).b
    __return_addr_1[2] += arg3.b
    char* eax_9 = &__return_addr_1[2] ^ *(__return_addr_1 + 2)
    eax_9.b ^= *eax_9
    char temp7_1 = *(fsbase + eax_9) ^ eax_9.b
    *(fsbase + eax_9) = temp7_1
    void* eax_15
    void* edx_2
    
    if (temp7_1 s< 0)
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *(arg2 + (arg3 << 1) + 0xc00)
        *(arg2 + (arg3 << 1) + 0xc00) = *(arg2 + (arg3 << 1) + 0xc00)
        bool c_2 = unimplemented  {shl byte [edx+ecx*2+0xc00], 0x0}
        eax_9.b = adc.b(eax_9.b, 0xa2, c_2)
        edx = arg2 - 1
        eax_9:1.b += edx:1.b
        eax_9.b ^= *eax_9
        *entry___return_addr += edx:1.b
        *(entry___return_addr + arg5) += (&eax_9[1]).b
        eax_9[2] += arg3.b
        eax_6 = &eax_9[2] ^ *(eax_9 + 2)
    label_4aa4b1:
        eax_6.b ^= *eax_6
        char temp11_1 = *(fsbase + eax_6) ^ eax_6.b
        *(fsbase + eax_6) = temp11_1
        
        if (temp11_1 s< 0)
        label_4aa4ea:
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            *eax_6 += eax_6.b
            eax_6.b &= 0xa5
            edx -= 1
            *(eax_6 * 2) += arg3.b
            goto label_4aa4fe
        
        void* eax_14
        eax_14.b = (&eax_6[1]).b * 2
        *eax_14 ^= eax_14.b
        *esp_2
        *(esp_2 - 2) = entry___return_addr
        *(esp_2 - 6) = entry___return_addr
        __outsd(edx.w, *arg5, arg5, eflags)
        edi_1 = *(esp_2 - 8)
        arg5 = *(esp_2 - 4)
        entry___return_addr = *(esp_2 + 8)
        edx_2 = *(esp_2 + 0xc)
        arg3 = *(esp_2 + 0x10)
        eax_15 = *(esp_2 + 0x14)
        *(fsbase + arg5 + 0x67)
        bool c_3 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x74726543}
        arg4 = *(fsbase + arg5 + 0x67) * 0x74726543 + 1
        
        if (not(c_3))
            __outsd(edx_2.w, *arg5, arg5, eflags)
            
            if (c_3)
                jump(0x4aa4fd)
            
            jump(&data_4aa4d8:1)
        
        *eax_15 += eax_15.b
        *eax_15 += eax_15.b
        *eax_15 += eax_15.b
    else
        void* eax_10
        eax_10.b = (&eax_9[1]).b * 2
        *eax_10
        *eax_10 ^= eax_10.b
        *(arg4 + 0x49)
        __return_addr = entry___return_addr
        char* entry___return_addr_2 = entry___return_addr
        esp_1 = &entry___return_addr_1:3
    label_4aa461:
        __outsd(arg2.w, *arg5, arg5, eflags)
        edi_1 = *(esp_1 - 1)
        arg5 = *(esp_1 + 3)
        edx = *(esp_1 + 0x13)
        arg3 = *(esp_1 + 0x17)
        eax_6 = *(esp_1 + 0x1b)
        esp_2 = esp_1 + 0x1f
        *(fsbase + arg5 + 0x67)
        arg4 = *(fsbase + arg5 + 0x67) * 0x746f6f52
        c = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x746f6f52}
        entry___return_addr = *(esp_1 + 0xf) + 1
    label_4aa46c:
        
        if (not(c))
            arg4 = &arg4[1]
            
            if (c)
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                goto label_4aa4ea
            
            __outsd(edx.w, *arg5, arg5, eflags)
            
            if (c)
                jump(0x4aa435)
            
            jump(&data_4aa474:1)
        
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *0xc004a += eax_6:1.b
    label_4aa4fe:
        char temp12_1 = *eax_6
        *eax_6 += eax_6.b
        eax_6.b = adc.b(eax_6.b, 0xa2, temp12_1 + eax_6.b u< temp12_1)
        edx_2 = edx - 1
        eax_6:1.b += edx_2:1.b
        eax_6.b ^= *eax_6
        *entry___return_addr += edx_2:1.b
        *(entry___return_addr + arg5) += (&eax_6[1]).b
        eax_6[2] += arg3.b
        eax_15 = &eax_6[2] ^ *(eax_6 + 2)
        eax_15.b ^= *eax_15
        char temp13_1 = *(fsbase + eax_15) ^ eax_15.b
        *(fsbase + eax_15) = temp13_1
        
        if (temp13_1 s>= 0)
            void* eax_18
            eax_18.b = (eax_15 + 1).b * 2
            *eax_18 ^= eax_18.b
            int16_t ss
            *(esp_2 - 4) = zx.d(ss)
            *(esp_2 - 8) = entry___return_addr
            *(esp_2 - 0xc) = entry___return_addr
            __outsd(edx_2.w, *arg5, arg5, eflags)
            *(esp_2 - 0xe)
            int32_t esi_8 = *(esp_2 - 0xa)
            *(esp_2 + 2)
            *(esp_2 + 6)
            *(esp_2 + 0xa)
            *(esp_2 + 0xe)
            *(fsbase + esi_8 + 0x67)
            *(fsbase + esi_8 + 0x67)
            bool c_5 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x4579654b}
            
            if (c_5)
                jump(sub_4aa582+0x29)
            
            jump(sub_4aa582-0x49)
    
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    arg4[0xc004a] = eax_15:1.b
    *eax_15 += eax_15.b
    void* const eax_20
    eax_20.b = 0xa1 ^ *0xf4004aa1
    *entry___return_addr += edx_2:1.b
    *(entry___return_addr + arg5) += (eax_20 + 1).b
    *(eax_20 + 2) += arg3.b
    char* eax_23 = (eax_20 + 2) ^ *(eax_20 + 2)
    eax_23.b ^= *eax_23
    char temp15 = *(fsbase + eax_23) ^ eax_23.b
    *(fsbase + eax_23) = temp15
    
    if (temp15 s>= 0)
        return sub_4aa582(eax_23, edx_2, arg3, arg4, arg5, edi_1) __tailcall
    
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    *eax_23 += eax_23.b
    undefined
}
