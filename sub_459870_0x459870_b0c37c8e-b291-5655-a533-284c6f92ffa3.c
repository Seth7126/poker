// ============================================================
// 函数名称: sub_459870
// 虚拟地址: 0x459870
// WARP GUID: b0c37c8e-b291-5655-a533-284c6f92ffa3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4533f4
// [被调用的父级函数]: sub_459a70
// ============================================================

int32_t __fastcallsub_459870(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* ebx = *(arg3 + 0x1be)
    void* ebx = *(arg3 + 0x1be)
    int32_t ebx_1 = *(arg3 + 0x74)
    int32_t i_1 = *(arg3 + 0x6c)
    void* eax = *(arg3 + 0x136)
    int32_t result_1 = 0
    int32_t* var_54 = arg2
    int32_t* var_44 = arg1
    int32_t result = 0
    
    if (0 s< arg4)
        do
            sub_4533f4(*var_44, 0, i_1)
            int32_t var_30_1 = 0
            int32_t* var_50_1 = ebx + 0x44
            
            if (0 s< ebx_1)
                do
                    char* var_18_1 = *var_54 + var_30_1
                    char* var_1c_1 = *var_44
                    int32_t var_2c_1
                    int16_t* ecx_5
                    int32_t esi_1
                    
                    if (*(ebx + 0x54) == 0)
                        esi_1 = 1
                        var_2c_1 = ebx_1
                        ecx_5 = *var_50_1
                    else
                        esi_1 = 0xffffffff
                        var_18_1 = &var_18_1[(i_1 - 1) * ebx_1]
                        var_1c_1 = &var_1c_1[i_1 - 1]
                        var_2c_1 = neg.d(ebx_1)
                        ecx_5 = *var_50_1 + (i_1 + 1) * 2
                    
                    int32_t edx_11 = *(*(ebx + 0x18) + (var_30_1 << 2))
                    int32_t edx_13 = *(*(ebx + 0x10) + (var_30_1 << 2))
                    uint32_t eax_18 = 0
                    int16_t var_10_1 = 0
                    int16_t var_c_1 = 0
                    int32_t i = i_1
                    
                    while (i u> 0)
                        uint32_t eax_23 =
                            zx.d(*(eax + ((eax_18 + sx.d(ecx_5[esi_1]) + 8) s>> 4) + zx.d(*var_18_1)))
                        uint32_t edx_20 = zx.d(*(edx_11 + eax_23))
                        *var_1c_1 += edx_20.b
                        uint32_t eax_24 = eax_23 - zx.d(*(edx_13 + edx_20))
                        int32_t ebx_3
                        ebx_3.w = var_10_1
                        uint32_t edx_23 = eax_24 * 2
                        uint32_t eax_25 = eax_24 + edx_23
                        ebx_3.w += eax_25.w
                        uint32_t eax_26 = eax_25 + edx_23
                        *ecx_5 = ebx_3.w
                        eax_18 = eax_26 + edx_23
                        var_10_1 = var_c_1 + eax_26.w
                        var_c_1 = eax_24.w
                        var_18_1 = &var_18_1[var_2c_1]
                        var_1c_1 = &var_1c_1[esi_1]
                        i -= 1
                        ecx_5 = &ecx_5[esi_1]
                    
                    eax_18.w = var_10_1
                    *ecx_5 = eax_18.w
                    var_30_1 += 1
                    var_50_1 = &var_50_1[1]
                while (var_30_1 s< ebx_1)
            
            int32_t eax_27 = 0
            
            if (*(ebx + 0x54) == 0)
                eax_27 = 1
            
            *(ebx + 0x54) = eax_27
            result_1 += 1
            var_54 = &var_54[1]
            var_44 = &var_44[1]
            result = result_1
        while (result s< arg4)
    
    return result
}
