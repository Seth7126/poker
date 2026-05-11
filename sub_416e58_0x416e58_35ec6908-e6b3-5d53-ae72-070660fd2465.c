// ============================================================
// 函数名称: sub_416e58
// 虚拟地址: 0x416e58
// WARP GUID: 35ec6908-e6b3-5d53-ae72-070660fd2465
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_416e58(char* arg1, char* arg2, char* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi, uint32_t arg7[0x4] @ xmm0)
{
    // 第一条实际指令: *arg1 += arg1.b
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
    *arg1 += arg1.b
    arg1.b = *0xc00416e
    *arg1 += arg1.b
    char temp1 = arg1.b
    char* entry_ebx
    arg1.b += entry_ebx.b
    int32_t eflags
    int16_t* esp
    bool c_2
    bool o_3
    bool o_5
    char* eax_8
    TEB* fsbase
    void** gsbase
    int16_t es
    bool c_5
    bool p_2
    bool a_1
    bool z
    bool z_1
    bool z_7
    bool s_2
    bool o_1
    bool o_2
    bool o_7
    
    if (temp1 s< neg.b(entry_ebx.b))
        *entry_ebx += arg1.b
        char temp2_1 = arg2.b
        arg2.b |= *(&arg5[arg1] + 0x6f)
        z = (temp2_1 | *(&arg5[arg1] + 0x6f)) == 0
    label_416ec5:
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (not(z))
            arg5 = *(entry_ebx + 0x68)
            *arg2 += arg1.b
            *arg1 += arg1.b
            char temp8_1 = *(&arg5[arg4] + 0x66090041)
            *(&arg5[arg4] + 0x66090041) += entry_ebx:1.b
            c_2 = temp8_1 + entry_ebx:1.b u< temp8_1
            z_1 = temp8_1 == neg.b(entry_ebx:1.b)
            o_2 = add_overflow(temp8_1, entry_ebx:1.b)
            
            if (o_2)
                goto label_416f21
            
            goto label_416edd
        
    label_416f18:
        bool z_2
        
        if (z)
        label_416f1c:
            *arg1 += arg1.b
            entry_ebx:1.b *= 2
        label_416f20:
            *arg1 += arg1.b
            arg1[0x416f28] += arg2.b
            char* temp15_1 = arg3
            arg3 = &arg3[*arg2]
            c_2 = &temp15_1[*arg2] u< temp15_1
            *(esp - 4) = esp
            esp -= 4
            z_2 = arg5 == 0xffffffff
            arg5 = __outsd(arg2.w, *(arg5 + 1), arg5 + 1, eflags)
            goto label_416f2d
        
    label_416f1b:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += 1
    label_416f21:
        *arg1 += arg1.b
        arg6[0x41] -= arg3:1.b
        *entry_ebx += arg1.b
        char temp9_1 = arg2.b
        arg2.b |= *(&arg5[arg1] + 0x6f)
        c_2 = false
        z_2 = (temp9_1 | *(&arg5[arg1] + 0x6f)) == 0
    label_416f2d:
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        bool z_4
        bool s_1
        bool o_4
        
        if (not(z_2))
            if (not(z_2))
                uint8_t temp0_5
                temp0_5, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_5
                *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
                *arg1 += arg1.b
            label_416f38:
                *entry_ebx += arg1.b
                *arg1 += arg1.b
                arg6[arg4 << 1] += arg1:1.b
                goto label_416f3f
            
            esp += 1
        label_416fac:
            arg6 = *esp
            arg5 = *(esp + 4)
            arg4 = *(esp + 8)
            entry_ebx = *(esp + 0x10)
            arg2 = *(esp + 0x14)
            arg3 = *(esp + 0x18)
            arg1 = *(esp + 0x1c)
            esp = &esp[0x10]
            
            if (c_2)
            label_416faf:
                char* temp28_1 = arg1
                arg1 = &arg1[0x6f447370]
                c_2 = temp28_1 u>= 0x90bb8c90
                z_4 = temp28_1 == 0x90bb8c90
                s_1 = &temp28_1[0x6f447370] s< 0
                o_4 = add_overflow(temp28_1, 0x6f447370)
                goto label_416fb4
            
            int16_t temp0_16
            temp0_16, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_16
        label_417018:
            p_2 = unimplemented  {dec esi}
            a_1 = unimplemented  {dec esi}
            z_7 = arg5 == 1
            s_2 = arg5 - 1 s< 0
            o_7 = add_overflow(arg5, 0xffffffff)
            arg5 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
            
            if (not(z_7))
                goto label_41701c
            
        label_417022:
            *(arg1 + 0x6d)
            *(arg1 + 0x6d) |= arg5
            c_2 = false
            goto label_417025
        
        char temp18_1 = arg1[0x300416f]
        arg1[0x300416f] = ror.b(arg1[0x300416f], 9)
        c_2 = unimplemented  {ror byte [eax+0x300416f], 0x9}
        z = ror.b(temp18_1, 9) == 0
        o_1 = unimplemented  {ror byte [eax+0x300416f], 0x9}
        *(esp - 4) = esp
        esp -= 4
    label_416f8b:
        *(esp - 4) = arg1
        esp -= 4
        arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
    label_416f8e:
        *(esp - 4) = entry_ebx
        esp -= 4
        
        if (z)
        label_41700a:
            *(esp - 4) = arg6
            *(esp - 8) = 0x5657469
            esp -= 8
            
            if (o_1)
                goto label_41707f
            
            p_2 = unimplemented  {dec esi}
            a_1 = unimplemented  {dec esi}
            z_7 = arg5 == 1
            s_2 = arg5 - 1 s< 0
            o_7 = add_overflow(arg5, 0xffffffff)
            arg5 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
            goto label_417014
        
        uint8_t temp0_9
        temp0_9, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_9
        *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
        *arg1 += arg1.b
        *arg5 += arg1.b
        *arg1 += arg1.b
        char temp27_1 = arg6[(arg4 << 1) + 0x70070041]
        arg6[(arg4 << 1) + 0x70070041] += arg1.b
        z_4 = temp27_1 == neg.b(arg1.b)
        s_1 = temp27_1 + arg1.b s< 0
        
        if (temp27_1 + arg1.b u>= temp27_1)
            goto label_416ff7
        
        uint16_t* esi_7 = __outsd(arg2.w, *arg5, arg5, eflags)
        uint8_t temp0_10
        temp0_10, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_10
        *(esi_7 + arg1 + 0x70)
        int32_t esp_5 = *(esi_7 + arg1 + 0x70) * 0x73614473
        c_2 = unimplemented  {imul esp, dword [esi+eax+0x70], 0x73614473}
        o_4 = unimplemented  {imul esp, dword [esi+eax+0x70], 0x73614473}
        *(esp_5 - 4) = 0x44737005
        esp = esp_5 - 4
        arg5 = __outsd(arg2.w, *esi_7, esi_7, eflags)
    label_416fb4:
        
        if (z_4)
            arg1.b |= 0x70
            c_2 = false
            o_1 = false
            es = *esp
            esp = &esp[1]
            goto label_417008
        
        if (o_4)
            if (s_1)
                if (o_4)
                    char* temp61_1 = arg3
                    arg3 = &arg3[*entry_ebx]
                    c_5 = &temp61_1[*entry_ebx] u< temp61_1
                    goto label_41709e
                
                goto label_41702f
            
            arg1.b |= 0x70
            c_2 = false
            int16_t* edi_3
            int16_t temp0_19
            temp0_19, edi_3 = __insd(arg6, arg2.w, eflags)
            *edi_3 = temp0_19
        label_41703e:
            arg6 = *esp
            arg5 = *(esp + 4)
            arg4 = *(esp + 8)
            entry_ebx = *(esp + 0x10)
            arg2 = *(esp + 0x14)
            *(esp + 0x18)
            arg1 = *(esp + 0x1c)
            esp = &esp[0x10]
            
            if (not(c_2))
                goto label_4170ac
            
            goto label_417041
        
        arg6 = *(esp + 1)
        arg5 = *(esp + 5)
        arg4 = *(esp + 9)
        entry_ebx = *(esp + 0x11)
        arg2 = *(esp + 0x15)
        arg3 = *(esp + 0x19)
        arg1 = *(esp + 0x1d)
        esp += 0x21
        
        if (not(c_2))
            int16_t temp0_17
            temp0_17, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_17
            goto label_417025
        
        int16_t* temp54_1 = esp
        esp += 1
        o_3 = add_overflow(temp54_1, 1)
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (temp54_1 != 0xffffffff)
            if (o_3)
                goto label_417035
            
            esp += 1
            arg6 = *esp
            arg5 = *(esp + 4)
            arg4 = *(esp + 8)
            entry_ebx = *(esp + 0x10)
            arg2 = *(esp + 0x14)
            arg3 = *(esp + 0x18)
            arg1 = *(esp + 0x1c)
            esp = &esp[0x10]
            
            if (c_2)
                goto label_416fc6
            
            int16_t temp0_18
            temp0_18, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_18
        label_41702f:
            arg4 -= 1
            
            if (not(c_2))
            label_417033:
                *(esp - 4) = arg1
                esp -= 4
            label_417035:
                int32_t esi_13 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
                arg5 = __outsd(arg2.w, *(esi_13 - 1), esi_13 - 1, eflags)
                
                if (esi_13 == 1)
                    arg1 |= 0x654d6d70
                    
                    if (arg1 u< 0)
                        goto label_4170b5
                    
                    goto label_41704e
                
                if (add_overflow(esi_13, 0xffffffff))
                    *arg1 += arg1.b
                label_4170ac:
                    *arg1 += arg1.b
                    *esp
                    goto label_4170af
                
                goto label_41703e
            
            arg3 = &arg3[1]
        label_41709b:
            *entry_ebx += arg1.b
            arg2 |= *(arg2 + (arg1 << 1) + 0x72)
            
            if (arg2 == 0)
                goto label_4170a3
            
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg3[0x41] = arg3[0x41]
        label_417120:
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            char temp69_1 = *arg1
            *arg1 += arg1.b
            o_7 = add_overflow(temp69_1, arg1.b)
            char* eax_13
            bool c_7
            bool c_11
            bool z_12
            bool o_15
            
            if (not(o_7))
                arg7 = __andps_xmmxud_memxud(arg7, *(arg6 + 0x72))
                arg6 = *esp
                arg5 = *(esp + 4)
                *(esp + 8)
                entry_ebx = *(esp + 0x10)
                arg2 = *(esp + 0x14)
                arg3 = *(esp + 0x18)
                arg1 = *(esp + 0x1c)
                esp = &esp[0x10]
            label_417171:
                
                if (not(o_7))
                    uint8_t** esp_28 = *(entry_ebx + 0x73) * 0x656a624f
                    int16_t temp0_33
                    temp0_33, eflags = __arpl_memw_gpr16(*(arg1 * 5 + 0x71), arg5.w)
                    *(arg1 * 5 + 0x71) = temp0_33
                    uint8_t temp74_1 = *arg6
                    *arg6 += arg1.b
                    c_7 = temp74_1 + arg1.b u< temp74_1
                    o_15 = add_overflow(temp74_1, arg1.b)
                    __andps_xmmxud_memxud(arg7, *(arg6 + 0x72))
                    arg6 = *esp_28
                    arg5 = esp_28[1]
                    esp_28[2]
                    entry_ebx = esp_28[4]
                    arg2 = esp_28[5]
                    arg3 = esp_28[6]
                    eax_8 = esp_28[7]
                    esp = &esp_28[8]
                    goto label_417186
                
                *arg1 += arg1.b
                eax_8.b = arg1.b - 0x72
            label_4171e2:
                arg3 = &arg3[1]
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                char temp73_1 = *eax_8
                *eax_8 += entry_ebx:1.b
                
                if (temp73_1 + entry_ebx:1.b u< temp73_1)
                    arg3[eax_8 << 1] |= arg3.b
                    eax_8[0xe004187] += arg2:1.b
                    goto label_417239
                
                arg2[(arg5 << 1) + 0x41] += entry_ebx.b
            label_4171f3:
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                arg2[0x72] += arg3.b
                arg2[0x72] += arg2.b
                *(eax_8 * 2) += eax_8:1.b
                *eax_8 += eax_8.b
                eax_8.b |= 0x71
                arg3 = &arg3[3]
                eax_8:1.b += arg2:1.b
                eax_8.b ^= *eax_8
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (&eax_8[1]).b
                eax_8[2] += arg3.b
                eax_13 = &eax_8[2] ^ *(eax_8 + 2)
                eax_13.b ^= *eax_13
                char temp80_1 = *(fsbase + eax_13)
                *(fsbase + eax_13) ^= eax_13.b
                c_11 = false
                z_12 = temp80_1 == eax_13.b
                
                if ((temp80_1 ^ eax_13.b) s< 0)
                    goto label_417256
                
                arg6[(&eax_13[1] << 2) + 0x41] += arg3:1.b
                eax_13[1] += (&eax_13[1]).b
                eax_8.b = (&eax_13[1]).b | 0x41
                *eax_8 += arg3.b
                eax_8.b |= 0x41
                eax_8[0xe004187] += arg2:1.b
                goto label_417239
            
        label_41712b:
            arg3[(arg5 << 1) + 0x41] += arg3:1.b
            *arg1 += entry_ebx.b
            *arg1 += arg1.b
        label_417133:
            esp[arg4 * 4 + 0x20].b += arg3:1.b
        label_417137:
            arg1:1.b += arg2:1.b
            arg1.b ^= *arg1
            *entry_ebx += arg2:1.b
        label_41713f:
            *(entry_ebx + arg5) += (&arg1[1]).b
            arg1[2] += arg3.b
            eax_8 = &arg1[2] ^ *(arg1 + 2)
            eax_8.b ^= *eax_8
            char temp57_1 = *(fsbase + eax_8)
            *(fsbase + eax_8) ^= eax_8.b
            c_7 = false
            
            if ((temp57_1 ^ eax_8.b) s>= 0)
            label_417153:
                void* eax_9
                eax_9.b = (&eax_8[1]).b + arg2:1.b
                eax_9.b |= *arg3
                arg3[eax_9 << 1] += arg3.b
                *eax_9 += arg3.b
                eax_9.b |= 0x41
                *(entry_ebx + arg3) += entry_ebx.b
                arg3[1] += eax_9.b
                char* ecx_2
                ecx_2:1.b = (&arg3[1]):1.b + entry_ebx:1.b
                arg1, arg2, arg3 = (*(esp + (eax_9 << 2) + 0x41))()
            label_41716b:
                uint8_t temp58_1 = *arg6
                *arg6 += arg3.b
                *(esp - 4) = esp
                esp -= 4
                uint8_t* temp59_1 = arg6
                arg6 = &arg6[1]
                o_7 = add_overflow(temp59_1, 1)
                
                if (temp58_1 + arg3.b u< temp58_1)
                    arg6[0x72]
                    arg6[0x72] |= arg1.b
                    arg6 = *esp
                    arg5 = *(esp + 4)
                    *(esp + 8)
                    entry_ebx = *(esp + 0x10)
                    arg2 = *(esp + 0x14)
                    arg3 = *(esp + 0x18)
                    eax_8 = *(esp + 0x1c)
                    esp = *(entry_ebx + 0x73) * 0x408d0000
                    arg2[arg5 << 1] += arg3:1.b
                    goto label_4171e2
                
                goto label_417171
            
            *(esp - 4) = esp
            esp -= 4
            uint8_t* temp66_1 = arg6
            arg6 = &arg6[1]
            o_15 = add_overflow(temp66_1, 1)
        label_417186:
            
            if (not(o_15))
                int32_t esp_30 = *(entry_ebx + 0x73) * 0x656a624f
                int32_t eflags_1
                int16_t temp0_34
                temp0_34, eflags_1 = __arpl_memw_gpr16(*(eax_8 + (entry_ebx << 1) + 0x71), arg5.w)
                *(eax_8 + (entry_ebx << 1) + 0x71) = temp0_34
                eax_8.b += eax_8:1.b
                eax_8.b = __in_al_dx(arg2.w, eflags_1)
                eax_8[1] += (&eax_8[1]).b
                char temp76 = eax_8[1]
                eax_8[1] += arg3.b + 1
                bool c_9 = temp76 + arg3.b + 1 u< temp76
                
                if (c_9)
                    *(esp_30 - 4) = arg2
                    
                    if (c_9)
                        jump(0x417244)
                    
                    jump(0x417203)
                
                if (add_overflow(arg6, 1))
                    jump(0x417209)
                
                jump(0x4171a1)
            
            esp = *esp
            
            if (not(c_7))
                goto label_4171f3
            
            eax_8.b = 0x87
            arg3 = &arg3[1]
            *arg5 += arg3.b
        label_417239:
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *arg3 += eax_8.b
            *eax_8 += eax_8.b
            eax_8[0x20004171] += arg3:1.b
            *eax_8 += eax_8.b
            *arg3 += eax_8.b
            char temp78_1 = arg3:1.b
            arg3:1.b += entry_ebx:1.b
            c_11 = temp78_1 + entry_ebx:1.b u< temp78_1
            eax_13, arg2, arg3 = (*(arg6 + (eax_8 << 2) + 0x54050041))()
            z_12 = arg5 == 0xffffffff
            arg5 = __outsd(arg2.w, *(arg5 + 1), arg5 + 1, eflags)
        label_417256:
            uint16_t* esi_26 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (not(z_12))
                if (c_11)
                    *eax_13 += entry_ebx.b
                    *eax_13 += eax_13.b
                    undefined
                
                return sub_41725b(eax_13, arg2, arg3, arg6) __tailcall
            
            uint16_t* esi_27 = __outsd(arg2.w, *esi_26, esi_26, eflags)
            uint8_t* edi_12
            uint8_t temp0_36
            temp0_36, edi_12 = __insb(arg6, arg2.w, eflags)
            *edi_12 = temp0_36
            __outsd(arg2.w, *esi_27, esi_27, eflags)
            
            if (not(c_11))
                *eax_13 = adc.b(*eax_13, eax_13.b, c_11)
                breakpoint
            
            *eax_13 += eax_13.b
            *(eax_13 * 2) += eax_13.b
            *(esp - 4) = &data_401054
            
            if (add_overflow(eax_13, 0x63746950))
                jump(sub_4172a2+9)
            
            jump(sub_4172a2+0x7e)
        
        es = *esp
        esp = &esp[1]
    else
        arg1:1.b += arg2:1.b
        arg1.b ^= *arg1
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&arg1[1]).b
        arg1[2] += arg3.b
        arg1 = &arg1[2] ^ *(arg1 + 2)
        bool d = false
        arg1.b ^= *arg1
        char temp4_1 = *(fsbase + arg1) ^ arg1.b
        *(fsbase + arg1) = temp4_1
        
        if (temp4_1 s>= 0)
            arg1.b = (&arg1[1]).b * 2
            *arg1
            *arg1 ^= arg1.b
            char temp7_1 = *(arg4 + 0x49)
            *(arg4 + 0x49) = sbb.b(temp7_1, arg1.b, false)
            bool c_1 = unimplemented  {sbb byte [ebp+0x49], al}
            z = sbb.b(temp7_1, arg1.b, false) == 0
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (z || c_1)
                goto label_416f08
            
            uint8_t temp0_1
            temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
            *arg6 = temp0_1
            *(arg6 + (arg1 << 1) + 0x72)
            esp = *(arg6 + (arg1 << 1) + 0x72) * 0x69687061
            c_2 = unimplemented  {imul esp, dword [edi+eax*2+0x72], 0x69687061}
            o_1 = unimplemented  {imul esp, dword [edi+eax*2+0x72], 0x69687061}
            int16_t temp0_2
            temp0_2, eflags = __arpl_memw_gpr16(*(arg6 + 0x70), arg3.w)
            *(arg6 + 0x70) = temp0_2
            
            if (c_2)
                if (c_2)
                    goto label_416f8b
                
                goto label_416f18
            
            if (z)
                goto label_416f20
            
            uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
            void* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
            *(esi_1 + 0x41) = *(esi_1 + 0x41)
            arg3 = &arg3[*arg2]
            *(esp - 4) = esp
            esp -= 4
            z = esi_1 == 0xffffffff
            arg5 = __outsd(arg2.w, *(esi_1 + 1), esi_1 + 1, eflags)
            goto label_416ec5
        
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(arg1 + 1), arg4.w)
        *(arg1 + 1) = temp0_3
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b += *arg1
        char temp5_1 = *arg1
        *arg1 += arg1.b
        c_2 = temp5_1 + arg1.b u< temp5_1
        z_1 = temp5_1 == neg.b(arg1.b)
        o_2 = add_overflow(temp5_1, arg1.b)
        esp = 0x900416e
        
        if (o_2)
            goto label_416f21
        
    label_416edd:
        arg6.w = *esp
        arg5.w = esp[1]
        arg4.w = esp[2]
        void* esp_1
        esp_1.w = (&esp[3]).w + 2
        entry_ebx.w = *esp_1
        arg2.w = *(esp_1 + 2)
        arg3.w = *(esp_1 + 4)
        arg1.w = *(esp_1 + 6)
        esp = esp_1 + 8
        bool p_1
        bool z_3
        bool z_6
        
        if (z_1)
            if (not(z_1))
                if (o_2)
                    arg1.b &= 0x6f
                label_416f3f:
                    arg3 = &arg3[1]
                    char temp26_1 = *arg5
                    *arg5 += arg1.b
                    
                    if (temp26_1 + arg1.b u>= temp26_1)
                    label_416f87:
                        *entry_ebx += arg1.b
                        int32_t temp29_1 = *(arg1 + (arg2 << 1) + 0x65)
                        *(arg1 + (arg2 << 1) + 0x65) |= arg2
                        c_2 = false
                        z = (temp29_1 | arg2) == 0
                        o_1 = false
                        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                        goto label_416f8e
                    
                    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                    uint8_t temp0_6
                    temp0_6, arg6 = __insb(arg6, arg2.w, eflags)
                    *arg6 = temp0_6
                    *(fsbase + arg5 + 0x73) |= arg1:1.b
                    char* temp30_1 = arg3
                    arg3 -= 1
                    z_1 = temp30_1 == 1
                    
                    if (z_1)
                        goto label_416faf
                    
                    goto label_416f4e
                
                arg6 = *esp
                arg5 = *(esp + 4)
                arg4 = *(esp + 8)
                entry_ebx = *(esp + 0x10)
                arg2 = *(esp + 0x14)
                arg3 = *(esp + 0x18)
                arg1 = *(esp + 0x1c)
                esp = &esp[0x10]
                
                if (c_2)
                    if (not(c_2))
                        goto label_416faa
                    
                    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                    goto label_416f56
                
                arg6 = *esp
                arg5 = *(esp + 4)
                arg4 = *(esp + 8)
                entry_ebx = *(esp + 0x10)
                arg2 = *(esp + 0x14)
                arg3 = *(esp + 0x18)
                arg1 = *(esp + 0x1c)
                esp = &esp[0x10]
                __bound_gprv_mema32(arg4, *(arg4 + 7))
                goto label_416eef
            
            es = *esp
            esp = &esp[1]
        label_416eef:
            
            if (o_2)
                goto label_416f38
            
            arg6 = *(arg1 + 0x65) * 0xfcc08b64
            uint16_t* esi_3 = __outsb(arg2.w, *arg5, arg5, eflags)
            arg3 = &arg3[1]
            *arg2 += arg3.b
            int32_t temp25_1 = *(esi_3 + (arg1 << 1) + 0x6f)
            *(esi_3 + (arg1 << 1) + 0x6f) |= arg2
            c_2 = false
            arg5 = __outsb(arg2.w, *esi_3, esi_3, eflags)
            
            if ((temp25_1 | arg2) == 0)
            label_416faa:
                
                if (not(c_2))
                    goto label_416ff0
                
                goto label_416fac
            
            int32_t edi = *esp
            arg5 = *(esp + 4)
            arg4 = *(esp + 8)
            entry_ebx = *(esp + 0x10)
            arg2 = *(esp + 0x14)
            arg3 = *(esp + 0x18)
            arg1 = *(esp + 0x1c)
            esp = &esp[0x10]
            int16_t temp0_4
            temp0_4, arg6 = __insd(edi, arg2.w, eflags)
            *arg6 = temp0_4
        label_416f08:
            arg1.b |= 0x6f
            arg3 = &arg3[1]
            *arg3 += arg1.b
            arg1.b |= 0x54
            z_1 = arg5 == 0xffffffff
            uint16_t* esi_5 = __outsd(arg2.w, *(arg5 + 1), arg5 + 1, eflags)
            arg5 = __outsb(arg2.w, *esi_5, esi_5, eflags)
            
            if (not(z_1))
                *(esp - 4) = 0x65737261
                esp -= 4
                
                if (z_1)
                    goto label_416f1c
                
                goto label_416f1b
            
        label_416f5a:
            *(arg5 + 0x65)
            arg4 = *(arg5 + 0x65) * 0x5373660b
            c_2 = unimplemented  {imul ebp, dword [esi+0x65], 0x5373660b}
            o_5 = unimplemented  {imul ebp, dword [esi+0x65], 0x5373660b}
            bool z_11
            
            if (z_1)
            label_416fd5:
                
                if (not(o_5))
                    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                    goto label_416fd9
                
            label_41704a:
                arg4 -= 1
                
                if (c_2)
                label_4170b5:
                    uint8_t temp36_1 = *arg6
                    *arg6 += arg1.b
                    p_1 = unimplemented  {add byte [edi], al}
                    z_6 = temp36_1 == neg.b(arg1.b)
                    goto label_4170b7
                
            label_41704e:
                bool cond:9_1 = arg5 == 1
                arg5 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
                
                if (not(cond:9_1))
                    __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
                label_417055:
                    c_2 = false
                    int16_t* edi_4
                    int16_t temp0_20
                    temp0_20, edi_4 = __insd(arg6, arg2.w, eflags)
                    *edi_4 = temp0_20
                    p_1 = unimplemented  {dec ebp}
                    z_6 = arg4 == 1
                    arg6 = *esp
                    arg5 = *(esp + 4)
                    arg4 = *(esp + 8)
                    entry_ebx = *(esp + 0x10)
                    arg2 = *(esp + 0x14)
                    arg3 = *(esp + 0x18)
                    arg1 = *(esp + 0x1c)
                    esp = &esp[0x10]
                    goto label_4170c7
                
            label_4170a3:
                *(esp - 4) = 0x6c797453
                
                while (true)
                    *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
                    *arg1 += arg1.b
                    *arg6 += arg1.b
                label_4170af:
                    *arg1 += arg1.b
                    char temp55_1 = arg1[0x7004170]
                    arg1[0x7004170] += entry_ebx.b
                    p_1 = unimplemented  {add byte [eax+0x7004170], bl}
                    z_6 = temp55_1 == neg.b(entry_ebx.b)
                label_4170b7:
                    __bound_gprv_mema32(arg5, *(entry_ebx + 0x53))
                    __outsd(arg2.w, *arg5, arg5, eflags)
                    uint8_t* edi_6
                    uint8_t temp0_24
                    temp0_24, edi_6 = __insb(arg6, arg2.w, eflags)
                    *edi_6 = temp0_24
                    *(edi_6 + arg1 + 0x62)
                    uint8_t** esp_19 = *(edi_6 + arg1 + 0x62) * 0x656c4373
                    c_2 = unimplemented  {imul esp, dword [edi+eax+0x62], 0x656c4373}
                    arg6 = *esp_19
                    arg5 = esp_19[1]
                    arg4 = esp_19[2]
                    entry_ebx = esp_19[4]
                    arg2 = esp_19[5]
                    arg3 = esp_19[6]
                    arg1 = esp_19[7]
                    esp = &esp_19[8]
                label_4170c5:
                    
                    if (not(c_2))
                    label_4170c7:
                        __bound_gprv_mema32(arg5, *(entry_ebx + 0x48))
                        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                        
                        if (c_2)
                            arg1 = &arg1[1]
                            goto label_417137
                        
                        if (p_1)
                            goto label_41713f
                        
                        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
                    label_4170d0:
                        
                        if (z_6)
                            goto label_417133
                        
                        uint8_t temp0_26
                        temp0_26, arg6 = __insb(arg6, arg2.w, eflags)
                        *arg6 = temp0_26
                    
                    arg1:1.b |= arg2[0x73]
                    *(esp - 4) = arg5
                    esp -= 4
                    
                    if (arg1:1.b u< 0)
                        eax_8 = &arg1[1]
                        eax_8[0x30] += entry_ebx:1.b
                        goto label_417153
                    
                label_4170e1:
                    arg5 += 1
                label_4170ed:
                    arg2 = &arg2[1]
                label_4170ef:
                    *(arg3 + 0x67)
                    esp = *(arg3 + 0x67) * 0x6c616e6f
                    c_2 = unimplemented  {imul esp, dword [ecx+0x67], 0x6c616e6f}
                    o_7 = unimplemented  {imul esp, dword [ecx+0x67], 0x6c616e6f}
                label_4170f6:
                    *esp
                    esp = &esp[1]
                    __bound_gprv_mema32(arg5, *(entry_ebx + 0x43))
                    
                    if (c_2)
                        goto label_41716b
                    
                label_4170fc:
                    
                    if (not(c_2))
                        break
                    
                    *(arg3 + 0x67)
                    esp = *(arg3 + 0x67) * 0x736f7243
                    bool c_6 = unimplemented  {imul esp, dword [ecx+0x67], 0x736f7243}
                    
                    if (not(c_6))
                    label_417096:
                        arg1 = &arg1[1]
                        char temp64_1 = arg1[(arg5 << 1) + 0xb030041]
                        arg1[(arg5 << 1) + 0xb030041] += entry_ebx.b
                        c_5 = temp64_1 + entry_ebx.b u< temp64_1
                    label_41709e:
                        *(esp - 4) = esp
                        esp -= 4
                        char* temp70_1 = arg2
                        arg2 = &arg2[1]
                        z_11 = temp70_1 == 0xffffffff
                        
                        if (not(c_5))
                            if (not(c_5))
                                *esp
                                
                                if (not(add_overflow(temp70_1, 1)))
                                    jump(0x417150)
                                
                                jump(0x41710f)
                            
                            *(esp - 4) = entry_ebx
                            esp -= 4
                        label_4170a5:
                            
                            if (z_11)
                                goto label_417120
                            
                            uint8_t temp0_23
                            temp0_23, arg6 = __insb(arg6, arg2.w, eflags)
                            *arg6 = temp0_23
                            continue
                    else
                        arg1[0x71] = rrc.b(arg1[0x71], 0x41, c_6)
                        *arg1 += arg1.b
                        *arg1 += arg1.b
                        *arg1 += arg1.b
                        *arg1 += arg1.b
                    
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    arg1[0x4171] += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    arg3[(arg5 << 1) + 0x41] += arg1:1.b
                    goto label_41712b
                
                goto label_417171
            
            arg4 = *(entry_ebx + 0x65) * 0x8d74754f
            arg1 = &arg1[1]
            arg1[0x6f] += arg2:1.b
            arg3 = &arg3[1]
            *arg5 += arg1.b
            char* temp23_1 = arg2
            arg2 |= *(arg5 + (arg1 << 1) + 0x6f)
            c_2 = false
            z_3 = (temp23_1 | *(arg5 + (arg1 << 1) + 0x6f)) == 0
            o_3 = false
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (z_3)
                goto label_416fcb
            
            if (not(z_3))
                uint8_t temp0_8
                temp0_8, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_8
                arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                arg3 = &arg3[1]
                entry_ebx[0x416f88c0] += arg3.b
                goto label_416f87
            
            *arg1 += arg1.b
            *arg1 += arg1.b
        label_416ff7:
            int0_t ldtr
            *arg1 = __sldt_memw(ldtr)
        label_416ffa:
            arg1:1.b *= 2
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            arg3 = &arg3[1]
            uint8_t temp38_1 = *arg6
            *arg6 += arg1.b
            c_2 = temp38_1 + arg1.b u< temp38_1
            p_1 = unimplemented  {add byte [edi], al}
            z_6 = temp38_1 == neg.b(arg1.b)
            bool o_6 = add_overflow(temp38_1, arg1.b)
            
            if (not(o_6))
                o_1 = add_overflow(arg2, 1)
                uint8_t* edi_2
                uint8_t temp0_14
                temp0_14, edi_2 = __insb(arg6, arg2.w + 1, eflags)
                *edi_2 = temp0_14
                arg6 = *esp
                arg5 = *(esp + 4)
                arg4 = *(esp + 8)
                entry_ebx = *(esp + 0x10)
                arg2 = *(esp + 0x14)
                arg3 = *(esp + 0x18)
                arg1 = *(esp + 0x1c)
                esp = &esp[0x10]
                int16_t temp0_15
                temp0_15, eflags = __arpl_memw_gpr16(*(entry_ebx + 7), arg4.w)
                *(entry_ebx + 7) = temp0_15
            label_417008:
                
                if (o_1)
                    int16_t* edi_5
                    int16_t temp0_22
                    temp0_22, edi_5 = __insd(arg6, arg2.w, eflags)
                    *edi_5 = temp0_22
                    goto label_417079
                
                goto label_41700a
            
            while (true)
                if (z_6)
                    *esp
                    __bound_gprv_mema32(arg5, *(entry_ebx + 0x43))
                    uint8_t* edi_7
                    uint8_t temp0_25
                    temp0_25, edi_7 = __insb(arg6, arg2.w, eflags)
                    *edi_7 = temp0_25
                    arg6 = *(esp + 2)
                    arg5 = *(esp + 6)
                    arg4 = *(esp + 0xa)
                    entry_ebx = *(esp + 0x12)
                    arg2 = *(esp + 0x16)
                    arg3 = *(esp + 0x1a)
                    arg1 = *(esp + 0x1e)
                    esp = &esp[0x11]
                    goto label_4170c5
                
                if (c_2)
                    int16_t temp0_27
                    temp0_27, eflags = __arpl_memw_gpr16(*(arg3 + 0x6c), esp.w)
                    *(arg3 + 0x6c) = temp0_27
                    goto label_4170e1
                
                *(esp - 4) = zx.d(es)
                esp -= 4
                
                if (o_6)
                    arg5.w = __outsd(arg2.w, *arg5, arg5.w, eflags)
                else
                label_417079:
                    arg6 = *esp
                    arg5 = *(esp + 4)
                    arg4 = *(esp + 8)
                    entry_ebx = *(esp + 0x10)
                    arg2 = *(esp + 0x14)
                    arg3 = *(esp + 0x18)
                    arg1 = *(esp + 0x1c)
                    esp = &esp[0x10]
                    
                    if (c_2)
                        *(arg1 + 0x6d)
                        *(arg1 + 0x6d) |= arg5
                        c_2 = false
                    label_41707f:
                        z_6 = arg5 == 1
                        o_7 = add_overflow(arg5, 0xffffffff)
                        arg5 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
                        
                        if (z_6)
                            goto label_4170d0
                        
                        arg6 = *esp
                        arg5 = *(esp + 4)
                        arg4 = *(esp + 8)
                        entry_ebx = *(esp + 0x10)
                        arg2 = *(esp + 0x14)
                        arg3 = *(esp + 0x18)
                        void* eax_4 = *(esp + 0x1c)
                        esp = &esp[0x10]
                        
                        if (not(c_2))
                            arg5.w = __outsd(arg2.w, *arg5, arg5.w, eflags)
                            __outsb(arg2.w, *arg5, arg5, eflags)
                            int32_t edi_10 = *esp
                            arg5 = *(esp + 4)
                            arg4 = *(esp + 8)
                            entry_ebx = *(esp + 0x10)
                            arg2 = *(esp + 0x14)
                            arg3 = *(esp + 0x18)
                            arg1 = *(esp + 0x1c)
                            esp = &esp[0x10]
                            uint8_t temp0_32
                            temp0_32, arg6 = __insb(edi_10, arg2.w, eflags)
                            *arg6 = temp0_32
                            goto label_4170f6
                        
                        arg1 = eax_4 + 0x6f586d70
                        c_2 = eax_4 u>= 0x90a79290
                        p_2 = unimplemented  {add eax, 0x6f586d70}
                        a_1 = unimplemented  {add eax, 0x6f586d70}
                        z_7 = eax_4 == 0x90a79290
                        s_2 = eax_4 + 0x6f586d70 s< 0
                        o_7 = add_overflow(eax_4, 0x6f586d70)
                    label_41708b:
                        
                        if (c_2)
                            *(esp - 4) = (o_7 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s_2 ? 1 : 0) << 7
                                | (z_7 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4 | (p_2 ? 1 : 0) << 2
                                | (c_2 ? 1 : 0)
                            esp -= 4
                            
                            if (not(o_7))
                                break
                            
                            arg5 = *(esp + 4)
                            arg4 = *(esp + 8)
                            entry_ebx = *(esp + 0x10)
                            arg2 = *(esp + 0x14)
                            arg3 = *(esp + 0x18)
                            arg1 = *(esp + 0x1c)
                            uint8_t temp0_28
                            temp0_28, arg6 = __insb(*esp, arg2.w, eflags)
                            *arg6 = temp0_28
                            goto label_4170e1
                        
                        if (o_7)
                            goto label_4170fc
                        
                    label_41708f:
                        bool z_10 = arg5 == 1
                        bool o_13 = add_overflow(arg5, 0xffffffff)
                        arg5 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
                        
                        if (z_10)
                            __bound_gprv_mema32(arg5, *(entry_ebx + 0x42))
                            goto label_4170ef
                        
                        while (true)
                            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
                            
                            if (not(c_2))
                                goto label_417096
                            
                            if (not(o_13))
                                break
                            
                            arg1 = *esp
                            esp = &esp[2]
                        
                    label_417025:
                        z_11 = arg5 == 1
                        bool o_9 = add_overflow(arg5, 0xffffffff)
                        uint16_t* esi_12 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
                        
                        if (z_11)
                            int16_t temp0_21
                            temp0_21, arg6 = __insd(arg6, arg2.w, eflags)
                            *arg6 = temp0_21
                            p_1 = unimplemented  {dec esi}
                            z_6 = esi_12 == 1
                            o_6 = add_overflow(esi_12, 0xffffffff)
                            arg5 = __outsd(arg2.w, *(esi_12 - 1), esi_12 - 1, eflags)
                            continue
                        
                        arg5 = __outsd(arg2.w, *esi_12, esi_12, eflags)
                        
                        if (o_9)
                            goto label_4170a5
                        
                        arg1 |= 0x654d6d70
                        c_2 = false
                        goto label_417033
                
                __outsb(arg2.w, *arg5, arg5, eflags)
                arg5 = *(esp + 4)
                arg4 = *(esp + 8)
                entry_ebx = *(esp + 0x10)
                arg2 = *(esp + 0x14)
                arg3 = *(esp + 0x18)
                arg1 = *(esp + 0x1c)
                uint8_t temp0_30
                temp0_30, arg6 = __insb(*esp, arg2.w, eflags)
                *arg6 = temp0_30
                goto label_4170ed
            
            goto label_41709b
        
    label_416f4e:
        uint8_t temp0_7
        temp0_7, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_7
        *(entry_ebx + 0xb)
        esp = *(entry_ebx + 0xb) * 0x6e557366
        c_2 = unimplemented  {imul esp, dword [ebx+0xb], 0x6e557366}
    label_416f56:
        
        if (not(c_2))
            goto label_416f5a
        
    label_416fc6:
        int16_t* temp20_1 = esp
        esp += 1
        z_3 = temp20_1 == 0xffffffff
        o_3 = add_overflow(temp20_1, 1)
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (z_3)
            char* temp22_1 = arg1
            arg1 = &arg1[0x6f4e6d70]
            c_2 = temp22_1 u>= 0x90b19290
            p_2 = unimplemented  {add eax, 0x6f4e6d70}
            a_1 = unimplemented  {add eax, 0x6f4e6d70}
            z_7 = temp22_1 == 0x90b19290
            s_2 = &temp22_1[0x6f4e6d70] s< 0
            o_7 = add_overflow(temp22_1, 0x6f4e6d70)
        label_417014:
            
            if (not(o_7))
                if (o_7)
                    arg1 = *0x6f586d70 * 0x72
                    arg1[0x6d]
                    arg1[0x6d] |= arg2:1.b
                    c_2 = false
                    goto label_41708f
                
                goto label_417018
            
            *(esp - 4) = zx.d(es)
            esp -= 4
        label_41701c:
            
            if (o_7)
                goto label_41708b
            
            char* temp48_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (add_overflow(temp48_1, 1))
                goto label_41709b
            
            goto label_417022
        
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
    label_416fcb:
        
        if (z_3)
            arg1 |= 0x6e497370
            c_2 = false
        label_416fd9:
            
            if (not(c_2))
                goto label_417044
            
            arg5 += 1
            
            if (not(c_2))
                int16_t temp0_12
                temp0_12, arg6 = __insd(arg6, arg2.w, eflags)
                *arg6 = temp0_12
            label_416fe4:
                arg1, arg2, arg3 = 0x341b158()
                arg1[(arg2 << 1) + 0x65] |= arg2.b
                uint16_t* esi_8 = __outsb(arg2.w, *arg5, arg5, eflags)
                arg4 -= 1
                arg5 = __outsd(arg2.w, *esi_8, esi_8, eflags)
            label_416ff0:
                *(gsbase + arg1) = &arg1[*(gsbase + arg1)]
                *arg1 += arg1.b
                *arg6 += arg3.b
                *arg1 += arg1.b
                goto label_416ffa
            
        label_417041:
            *(esp - 4) = arg1
            esp -= 4
        label_417042:
            arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
        label_417044:
            p_1 = unimplemented  {dec esi}
            z_6 = arg5 == 1
            bool o_11 = add_overflow(arg5, 0xffffffff)
            arg5 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
            
            if (z_6)
                goto label_417055
            
            if (o_11)
                goto label_4170b7
            
            goto label_41704a
    
    if (o_3)
        goto label_417042
    
    o_5 = add_overflow(entry_ebx, 1)
    uint8_t* edi_1
    uint8_t temp0_11
    temp0_11, edi_1 = __insb(arg6, arg2.w, eflags)
    *edi_1 = temp0_11
    arg6 = *esp
    arg5 = *(esp + 4)
    arg4 = *(esp + 8)
    entry_ebx = *(esp + 0x10)
    arg2 = *(esp + 0x14)
    *(esp + 0x18)
    arg1 = *(esp + 0x1c)
    esp = &esp[0x10]
    
    if (c_2)
        goto label_416fe4
    
    goto label_416fd5
}
