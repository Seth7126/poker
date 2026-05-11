// ============================================================
// 函数名称: sub_433680
// 虚拟地址: 0x433680
// WARP GUID: 17ae342f-7af3-5d3a-b0af-57da7d6d859c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4336a8
// ============================================================

int32_tsub_433680(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    for (void* i = *(*(arg1 - 4) + 0x14); i != 0; i = *(i + 0x14))
        if (*(i + 0xc) != 0)
            result.b = 1
            break
    
    return result
}
