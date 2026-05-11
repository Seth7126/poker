// ============================================================
// 函数名称: sub_467598
// 虚拟地址: 0x467598
// WARP GUID: a9ebcbb2-dc3d-5c69-805c-bfbf920d3634
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_467583
// ============================================================

int32_t __convention("regparm")sub_467598(char* arg1, int32_t* arg2, char* arg3, void* arg4 @ ebp, char* arg5 @ esi, void** arg6 @ edi)
{
    // 第一条实际指令: arg1.b = arg1.b
    arg1.b = arg1.b
    *arg1 += arg1.b
    *arg1 = &arg1[*arg1]
    char temp1 = *arg1
    *arg1 += arg1.b
    int32_t entry_ebx
    char*** esp_1
    
    if (add_overflow(temp1, arg1.b))
        *arg5 += arg3.b
        arg2.b |= *(arg2 * 3 + 0x65)
        
        if (arg2.b u>= 0)
            *arg1 += arg1.b
            *arg1 += arg1.b
            char temp6_1 = *arg1
            *arg1 += arg1.b
            bool c_7 = temp6_1 + arg1.b u< temp6_1
            bool z_4 = temp6_1 == neg.b(arg1.b)
            esp_1 = arg1
            arg1 = &__return_addr
            
            if (not(z_4) && not(c_7))
                goto label_4676c0
            
            __return_addr.b += entry_ebx.b
            *arg5 = *arg5
        label_46767d:
            *arg1 += arg1.b
            char temp9 = *arg5
            *arg5 += arg1.b
            
            if (temp9 + arg1.b s< 0)
                jump(0x4676c9)
            
            jump(0x467683)
        
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int32_t eflags_1
        char temp0_3
        temp0_3, eflags_1 = __arpl_memw_gpr16(*(arg1 + arg3), arg5.w)
        *(arg1 + arg3) = temp0_3
        *arg1 += arg1.b
        *arg1 = &arg1[*arg1]
        *arg1 += arg1.b
        arg5[0x46] += arg2:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp7_1 = *arg1
        *arg1 += entry_ebx:1.b
        
        if (temp7_1 == neg.b(entry_ebx:1.b) || temp7_1 + entry_ebx:1.b u< temp7_1)
            goto label_46767d
        
        *0x54372e02 += arg3.b
        *arg1 += arg1.b
        char temp10 = *0xbc000000
        *0xbc000000 += arg2.b
        bool c_4 = temp10 + arg2.b u< temp10
        char temp11 = *arg1
        *arg1 = adc.b(temp11, arg1.b, c_4)
        
        if (&__return_addr == 1 || adc.b(temp11, arg1.b, c_4) u< temp11
                || (c_4 && adc.b(temp11, arg1.b, c_4) == temp11))
            jump(&data_467690:1)
        
        jump(0x46764b)
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 + (&arg5[1] << 1) + 0x2110046) += arg3:1.b
    arg1.b ^= 4
    *arg1 += arg1.b
    *(arg1 + arg2 + "Sehr niedrig") += entry_ebx:1.b
    *arg1 += arg1.b
    *(arg4 + 0x46)
    *(arg4 + 0x46) = *(arg4 + 0x46)
    bool c = unimplemented  {shl byte [ebp+0x46], 0x0}
    *arg2 = adc.d(*arg2, arg1, c)
    char* eax = arg1 ^ 4
    *eax += eax.b
    *eax += eax.b
    arg1 = &eax[*eax]
    *arg1 += arg1.b
    int32_t eflags
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags = __aam_immb(0x75, arg1.b)
    arg1.b = temp0_1
    arg1:1.b = temp1_1
    char temp3_1 = arg5[2]
    arg5[2] += arg3.b
    bool c_1 = temp3_1 + arg3.b u< temp3_1
    char temp4_1 = arg2.b
    char temp5_1 = *(entry_ebx + (arg1 << 1) + 0x75)
    arg2.b = adc.b(temp4_1, temp5_1, c_1)
    bool c_2 =
        adc.b(temp4_1, temp5_1, c_1) u< temp4_1 || (c_1 && adc.b(temp4_1, temp5_1, c_1) == temp4_1)
    char* var_4
    
    if (c_2)
        __outsd(arg2.w, *(arg5 + 2), &arg5[2], eflags)
        char* edi
        char temp0_2
        temp0_2, edi = __insd(arg6, arg2.w, eflags)
        *edi = temp0_2
        var_4 = &__return_addr
        
        if (adc.b(temp4_1, temp5_1, c_1) s>= 0 && adc.b(temp4_1, temp5_1, c_1) == 0)
            jump(0x4675e3)
        
        if (c_2)
            jump(0x467658)
        
        jump(0x467658)
    
    arg6 -= 1
    var_4 = &arg5[2]
    char** var_8 = &var_4
    esp_1 = &var_8
    arg4 = *(arg4 + 0x65) * 0x10072
    *arg3 += arg1.b
    *arg1 += arg1.b
    *(&arg5[2] * 3) += arg2:1.b
    arg5 = &arg5[3]
    char temp8_1 = *(arg1 * 2 - 0x4b700000)
    *(arg1 * 2 - 0x4b700000) += arg3:1.b
    
    if (temp8_1 != neg.b(arg3:1.b) && temp8_1 + arg3:1.b u>= temp8_1)
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg6 + (arg5 << 1) - 0x7de7ffba) += arg2.b
        arg5 = &arg5[1]
        *arg1 += arg1.b
        goto label_46767d
    
    arg2 = 0x23b00047
    entry_ebx += 2
    arg1[0x1c00442c] = arg1[0x1c00442c]
    label_4676c0:
    char** eax_1 = *esp_1
    *(eax_1 * 2 - 0x6c) -= eax_1
    *(eax_1 * 2 - 0x60) -= eax_1
    eax_1.b -= *(eax_1 * 2 + 0x58)
    arg3:1.b = 0x42
    *(esp_1 + 0x32c00045) += 0x42
    arg3[0x6a2c0041] += arg3.b
    *eax_1 += arg3.b
    *arg6 = rol.b(*arg6, arg3.b)
    eax_1.b += eax_1:1.b
    char* eax_2
    eax_2.b = (eax_1 & *(entry_ebx + 1)).b | 0x23
    eax_2[0x19] += (entry_ebx + 2):1.b
    eax_2[0xf000442f] += eax_2:1.b
    int16_t ss
    *(esp_1 + 2) = zx.d(ss)
    *(entry_ebx + 4 + (arg4 << 2)) += eax_2.b
    *eax_2 += arg3.b
    *arg6 = eax_2
    void* edi_1 = &arg6[1]
    *(eax_2 + arg5 - 0x2987ffbc) += (arg2 + 2).b
    *(esp_1 + 2 + (arg4 << 2) - 0x492bffbe) += eax_2.b
    eax_2[0x54004432] += arg3.b
    *(eax_2 * 2 + 0xc) ^= eax_2
    char* eax_3
    eax_3.b = 0x42 + (entry_ebx + 4):1.b
    eax_3.b = __salc(eflags)
    *(edi_1 + arg2 + 5 + 0x43) += eax_3.b
    eax_3.b *= 2
    *(esp_1 + 3)
    *(entry_ebx + 5 + arg2 + 5 + 0x43) += eax_3.b
    *(edi_1 + arg2 + 5 + 0x22180043) += eax_3:1.b
    *(eax_3 + edi_1) += (arg2 + 5).b
    eax_3[0xdc0042ed] += eax_3:1.b
    *eax_3 += (arg2 + 5):1.b
    eax_3.b += (arg2 + 5):1.b
    *eax_3 += (arg2 + 5):1.b
    *(esp_1 + 0xb + ((arg4 + 1) << 3) + 0x18e40042) += (entry_ebx + 6).b
    *(edi_1 + 1 + (arg3 << 1)) += (eax_3 - 1):1.b
    char temp13 = eax_3[0xc004314]
    eax_3[0xc004314] += (eax_3 - 1):1.b
    int32_t eflags_2
    char temp0_5
    temp0_5, eflags_2 = __arpl_memw_gpr16(*((eax_3 - 1) * 2 + 0xc), (eax_3 - 1).w)
    *((eax_3 - 1) * 2 + 0xc) = temp0_5
    void* eax_4
    eax_4.b = sbb.b((eax_3 - 1).b, 0x44, temp13 + (eax_3 - 1):1.b u< temp13)
    arg5[entry_ebx + 0x5520004b] += (entry_ebx + 7):1.b
    *(eax_4 + arg4 + 1 + 0x28f80044) += eax_4.b
    arg5[0x25d80044] += (arg2 + 5):1.b
    int32_t edi_3 = *(esp_1 + 0xf)
    char* esi_3 = *(esp_1 + 0x13)
    *(esp_1 + 0x17)
    void* ebx_8 = *(esp_1 + 0x1f)
    char* edx_5 = *(esp_1 + 0x23)
    int32_t ecx = *(esp_1 + 0x27)
    char* eax_5
    eax_5:1.b = (*(esp_1 + 0x2b)):1.b + ebx_8:1.b
    *(ebx_8 + 0x32840044) += eax_5:1.b
    *esi_3 += (ecx - 1).b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *0x10000000 += (ecx - 1).b
    uint8_t* edi_4
    uint8_t temp0_6
    temp0_6, edi_4 = __insb(edi_3, edx_5.w, eflags_2)
    *edi_4 = temp0_6
    eax_5.b += edx_5.b
    eax_5.b += *eax_5
    eax_5[0x6c] += eax_5.b
    eax_5:1.b += edx_5.b
    eax_5.b += *eax_5
    *(esp_1 + 0x32 + (&esi_3[2] << 1) + 0x3140046) += edx_5.b
    char temp14 = *eax_5
    *eax_5 += eax_5.b
    eax_5.b = adc.b(eax_5.b, 0x76, temp14 + eax_5.b u< temp14)
    edx_5[ecx - 1] += eax_5:1.b
    *eax_5 += eax_5.b
    eax_5.b |= *eax_5
    char temp15 = eax_5.b
    eax_5.b += edx_5.b
    
    if (temp15 != neg.b(edx_5.b))
        if (add_overflow(temp15, edx_5.b))
            jump(sub_4677e1+0x91)
        
        jump(sub_4677e1+0x30)
    
    edx_5[ecx + 0x7583ffff] += eax_5:1.b
    char temp16 = eax_5[0xbc00000a]
    eax_5[0xbc00000a] += edx_5:1.b
    *eax_5 = adc.b(*eax_5, eax_5.b, temp16 + edx_5:1.b u< temp16)
    int32_t ecx_2
    int16_t es
    ecx_2, es = __les_gprz_memp(*edx_5)
    *eax_5 += eax_5.b
    undefined
}
