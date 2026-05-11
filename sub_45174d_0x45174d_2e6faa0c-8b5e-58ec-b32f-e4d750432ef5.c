// ============================================================
// 函数名称: sub_45174d
// 虚拟地址: 0x45174d
// WARP GUID: 2e6faa0c-8b5e-58ec-b32f-e4d750432ef5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_451e20, sub_404364, sub_40b454
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_45174d(char* arg1, uint16_t* arg2, void* arg3, uint16_t* arg4 @ esi, int16_t* arg5 @ edi, uint16_t* arg6, void* arg7, uint16_t* arg8, uint16_t* arg9, char** arg10, char* arg11, uint16_t* arg12, void* arg13, uint16_t* arg14, uint16_t* arg15, uint16_t* arg16, uint16_t* arg17)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = arg5[0x36].b
    arg5[0x36].b += arg1:1.b
    bool c = temp1 + arg1:1.b u< temp1
    char** ecx = arg3 + 1
    bool z = arg3 == 0xffffffff
    bool s = arg3 + 1 s< 0
    int32_t eflags
    uint16_t* eax_1
    uint16_t* entry_ebx
    int32_t* esp
    void* esp_2
    char** esp_4
    void* ebp_1
    void* esi_3
    uint16_t* gsbase
    
    if (not(c))
        uint16_t* esi = arg6
        ebp_1 = arg7
        entry_ebx = arg8
        arg2 = arg9
        ecx = arg10
        arg1 = arg11
        char* arg_20
        esp = &arg_20
        uint8_t* edi_3
        
        if (not(s))
            uint8_t temp0_6
            temp0_6, edi_3 = __insb(__return_addr, arg2.w, eflags)
            *edi_3 = temp0_6
        label_45179e:
            entry_ebx += 1
            uint16_t* esi_5 = __outsd(arg2.w, *esi, esi, eflags)
            uint8_t temp0_7
            temp0_7, arg5 = __insb(edi_3, arg2.w, eflags)
            *arg5 = temp0_7
            arg4 = __outsd(arg2.w, *esi_5, esi_5, eflags)
            
            if (c)
                goto label_4517f4
            
            goto label_4517a4
        
        uint8_t* edi_1
        uint8_t temp0_1
        temp0_1, edi_1 = __insb(__return_addr, arg2.w, eflags)
        *edi_1 = temp0_1
        int16_t temp0_2
        temp0_2, arg5 = __insd(edi_1, arg2.w, eflags)
        *arg5 = temp0_2
        arg4 = __outsb(arg2.w, *(gsbase + esi), esi, eflags)
        
        if (not(z))
            arg1 = arg_20
            void arg_24
            arg_20 = &arg_24
            *arg1 += arg1.b
            char temp5_1 = arg5[0x36].b
            arg5[0x36].b += arg1:1.b
            c = temp5_1 + arg1:1.b u< temp5_1
            esp = &arg_20:1
            
            if (c)
                goto label_4517ca
            
            if (&arg_20 != 0xffffffff && not(c))
                goto label_4517ac
            
            if (c)
                goto label_4517e3
            
            arg5 = arg_20
            arg4 = arg12
            entry_ebx = arg14
            arg2 = arg15
            int32_t* arg_39
            ecx = arg_39
            char* arg_41
            esp = &arg_41
            
            if (&arg_20:1 s>= 0)
                goto label_4517e3
            
            ebp_1 = arg13 + 1
            arg1 = arg_41
            void arg_45
            arg_41 = &arg_45
            char temp35_1 = arg5[0x36].b
            arg5[0x36].b += arg1:1.b
            uint16_t* arg_3d = arg4
            
            if (temp35_1 + arg1:1.b u< temp35_1)
                eax_1 = arg_3d
                esp_4 = &arg_41
                goto label_4517ef
            
            if (temp35_1 + arg1:1.b s< 0)
                arg_39 = arg1
                esp_2 = &arg_39
                goto label_4517d0
            
            void* esi_1 = __outsd(arg2.w, *arg4, arg4, eflags)
            *(esi_1 + 0x74)
            arg_39 = &arg_3d
            esp = &arg_39
            char temp45_1 = *arg1
            *arg1 += arg1.b
            uint16_t temp0_3
            temp0_3, temp0_3 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_3
            *arg5 = temp0_3
            esi_3 = __outsd(arg2.w, *(esi_1 - 1), esi_1 - 1, eflags)
            
            if (temp45_1 + arg1.b u< temp45_1)
                goto label_4517fb
            
            uint16_t* esi_4 = arg_3d
            entry_ebx = arg16
            arg2 = arg17
            char** arg_51
            ecx = arg_51
            char* arg_55
            arg1 = arg_55
            uint8_t temp0_4
            temp0_4, edi_3 = __insb(arg_39, arg2.w, eflags)
            *edi_3 = temp0_4
            arg_55 = arg1
            esi = __outsd(arg2.w, *esi_4, esi_4, eflags)
            ebp_1 = *(esi + 0x74) * 0x58457265
            arg_51 = &arg_55
            esp = &arg_51
            char temp50_1 = *arg1
            *arg1 += arg1.b
            c = temp50_1 + arg1.b u< temp50_1
            uint16_t temp0_5
            temp0_5, temp0_5 = __insb(edi_3.w, arg2.w, eflags)
            edi_3.w = temp0_5
            *edi_3 = temp0_5
            goto label_45179e
        
    label_4517a4:
        arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        *(arg4 + 0x74)
    label_4517ac:
        *(esp - 4) = esp
        esp -= 4
        *arg1 += arg1.b
        char temp11_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp11_1 + arg1:1.b u< temp11_1
        char** temp12_1 = ecx
        ecx -= 1
        uint16_t* esi_6 = __outsb(arg2.w, *arg4, arg4, eflags)
        
        if (temp12_1 - 1 s< 0)
            goto label_451808
        
        arg4 = __outsd(arg2.w, *esi_6, esi_6, eflags)
        *(arg4 + 0x74)
        *(esp - 4) = esp
        *arg1 += arg1.b
        char temp19_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp19_1 + arg1:1.b u< temp19_1
        z = temp19_1 == neg.b(arg1:1.b)
        s = temp19_1 + arg1:1.b s< 0
        *(esp - 8) = esp - 4
        esp -= 8
    
    void* esp_18
    
    if (not(s))
    label_4517ca:
        uint16_t* esi_7 = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsd(arg2.w, *esi_7, esi_7, eflags)
        
        if (c)
            goto label_451832
        
        *(esp - 4) = arg1
        esp_2 = esp - 4
    label_4517d0:
        *(__outsd(arg2.w, *arg4, arg4, eflags) + 0x74)
        *(esp_2 - 4) = esp_2
        esp = esp_2 - 4
        *arg1 += arg1.b
        *arg1 += arg1.b
        uint16_t temp0_8
        temp0_8, temp0_8 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_8
        *arg5 = temp0_8
    label_4517e3:
        uint8_t* edi_4
        uint8_t temp0_9
        temp0_9, edi_4 = __insb(arg5, arg2.w, eflags)
        *edi_4 = temp0_9
        arg5 = *esp
        uint16_t* esi_9 = esp[1]
        entry_ebx = esp[4]
        arg2 = esp[5]
        ecx = esp[6]
        eax_1 = esp[7]
        esp[7] = eax_1
        esp_4 = &esp[7]
        arg4 = __outsd(arg2.w, *esi_9, esi_9, eflags)
        ebp_1 = *(arg4 + 0x74) * 0x58457265
    label_4517ef:
        *(esp_4 - 4) = esp_4
        esp = esp_4 - 4
        *eax_1 += eax_1.b
        char temp34_1 = *eax_1
        *eax_1 += eax_1.b
        c = temp34_1 + eax_1.b u< temp34_1
    label_4517f4:
        uint16_t temp0_10
        temp0_10, temp0_10 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_10
        *arg5 = temp0_10
        int16_t* temp10_1 = arg5
        arg5 += 1
        
        if (temp10_1 == 0xffffffff)
            goto label_45184a
        
        esi_3 = __outsd(arg2.w, *arg4, arg4, eflags)
    label_4517fb:
        *(esi_3 + 0x74)
        arg1 = *esp
        *esp = &esp[1]
        *arg1 += arg1.b
        char temp25_1 = *arg1
        *arg1 += arg1.b
        c = temp25_1 + arg1.b u< temp25_1
    label_451808:
        uint16_t temp0_11
        temp0_11, temp0_11 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_11
        *arg5 = temp0_11
        z = ecx == 0xffffffff
        s = ecx + 1 s< 0
        
        if (not(c))
            goto label_45180d
        
        *(esp - 4) = arg1
        esp_18 = esp - 4
    label_451880:
        arg4 = *(esp_18 + 4)
        ebp_1 = *(esp_18 + 8)
        entry_ebx = *(esp_18 + 0x10)
        arg2 = *(esp_18 + 0x14)
        ecx = *(esp_18 + 0x18)
        arg1 = *(esp_18 + 0x1c)
        esp = esp_18 + 0x20
        int16_t temp0_23
        temp0_23, arg5 = __insd(*esp_18, arg2.w, eflags)
        *arg5 = temp0_23
        
        if (z)
            goto label_4518ea
        
        if (c)
            *(gsbase + ebp_1 + (arg1 << 1) + 0x58) ^= arg1
            goto label_4518f5
        
        if (z || c)
            goto label_4518ce
        
        goto label_451889
    
    label_45180d:
    int32_t edi_5 = *esp
    arg4 = esp[1]
    ebp_1 = esp[2]
    entry_ebx = esp[4]
    arg2 = esp[5]
    ecx = esp[6]
    int16_t eax_5 = (esp[7]).w
    esp = &esp[8]
    char* eax_6
    void* esp_46
    TEB* fsbase
    bool c_5
    bool c_6
    bool c_7
    bool c_8
    bool c_10
    bool c_12
    bool p_1
    bool z_13
    bool z_14
    bool s_3
    bool s_7
    bool s_18
    bool cond:15_1
    bool cond:22_1
    
    if (s)
        uint8_t* edi_6
        uint8_t temp0_12
        temp0_12, edi_6 = __insb(edi_5, arg2.w, eflags)
        *edi_6 = temp0_12
        int16_t temp0_13
        temp0_13, arg5 = __insd(edi_6, arg2.w, eflags)
        *arg5 = temp0_13
        arg4 = __outsb(arg2.w, *(gsbase + arg4), arg4, eflags)
        
        if (z)
            goto label_451858
        
        if (c)
            goto label_45188b
        
        arg5 = *esp
        arg4 = esp[1]
        ebp_1 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        void* ecx_2 = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        bool o_3
        
        if (not(s))
            uint16_t* temp22_1 = entry_ebx
            entry_ebx += 1
            s_3 = temp22_1 + 1 s< 0
        label_451862:
            uint16_t* esi_14 = __outsd(arg2.w, *arg4, arg4, eflags)
            uint8_t temp0_20
            temp0_20, arg5 = __insb(arg5, arg2.w, eflags)
            *arg5 = temp0_20
            arg4 = __outsd(arg2.w, *esi_14, esi_14, eflags)
            
            if (c)
                goto label_4518bb
            
            arg5 = *esp
            arg4 = esp[1]
            ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            ecx = esp[6]
            __bound_gprv_mema32(ebp_1, *(ebp_1 + 0x45))
            arg1 = esp[8]
            esp[8] = &esp[9]
            esp = &esp[8]
            char temp21_1 = *arg1
            *arg1 += arg1.b
            c = temp21_1 + arg1.b u< temp21_1
            uint16_t temp0_21
            temp0_21, temp0_21 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_21
            *arg5 = temp0_21
        label_451872:
            z = arg5 == 0xffffffff
            s_3 = arg5 + 1 s< 0
            o_3 = add_overflow(arg5, 1)
            
            if (z)
                uint8_t temp0_27
                temp0_27, arg5 = __insb(arg5 + 1, arg2.w, eflags)
                *arg5 = temp0_27
                goto label_4518ba
            
            uint16_t* esi_15 = __outsd(arg2.w, *arg4, arg4, eflags)
            uint8_t temp0_22
            temp0_22, arg5 = __insb(arg5 + 1, arg2.w, eflags)
            *arg5 = temp0_22
            arg4 = __outsd(arg2.w, *esi_15, esi_15, eflags)
            
            if (c)
                goto label_4518cf
            
            *esp
            esp[1]
            void* ebp_10 = esp[2]
            esp[4]
            esp[5]
            esp[6]
            esp[7]
            esp_18 = &esp[8]
            __bound_gprv_mema32(ebp_10, *(ebp_10 + 0x50))
            goto label_451880
        
        arg1 = *esp
        *esp = &esp[1]
        char temp23_1 = *arg1
        *arg1 += arg1.b
        c = temp23_1 + arg1.b u< temp23_1
        uint16_t temp0_14
        temp0_14, temp0_14 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_14
        *arg5 = temp0_14
        ecx = ecx_2 + 1
        *(esp - 4) = entry_ebx
        esp -= 4
        uint16_t* esi_12
        
        if (ecx_2 != 0xffffffff && not(c))
        label_451889:
            eax_5 = (*esp).w
            *esp = &esp[1]
        label_45188b:
            char temp15_1 = arg5[0x36].b
            arg5[0x36].b += eax_5:1.b
            c = temp15_1 + eax_5:1.b u< temp15_1
            int16_t* temp16_1 = arg5
            arg5 += 1
            z = temp16_1 == 0xffffffff
            
            if (not(z))
                esi_12 = __outsd(arg2.w, *arg4, arg4, eflags)
                uint8_t* edi_11
                uint8_t temp0_24
                temp0_24, edi_11 = __insb(arg5, arg2.w, eflags)
                *edi_11 = temp0_24
            label_451894:
                __outsd(arg2.w, *esi_12, esi_12, eflags)
                
                if (c)
                    __bound_gprv_mema32(ecx, *(ecx + 0x6d))
                label_4518ee:
                    arg5 = *esp
                    arg4 = esp[1]
                    ebp_1 = esp[2]
                    entry_ebx = esp[4]
                    arg2 = esp[5]
                    ecx = esp[6]
                    *(gsbase + arg4 + 0x45) ^= esp[7]
                    arg1 = esp[8]
                    esp = &esp[9]
                label_4518f5:
                    *(esp - 4) = esp
                    char temp31_1 = *arg1
                    *arg1 += arg1.b
                    c = temp31_1 + arg1.b u< temp31_1
                    uint16_t temp0_32
                    temp0_32, temp0_32 = __insb(arg5.w, arg2.w, eflags)
                    arg5.w = temp0_32
                    *arg5 = temp0_32
                    uint16_t* temp32_1 = entry_ebx
                    entry_ebx += 1
                    z = temp32_1 == 0xffffffff
                    s_3 = temp32_1 + 1 s< 0
                    arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
                    
                    if (add_overflow(temp32_1, 1))
                        ebp_1 += 1
                        arg1 = *(esp - 4)
                    label_451979:
                        *(esp - 4) = esp
                        esp -= 4
                    label_45197a:
                        char temp46_1 = *arg1
                        *arg1 += arg1.b
                        c = temp46_1 + arg1.b u< temp46_1
                        uint16_t temp0_46
                        temp0_46, temp0_46 = __insb(arg5.w, arg2.w, eflags)
                        arg5.w = temp0_46
                        *arg5 = temp0_46
                        char** temp47_1 = ecx
                        ecx -= 1
                        z = temp47_1 == 1
                        arg4 = __outsb(arg2.w, *arg4, arg4, eflags)
                        
                        if (temp47_1 - 1 s< 0)
                            goto label_4519d1
                        
                        goto label_451984
                    
                    *(esp - 8) = esp - 4
                    esp -= 8
                    
                    if (s_3)
                    label_45194b:
                        
                        if (z || c)
                            goto label_451993
                        
                        goto label_45194e
                    
                    int16_t* edi_15
                    int16_t temp0_33
                    temp0_33, edi_15 = __insd(arg5, arg2.w, eflags)
                    *edi_15 = temp0_33
                    arg5 = *esp
                    arg4 = esp[1]
                    ebp_1 = esp[2]
                    entry_ebx = esp[4]
                    arg2 = esp[5]
                    ecx = esp[6]
                    esp[7]
                    esp = &esp[8]
                    *(gsbase + arg4 + 0x45)
                else
                    void* ebp_11 = esp[2]
                    __bound_gprv_mema32(ebp_11, *(ebp_11 + 0x50))
                    int32_t edi_12 = esp[8]
                    arg4 = esp[9]
                    ebp_1 = esp[0xa]
                    entry_ebx = esp[0xc]
                    arg2 = esp[0xd]
                    ecx = esp[0xe]
                    arg1 = esp[0xf]
                    esp = &esp[0x10]
                    int16_t temp0_25
                    temp0_25, arg5 = __insd(edi_12, arg2.w, eflags)
                    *arg5 = temp0_25
                    
                    if (z)
                        arg1.b ^= *(ebp_1 + (arg1 << 1) + 0x58)
                    label_45190a:
                        *(esp - 4) = esp
                        esp_46 = esp - 4
                        arg5[0x36].b += arg1:1.b
                        uint16_t* temp33_1 = entry_ebx
                        entry_ebx += 1
                        arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
                        
                        if (add_overflow(temp33_1, 1))
                            goto label_45198b
                        
                        *(esp_46 - 4) = esp_46
                        esp = esp_46 - 4
                        
                        if (temp33_1 + 1 s>= 0)
                            if (temp33_1 != 0xffffffff)
                                goto label_45197a
                            
                            int16_t* edi_16
                            int16_t temp0_34
                            temp0_34, edi_16 = __insd(arg5, arg2.w, eflags)
                            *edi_16 = temp0_34
                            arg5 = *esp
                            arg4 = esp[1]
                            ebp_1 = esp[2]
                            entry_ebx = esp[4]
                            arg2 = esp[5]
                            ecx = esp[6]
                            esp[7]
                            esp = &esp[8]
                            *(gsbase + arg4 + 0x45)
                        label_451920:
                            arg1 = *esp
                            *esp = &esp[1]
                            char temp53_1 = *arg1
                            *arg1 += arg1.b
                            c = temp53_1 + arg1.b u< temp53_1
                            uint16_t temp0_35
                            temp0_35, temp0_35 = __insb(arg5.w, arg2.w, eflags)
                            arg5.w = temp0_35
                            *arg5 = temp0_35
                            goto label_451926
                        
                        *arg1 += arg1.b
                        char temp44_1 = arg5[0x36].b
                        arg5[0x36].b += arg1:1.b
                        c = temp44_1 + arg1:1.b u< temp44_1
                    label_45196e:
                        char** temp48_1 = ecx
                        ecx -= 1
                        p_1 = unimplemented  {dec ecx}
                        z = temp48_1 == 1
                        s_7 = temp48_1 - 1 s< 0
                        arg4 = __outsb(arg2.w, *arg4, arg4, eflags)
                        
                        if (s_7)
                            goto label_4519ba
                        
                        if (z)
                            int16_t temp0_45
                            temp0_45, eflags = __arpl_memw_gpr16(*(ebp_1 + 0x58), arg1.w)
                            *(ebp_1 + 0x58) = temp0_45
                            goto label_451979
                        
                        arg4 = __outsb(arg2.w, *arg4, arg4, eflags)
                    label_4519e5:
                        *(esp - 4) = esp
                        esp -= 4
                        
                        if (s_7 || not(z))
                            goto label_451a5d
                        
                        if (not(c))
                            goto label_451a33
                        
                        goto label_4519ee
                    
                    if (not(c))
                        goto label_4518a3
                
                arg1 = *esp
                esp = &esp[1]
                goto label_45190a
            
        label_4518d6:
            int16_t* edi_13
            int16_t temp0_30
            temp0_30, edi_13 = __insd(arg5, arg2.w, eflags)
            *edi_13 = temp0_30
            arg5 = *esp
            uint16_t* esi_20 = esp[1]
            ebp_1 = esp[2]
            void* ebx_2 = esp[4]
            arg2 = esp[5]
            ecx = esp[6]
            *(gsbase + esi_20 + 0x45) ^= esp[7]
            eax_6 = esp[8]
            esp[8] = &esp[9]
            esp = &esp[8]
            char temp29_1 = arg5[0x36].b
            arg5[0x36].b += eax_6:1.b
            c = temp29_1 + eax_6:1.b u< temp29_1
            entry_ebx = ebx_2 + 1
            z = ebx_2 == 0xffffffff
            arg4 = __outsd(arg2.w, *esi_20, esi_20, eflags)
            
            if (add_overflow(ebx_2, 1))
                goto label_45195f
            
            *(esp - 4) = esp
            esp -= 4
            
            if (ebx_2 + 1 s< 0)
                uint8_t temp0_38
                temp0_38, arg5 = __insb(arg5, arg2.w, eflags)
                *arg5 = temp0_38
                goto label_45193e
        else
            if (add_overflow(ecx_2, 1))
                goto label_451872
            
            *(arg4 + 0x74)
            *(esp - 4) = arg5
            esp -= 4
        label_451832:
            ecx -= 1
            *arg1 += arg1.b
            char temp3_1 = *arg1
            *arg1 += arg1.b
            c = temp3_1 + arg1.b u< temp3_1
            uint16_t temp0_15
            temp0_15, temp0_15 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_15
            *arg5 = temp0_15
            z = entry_ebx == 0xffffffff
            uint16_t* esi_11 = __outsd(arg2.w, *(arg4 - 1), arg4 - 1, eflags)
            uint8_t* edi_7
            uint8_t temp0_16
            temp0_16, edi_7 = __insb(arg5, arg2.w, eflags)
            *edi_7 = temp0_16
            esi_12 = __outsd(arg2.w, *esi_11, esi_11, eflags)
            
            if (c)
                goto label_451894
            
            arg5 = *esp
            arg4 = esp[1]
            ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            ecx = esp[6]
            __bound_gprv_mema32(ebp_1, *(ebp_1 + 0x45))
            int16_t eax_2 = (esp[8]).w
            esp[8] = &esp[9]
            esp = &esp[8]
            char temp9_1 = arg5[0x36].b
            arg5[0x36].b += eax_2:1.b
            c = temp9_1 + eax_2:1.b u< temp9_1
        label_45184a:
            uint16_t* temp17_1 = entry_ebx
            entry_ebx += 1
            z = temp17_1 == 0xffffffff
            uint16_t* esi_13 = __outsd(arg2.w, *arg4, arg4, eflags)
            uint8_t temp0_17
            temp0_17, arg5 = __insb(arg5, arg2.w, eflags)
            *arg5 = temp0_17
            arg4 = __outsd(arg2.w, *esi_13, esi_13, eflags)
            
            if (not(c))
                if (z)
                    *(esp - 4) = esp
                    arg5 = *(esp - 4)
                    arg4 = *esp
                    ebp_1 = esp[1]
                    entry_ebx = esp[3]
                    arg2 = esp[4]
                    ecx = esp[5]
                    esp[6]
                    esp = &esp[7]
                    __bound_gprv_mema32(ebp_1, *(ebp_1 + 0x45))
                    goto label_451858
                
            label_4518b4:
                ebp_1 += 1
                arg1 = *esp
                *esp = &esp[1]
                char temp27_1 = arg5[0x36].b
                arg5[0x36].b += arg1:1.b
                c = temp27_1 + arg1:1.b u< temp27_1
                s_3 = temp27_1 + arg1:1.b s< 0
            label_4518ba:
                *(esp - 4) = ebp_1
                esp -= 4
            label_4518bb:
                uint16_t* esi_18 = __outsb(arg2.w, *arg4, arg4, eflags)
                uint8_t temp0_28
                temp0_28, arg5 = __insb(arg5, arg2.w, eflags)
                *arg5 = temp0_28
                __outsd(arg2.w, *esi_18, esi_18, eflags)
                int16_t temp0_29
                temp0_29, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x41), ebp_1.w)
                *(entry_ebx + 0x41) = temp0_29
                
                if (not(c))
                    arg5 = *esp
                    arg4 = esp[1]
                    void* ebp_12 = esp[2]
                    entry_ebx = esp[4]
                    arg2 = esp[5]
                    ecx = esp[6]
                    eax_6 = esp[7]
                    esp = &esp[8]
                    
                    if (not(s_3))
                        goto label_451939
                    
                    ebp_1 = ebp_12 + 1
                    arg1 = *esp
                    *esp = &esp[1]
                    *arg1 += arg1.b
                    char temp38_1 = arg5[0x36].b
                    arg5[0x36].b += arg1:1.b
                    c = temp38_1 + arg1:1.b u< temp38_1
                label_4518ce:
                    uint16_t* temp43_1 = entry_ebx
                    entry_ebx += 1
                    z = temp43_1 == 0xffffffff
                    s_3 = temp43_1 + 1 s< 0
                    o_3 = add_overflow(temp43_1, 1)
                label_4518cf:
                    arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
                    
                    if (o_3)
                        goto label_45194b
                    
                    *(esp - 4) = esp
                    esp -= 4
                    
                    if (s_3)
                        ebp_1 += 1
                        goto label_451920
                    
                    goto label_4518d6
                
                eax_6 = arg1 ^ *(ebp_1 + (arg1 << 1) + 0x58)
            label_451939:
                *(esp - 4) = esp
                esp -= 4
                char temp37_1 = *eax_6
                *eax_6 += eax_6.b
                c = temp37_1 + eax_6.b u< temp37_1
                uint16_t temp0_37
                temp0_37, temp0_37 = __insb(arg5.w, arg2.w, eflags)
                arg5.w = temp0_37
                *arg5 = temp0_37
            label_45193e:
                z = entry_ebx == 0xffffffff
                s_3 = entry_ebx + 1 s< 0
                
                if (z)
                    uint8_t* edi_18
                    uint8_t temp0_39
                    temp0_39, edi_18 = __insb(arg5, arg2.w, eflags)
                    *edi_18 = temp0_39
                    *(esp - 4) = eax_6
                    arg5 = *(esp - 4)
                    arg4 = *esp
                    ebp_1 = esp[1]
                    entry_ebx = esp[3]
                    arg2 = esp[4]
                    ecx = esp[5]
                    arg1 = esp[6]
                    esp = &esp[7]
                    
                    if (c)
                        goto label_4519a7
                    
                    int16_t temp0_40
                    temp0_40, arg5 = __insd(arg5, arg2.w, eflags)
                    *arg5 = temp0_40
                    
                    if (z)
                        goto label_4519af
                    
                    if (c)
                        esp += 1
                        ebp_1 += 1
                        goto label_4519b4
                    
                    if (z || c)
                        goto label_451993
                    
                    goto label_45194e
                
            label_4519ad:
                int16_t* edi_22
                int16_t temp0_51
                temp0_51, edi_22 = __insd(arg5, arg2.w, eflags)
                *edi_22 = temp0_51
            label_4519ae:
                arg5 = *esp
                arg4 = esp[1]
                ebp_1 = esp[2]
                entry_ebx = esp[4]
                arg2 = esp[5]
                ecx = esp[6]
                arg1 = esp[7]
                esp = &esp[8]
            label_4519af:
                *(gsbase + arg4 + 0x45) ^= arg1
            label_4519b4:
                arg1 = *esp
                *esp = &esp[1]
                char temp62_1 = *arg1
                *arg1 += arg1.b
                c = temp62_1 + arg1.b u< temp62_1
                p_1 = unimplemented  {add byte [eax], al}
                z = temp62_1 == neg.b(arg1.b)
                s_7 = temp62_1 + arg1.b s< 0
                uint16_t temp0_52
                temp0_52, temp0_52 = __insb(arg5.w, arg2.w, eflags)
                arg5.w = temp0_52
                *arg5 = temp0_52
            label_4519ba:
                *(esp - 4) = esp
                esp -= 4
                
                if (not(s_7))
                    if (not(z))
                        goto label_451a22
                    
                    int16_t* edi_23
                    int16_t temp0_53
                    temp0_53, edi_23 = __insd(arg5, arg2.w, eflags)
                    *edi_23 = temp0_53
                    goto label_4519c2
                
                if (z)
                    *(esp - 4) = arg4
                    esp -= 4
                    ecx += 1
                    goto label_451a8b
                
                if (c)
                    goto label_451a7a
                
                ebp_1 += 1
                goto label_451a16
            
        label_4518a3:
            
            if (not(z) && not(c))
                goto label_4518a5
    label_4518ea:
        
        if (z)
            int16_t* edi_14
            int16_t temp0_31
            temp0_31, edi_14 = __insd(arg5, arg2.w, eflags)
            *edi_14 = temp0_31
            goto label_4518ee
        
    label_45194e:
        arg1 = *esp
        *esp = &esp[1]
        void* esp_40 = esp
        *arg1 += arg1.b
        char temp40_1 = *arg1
        *arg1 += arg1.b
        c = temp40_1 + arg1.b u< temp40_1
        uint16_t temp0_41
        temp0_41, temp0_41 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_41
        *arg5 = temp0_41
        uint16_t* temp41_1 = entry_ebx
        entry_ebx += 1
        z = temp41_1 == 0xffffffff
        
        if (not(z))
            arg1.b ^= *(ebp_1 + (arg1 << 1) + 0x58)
            goto label_4519c9
        
        uint8_t* edi_19
        uint8_t temp0_42
        temp0_42, edi_19 = __insb(arg5, arg2.w, eflags)
        *edi_19 = temp0_42
        *(esp_40 - 4) = arg1
        arg4 = *esp_40
        ebp_1 = *(esp_40 + 4)
        entry_ebx = *(esp_40 + 0xc)
        arg2 = *(esp_40 + 0x10)
        ecx = *(esp_40 + 0x14)
        *(esp_40 + 0x18)
        esp = esp_40 + 0x1c
        
        if (c)
            __bound_gprv_mema32(ecx, *(ecx + 0x6d))
        label_4519c2:
            arg5 = *esp
            arg4 = esp[1]
            ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            ecx = esp[6]
            esp[7]
            esp = &esp[8]
            *(gsbase + arg4 + 0x45)
            goto label_4519c8
        
        int16_t temp0_43
        temp0_43, arg5 = __insd(*(esp_40 - 4), arg2.w, eflags)
        *arg5 = temp0_43
    label_45195f:
        
        if (not(z))
            if (c)
                goto label_4519c8
            
            if (z || c)
                __bound_gprv_mema32(ecx, *(ecx + 0x6d))
                goto label_4519ae
            
            arg1 = *esp
            *esp = &esp[1]
            *arg1 += arg1.b
            char temp51_1 = *arg1
            *arg1 += arg1.b
            c = temp51_1 + arg1.b u< temp51_1
            uint16_t temp0_44
            temp0_44, temp0_44 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_44
            *arg5 = temp0_44
            goto label_45196e
        
        ebp_1 += 1
    label_4519c8:
        arg1 = *esp
        esp_40 = &esp[1]
    label_4519c9:
        *(esp_40 - 4) = esp_40
        char temp49_1 = *arg1
        *arg1 += arg1.b
        c = temp49_1 + arg1.b u< temp49_1
        z = temp49_1 == neg.b(arg1.b)
        uint16_t temp0_54
        temp0_54, temp0_54 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_54
        *arg5 = temp0_54
        *(esp_40 - 8) = esp_40 - 4
        esp = esp_40 - 8
        
        if (temp49_1 + arg1.b s>= 0)
            goto label_4519d2
        
        *(arg2 + 0x65)
        arg5 = *(arg2 + 0x65) * 0x74786554
        c = unimplemented  {imul edi, dword [edx+0x65], 0x74786554}
        
        if (not(z))
        label_451aa0:
            ecx.w += 1
            goto label_451aa2
        
    label_451a2e:
        
        if (not(c))
            goto label_451a76
        
        arg1 = *esp
        *esp = &esp[1]
    label_451a33:
        char temp58_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp58_1 + arg1:1.b u< temp58_1
    label_451a36:
        char** temp55_1 = ecx
        ecx += 1
        cond:15_1 = temp55_1 == 0xffffffff
        cond:22_1 = temp55_1 + 1 s< 0
        
        if (not(c))
            *(esp - 4) = esp
            esp -= 4
            
            if (temp55_1 + 1 s< 0 || temp55_1 != 0xffffffff)
                if (temp55_1 + 1 s< 0)
                label_451af6:
                    arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                    *(fsbase + entry_ebx + 0x41) ^= arg4
                    goto label_451b02
                
            label_451ab3:
                uint16_t* esi_26 = __outsd(arg2.w, *arg4, arg4, eflags)
                arg4 = __outsd(arg2.w, *esi_26, esi_26, eflags)
                
                if (c)
                    goto label_451b1b
                
                *(arg4 + 0x56) ^= esp
            label_451aba:
                ecx += 1
                *(esp - 4) = arg2
                esp -= 4
                arg2 += 1
                *arg1 += arg1.b
                char temp84_1 = arg5[0x36].b
                arg5[0x36].b += arg1:1.b
                c = temp84_1 + arg1:1.b u< temp84_1
                void* temp85_1 = ebp_1
                ebp_1 -= 1
                bool z_5 = temp85_1 == 1
                
                if (not(z_5))
                    if (z_5 || c)
                        goto label_451b74
                    
                    goto label_451b33
                
                if (z_5)
                    if (z_5 || c)
                        goto label_451b74
                    
                    goto label_451b33
                
                *(esp - 4) = esp
                esp -= 4
                
                if (temp85_1 - 1 s< 0)
                    arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                    arg1:1.b ^= *(fsbase + ecx + (arg1 << 1) + 0x52)
                    goto label_451b1b
                
                arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            label_451acc:
                arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
                
                if (c)
                    goto label_451b33
                
                *(ecx + 0x41) ^= ebp_1
                goto label_451ad2
            
            if (not(c))
                uint8_t temp0_64
                temp0_64, arg5 = __insb(arg5, arg2.w, eflags)
                *arg5 = temp0_64
            label_451a95:
                
                if (cond:15_1)
                    if (c)
                        goto label_451b02
                    
                label_451b43:
                    uint16_t* esi_31 = __outsd(arg2.w, *arg4, arg4, eflags)
                    arg4 = __outsd(arg2.w, *esi_31, esi_31, eflags)
                    
                    if (c)
                        goto label_451bab
                    
                    arg1:1.b ^= *(arg4 + 0x41)
                    goto label_451b4a
                
                *(esp - 4) = esp
                esp -= 4
                
                if (cond:22_1)
                    arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                    *(fsbase + ecx + 0x56) ^= ebp_1
                    goto label_451aea
                
                uint16_t* esi_25 = __outsd(arg2.w, *arg4, arg4, eflags)
                arg4 = __outsd(arg2.w, *esi_25, esi_25, eflags)
                
                if (c)
                    goto label_451b03
                
                *(arg4 + 0x41) ^= esp
                goto label_451aa2
            
            if (not(c))
            label_451aae:
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                *(fsbase + arg4 + 0x56) ^= esp
                goto label_451aba
            
            arg4 = __outsb(arg2.w, *(gsbase + arg4), arg4, eflags)
            
            if (temp55_1 == 0xffffffff)
                goto label_451a8f
            
            goto label_451a4a
        
        *(fsbase + arg4 + 0x41) ^= esp
    label_451aa2:
        *(esp - 4) = arg2
        arg2 += 1
        *(esp - 8) = arg1
        esp -= 8
        *arg1 += arg1.b
        char temp68_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp68_1 + arg1:1.b u< temp68_1
    label_451aaa:
        void* temp72_1 = ebp_1
        ebp_1 -= 1
        
        if (temp72_1 == 1)
            if (temp72_1 == 1)
                ecx += 1
                goto label_451b1a
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp72_1 - 1 s< 0)
                goto label_451af6
            
            goto label_451ab3
        
        ecx += 1
    label_451b1a:
        *(esp - 4) = arg2
        esp -= 4
    label_451b1b:
        arg2 += 1
        *arg1 += arg1.b
        char temp75_1 = *arg1
        *arg1 += arg1.b
        c_5 = temp75_1 + arg1.b u< temp75_1
        uint16_t temp0_67
        temp0_67, temp0_67 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_67
        *arg5 = temp0_67
        void* temp76_1 = ebp_1
        ebp_1 -= 1
        bool z_7 = temp76_1 == 1
        
        if (not(z_7))
            if (z_7 || c_5)
                goto label_451bd4
            
            goto label_451b93
        
        if (not(z_7))
            *(esp - 4) = esp
            esp -= 4
            
            if (temp76_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                ecx:1.b ^= *(fsbase + ecx + 0x41)
                goto label_451b7a
            
            uint16_t* esi_30 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_30, esi_30, eflags)
            
            if (c_5)
                goto label_451b93
            
            arg1:1.b ^= *(arg4 * 3 + 0x41)
            goto label_451b33
        
        arg4 = *(arg4 + 0x41) * 0x4252
    label_451b97:
        char temp92_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_8 = temp92_1 + arg1:1.b u< temp92_1
        void* temp93_1 = ebp_1
        ebp_1 -= 1
        
        if (temp93_1 == 1)
            if (temp93_1 == 1)
                ecx.w += 1
                goto label_451c0a
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp93_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                esp ^= *(fsbase + arg4 * 3 + 0x41)
                goto label_451bf3
            
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451ba4:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (c_8)
                goto label_451c0b
            
            arg2:1.b ^= *(entry_ebx + 0x41)
            goto label_451baa
        
        ecx += 1
    label_451c0a:
        *(esp - 4) = arg2
        esp -= 4
    label_451c0b:
        arg2 += 1
        *arg1 += arg1.b
        char temp96_1 = *arg1
        *arg1 += arg1.b
        c_10 = temp96_1 + arg1.b u< temp96_1
        uint16_t temp0_72
        temp0_72, temp0_72 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_72
        *arg5 = temp0_72
        void* temp97_1 = ebp_1
        ebp_1 -= 1
        bool z_12 = temp97_1 == 1
        
        if (not(z_12))
            if (z_12 || c_10)
                goto label_451cc4
            
            goto label_451c83
        
        bool c_14
        
        if (z_12)
            if (c_10)
                goto label_451c82
            
        label_451cf8:
            arg1 = *(ecx + 0x52) * 0x42
            char temp121_1 = arg5[0x36].b
            arg5[0x36].b += arg1:1.b
            c_14 = temp121_1 + arg1:1.b u< temp121_1
        label_451d02:
            void* temp128_1 = ebp_1
            ebp_1 -= 1
            bool z_17 = temp128_1 == 1
            
            if (not(z_17) || z_17)
                goto label_451d72
            
            *(esp - 4) = esp
            
            if (temp128_1 - 1 s< 0)
                if (z_17 || c_14)
                    jump(0x451db5)
                
                jump(0x451d50)
            
            uint16_t* esi_41 = __outsd(arg2.w, *arg4, arg4, eflags)
            __outsd(arg2.w, *esi_41, esi_41, eflags)
            
            if (c_14)
                jump(0x451d73)
            
            jump(0x451d0f)
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp97_1 - 1 s< 0)
            arg2 = *(ebp_1 + 0x78) * 0x726f6f43
            arg4 ^= *(fsbase + entry_ebx + 0x41)
        label_451c6a:
            *(esp - 4) = arg2
            esp -= 4
        label_451c6b:
            arg2 += 1
            *arg1 += arg1.b
            char temp125_1 = *arg1
            *arg1 += arg1.b
            c_12 = temp125_1 + arg1.b u< temp125_1
            uint16_t temp0_74
            temp0_74, temp0_74 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_74
            *arg5 = temp0_74
            void* temp126_1 = ebp_1
            ebp_1 -= 1
            z_13 = temp126_1 == 1
            s_18 = temp126_1 - 1 s< 0
            
            if (not(z_13))
                goto label_451ce1
            
            if (z_13)
                if (z_13 || c_12)
                    goto label_451d24
                
                goto label_451ce3
            
            *(esp - 4) = esp
            esp -= 4
            
            if (s_18)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                arg1.b ^= 0x66
                goto label_451cc9
            
            uint16_t* esi_38 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_38, esi_38, eflags)
            
            if (c_12)
                goto label_451ce3
            
            arg4 ^= *(entry_ebx + 0x76)
            goto label_451c82
        
        uint16_t* esi_36 = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsd(arg2.w, *esi_36, esi_36, eflags)
        
        if (c_10)
            goto label_451c83
        
        esp ^= *(arg4 + 0x76)
    label_451c22:
        ecx += 1
    label_451c23:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
        *arg1 += arg1.b
        char temp105_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_7 = temp105_1 + arg1:1.b u< temp105_1
        void* temp106_1 = ebp_1
        ebp_1 -= 1
        
        if (temp106_1 != 1)
            goto label_451c99
        
        if (temp106_1 == 1)
            ecx += 1
            goto label_451c9a
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp106_1 - 1 s>= 0)
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451c34:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (c_7)
                goto label_451c9b
            
            ebp_1 ^= *(ecx + 0x41)
            goto label_451c3a
        
        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
        arg4 ^= *(fsbase + entry_ebx + 0x76)
    label_451c82:
        ecx += 1
    label_451c83:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
        *arg1 += arg1.b
        char temp111_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp111_1 + arg1:1.b u< temp111_1
        void* temp112_1 = ebp_1
        ebp_1 -= 1
        
        if (temp112_1 != 1)
            goto label_451cfa
        
        if (temp112_1 == 1)
            goto label_451cf8
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp112_1 - 1 s< 0)
            arg2 = *(ebp_1 + 0x78) * 0x726f6f43
            char temp134_1 = arg1.b
            arg1.b ^= 0x66
            c_12 = false
            z_13 = temp134_1 == 0x66
            s_18 = (temp134_1 ^ 0x66) s< 0
        label_451ce1:
            
            if (z_13 || c_12)
            label_451d24:
                arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
                
                if (c_12)
                    goto label_451d8b
                
                arg1.b ^= 0x73
                goto label_451d29
            
        label_451ce3:
            *(esp - 4) = arg2
            esp -= 4
            arg2 += 1
            *arg1 += arg1.b
            arg5[0x36].b += arg1:1.b
            void* temp137_1 = ebp_1
            ebp_1 -= 1
            
            if (temp137_1 != 1)
                goto label_451d59
            
            if (temp137_1 == 1)
                goto label_451d58
            
            *(esp - 4) = esp
            
            if (temp137_1 - 1 s< 0)
                jump(0x451d36)
            
            jump(0x451cf3)
        
        arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
    label_451c94:
        arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        
        if (c)
            goto label_451cfb
        
        arg1.b ^= 0x64
    label_451c99:
        ecx += 1
    label_451c9a:
        *(esp - 4) = arg2
        esp -= 4
    label_451c9b:
        arg2 += 1
        *arg1 += arg1.b
        char temp122_1 = *arg1
        *arg1 += arg1.b
        c_6 = temp122_1 + arg1.b u< temp122_1
        uint16_t temp0_75
        temp0_75, temp0_75 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_75
        *arg5 = temp0_75
        void* temp123_1 = ebp_1
        ebp_1 -= 1
        z_14 = temp123_1 == 1
        
        if (not(z_14))
            goto label_451d11
        
        if (not(z_14))
            *(esp - 4) = esp
            esp -= 4
            
            if (temp123_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                arg1.b ^= 0x69
            label_451cfa:
                *(esp - 4) = arg2
                esp -= 4
            label_451cfb:
                arg2 += 1
                *arg1 += arg1.b
                char temp124_1 = *arg1
                *arg1 += arg1.b
                c_14 = temp124_1 + arg1.b u< temp124_1
                uint16_t temp0_77
                temp0_77, temp0_77 = __insb(arg5.w, arg2.w, eflags)
                arg5.w = temp0_77
                *arg5 = temp0_77
                goto label_451d02
            
            goto label_451cab
        
        arg4 = *(arg4 + 0x41) * 0x4252
    label_451d17:
        char temp143_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_12 = temp143_1 + arg1:1.b u< temp143_1
        void* temp144_1 = ebp_1
        ebp_1 -= 1
        z_13 = temp144_1 == 1
        s_18 = temp144_1 - 1 s< 0
        
        if (z_13)
            if (not(z_13))
                *(esp - 4) = esp
                
                if (s_18)
                    jump(0x451d66)
                
                jump(0x451d23)
            
            goto label_451d88
        
        uint8_t temp0_85
        temp0_85, arg5 = __insb(arg5, arg2.w, eflags)
        *arg5 = temp0_85
    label_451d8a:
        *(esp - 4) = ebp_1
        esp -= 4
    label_451d8b:
        uint16_t* esi_45 = __outsb(arg2.w, *arg4, arg4, eflags)
        uint8_t* edi_26
        uint8_t temp0_86
        temp0_86, edi_26 = __insb(arg5, arg2.w, eflags)
        *edi_26 = temp0_86
        __outsd(arg2.w, *esi_45, esi_45, eflags)
        int32_t eflags_1
        int16_t temp0_87
        temp0_87, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x41), ebp_1.w)
        *(entry_ebx + 0x41) = temp0_87
        
        if (c_12)
            uint8_t* edi_32
            uint8_t temp0_94
            temp0_94, edi_32 = __insb(edi_26, arg2.w, eflags_1)
            *edi_32 = temp0_94
            
            if (not(z_13))
                jump(0x451e09)
            
            __sti(eflags_1)
            *edi_32 += ecx
            *ecx
            *arg1 = &arg1[*arg1]
            *(entry_ebx - 0x51703bb) += ecx.b
            undefined
        
        *esp
        esp[1]
        esp[2]
        esp[4]
        esp[5]
        esp[6]
        esp[7]
        
        if (not(s_18))
            jump("kDataEXT")
        
        jump(0x451d96)
    
    uint8_t temp0_18
    temp0_18, arg5 = __insb(edi_5, arg2.w, eflags)
    *arg5 = temp0_18
    ebp_1 += 1
    label_451858:
    arg1 = *esp
    *esp = &esp[1]
    char temp7_1 = *arg1
    *arg1 += arg1.b
    c = temp7_1 + arg1.b u< temp7_1
    uint16_t temp0_19
    temp0_19, temp0_19 = __insb(arg5.w, arg2.w, eflags)
    arg5.w = temp0_19
    *arg5 = temp0_19
    int16_t* temp8_1 = arg5
    arg5 += 1
    s_3 = temp8_1 + 1 s< 0
    
    if (temp8_1 != 0xffffffff)
        goto label_451862
    
    label_4518a5:
    arg1 = *esp
    *esp = &esp[1]
    void* esp_24 = esp
    char temp13_1 = arg5[0x36].b
    arg5[0x36].b += arg1:1.b
    c = temp13_1 + arg1:1.b u< temp13_1
    esp = esp_24 - 1
    z = esp_24 == 1
    s_3 = esp_24 - 1 s< 0
    bool o_2 = add_overflow(esp_24, 0xffffffff)
    arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
    int16_t temp0_26
    temp0_26, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x41), ebp_1.w)
    *(entry_ebx + 0x41) = temp0_26
    
    if (c)
        char temp20_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp20_1 + arg1:1.b u< temp20_1
    label_451926:
        uint16_t* temp26_1 = entry_ebx
        entry_ebx += 1
        z = temp26_1 == 0xffffffff
        s_3 = temp26_1 + 1 s< 0
        o_2 = add_overflow(temp26_1, 1)
    else
        arg5 = *esp
        arg4 = esp[1]
        ebp_1 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        ecx = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        
        if (s_3)
            goto label_4518b4
    
    arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
    bool c_11
    bool z_15
    
    if (o_2)
        char temp36_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp36_1 + arg1:1.b u< temp36_1
        z = temp36_1 == neg.b(arg1:1.b)
        s_3 = temp36_1 + arg1:1.b s< 0
    label_4519a6:
        *(esp - 4) = esp
        esp -= 4
    label_4519a7:
        
        if (s_3)
            goto label_4519fd
        
        if (z)
            goto label_4519ad
        
        *(esp - 4) = esp
        esp -= 4
        
        if (not(s_3) && z)
        label_451a14:
            ebp_1 += 1
        label_451a16:
            arg1 = *esp
            *esp = &esp[1]
            *arg1 += arg1.b
            char temp71_1 = *arg1
            *arg1 += arg1.b
            c = temp71_1 + arg1.b u< temp71_1
            p_1 = unimplemented  {add byte [eax], al}
            z = temp71_1 == neg.b(arg1.b)
            s_7 = temp71_1 + arg1.b s< 0
            uint16_t temp0_59
            temp0_59, temp0_59 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_59
            *arg5 = temp0_59
            *(esp - 4) = arg1
            esp -= 4
            
            if (c)
                ecx += 1
                goto label_451a8b
            
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451a22:
            
            if (c)
                goto label_451a8d
            
            if (z)
                goto label_451a8f
            
            if (p_1)
                goto label_451a8d
            
            *(esp - 4) = esp
            esp -= 4
            
            if (s_7 || not(z))
                goto label_451aa0
            
            goto label_451a2e
        
    label_451a86:
        *(fsbase + arg4 + (arg2 << 1) + 0x41) ^= esp
    label_451a8b:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
    label_451a8d:
        *arg1 += arg1.b
    label_451a8f:
        char temp73_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp73_1 + arg1:1.b u< temp73_1
        void* temp74_1 = ebp_1
        ebp_1 -= 1
        cond:15_1 = temp74_1 == 1
        cond:22_1 = temp74_1 - 1 s< 0
        
        if (temp74_1 == 1)
            goto label_451a95
        
        ecx += 1
    label_451b02:
        *(esp - 4) = arg2
        esp -= 4
    label_451b03:
        arg2 += 1
        *(esp - 4) = arg1
        esp -= 4
        *arg1 += arg1.b
        char temp82_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        void* temp83_1 = ebp_1
        ebp_1 -= 1
        
        if (temp83_1 != 1)
            ecx += 1
        label_451b7a:
            *(esp - 4) = arg2
            esp -= 4
        label_451b7b:
            arg2 += 1
            *arg1 += arg1.b
            char temp98_1 = *arg1
            *arg1 += arg1.b
            c_7 = temp98_1 + arg1.b u< temp98_1
            uint16_t temp0_69
            temp0_69, temp0_69 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_69
            *arg5 = temp0_69
            goto label_451b82
        
        if (temp83_1 == 1)
            arg1 = *(ecx + 0x52) * 0x42
            char temp90_1 = arg5[0x36].b
            arg5[0x36].b += arg1:1.b
            c_7 = temp90_1 + arg1:1.b u< temp90_1
        label_451b82:
            void* temp99_1 = ebp_1
            ebp_1 -= 1
            bool z_9 = temp99_1 == 1
            
            if (not(z_9))
                if (z_9 || c_7)
                    goto label_451c34
                
                goto label_451bf3
            
            if (z_9)
                if (z_9 || c_7)
                    goto label_451c34
                
                goto label_451bf3
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp99_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                esp ^= *(fsbase + ecx + (arg1 << 1) + 0x52)
                goto label_451bdb
            
            uint16_t* esi_33 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_33, esi_33, eflags)
            
            if (c_7)
                goto label_451bf3
            
            ecx:1.b ^= *(ecx + 0x76)
            goto label_451b92
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp83_1 - 1 s>= 0)
            uint16_t* esi_29 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_29, esi_29, eflags)
            
            if (temp82_1 + arg1:1.b u< temp82_1)
                goto label_451b7b
            
            arg1:1.b ^= *(ecx + (arg1 << 1) + 0x52)
            goto label_451b1b
        
        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
        arg1:1.b ^= *(fsbase + &arg4[0x3b])
    label_451b62:
        ecx += 1
    label_451b63:
        *(esp - 4) = arg2
        arg2 += 1
        *arg1 += arg1.b
        char temp88_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp88_1 + arg1:1.b u< temp88_1
        void* temp89_1 = ebp_1
        ebp_1 -= 1
        
        if (temp89_1 != 1)
            ecx += 1
        label_451bda:
            *(esp - 8) = arg2
            esp -= 8
        label_451bdb:
            arg2 += 1
            *arg1 += arg1.b
            char temp101_1 = *arg1
            *arg1 += arg1.b
            c = temp101_1 + arg1.b u< temp101_1
            uint16_t temp0_71
            temp0_71, temp0_71 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_71
            *arg5 = temp0_71
            void* temp102_1 = ebp_1
            ebp_1 -= 1
            bool z_11 = temp102_1 == 1
            
            if (not(z_11))
                if (z_11 || c)
                    goto label_451c94
                
                goto label_451c53
            
            if (z_11)
                arg4 = *(arg4 + 0x41) * 0x4252
                goto label_451c57
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp102_1 - 1 s>= 0)
                goto label_451beb
            
            arg2 = *(ebp_1 + 0x78) * 0x726f6f43
            ebp_1 ^= *(fsbase + ecx + 0x41)
            goto label_451c3a
        
        if (temp89_1 == 1)
            ecx += 1
            goto label_451bda
        
        *(esp - 8) = esp - 4
        esp -= 8
        
        if (temp89_1 - 1 s>= 0)
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451b74:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (c)
                goto label_451bdb
            
            ecx:1.b ^= *(ecx + 0x41)
            goto label_451b7a
        
        arg2:1.b = (*(ebp_1 + 0x78) * 0x726f6f43):1.b ^ *(fsbase + &entry_ebx[0x3b])
    label_451bc2:
        ecx += 1
    label_451bc3:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
        *arg1 += arg1.b
        char temp115_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_5 = temp115_1 + arg1:1.b u< temp115_1
        void* temp116_1 = ebp_1
        ebp_1 -= 1
        
        if (temp116_1 == 1)
            if (temp116_1 == 1)
                goto label_451c38
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp116_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                esp ^= *(fsbase + arg4 + 0x76)
                goto label_451c22
            
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451bd4:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (c_5)
                goto label_451c3b
            
            esp ^= *(ecx + (arg1 << 1) + 0x52)
            goto label_451bdb
        
        ecx += 1
    label_451c3a:
        *(esp - 4) = arg2
        esp -= 4
    label_451c3b:
        arg2 += 1
        *arg1 += arg1.b
        char temp91_1 = *arg1
        *arg1 += arg1.b
        c_11 = temp91_1 + arg1.b u< temp91_1
        uint16_t temp0_73
        temp0_73, temp0_73 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_73
        *arg5 = temp0_73
    label_451c42:
        void* temp100_1 = ebp_1
        ebp_1 -= 1
        z_15 = temp100_1 == 1
        
        if (z_15)
            if (z_15)
                if (z_15 || c_11)
                    goto label_451cf4
                
                goto label_451cb3
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp100_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                arg1.b ^= 0x64
                goto label_451c99
            
            uint16_t* esi_37 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_37, esi_37, eflags)
            
            if (c_11)
                goto label_451cb3
            
            ebp_1 ^= *(ecx + 0x76)
            goto label_451c52
    else
        *(esp - 4) = esp
        esp -= 4
        
        if (not(s_3))
            if (not(z))
                goto label_451992
            
            int16_t* edi_17
            int16_t temp0_36
            temp0_36, edi_17 = __insd(arg5, arg2.w, eflags)
            *edi_17 = temp0_36
            arg5 = *esp
            esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            esp[6]
            eax_6 = esp[8]
            esp = &esp[9]
            goto label_451939
        
        if (s_3)
        label_4519d1:
            *(esp - 4) = entry_ebx
            esp -= 4
        label_4519d2:
            
            if (not(z))
                goto label_451a36
            
            int16_t* edi_24
            int16_t temp0_55
            temp0_55, edi_24 = __insd(arg5, arg2.w, eflags)
            *edi_24 = temp0_55
            void* edi_25 = *esp
            int32_t esi_22 = esp[1]
            ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            ecx = esp[6]
            arg1 = esp[8]
            esp[8] = &esp[9]
            esp = &esp[8]
            char temp56_1 = *arg1
            *arg1 += arg1.b
            c = temp56_1 + arg1.b u< temp56_1
            uint16_t temp0_56
            temp0_56, temp0_56 = __insb(edi_25.w, arg2.w, eflags)
            edi_25.w = temp0_56
            *edi_25 = temp0_56
            arg5 = edi_25 + 1
            z = edi_25 == 0xffffffff
            s_7 = edi_25 + 1 s< 0
            arg4 = __outsb(arg2.w, *(gsbase + esi_22), esi_22, eflags)
            goto label_4519e5
        
    label_451984:
        arg5 = *esp
        arg4 = esp[1]
        ebp_1 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        ecx = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        
        if (not(z))
            if (c)
                goto label_4519f2
            
            arg4 = esp[1]
            ebp_1 = esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            ecx = esp[6]
            esp[7]
            esp_46 = &esp[8]
            uint8_t temp0_47
            temp0_47, arg5 = __insb(*esp, arg2.w, eflags)
            *arg5 = temp0_47
        label_45198b:
            ebp_1 += 1
            arg1 = *esp_46
            *esp_46 = esp_46 + 4
            esp = esp_46
            char temp39_1 = *arg1
            *arg1 += arg1.b
            c = temp39_1 + arg1.b u< temp39_1
            z = temp39_1 == neg.b(arg1.b)
            s_3 = temp39_1 + arg1.b s< 0
            uint16_t temp0_48
            temp0_48, temp0_48 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_48
            *arg5 = temp0_48
        label_451992:
            *(esp - 4) = arg1
            esp -= 4
        label_451993:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            uint8_t temp0_49
            temp0_49, arg5 = __insb(arg5, arg2.w, eflags)
            *arg5 = temp0_49
            
            if (not(s_3))
                if (s_3 || not(z))
                    goto label_451a74
                
                goto label_451a02
            
            uint16_t* esi_21 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsb(arg2.w, *esi_21, esi_21, eflags)
            int16_t* temp52_1 = arg5
            arg5 -= 1
            z = temp52_1 == 1
            s_7 = temp52_1 - 1 s< 0
            
            if (c)
                if (z)
                    goto label_4519e5
                
                arg1 = *esp
                *esp = &esp[1]
                char temp66_1 = *arg1
                *arg1 += arg1.b
                c = temp66_1 + arg1.b u< temp66_1
                z = temp66_1 == neg.b(arg1.b)
                s_3 = temp66_1 + arg1.b s< 0
                uint16_t temp0_50
                temp0_50, temp0_50 = __insb(arg5.w, arg2.w, eflags)
                arg5.w = temp0_50
                *arg5 = temp0_50
                goto label_4519a6
            
            if (c)
            label_451a05:
                arg1 = *esp
                *esp = &esp[1]
                arg5[0x36].b += arg1:1.b
                uint16_t* temp65_1 = arg2
                arg2 += 1
                ebp_1 = *(arg4 + 0x64) * 0x74786554
                
                if (temp65_1 != 0xffffffff)
                    goto label_451a86
                
                goto label_451a14
            
        label_451a4a:
            arg1 = *esp
            *esp = &esp[1]
            *arg1 += arg1.b
            char temp63_1 = *arg1
            *arg1 += arg1.b
            c = temp63_1 + arg1.b u< temp63_1
            uint16_t temp0_60
            temp0_60, temp0_60 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_60
            *arg5 = temp0_60
            char** temp64_1 = ecx
            ecx -= 1
            
            if (not(c))
                uint8_t temp0_65
                temp0_65, arg5 = __insb(arg5, arg2.w, eflags)
                *arg5 = temp0_65
                goto label_451aaa
            
            if (temp64_1 - 1 s< 0 || temp64_1 != 1)
                goto label_451acc
            
            ebp_1 += 1
            arg1 = *esp
            esp = &esp[1]
        label_451a5d:
            *(esp - 4) = esp
            esp -= 4
            char temp69_1 = *arg1
            *arg1 += arg1.b
            c = temp69_1 + arg1.b u< temp69_1
            uint16_t temp0_61
            temp0_61, temp0_61 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_61
            *arg5 = temp0_61
            goto label_451a62
        
        if (not(c))
            goto label_451a33
        
    label_4519ee:
        arg1 = *esp
        *esp = &esp[1]
        *arg1 += arg1.b
    label_4519f2:
        char temp59_1 = *arg1
        *arg1 += arg1.b
        c = temp59_1 + arg1.b u< temp59_1
        uint16_t temp0_57
        temp0_57, temp0_57 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_57
        *arg5 = temp0_57
        int32_t* temp60_1 = esp
        esp += 1
        z = temp60_1 == 0xffffffff
        s_3 = temp60_1 + 1 s< 0
        uint8_t temp0_58
        temp0_58, arg5 = __insb(arg5, arg2.w, eflags)
        *arg5 = temp0_58
        
        if (not(z))
            *(esp - 4) = esp
            esp -= 4
        label_4519fd:
            
            if (s_3 || not(z))
                goto label_451a74
            
        label_451a02:
            
            if (not(c))
                goto label_451a4a
            
            goto label_451a05
        
        uint8_t temp0_62
        temp0_62, arg5 = __insb(arg5, arg2.w, eflags)
        *arg5 = temp0_62
    label_451a62:
        void* temp70_1 = ebp_1
        ebp_1 -= 1
        bool c_3
        
        if (temp70_1 != 1)
            ecx += 1
        label_451ad2:
            *(esp - 4) = arg2
            esp -= 4
        label_451ad3:
            arg2 += 1
            *arg1 += arg1.b
            char temp86_1 = *arg1
            *arg1 += arg1.b
            c_3 = temp86_1 + arg1.b u< temp86_1
            uint16_t temp0_66
            temp0_66, temp0_66 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_66
            *arg5 = temp0_66
            goto label_451ada
        
        if (temp70_1 != 1)
            *(esp - 4) = esp
            esp -= 4
            
            if (temp70_1 - 1 s< 0)
                goto label_451aae
            
            uint16_t* esi_23 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_23, esi_23, eflags)
            
            if (c)
                goto label_451ad3
            
            *(ecx + (arg1 << 1) + 0x52) ^= esp
            arg2 += 1
        label_451a74:
            *arg1 += arg1.b
        label_451a76:
            char temp61_1 = *arg1
            *arg1 += arg1.b
            c = temp61_1 + arg1.b u< temp61_1
            uint16_t temp0_63
            temp0_63, temp0_63 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_63
            *arg5 = temp0_63
        label_451a7a:
            void* temp67_1 = ebp_1
            ebp_1 -= 1
            
            if (temp67_1 != 1)
                *(esp - 4) = arg4
                esp -= 4
            label_451aea:
                ecx += 1
            label_451aeb:
                *(esp - 4) = arg2
                esp -= 4
                arg2 += 1
                *arg1 += arg1.b
            else
                if (temp67_1 != 1)
                    *(esp - 4) = esp
                    esp -= 4
                    
                    if (temp67_1 - 1 s< 0)
                        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                        *(fsbase + ecx + 0x41) ^= ebp_1
                        goto label_451ad2
                    
                    uint16_t* esi_24 = __outsd(arg2.w, *arg4, arg4, eflags)
                    arg4 = __outsd(arg2.w, *esi_24, esi_24, eflags)
                    
                    if (c)
                        goto label_451aeb
                    
                    *(arg4 + (arg2 << 1) + 0x41) ^= esp
                    goto label_451a8b
                
                arg2 = *(arg4 + 0x41) * 0x4252
            
            char temp80_1 = arg5[0x36].b
            arg5[0x36].b += arg1:1.b
            c_8 = temp80_1 + arg1:1.b u< temp80_1
            void* temp81_1 = ebp_1
            ebp_1 -= 1
            bool z_6 = temp81_1 == 1
            
            if (not(z_6))
                if (z_6 || c_8)
                    goto label_451ba4
                
                goto label_451b63
            
            if (z_6)
                if (z_6 || c_8)
                    goto label_451ba4
                
                goto label_451b63
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp81_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                arg1:1.b ^= *(fsbase + arg4 + 0x41)
                goto label_451b4a
            
            uint16_t* esi_28 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_28, esi_28, eflags)
            
            if (c_8)
                goto label_451b63
            
            *(entry_ebx + 0x41) ^= arg4
            goto label_451b02
        
        arg1 = *(ecx + 0x52) * 0x42
        char temp77_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_3 = temp77_1 + arg1:1.b u< temp77_1
    label_451ada:
        void* temp87_1 = ebp_1
        ebp_1 -= 1
        
        if (temp87_1 != 1)
            ecx += 1
        label_451b4a:
            *(esp - 4) = arg2
            esp -= 4
        label_451b4b:
            arg2 += 1
            *arg1 += arg1.b
            char temp103_1 = *arg1
            *arg1 += arg1.b
            c_6 = temp103_1 + arg1.b u< temp103_1
            uint16_t temp0_68
            temp0_68, temp0_68 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_68
            *arg5 = temp0_68
            void* temp104_1 = ebp_1
            ebp_1 -= 1
            bool z_8 = temp104_1 == 1
            
            if (not(z_8))
                if (z_8 || c_6)
                    goto label_451c04
                
                goto label_451bc3
            
            if (z_8)
                if (c_6)
                    goto label_451bc2
                
            label_451c38:
                arg1 = *(ecx + 0x52) * 0x42
                char temp127_1 = arg5[0x36].b
                arg5[0x36].b += arg1:1.b
                c_11 = temp127_1 + arg1:1.b u< temp127_1
                goto label_451c42
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp104_1 - 1 s< 0)
                arg2:1.b = (*(ebp_1 + 0x78) * 0x726f6f43):1.b ^ *(fsbase + entry_ebx + 0x41)
                goto label_451baa
            
            uint16_t* esi_32 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_32, esi_32, eflags)
            
            if (c_6)
                goto label_451bc3
            
            arg1:1.b ^= arg4[0x3b].b
            goto label_451b62
        
        if (temp87_1 == 1)
            ecx.w += 1
            goto label_451b4a
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp87_1 - 1 s>= 0)
            uint16_t* esi_27 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_27, esi_27, eflags)
            
            if (c_3)
                goto label_451b4b
            
            *(ecx + 0x56) ^= ebp_1
            goto label_451aea
        
        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
        arg1:1.b ^= *(fsbase + arg4 * 3 + 0x41)
    label_451b33:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
        *arg1 += arg1.b
        char temp78_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c = temp78_1 + arg1:1.b u< temp78_1
        void* temp79_1 = ebp_1
        ebp_1 -= 1
        bool c_9
        
        if (temp79_1 != 1)
            ecx += 1
        label_451baa:
            *(esp - 4) = arg2
            esp -= 4
        label_451bab:
            arg2 += 1
            *arg1 += arg1.b
            char temp94_1 = *arg1
            *arg1 += arg1.b
            c_9 = temp94_1 + arg1.b u< temp94_1
            uint16_t temp0_70
            temp0_70, temp0_70 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_70
            *arg5 = temp0_70
            void* temp95_1 = ebp_1
            ebp_1 -= 1
            bool z_10 = temp95_1 == 1
            
            if (not(z_10))
                if (z_10 || c_9)
                    goto label_451c64
                
                goto label_451c23
            
            if (z_10)
                if (z_10 || c_9)
                    goto label_451c64
                
                goto label_451c23
            
            *(esp - 4) = esp
            esp -= 4
            
            if (temp95_1 - 1 s< 0)
                arg2 = *(ebp_1 + 0x78) * 0x726f6f43
                esp ^= *(fsbase + arg4 + 0x41)
                goto label_451c0a
            
            uint16_t* esi_34 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_34, esi_34, eflags)
            
            if (c_9)
                goto label_451c23
            
            arg2:1.b ^= entry_ebx[0x3b].b
            goto label_451bc2
        
        if (temp79_1 != 1)
            *(esp - 4) = esp
            esp -= 4
            
            if (temp79_1 - 1 s>= 0)
                goto label_451b43
            
            arg2 = *(ebp_1 + 0x78) * 0x726f6f43
            ecx:1.b ^= *(fsbase + ecx + 0x76)
        label_451b92:
            ecx += 1
        label_451b93:
            *(esp - 4) = arg2
            esp -= 4
            arg2 += 1
            *arg1 += arg1.b
            goto label_451b97
        
        if (c)
            goto label_451baa
        
    label_451beb:
        uint16_t* esi_35 = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsd(arg2.w, *esi_35, esi_35, eflags)
        
        if (c)
            goto label_451c53
        
        esp ^= *(arg4 * 3 + 0x41)
    label_451bf3:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
        *arg1 += arg1.b
        char temp109_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_6 = temp109_1 + arg1:1.b u< temp109_1
        void* temp110_1 = ebp_1
        ebp_1 -= 1
        
        if (temp110_1 != 1)
            ecx += 1
            goto label_451c6a
        
        if (temp110_1 == 1)
            if (c_6)
                goto label_451c6a
            
        label_451cab:
            uint16_t* esi_39 = __outsd(arg2.w, *arg4, arg4, eflags)
            arg4 = __outsd(arg2.w, *esi_39, esi_39, eflags)
            
            if (c_6)
                goto label_451d13
            
            char temp138_1 = arg1.b
            arg1.b ^= 0x64
            c_11 = false
            z_15 = temp138_1 == 0x64
            goto label_451cb1
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp110_1 - 1 s>= 0)
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451c04:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (c_6)
                goto label_451c6b
            
            esp ^= *(arg4 + 0x41)
            goto label_451c0a
        
        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
        ebp_1 ^= *(fsbase + ecx + 0x76)
    label_451c52:
        ecx += 1
    label_451c53:
        *(esp - 4) = arg2
        esp -= 4
        arg2 += 1
        *arg1 += arg1.b
    label_451c57:
        char temp107_1 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        c_9 = temp107_1 + arg1:1.b u< temp107_1
        void* temp108_1 = ebp_1
        ebp_1 -= 1
        
        if (temp108_1 != 1)
            goto label_451cc9
        
        if (temp108_1 == 1)
            ecx.w += 1
            goto label_451cca
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp108_1 - 1 s>= 0)
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451c64:
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
            
            if (c_9)
                goto label_451ccb
            
            arg4 ^= *(entry_ebx + 0x41)
            goto label_451c6a
        
        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
        char temp132_1 = arg1.b
        arg1.b ^= 0x64
        c_11 = false
        z_15 = temp132_1 == 0x64
    
    label_451cb1:
    void* eax_16
    void* esp_84
    uint8_t* edi_29
    bool c_15
    bool cond:51_1
    bool cond:52_1
    
    if (z_15 || c_11)
    label_451cf4:
        arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        
        if (not(c_11))
            arg1.b ^= 0x69
            goto label_451cfa
        
        arg5[0x36].b += arg1:1.b
    label_451d5e:
        uint16_t* temp129_1 = entry_ebx
        entry_ebx += 1
        uint8_t temp0_81
        temp0_81, arg5 = __insb(arg5, arg2.w, eflags)
        *arg5 = temp0_81
        esp = *(ebp_1 + 0x6e) * 0x74634174
        arg4 = *(arg4 + 0x65) * 0x74786554
        
        if (temp129_1 != 0xffffffff)
        label_451de2:
            *(esp - 4) = esp
            char temp135_1 = arg5[0x36].b
            arg5[0x36].b += arg1:1.b
            bool z_18 = temp135_1 == neg.b(arg1:1.b)
            
            if (z_18)
                if (not(z_18) && temp135_1 + arg1:1.b u>= temp135_1)
                    jump(0x451e39)
                
                jump("urbsTessellatorEXT")
            
            *(ebp_1 - 4) = arg1
            sub_40422c(*(ebp_1 - 4))
            eax_16 = nullptr
            *(esp - 8) = ebp_1
            *(esp - 0xc) = j_sub_4037f0
            *(esp - 0x10) = fsbase->NtTib.ExceptionList
            esp_84 = esp - 0x10
            goto label_451e4d
        
    label_451d72:
        *(esp - 4) = arg2
        void* esp_68 = esp - 4
        arg2 += 1
        *arg1 += arg1.b
        char temp141_1 = *arg1
        *arg1 += arg1.b
        c_15 = temp141_1 + arg1.b u< temp141_1
        uint16_t temp0_82
        temp0_82, temp0_82 = __insb(arg5.w, arg2.w, eflags)
        arg5.w = temp0_82
        *arg5 = temp0_82
        esp = esp_68 - 1
        cond:51_1 = esp_68 == 1
        cond:52_1 = esp_68 - 1 s>= 0
        __outsd(arg2.w, *arg4, arg4, eflags)
        int16_t temp0_83
        temp0_83, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x41), ebp_1.w)
        *(entry_ebx + 0x41) = temp0_83
    label_451d7f:
        
        if (c_15)
            uint8_t temp0_91
            temp0_91, edi_29 = __insb(arg5, arg2.w, eflags)
            *edi_29 = temp0_91
            goto label_451df5
        
        arg5 = *esp
        arg4 = esp[1]
        ebp_1 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        ecx = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        
        if (cond:52_1)
            goto label_451dc9
        
        goto label_451d84
    
    label_451cb3:
    *(esp - 4) = arg2
    esp -= 4
    arg2 += 1
    *arg1 += arg1.b
    char temp113_1 = arg5[0x36].b
    arg5[0x36].b += arg1:1.b
    c_10 = temp113_1 + arg1:1.b u< temp113_1
    void* temp114_1 = ebp_1
    ebp_1 -= 1
    
    if (temp114_1 != 1)
        goto label_451d29
    
    if (temp114_1 == 1)
        if (c_10)
            goto label_451d2a
        
        if (temp114_1 - 1 s>= 0)
            jump(0x451d6e)
        
        goto label_451de2
    
    *(esp - 4) = esp
    esp -= 4
    
    if (temp114_1 - 1 s< 0)
        arg2 = *(ebp_1 + 0x78) * 0x726f6f43
        char temp136_1 = arg1.b
        arg1.b ^= 0x69
        c_6 = false
        z_14 = temp136_1 == 0x69
    label_451d11:
        
        if (not(z_14) && not(c_6))
        label_451d13:
            *(esp - 4) = arg2
            esp -= 4
            arg2 += 1
            *arg1 += arg1.b
            goto label_451d17
        
        if (z_14)
        label_451d58:
            *(esp - 4) = arg2
        label_451d59:
            arg2 += 1
            *arg1 += arg1.b
            uint16_t temp0_80
            temp0_80, temp0_80 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_80
            *arg5 = temp0_80
            goto label_451d5e
        
    label_451dc8:
        *(esp - 4) = esp
    label_451dc9:
        *arg1 += arg1.b
        char temp145 = arg5[0x36].b
        arg5[0x36].b += arg1:1.b
        
        if (temp145 != neg.b(arg1:1.b))
            *arg1 += arg1.b
            return sub_451e20(arg1, arg2, ecx) __tailcall
        
        if (temp145 != neg.b(arg1:1.b))
            jump(0x451e44)
        
        jump("bsCallbackDataEXT")
    
    arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
    label_451cc4:
    arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
    
    if (c_10)
        goto label_451d2b
    
    arg1.b ^= 0x66
    label_451cc9:
    ecx += 1
    label_451cca:
    *(esp - 4) = arg2
    esp -= 4
    label_451ccb:
    arg2 += 1
    *arg1 += arg1.b
    char temp117_1 = *arg1
    *arg1 += arg1.b
    bool c_13 = temp117_1 + arg1.b u< temp117_1
    uint16_t temp0_76
    temp0_76, temp0_76 = __insb(arg5.w, arg2.w, eflags)
    arg5.w = temp0_76
    *arg5 = temp0_76
    void* temp118_1 = ebp_1
    ebp_1 -= 1
    bool z_16 = temp118_1 == 1
    
    if (not(z_16))
        goto label_451d41
    
    if (z_16)
        if (not(c_13))
            goto label_451db8
        
        ecx += 1
    label_451d43:
        *(esp - 4) = arg2
        arg2 += 1
        *arg1 += arg1.b
        arg5[0x36].b += arg1:1.b
        char** temp131_1 = ecx
        ecx += 1
        int16_t temp0_79
        temp0_79, eflags = __arpl_memw_gpr16(*(ecx + (ebp_1 << 1) + 0x76), arg4.w)
        *(ecx + (ebp_1 << 1) + 0x76) = temp0_79
        *(esp - 8) = esp - 4
        esp -= 8
        
        if (temp131_1 + 1 s< 0 || temp131_1 != 0xffffffff)
            goto label_451dc8
        
        goto label_451d58
    
    *(esp - 4) = esp
    esp -= 4
    
    if (temp118_1 - 1 s>= 0)
        uint16_t* esi_40 = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsd(arg2.w, *esi_40, esi_40, eflags)
        
        if (not(c_13))
            jump(0x451cdf)
        
        goto label_451d43
    
    arg2 = *(ebp_1 + 0x78) * 0x726f6f43
    arg1.b ^= 0x73
    label_451d29:
    ecx += 1
    label_451d2a:
    *(esp - 4) = arg2
    esp -= 4
    label_451d2b:
    arg2 += 1
    *arg1 += arg1.b
    char temp119_1 = *arg1
    *arg1 += arg1.b
    c_15 = temp119_1 + arg1.b u< temp119_1
    uint16_t temp0_78
    temp0_78, temp0_78 = __insb(arg5.w, arg2.w, eflags)
    arg5.w = temp0_78
    *arg5 = temp0_78
    void* temp120_1 = ebp_1
    ebp_1 -= 1
    cond:51_1 = temp120_1 == 1
    bool cond:63_1 = temp120_1 == 1
    
    if (temp120_1 != 1)
        __outsb(arg2.w, *arg4, arg4, eflags)
        
        if (temp120_1 != 1)
            goto label_451da4
        
        uint8_t temp0_92
        temp0_92, edi_29 = __insb(arg5, arg2.w, eflags)
        *edi_29 = temp0_92
    label_451df5:
        uint8_t* edi_30
        uint8_t temp0_93
        temp0_93, edi_30 = __insb(edi_29, arg2.w, eflags)
        *edi_30 = temp0_93
        void* edi_31 = *esp
        esp[1]
        ebp_1 = esp[2]
        entry_ebx = esp[4]
        esp[5]
        esp[6]
        eax_16 = esp[7]
        bool cond:61_1
        
        if (cond:51_1)
            eax_16.b &= 0xfb
            int32_t temp146_1 = *(entry_ebx + 0x1fb83d8)
            *(entry_ebx + 0x1fb83d8) -= 1
            cond:61_1 = temp146_1 s<= 1
        else
            if (not(c_15))
                void* eax_17 = esp[8]
                esp[8] = &esp[9]
                *eax_17 += eax_17.b
                char temp148 = *(edi_31 + 0x6c)
                *(edi_31 + 0x6c) += eax_17:1.b
                
                if (temp148 != neg.b(eax_17:1.b))
                    jump(0x451e48)
                
                jump("eleteNurbsTessellatorEXT")
            
            __sti(eflags)
            esp[7] = *entry_ebx
            *(ebp_1 + 0x68) = rlc.b(*(ebp_1 + 0x68), 0xd9, c_15)
            esp[7].w
            esp_84 = esp + 0x1e
            ebp_1 += 1
            *(edi_31 * 9 + 0x30) += eax_16:1.b
        label_451e4d:
            *(fsbase + eax_16) = esp_84
            *(esp_84 - 4) = ebp_1
            *(esp_84 - 8) = j_sub_40353c
            *(esp_84 - 0xc) = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = esp_84 - 0xc
            entry_ebx = sub_404364(U".", *(ebp_1 - 4))
            cond:61_1 = entry_ebx s<= 1
        
        if (cond:61_1)
            sub_40b454()
            noreturn
        
        arg1 = sub_404078(*(ebp_1 - 4))
    else
        if (temp120_1 == 1)
            *(arg4 + 0x74)
            *(arg4 + 0x74)
            c_15 = unimplemented  {imul ebp, dword [esi+0x74], 0x61726150}
        label_451da7:
            int16_t temp0_88
            temp0_88, arg5 = __insd(arg5, arg2.w, eflags)
            *arg5 = temp0_88
            uint8_t* edi_33
            
            if (temp120_1 == 1)
                if (c_15)
                label_451e12:
                    uint8_t temp0_95
                    temp0_95, edi_33 = __insb(arg5, arg2.w, eflags)
                    *edi_33 = temp0_95
                    goto label_451e14
                
            label_451e85:
                char temp149_1 = *(entry_ebx + 0x448afc45)
                *(entry_ebx + 0x448afc45) += ecx.b
                arg2:1.b = sbb.b(arg2:1.b, entry_ebx:1.b, temp149_1 + ecx.b u< temp149_1)
                arg1.b -= 0x30
                char temp150_1 = arg1.b
                arg1.b -= 0xa
                
                if (temp150_1 u< 0xa)
                    jump(sub_451e20+0x77)
                
                sub_40b454()
                noreturn
            
            if (c_15)
                uint8_t temp0_96
                temp0_96, edi_33 = __insb(arg5, arg2.w, eflags)
                *edi_33 = temp0_96
            label_451e14:
                uint8_t* edi_34
                uint8_t temp0_97
                temp0_97, edi_34 = __insb(edi_33, arg2.w, eflags)
                *edi_34 = temp0_97
                *esp
                esp[1]
                esp[2]
                esp[4]
                esp[5]
                esp[6]
                esp[7]
                
                if (cond:63_1)
                    jump(0x451e87)
                
                jump("rEXT")
            
            char* eax_15 = *esp
            *esp = &esp[1]
            *eax_15 += eax_15.b
            char temp151_1 = *eax_15
            *eax_15 += eax_15.b
            z_16 = temp151_1 == neg.b(eax_15.b)
            uint16_t temp0_89
            temp0_89, temp0_89 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_89
            *arg5 = temp0_89
            *(esp - 4) = eax_15
            arg4 = __outsd(arg2.w, *arg4, arg4, eflags)
        label_451db8:
            *(arg4 + 0x74)
            int16_t* edi_28
            int16_t temp0_90
            temp0_90, edi_28 = __insd(arg5, arg2.w, eflags)
            *edi_28 = temp0_90
            
            if (z_16)
                jump(sub_451e20+8)
            
            jump("rfvEXT")
        
        *(esp - 4) = esp
        esp -= 4
        
        if (temp120_1 - 1 s< 0)
            cond:51_1 = ecx == 0xffffffff
            cond:52_1 = ecx + 1 s>= 0
            goto label_451d7f
        
        uint16_t* esi_43 = __outsd(arg2.w, *arg4, arg4, eflags)
        arg4 = __outsd(arg2.w, *esi_43, esi_43, eflags)
        
        if (not(c_15))
            char temp147_1 = arg1.b
            arg1.b ^= 0x73
            c_13 = false
            z_16 = temp147_1 == 0x73
        label_451d41:
            
            if (not(z_16) && not(c_13))
                goto label_451d43
            
        label_451d84:
            arg1 = *esp
            *esp = &esp[1]
            char temp130_1 = *arg1
            *arg1 += arg1.b
            c_12 = temp130_1 + arg1.b u< temp130_1
            z_13 = temp130_1 == neg.b(arg1.b)
            s_18 = temp130_1 + arg1.b s< 0
        label_451d88:
            uint16_t temp0_84
            temp0_84, temp0_84 = __insb(arg5.w, arg2.w, eflags)
            arg5.w = temp0_84
            *arg5 = temp0_84
            goto label_451d8a
        
        *(esp - 4) = arg1
        esp -= 4
    label_451da4:
        arg5 = *esp
        arg4 = esp[1]
        esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        ecx = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        
        if (not(c_15))
            goto label_451da7
        
        cond:63_1 = arg4 == 1
        
        if (arg4 == 1)
            __bound_gprv_mema32(arg4 - 1, *(entry_ebx + 0x54))
            
            if (not(c_15))
                goto label_451e85
            
            goto label_451e12
    
    if (entry_ebx s< arg1)
        jump(0x451e86)
    
    sub_40b454()
    noreturn
}
