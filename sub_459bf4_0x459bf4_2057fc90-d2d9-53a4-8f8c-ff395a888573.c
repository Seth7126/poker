// ============================================================
// 函数名称: sub_459bf4
// 虚拟地址: 0x459bf4
// WARP GUID: 2057fc90-d2d9-53a4-8f8c-ff395a888573
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45acb4
// ============================================================

int32_t __fastcallsub_459bf4(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t ebx = *(*(arg3 + 0x1be) + 0x18)
    int32_t ebx = *(*(arg3 + 0x1be) + 0x18)
    int32_t i_1 = *(arg3 + 0x6c)
    int32_t result_1 = 0
    int32_t* var_10 = arg2
    int32_t result = 0
    
    if (0 s< arg4)
        do
            void* eax = *var_10
            
            for (int32_t i = i_1; i u> 0; i -= 1)
                int32_t edx_1
                edx_1.b = *eax
                int16_t* edx_5 = *(ebx + (edx_1 s>> 3 << 2)) + (zx.d(*(eax + 1)) s>> 2 << 6)
                    + (zx.d(*(eax + 2)) s>> 3) * 2
                *edx_5 += 1
                int32_t esi_6
                esi_6.w = *edx_5
                
                if (esi_6.w u<= 0)
                    *edx_5 -= 1
                
                eax += 3
            
            result_1 += 1
            var_10 = &var_10[1]
            result = result_1
        while (result s< arg4)
    
    return result
}
