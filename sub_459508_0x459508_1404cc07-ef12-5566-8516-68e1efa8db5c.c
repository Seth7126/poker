// ============================================================
// 函数名称: sub_459508
// 虚拟地址: 0x459508
// WARP GUID: 1404cc07-ef12-5566-8516-68e1efa8db5c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_459a70
// ============================================================

int32_t __fastcallsub_459508(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t* ebx_1 = *(*(arg3 + 0x1be) + 0x18)
    int32_t* ebx_1 = *(*(arg3 + 0x1be) + 0x18)
    int32_t result_1 = *(arg3 + 0x6c)
    int32_t eax = *(arg3 + 0x74)
    int32_t var_10 = 0
    int32_t* var_24 = arg1
    int32_t* var_20 = arg2
    int32_t result = 0
    
    if (0 s< arg4)
        do
            char* ecx = *var_20
            char* var_c_1 = *var_24
            result = result_1
            
            for (int32_t i = result; i u> 0; i -= 1)
                int32_t result_2 = 0
                int32_t edx_2 = 0
                int32_t* eax_2 = ebx_1
                
                if (0 s< eax)
                    do
                        void* edi_1 = *eax_2
                        int32_t ebx_2
                        ebx_2.b = *ecx
                        ecx = &ecx[1]
                        eax_2 = &eax_2[1]
                        edx_2 += 1
                        result_2 += zx.d(*(edi_1 + ebx_2))
                    while (edx_2 s< eax)
                
                result = result_2
                *var_c_1 = result.b
                var_c_1 = &var_c_1[1]
            
            var_10 += 1
            var_24 = &var_24[1]
            var_20 = &var_20[1]
        while (var_10 s< arg4)
    
    return result
}
