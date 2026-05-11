// ============================================================
// 函数名称: sub_463848
// 虚拟地址: 0x463848
// WARP GUID: 192a48ab-caad-5901-b400-74a086790764
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46390c
// ============================================================

char* __fastcallsub_463848(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = *(arg3 + 0x18)
    int32_t ebx = *(arg3 + 0x18)
    char* result = *(arg3 + 0x20)
    char* result_1 = result
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        char* esi_1 = *arg2
        arg2 = &arg2[1]
        result = *(*arg1 + (arg5 << 2))
        int32_t edi_1 = 0
        arg5 += 1
        
        if (0 u< ebx)
            do
                int32_t ebx_1
                ebx_1.b = *esi_1
                edi_1 += 1
                *result = ebx_1.b
                result = &result[1]
                esi_1 += result_1
            while (edi_1 u< ebx)
    
    return result
}
