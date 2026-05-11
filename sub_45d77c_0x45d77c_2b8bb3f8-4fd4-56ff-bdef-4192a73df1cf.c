// ============================================================
// 函数名称: sub_45d77c
// 虚拟地址: 0x45d77c
// WARP GUID: 2b8bb3f8-4fd4-56ff-bdef-4192a73df1cf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c964
// ============================================================

void* __fastcallsub_45d77c(void* arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: char* edx_1 = *(arg3 + 0x136) + 0x80
    char* edx_1 = *(arg3 + 0x136) + 0x80
    void* edx_2 = arg1
    int32_t* var_38 = *(arg2 + 0x50)
    void var_144
    void* eax_2 = &var_144
    
    for (int32_t i = 8; i s> 0; i -= 1)
        int32_t* ecx
        ecx.w = *(edx_2 + 0x10)
        ecx.w |= *(edx_2 + 0x20)
        ecx.w |= *(edx_2 + 0x30)
        ecx.w |= *(edx_2 + 0x40)
        ecx.w |= *(edx_2 + 0x50)
        ecx.w |= *(edx_2 + 0x60)
        ecx.w |= *(edx_2 + 0x70)
        
        if (ecx.w != 0)
            int32_t ecx_3 = sx.d(*edx_2) * *var_38
            int32_t ecx_5 = sx.d(*(edx_2 + 0x20)) * var_38[0x10]
            int32_t ecx_7 = sx.d(*(edx_2 + 0x40)) * var_38[0x20]
            int32_t ecx_9 = sx.d(*(edx_2 + 0x60)) * var_38[0x30]
            int32_t ebx_7 = ecx_3 + ecx_7
            int32_t ecx_11 = ecx_3 - ecx_7
            int32_t esi_2 = ecx_5 + ecx_9
            int32_t edi_2 = esi_2 + ebx_7
            int32_t esi_7 = (((ecx_5 - ecx_9) * 0x16a) s>> 8) - esi_2
            int32_t ebx_8 = ebx_7 - esi_2
            int32_t ebx_9 = esi_7 + ecx_11
            int32_t ecx_12 = ecx_11 - esi_7
            int32_t ecx_14 = sx.d(*(edx_2 + 0x10)) * var_38[8]
            int32_t ecx_16 = sx.d(*(edx_2 + 0x30)) * var_38[0x18]
            int32_t esi_9 = sx.d(*(edx_2 + 0x50)) * var_38[0x28]
            int32_t ebx_14 = sx.d(*(edx_2 + 0x70)) * var_38[0x38]
            int32_t ebx_15 = ecx_16 + esi_9
            int32_t esi_10 = esi_9 - ecx_16
            int32_t ecx_18 = ecx_14 + ebx_14
            int32_t edi_5 = ecx_14 - ebx_14
            edx_2 += 2
            int32_t edi_6 = ebx_15 + ecx_18
            int32_t ebx_23 = ((edi_5 + esi_10) * 0x1d9) s>> 8
            int32_t esi_14 = ((esi_10 * 0xfffffd63) s>> 8) + ebx_23 - edi_6
            int32_t ecx_22 = (((ecx_18 - ebx_15) * 0x16a) s>> 8) - esi_14
            int32_t ebx_31 = ecx_22 + ((edi_5 * 0x115) s>> 8) - ebx_23
            *eax_2 = edi_2 + edi_6
            *(eax_2 + 0xe0) = edi_2 - edi_6
            *(eax_2 + 0x20) = ebx_9 + esi_14
            *(eax_2 + 0xc0) = ebx_9 - esi_14
            *(eax_2 + 0x40) = ecx_12 + ecx_22
            *(eax_2 + 0xa0) = ecx_12 - ecx_22
            *(eax_2 + 0x80) = ebx_8 + ebx_31
            *(eax_2 + 0x60) = ebx_8 - ebx_31
            var_38 = &var_38[1]
            eax_2 += 4
        else
            int32_t ecx_1 = sx.d(*edx_2)
            edx_2 += 2
            ecx = ecx_1 * *var_38
            *eax_2 = ecx
            *(eax_2 + 0x20) = ecx
            *(eax_2 + 0x40) = ecx
            *(eax_2 + 0x60) = ecx
            *(eax_2 + 0x80) = ecx
            *(eax_2 + 0xa0) = ecx
            *(eax_2 + 0xc0) = ecx
            *(eax_2 + 0xe0) = ecx
            var_38 = &var_38[1]
            eax_2 += 4
    
    void* result = &var_144
    int32_t i_1 = 0
    int32_t* var_44 = arg5
    
    do
        char* edx_6 = *var_44 + arg4
        int32_t ecx_33 = *(result + 4) | *(result + 8) | *(result + 0xc) | *(result + 0x10)
            | *(result + 0x14) | *(result + 0x18) | *(result + 0x1c)
        
        if (ecx_33 != 0)
            int32_t ecx_37 = *result
            int32_t esi_15 = *(result + 0x10)
            int32_t ecx_38 = ecx_37 - esi_15
            int32_t ebx_46 = ecx_37 + esi_15
            int32_t esi_16 = *(result + 8)
            int32_t edi_10 = esi_16 + *(result + 0x18)
            int32_t esi_20 = (((esi_16 - *(result + 0x18)) * 0x16a) s>> 8) - edi_10
            int32_t edi_12 = edi_10 + ebx_46
            int32_t ebx_47 = ebx_46 - edi_10
            int32_t ebx_48 = esi_20 + ecx_38
            int32_t ecx_39 = ecx_38 - esi_20
            int32_t ecx_40 = *(result + 0x14)
            int32_t ecx_42 = *(result + 4) + *(result + 0x1c)
            int32_t ebx_50 = ecx_40 + *(result + 0xc)
            int32_t esi_22 = ecx_40 - *(result + 0xc)
            int32_t edi_14 = *(result + 4) - *(result + 0x1c)
            int32_t edi_15 = ebx_50 + ecx_42
            int32_t ebx_58 = ((edi_14 + esi_22) * 0x1d9) s>> 8
            int32_t esi_26 = ((esi_22 * 0xfffffd63) s>> 8) + ebx_58 - edi_15
            int32_t ecx_46 = (((ecx_42 - ebx_50) * 0x16a) s>> 8) - esi_26
            int32_t ebx_66 = ecx_46 + ((edi_14 * 0x115) s>> 8) - ebx_58
            int32_t ebx_70
            ebx_70.b = edx_1[(edi_12 + edi_15) s>> 5 & 0x3ff]
            *edx_6 = ebx_70.b
            int32_t ebx_74
            ebx_74.b = edx_1[(edi_12 - edi_15) s>> 5 & 0x3ff]
            edx_6[7] = ebx_74.b
            int32_t ebx_78
            ebx_78.b = edx_1[(ebx_48 + esi_26) s>> 5 & 0x3ff]
            edx_6[1] = ebx_78.b
            int32_t ebx_82
            ebx_82.b = edx_1[(ebx_48 - esi_26) s>> 5 & 0x3ff]
            edx_6[6] = ebx_82.b
            int32_t ebx_86
            ebx_86.b = edx_1[(ecx_39 + ecx_46) s>> 5 & 0x3ff]
            edx_6[2] = ebx_86.b
            char* ecx_47
            ecx_47.b = edx_1[(ecx_39 - ecx_46) s>> 5 & 0x3ff]
            edx_6[5] = ecx_47.b
            int32_t ecx_51
            ecx_51.b = edx_1[(ebx_47 + ebx_66) s>> 5 & 0x3ff]
            edx_6[4] = ecx_51.b
            result += 0x20
            int32_t ecx_55
            ecx_55.b = edx_1[(ebx_47 - ebx_66) s>> 5 & 0x3ff]
            edx_6[3] = ecx_55.b
        else
            int32_t ecx_36
            ecx_36.b = edx_1[*result s>> 5 & 0x3ff]
            *edx_6 = ecx_36.b
            edx_6[1] = ecx_36.b
            edx_6[2] = ecx_36.b
            edx_6[3] = ecx_36.b
            edx_6[4] = ecx_36.b
            edx_6[5] = ecx_36.b
            edx_6[6] = ecx_36.b
            edx_6[7] = ecx_36.b
            result += 0x20
        
        i_1 += 1
        var_44 = &var_44[1]
    while (i_1 s< 8)
    
    return result
}
