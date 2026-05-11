// ============================================================
// 函数名称: sub_5244dc
// 虚拟地址: 0x5244dc
// WARP GUID: 9f258da9-299a-59e3-97d2-7370c52b6898
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_527454, sub_524d14
// ============================================================

int32_t __convention("regparm")sub_5244dc(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t i_1 = *(arg1 + 0x298)
    
    if (i_1 s> 0)
        void* ecx_1 = arg1 + 1
        char* esi_1 = arg2 + 1
        int32_t i
        
        do
            ebx.b = *ecx_1
            *esi_1 = ebx.b
            ebx.b = *(ecx_1 - 1)
            esi_1[0xffffffff] = ebx.b
            ebx.w = *(ecx_1 + 1)
            *(esi_1 + 1) = ebx.w
            esi_1 = &esi_1[0xd4]
            ecx_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg2 + 0x8978) = *(arg1 + 0x298)
    int32_t result = *(arg1 + 0x29c)
    *(arg2 + 0x897c) = result
    return result
}
