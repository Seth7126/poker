// ============================================================
// 函数名称: sub_463570
// 虚拟地址: 0x463570
// WARP GUID: bcb9fff8-31c1-5a11-a9ba-083373138425
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46390c
// ============================================================

void* __fastcallsub_463570(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
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
        char* edx_4 = *(*arg1 + (arg5 << 2))
        char* ecx_3 = *(arg1[1] + (arg5 << 2))
        char* ebx_4 = *(arg1[2] + (arg5 << 2))
        arg5 += 1
        int32_t var_14_1 = 0
        char* var_24_1 = ebx_4
        char* var_20_1 = ecx_3
        char* var_1c_1 = edx_4
        
        if (0 u< result_1)
            do
                int32_t edx_5
                edx_5.b = *(result + 2)
                int32_t ecx_4
                ecx_4.b = *(result + 1)
                int32_t ebx_5
                ebx_5.b = *result
                result += 3
                *var_1c_1 = ((*(esi + (edx_5 << 2)) + *(esi + (ecx_4 << 2) + 0x400)
                    + *(esi + (ebx_5 << 2) + 0x800)) s>> 0x10).b
                *var_20_1 = ((*(esi + (edx_5 << 2) + 0xc00) + *(esi + (ecx_4 << 2) + 0x1000)
                    + *(esi + (ebx_5 << 2) + 0x1400)) s>> 0x10).b
                *var_24_1 = ((*(esi + (edx_5 << 2) + 0x1400) + *(esi + (ecx_4 << 2) + 0x1800)
                    + *(esi + (ebx_5 << 2) + 0x1c00)) s>> 0x10).b
                var_14_1 += 1
                var_24_1 = &var_24_1[1]
                var_20_1 = &var_20_1[1]
                var_1c_1 = &var_1c_1[1]
            while (var_14_1 u< result_1)
    
    return result
}
