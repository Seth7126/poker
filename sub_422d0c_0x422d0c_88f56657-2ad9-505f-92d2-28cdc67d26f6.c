// ============================================================
// 函数名称: sub_422d0c
// 虚拟地址: 0x422d0c
// WARP GUID: 88f56657-2ad9-505f-92d2-28cdc67d26f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_422d0c(char* arg1, int16_t arg2, int16_t arg3, char* arg4 @ esi, long double arg5 @ st0, uint16_t* arg6, void* arg7, void* arg8, void* arg9, char arg10, char arg11)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b ^= 0x2e
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += (arg2 + 1).b
    char entry_ebx
    *arg4 += entry_ebx
    arg1:1.b += (arg2 + 3):1.b
    *arg1 = &arg1[*arg1]
    char temp1 = arg1.b
    char temp2 = arg1:1.b
    arg1.b += arg1:1.b
    
    if (temp1 s> neg.b(temp2))
        arg10 += (arg2 + 3).b
        void* eax
        eax:1.b = (&arg1[1]):1.b + arg3:1.b
        *eax += arg3.b + 1
        *eax
        trap(0xd)
    
    void* ebp_1 = arg7
    uint32_t arg_1c
    uint32_t eax_3 = arg_1c
    void* arg_18
    void* ecx_2 = arg_18 + 1
    *(ecx_2 + 0x64b40041) += ecx_2.b
    *(eax_3 + 0x4f) += (ecx_2 + 1):1.b
    *(eax_3 - 0x1fffbce2) += (ecx_2 + 1):1.b
    void* eax_4
    eax_4.b = (eax_3 & *arg8).b | 0x23
    *(eax_4 + 0x19) += (arg8 + 1):1.b
    *(eax_4 - 0xfffbce7) += (arg8 + 2).b
    int16_t ss
    arg_1c = zx.d(ss)
    *(arg8 + 3 + (ebp_1 << 2)) += eax_4.b
    *eax_4 += (ecx_2 + 1).b
    *__return_addr = eax_4
    void* edi_1 = __return_addr + 4
    arg6[(arg9 + 3) * 4 + 0x21].b += (ecx_2 + 1).b
    *(eax_4 - 0x2a) += (arg8 + 3):1.b
    char var_492bffa2[0x492bffa2]
    var_492bffa2[ebp_1 << 2] += eax_4.b
    *(arg6 * 5 + 0x42) += eax_4.b
    *(eax_4 - 0x47) += (ecx_2 + 1).b
    *(eax_4 + (edi_1 << 2)) += (ecx_2 + 1).b
    *(eax_4 + ((arg9 + 7) << 1)) += (arg9 + 7).b
    eax_4.b += (arg8 + 3):1.b
    int32_t eflags
    eax_4.b = __salc(eflags)
    *(edi_1 + arg9 + 9 + 0x43) += eax_4.b
    eax_4.b *= 2
    int16_t ss_1 = arg_1c.w
    void* esp = &arg_1c:2
    char* ebx_4 = arg8 + 4
    *(ebx_4 + arg9 + 9 + 0x43) += eax_4.b
    *(edi_1 + arg9 + 9 - 0x2387ffbd) += eax_4:1.b
    double* edx_13 = arg9 + 0xa
    char temp3 = *eax_4
    *eax_4 += eax_4:1.b
    void* ecx_4 = ecx_2
    
    if (ecx_4 == 0)
        *(eax_4 - 0x6bffbd13) += eax_4:1.b
        jump(0xec9a2e2c)
    
    if (temp3 != neg.b(eax_4:1.b))
        goto label_422e97
    
    if (temp3 == neg.b(eax_4:1.b))
        *ebx_4 |= edx_13:1.b
        eax_4 += 1
    label_422e97:
        *(eax_4 - 0xc) += ecx_4.b
        edx_13 += 1
        *(eax_4 + arg6 + 0x40) += eax_4:1.b
        *(eax_4 + 0x30) += ebx_4:1.b
    else
        uint16_t* esi_1 = __outsb(edx_13.w, *arg6, arg6, eflags)
        char* temp4_1 = ebx_4
        ebx_4 = &ebx_4[1]
        uint16_t* esi_2 = __outsd(edx_13.w, *esi_1, esi_1, eflags)
        uint16_t* esi_3 = __outsb(edx_13.w, *esi_2, esi_2, eflags)
        
        if (temp4_1 != 0xffffffff)
            uint16_t* esi_4 = __outsd(edx_13.w, *esi_3, esi_3, eflags)
            uint8_t temp0_1
            temp0_1, edi_1 = __insb(edi_1, edx_13.w, eflags)
            *edi_1 = temp0_1
            void* eax_5
            eax_5.b = eax_4.b ^ 0x2e
            *edi_1 += eax_5.b
            int16_t cs
            arg_18 = zx.d(cs)
            
            if (edx_13 == 0xfffffffe)
                if (edx_13 != 0xfffffffe)
                    uint16_t* esi_5 = __outsb((edx_13 + 2).w, *esi_4, esi_4, eflags)
                    uint16_t* esi_6 = __outsd((edx_13 + 2).w, *esi_5, esi_5, eflags)
                    __outsb((edx_13 + 2).w, *esi_6, esi_6, eflags)
                    
                    if (ebx_4 == 0xffffffff)
                        jump(0x422eb4)
                    
                    jump("olT-B")
                
                *eax_5 += (edx_13 + 2).b
                undefined
            
            *(ebx_4 + ecx_4) += ebx_4.b
            *(eax_5 + 0x4c0042d4) += eax_5.b
            char* eax_7 = *esi_4
            esi_3 = &esi_4[2]
            edx_13 += 4
            *eax_7 += eax_7.b
            *edx_13
            eax_4 = &arg_18:2
            esp = &arg_18:2
            void* ecx_5
            ecx_5:1.b = 0x42
            arg11 += 0x42
            ecx_4 = ecx_5 + 1
            *(ecx_4 + 0x64b40041) += ecx_4.b
            goto label_422ed3
        
        char temp5_1 = *eax_4 ^ eax_4.b
        *eax_4 = temp5_1
        
        if (temp5_1 s< 0)
        label_422ed3:
            *(eax_4 + (edx_13 << 1) + 0x1ea80042) += (ecx_4 + 1).b
            eax_4.b += eax_4:1.b
            void* eax_8
            eax_8.b = (eax_4 & *(ebx_4 + 1)).b | 0x23
            *(eax_8 + 0x19) += (&ebx_4[2]):1.b
            *(eax_8 - 0xfffbce7) += (&ebx_4[3]).b
            *(esp - 4) = zx.d(ss_1)
            ebx_4[4 + (ebp_1 << 2)] += eax_8.b
            *eax_8 += (ecx_4 + 1).b
            *edi_1 = eax_8
            void* edi_2 = edi_1 + 4
            esi_3[(edx_13 + 2) * 4 + 0x21].b += (ecx_4 + 1).b
            *(eax_8 - 0x2a) += (&ebx_4[4]):1.b
            *(esp - 4 + (ebp_1 << 2) - 0x492bffbe) += eax_8.b
            *(esi_3 * 5 + 0x42) += eax_8.b
            *(eax_8 - 0x47) += (ecx_4 + 1).b
            *(eax_8 + (edi_2 << 2)) += (ecx_4 + 1).b
            *(eax_8 + ((edx_13 + 6) << 1)) += (edx_13 + 6).b
            eax_8.b += (&ebx_4[4]):1.b
            eax_8.b = __salc(eflags)
            *(edi_2 + &edx_13[1] + 0x43) += eax_8.b
            eax_8.b *= 2
            *(esp - 4)
            void* esp_2 = esp - 2
            void* ebx_10 = &ebx_4[5]
            *(ebx_10 + &edx_13[1] + 0x43) += eax_8.b
            *(edi_2 + &edx_13[1] - 0x2387ffbd) += eax_8:1.b
            void* edx_26 = edx_13 + 9
            *eax_8 += eax_8:1.b
            
            if (ecx_4 == 0)
                *(eax_8 - 0x5fffbd13) += eax_8:1.b
                *(esp_2 - 4) = ecx_4
                *(eax_8 - 0x14) += ebx_10.b
                eax_8:1.b += ebx_10.b
                *(esp_2 - 8) = ecx_4
                eax_8:1.b += (edx_26 + 3):1.b
                eax_8.b = __in_al_dx((edx_26 + 3).w, eflags)
                *(esp_2 - 8 + (ebp_1 << 3) + 0x18e40042) += ebx_10.b
                char temp8_1 = *(eax_8 - 0x5fffbd0a)
                *(eax_8 - 0x5fffbd0a) += ecx_4:1.b
                eax_8 = adc.d(eax_8, 0x18500043, temp8_1 + ecx_4:1.b u< temp8_1)
                ebx_10 += 2
                *(eax_8 + ((edx_26 + 4) << 1)) += ecx_4.b
                *eax_8 += (edx_26 + 5).b
                *(esp_2 - 0xc) = eax_8
                *eax_8 += ebx_10.b
                *(esp_2 - 0x10) = ecx_4
                esp_2 -= 0x10
                edx_26 += 7
                *edi_2 += eax_8.b
                *0x7b006b0 += eax_8.b
                eax_8.b = 0x11
                ebp_1 = 0xffec0014
                int32_t eflags_1
                int32_t eip_1
                eip_1, eflags_1 = __into(eflags)
            
            *eax_8 -= 1
            *(esp_2 - 4) = edx_26
            *(eax_8 + 0x52) += ebx_10:1.b
            eax_8:1.b += ebx_10:1.b
            *(esp_2 - 8) = edx_26 + 2
            eax_8:1.b += (edx_26 + 3):1.b
            *(esp_2 - 0xc) = ecx_4
            *(eax_8 + 0x53) += (edx_26 + 4).b
            eax_8.b += (edx_26 + 5):1.b
            *(esp_2 - 0x10) = eax_8
            *(ecx_4 + ((edx_26 + 6) << 1)) += (edx_26 + 6).b
            *edi_2 += eax_8.b
            *(esp_2 - 0x14) = esp_2 - 0x10
            
            if (edx_26 == 0xfffffff8)
                jump(0x422f99)
            
            *0x80000042 += 0x42
            void* eax_9 = 0x42 | *0x42
            *(edx_26 + 0x71) |= eax_9.b
            *(ebp_1 + 0x6f)
            *(eax_9 + 1) += eax_9 + 1
            undefined
    
    *(eax_4 - 0x25) += ebx_4.b
    *(eax_4 + 0x10004324) += (edx_13.w + 1):1.b
    undefined
}
