// ============================================================
// 函数名称: sub_463704
// 虚拟地址: 0x463704
// WARP GUID: 678115f8-b6f1-5fb6-953b-bbc9c4467297
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46390c
// ============================================================

char* __fastcallsub_463704(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg2
    int32_t* var_8 = arg2
    int32_t esi = *(*(arg3 + 0x155) + 8)
    char* result = *(arg3 + 0x18)
    char* result_1 = result
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        result = *var_8
        var_8 = &var_8[1]
        char* edx_4 = *(*arg1 + (arg5 << 2))
        char* ecx_3 = *(arg1[1] + (arg5 << 2))
        char* ebx_4 = *(arg1[2] + (arg5 << 2))
        char* ebx_7 = *(arg1[3] + (arg5 << 2))
        arg5 += 1
        int32_t var_18_1 = 0
        char* var_2c_1 = ebx_4
        char* var_28_1 = ecx_3
        char* var_24_1 = edx_4
        char* var_20_1 = ebx_7
        
        if (0 u< result_1)
            do
                int32_t edx_6
                edx_6.b = *result
                int32_t ecx_5
                ecx_5.b = result[1]
                int32_t ebx_9
                ebx_9.b = result[2]
                char* ebx_10
                ebx_10.b = result[3]
                result = &result[4]
                *var_20_1 = ebx_10.b
                char ebx_14 = ((*(esi + ((0xff - edx_6) << 2)) + *(esi + ((0xff - ecx_5) << 2) + 0x400)
                    + *(esi + ((0xff - ebx_9) << 2) + 0x800)) s>> 0x10).b
                *var_24_1 = ebx_14
                char ebx_18 = ((*(esi + ((0xff - edx_6) << 2) + 0xc00)
                    + *(esi + ((0xff - ecx_5) << 2) + 0x1000)
                    + *(esi + ((0xff - ebx_9) << 2) + 0x1400)) s>> 0x10).b
                *var_28_1 = ebx_18
                char edx_11 = ((*(esi + ((0xff - edx_6) << 2) + 0x1400)
                    + *(esi + ((0xff - ecx_5) << 2) + 0x1800)
                    + *(esi + ((0xff - ebx_9) << 2) + 0x1c00)) s>> 0x10).b
                *var_2c_1 = edx_11
                var_18_1 += 1
                var_2c_1 = &var_2c_1[1]
                var_28_1 = &var_28_1[1]
                var_24_1 = &var_24_1[1]
                var_20_1 = &var_20_1[1]
            while (var_18_1 u< result_1)
    
    return result
}
