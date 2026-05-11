// ============================================================
// 函数名称: sub_458738
// 虚拟地址: 0x458738
// WARP GUID: 20e62416-0204-5071-88ed-3ba0eb1f9360
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458970
// ============================================================

char* __fastcallsub_458738(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: void* eax_1 = *(arg3 + 0x1b6)
    void* eax_1 = *(arg3 + 0x1b6)
    void* ecx_1 = *(arg3 + 0x136)
    int32_t esi = *(eax_1 + 0x10)
    int32_t esi_1 = *(eax_1 + 0x14)
    int32_t esi_2 = *(eax_1 + 0x18)
    int32_t eax_2 = *(eax_1 + 0x1c)
    int32_t eax_4 = arg1 * 2
    char* var_20 = *(*arg2 + (eax_4 << 2))
    char* var_24 = *(*arg2 + (eax_4 << 2) + 4)
    char* var_28 = *(arg2[1] + (arg1 << 2))
    char* var_2c = *(arg2[2] + (arg1 << 2))
    char* result = *arg4
    char* result_1 = arg4[1]
    
    for (uint32_t i = *(arg3 + 0x6c) u>> 1; i u> 0; i -= 1)
        uint32_t edx_7 = zx.d(*var_28)
        var_28 = &var_28[1]
        uint32_t ebx_2 = zx.d(*var_2c)
        var_2c = &var_2c[1]
        int32_t ebx_4 = *(esi + (ebx_2 << 2))
        int32_t esi_10 = (*(eax_2 + (edx_7 << 2)) + *(esi_2 + (ebx_2 << 2))) s>> 0x10
        int32_t edx_8 = *(esi_1 + (edx_7 << 2))
        uint32_t edx_10 = zx.d(*var_20)
        int32_t ebx_8
        ebx_8.b = (ecx_1 + edx_10)[ebx_4]
        result[2] = ebx_8.b
        char* ebx_9
        ebx_9.b = (ecx_1 + edx_10)[esi_10]
        result[1] = ebx_9.b
        char* edx_11
        edx_11.b = (ecx_1 + edx_10)[edx_8]
        *result = edx_11.b
        uint32_t edx_13 = zx.d(var_20[1])
        var_20 = &var_20[2]
        int32_t ebx_11
        ebx_11.b = (ecx_1 + edx_13)[ebx_4]
        result[5] = ebx_11.b
        char* ebx_12
        ebx_12.b = (ecx_1 + edx_13)[esi_10]
        result[4] = ebx_12.b
        char* edx_14
        edx_14.b = (ecx_1 + edx_13)[edx_8]
        result[3] = edx_14.b
        result = &result[6]
        uint32_t edx_16 = zx.d(*var_24)
        int32_t ebx_14
        ebx_14.b = (ecx_1 + edx_16)[ebx_4]
        result_1[2] = ebx_14.b
        char* ebx_15
        ebx_15.b = (ecx_1 + edx_16)[esi_10]
        result_1[1] = ebx_15.b
        char* edx_17
        edx_17.b = (ecx_1 + edx_16)[edx_8]
        *result_1 = edx_17.b
        uint32_t edx_19 = zx.d(var_24[1])
        var_24 = &var_24[2]
        int32_t ebx_18
        ebx_18.b = (ecx_1 + edx_19)[ebx_4]
        result_1[5] = ebx_18.b
        char* ebx_19
        ebx_19.b = (ecx_1 + edx_19)[esi_10]
        result_1[4] = ebx_19.b
        char* edx_20
        edx_20.b = (ecx_1 + edx_19)[edx_8]
        result_1[3] = edx_20.b
        result_1 = &result_1[6]
    
    if ((*(arg3 + 0x6c) & 1) != 0)
        uint32_t edx_23 = zx.d(*var_28)
        uint32_t ebx_23 = zx.d(*var_2c)
        int32_t ebx_25 = *(esi + (ebx_23 << 2))
        int32_t esi_15 = (*(eax_2 + (edx_23 << 2)) + *(esi_2 + (ebx_23 << 2))) s>> 0x10
        int32_t edx_24 = *(esi_1 + (edx_23 << 2))
        uint32_t edx_26 = zx.d(*var_20)
        int32_t ebx_29
        ebx_29.b = *(ecx_1 + edx_26 + ebx_25)
        result[2] = ebx_29.b
        void* ebx_30
        ebx_30.b = *(ecx_1 + edx_26 + esi_15)
        result[1] = ebx_30.b
        void* edx_27
        edx_27.b = *(ecx_1 + edx_26 + edx_24)
        *result = edx_27.b
        int32_t edx_28
        edx_28.b = *var_24
        int32_t eax_11
        eax_11.b = *(ecx_1 + edx_28 + ebx_25)
        result_1[2] = eax_11.b
        char* eax_12
        eax_12.b = (ecx_1 + edx_28)[esi_15]
        result_1[1] = eax_12.b
        ecx_1.b = (ecx_1 + edx_28)[edx_24]
        result = result_1
        *result = ecx_1.b
    
    return result
}
