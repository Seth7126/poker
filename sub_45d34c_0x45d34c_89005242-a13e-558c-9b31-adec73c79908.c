// ============================================================
// 函数名称: sub_45d34c
// 虚拟地址: 0x45d34c
// WARP GUID: 89005242-a13e-558c-9b31-adec73c79908
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_453460
// [被调用的父级函数]: sub_45c964
// ============================================================

int32_t __fastcallsub_45d34c(float arg1 @ ecx, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t i = 8
    int32_t i = 8
    void var_154
    void* ebx = &var_154
    char* eax_1 = *(arg3 + 0x136) + 0x80
    void* eax_2 = arg1
    float* edx = *(arg2 + 0x50)
    
    do
        arg1.w = *(eax_2 + 0x10)
        arg1.w |= *(eax_2 + 0x20)
        arg1.w |= *(eax_2 + 0x30)
        arg1.w |= *(eax_2 + 0x40)
        arg1.w |= *(eax_2 + 0x50)
        arg1.w |= *(eax_2 + 0x60)
        arg1.w |= *(eax_2 + 0x70)
        
        if (arg1.w != 0)
            float var_8_1 = fconvert.s(float.t(*eax_2) * fconvert.t(*edx))
            float var_c_1 = fconvert.s(float.t(*(eax_2 + 0x20)) * fconvert.t(edx[0x10]))
            float var_10_1 = fconvert.s(float.t(*(eax_2 + 0x40)) * fconvert.t(edx[0x20]))
            float var_14_1 = fconvert.s(float.t(*(eax_2 + 0x60)) * fconvert.t(edx[0x30]))
            float var_28_1 = fconvert.s(fconvert.t(var_8_1) + fconvert.t(var_10_1))
            float var_2c_1 = fconvert.s(fconvert.t(var_8_1) - fconvert.t(var_10_1))
            float var_34_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(var_14_1))
            float var_30_1 = fconvert.s(
                (fconvert.t(var_c_1) - fconvert.t(var_14_1)) * fconvert.t(1.41421354f)
                - fconvert.t(var_34_1))
            float var_8_2 = fconvert.s(fconvert.t(var_28_1) + fconvert.t(var_34_1))
            float var_14_2 = fconvert.s(fconvert.t(var_28_1) - fconvert.t(var_34_1))
            float var_c_2 = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_30_1))
            float var_10_2 = fconvert.s(fconvert.t(var_2c_1) - fconvert.t(var_30_1))
            float var_18_1 = fconvert.s(float.t(*(eax_2 + 0x10)) * fconvert.t(edx[8]))
            float var_1c_1 = fconvert.s(float.t(*(eax_2 + 0x30)) * fconvert.t(edx[0x18]))
            float var_20_1 = fconvert.s(float.t(*(eax_2 + 0x50)) * fconvert.t(edx[0x28]))
            float var_24_1 = fconvert.s(float.t(*(eax_2 + 0x70)) * fconvert.t(edx[0x38]))
            float var_48_1 = fconvert.s(fconvert.t(var_20_1) + fconvert.t(var_1c_1))
            float var_3c_1 = fconvert.s(fconvert.t(var_20_1) - fconvert.t(var_1c_1))
            float var_40_1 = fconvert.s(fconvert.t(var_18_1) + fconvert.t(var_24_1))
            float var_44_1 = fconvert.s(fconvert.t(var_18_1) - fconvert.t(var_24_1))
            float var_24_2 = fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_48_1))
            float var_38_1 =
                fconvert.s((fconvert.t(var_3c_1) + fconvert.t(var_44_1)) * fconvert.t(1.84775901f))
            eax_2 += 2
            edx = &edx[1]
            float var_20_2 = fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(-2.61312604f) * fconvert.t(var_3c_1) + fconvert.t(var_38_1)))
                - fconvert.t(var_24_2))
            float var_1c_2 = fconvert.s(fconvert.t(fconvert.s((fconvert.t(var_40_1)
                - fconvert.t(var_48_1)) * fconvert.t(1.41421354f))) - fconvert.t(var_20_2))
            float var_18_2 = fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(1.08239222f) * fconvert.t(var_44_1) - fconvert.t(var_38_1)))
                + fconvert.t(var_1c_2))
            *ebx = fconvert.s(fconvert.t(var_8_2) + fconvert.t(var_24_2))
            *(ebx + 0xe0) = fconvert.s(fconvert.t(var_8_2) - fconvert.t(var_24_2))
            *(ebx + 0x20) = fconvert.s(fconvert.t(var_c_2) + fconvert.t(var_20_2))
            *(ebx + 0xc0) = fconvert.s(fconvert.t(var_c_2) - fconvert.t(var_20_2))
            *(ebx + 0x40) = fconvert.s(fconvert.t(var_10_2) + fconvert.t(var_1c_2))
            *(ebx + 0xa0) = fconvert.s(fconvert.t(var_10_2) - fconvert.t(var_1c_2))
            *(ebx + 0x80) = fconvert.s(fconvert.t(var_14_2) + fconvert.t(var_18_2))
            *(ebx + 0x60) = fconvert.s(fconvert.t(var_14_2) - fconvert.t(var_18_2))
            ebx += 4
        else
            long double x87_r7_1 = float.t(*eax_2)
            eax_2 += 2
            long double x87_r7_2 = x87_r7_1 * fconvert.t(*edx)
            edx = &edx[1]
            float var_50_1 = fconvert.s(x87_r7_2)
            *ebx = var_50_1
            *(ebx + 0x20) = var_50_1
            *(ebx + 0x40) = var_50_1
            *(ebx + 0x60) = var_50_1
            *(ebx + 0x80) = var_50_1
            *(ebx + 0xa0) = var_50_1
            *(ebx + 0xc0) = var_50_1
            *(ebx + 0xe0) = var_50_1
            ebx += 4
        
        i -= 1
    while (i s> 0)
    
    void* ebx_1 = &var_154
    int32_t i_1 = 0
    int32_t* var_54 = arg5
    int32_t result
    
    do
        char* esi_2 = *var_54 + arg4
        float var_28_3 = fconvert.s(fconvert.t(*ebx_1) + fconvert.t(*(ebx_1 + 0x10)))
        float var_2c_3 = fconvert.s(fconvert.t(*ebx_1) - fconvert.t(*(ebx_1 + 0x10)))
        float var_34_2 = fconvert.s(fconvert.t(*(ebx_1 + 8)) + fconvert.t(*(ebx_1 + 0x18)))
        float var_30_3 = fconvert.s(
            (fconvert.t(*(ebx_1 + 8)) - fconvert.t(*(ebx_1 + 0x18))) * fconvert.t(1.41421354f)
            - fconvert.t(var_34_2))
        float var_8_3 = fconvert.s(fconvert.t(var_28_3) + fconvert.t(var_34_2))
        float var_14_3 = fconvert.s(fconvert.t(var_28_3) - fconvert.t(var_34_2))
        float var_c_3 = fconvert.s(fconvert.t(var_2c_3) + fconvert.t(var_30_3))
        float var_10_3 = fconvert.s(fconvert.t(var_2c_3) - fconvert.t(var_30_3))
        float var_48_2 = fconvert.s(fconvert.t(*(ebx_1 + 0x14)) + fconvert.t(*(ebx_1 + 0xc)))
        float var_3c_2 = fconvert.s(fconvert.t(*(ebx_1 + 0x14)) - fconvert.t(*(ebx_1 + 0xc)))
        float var_40_2 = fconvert.s(fconvert.t(*(ebx_1 + 4)) + fconvert.t(*(ebx_1 + 0x1c)))
        float var_44_2 = fconvert.s(fconvert.t(*(ebx_1 + 4)) - fconvert.t(*(ebx_1 + 0x1c)))
        float var_24_3 = fconvert.s(fconvert.t(var_40_2) + fconvert.t(var_48_2))
        float var_38_2 =
            fconvert.s((fconvert.t(var_3c_2) + fconvert.t(var_44_2)) * fconvert.t(1.84775901f))
        float var_20_3 = fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(-2.61312604f) * fconvert.t(var_3c_2) + fconvert.t(var_38_2))) - fconvert.t(var_24_3))
        float var_1c_3 = fconvert.s(fconvert.t(fconvert.s((fconvert.t(var_40_2) - fconvert.t(var_48_2))
            * fconvert.t(1.41421354f))) - fconvert.t(var_20_3))
        float var_18_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(1.08239222f) * fconvert.t(var_44_2)
            - fconvert.t(var_38_2))) + fconvert.t(var_1c_3))
        *esi_2 = eax_1[(sub_453460(fconvert.t(var_8_3) + fconvert.t(var_24_3)) + 4) s>> 3 & 0x3ff]
        esi_2[7] = eax_1[(sub_453460(fconvert.t(var_8_3) - fconvert.t(var_24_3)) + 4) s>> 3 & 0x3ff]
        esi_2[1] = eax_1[(sub_453460(fconvert.t(var_c_3) + fconvert.t(var_20_3)) + 4) s>> 3 & 0x3ff]
        esi_2[6] = eax_1[(sub_453460(fconvert.t(var_c_3) - fconvert.t(var_20_3)) + 4) s>> 3 & 0x3ff]
        esi_2[2] = eax_1[(sub_453460(fconvert.t(var_10_3) + fconvert.t(var_1c_3)) + 4) s>> 3 & 0x3ff]
        esi_2[5] = eax_1[(sub_453460(fconvert.t(var_10_3) - fconvert.t(var_1c_3)) + 4) s>> 3 & 0x3ff]
        esi_2[4] = eax_1[(sub_453460(fconvert.t(var_14_3) + fconvert.t(var_18_3)) + 4) s>> 3 & 0x3ff]
        ebx_1 += 0x20
        result = (sub_453460(fconvert.t(var_14_3) - fconvert.t(var_18_3)) + 4) s>> 3 & 0x3ff
        i_1 += 1
        esi_2[3] = eax_1[result]
        var_54 = &var_54[1]
    while (i_1 s< 8)
    
    return result
}
