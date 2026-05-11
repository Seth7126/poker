// ============================================================
// 函数名称: sub_4658d0
// 虚拟地址: 0x4658d0
// WARP GUID: b0e3360b-829c-57a6-bd52-14f67cb0ba9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464970
// ============================================================

int32_t* __convention("regparm")sub_4658d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    
    for (int32_t i = 7; i s>= 0; )
        int32_t edx_1 = *eax
        int32_t ebx_1 = eax[7]
        int32_t edx_2 = eax[1]
        int32_t esi_2 = edx_1 - ebx_1
        int32_t ecx_2 = edx_1 + ebx_1
        int32_t edi_1 = eax[6]
        int32_t edx_3 = edx_2 - edi_1
        int32_t ebx_3 = edx_2 + edi_1
        int32_t edx_4 = eax[2]
        int32_t edi_2 = eax[5]
        int32_t edx_5 = edx_4 - edi_2
        int32_t ebp_2 = edx_4 + edi_2
        int32_t edx_6 = eax[3]
        int32_t edi_4 = edx_6 + eax[4]
        int32_t edx_7 = edx_6 - eax[4]
        int32_t edx_8 = edi_4 + ecx_2
        int32_t ecx_3 = ecx_2 - edi_4
        int32_t ecx_5 = ebp_2 + ebx_3
        *eax = ecx_5 + edx_8
        eax[4] = edx_8 - ecx_5
        int32_t edx_15 = ((ecx_3 + ebx_3 - ebp_2) * 0xb5) s>> 8
        eax[2] = edx_15 + ecx_3
        eax[6] = ecx_3 - edx_15
        int32_t edx_17 = edx_7 + edx_5
        int32_t ebx_6 = edx_3 + esi_2
        int32_t edi_13 = ((edx_17 - ebx_6) * 0x62) s>> 8
        int32_t edx_23 = ((edx_17 * 0x8b) s>> 8) + edi_13
        int32_t edi_14 = edi_13 + ((ebx_6 * 0x14e) s>> 8)
        int32_t ecx_14 = ((edx_5 + edx_3) * 0xb5) s>> 8
        int32_t edi_16 = ecx_14 + esi_2
        int32_t esi_3 = esi_2 - ecx_14
        eax[5] = edx_23 + esi_3
        eax[3] = esi_3 - edx_23
        eax[1] = edi_14 + edi_16
        eax[7] = edi_16 - edi_14
        i -= 1
        eax = &eax[8]
    
    int32_t* result = arg1
    
    for (int32_t i_1 = 7; i_1 s>= 0; )
        int32_t edx_25 = *result
        int32_t ebx_14 = result[0x38]
        int32_t esi_6 = edx_25 - ebx_14
        int32_t ecx_18 = edx_25 + ebx_14
        int32_t ebx_16 = result[8] + result[0x30]
        int32_t edx_27 = result[8] - result[0x30]
        int32_t edx_29 = result[0x10] + result[0x28]
        int32_t edx_31 = result[0x10] - result[0x28]
        int32_t edi_19 = result[0x18] + result[0x20]
        int32_t edx_33 = result[0x18] - result[0x20]
        int32_t edx_34 = edi_19 + ecx_18
        int32_t ecx_19 = ecx_18 - edi_19
        int32_t ecx_21 = edx_29 + ebx_16
        *result = ecx_21 + edx_34
        result[0x20] = edx_34 - ecx_21
        int32_t edx_41 = ((ecx_19 + ebx_16 - edx_29) * 0xb5) s>> 8
        result[0x10] = edx_41 + ecx_19
        result[0x30] = ecx_19 - edx_41
        int32_t edx_43 = edx_33 + edx_31
        int32_t ebx_19 = edx_27 + esi_6
        int32_t edi_28 = ((edx_43 - ebx_19) * 0x62) s>> 8
        int32_t edx_49 = ((edx_43 * 0x8b) s>> 8) + edi_28
        int32_t edi_29 = edi_28 + ((ebx_19 * 0x14e) s>> 8)
        int32_t ecx_30 = ((edx_31 + edx_27) * 0xb5) s>> 8
        int32_t edi_31 = ecx_30 + esi_6
        int32_t esi_7 = esi_6 - ecx_30
        result[0x28] = edx_49 + esi_7
        result[0x18] = esi_7 - edx_49
        result[8] = edi_29 + edi_31
        result[0x38] = edi_31 - edi_29
        i_1 -= 1
        result = &result[1]
    
    return result
}
