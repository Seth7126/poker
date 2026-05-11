// ============================================================
// 函数名称: sub_45a394
// 虚拟地址: 0x45a394
// WARP GUID: d58a846b-0cc7-56ef-9ae0-1e41d02e9a1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45a74c
// ============================================================

int32_t __fastcallsub_45a394(int32_t arg1, int32_t arg2, void* arg3 @ eax, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x80)
    int32_t edx = *(arg3 + 0x80)
    int32_t var_30 = 0x7fffffff
    int32_t var_2c = 0
    void var_440
    void* var_40 = &var_440
    char* var_3c = *(*(arg3 + 0x84) + 8)
    char* var_38 = *(*(arg3 + 0x84) + 4)
    char* var_34 = **(arg3 + 0x84)
    
    if (0 s< edx)
        do
            int32_t ebx_1
            ebx_1.b = *var_34
            int32_t ecx_12
            int32_t edx_14
            
            if (ebx_1 s< arg2)
                int32_t eax_3 = ebx_1 - arg2
                edx_14 = eax_3 * eax_3
                int32_t eax_5 = ebx_1 - (arg2 + 0x18)
                ecx_12 = eax_5 * eax_5
            else if (ebx_1 s<= arg2 + 0x18)
                edx_14 = 0
                
                if (ebx_1 s> (arg2 * 2 + 0x18) s>> 1)
                    int32_t eax_13 = ebx_1 - arg2
                    ecx_12 = eax_13 * eax_13
                else
                    int32_t eax_11 = ebx_1 - (arg2 + 0x18)
                    ecx_12 = eax_11 * eax_11
            else
                int32_t eax_7 = ebx_1 - (arg2 + 0x18)
                edx_14 = eax_7 * eax_7
                int32_t eax_9 = ebx_1 - arg2
                ecx_12 = eax_9 * eax_9
            
            int32_t ebx_2
            ebx_2.b = *var_38
            int32_t ecx_16
            
            if (ebx_2 s< arg1)
                int32_t eax_17 = (ebx_2 - arg1) * 3
                int32_t eax_18 = (ebx_2 - (arg1 + 0x1c)) * 3
                edx_14 += eax_17 * eax_17
                ecx_16 = ecx_12 + eax_18 * eax_18
            else if (ebx_2 s> arg1 + 0x1c)
                int32_t eax_21 = (ebx_2 - (arg1 + 0x1c)) * 3
                int32_t eax_22 = (ebx_2 - arg1) * 3
                edx_14 += eax_21 * eax_21
                ecx_16 = ecx_12 + eax_22 * eax_22
            else if (ebx_2 s> (arg1 * 2 + 0x1c) s>> 1)
                int32_t eax_24 = (ebx_2 - arg1) * 3
                ecx_16 = ecx_12 + eax_24 * eax_24
            else
                int32_t eax_23 = (ebx_2 - (arg1 + 0x1c)) * 3
                ecx_16 = ecx_12 + eax_23 * eax_23
            
            int32_t ebx_15
            ebx_15.b = *var_3c
            int32_t ecx_17
            
            if (ebx_15 s< arg5)
                int32_t eax_28 = (ebx_15 - arg5) * 2
                edx_14 += eax_28 * eax_28
                int32_t eax_31 = (ebx_15 - (arg5 + 0x18)) * 2
                ecx_17 = ecx_16 + eax_31 * eax_31
            else if (ebx_15 s> arg5 + 0x18)
                int32_t eax_34 = (ebx_15 - (arg5 + 0x18)) * 2
                edx_14 += eax_34 * eax_34
                int32_t eax_37 = (ebx_15 - arg5) * 2
                ecx_17 = ecx_16 + eax_37 * eax_37
            else if (ebx_15 s> (arg5 * 2 + 0x18) s>> 1)
                int32_t eax_43 = (ebx_15 - arg5) * 2
                ecx_17 = ecx_16 + eax_43 * eax_43
            else
                int32_t eax_40 = (ebx_15 - (arg5 + 0x18)) * 2
                ecx_17 = ecx_16 + eax_40 * eax_40
            
            *var_40 = edx_14
            
            if (ecx_17 s< var_30)
                var_30 = ecx_17
            
            var_2c += 1
            var_40 += 4
            var_3c = &var_3c[1]
            var_38 = &var_38[1]
            var_34 = &var_34[1]
        while (var_2c s< edx)
    
    int32_t result = 0
    int32_t var_2c_1 = 0
    void* eax_45 = &var_440
    char* edx_17 = arg4
    
    if (0 s< edx)
        do
            if (*eax_45 s<= var_30)
                int32_t ebx_24
                ebx_24.b = var_2c_1.b
                result += 1
                *edx_17 = ebx_24.b
                edx_17 = &edx_17[1]
            
            var_2c_1 += 1
            eax_45 += 4
        while (var_2c_1 s< edx)
    
    return result
}
