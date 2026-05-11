// ============================================================
// 函数名称: sub_4413a0
// 虚拟地址: 0x4413a0
// WARP GUID: 32e21ed4-902c-52dc-a11c-3fca8316ef27
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_441400
// ============================================================

int32_tsub_4413a0(void* arg1)
{
    // 第一条实际指令: int32_t var_20 = 0x1c
    int32_t var_20 = 0x1c
    int32_t var_1c = 0x10
    int32_t ebx = 0
    
    if (*(*(arg1 - 4) + 0x18) == 1)
        ebx = 1
    
    int32_t esi_1 = sx.d(*(*(arg1 - 8) + 6))
    
    if ((*data_52ff98)(sub_4318d0(*(*(arg1 - 4) + 4)), ebx, &var_20) == 0)
        return esi_1
    
    int32_t var_8
    return var_8
}
