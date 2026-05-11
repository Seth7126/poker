// ============================================================
// 函数名称: sub_459644
// 虚拟地址: 0x459644
// WARP GUID: 8abcad96-8f01-5e9a-812d-5162832a9c8f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4533f4
// [被调用的父级函数]: sub_459a70
// ============================================================

void* __fastcallsub_459644(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* result_1 = *(arg3 + 0x1be)
    void* result_1 = *(arg3 + 0x1be)
    int32_t ebx = *(arg3 + 0x74)
    int32_t i_1 = *(arg3 + 0x6c)
    int32_t var_20 = 0
    int32_t* var_38 = arg2
    int32_t* var_28 = arg1
    void* result = nullptr
    
    if (0 s< arg4)
        do
            sub_4533f4(*var_28, 0, i_1)
            int32_t ecx_1 = *(result_1 + 0x30)
            int32_t var_1c_1 = 0
            void* var_34_1 = result_1 + 0x34
            
            if (0 s< ebx)
                do
                    char* ecx_5 = *var_28
                    char* edx_5 = *var_38 + var_1c_1
                    void* eax_6 = *(*(result_1 + 0x18) + (var_1c_1 << 2))
                    int32_t eax_9 = *var_34_1 + (ecx_1 << 6)
                    int32_t eax_10 = 0
                    int32_t i = i_1
                    
                    while (i u> 0)
                        int32_t ebx_4
                        ebx_4.b = *edx_5
                        i -= 1
                        int32_t ebx_7 = *(eax_9 + (eax_10 << 2))
                        eax_10 = (eax_10 + 1) & 0xf
                        ebx_7.b = (eax_6 + ebx_4)[ebx_7]
                        *ecx_5 += ebx_7.b
                        ecx_5 = &ecx_5[1]
                        edx_5 = &edx_5[ebx]
                    
                    var_1c_1 += 1
                    var_34_1 += 4
                while (var_1c_1 s< ebx)
            
            result = result_1
            *(result + 0x30) = (ecx_1 + 1) & 0xf
            var_20 += 1
            var_38 = &var_38[1]
            var_28 = &var_28[1]
        while (var_20 s< arg4)
    
    return result
}
