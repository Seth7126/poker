// ============================================================
// 函数名称: sub_463678
// 虚拟地址: 0x463678
// WARP GUID: 701e0817-dcb8-5c88-b7a2-15fe42d7121c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46390c
// ============================================================

void* __fastcallsub_463678(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg2
    int32_t* var_8 = arg2
    int32_t esi = *(*(arg3 + 0x155) + 8)
    void* result = *(arg3 + 0x18)
    void* result_1 = result
    
    while (true)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        result = *var_8
        var_8 = &var_8[1]
        char* ecx_1 = *(*arg1 + (arg5 << 2))
        arg5 += 1
        int32_t edx_4 = 0
        
        if (0 u< result_1)
            do
                edx_4 += 1
                int32_t ebx_1
                ebx_1.b = *(result + 2)
                int32_t ebx_2
                ebx_2.b = *(result + 1)
                int32_t ebx_3
                ebx_3.b = *result
                result += 3
                *ecx_1 = ((*(esi + (ebx_1 << 2)) + *(esi + (ebx_2 << 2) + 0x400)
                    + *(esi + (ebx_3 << 2) + 0x800)) s>> 0x10).b
                ecx_1 = &ecx_1[1]
            while (edx_4 u< result_1)
    
    return result
}
