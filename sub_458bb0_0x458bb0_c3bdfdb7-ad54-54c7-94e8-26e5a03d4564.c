// ============================================================
// 函数名称: sub_458bb0
// 虚拟地址: 0x458bb0
// WARP GUID: c3bdfdb7-ad54-54c7-94e8-26e5a03d4564
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458dd0
// ============================================================

int32_t __fastcallsub_458bb0(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ebx = *(arg3 + 0x20)
    int32_t ebx = *(arg3 + 0x20)
    int32_t result = *(arg3 + 0x6c)
    int32_t var_c = result
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        int32_t result_1 = 0
        int32_t* var_14_1 = arg2
        result = 0
        
        if (0 s< ebx)
            do
                int32_t i = var_c
                char* esi_2 = *arg5 + result_1
                char* eax_3 = *(*var_14_1 + (arg1 << 2))
                
                for (; i u> 0; i -= 1)
                    int32_t* ebx_1
                    ebx_1.b = *eax_3
                    *esi_2 = ebx_1.b
                    eax_3 = &eax_3[1]
                    esi_2 = &esi_2[ebx]
                
                result_1 += 1
                var_14_1 = &var_14_1[1]
                result = result_1
            while (result s< ebx)
        
        arg1 += 1
        arg5 = &arg5[1]
    
    return result
}
