// ============================================================
// 函数名称: sub_458aa8
// 虚拟地址: 0x458aa8
// WARP GUID: d502119b-9cb0-58da-91f3-7a7fa2ec58e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458dd0
// ============================================================

void* __fastcallsub_458aa8(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    void* edx = *(arg3 + 0x1ba)
    int32_t ecx = *(arg3 + 0x6c)
    int32_t ecx_1 = *(arg3 + 0x136)
    int32_t eax = *(edx + 8)
    int32_t eax_1 = *(edx + 0xc)
    void* result = *(edx + 0x10)
    void* result_1 = result
    int32_t edx_1 = *(edx + 0x14)
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        char* edx_3 = *(*arg2 + (var_c << 2))
        char* ebx_2 = *(arg2[1] + (var_c << 2))
        char* esi_2 = *(arg2[2] + (var_c << 2))
        var_c += 1
        result = *arg5
        arg5 = &arg5[1]
        int32_t var_18_1 = 0
        char* var_38_1 = esi_2
        char* var_34_1 = ebx_2
        char* var_30_1 = edx_3
        
        if (0 u< ecx)
            do
                uint32_t edx_5 = zx.d(*var_30_1)
                uint32_t ebx_4 = zx.d(*var_34_1)
                uint32_t ebx_6 = zx.d(*var_38_1)
                int32_t ebx_8
                ebx_8.b = (ecx_1 + edx_5)[*(eax + (ebx_6 << 2))]
                *(result + 2) = ebx_8.b
                int32_t ebx_12
                ebx_12.b =
                    (ecx_1 + edx_5)[(*(edx_1 + (ebx_4 << 2)) + *(result_1 + (ebx_6 << 2))) s>> 0x10]
                *(result + 1) = ebx_12.b
                char* edx_6
                edx_6.b = (ecx_1 + edx_5)[*(eax_1 + (ebx_4 << 2))]
                *result = edx_6.b
                result += 3
                var_18_1 += 1
                var_38_1 = &var_38_1[1]
                var_34_1 = &var_34_1[1]
                var_30_1 = &var_30_1[1]
            while (var_18_1 u< ecx)
    
    return result
}
