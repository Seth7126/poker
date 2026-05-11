// ============================================================
// 函数名称: sub_45e15c
// 虚拟地址: 0x45e15c
// WARP GUID: cced7a82-bb98-5963-9fc6-f62568791275
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c964
// ============================================================

void* __fastcallsub_45e15c(int16_t* arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: char* eax_1 = *(arg3 + 0x136) + 0x80
    char* eax_1 = *(arg3 + 0x136) + 0x80
    int16_t* ebx = arg1
    int32_t* var_20 = *(arg2 + 0x50)
    void var_ac
    void* eax_3 = &var_ac
    
    for (int32_t i = 8; i s> 0; i -= 1)
        if (i != 4)
            arg2.w = ebx[8]
            arg2.w |= ebx[0x10]
            arg2.w |= ebx[0x18]
            arg2.w |= ebx[0x28]
            arg2.w |= ebx[0x30]
            arg2.w |= ebx[0x38]
            
            if (arg2.w != 0)
                int32_t ecx_5 = sx.d(ebx[0x30]) * var_20[0x30]
                int32_t edx_4 = (sx.d(*ebx) * *var_20) << 0xe
                int32_t ecx_14 = sx.d(ebx[0x10]) * var_20[0x10] * 0x3b21
                    + (((((ecx_5 + (neg.d(ecx_5) << 2)) << 4) - ecx_5) << 6) + ecx_5) * 2
                int32_t esi_12 = ecx_14 + edx_4
                int32_t edx_5 = edx_4 - ecx_14
                int32_t edx_7 = sx.d(ebx[0x38]) * var_20[0x38]
                int32_t edx_9 = sx.d(ebx[0x28]) * var_20[0x28]
                int32_t edx_11 = sx.d(ebx[0x18]) * var_20[0x18]
                int32_t edx_13 = sx.d(ebx[8]) * var_20[8]
                arg2 = (((edx_7 + ((edx_7 + (neg.d(edx_7) << 3)) << 2)) << 5) - edx_7) * 2
                    + edx_9 * 0x2e75 + edx_11 * 0xffffba79 + edx_13 * 0x21f9
                int32_t ecx_37 = (((((neg.d(edx_7) << 6) - edx_7) << 2) - edx_7) << 4)
                    + edx_9 * 0xffffecc2 + edx_11 * 0x1ccd + edx_13 * 0x5203
                *eax_3 = (esi_12 + ecx_37 + 0x800) s>> 0xc
                *(eax_3 + 0x60) = (esi_12 - ecx_37 + 0x800) s>> 0xc
                *(eax_3 + 0x20) = (edx_5 + arg2 + 0x800) s>> 0xc
                *(eax_3 + 0x40) = (edx_5 - arg2 + 0x800) s>> 0xc
            else
                arg2 = (sx.d(*ebx) * *var_20) << 2
                *eax_3 = arg2
                *(eax_3 + 0x20) = arg2
                *(eax_3 + 0x40) = arg2
                *(eax_3 + 0x60) = arg2
        
        ebx = &ebx[1]
        var_20 = &var_20[1]
        eax_3 += 4
    
    void* result = &var_ac
    int32_t i_1 = 0
    int32_t* var_2c = arg5
    
    do
        char* esi_32 = *var_2c + arg4
        
        if ((*(result + 4) | *(result + 8) | *(result + 0xc) | *(result + 0x14) | *(result + 0x18)
                | *(result + 0x1c)) != 0)
            int32_t edx_33 = *result << 0xe
            int32_t ebx_2 = *(result + 0x18)
            int32_t ecx_59 = *(result + 8) * 0x3b21
                + (((((ebx_2 + (neg.d(ebx_2) << 2)) << 4) - ebx_2) << 6) + ebx_2) * 2
            int32_t ebx_10 = ecx_59 + edx_33
            int32_t edx_34 = edx_33 - ecx_59
            int32_t edx_35 = *(result + 0x1c)
            int32_t ecx_60 = *(result + 0x14)
            int32_t edx_36 = *(result + 0xc)
            int32_t ecx_61 = *(result + 4)
            int32_t edx_46 = (((edx_35 + ((edx_35 + (neg.d(edx_35) << 3)) << 2)) << 5) - edx_35) * 2
                + ecx_60 * 0x2e75 + edx_36 * 0xffffba79 + ecx_61 * 0x21f9
            int32_t ecx_80 = (((((neg.d(edx_35) << 6) - edx_35) << 2) - edx_35) << 4)
                + ecx_60 * 0xffffecc2 + edx_36 * 0x1ccd + ecx_61 * 0x5203
            int32_t ebx_25
            ebx_25.b = eax_1[(ebx_10 + ecx_80 + 0x40000) s>> 0x13 & 0x3ff]
            *esi_32 = ebx_25.b
            char* ecx_81
            ecx_81.b = eax_1[(ebx_10 - ecx_80 + 0x40000) s>> 0x13 & 0x3ff]
            esi_32[3] = ecx_81.b
            int32_t ecx_86
            ecx_86.b = eax_1[(edx_34 + edx_46 + 0x40000) s>> 0x13 & 0x3ff]
            esi_32[1] = ecx_86.b
            result += 0x20
            char* edx_47
            edx_47.b = eax_1[(edx_34 - edx_46 + 0x40000) s>> 0x13 & 0x3ff]
            esi_32[2] = edx_47.b
        else
            char* edx_31
            edx_31.b = eax_1[(*result + 0x10) s>> 5 & 0x3ff]
            *esi_32 = edx_31.b
            esi_32[1] = edx_31.b
            esi_32[2] = edx_31.b
            esi_32[3] = edx_31.b
            result += 0x20
        
        i_1 += 1
        var_2c = &var_2c[1]
    while (i_1 s< 4)
    
    return result
}
