// ============================================================
// 函数名称: sub_458c40
// 虚拟地址: 0x458c40
// WARP GUID: 43ad60c9-5a9c-5e16-8c5f-0af660db023d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458dd0
// ============================================================

char* __fastcallsub_458c40(int32_t arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    char* result = *(arg3 + 0x6c)
    char* result_1 = result
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        int32_t edi_1 = 0
        result = *(*arg2 + (arg1 << 2))
        char* esi_1 = *arg5
        arg1 += 1
        arg5 = &arg5[1]
        
        if (0 u< result_1)
            do
                int32_t* ebx_1
                ebx_1.b = *result
                edi_1 += 1
                esi_1[2] = ebx_1.b
                ebx_1.b = *result
                esi_1[1] = ebx_1.b
                ebx_1.b = *result
                result = &result[1]
                *esi_1 = ebx_1.b
                esi_1 = &esi_1[3]
            while (edi_1 u< result_1)
    
    return result
}
