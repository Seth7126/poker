// ============================================================
// 函数名称: sub_44836c
// 虚拟地址: 0x44836c
// WARP GUID: 2eb8fe9d-107d-5c01-9d57-5f71f13ea7ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_447248
// [被调用的父级函数]: sub_42aa4c
// ============================================================

int32_t __convention("regparm")sub_44836c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x38))
    if (arg2 == *(arg1 + 0x38))
        *(arg1 + 0x38) = 0
    
    if (arg2 == *(arg1 + 0x3c))
        *(arg1 + 0x3c) = 0
    
    if (arg2 == *(data_5317dc + 0x58))
        *(data_5317dc + 0x58) = 0
    
    if (arg2 == *(data_5317dc + 0x5c))
        *(data_5317dc + 0x5c) = 0
        *(data_5317dc + 0x60) = 0
    
    if (arg2 == *(data_5317dc + 0x6c))
        *(data_5317dc + 0x6c) = 0
    
    if (arg2 == *(arg1 + 0x50))
        *(arg1 + 0x50) = 0
    
    return sub_447248(data_5317dc)
}
