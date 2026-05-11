// ============================================================
// 函数名称: sub_464168
// 虚拟地址: 0x464168
// WARP GUID: 09a81cd9-6427-5954-b5da-3862c1e777a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463b5c
// [被调用的父级函数]: sub_4642f8
// ============================================================

void* __fastcallsub_464168(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t edx_1 = *(arg2 + 0x1c) << 3
    int32_t edx_1 = *(arg2 + 0x1c) << 3
    sub_463b5c(*(arg3 + 0x18), *(arg3 + 0xe1) + 2, arg1 - 4, edx_1)
    int32_t eax_2 = *(arg3 + 0xb8)
    int32_t eax_3 = eax_2 << 6
    int32_t i = 0
    void* var_38 = arg1
    int32_t* var_34 = arg4
    
    while (*(arg2 + 0xc) s> i)
        char* ecx_4 = *var_34
        char* ecx_5 = *var_38
        char* eax_6 = *(var_38 - 4)
        char* eax_7 = *(var_38 + 4)
        int32_t eax_8
        eax_8.b = *ecx_5
        void* ecx_6 = &ecx_5[1]
        char* var_1c_2 = &eax_7[1]
        void* var_18_2 = &eax_6[1]
        int32_t edx_13 = zx.d(*eax_6) + zx.d(*eax_7) + eax_8
        int32_t ebx_6
        ebx_6.b = *ecx_6
        int32_t esi_3 = zx.d(*var_18_2) + zx.d(*var_1c_2) + ebx_6
        *ecx_4 = ((eax_8 * (0x10000 - (eax_2 << 9)) + (edx_13 * 2 - eax_8 + esi_3) * eax_3 + 0x8000)
            s>> 0x10).b
        void* var_20_2 = &ecx_4[1]
        int32_t var_30_1 = edx_13
        int32_t edx_14 = esi_3
        int32_t j = edx_1 - 2
        
        while (j u> 0)
            int32_t eax_15
            eax_15.b = *ecx_6
            ecx_6 += 1
            var_18_2 += 1
            var_1c_2 = &var_1c_2[1]
            int32_t ebx_17
            ebx_17.b = *ecx_6
            int32_t esi_6 = zx.d(*var_18_2) + zx.d(*var_1c_2) + ebx_17
            *var_20_2 = ((eax_15 * (0x10000 - (eax_2 << 9))
                + (edx_14 - eax_15 + var_30_1 + esi_6) * eax_3 + 0x8000) s>> 0x10).b
            var_20_2 += 1
            var_30_1 = edx_14
            j -= 1
            edx_14 = esi_6
        
        int32_t eax_20
        eax_20.b = *ecx_6
        *var_20_2 = ((eax_20 * (0x10000 - (eax_2 << 9)) + (edx_14 + edx_14 - eax_20 + var_30_1) * eax_3
            + 0x8000) s>> 0x10).b
        i += 1
        var_38 += 4
        var_34 = &var_34[1]
    
    return arg2
}
