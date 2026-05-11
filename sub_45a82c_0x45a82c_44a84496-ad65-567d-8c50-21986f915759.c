// ============================================================
// 函数名称: sub_45a82c
// 虚拟地址: 0x45a82c
// WARP GUID: 44a84496-ad65-567d-8c50-21986f915759
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45a74c
// [被调用的父级函数]: sub_45acb4
// ============================================================

int16_t* __fastcallsub_45a82c(int16_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_2 = *(*(arg3 + 0x1be) + 0x18)
    int32_t eax_2 = *(*(arg3 + 0x1be) + 0x18)
    int32_t i_1 = *(arg3 + 0x6c)
    int32_t var_18 = 0
    int16_t* result_1 = arg1
    int32_t* var_24 = arg2
    int16_t* result = nullptr
    
    if (0 s< arg4)
        do
            result = result_1
            char* ebx_1 = *var_24
            char* var_10_1 = *result
            
            for (int32_t i = i_1; i u> 0; i -= 1)
                int32_t eax_4
                eax_4.b = *ebx_1
                result = eax_4 s>> 3
                int32_t edx_2
                edx_2.b = ebx_1[1]
                int32_t edx_3 = edx_2 s>> 2
                int32_t ecx_1
                ecx_1.b = ebx_1[2]
                int32_t ecx_2 = ecx_1 s>> 3
                ebx_1 = &ebx_1[3]
                int16_t* esi_3 = *(eax_2 + (result << 2)) + (edx_3 << 6) + ecx_2 * 2
                
                if (*esi_3 == 0)
                    sub_45a74c(edx_3, result, arg3, ecx_2)
                
                result.b = *esi_3
                result.b -= 1
                *var_10_1 = result.b
                var_10_1 = &var_10_1[1]
            
            var_18 += 1
            result_1 = &result_1[2]
            var_24 = &var_24[1]
        while (var_18 s< arg4)
    
    return result
}
