// ============================================================
// 函数名称: sub_470e4b
// 虚拟地址: 0x470e4b
// WARP GUID: 5c0cd8dc-73cf-5092-a83e-36cb1fc76c61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4077a8, sub_405b74, sub_405b40
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_470e4b(char* arg1, void* arg2, int32_t arg3, void* arg4 @ ebp, int32_t arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: int32_t var_4 = arg5
    int32_t var_4 = arg5
    *arg1 += arg1.b
    arg1[0x41] += arg3.b
    void* var_8 = arg2
    void* var_b = arg6
    void* var_f = arg2
    int32_t entry_ebx
    void* var_13 = entry_ebx - 1
    void* var_18 = arg4 + 3
    void* var_1c = arg4 + 3
    *(arg5 - 0x26) &= (arg1 - 0x46415248).b
    void* var_20 = arg2 + 1
    *(arg6 + 0x52) &= (arg3 - 1).b
    *(arg4 - 0x26) &= (arg3 - 1).b
    void* var_26 = arg2 + 1
    void* var_2a = arg6 + 4
    void* var_2e = entry_ebx + 1
    *(arg5 + 0x46) &= (arg3 - 3).b
    int32_t* var_32 = &var_2e
    *(arg3 + 0x48) &= (arg1 - 0x4641524a).b
    int32_t** var_36 = &var_32
    void* var_3a = arg5 - 3
    int32_t eax_4 = (arg1 - 0x4641524a) | 0x54534e49
    void* var_40 = arg2 + 1
    *(entry_ebx + 0x4b) &= (arg2 + 1).b
    *(arg4 + 0xa + (eax_4 << 1) + 0x4e) &= eax_4.b
    *(arg5 + 0x41) &= (arg3 - 4).b
    void* var_44 = arg4 + 0xa
    void* var_48 = entry_ebx + 2
    void** var_4c = &var_48
    *(arg6 + 0x56) &= eax_4.b
    void* ebx_5 = entry_ebx
    void* var_50 = arg2 + 1
    int32_t* var_54 = &var_50
    int32_t** var_58 = &var_54
    void* var_5c = arg2 + 1
    void* ecx_11 = arg3 - 4
    void* edx_1 = arg2 + 2
    void* ebp_13 = arg4 + 0xe
    void* var_60 = edx_1
    char* eax_5 = eax_4 | 0x7361440d
    *(ebx_5 + 0x70) &= edx_1.b
    int32_t* esp_1 = *(ebp_13 + 0x6c) * 0x6e616b20
    int32_t eflags
    uint16_t* esi_7 = __outsb(edx_1.w, *(arg5 - 5), arg5 - 5, eflags)
    char temp1 = *(esi_7 + 0x75) & ecx_11:1.b
    *(esi_7 + 0x75) = temp1
    
    if (temp1 u< 0)
        goto label_470efb
    
    void* esp_6
    TEB* fsbase
    
    if (temp1 u>= 0)
        *((arg6 + 5) * 9 + 0x32) += eax_5:1.b
    label_470f56:
        *(fsbase + edx_1) = esp_1
    label_470f5e:
        *(*(ebp_13 + 8) - 4) = 0
        *(*(ebp_13 + 8) - 8) = 0
        *(*(ebp_13 + 8) - 0xc)
    label_470f79:
        sub_4077a8()
        *(esp_1 - 4) = 0
        int32_t* eax_16 = *(*(ebp_13 + 8) - 0xc) + 0x2d0
        sub_405b40(eax_16)
        *(esp_1 - 8) = eax_16
        *(esp_1 - 0xc) = 0
        esp_6 = esp_1 - 0xc
    else
        int32_t edi_4 = *esp_1
        uint16_t* esi_8 = esp_1[1]
        ebp_13 = esp_1[2]
        ebx_5 = esp_1[4]
        edx_1 = esp_1[5]
        ecx_11 = esp_1[6]
        eax_5 = esp_1[7]
        esp_1 = &esp_1[8]
        
        if (temp1 u< 0)
            edx_1 = nullptr
            *(esp_1 - 4) = ebp_13
            *(esp_1 - 8) = j_sub_4037f0
            esp_6 = esp_1 - 8
            *(esp_6 - 4) = *(fsbase + edx_1)
            esp_1 = esp_6 - 4
            goto label_470f56
        
        *(edx_1 + 0x75) &= edx_1:1.b
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(ebx_5 + 0x65), ebp_13.w)
        *(ebx_5 + 0x65) = temp0_1
        uint8_t* edi_5
        uint8_t temp0_2
        temp0_2, edi_5 = __insb(edi_4, edx_1.w, eflags)
        *edi_5 = temp0_2
        int32_t esi_9 = __outsb(edx_1.w, *esi_8, esi_8, eflags)
        char temp4_1 = *(fsbase + ecx_11 + 0x75) & eax_5:1.b
        *(fsbase + ecx_11 + 0x75) = temp4_1
        
        if (temp4_1 u>= 0)
            eax_5:1.b ^= *(ecx_11 * 5 + 0x22)
            goto label_470f5e
        
        *(esp_1 - 4) = 0x77207472
        esp_1 -= 4
        
        if (temp4_1 u< 0)
            *(ecx_11 + 0x458bfc50) = ror.b(*(ecx_11 + 0x458bfc50), ecx_11.b)
            *ebx_5 |= edx_1:1.b
            *(ecx_11 + 0x458bf850) = ror.b(*(ecx_11 + 0x458bf850), ecx_11.b)
            *(ebx_5 - 0x27fa0bc0) |= ecx_11.b
            eax_5.b += *eax_5
            *(edx_1 + 4) += ebx_5:1.b
            goto label_470f79
        
        uint16_t* gsbase
        esi_7 = __outsb(edx_1.w, *(gsbase + esi_9), esi_9, eflags)
    label_470efb:
        void* eax_6 = eax_5 | 0x666c6948
        *(gsbase + edx_1 + 0x75) &= ebx_5:1.b
        *(ebp_13 + 0x6d) &= eax_6:1.b
        *(eax_6 + 0x72) &= edx_1.b
        uint16_t* esi_10 = __outsd(edx_1.w, *esi_7, esi_7, eflags)
        __bound_gprv_mema32(ebp_13, *(ebp_13 + 0x6d))
        *(esi_10 + 0x69) &= eax_6:1.b
        int32_t esi_11 = __outsb(edx_1.w, *esi_10, esi_10, eflags)
        __outsb(edx_1.w, *(gsbase + esi_11), esi_11, eflags)
        *(ebx_5 + 0x69) &= edx_1.b
        *(gsbase + ecx_11 + 0x6d) &= ecx_11:1.b
        char temp2_1 = *(ebx_5 + 0x74) & edx_1.b
        *(ebx_5 + 0x74) = temp2_1
        int32_t esi_13 = esp_1[1]
        ebp_13 = esp_1[2]
        edx_1 = esp_1[5]
        int16_t ecx_12 = (esp_1[6]).w
        char* eax_7 = esp_1[7]
        esp_6 = &esp_1[8]
        
        if (temp2_1 u< 0)
            void* ebx_6
            ebx_6:1.b = esp_1[4]:1.b * 2
            *(ebp_13 - 0x5d7af040) = rol.b(*(ebp_13 - 0x5d7af040), 1)
            *eax_7 += eax_7.b
            *(ebx_6 + 0x408b0845) += ecx_12.b
            trap(0xd)
        
        int16_t* edi_7
        int16_t temp0_3
        temp0_3, edi_7 = __insd(*esp_1, edx_1.w, eflags)
        *edi_7 = temp0_3
        uint16_t* esi_14 = __outsb(edx_1.w, *(gsbase + esi_13), esi_13, eflags)
        char temp3_1 = *(ebp_13 + 0x6e)
        *(ebp_13 + 0x6e) &= edx_1:1.b
        
        if ((temp3_1 & edx_1:1.b) != 0)
            edx_1.b &= *(ebp_13 + 0x63)
            *(esp_6 - 4) = 0x6373696e
            *(esp_6 - 8) = 0x72502065
            int32_t esi_15 = __outsd(edx_1.w, *esi_14, esi_14, eflags)
            __bound_gprv_mema32(ebp_13, *(ebp_13 + 0x6d))
            ecx_12:1.b &= *(gsbase + esi_15)
            *eax_7 += eax_7.b
            return sub_470f48() __tailcall
    
    if ((*data_52ff08)() == 0)
        sub_405b74(*(*(ebp_13 + 8) - 0xc) + 0x2d4, *(*(*(ebp_13 + 8) - 0xc) + 0x2d0), 0x471068)
        *(*(*(ebp_13 + 8) - 0xc) + 0x2d8) = 0x10000000
        *(esp_6 - 4) = *(ebp_13 + 8) - 8
        *(esp_6 - 8) = *(ebp_13 + 8) - 4
        *(esp_6 - 0xc) = *(*(ebp_13 + 8) - 0xc) + 0x2d8
        int32_t* eax_34 = *(*(*(ebp_13 + 8) - 0xc) + 0x2d4)
        *(esp_6 - 0x10) = eax_34
        (*(*eax_34 + 0x5c))()
        
        if (*(*(ebp_13 + 8) - 4) == 0)
            *(*(*(ebp_13 + 8) - 0xc) + 0x2d8) = 0x4000
            *(esp_6 - 4) = *(ebp_13 + 8) - 8
            *(esp_6 - 8) = *(ebp_13 + 8) - 4
            *(esp_6 - 0xc) = *(*(ebp_13 + 8) - 0xc) + 0x2d8
            int32_t* eax_48 = *(*(*(ebp_13 + 8) - 0xc) + 0x2d4)
            *(esp_6 - 0x10) = eax_48
            (*(*eax_48 + 0x5c))()
    
    fsbase->NtTib.ExceptionList = *esp_6
    *(esp_6 + 8) = sub_471063
    return *(*(ebp_13 + 8) - 4)
}
