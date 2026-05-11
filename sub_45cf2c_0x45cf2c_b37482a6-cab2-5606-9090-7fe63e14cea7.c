// ============================================================
// 函数名称: sub_45cf2c
// 虚拟地址: 0x45cf2c
// WARP GUID: b37482a6-cab2-5606-9090-7fe63e14cea7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45d134
// ============================================================

int32_t* __fastcallsub_45cf2c(int32_t* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t* var_14 = *arg4
    int32_t* result = arg1
    
    while (*(arg3 + 0x12a) s> i)
        char* esi_1 = *result
        char* ecx = *var_14
        int32_t edx_1
        edx_1.b = *esi_1
        void* esi_2 = &esi_1[1]
        *ecx = edx_1.b
        int32_t ebx_1
        ebx_1.b = *esi_2
        ecx[1] = ((edx_1 * 3 + ebx_1 + 2) s>> 2).b
        void* ecx_2 = &ecx[2]
        int32_t j = *(arg2 + 0x28) - 2
        
        while (j u> 0)
            int32_t edx_7
            edx_7.b = *esi_2
            esi_2 += 1
            j -= 1
            int32_t ebx_2
            ebx_2.b = *(esi_2 - 2)
            int32_t edx_8 = edx_7 * 3
            *ecx_2 = ((ebx_2 + edx_8 + 1) s>> 2).b
            int32_t ebx_6
            ebx_6.b = *esi_2
            *(ecx_2 + 1) = ((edx_8 + ebx_6 + 2) s>> 2).b
            ecx_2 += 2
        
        int32_t edx_12
        edx_12.b = *esi_2
        *ecx_2 = ((edx_12 * 3 + zx.d(*(esi_2 - 1)) + 1) s>> 2).b
        *(ecx_2 + 1) = edx_12.b
        i += 1
        var_14 = &var_14[1]
        result = &result[1]
    
    return result
}
