// ============================================================
// 函数名称: sub_4654ec
// 虚拟地址: 0x4654ec
// WARP GUID: 3760942b-f342-535a-a32f-9a012256e8c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464970
// ============================================================

int32_t* __convention("regparm")sub_4654ec(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    
    for (int32_t i = 7; i s>= 0; i -= 1)
        int32_t ecx_1 = *eax
        int32_t ebx_1 = eax[7]
        int32_t esi_2 = ecx_1 - ebx_1
        int32_t edx_2 = ecx_1 + ebx_1
        int32_t ebx_2 = eax[1]
        int32_t edi_1 = eax[6]
        int32_t ebx_3 = ebx_2 - edi_1
        int32_t ecx_3 = ebx_2 + edi_1
        int32_t ebx_5 = eax[2] + eax[5]
        int32_t ebp_2 = eax[2] - eax[5]
        int32_t ebp_4 = eax[3] + eax[4]
        int32_t ebp_6 = eax[3] - eax[4]
        int32_t ebp_8 = ebp_4 + edx_2
        int32_t edx_3 = edx_2 - ebp_4
        int32_t edx_4 = ebx_5 + ecx_3
        int32_t ecx_4 = ecx_3 - ebx_5
        *eax = (ebp_8 + edx_4) << 2
        eax[4] = (ebp_8 - edx_4) << 2
        int32_t edx_12 = (edx_3 + ecx_4) * 0x1151
        eax[2] = (edx_3 * 0x187e + edx_12 + 0x400) s>> 0xb
        eax[6] = (edx_12 + ((((ecx_4 + (((neg.d(ecx_4) << 4) + ecx_4) << 2)) << 3) - ecx_4) << 5)
            - ecx_4 + 0x400) s>> 0xb
        int32_t edx_18 = (ebp_6 + esi_2) * 0xffffe333
        int32_t ebx_25 = ebp_2 + esi_2
        int32_t ecx_16 = ebp_6 + ebx_3
        int32_t ebp_11 = (ebx_25 + ecx_16) * 0x25a1
        int32_t ebp_15 = (ebp_2 + ebx_3) * 0xffffadfd
        int32_t ecx_25 =
            ((((ecx_16 + (((neg.d(ecx_16) << 6) + ecx_16) << 2)) << 4) - ecx_16) << 2) - ecx_16 + ebp_11
        int32_t ebx_33 =
            ((((((ebx_25 + (neg.d(ebx_25) << 2)) << 3) - ebx_25) << 5) + ebx_25) << 2) + ebp_11
        eax[7] = (ebp_6 * 0x98e + edx_18 + ecx_25 + 0x400) s>> 0xb
        eax[5] = (ebp_2 * 0x41b3 + ebp_15 + ebx_33 + 0x400) s>> 0xb
        eax[3] = (ecx_25 + ebx_3 * 0x6254 + ebp_15 + 0x400) s>> 0xb
        eax[1] = (ebx_33 + edx_18 + esi_2 * 0x300b + 0x400) s>> 0xb
        eax = &eax[8]
    
    int32_t* result = arg1
    
    for (int32_t i_1 = 7; i_1 s>= 0; i_1 -= 1)
        int32_t ecx_29 = *result
        int32_t ebx_37 = result[0x38]
        int32_t esi_9 = ecx_29 - ebx_37
        int32_t edx_21 = ecx_29 + ebx_37
        int32_t ebx_38 = result[8]
        int32_t edi_5 = result[0x30]
        int32_t ebx_39 = ebx_38 - edi_5
        int32_t ecx_31 = ebx_38 + edi_5
        int32_t ebx_41 = result[0x10] + result[0x28]
        int32_t ebp_29 = result[0x10] - result[0x28]
        int32_t ebp_31 = result[0x18] + result[0x20]
        int32_t ebp_33 = result[0x18] - result[0x20]
        int32_t ebp_35 = ebp_31 + edx_21
        int32_t edx_22 = edx_21 - ebp_31
        int32_t edx_23 = ebx_41 + ecx_31
        int32_t ecx_32 = ecx_31 - ebx_41
        *result = (ebp_35 + edx_23 + 2) s>> 2
        result[0x20] = (ebp_35 - edx_23 + 2) s>> 2
        int32_t edx_31 = (edx_22 + ecx_32) * 0x1151
        result[0x10] = (edx_22 * 0x187e + edx_31 + 0x4000) s>> 0xf
        result[0x30] = (edx_31
            + ((((ecx_32 + (((neg.d(ecx_32) << 4) + ecx_32) << 2)) << 3) - ecx_32) << 5) - ecx_32
            + 0x4000) s>> 0xf
        int32_t edx_37 = (ebp_33 + esi_9) * 0xffffe333
        int32_t ebx_63 = ebp_29 + esi_9
        int32_t ecx_44 = ebp_33 + ebx_39
        int32_t ebp_38 = (ebx_63 + ecx_44) * 0x25a1
        int32_t ebp_42 = (ebp_29 + ebx_39) * 0xffffadfd
        int32_t ecx_53 =
            ((((ecx_44 + (((neg.d(ecx_44) << 6) + ecx_44) << 2)) << 4) - ecx_44) << 2) - ecx_44 + ebp_38
        int32_t ebx_71 =
            ((((((ebx_63 + (neg.d(ebx_63) << 2)) << 3) - ebx_63) << 5) + ebx_63) << 2) + ebp_38
        result[0x38] = (ebp_33 * 0x98e + edx_37 + ecx_53 + 0x4000) s>> 0xf
        result[0x28] = (ebp_29 * 0x41b3 + ebp_42 + ebx_71 + 0x4000) s>> 0xf
        result[0x18] = (ecx_53 + ebx_39 * 0x6254 + ebp_42 + 0x4000) s>> 0xf
        result[8] = (ebx_71 + edx_37 + esi_9 * 0x300b + 0x4000) s>> 0xf
        result = &result[1]
    
    return result
}
