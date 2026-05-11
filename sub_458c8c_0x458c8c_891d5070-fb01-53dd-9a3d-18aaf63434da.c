// ============================================================
// 函数名称: sub_458c8c
// 虚拟地址: 0x458c8c
// WARP GUID: 891d5070-fb01-53dd-9a3d-18aaf63434da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458dd0
// ============================================================

char* __fastcallsub_458c8c(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    void* edx = *(arg3 + 0x1ba)
    int32_t ecx = *(arg3 + 0x6c)
    char* ecx_1 = *(arg3 + 0x136)
    int32_t eax = *(edx + 8)
    int32_t eax_1 = *(edx + 0xc)
    char* result = *(edx + 0x10)
    char* result_1 = result
    int32_t edx_1 = *(edx + 0x14)
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        char* edx_3 = *(*arg2 + (var_c << 2))
        char* ebx_2 = *(arg2[1] + (var_c << 2))
        char* eax_8 = *(arg2[2] + (var_c << 2))
        char* esi_3 = *(arg2[3] + (var_c << 2))
        var_c += 1
        result = *arg5
        arg5 = &arg5[1]
        int32_t var_1c_1 = 0
        char* var_40_1 = esi_3
        char* var_3c_1 = eax_8
        char* var_38_1 = ebx_2
        char* var_34_1 = edx_3
        
        if (0 u< ecx)
            do
                uint32_t edx_5 = zx.d(*var_34_1)
                uint32_t ebx_4 = zx.d(*var_38_1)
                uint32_t ebx_6 = zx.d(*var_3c_1)
                int32_t ebx_9
                ebx_9.b = ecx_1[0xff - (*(eax + (ebx_6 << 2)) + edx_5)]
                *result = ebx_9.b
                int32_t ebx_14
                ebx_14.b = ecx_1[0xff
                    - (((*(edx_1 + (ebx_4 << 2)) + *(result_1 + (ebx_6 << 2))) s>> 0x10) + edx_5)]
                result[1] = ebx_14.b
                int32_t edx_6
                edx_6.b = ecx_1[0xff - (edx_5 + *(eax_1 + (ebx_4 << 2)))]
                result[2] = edx_6.b
                char* edx_7
                edx_7.b = *var_40_1
                result[3] = edx_7.b
                result = &result[4]
                var_1c_1 += 1
                var_40_1 = &var_40_1[1]
                var_3c_1 = &var_3c_1[1]
                var_38_1 = &var_38_1[1]
                var_34_1 = &var_34_1[1]
            while (var_1c_1 u< ecx)
    
    return result
}
