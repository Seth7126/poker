// ============================================================
// 函数名称: sub_45db88
// 虚拟地址: 0x45db88
// WARP GUID: 1560e016-8b89-5185-b572-c4ff98a6b993
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c964
// ============================================================

void* __fastcallsub_45db88(int32_t* arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: char* eax_1 = *(arg3 + 0x136) + 0x80
    char* eax_1 = *(arg3 + 0x136) + 0x80
    int16_t* var_2c = arg1
    int32_t* var_30 = *(arg2 + 0x50)
    void var_140
    void* eax_2 = &var_140
    
    for (int32_t i = 8; i s> 0; i -= 1)
        arg1.w = var_2c[8]
        arg1.w |= var_2c[0x10]
        arg1.w |= var_2c[0x18]
        arg1.w |= var_2c[0x20]
        arg1.w |= var_2c[0x28]
        arg1.w |= var_2c[0x30]
        arg1.w |= var_2c[0x38]
        
        if (arg1.w != 0)
            int32_t ecx_2 = sx.d(var_2c[0x10]) * var_30[0x10]
            int32_t edx_14 = sx.d(var_2c[0x30]) * var_30[0x30]
            int32_t ebx_7 = (ecx_2 + edx_14) * 0x1151
            int32_t ecx_16 = ((((edx_14 + (((neg.d(edx_14) << 4) + edx_14) << 2)) << 3) - edx_14) << 5)
                - edx_14 + ebx_7
            int32_t esi_8 = ecx_2 * 0x187e + ebx_7
            int32_t edx_18 = sx.d(*var_2c) * *var_30
            int32_t edx_21 = sx.d(var_2c[0x20]) * var_30[0x20]
            int32_t ebx_12 = (edx_18 + edx_21) << 0xd
            int32_t ebx_15 = (edx_18 - edx_21) << 0xd
            int32_t edx_23 = ebx_12 + esi_8
            int32_t edx_25 = ebx_12 - esi_8
            int32_t edx_27 = ebx_15 + ecx_16
            int32_t edx_29 = ebx_15 - ecx_16
            int32_t edx_31 = sx.d(var_2c[0x38]) * var_30[0x38]
            int32_t ecx_20 = sx.d(var_2c[0x28]) * var_30[0x28]
            int32_t ecx_23 = sx.d(var_2c[0x18]) * var_30[0x18]
            int32_t esi_10 = sx.d(var_2c[8]) * var_30[8]
            int32_t ebx_18 = (edx_31 + esi_10) * 0xffffe333
            int32_t edi_2 = ecx_20 + esi_10
            int32_t edx_40 = edx_31 + ecx_23
            int32_t edi_5 = (edi_2 + edx_40) * 0x25a1
            int32_t edi_9 = (ecx_20 + ecx_23) * 0xffffadfd
            int32_t edx_49 = ((((edx_40 + (((neg.d(edx_40) << 6) + edx_40) << 2)) << 4) - edx_40) << 2)
                - edx_40 + edi_5
            int32_t var_24_3 = edi_2 * 0xfffff384 + edi_5
            int32_t var_8_4 = edx_31 * 0x98e + edx_49 + ebx_18
            int32_t var_c_4 = ecx_20 * 0x41b3 + edi_9 + var_24_3
            int32_t ecx_25 = ecx_23 * 0x6254 + edx_49 + edi_9
            int32_t esi_16 = esi_10 * 0x300b + ebx_18 + var_24_3
            *eax_2 = (edx_23 + esi_16 + 0x400) s>> 0xb
            *(eax_2 + 0xe0) = (edx_23 - esi_16 + 0x400) s>> 0xb
            *(eax_2 + 0x20) = (edx_27 + ecx_25 + 0x400) s>> 0xb
            *(eax_2 + 0xc0) = (edx_27 - ecx_25 + 0x400) s>> 0xb
            *(eax_2 + 0x40) = (edx_29 + var_c_4 + 0x400) s>> 0xb
            *(eax_2 + 0xa0) = (edx_29 - var_c_4 + 0x400) s>> 0xb
            *(eax_2 + 0x60) = (edx_25 + var_8_4 + 0x400) s>> 0xb
            *(eax_2 + 0x80) = (edx_25 - var_8_4 + 0x400) s>> 0xb
            var_2c = &var_2c[1]
            var_30 = &var_30[1]
            eax_2 += 4
        else
            int32_t edx_10 = (sx.d(*var_2c) * *var_30) << 2
            *eax_2 = edx_10
            *(eax_2 + 0x20) = edx_10
            *(eax_2 + 0x40) = edx_10
            *(eax_2 + 0x60) = edx_10
            *(eax_2 + 0x80) = edx_10
            *(eax_2 + 0xa0) = edx_10
            *(eax_2 + 0xc0) = edx_10
            *(eax_2 + 0xe0) = edx_10
            var_2c = &var_2c[1]
            var_30 = &var_30[1]
            eax_2 += 4
    
    void* result = &var_140
    int32_t i_1 = 0
    int32_t* var_40 = arg5
    
    do
        char* ecx_35 = *var_40 + arg4
        int32_t edx_83 = *(result + 4) | *(result + 8) | *(result + 0xc) | *(result + 0x10)
            | *(result + 0x14) | *(result + 0x18) | *(result + 0x1c)
        
        if (edx_83 != 0)
            int32_t edx_85 = *(result + 8)
            int32_t edx_86 = *(result + 0x18)
            int32_t ebx_26 = (edx_85 + edx_86) * 0x1151
            int32_t ecx_59 = ((((edx_86 + (((neg.d(edx_86) << 4) + edx_86) << 2)) << 3) - edx_86) << 5)
                - edx_86 + ebx_26
            int32_t edx_88 = *result
            int32_t esi_24 = edx_85 * 0x187e + ebx_26
            int32_t ebx_27 = *(result + 0x10)
            int32_t edi_18 = (edx_88 + ebx_27) << 0xd
            int32_t edx_90 = (edx_88 - ebx_27) << 0xd
            int32_t edx_92 = edi_18 + esi_24
            int32_t edx_94 = edi_18 - esi_24
            int32_t edx_96 = edx_90 + ecx_59
            int32_t edx_98 = edx_90 - ecx_59
            int32_t ecx_60 = *(result + 0x1c)
            int32_t edx_99 = *(result + 0x14)
            int32_t ecx_61 = *(result + 0xc)
            int32_t esi_25 = *(result + 4)
            int32_t edi_20 = edx_99 + esi_25
            int32_t edx_103 = ecx_60 + ecx_61
            int32_t ebx_30 = (ecx_60 + esi_25) * 0xffffe333
            int32_t edi_23 = (edi_20 + edx_103) * 0x25a1
            int32_t edi_27 = (edx_99 + ecx_61) * 0xffffadfd
            int32_t edx_112 = ((((edx_103 + (((neg.d(edx_103) << 6) + edx_103) << 2)) << 4) - edx_103)
                << 2) - edx_103 + edi_23
            int32_t var_24_6 = edi_20 * 0xfffff384 + edi_23
            int32_t var_8_8 = ecx_60 * 0x98e + edx_112 + ebx_30
            int32_t var_c_8 = edx_99 * 0x41b3 + edi_27 + var_24_6
            int32_t ecx_63 = ecx_61 * 0x6254 + edx_112 + edi_27
            int32_t esi_31 = esi_25 * 0x300b + ebx_30 + var_24_6
            int32_t edx_118
            edx_118.b = eax_1[(edx_92 + esi_31 + 0x20000) s>> 0x12 & 0x3ff]
            *ecx_35 = edx_118.b
            int32_t edx_123
            edx_123.b = eax_1[(edx_92 - esi_31 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[7] = edx_123.b
            int32_t edx_128
            edx_128.b = eax_1[(edx_96 + ecx_63 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[1] = edx_128.b
            int32_t edx_133
            edx_133.b = eax_1[(edx_96 - ecx_63 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[6] = edx_133.b
            int32_t edx_138
            edx_138.b = eax_1[(edx_98 + var_c_8 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[2] = edx_138.b
            int32_t edx_143
            edx_143.b = eax_1[(edx_98 - var_c_8 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[5] = edx_143.b
            int32_t edx_148
            edx_148.b = eax_1[(edx_94 + var_8_8 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[3] = edx_148.b
            result += 0x20
            int32_t edx_153
            edx_153.b = eax_1[(edx_94 - var_8_8 + 0x20000) s>> 0x12 & 0x3ff]
            ecx_35[4] = edx_153.b
        else
            int32_t ecx_39 = (*result + 0x10) s>> 5 & 0x3ff
            result += 0x20
            char* edx_84
            edx_84.b = eax_1[ecx_39]
            *ecx_35 = edx_84.b
            ecx_35[1] = edx_84.b
            ecx_35[2] = edx_84.b
            ecx_35[3] = edx_84.b
            ecx_35[4] = edx_84.b
            ecx_35[5] = edx_84.b
            ecx_35[6] = edx_84.b
            ecx_35[7] = edx_84.b
        
        i_1 += 1
        var_40 = &var_40[1]
    while (i_1 s< 8)
    
    return result
}
