// ============================================================
// 函数名称: sub_43f190
// 虚拟地址: 0x43f190
// WARP GUID: d06e38a5-b9b6-5881-9877-d98379ba0a2a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43f190(char* arg1, int32_t* arg2, float* arg3, int32_t arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: *arg3
    *arg3
    char* entry_ebx
    entry_ebx:1.b *= 2
    *arg1 = &arg1[*arg1]
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x80000000] += arg1.b
    int32_t eflags
    int32_t eflags_1
    char temp0
    char temp1
    temp0, temp1, eflags_1 = __aaa(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0
    arg1:1.b = temp1
    char temp1_1 = *arg5
    *arg5 += arg3.b
    bool c = temp1_1 + arg3.b u< temp1_1
    char* edi = arg6 - 1
    uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags_1)
    uint16_t* ebp = arg4 - 1
    uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags_1)
    char* var_7
    char* var_4
    
    if (arg4 == 1)
        var_4 = edi
        void* esp_1 = &var_7:3
        
        while (true)
            *(esp_1 - 4) = 0x556c6565
            
            if (not(add_overflow(arg4, 0xffffffff)))
                break
            
            *(esp_1 - 8) = edi
            esp_1 -= 8
        
        char* eax = __in_oeax_immb(0x40, eflags_1)
        eax.b += eax:1.b
        *eax += eax.b
        jump(eax)
    
    if (c)
        *arg3 += arg1.b + 1
    else
        var_4 = &__return_addr:1
        void* esp_3 = &var_4:1
        
        if (&__return_addr != 0xffffffff && not(c))
            arg1.b += arg1:1.b
            *arg1 = &arg1[*arg1]
            jump(arg1)
        
        bool c_1 = arg1 u< 0x4605da82
        uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags_1)
        void** gsbase
        int16_t cs
        bool z_4
        bool o_2
        
        if (c_1)
            var_7 = entry_ebx
            
            if (arg1 != 0x4605da82)
                if (arg1 - 0x4605da82 s>= 0)
                label_43f32f:
                    *esi_2 += arg1.b
                    arg1.b |= 0x54
                    c_1 = false
                    __outsd((arg2 + 1).w, *esi_2, esi_2, eflags_1)
                    int32_t eflags_2
                    int16_t temp0_8
                    temp0_8, eflags_2 = __arpl_memw_gpr16(*(edi + 0x6e), ebp.w)
                    *(edi + 0x6e) = temp0_8
                else
                    uint16_t* esi_8 = __outsb(arg2.w, *esi_2, esi_2, eflags_1)
                    char** var_b = &var_7
                    esp_3 = &var_b
                    esi_2 = __outsd(arg2.w, *esi_8, esi_8, eflags_1)
                    
                    if (add_overflow(arg1, 0xb9fa257e))
                        __invd()
                        arg3 -= 1
                        edi -= 1
                        goto label_43f278
                    
                    int32_t edx_1
                    arg1, edx_1, arg3 = 0x34436db()
                    *(edx_1 + (arg1 << 1) + 0x6f)
                    arg2 = edx_1 | *(edx_1 + (arg1 << 1) + 0x6f)
                    c_1 = false
                label_43f2ed:
                    
                    if (c_1)
                        goto label_43f353
                    
                    if (not(c_1))
                        int16_t temp0_4
                        temp0_4, eflags_1 = __arpl_memw_gpr16(*(edi + 0x6e), ebp.w)
                        *(edi + 0x6e) = temp0_4
                        *arg1 = &arg1[*arg1]
                        *arg1 += arg1.b
                        *entry_ebx += arg1.b
                        *arg1 += arg1.b
                        arg1:1.b *= 2
                        *arg2 += arg3.b
                        arg2 = *(entry_ebx + 0x7a) * 0x6d657473
                    label_43f30b:
                        void* ebp_3 = ebp - 1
                        void* esi_9 = __outsb(arg2.w, *(gsbase + esi_2), esi_2, eflags_1)
                        
                        if (ebp == 1)
                            __bound_gprv_mema32(ebp_3, *(arg3 + 0x4d))
                            ebp_3 = *(esi_9 + 0x69) * 0x657a696d
                        
                        *(arg2 + 0x69)
                        c_1 = false
                        z_4 = ebp_3 == 1
                        o_2 = add_overflow(ebp_3, 0xffffffff)
                        edi = *esp_3
                        esi_2 = *(esp_3 + 4)
                        ebp = *(esp_3 + 8)
                        entry_ebx = *(esp_3 + 0x10)
                        arg2 = *(esp_3 + 0x14)
                        arg3 = *(esp_3 + 0x18)
                        arg1 = *(esp_3 + 0x1c)
                        esp_3 += 0x20
                        
                        if (ebp_3 - 1 s< 0)
                            goto label_43f38a
                        
                        int32_t* edi_5
                        int32_t temp0_6
                        temp0_6, edi_5 = __insd(edi, arg2.w, eflags_1)
                        *edi_5 = temp0_6
                        *(arg2 + 0x65)
                        edi = *(arg2 + 0x65) * 0x48696206
                        o_2 = unimplemented  {imul edi, dword [edx+0x65], 0x48696206}
                    label_43f329:
                        uint8_t temp0_7
                        temp0_7, edi = __insb(edi, arg2.w, eflags_1)
                        *edi = temp0_7
                        
                        if (o_2)
                            entry_ebx = &entry_ebx[1]
                            goto label_43f35f
                        
                        goto label_43f32f
                    
                    uint16_t* esi_10 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
                    __outsb(arg2.w, *esi_10, esi_10, eflags_1)
                
                if (not(c_1))
                    jump(0x43f340)
                
                jump(0x43f33f)
            
            int32_t esp_10 = &var_7 * 2
            entry_ebx = &entry_ebx[1]
            arg1[0x43f348] += arg2.b
            float* temp4_1 = arg3
            float temp5_1 = *arg3
            arg3 += *arg3
            *(esp_10 - 4) = esp_10
            *(esp_10 - 8) = arg1
            esp_3 = esp_10 - 8
            esi_2 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
            
            if (temp4_1 i+ temp5_1 u>= temp4_1)
                if (add_overflow(temp4_1, temp5_1))
                    int32_t* edi_13
                    int32_t temp0_15
                    temp0_15, edi_13 = __insd(edi, arg2.w, eflags_1)
                    *edi_13 = temp0_15
                label_43f42c:
                    arg1:1.b ^= arg2:1.b
                    entry_ebx[1] += arg1.b
                    arg2 |= *(arg1 + (arg2 << 1) + 0x72)
                    *(esi_2 + 0x74)
                label_43f43c:
                    *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
                    *arg1 += arg1.b
                label_43f441:
                    *arg2 += arg1.b
                    *arg1 += arg1.b
                    *(esp_3 + (esi_2 << 3)) += arg3:1.b
                label_43f449:
                    char temp17 = *esi_2
                    *esi_2 += arg1.b
                    
                    if (add_overflow(temp17, arg1.b))
                        if (temp17 + arg1.b u>= temp17)
                            jump(0x43f523)
                        
                        jump(0x43f4be)
                    
                    uint16_t* esi_22 = __outsd(arg2.w, *(esi_2 - 1), esi_2 - 1, eflags_1)
                    __outsb(arg2.w, *esi_22, esi_22, eflags_1)
                    *(esp_3 - 4) = zx.d(cs)
                    
                    if (add_overflow(esi_2, 0xffffffff))
                        jump(0x43f4c3)
                    
                    jump(0x43f454)
            else if (temp4_1 != neg.d(temp5_1))
                uint16_t* esi_12 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
                esi_2 = __outsb(arg2.w, *esi_12, esi_12, eflags_1)
            label_43f353:
                *arg1 = &arg1[*arg1]
                *arg1 += arg1.b
                *edi += arg1.b
                *arg1 += arg1.b
                entry_ebx[(esi_2 << 3) + 0x43] += arg1.b
            label_43f35f:
                char temp15_1 = *arg2
                *arg2 += arg3.b
                c_1 = temp15_1 + arg3.b u< temp15_1
                
                if (add_overflow(temp15_1, arg3.b))
                    goto label_43f3d2
                
                esp_3 += 1
                
                if (c_1)
                    jump(0x43f367)
                
                goto label_43f3d1
            
            *esp_3
            char* esi_14 = *(esp_3 + 4)
            entry_ebx = *(esp_3 + 0x10)
            arg2 = *(esp_3 + 0x14)
            arg3 = *(esp_3 + 0x18)
            arg1 = *(esp_3 + 0x1c)
            esp_3 += 0x20
            *(esi_14 + 0x46)
            *(esi_14 + 0x46)
            bool c_5 = unimplemented  {imul ebp, dword [esi+0x46], 0x436d726f}
            esi_2 = __outsb(arg2.w, *(gsbase + esi_14), esi_14, eflags_1)
            
            if (ebp == 1)
                goto label_43f42c
            
            if (c_5)
                jump(0x43f3da)
            
            jump(0x43f3c9)
        
        *(&arg2[esi_2 * 2] + 0x43) += arg2:1.b
        *edi += arg3.b
        *(arg3 + 0x4f)
        *(arg3 + 0x4f) |= arg3.b
        c_1 = false
    label_43f278:
        uint8_t temp0_1
        temp0_1, edi = __insb(edi, arg2.w, eflags_1)
        *edi = temp0_1
        uint16_t* esi_4 = __outsd(arg2.w, *(esi_2 + 1), esi_2 + 1, eflags_1)
        
        if (c_1)
            arg2 += 1
            esi_2 = __outsd(arg2.w, *esi_4, esi_4, eflags_1)
            goto label_43f2ed
        
        *arg1 = adc.d(*arg1, arg1, c_1)
        bool c_2 = arg3 + arg1 u< arg3
        bool z_3 = arg3 == neg.d(arg1)
        arg3 = arg3 + arg1 - 1
        
        if (z_3 || arg3 != 0)
            *(esp_3 - 5) = arg2
            *arg3 = rlc.b(*arg3, 1, c_2)
            *esi_4 - *edi
            uint16_t* esi_5 = esi_4 + 1
            void* edi_1 = &edi[1]
            *arg1 += arg1:1.b
            *edi_1
            edi = edi_1 + 4
            c_1 = arg1 u< 0x4605da82
            z_4 = arg1 == 0x4605da82
            bool s_2 = arg1 - 0x4605da82 s< 0
            o_2 = add_overflow(arg1, 0xb9fa257e)
            esi_2 = __outsd(arg2.w, *esi_5, esi_5, eflags_1)
            
            if (not(c_1))
                arg1[0x43f2a0] += arg2.b
                float* temp30_1 = arg3
                arg3 += *arg2
                c_1 = temp30_1 + *arg2 u< temp30_1
                *(esp_3 - 9) = esp_3 - 5
                esp_3 -= 9
                bool p_1 = unimplemented  {inc esi}
                z_4 = esi_2 == 0xffffffff
                o_2 = add_overflow(esi_2, 1)
                esi_2 = __outsd(arg2.w, *(esi_2 + 1), esi_2 + 1, eflags_1)
                
                if (c_1)
                    esi_2 = __outsb(arg2.w, *esi_2, esi_2, eflags_1)
                    ebp = *(ebp + 0x69) * 0x620a657a
                    *(ebp + 0x61)
                    arg3 = *(ebp + 0x61) * 0x696d6978
                    c_1 = unimplemented  {imul ecx, dword [ebp+0x61], 0x696d6978}
                    o_2 = unimplemented  {imul ecx, dword [ebp+0x61], 0x696d6978}
                else
                    *(esp_3 - 4) = entry_ebx
                    esp_3 -= 4
                    
                    if (not(z_4))
                        uint8_t temp0_2
                        temp0_2, edi = __insb(edi, arg2.w, eflags_1)
                        *edi = temp0_2
                        *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
                        *arg1 += arg1.b
                        *entry_ebx += arg1.b
                        *arg1 += arg1.b
                        char temp38_1 = *(&arg2[esi_2 * 2] + 0x66080043)
                        *(&arg2[esi_2 * 2] + 0x66080043) += entry_ebx.b
                        bool c_3 = temp38_1 + entry_ebx.b u< temp38_1
                        
                        if (not(c_3))
                            goto label_43f30b
                        
                        esi_2 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
                        
                        if (c_3)
                            goto label_43f32f
                        
                        void* esi_7 = *(esp_3 + 4)
                        *(esp_3 + 8)
                        *(esp_3 + 0x10)
                        *(esp_3 + 0x18)
                        int16_t eax_2 = (*(esp_3 + 0x1c)).w
                        uint8_t* edi_3
                        uint8_t temp0_3
                        temp0_3, edi_3 = __insb(*esp_3, (*(esp_3 + 0x14)).w, eflags_1)
                        *edi_3 = temp0_3
                        eax_2:1.b |= *(esi_7 + 0x73)
                        *(esp_3 + 0x1d) = 0x9646c69
                        
                        if (eax_2:1.b u>= 0)
                            jump(0x43f31e)
                        
                        jump(0x43f2d1)
                
                if (p_1)
                    goto label_43f38a
                
                int16_t es
                *(esp_3 - 4) = zx.d(es)
                esp_3 -= 4
                __bound_gprv_mema32(ebp, *(arg3 + 0x48))
                goto label_43f329
            
            *(esp_3 - 9) = entry_ebx
            esp_3 -= 9
            void* ebx_9
            bool c_9
            bool z_7
            void* esp_20
            
            if (not(s_2))
                edi = *esp_3
                esi_2 = *(esp_3 + 4)
                ebp = *(esp_3 + 8)
                entry_ebx = *(esp_3 + 0x10)
                arg2 = *(esp_3 + 0x14)
                arg3 = *(esp_3 + 0x18)
                arg1 = *(esp_3 + 0x1c)
                esp_3 += 0x20
            label_43f37c:
                
                if (z_4)
                    if (z_4)
                    label_43f3d1:
                        esi_2 = __outsd(arg2.w, *(esi_2 + 1), esi_2 + 1, eflags_1)
                    else
                        esi_2 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
                        
                        if (c_1)
                            esi_2 = __outsb(arg2.w, *esi_2, esi_2, eflags_1)
                            uint8_t* edi_6
                            uint8_t temp0_9
                            temp0_9, edi_6 = __insb(edi, arg2.w, eflags_1)
                            *edi_6 = temp0_9
                            
                            if (not(s_2))
                                goto label_43f398
                            
                            if (o_2)
                                jump(0x43f3f8)
                            
                            jump(0x43f389)
                    
                label_43f3d2:
                    
                    if (c_1)
                        goto label_43f441
                    
                    esi_2 = __outsb(arg2.w, *(gsbase + esi_2), esi_2, eflags_1)
                    
                    if (entry_ebx != 0xffffffff)
                        if (c_1)
                            jump(0x43f366)
                        
                        jump(0x43f3db)
                    
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    arg1.b += *arg1
                    *arg1 += arg1.b
                    arg1.b -= 0xf4
                    goto label_43f449
                
                ebp -= 1
            label_43f3eb:
                uint16_t* esi_16 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
                __outsb(arg2.w, *esi_16, esi_16, eflags_1)
                esi_2 = *(edi + (ebp << 1) + 0x72)
                *entry_ebx += arg1.b
                *arg1 += arg1.b
                arg1:1.b += entry_ebx.b
            label_43f3fd:
                char temp28_1 = *arg3
                *arg3 += arg3.b
                c_1 = temp28_1 + arg3.b u< temp28_1
                int32_t* edi_9
                int32_t temp0_11
                temp0_11, edi_9 = __insd(edi, arg2.w, eflags_1)
                *edi_9 = temp0_11
                esp_20 = esp_3 + 1
                bool z_6 = esp_3 == 0xffffffff
                
                if (c_1)
                    if (not(z_6))
                        if (add_overflow(esp_3, 1))
                            void* esi_18 = *(esp_20 + 4)
                            *(esp_20 + 0x10)
                            int16_t edx_2 = (*(esp_20 + 0x14)).w
                            int32_t ecx_4 = *(esp_20 + 0x18)
                            *(esp_20 + 0x1c)
                            *(esi_18 + 0x46)
                            int32_t ebp_5 = *(esi_18 + 0x46) * 0xc6d726f
                            bool c_6 = unimplemented  {imul ebp, dword [esi+0x46], 0xc6d726f}
                            int32_t* edi_12
                            int32_t temp0_13
                            temp0_13, edi_12 = __insd(*esp_20, edx_2, eflags_1)
                            *edi_12 = temp0_13
                            int32_t eflags_3
                            int16_t temp0_14
                            temp0_14, eflags_3 =
                                __arpl_memw_gpr16(*(ecx_4 + 1 + (ebp_5 << 1) + 0x76), esi_18.w)
                            *(ecx_4 + 1 + (ebp_5 << 1) + 0x76) = temp0_14
                            __outsd(edx_2, *(esi_18 + 1), esi_18 + 1, eflags_3)
                            
                            if (c_6)
                                jump("eEvent")
                            
                            jump(0x43f42a)
                        
                        int32_t* edi_10
                        int32_t temp0_12
                        temp0_12, edi_10 = __insd(edi_9, arg2.w, eflags_1)
                        *edi_10 = temp0_12
                    label_43f40b:
                        *(esp_20 - 4) = arg1
                        esp_20 -= 4
                        
                        if (not(c_1))
                            jump(0x43f40e)
                        
                        goto label_43f478
                    
                    *(esp_20 - 4) = esp_20
                    esp_20 -= 4
                label_43f478:
                    __outsd(arg2.w, *esi_2, esi_2, eflags_1)
                    uint16_t* esi_27 = *(esp_20 + 4)
                    *(esp_20 + 8)
                    *(esp_20 + 0x10)
                    int32_t edx_3 = *(esp_20 + 0x14)
                    *(esp_20 + 0x18)
                    *(esp_20 + 0x1c)
                    uint8_t* edi_15
                    uint8_t temp0_17
                    temp0_17, edi_15 = __insb(*esp_20, edx_3.w, eflags_1)
                    *edi_15 = temp0_17
                    *(esp_20 + 0x1c) = edx_3
                    
                    if (c_1)
                        uint8_t* edi_16
                        uint8_t temp0_18
                        temp0_18, edi_16 = __insb(edi_15, edx_3.w, eflags_1)
                        *edi_16 = temp0_18
                        
                        if (ebp == 1)
                            jump(0x43f487)
                        
                        jump(0x43f483)
                    
                    *(esp_20 + 0x1c)
                    uint16_t* esi_29 = __outsd(edx_3.w + 1, *esi_27, esi_27, eflags_1)
                    __outsd(edx_3.w + 1, *esi_29, esi_29, eflags_1)
                    uint8_t* edi_18
                    uint8_t temp0_21
                    temp0_21, edi_18 = __insb(edi_15, edx_3.w + 1, eflags_1)
                    *edi_18 = temp0_21
                    void** edi_19 = *(esp_20 + 0x1e)
                    uint16_t* esi_31 = *(esp_20 + 0x22)
                    int32_t ebp_9 = *(esp_20 + 0x26)
                    int32_t ebx_10 = *(esp_20 + 0x2e)
                    int32_t edx_5 = *(esp_20 + 0x32)
                    void* ecx_7 = *(esp_20 + 0x36)
                    char* eax_5 = *(esp_20 + 0x3a)
                    void* esi_32 = __outsb(edx_5.w, *esi_31, esi_31, eflags_1)
                    char* eax_6
                    eax_6.b = eax_5.b - 0xb
                    char temp19 = *eax_6
                    *eax_6 += ecx_7.b
                    *(esp_20 + 0x3a) = zx.d(cs)
                    *(esp_20 + 0x36) = esp_20 + 0x3a
                    *(esp_20 + 0x32) = ebx_10 + 1
                    *(esp_20 + 0x2e) = 0x4374726f
                    
                    if (temp19 == neg.b(ecx_7.b))
                        jump("Event")
                    
                    eax_6[0x1c00442c] += edx_5:1.b
                    void* eax_8 = *(esp_20 + 0x2e)
                    *(eax_8 * 2 - 0x6c) -= eax_8
                    *(eax_8 * 2 - 0x60) -= eax_8
                    eax_8.b -= *(eax_8 * 2 + 0x58)
                    ecx_7:1.b = 0x42
                    *(esp_20 + 0x32c00073) += 0x42
                    *(ecx_7 + 0x6a2c0041) += ecx_7.b
                    *(esp_20 + 0x34) += edx_5.b
                    *(eax_8 - 0x1fffbce2) += 0x42
                    void* eax_9
                    eax_9.b = (eax_8 & *(ebx_10 + 1)).b | 0x23
                    *(eax_9 + 0x19) += (ebx_10 + 2):1.b
                    *(eax_9 - 0xfffbbd1) += eax_9:1.b
                    int16_t ss
                    *(esp_20 + 0x31) = zx.d(ss)
                    *(ebx_10 + 4 + (ebp_9 << 2)) += eax_9.b
                    *eax_9 += ecx_7.b
                    *edi_19 = eax_9
                    void* edi_20 = &edi_19[1]
                    *(eax_9 + esi_32 - 0x2987ffbc) += (edx_5 + 2).b
                    *(esp_20 + 0x31 + (ebp_9 << 2) - 0x492bffbe) += eax_9.b
                    *(eax_9 + 0x54004432) += ecx_7.b
                    *(eax_9 * 2 + 0xc) ^= eax_9
                    char* eax_10
                    eax_10.b = 0x42 + (ebx_10 + 4):1.b
                    eax_10.b = __salc(eflags_1)
                    *(edi_20 + edx_5 + 5 + 0x43) += eax_10.b
                    eax_10.b *= 2
                    *(esp_20 + 0x32)
                    *(ebx_10 + 5 + edx_5 + 5 + 0x43) += eax_10.b
                    *(edi_20 + edx_5 + 5 + 0x22180043) += eax_10:1.b
                    *(eax_10 + edi_20) += (edx_5 + 5).b
                    eax_10[0xdc0042ed] += eax_10:1.b
                    *eax_10 += (edx_5 + 5):1.b
                    eax_10.b += (edx_5 + 5):1.b
                    *eax_10 += (edx_5 + 5):1.b
                    *(esp_20 + 0x3a + ((ebp_9 + 1) << 3) + 0x18e40042) += (ebx_10 + 6).b
                    *(edi_20 + 1 + (ecx_7 << 1)) += (eax_10 - 1):1.b
                    char temp26 = eax_10[0xc004314]
                    eax_10[0xc004314] += (eax_10 - 1):1.b
                    int32_t eflags_5
                    int16_t temp0_24
                    temp0_24, eflags_5 = __arpl_memw_gpr16(*((eax_10 - 1) * 2 + 0xc), (eax_10 - 1).w)
                    *((eax_10 - 1) * 2 + 0xc) = temp0_24
                    void* eax_11
                    eax_11.b = sbb.b((eax_10 - 1).b, 0x44, temp26 + (eax_10 - 1):1.b u< temp26)
                    *(esi_32 + ebx_10 + 7 + 0x55200044) += (ebx_10 + 7):1.b
                    *(eax_11 + ebp_9 + 1 + 0x28f80044) += eax_11.b
                    *(esi_32 + 0x25d80044) += (edx_5 + 5):1.b
                    void** edi_22 = *(esp_20 + 0x3e)
                    char* esi_33 = *(esp_20 + 0x42)
                    void* ebp_11 = *(esp_20 + 0x46)
                    char* ebx_21 = *(esp_20 + 0x4e)
                    char* edx_11 = *(esp_20 + 0x52)
                    int32_t ecx_8 = *(esp_20 + 0x56)
                    char* eax_12
                    eax_12:1.b = (*(esp_20 + 0x5a)):1.b + ebx_21:1.b
                    ebx_21[0x32840044] += eax_12:1.b
                    *esi_33 += (ecx_8 - 1).b
                    *eax_12 += eax_12.b
                    *eax_12 += eax_12.b
                    *ebx_21 += eax_12.b
                    *eax_12 += eax_12.b
                    *(eax_12 + edx_11 + 0x2240040) += ebx_21:1.b
                    *eax_12 += eax_12.b
                    *eax_12 += (&ebx_21[1]):1.b
                    eax_12.b += *eax_12
                    eax_12[0xfffffff2] += edx_11:1.b
                    *(edx_11 + eax_12) += (ecx_8 - 1).b
                    ebx_21[2] += (&ebx_21[2]):1.b
                    *edi_22 += (ecx_8 - 1).b
                    *(eax_12 * 2) += edx_11.b
                    int32_t eflags_6
                    char temp0_25
                    temp0_25, eflags_6 = __daa(eax_12.b, eflags_5)
                    eax_12.b = temp0_25
                    *edi_22 += edx_11:1.b
                    *(ecx_8 + 0x200a0ff) += eax_12.b
                    *(ecx_8 - 1) += edx_11.b
                    *edi_22 += edx_11
                    *eax_12 += esp_20 + 0x62
                    *edi_22 += &ebx_21[2]
                    *esi_33 = &eax_12[*esi_33]
                    *eax_12 += edx_11.b
                    *(ecx_8 - 1) += edx_11.b
                    *edx_11 += edx_11.b
                    *eax_12 = &ebx_21[2 + *eax_12]
                    *edx_11 += eax_12:1.b
                    char* ecx_9
                    ecx_9:1.b = (ecx_8 - 1):1.b + *eax_12
                    *ecx_9 += edx_11.b
                    edx_11.b += ebx_21[2]
                    eax_12.b = 0
                    eax_12.b = sbb.b(0, *eax_12, false)
                    eax_12[0xffffffb0] += eax_12.b
                    int32_t eflags_7
                    char temp0_26
                    char temp1_2
                    temp0_26, temp1_2, eflags_7 = __aas(eax_12.b, eax_12:1.b, eflags_6)
                    eax_12.b = temp0_26
                    eax_12:1.b = temp1_2
                    eax_12.b = 0
                    eax_12.b = 0x17
                    eax_12.b = 0x3c
                    eax_12.b = 1
                    eax_12.b = 5
                    eax_12.b = 0xd
                    eax_12.b = 0x10
                    eax_12.b = 0xe
                    eax_12.b = 0x15
                    eax_12.b = 0x19
                    eax_12.b = 0x1d
                    eax_12.b = 0x21
                    eax_12.b = 0x12
                    eax_12.b = 0x29
                    eax_12.b = 0x3d
                    eax_12.b = 8
                    eax_12.b = 0xb6
                    *(esp_20 + 0x5e) = *(ebp_11 - 0x12001101)
                    *(esp_20 + 0x5a) = *(edi_22 * 9 - 0x4d004d)
                    ecx_9.b = 0xff
                    *(esp_20 + 0x56) = *(eax_12 - 0x2a002901)
                    undefined
                
                if (not(z_6))
                    goto label_43f473
                
                uint16_t* esi_24 = __outsb(arg2.w, *esi_2, esi_2, eflags_1)
                
                if (not(z_6))
                    __outsd(arg2.w, *esi_24, esi_24, eflags_1)
                    esi_2 = *(ebp + (arg3 << 2) + 0x40) * 0x43f47400
                label_43f473:
                    *arg3 += arg1.b
                    arg1.b |= 0x54
                    c_1 = false
                    goto label_43f478
                
                arg3 += 1
                int16_t temp0_19
                temp0_19, eflags_1 = __arpl_memw_gpr16(*(arg3 + (ebp << 1) + 0x6f), esi_24.w)
                *(arg3 + (ebp << 1) + 0x6f) = temp0_19
                esi_2 = __outsb(arg2.w, *esi_24, esi_24, eflags_1)
                *(esp_20 - 4) = ebp
                *arg1
                *arg1 |= arg2.b
                c_9 = false
                *(esp_20 - 0x43fc) = esp_20 - 0x43f8
                esp_3 = esp_20 - 0x43fc
                ebx_9 = &entry_ebx[2]
                z_7 = entry_ebx == 0xfffffffe
                uint8_t* edi_17
                uint8_t temp0_20
                temp0_20, edi_17 = __insb(edi_9, arg2.w, eflags_1)
                *edi_17 = temp0_20
            else
                if (not(z_4))
                    int32_t* edi_4
                    int32_t temp0_5
                    temp0_5, edi_4 = __insd(edi, arg2.w, eflags_1)
                    *edi_4 = temp0_5
                    goto label_43f30b
                
                edi.w = *esp_3
                esi_2.w = *(esp_3 + 2)
                ebp.w = *(esp_3 + 4)
                int16_t* esp_12
                esp_12.w = (esp_3 + 6).w + 2
                entry_ebx.w = *esp_12
                arg2.w = esp_12[1]
                arg3.w = esp_12[2]
                arg1.w = esp_12[3]
                esp_3 = &esp_12[4]
                
                if (z_4)
                    if (not(z_4))
                        if (o_2)
                            goto label_43f3e7
                        
                        z_4 = esp_3 == 0xffffffff
                        s_2 = esp_3 + 1 s< 0
                        o_2 = add_overflow(esp_3, 1)
                        edi.w = *(esp_3 + 1)
                        esi_2.w = *(esp_3 + 3)
                        ebp.w = *(esp_3 + 5)
                        int16_t* esp_14
                        esp_14.w = (esp_3 + 7).w + 2
                        entry_ebx.w = *esp_14
                        arg2.w = esp_14[1]
                        arg3.w = esp_14[2]
                        arg1.w = esp_14[3]
                        esp_3 = &esp_14[4]
                        goto label_43f37c
                    
                    int32_t temp43_1 = *(arg1 + 0x6f)
                    *(arg1 + 0x6f) = adc.d(temp43_1, esi_2, c_1)
                    c_1 = adc.d(temp43_1, esi_2, c_1) u< temp43_1
                        || (c_1 && adc.d(temp43_1, esi_2, c_1) == temp43_1)
                    void* temp44_1 = esp_3
                    esp_3 += 1
                    z_4 = temp44_1 == 0xffffffff
                    o_2 = add_overflow(temp44_1, 1)
                label_43f38a:
                    edi.w = *esp_3
                    esi_2.w = *(esp_3 + 2)
                    ebp.w = *(esp_3 + 4)
                    int16_t* esp_16
                    esp_16.w = (esp_3 + 6).w + 2
                    entry_ebx.w = *esp_16
                    arg2.w = esp_16[1]
                    arg3.w = esp_16[2]
                    arg1.w = esp_16[3]
                    esp_3 = &esp_16[4]
                    
                    if (not(z_4))
                        goto label_43f3fd
                    
                    if (z_4)
                        goto label_43f3e4
                    
                    *(arg2 + 0x65)
                    *(arg2 + 0x65)
                    c_1 = unimplemented  {imul edi, dword [edx+0x65], 0x796c6e4f}
                    o_2 = unimplemented  {imul edi, dword [edx+0x65], 0x796c6e4f}
                label_43f398:
                    *(esp_3 - 4) = zx.d(cs)
                    esp_3 -= 4
                    
                    if (o_2)
                        jump(0x43f40a)
                    
                    *(esp_3 - 4) = entry_ebx
                    esp_20 = esp_3 - 4
                    int16_t temp0_10
                    temp0_10, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x65), esi_2.w)
                    *(arg2 + 0x65) = temp0_10
                    int32_t esi_13 = __outsb(arg2.w, *(gsbase + esi_2), esi_2, eflags_1)
                    esi_2 = __outsb(arg2.w, *(gsbase + esi_13), esi_13, eflags_1)
                    
                    if (entry_ebx == 0xffffffff)
                        goto label_43f40b
                    
                    if (c_1)
                        jump(0x43f3b7)
                    
                    jump(0x43f3a8)
                
                *edi
                c_1 = arg3 + *edi u< arg3
                *(esp_3 - 4) = esp_3
                void* esp_18 = esp_3 - 4
                esp_3 = esp_18 + 1
                z_4 = esp_18 == 0xffffffff
                o_2 = add_overflow(esp_18, 1)
            label_43f3e4:
                edi.w = *esp_3
                esi_2.w = *(esp_3 + 2)
                ebp.w = *(esp_3 + 4)
                int16_t* esp_19
                esp_19.w = (esp_3 + 6).w + 2
                entry_ebx.w = *esp_19
                arg2.w = esp_19[1]
                arg3.w = esp_19[2]
                arg1.w = esp_19[3]
                esp_3 = &esp_19[4]
            label_43f3e7:
                
                if (z_4)
                    if (not(z_4))
                        goto label_43f3eb
                    
                    *(esp_3 - 4) = entry_ebx
                    esp_3 -= 4
                    int16_t temp0_16
                    temp0_16, eflags_1 = __arpl_memw_gpr16(arg3[0x1b].w, esp_3.w)
                    arg3[0x1b].w = temp0_16
                    goto label_43f43c
                
                if (not(c_1))
                    if (o_2)
                        jump(0x43f4c8)
                    
                    jump(0x43f459)
                
                ebx_9 = &entry_ebx[1]
                char temp45_1 = *arg1
                *arg1 += arg3.b
                bool c_8 = temp45_1 + arg3.b u< temp45_1
                char temp46_1 = *(ebx_9 + (arg1 << 1) + 0x6c)
                *(ebx_9 + (arg1 << 1) + 0x6c) = adc.b(temp46_1, arg2.b, c_8)
                c_9 = adc.b(temp46_1, arg2.b, c_8) u< temp46_1
                    || (c_8 && adc.b(temp46_1, arg2.b, c_8) == temp46_1)
                z_7 = adc.b(temp46_1, arg2.b, c_8) == 0
            __outsd(arg2.w, *esi_2, esi_2, eflags_1)
            
            if (c_9)
                *(esp_3 - 4) = arg3
                
                if (not(z_7))
                    jump(0x43f538)
                
                jump("ryEvent")
            
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1[0xfffffff6] += arg1:1.b
            arg1.b += (ebx_9 + 2):1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg2:1.b ^= 0x43
            arg2:1.b += arg1:1.b
            *(ebx_9 + 2)
            arg1.b = 0xe7
            *(esp_3 + 0x25a00041) += arg2.b
            *arg1 += ((ebx_9 + 2).w + 1):1.b
            int32_t eflags_4
            char temp0_22
            temp0_22, eflags_4 = __daa(0xe7, eflags_1)
            arg1.b = temp0_22
            *arg1 += arg3.b
            
            if (arg1 == *arg1)
                jump(0x43f5ba)
            
            jump(0x43f572)
    
    trap(0xda)
}
