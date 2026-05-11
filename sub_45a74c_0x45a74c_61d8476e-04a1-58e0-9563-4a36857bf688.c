// ============================================================
// 函数名称: sub_45a74c
// 虚拟地址: 0x45a74c
// WARP GUID: 61d8476e-04a1-58e0-9563-4a36857bf688
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45a5d4, sub_45a394
// [被调用的父级函数]: sub_45a82c, sub_45a8f8
// ============================================================

int16_t* __fastcallsub_45a74c(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t edx = *(*(arg3 + 0x1be) + 0x18)
    int32_t edx = *(*(arg3 + 0x1be) + 0x18)
    int32_t var_8_1 = arg2 s>> 2
    int32_t var_c_1 = arg1 s>> 3
    arg4 s>>= 2
    char var_198[0x80]
    char var_118[0x100]
    sub_45a5d4((var_c_1 << 5) + 2, (var_8_1 << 5) + 4, arg3, &var_198, &var_118, 
        sub_45a394((var_c_1 << 5) + 2, (var_8_1 << 5) + 4, arg3, &var_118, (arg4 << 5) + 4), 
        (arg4 << 5) + 4)
    int32_t var_8_2 = var_8_1 << 2
    int32_t var_c_2 = var_c_1 << 3
    char (* ecx_2)[0x80] = &var_198
    int16_t* result
    
    for (int32_t i = 0; i s< 4; i += 1)
        for (int32_t j = 0; j s< 8; j += 1)
            result = *(edx + ((var_8_2 + i) << 2)) + ((var_c_2 + j) << 6) + arg4 * 8
            
            for (int32_t k = 0; k s< 4; k += 1)
                *result = zx.w(*ecx_2) + 1
                ecx_2 = &(*ecx_2)[1]
                result = &result[1]
    
    return result
}
