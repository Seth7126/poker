// ============================================================
// 函数名称: sub_463894
// 虚拟地址: 0x463894
// WARP GUID: 96e52bae-455e-536e-9df1-3dfb06a07f09
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46390c
// ============================================================

int32_t __fastcallsub_463894(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = *(arg3 + 0x34)
    int32_t ebx = *(arg3 + 0x34)
    int32_t result = *(arg3 + 0x18)
    int32_t result_1 = result
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        int32_t result_2 = 0
        int32_t* var_14_1 = arg1
        result = 0
        
        if (0 s< ebx)
            do
                int32_t edi_1 = 0
                char* esi_1 = *arg2
                char* eax_3 = *(*var_14_1 + (arg5 << 2))
                
                if (0 u< result_1)
                    do
                        edi_1 += 1
                        int32_t ebx_2
                        ebx_2.b = esi_1[result_2]
                        *eax_3 = ebx_2.b
                        eax_3 = &eax_3[1]
                        esi_1 = &esi_1[ebx]
                    while (edi_1 u< result_1)
                
                result_2 += 1
                var_14_1 = &var_14_1[1]
                result = result_2
            while (result s< ebx)
        
        arg2 = &arg2[1]
        arg5 += 1
    
    return result
}
