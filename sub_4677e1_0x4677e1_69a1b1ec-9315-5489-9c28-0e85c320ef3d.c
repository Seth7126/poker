// ============================================================
// 函数名称: sub_4677e1
// 虚拟地址: 0x4677e1
// WARP GUID: 69a1b1ec-9315-5489-9c28-0e85c320ef3d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4677e1(int32_t* arg1, char* arg2, void* arg3, void* arg4 @ ebp, void* arg5 @ esi, char* arg6 @ edi, long double arg7 @ st0, char* arg8, void* arg9, char* arg10, char* arg11, void* arg12, char* arg13)
{
    // 第一条实际指令: arg1.b += arg3:1.b
    arg1.b += arg3:1.b
    arg1.b = arg1.b
    char temp1 = arg1.b
    arg1.b += arg3.b
    bool z = temp1 == neg.b(arg3.b)
    char* eax
    char* entry_ebx
    void* esp_47
    bool c_16
    bool z_11
    int32_t eflags
    int32_t eflags_3
    void* ebx_1
    char** esp
    void* esp_31
    void* esp_42
    void* ebp
    char* esi
    char* edi_7
    TEB* fsbase
    uint16_t* gsbase
    int16_t cs
    int16_t ss
    bool c_3
    bool c_5
    bool c_13
    bool z_1
    bool z_2
    bool z_4
    bool s_1
    bool s_2
    bool s_3
    bool s_4
    bool o_2
    bool o_4
    bool o_5
    bool o_12
    bool o_16
    
    if (z)
        esi = arg8
        entry_ebx = arg10
        arg2 = arg11
        arg3 = arg12
        eax = arg13
        void arg_20
        esp = &arg_20
    label_467830:
        *(entry_ebx + 0x14)
        ebp.w = *(entry_ebx + 0x14) * 0x7c00
        c_3 = unimplemented  {imul bp, word [ebx+0x14], 0x7c00}
        arg3 -= 1
        
        if (z || arg3 != 0)
            *(esp - 4) = 0x14004773
            esp -= 4
            char* temp7_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            z_4 = temp7_1 == 0xffffffff
        label_467884:
            
            if (c_3)
                goto label_4678eb
            
            arg6 = *esp
            uint16_t* esi_1 = esp[1]
            int32_t ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            
            if (z_4)
                goto label_4678ee
            
            ebp = ebp_1 - 1
            esi = __outsd(arg2.w, *esi_1, esi_1, eflags)
            
            if (ebp_1 != 1)
                goto label_467900
            
            char** temp32_1 = esp
            esp += 1
            z = temp32_1 == 0xffffffff
            goto label_46788f
        
        char temp8_1 = *0x6c6c6163
        *0x6c6c6163 += arg3.b
        c_3 = temp8_1 + arg3.b u< temp8_1
        z_2 = temp8_1 == neg.b(arg3.b)
        s_2 = temp8_1 + arg3.b s< 0
        o_2 = add_overflow(temp8_1, arg3.b)
        arg6 = *esp
        esp = &esp[1]
        esi = __outsd(arg2.w, *esi, esi, eflags)
        
        if (z_2 || c_3)
            goto label_4678a5
        
        if (not(c_3))
            goto label_4678b3
        
        if (z_2)
            eax.b = sbb.b(eax.b, *(fsbase + eax), c_3)
            c_3 = unimplemented  {sbb al, byte [fs:eax]}
            esp -= 1
            arg3 -= 1
            
            if (arg3 != 0)
                goto label_467892
            
            *entry_ebx += arg2.b
            void* edi_3 = arg6 - 1
            *(esp - 4) = esi
            esp -= 4
            entry_ebx = &entry_ebx[1]
            arg6 = edi_3 - 1
            z_2 = edi_3 == 1
            
            if (add_overflow(edi_3, 0xffffffff))
                esi = __outsb(arg2.w, *(gsbase + esi), esi, eflags)
            label_4678ca:
                
                if (z_2)
                    goto label_4678e6
                
                goto label_4678cc
            
            ebp = *(arg6 + 0x6e) * 0x6d6f7246
            esp = *(arg3 + 0x6c) * 0x1b676f
            eax.b &= 0x6d
            arg6 = &arg6[1]
            char temp43_1 = entry_ebx[eax << 1]
            entry_ebx[eax << 1] += arg2.b
            c_3 = temp43_1 + arg2.b u< temp43_1
            z_2 = temp43_1 == neg.b(arg2.b)
            s_3 = temp43_1 + arg2.b s< 0
            o_4 = add_overflow(temp43_1, arg2.b)
            
            if (c_3)
                goto label_4678d0
            
            arg6 = *esp
            esi = esp[1]
            ebp = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            
            if (z_2)
                goto label_4678d3
            
            arg4 = ebp - 1
            esi = __outsd(arg2.w, *esi, esi, eflags)
            
            if (ebp == 1)
                goto label_467872
            
            *eax = sbb.d(*eax, eax, c_3)
            arg6[eax << 1]
            arg6[eax << 1] |= entry_ebx:1.b
            c_3 = false
        label_4678eb:
            char temp13_1 = eax.b
            char temp14_1 = entry_ebx[0x72]
            bool cond:14_1 = c_3
            eax.b = adc.b(temp13_1, temp14_1, cond:14_1)
            c_3 = adc.b(temp13_1, temp14_1, cond:14_1) u< temp13_1
                || (cond:14_1 && adc.b(temp13_1, temp14_1, cond:14_1) == temp13_1)
            z_4 = adc.b(temp13_1, temp14_1, cond:14_1) == 0
        label_4678ee:
            arg6 = *esp
            esi = esp[1]
            ebp = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
        label_4678f0:
            
            if (z_4)
                goto label_467957
            
            char* temp40_1 = entry_ebx
            entry_ebx -= 1
            z_1 = temp40_1 == 1
            s_1 = temp40_1 - 1 s< 0
            goto label_4678f3
        
        arg6 = &arg6[1]
    label_4678b5:
        char temp24_1 = entry_ebx[eax << 1]
        entry_ebx[eax << 1] += arg2.b
        c_3 = temp24_1 + arg2.b u< temp24_1
        z_2 = temp24_1 == neg.b(arg2.b)
        s_4 = temp24_1 + arg2.b s< 0
        
        if (not(c_3))
            arg6 = *esp
            esi = esp[1]
            ebp = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            
            if (z_2)
                if (z_2)
                    goto label_46798c
                
                goto label_467924
            
            void* temp42_1 = ebp
            ebp -= 1
            esi = __outsd(arg2.w, *esi, esi, eflags)
            
            if (temp42_1 != 1)
                goto label_467934
            
            char* temp53_1 = arg6
            arg6 -= 1
            z_2 = temp53_1 == 1
            s_4 = temp53_1 - 1 s< 0
            o_5 = add_overflow(temp53_1, 0xffffffff)
            
            if (z_2 || c_3)
                goto label_46792a
            
            if (c_3)
                goto label_46790c
            
            if (not(z_2) && not(c_3))
                esi = __outsb(arg2.w, *esi, esi, eflags)
                goto label_4678ca
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (not(z_2))
                goto label_467931
            
            uint16_t* esi_3 = __outsb(arg2.w, *esi, esi, eflags)
            esi = __outsd(arg2.w, *esi_3, esi_3, eflags)
            
            if (z_2)
                *eax = adc.d(*eax, eax, c_3)
                goto label_4679a6
            
            __outsb(arg2.w, *esi, esi, eflags)
            
            if (z_2)
                jump(0x467a7e)
            
            jump(0x467a1b)
        
        if (z_2 || c_3)
            if (z_2)
                goto label_46798c
            
        label_467924:
            *eax = adc.b(*eax, eax.b, c_3)
        label_467926:
            *(esp - 4) = ebp
            esp -= 0x48c4
        label_46792a:
            *(eax + 0x72) |= esi
        label_46792d:
            *(esi + 0x74)
        label_467934:
            int48_t ldtr = __lldt_memw(*(eax + 0x80048c2))
        label_46793b:
            __bound_gprv_mema32(esi, *(eax + 0x72))
            *(esi + 0x74)
            ebp = *(esi + 0x74) * 0xf7469
            bool c_4 = unimplemented  {imul ebp, dword [esi+0x74], 0xf7469}
            eax.b = adc.b(eax.b, 0xc2, c_4)
        label_467947:
            eax -= 1
        label_467948:
            char temp28_1 = *eax
            *eax += arg3.b
            c_3 = temp28_1 + arg3.b u< temp28_1
            z_2 = temp28_1 == neg.b(arg3.b)
            
            if (not(add_overflow(temp28_1, arg3.b)))
                arg6 = *esp
                esp = &esp[1]
                
                if (z_2)
                    ss = *esp
                    esp += 2
                    arg2[eax << 2] += arg2:1.b
                    char temp44_1 = *eax
                    *eax += arg2.b
                    c_3 = temp44_1 + arg2.b u< temp44_1
                    goto label_4679bc
                
                if (temp28_1 + arg3.b s< 0)
                    goto label_4679c6
                
                goto label_467952
            
            edi_7 = *esp
            esi = esp[1]
            ebp = esp[2]
            ebx_1 = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
        label_4679c0:
            
            if (z_2)
                trap(0xd)
            
            entry_ebx = ebx_1 + 1
            z_2 = ebx_1 == 0xffffffff
            uint8_t temp0_9
            temp0_9, arg6 = __insb(edi_7, arg2.w, eflags)
            *arg6 = temp0_9
            esp = *(entry_ebx + 0x6b) * 0x6e657645
            goto label_4679cb
        
        if (c_3)
            goto label_4679ed
        
    label_46798c:
        esi = __outsb(arg2.w, *esi, esi, eflags)
    label_46798d:
        
        if (not(c_3))
            goto label_467a00
        
        if (z_2)
            arg2 ^= *(fsbase + arg3)
            eax.b += entry_ebx:1.b
            goto label_467998
        
        *(esp - 4) = zx.d(cs)
        char temp76_1 = eax[(entry_ebx << 3) + 0x73070046]
        eax[(entry_ebx << 3) + 0x73070046] += eax.b
        c_5 = temp76_1 + eax.b u< temp76_1
        z_2 = temp76_1 == neg.b(eax.b)
        s_4 = temp76_1 + eax.b s< 0
        o_12 = add_overflow(temp76_1, eax.b)
        arg6 = *(esp - 4)
        esi = *esp
        ebp = esp[1]
        entry_ebx = esp[3]
        arg2 = esp[4]
        arg3 = esp[5]
        eax = esp[6]
        esp = &esp[7]
    label_4679fb:
        
        if (not(z_2) && not(c_5))
            char* edi_9 = *esp
            esi = esp[1]
            esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            esp[7]
            esp = &esp[8]
            uint8_t* edi_10
            uint8_t temp0_10
            temp0_10, edi_10 = __insb(edi_9, arg2.w, eflags)
            *edi_10 = temp0_10
            uint8_t* edi_11
            uint8_t temp0_11
            temp0_11, edi_11 = __insb(edi_10, arg2.w, eflags)
            *edi_11 = temp0_11
        label_467a00:
            *(esp - 4) = zx.d(cs)
            *(arg3 + (entry_ebx << 3) + 0x6c070046) += arg3:1.b
            __outsd(arg2.w, *esi, esi, eflags)
            esi = esp[8]
            ebp = esp[9]
            entry_ebx = esp[0xb]
            arg2 = esp[0xc]
            arg3 = esp[0xd]
            eax = esp[0xe]
            uint8_t* edi_13
            uint8_t temp0_12
            temp0_12, edi_13 = __insb(esp[7], arg2.w, eflags)
            *edi_13 = temp0_12
            uint8_t temp0_13
            temp0_13, arg6 = __insb(edi_13, arg2.w, eflags)
            *arg6 = temp0_13
            ss = esp[0xf].w
            esp += 0x3e
            *eax += entry_ebx:1.b
            char temp67_1 = *esi
            *esi = rol.b(*esi, 0x10)
            c_3 = unimplemented  {rol byte [esi], 0x10}
            z_2 = rol.b(temp67_1, 0x10) == 0
            s_3 = rol.b(temp67_1, 0x10) s< 0
            o_4 = unimplemented  {rol byte [esi], 0x10}
        label_467a15:
            
            if (not(o_4))
                goto label_467a17
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (not(z_2))
                goto label_467aef
            
            if (c_3)
                goto label_467ade
            
            goto label_467a7d
        
        if (z_2)
            if (z_2)
                goto label_467ad5
            
            goto label_467a66
        
    label_467ad7:
        char* temp75_1 = esi
        esi -= 1
        s_4 = temp75_1 - 1 s< 0
    label_467ad8:
        
        if (s_4)
        label_467b4f:
            ebp = *(arg6 + 0x6e) * 0x341c0016
            goto label_467b57
        
    label_467adb:
        *eax = adc.b(*eax, eax.b, c_5)
    label_467ade:
        arg6.w += 1
        char temp79_1 = *arg3
        *arg3 += arg3.b
        z_2 = temp79_1 == neg.b(arg3.b)
        *(arg2 + 0x63)
        esp = *(arg2 + 0x63) * 0x4a
        c_3 = unimplemented  {imul esp, dword [edx+0x63], 0x4a}
        o_4 = unimplemented  {imul esp, dword [edx+0x63], 0x4a}
    label_467ae6:
        
        if (z_2)
            if (o_4)
                goto label_467b3e
            
            goto label_467aea
        
        eax.b ^= 0x48
    label_467b57:
        char temp84_1 = *arg6
        *arg6 += arg3.b
        c_13 = temp84_1 + arg3.b u< temp84_1
        char* temp85_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        void* esp_35
        
        if (c_13)
            esp = *(arg3 + 0x6c) * 0x10676f
        label_467bc9:
            eax.b = __in_al_dx(arg2.w, eflags)
            char temp0_37
            char temp1_1
            temp0_37, temp1_1, eflags = __aaa(eax.b, eax:1.b, eflags)
            eax.b = temp0_37
            eax:1.b = temp1_1
            eax -= 1
            char temp103_1 = *arg3
            *arg3 += arg3.b
            *(esp - 4) = esi
            
            if (temp103_1 + arg3.b u< temp103_1)
                esp_35 = *(arg3 + 0x6c) * 0x12676f
                goto label_467bd9
            
            *(esp - 8) = entry_ebx
            esp_47 = esp - 8
            
            if (temp103_1 != neg.b(arg3.b))
                *(esi + 0x67)
                arg6 = &arg6[1]
                *arg6 += eax.b
            label_467c42:
                
                if (arg6 == 0xffffffff)
                    jump(0x467c92)
                
                jump(0x467c46)
            
            int16_t temp0_42
            temp0_42, eflags_3 = __arpl_memw_gpr16(*(gsbase + arg2 * 2), esi.w)
            *(gsbase + arg2 * 2) = temp0_42
        label_467caf:
            *(esp_47 - 4) = eax
            *(esp_47 - 8) = arg3
            *(esp_47 - 0xc) = arg2
            *(esp_47 - 0x10) = entry_ebx
            *(esp_47 - 0x14) = esp_47 - 0x10
            *(esp_47 - 0x18) = ebp
            *(esp_47 - 0x1c) = esi
            *(esp_47 - 0x20) = arg6
            void* ebp_20 = *(esi + 0x74) * 0x4c8c0017
            *(eax - 1) += arg2.b
            int32_t esp_52 = *(arg3 + 0x6c) * 0x6c42676f
            uint16_t* esi_25 = __outsb(arg2.w, *(gsbase + esi), esi, eflags_3)
            *(esp_52 - 4) = 0x116b6365
            char temp116 = eax[0xa0047bf]
            eax[0xa0047bf] += arg2.b
            
            if (temp116 + arg2.b u>= temp116)
                *(esp_52 - 7) = 0x6c616944
                __outsd(arg2.w, *esi_25, esi_25, eflags_3)
                undefined
            
            __bound_gprv_mema32(ebp_20, *(ebp_20 + 0x19))
            char temp118 = *(eax - 1)
            *(eax - 1) += (eax - 1).b
            *0x53120047 = (eax - 1).b
            
            if (temp118 == neg.b((eax - 1).b))
                jump(0x467da9)
            
            jump("isibleAbsolu")
        
        char* edi_19 = *esp
        void* esi_16 = esp[1]
        ebp = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        eax = esp[7]
        esp = &esp[8]
        
        if (temp85_1 == 0xffffffff)
            uint8_t temp0_35
            temp0_35, arg6 = __insb(edi_19, arg2.w, eflags)
            *arg6 = temp0_35
            esi = __outsd(arg2.w, *esi_16, esi_16, eflags)
            goto label_467bc6
        
        o_16 = add_overflow(entry_ebx, 1)
    label_467b60:
        arg6 = *esp
        esi = esp[1]
        ebp = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        eax = esp[7]
        esp_42 = &esp[8]
        
        if (o_16)
            goto label_467ba8
        
        *(arg3 + 0x6c)
        esp_35 = *(arg3 + 0x6c) * 0x13676f
        bool c_10 = unimplemented  {imul esp, dword [ecx+0x6c], 0x13676f}
        eax[arg3 << 1] = adc.b(eax[arg3 << 1], arg2:1.b, c_10)
        char temp88_1 = entry_ebx[eax << 1]
        entry_ebx[eax << 1] += arg3.b
        bool c_11 = temp88_1 + arg3.b u< temp88_1
        bool z_8 = temp88_1 == neg.b(arg3.b)
        
        if (c_11)
            eax.b = adc.b(eax.b, *eax, c_11)
        label_467bd9:
            *arg6 <<= 1
        else
            arg6 = *esp_35
            esi = *(esp_35 + 4)
            ebp = *(esp_35 + 8)
            entry_ebx = *(esp_35 + 0x10)
            arg2 = *(esp_35 + 0x14)
            arg3 = *(esp_35 + 0x18)
            eax = *(esp_35 + 0x1c)
            esp_35 += 0x20
            
            if (not(z_8))
                esp_31 = *(arg3 + 0x6c) * 0x19676f
                goto label_467b7d
            
            char temp0_38
            char temp1_2
            temp0_38, temp1_2, eflags = __aaa(eax.b, eax:1.b, eflags)
            eax.b = temp0_38
            eax:1.b = temp1_2
        
        char temp110_1 = *entry_ebx
        *entry_ebx += arg3.b
        bool c_15 = temp110_1 + arg3.b u< temp110_1
        void* temp111_1 = arg3
        arg3 -= 1
        uint16_t* esi_21 = __outsb(arg2.w, *esi, esi, eflags)
        
        if (temp111_1 == 1 || c_15)
            if (c_15)
                jump(0x467cc0)
            
            jump(0x467c57)
        
        __bound_gprv_mema32(eax - 1, *(arg3 + (ebp << 1) + 0x61))
        uint8_t temp0_39
        temp0_39, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_39
        esi = __outsd(arg2.w, *esi_21, esi_21, eflags)
        eax.b = adc.b((eax - 1).b, *(entry_ebx + esi), c_15)
        *(esp_35 - 4) = eax
        esp_47 = esp_35 - 4
        *eax
        char* temp114_1 = arg2
        arg2 |= *(entry_ebx + 0x65)
        c_16 = false
        z_11 = (temp114_1 | *(entry_ebx + 0x65)) == 0
        
        if (z_11)
            goto label_467c37
    else
        char temp2_1 = arg1:1.b
        arg1:1.b += arg3.b
        *arg1 = adc.d(*arg1, arg1, temp2_1 + arg3.b u< temp2_1)
        *(arg1 + 0x76) += arg3.b
        esi = arg5 + 1
        *(arg2 * 2) += arg2:1.b
        char temp3_1 = *arg1
        *arg1 += arg1.b
        esp = 0x4c004010
        eax = adc.d(arg1, *arg1, temp3_1 + arg1.b u< temp3_1)
        *(eax + arg2 + 0x13540040) += entry_ebx:1.b
        *eax += eax.b
        *esi += arg2.b
        *(arg4 + arg2 + 0x48) += arg3:1.b
        char temp4_1 = *arg6
        *arg6 += arg3.b
        c_3 = temp4_1 + arg3.b u< temp4_1
        z_1 = temp4_1 == neg.b(arg3.b)
        s_1 = temp4_1 + arg3.b s< 0
        void* ebp_2
        int16_t* edi_14
        int32_t tr
        bool o_7
        
        if (not(add_overflow(temp4_1, arg3.b)))
            *(esi + 0x74)
            ebp = *(esi + 0x74) * 0x64617571
            c_3 = unimplemented  {imul ebp, dword [esi+0x74], 0x64617571}
            int16_t temp0_1
            temp0_1, eflags = __arpl_memw_gpr16(*(ebp + 0x73), esi.w)
            *(ebp + 0x73) = temp0_1
            bool o_8
            
            if (not(z_1))
                int16_t* edi
                int16_t temp0_2
                temp0_2, edi = __insd(arg6, arg2.w, eflags)
                *edi = temp0_2
                eax = adc.d(eax, 0x46e0ac00, c_3)
                char temp11_1 = *esi
                *esi += arg3.b
                c_3 = temp11_1 + arg3.b u< temp11_1
                z = temp11_1 == neg.b(arg3.b)
                int16_t temp0_3
                temp0_3, eflags = __arpl_memw_gpr16(*(arg3 + 0x6c), 0x4010)
                *(arg3 + 0x6c) = temp0_3
                uint8_t* edi_1
                uint8_t temp0_4
                temp0_4, edi_1 = __insb(edi, arg2.w, eflags)
                *edi_1 = temp0_4
                arg6 = *0x4c004010
                esp = 0x4c004014
                esi = __outsd(arg2.w, *esi, esi, eflags)
                
                if (z || c_3)
                    goto label_467890
                
                if (c_3)
                    esi = __outsb(arg2.w, *esi, esi, eflags)
                label_467892:
                    void* temp20_1 = ebp
                    ebp += 1
                    z_2 = temp20_1 == 0xffffffff
                    o_7 = add_overflow(temp20_1, 1)
                    
                    if (z_2 || c_3)
                        goto label_4678fa
                    
                    esi = __outsb(arg2.w, *esi, esi, eflags)
                    
                    if (not(z_2))
                        goto label_467898
                    
                label_4678b1:
                    char temp39_1 = eax:1.b
                    eax:1.b += arg2.b
                    z_2 = temp39_1 == neg.b(arg2.b)
                    s_2 = temp39_1 + arg2.b s< 0
                label_4678b3:
                    
                    if (s_2)
                        goto label_4678b5
                    
                label_4678fc:
                    esi = __outsb(arg2.w, *esi, esi, eflags)
                    
                    if (not(z_2))
                        eax[0x59] += arg2.b
                        goto label_467902
                    
                label_467915:
                    *(ebp + (arg6 << 3) + 0x46) += entry_ebx:1.b
                    char temp33_1 = *arg3
                    *arg3 += arg3.b
                    c_3 = temp33_1 + arg3.b u< temp33_1
                label_46791b:
                    int16_t temp0_5
                    temp0_5, eflags = __arpl_memw_gpr16(*(eax + 0x61), ebp.w)
                    *(eax + 0x61) = temp0_5
                    
                    if (not(c_3))
                        esp = *(esp + (esi << 1) + 0x68) * 0xc0c80010
                        eax -= 1
                        char temp22_1 = *arg3
                        *arg3 += arg3.b
                        o_8 = add_overflow(temp22_1, arg3.b)
                    label_46792b:
                        
                        if (o_8)
                            *(esi + 0x6f)
                            goto label_4679a6
                        
                        goto label_46792d
                    
                    esi = &esi[1]
                label_467998:
                    *arg2 += arg3.b
                    __bound_gprv_mema32(ebp, *(ebp + 0x6e))
                    *(fsbase + esi + 0x6f)
                label_4679a6:
                    *(esp - 4) = esp
                    *(esp - 8) = 0x6c67776f
                    esp -= 8
                label_4679b1:
                    *(esi + 0x66)
                    char temp49_1 = *arg6
                    *arg6 += 0x10
                    c_3 = temp49_1 u>= 0xf0
                label_4679bc:
                    z_2 = entry_ebx == 0xffffffff
                    
                    if (c_3)
                        *(fsbase + eax) = sbb.b(*(fsbase + eax), eax.b, c_3)
                        trap(0xd)
                    
                    edi_7 = *esp
                    esi = esp[1]
                    ebp = esp[2]
                    ebx_1 = esp[4]
                    arg2 = esp[5]
                    arg3 = esp[6]
                    eax = esp[7]
                    goto label_4679c0
                
                goto label_467830
            
            if (not(c_3))
                goto label_4678f3
            
            esp = 0x4c004011
            z = false
        label_46788f:
            esi = __outsd(arg2.w, *esi, esi, eflags)
        label_467890:
            
            if (z || c_3)
                goto label_467892
            
        label_467900:
            *(esp - 4) = eax
            arg3 = *(esp - 4)
        label_467902:
            arg6 = &arg6[1]
            char temp30_1 = *arg6
            *arg6 += arg3.b
            c_3 = temp30_1 + arg3.b u< temp30_1
            char* temp31_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            z_2 = temp31_1 == 0xffffffff
            s_4 = &temp31_1[1] s< 0
            o_5 = add_overflow(temp31_1, 1)
        label_467906:
            
            if (not(c_3))
                arg6 = *esp
                esi = esp[1]
                ebp_2 = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp = &esp[8]
            label_467909:
                
                if (z_2)
                label_467970:
                    *(esi + 0x74)
                    ebp = *(esi + 0x74) * 0x6e617274
                    c_3 = unimplemented  {imul ebp, dword [esi+0x74], 0x6e617274}
                    o_5 = unimplemented  {imul ebp, dword [esi+0x74], 0x6e617274}
                    goto label_467977
                
                ebp = ebp_2 + 1
                z_2 = ebp_2 == 0xffffffff
                s_4 = ebp_2 + 1 s< 0
                o_5 = add_overflow(ebp_2, 1)
            label_46790c:
                
                if (s_4)
                    goto label_467977
                
                if (z_2)
                    *0x700e0046 = eax.b
                    arg6 = *esp
                    esi = esp[1]
                    esp[2]
                    entry_ebx = esp[4]
                    arg2 = esp[5]
                    arg3 = esp[6]
                    eax = esp[7]
                    esp = &esp[8]
                label_46795b:
                    *(esi + 0x74)
                    ebp = *(esi + 0x74) * 0x6e617274
                    c_3 = unimplemented  {imul ebp, dword [esi+0x74], 0x6e617274}
                    o_7 = unimplemented  {imul ebp, dword [esi+0x74], 0x6e617274}
                    goto label_467962
                
                if (z_2 || c_3)
                    goto label_467977
                
                esi = __outsb(arg2.w, *esi, esi, eflags)
            label_467913:
                
                if (z_2)
                    eax.b += arg3.b
                    *eax
                    *eax = ror.b(*eax, 9)
                    o_8 = unimplemented  {ror byte [eax], 0x9}
                    goto label_46792b
                
                goto label_467915
            
            int80_t st4
            st4.q = __pshufw_mmxq_memq_immb(*(arg3 + 0x69), 0x6e)
            
            if (z_2)
            label_4679e8:
                arg6 = *esp
                int32_t esi_7 = esp[1]
                ebp = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp = &esp[8]
                
                if (not(o_5))
                    esi = __outsb(arg2.w, *(gsbase + esi_7), esi_7, eflags)
                label_4679ed:
                    *(fsbase + ebp + 0xe)
                    ebp.w = *(fsbase + ebp + 0xe) * 0x8400
                    c_5 = unimplemented  {imul bp, word [fs:ebp+0xe], 0x8400}
                    o_12 = unimplemented  {imul bp, word [fs:ebp+0xe], 0x8400}
                    *esi
                    *esp
                    esp += 2
                    
                    if (not(c_5))
                        goto label_467a5c
                    
                    goto label_4679fb
                
                int32_t temp59_1 = *(eax + 0x61)
                esi = adc.d(esi_7, temp59_1, c_3)
                z_2 = adc.d(esi_7, temp59_1, c_3) == 0
                s_4 = adc.d(esi_7, temp59_1, c_3) s< 0
            label_467a5e:
                *(esi + 0x74)
                ebp = *(esi + 0x74) * 0x74737563
                c_5 = unimplemented  {imul ebp, dword [esi+0x74], 0x74737563}
                esi = __outsd(arg2.w, *esi, esi, eflags)
            label_467a66:
                int16_t temp0_17
                temp0_17, arg6 = __insd(arg6, arg2.w, eflags)
                *arg6 = temp0_17
                
                if (c_5)
                    goto label_467ad8
                
                if (not(z_2))
                    if (s_4)
                        goto label_467b4f
                    
                    goto label_467adb
                
                char* temp82_1 = esi
                esi -= 1
                
                if (temp82_1 != 1 && not(c_5))
                    *(ebp + (arg6 << 2) + 0x48) += arg3:1.b
                label_467a88:
                    char temp96_1 = *eax
                    *eax += arg3.b
                    c_3 = temp96_1 + arg3.b u< temp96_1
                    int16_t temp0_18
                    temp0_18, eflags = __arpl_memw_gpr16(*(ebp + 0x78), esi.w)
                    *(ebp + 0x78) = temp0_18
                    z_2 = esp == 1
                    s_3 = esp - 1 s< 0
                    __outsd(arg2.w, *esi, esi, eflags)
                    edi_14 = *(esp - 1)
                    esi = *(esp + 3)
                    ebp = *(esp + 7)
                    entry_ebx = *(esp + 0xf)
                    arg2 = *(esp + 0x13)
                    arg3 = *(esp + 0x17)
                    eax = *(esp + 0x1b)
                    esp += 0x1f
                label_467a91:
                    tr = __ltr_memw(*(fsbase + eax + 0x80048be))
                label_467a99:
                    uint8_t temp0_19
                    temp0_19, arg6 = __insb(edi_14, arg2.w, eflags)
                    *arg6 = temp0_19
                    goto label_467a9a
                
                *eax += arg2:1.b
                *arg6
                arg6 = &arg6[1]
                esi = &esi[1]
                char temp105_1 = *0x756e656d
                *0x756e656d += arg3.b
                c_3 = temp105_1 + arg3.b u< temp105_1
                z_2 = temp105_1 == neg.b(arg3.b)
                o_4 = add_overflow(temp105_1, arg3.b)
                
                if (z_2)
                    goto label_467aee
                
                arg6 = *esp
                esi = esp[1]
                ebp = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp = &esp[8]
            label_467a7d:
                esi = __outsb(arg2.w, *esi, esi, eflags)
                
                if (not(c_3))
                    goto label_467ae6
                
                esi = __outsd(arg2.w, *esi, esi, eflags)
                
                if (c_3)
                    goto label_467af0
                
                __verw_memw(*(ebp + (arg6 << 2) + 0x48))
                goto label_467a88
            
            if (c_3)
                goto label_4679d7
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
        label_467977:
            
            if (not(c_3))
                if (o_5)
                    goto label_467a51
                
                esi = __outsb(arg2.w, *esi, esi, eflags)
                goto label_4679ed
            
            if (z_2)
                char temp71_1 = *0x700f0046
                *0x700f0046 += arg3.b
                z_2 = temp71_1 == neg.b(arg3.b)
                arg6 = *esp
                esi = esp[1]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp = &esp[8]
                *(esi + 0x74)
                ebp = *(esi + 0x74) * 0x6e617274
                c_3 = unimplemented  {imul ebp, dword [esi+0x74], 0x6e617274}
                goto label_46798d
            
            char temp70_1 = eax.b
            eax.b += 0x77
            c_3 = temp70_1 u>= 0x89
            z_2 = temp70_1 == 0x89
        label_4679de:
            
            if (not(c_3))
                arg2.b ^= *arg3
            label_4679e2:
                eax:1.b += entry_ebx:1.b
                *arg6 = eax
                char temp81_1 = *arg2
                *arg2 += arg3.b
                c_3 = temp81_1 + arg3.b u< temp81_1
                z_2 = temp81_1 == neg.b(arg3.b)
                s_4 = temp81_1 + arg3.b s< 0
                o_5 = add_overflow(temp81_1, arg3.b)
                goto label_4679e8
            
            esi = __outsd(arg2.w, *esi, esi, eflags)
        label_467a51:
            
            if (not(z_2))
                goto label_467ac1
            
            eax.b = sbb.b(eax.b, *eax, c_3)
            entry_ebx.b = rol.b((&entry_ebx[1]).b, 1)
            esi = &esi[1]
            char temp77_1 = *entry_ebx
            *entry_ebx += arg2.b
            z_2 = temp77_1 == neg.b(arg2.b)
            s_4 = temp77_1 + arg2.b s< 0
            o_12 = add_overflow(temp77_1, arg2.b)
        label_467a5c:
            
            if (not(o_12))
                goto label_467a5e
            
        label_467abf:
            
            if (z_2)
                goto label_467b35
            
        label_467ac1:
            esi = __outsd(arg2.w, *esi, esi, eflags)
        label_467ac2:
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (not(z_2))
                goto label_467b35
            
            *(esp - 4) = zx.d(ss)
            esp -= 4
        label_467ac6:
            char temp93_1 = *eax
            *eax += arg2:1.b
            c_5 = temp93_1 + arg2:1.b u< temp93_1
            z_2 = temp93_1 == neg.b(arg2:1.b)
            o_12 = add_overflow(temp93_1, arg2:1.b)
            *(esp - 4) = 0x6b0f0047
            __bound_gprv_mema32(esp - 4, *(entry_ebx + 0x41))
            int16_t temp0_24
            temp0_24, eflags = __arpl_memw_gpr16(*(arg3 + (ebp << 1) + 0x76), esi.w)
            *(arg3 + (ebp << 1) + 0x76) = temp0_24
            arg6 = *(esp - 4)
            esi = *esp
            ebp = esp[1]
            entry_ebx = esp[3]
            arg2 = esp[4]
            arg3 = esp[5]
            eax = esp[6]
            esp = &esp[7]
        label_467ad5:
            
            if (not(z_2))
                goto label_467ad7
            
            if (o_12)
                goto label_467bb2
            
        label_467b3e:
            *(arg6 + 0x6e)
            arg6 = &arg6[1]
            char temp95_1 = *arg2
            *arg2 += arg3.b
            bool o_15 = add_overflow(temp95_1, arg3.b)
            
            if (not(o_15))
                if (temp95_1 + arg3.b s< 0)
                    if (temp95_1 != neg.b(arg3.b) && temp95_1 + arg3.b u>= temp95_1)
                        jump(0x467bf5)
                    
                    jump(0x467bb1)
                
                if (o_15)
                    jump(0x467bc3)
                
                goto label_467b4f
            
        label_467b8f:
            int32_t* esp_40 = *(arg3 + 0x6c) * 0x11676f
            *arg2 += arg3.b
            esp_40[1]
            esp_40[2]
            entry_ebx = esp_40[4]
            arg2 = esp_40[5]
            arg3 = esp_40[6]
            eax = esp_40[7]
            uint8_t temp0_31
            temp0_31, arg6 = __insb(*esp_40, arg2.w, eflags)
            *arg6 = temp0_31
        label_467b9e:
            uint8_t* edi_22
            uint8_t temp0_32
            temp0_32, edi_22 = __insb(arg6, arg2.w, eflags)
            *edi_22 = temp0_32
            esp_42 = *(arg3 + 0x6c) * 0x11676f
            goto label_467ba8
        
    label_467872:
        esp += 1
        bool z_3
        bool s_5
        bool o_10
        
        if (c_3)
            ebp = arg4 - 1
            z_2 = arg4 == 1
            s_5 = arg4 - 1 s< 0
        label_4678d9:
            esi = __outsd(arg2.w, *esi, esi, eflags)
            
            if (not(z_2))
                if (not(s_5))
                label_467952:
                    eax = adc.d(eax, 0x46a2a800, c_3)
                label_467957:
                    char temp35_1 = *esi
                    *esi += arg3.b
                    c_3 = temp35_1 + arg3.b u< temp35_1
                    z_2 = temp35_1 == neg.b(arg3.b)
                    o_10 = add_overflow(temp35_1, arg3.b)
                label_467959:
                    
                    if (o_10)
                        goto label_4679bc
                    
                    goto label_46795b
                
            label_4679c6:
                eax = *(ebp + 0x76) * 0x65
            label_4679ca:
                esi = __outsb(arg2.w, *esi, esi, eflags)
            label_4679cb:
                
                if (not(z_2))
                    eax:1.b += arg3.b
                    eax.b = *esi
                    esi = &esi[2]
                    goto label_4679d1
                
            label_4679d7:
                eax:1.b += arg2:1.b
                eax.b = *esi
                esi = &esi[2]
                char temp69_1 = arg6[esi << 1]
                arg6[esi << 1] += eax.b
                c_3 = temp69_1 + eax.b u< temp69_1
                z_2 = temp69_1 == neg.b(eax.b)
                goto label_4679de
            
            char* temp15_1 = arg6
            arg6 -= 1
            
            if (temp15_1 != 1)
            label_467956:
                esi = &esi[1]
                goto label_467957
            
            void* temp27_1 = ebp
            ebp += 1
            z_3 = temp27_1 == 0xffffffff
        label_4678e1:
            
            if (z_3 || c_3)
                goto label_467948
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (z_3)
                eax[0x59] += arg2.b
                goto label_467902
            
        label_4678e6:
            char temp36_1 = *eax
            *eax += arg3.b
            s_4 = temp36_1 + arg3.b s< 0
            
            if (s_4 != add_overflow(temp36_1, arg3.b))
            label_467931:
                esi = __outsb(arg2.w, *esi, esi, eflags)
                uint8_t* edi_5
                uint8_t temp0_6
                temp0_6, edi_5 = __insb(arg6, arg2.w, eflags)
                *edi_5 = temp0_6
                
                if (not(s_4))
                    arg2[eax << 3] += arg2.b
                    goto label_467947
                
                eax[0x80048c2] += arg2.b
                goto label_46793b
            
            char temp45_1 = *arg2
            *arg2 += arg2.b
            c_3 = temp45_1 + arg2.b u< temp45_1
            char* temp46_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            z_4 = temp46_1 == 0xffffffff
            
            if (c_3)
                goto label_467956
            
            arg6 = *esp
            esi = esp[1]
            ebp = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            goto label_4678f0
        
        ebp = arg4 + 1
        z_3 = arg4 == 0xffffffff
        
        if (z_3 || c_3)
            if (z_3)
                goto label_467926
            
            goto label_4678e1
        
        esi = __outsb(arg2.w, *esi, esi, eflags)
        
        if (not(z_3))
            eax[0x73] += arg3:1.b
            char temp18_1 = entry_ebx[eax << 1]
            entry_ebx[eax << 1] += arg2.b
            c_3 = temp18_1 + arg2.b u< temp18_1
            z_4 = temp18_1 == neg.b(arg2.b)
            goto label_467884
        
    label_467898:
        entry_ebx[(esi << 1) + 0x47] += eax:1.b
        char temp16_1 = *arg2
        *arg2 += arg2.b
        c_3 = temp16_1 + arg2.b u< temp16_1
        char* temp17_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        z_2 = temp17_1 == 0xffffffff
        s_4 = &temp17_1[1] s< 0
        o_5 = add_overflow(temp17_1, 1)
        
        if (c_3)
            goto label_467906
        
        arg6 = *esp
        esi = esp[1]
        ebp_2 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        eax = esp[7]
        esp = &esp[8]
        
        if (z_2)
            goto label_467909
        
        ebp = ebp_2 - 1
        z_2 = ebp_2 == 1
        o_2 = add_overflow(ebp_2, 0xffffffff)
    label_4678a5:
        esi = __outsd(arg2.w, *esi, esi, eflags)
        
        if (not(z_2))
            goto label_46791b
        
        *(esp - 4) = ebp
        esp -= 4
        
        if (not(o_2))
            if (z_2 || c_3)
                goto label_467913
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (not(z_2))
                goto label_4678b1
            
        label_4678cc:
            eax[(arg6 << 1) + 0x47] += eax.b
        label_4678d0:
            char temp50_1 = *entry_ebx
            *entry_ebx += arg2.b
            c_3 = temp50_1 + arg2.b u< temp50_1
            char* temp51_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            z_2 = temp51_1 == 0xffffffff
            s_3 = &temp51_1[1] s< 0
            o_4 = add_overflow(temp51_1, 1)
        label_4678d3:
            
            if (c_3)
                goto label_46793a
            
            arg6 = *esp
            esi = esp[1]
            ebp = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            
            if (z_2)
                goto label_46793d
            
            void* temp73_1 = ebp
            ebp -= 1
            z_2 = temp73_1 == 1
            s_5 = temp73_1 - 1 s< 0
            goto label_4678d9
        
        char* temp23_1 = entry_ebx
        entry_ebx -= 1
        z_1 = temp23_1 == 1
        s_1 = temp23_1 - 1 s< 0
    label_4678f3:
        
        if (not(s_1))
        label_46793a:
            char temp19_1 = arg2[0x70]
            arg2[0x70] |= eax:1.b
            c_3 = false
            z_2 = (temp19_1 | eax:1.b) == 0
            s_3 = (temp19_1 | eax:1.b) s< 0
            o_4 = false
        label_46793d:
            
            if (c_3)
                esi = &esi[1]
                char temp38_1 = *arg2
                *arg2 += arg3.b
                c_3 = temp38_1 + arg3.b u< temp38_1
                z_2 = temp38_1 == neg.b(arg3.b)
                s_3 = temp38_1 + arg3.b s< 0
                o_4 = add_overflow(temp38_1, arg3.b)
            else
                esi = __outsb(arg2.w, *esi, esi, eflags)
                
                if (not(z_2))
                    if (not(z_2))
                        arg2[eax << 3] += arg2.b
                        goto label_467947
                    
                    char temp60_1 = eax[0xe0046a2]
                    eax[0xe0046a2] += arg3:1.b
                    c_3 = temp60_1 + arg3:1.b u< temp60_1
                    z_2 = temp60_1 == neg.b(arg3:1.b)
                    o_10 = add_overflow(temp60_1, arg3:1.b)
                    goto label_467959
            
            if (not(c_3))
                goto label_467a15
            
            esi = __outsd(arg2.w, *esi, esi, eflags)
            
            if (z_2 || c_3)
                uint8_t temp0_8
                temp0_8, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_8
                goto label_4679b1
            
        label_467a17:
            *(esi + 0x74)
            ebp = *(esi + 0x74) * 0x74737563
            c_3 = unimplemented  {imul ebp, dword [esi+0x74], 0x74737563}
            esi = __outsd(arg2.w, *esi, esi, eflags)
            int16_t temp0_14
            temp0_14, edi_14 = __insd(arg6, arg2.w, eflags)
            *edi_14 = temp0_14
            
            if (c_3)
                goto label_467a91
            
            if (not(z_2))
                tr = __ltr_memw(*(eax + 0x80048be))
                goto label_467a99
            
            *(fsbase + eax) = sbb.b(*(fsbase + eax), eax.b, c_3)
            trap(0xd)
        
        esi = __outsd(arg2.w, *esi, esi, eflags)
        void* eax_5
        char* edi_16
        bool cond:10_1
        
        if (not(z_1) && not(c_3))
            *(esp - 4) = zx.d(ss)
            esp -= 4
        label_467968:
            *eax += arg3.b
            *esi - *arg6
            arg6 = &arg6[4]
            esi = &esi[4 + 1]
            char temp61_1 = *arg6
            *arg6 += arg3.b
            z_2 = temp61_1 == neg.b(arg3.b)
            s_4 = temp61_1 + arg3.b s< 0
            
            if (not(add_overflow(temp61_1, arg3.b)))
                goto label_467970
            
        label_4679d1:
            char temp65_1 = *entry_ebx
            *entry_ebx += eax.b
            c_3 = temp65_1 + eax.b u< temp65_1
            z_2 = temp65_1 == neg.b(eax.b)
            s_3 = temp65_1 + eax.b s< 0
            o_7 = add_overflow(temp65_1, eax.b)
            
            if (z_2 || c_3)
                goto label_4679d5
            
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (not(z_2))
                if (not(z_2))
                    goto label_467abf
                
                if (z_2)
                    goto label_467abd
                
                int16_t temp0_16
                temp0_16, arg6 = __insd(arg6, arg2.w, eflags)
                *arg6 = temp0_16
                
                if (c_3)
                    goto label_467ac0
                
                goto label_467a51
            
            esi = __outsd(arg2.w, *esi, esi, eflags)
            int16_t temp0_22
            temp0_22, edi_16 = __insd(arg6, arg2.w, eflags)
            *edi_16 = temp0_22
        label_467aaf:
            bool s_8
            bool o_14
            
            if (not(o_7))
                if (z_2)
                    uint8_t temp0_28
                    temp0_28, arg6 = __insb(edi_16, arg2.w, eflags)
                    *arg6 = temp0_28
                    
                    if (c_3)
                        goto label_467b1d
                    
                label_467b31:
                    char temp108_1 = eax[0xa0047bd]
                    eax[0xa0047bd] += arg2:1.b
                    c_5 = temp108_1 + arg2:1.b u< temp108_1
                    s_8 = temp108_1 + arg2:1.b s< 0
                    o_14 = add_overflow(temp108_1, arg2:1.b)
                    goto label_467b37
                
                uint8_t temp0_23
                temp0_23, arg6 = __insb(edi_16, arg2.w, eflags)
                *arg6 = temp0_23
                
                if (not(s_3))
                    goto label_467ac6
                
                char temp109_1 = eax[0x8004741]
                eax[0x8004741] += eax:1.b
                z_2 = temp109_1 == neg.b(eax:1.b)
            label_467abd:
                __bound_gprv_mema32(esi, *(ebp + 0x74))
            label_467ac0:
                
                if (z_2)
                    goto label_467b31
                
                goto label_467ac2
            
        label_467b1d:
            *(eax * 9) += eax:1.b
        label_467b21:
            char temp98_1 = *0x6e616843
            *0x6e616843 += arg3.b
            bool c_8 = temp98_1 + arg3.b u< temp98_1
            bool o_13 = add_overflow(entry_ebx, 1)
            char* edi_18 = *esp
            esi = esp[1]
            esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax = esp[7]
            esp = &esp[8]
            
            if (o_13)
                char* esi_18 = esp[1]
                esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp_42 = &esp[8]
                uint8_t* edi_24
                uint8_t temp0_33
                temp0_33, edi_24 = __insb(*esp, arg2.w, eflags)
                *edi_24 = temp0_33
                int32_t esi_19 = __outsd(arg2.w, *esi_18, esi_18, eflags)
                *(entry_ebx + esi_19) = adc.d(*(entry_ebx + esi_19), eax, c_8)
            label_467ba8:
                eax.b ^= 0x48
                char temp86_1 = *arg2
                *arg2 += arg3.b
                c_5 = temp86_1 + arg3.b u< temp86_1
                *(esp_42 - 4) = entry_ebx
                *(esp_42 - 8) = 0x6944776f
                esp = esp_42 - 8
            label_467bb2:
                void* esi_20 = esp[1]
                ebp = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                void* eax_6 = esp[7]
                uint8_t temp0_34
                temp0_34, arg6 = __insb(*esp, arg2.w, eflags)
                *arg6 = temp0_34
                esi = __outsd(arg2.w, *esi_20, esi_20, eflags)
                *(entry_ebx + esi) = adc.d(*(entry_ebx + esi), eax_6, c_5)
                eax_6.b |= 0x38
                *arg2 += arg3.b
                eax = eax_6 - 2
                *(ebp + 0x44)
                esp = *(ebp + 0x44) * 0x6f6c6169
                c_13 = unimplemented  {imul esp, dword [ebp+0x44], 0x6f6c6169}
            label_467bc6:
                *(entry_ebx + esi) = adc.b(*(entry_ebx + esi), eax.b, c_13)
                goto label_467bc9
            
            *(edi_18 + 0x6e)
            arg6 = &edi_18[1]
        label_467b35:
            char temp74_1 = *arg2
            *arg2 += arg3.b
            c_5 = temp74_1 + arg3.b u< temp74_1
            s_8 = temp74_1 + arg3.b s< 0
            o_14 = add_overflow(temp74_1, arg3.b)
        label_467b37:
            
            if (c_5)
                if (s_8)
                    goto label_467b9e
                
                if (o_14)
                    goto label_467bb2
                
                goto label_467b3e
            
            *eax
            *eax ^= arg3
            eax.b = adc.b(eax.b, entry_ebx[0x72], false)
            cond:10_1 = eax.b == 0
            arg6 = *esp
            esi = esp[1]
            ebp = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            eax_5 = esp[7]
            esp_31 = &esp[8]
        label_467b86:
            
            if (cond:10_1)
                goto label_467bed
            
            char* temp102_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            
            if (temp102_1 == 0xffffffff)
                if (temp102_1 == 0xffffffff)
                    entry_ebx[arg3 << 1] += entry_ebx:1.b
                    goto label_467c00
                
                int16_t* edi_20
                int16_t temp0_30
                temp0_30, edi_20 = __insd(arg6, arg2.w, eflags)
                *edi_20 = temp0_30
                goto label_467b8f
            
            entry_ebx -= 1
        label_467c00:
            char temp113 = entry_ebx[(eax_5 - 1) << 1]
            entry_ebx[(eax_5 - 1) << 1] += arg3.b
            bool z_12 = temp113 == neg.b(arg3.b)
            
            if (temp113 + arg3.b u< temp113)
                if (z_12)
                    jump(0x467cdb)
                
                jump("mObje")
            
            *esp_31
            *(esp_31 + 4)
            *(esp_31 + 8)
            *(esp_31 + 0x10)
            *(esp_31 + 0x14)
            *(esp_31 + 0x18)
            *(esp_31 + 0x1c)
            
            if (z_12)
                jump("Obje")
            
            jump("Obje")
        
        void* temp29_1 = ebp
        ebp += 1
        z_2 = temp29_1 == 0xffffffff
        o_7 = add_overflow(temp29_1, 1)
    label_4678fa:
        
        if (not(z_2) && not(c_3))
            goto label_4678fc
        
        esi = __outsb(arg2.w, *esi, esi, eflags)
    label_467962:
        
        if (not(c_3))
        label_4679d5:
            
            if (o_7)
                goto label_4679e2
            
            goto label_4679d7
        
        if (z_2)
            *(esp - 4) = zx.d(ss)
            esp -= 4
            goto label_467968
        
        void* temp66_1 = ebp
        ebp += 1
        z_2 = temp66_1 == 0xffffffff
        s_3 = temp66_1 + 1 s< 0
        o_7 = add_overflow(temp66_1, 1)
        
        if (not(z_2) && not(c_3))
            goto label_4679ca
        
        char* esi_10 = __outsb(arg2.w, *esi, esi, eflags)
        
        if (not(z_2))
            if (not(z_2))
                *(esp - 4) = zx.d(cs)
                esp -= 4
            label_467aa8:
                uint8_t* edi_15
                uint8_t temp0_20
                temp0_20, edi_15 = __insb(arg6, arg2.w, eflags)
                *edi_15 = temp0_20
            label_467aa9:
                __outsd(arg2.w, *esi_10, esi_10, eflags)
                edi_16 = *esp
                esi = esp[1]
                ebp = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                arg3 = esp[6]
                eax = esp[7]
                esp = &esp[8]
                int16_t temp0_21
                temp0_21, eflags = __arpl_memw_gpr16(*(fsbase + edi_16 + 0x6d), ebp.w)
                *(fsbase + edi_16 + 0x6d) = temp0_21
                goto label_467aaf
            
            if (z_2)
                esi_10 = &esi_10[1]
            label_467aa6:
                char temp100_1 = *esi_10
                *esi_10 += arg3.b
                c_3 = temp100_1 + arg3.b u< temp100_1
                z_2 = temp100_1 == neg.b(arg3.b)
                s_3 = temp100_1 + arg3.b s< 0
                o_7 = add_overflow(temp100_1, arg3.b)
                goto label_467aa8
            
            int16_t temp0_15
            temp0_15, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_15
            
            if (c_3)
                goto label_467aa8
            
            if (not(z_2))
                goto label_467aa9
            
            char* eax_2 = *esp
            *eax_2 = sbb.b(*eax_2, eax_2.b, c_3)
            trap(0xd)
        
        esi = 0x6c080048
    label_467a9a:
        bool c_6
        
        if (z_2)
            *(arg3 + 0x62)
            eax.b |= *(arg3 + 0x62)
            c_6 = false
            uint8_t* edi_17
            uint8_t temp0_27
            temp0_27, edi_17 = __insb(arg6, arg2.w, eflags)
            *edi_17 = temp0_27
            entry_ebx = &entry_ebx[1]
        label_467b07:
            *(esp - 4) = 0x73646c69
            esp -= 4
            *eax = adc.b(*eax, eax.b, c_6)
            entry_ebx[0x47] = entry_ebx[0x47]
            *(esi + 0x73) |= arg2
            __bound_gprv_mema32(eax, *(entry_ebx + 0x68))
            *(esp + 0x73)
            goto label_467b21
        
        if (not(s_3))
            __outsd(arg2.w, *esi, esi, eflags)
            arg6 = *esp
            esi_10 = esp[1]
            esp[2]
            esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            esp[7]
            esp = &esp[8]
            goto label_467aa6
        
    label_467aea:
        esi = __outsd(arg2.w, *esi, esi, eflags)
        *eax = adc.b(*eax, eax.b, c_3)
        int16_t temp0_25 = esp
        esp = eax
        eax = temp0_25
    label_467aee:
        uint8_t temp0_26
        temp0_26, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_26
    label_467aef:
        arg6 = &arg6[1]
    label_467af0:
        char temp78_1 = *arg3
        *arg3 += arg3.b
        o_16 = add_overflow(temp78_1, arg3.b)
        uint16_t* esi_14 = __outsw(arg2.w, *esi, esi, eflags)
        uint16_t* esi_15 = __outsb(arg2.w, *esi_14, esi_14, eflags)
        
        if (temp78_1 == neg.b(arg3.b))
            goto label_467b60
        
        esi = __outsb(arg2.w, *esi_15, esi_15, eflags)
        
        if (temp78_1 + arg3.b s>= 0)
            char temp90_1 = eax[0xa00476a]
            eax[0xa00476a] += eax:1.b
            c_6 = temp90_1 + eax:1.b u< temp90_1
            arg3 += 1
            __bound_gprv_mema32(ebp, *(ebp + 0x43))
            goto label_467b07
        
        *arg6
        eax = *arg6 * 9
        bool c_7 = unimplemented  {imul eax, dword [edi], 0x9}
        *(esp - 4) = esi
        esp_31 = esp - 4
        
        if (c_7)
            entry_ebx = &entry_ebx[1]
            *(esp_31 - 4) = 0x73646c69
            esp = esp_31 - 4
            eax.b = adc.b(eax.b, 0, c_7)
            eax.b &= 0xc0
            goto label_467b21
        
        uint8_t temp0_29
        temp0_29, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_29
        esi = __outsd(arg2.w, *esi, esi, eflags)
        *(entry_ebx + esi) = sbb.d(*(entry_ebx + esi), eax, c_7)
    label_467b7d:
        *arg3 -= arg2:1.b
        eax_5 = eax - 1
        char temp106_1 = *arg2
        *arg2 += arg2.b
        char* temp107_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        cond:10_1 = temp107_1 == 0xffffffff
        
        if (temp106_1 + arg2.b u>= temp106_1)
            arg6 = *esp_31
            esi = *(esp_31 + 4)
            ebp = *(esp_31 + 8)
            entry_ebx = *(esp_31 + 0x10)
            arg2 = *(esp_31 + 0x14)
            arg3 = *(esp_31 + 0x18)
            eax_5 = *(esp_31 + 0x1c)
            esp_31 += 0x20
            goto label_467b86
        
        *(eax_5 + 0x39) += arg2.b
    label_467bed:
        eax = eax_5 - 1
        char temp101_1 = *entry_ebx
        *entry_ebx += arg3.b
        c_16 = temp101_1 + arg3.b u< temp101_1
        z_11 = temp101_1 == neg.b(arg3.b)
        *(esp_31 - 4) = entry_ebx
        esp_47 = esp_31 - 4
        
        if (z_11)
        label_467c37:
            
            if (not(c_16))
                __outsb(arg2.w, *esi, esi, eflags)
                *(esp_47 - 4) = zx.d(cs)
                eax[0x70047b5] += entry_ebx:1.b
                goto label_467c42
            
            int32_t eflags_2
            int16_t temp0_40
            temp0_40, eflags_2 = __arpl_memw_gpr16(*(gsbase + arg3 + 0x61), ebp.w)
            *(gsbase + arg3 + 0x61) = temp0_40
            uint8_t* edi_29
            uint8_t temp0_41
            temp0_41, edi_29 = __insb(arg6, arg2.w, eflags_2)
            *edi_29 = temp0_41
            arg6 = edi_29 - 1
            __bound_gprv_mema32(ebp, *(arg2 + 0x65))
            int16_t temp0_43
            temp0_43, eflags_3 = __arpl_memw_gpr16(*(arg2 * 2), esi.w)
            *(arg2 * 2) = temp0_43
            goto label_467caf
    
    if (c_16)
        char temp112 = eax[0x1200483f]
        eax[0x1200483f] += entry_ebx.b
        
        if (temp112 + entry_ebx.b u< temp112)
            jump(0x467cc9)
        
        jump("ateCustomObje")
    
    *esp_47
    *(esp_47 + 4)
    *(esp_47 + 8)
    *(esp_47 + 0x10)
    *(esp_47 + 0x14)
    *(esp_47 + 0x18)
    *(esp_47 + 0x1c)
    
    if (z_11)
        jump(0x467c5e)
    
    jump(0x467bf9)
}
