// ============================================================
// 函数名称: sub_45a5d4
// 虚拟地址: 0x45a5d4
// WARP GUID: b803e726-80d8-5e9f-ae5f-8e3a05bad993
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45a74c
// ============================================================

char* __fastcallsub_45a5d4(int32_t arg1, int32_t arg2, void* arg3 @ eax, char* arg4, char* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t i = 0x7f
    int32_t i = 0x7f
    void var_240
    void* ecx = &var_240
    
    do
        *ecx = 0x7fffffff
        ecx += 4
        i -= 1
    while (i s>= 0)
    
    int32_t var_1c = 0
    char* result = arg5
    char* result_1 = result
    
    if (0 s< arg6)
        do
            int32_t eax
            eax.b = *result_1
            int32_t* edx_2 = *(arg3 + 0x84)
            int32_t eax_4 = arg2 - zx.d(*(*edx_2 + eax))
            int32_t ecx_8 = (arg1 - zx.d(*(edx_2[1] + eax))) * 3
            int32_t ecx_14 = (arg7 - zx.d(*(edx_2[2] + eax))) * 2
            void* var_28_3 = eax_4 * eax_4 + ecx_8 * ecx_8 + ecx_14 * ecx_14
            void* ecx_18 = &var_240
            char* var_24_1 = arg4
            int32_t var_30_1 = (eax_4 << 4) + 0x40
            
            for (int32_t i_1 = 3; i_1 s>= 0; i_1 -= 1)
                void* var_2c_1 = var_28_3
                char* result_2 = ecx_8 * 0x18 + 0x90
                
                for (int32_t j = 7; j s>= 0; j -= 1)
                    void* esi_1 = var_2c_1
                    int32_t edx_12 = (ecx_14 << 5) + 0x100
                    
                    for (int32_t k = 3; k s>= 0; k -= 1)
                        if (esi_1 s< *ecx_18)
                            *ecx_18 = esi_1
                            int32_t ebx_3
                            ebx_3.b = eax.b
                            *var_24_1 = ebx_3.b
                        
                        esi_1 += edx_12
                        edx_12 += 0x200
                        ecx_18 += 4
                        var_24_1 = &var_24_1[1]
                    
                    result = result_2
                    var_2c_1 += result
                    result_2 = &result_2[0x120]
                
                var_28_3 += var_30_1
                var_30_1 += 0x80
            
            var_1c += 1
            result_1 = &result_1[1]
        while (var_1c s< arg6)
    
    return result
}
