// ============================================================
// 函数名称: sub_4585c0
// 虚拟地址: 0x4585c0
// WARP GUID: cfdd21ba-dae2-5441-9a01-91d4fb6e239c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458970
// ============================================================

char* __fastcallsub_4585c0(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: void* ebx = *(arg3 + 0x1b6)
    void* ebx = *(arg3 + 0x1b6)
    int32_t esi = *(ebx + 0x10)
    char* result = *(arg3 + 0x136)
    int32_t esi_1 = *(ebx + 0x14)
    int32_t esi_2 = *(ebx + 0x18)
    int32_t ebx_1 = *(ebx + 0x1c)
    char* var_18 = *(*arg2 + (arg1 << 2))
    char* var_1c = *(arg2[1] + (arg1 << 2))
    char* var_20 = *(arg2[2] + (arg1 << 2))
    void* edx_2 = *arg4
    
    for (uint32_t i = *(arg3 + 0x6c) u>> 1; i u> 0; i -= 1)
        uint32_t ecx_5 = zx.d(*var_1c)
        var_1c = &var_1c[1]
        uint32_t ebx_7 = zx.d(*var_20)
        var_20 = &var_20[1]
        int32_t ebx_9 = *(esi + (ebx_7 << 2))
        int32_t esi_6 = (*(ebx_1 + (ecx_5 << 2)) + *(esi_2 + (ebx_7 << 2))) s>> 0x10
        int32_t ecx_6 = *(esi_1 + (ecx_5 << 2))
        uint32_t ecx_8 = zx.d(*var_18)
        char* ebx_13
        ebx_13.b = result[ecx_8 + ebx_9]
        *(edx_2 + 2) = ebx_13.b
        char* ebx_14
        ebx_14.b = result[ecx_8 + esi_6]
        *(edx_2 + 1) = ebx_14.b
        char* ecx_9
        ecx_9.b = result[ecx_8 + ecx_6]
        *edx_2 = ecx_9.b
        uint32_t ecx_11 = zx.d(var_18[1])
        var_18 = &var_18[2]
        char* ebx_16
        ebx_16.b = result[ecx_11 + ebx_9]
        *(edx_2 + 5) = ebx_16.b
        char* ebx_17
        ebx_17.b = result[ecx_11 + esi_6]
        *(edx_2 + 4) = ebx_17.b
        char* ecx_12
        ecx_12.b = result[ecx_11 + ecx_6]
        *(edx_2 + 3) = ecx_12.b
        edx_2 += 6
    
    if ((*(arg3 + 0x6c) & 1) != 0)
        uint32_t ecx_15 = zx.d(*var_1c)
        uint32_t ebx_20 = zx.d(*var_20)
        int32_t esi_10 = (*(ebx_1 + (ecx_15 << 2)) + *(esi_2 + (ebx_20 << 2))) s>> 0x10
        int32_t ecx_16 = *(esi_1 + (ecx_15 << 2))
        uint32_t ecx_18 = zx.d(*var_18)
        char* ebx_26
        ebx_26.b = result[ecx_18 + *(esi + (ebx_20 << 2))]
        *(edx_2 + 2) = ebx_26.b
        char* ebx_27
        ebx_27.b = result[ecx_18 + esi_10]
        *(edx_2 + 1) = ebx_27.b
        result.b = result[ecx_18 + ecx_16]
        *edx_2 = result.b
    
    return result
}
