// ============================================================
// 函数名称: sub_52dbe2
// 虚拟地址: 0x52dbe2
// WARP GUID: 3a6f5a97-603a-5518-98d4-c8641861a3bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_52dbe2(int32_t arg1, char* arg2, char* arg3, void* arg4 @ ebp, void* arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: *(arg2 + arg5) += arg2:1.b
    *(arg2 + arg5) += arg2:1.b
    int32_t entry_ebx
    arg1:1.b += entry_ebx:1.b
    *(arg4 + 1) ^= arg1
    *(arg5 + 1)
    int32_t eflags
    char* eax
    eax.b = __in_al_immb(0xd9, eflags)
    *(arg1 - 4) = arg2
    *eax += arg3.b
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0_1
    char* eax_1 = *(arg5 + 2) * 0xffffffb4
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(edi, arg2.w, eflags)
    *edi_1 = temp0_2
    eax_1[0x6c] += arg2:1.b
    *(arg5 + 4 + ((arg4 + 1) << 1) + 0x46) += arg3:1.b
    *(arg5 + 4 + ((arg4 + 1) << 1)) += eax_1:1.b
    void* esi_4 = arg5 + 5
    char temp1 = *eax_1
    *eax_1 += arg3.b
    void* eax_2
    bool d
    
    if (temp1 == neg.b(arg3.b))
        d = true
        eax_2 = eax_1 - 1
        (arg4 + 1)[edi_1 * 2 + 0x12].b += arg2:1.b
    label_52dc6b:
        *(arg3 + arg2 + 0x49) += arg2.b
        *(arg3 + arg2) += eax_2:1.b
        arg3 -= 1
    else
        char temp2_1 = eax_1.b
        char temp3_1 = eax_1.b
        eax_1.b *= 2
        
        if (temp2_1 + temp3_1 u>= temp2_1)
            d = true
            eax_2 = eax_1 - 1
            goto label_52dc6b
        
        *(arg1 - 4 + ((arg4 + 1) << 3)) += entry_ebx.b
        eax_2:1.b = (eax_1 - 1):1.b + arg3:1.b
    
    edi_1[entry_ebx + 0x3b8c0049] += entry_ebx:1.b
    *(esi_4 * 3) += arg2:1.b
    *(arg1 - 8) = arg3 - 1
    *(esi_4 * 3) += eax_2.b
    *(arg1 - 0xc) = arg3 - 1
    void* esp_3 = arg1 - 0xc
    char temp4 = *(eax_2 + 0x20005183)
    *(eax_2 + 0x20005183) += arg2:1.b
    *(arg3 - 1) = adc.d(*(arg3 - 1), 0xffffffe8, temp4 + arg2:1.b u< temp4)
    void* ecx_1 = arg3 - 2
    void* ebp_1
    
    if (ecx_1 != 0)
        ebp_1 = *(arg4 + 1)
        esp_3 = arg4 + 5
    else
        *(eax_2 - 0x77ffb11e) += eax_2:1.b
        *(eax_2 + 0x41) += entry_ebx.b
        void* eax_3
        eax_3:1.b = (eax_2 + 1):1.b + arg2:1.b
        eax_3:1.b += eax_3.b
        *(ecx_1 - 2 + (edi_1 << 1)) += arg2:1.b
        *(ecx_1 - 3 + (edi_1 << 1)) += eax_3.b
        *(eax_3 - 0x6b) += eax_3.b
        *eax_3 += arg2.b
        ebp_1 = eax_3
        *(arg4 - 0x6a) += entry_ebx:1.b
        *(arg4 - 0x6a) += (ecx_1 - 7).b
        int32_t* eax_4
        eax_4.b = (arg4 + 1).b + (arg4 + 1):1.b
        char* eax_5 = sx.d(eax_4.w)
        eax_5[0x3c004998] += arg2:1.b
        void* edi_2
        
        if (d)
            *edi_1 = eax_5.b
            edi_2 = edi_1 - 1
        else
            *edi_1 = eax_5.b
            edi_2 = &edi_1[1]
        
        arg2[ebp_1 << 2] += eax_5.b
        eax_5[0x880049aa] += entry_ebx:1.b
        
        if (d)
            *edi_2 = eax_5.b
            edi_1 = edi_2 - 1
        else
            *edi_2 = eax_5.b
            edi_1 = edi_2 + 1
        
        *eax_5 += arg2.b
        eax_2 = 0xb7e00049
        ecx_1 -= 0xd
        *(ecx_1 * 9) += arg2:1.b
    
    eax_2.b += arg2:1.b
    unimplemented  {enter 0x49, 0xc0}
    *(ecx_1 - 1) = ror.d(*(ecx_1 - 1), 1)
    *(ecx_1 - 1) = ror.d(*(ecx_1 - 1), 1)
    int32_t eflags_1
    char temp0_4
    char temp1_1
    temp0_4, temp1_1, eflags_1 = __aam_immb(0xeb, eax_2.b)
    eax_2.b = temp0_4
    eax_2:1.b = temp1_1
    void* ecx_15 = ecx_1 - 2
    char temp5 = *eax_2
    *eax_2 += entry_ebx.b
    
    if (temp5 s>= neg.b(entry_ebx.b))
        *(eax_2 * 3 + 0x4a) += ecx_15.b
        *(eax_2 + 0x50004a54) += ecx_15.b
        *(esp_3 - 4) = esp_3
        eax_2:1.b += (arg2.w - 2):1.b
        *(esp_3 - 8) = ebp_1
        eax_2:1.b += eax_2.b
        *(esp_3 - 0xc) = ebp_1
        eax_2:1.b += entry_ebx:1.b
        eax_2:1.b += ecx_15.b
        int32_t edx_3 = *(esp_3 - 8) - 1
        *eax_2 += edx_3.b
        *(esp_3 - 8) = eax_2
        *(esp_3 - 0xc) = ecx_15
        *(esp_3 - 0x10) = edx_3
        *(esp_3 - 0x14) = entry_ebx
        *(esp_3 - 0x18) = esp_3 - 0x14
        *(esp_3 - 0x1c) = ebp_1
        *(esp_3 - 0x20) = esi_4
        *(esp_3 - 0x24) = edi_1
        eax_2.b += eax_2:1.b
        int32_t edi_3 = *(esp_3 - 0x24)
        *(eax_2 + 0x78004a6b) += ecx_15:1.b
        void* temp0_5 = esi_4
        esi_4 = eax_2
        *(esi_4 + ((edx_3 - 3) << 2)) += temp0_5:1.b
        arg2 = edx_3 - 4
        eax_2.b = temp0_5.b + temp0_5:1.b
        ecx_15 = *arg2 * 0x18
        uint8_t temp0_6
        temp0_6, edi_1 = __insb(edi_3, arg2.w, eflags_1)
        *edi_1 = temp0_6
    
    eax_2.b += ecx_15:1.b
    int16_t ecx_16 = (arg2 - 1).w
    eax_2.b |= 0x8d
    eax_2:1.b += entry_ebx.b
    *(eax_2 + ((arg2 - 3) << 2) - 0x66b7ffb6) += esi_4:1.b
    *esi_4 += entry_ebx.b
    int32_t eax_7
    int32_t edx_10
    edx_10:eax_7 = sx.q(esi_4)
    edi_1[(edx_10 - 1) << 2] += (edx_10 - 1).b
    eax_7:1.b *= 2
    *eax_2 += ((edx_10 - 1).w - 2):1.b
    int32_t eax_9 = sx.d(eax_2.w)
    *eax_9 += eax_9.b
    int32_t eax_10 = sx.d(eax_9.w)
    *(eax_10 - 0x68) += ecx_16:1.b
    *eax_10 += entry_ebx:1.b
    int32_t eax_11 = sx.d(eax_10.w)
    *(eax_11 + 0x70004a98) += eax_11:1.b
    int16_t eax_12
    eax_12.b = eax_11.w.b + entry_ebx.b
    int32_t eax_13 = sx.d(eax_12)
    *(eax_13 + 0x10004a98) += ecx_16:1.b
    int16_t eax_14
    int32_t edx_14
    edx_14:eax_14 = sx.q(eax_13)
    eax_14.b += eax_14:1.b
    int32_t eax_15 = sx.d(eax_14)
    *(edx_14 - 2 + (eax_15 << 3) - 0x3dabffb6) += ecx_16.b
    edi_1[eax_15 << 3] += entry_ebx:1.b
    edi_1[eax_15 << 3] += ecx_16.b
    eax_15.b += (edx_14 - 5):1.b
    *(edx_14 - 5)
    *(edx_14 - 5)
    void* eax_16
    eax_16.b = 0xe7
    *(eax_16 - 0x43ffb519) -= 0x19
    jump(0xe9dede3c)
}
