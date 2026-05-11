// ============================================================
// 函数名称: sub_4c9488
// 虚拟地址: 0x4c9488
// WARP GUID: e4312dec-681e-53b0-9f2b-fa71bc7ee105
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f2e8c, sub_516e74, sub_4cbf78
// [被调用的父级函数]: sub_524d14
// ============================================================

int32_tsub_4c9488()
{
    // 第一条实际指令: *data_5300d0 = *(*data_5301f4 + 0x456c)
    *data_5300d0 = *(*data_5301f4 + 0x456c)
    sub_4f2e8c(0)
    int32_t result = sub_4cbf78(data_53099c)
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        void* ebx_1 = data_5301b0
        int32_t i
        
        do
            result = sub_516e74(ebx_1)
            ebx_1 += 0x8d14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
