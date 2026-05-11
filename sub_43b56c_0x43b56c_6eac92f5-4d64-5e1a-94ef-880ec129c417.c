// ============================================================
// 函数名称: sub_43b56c
// 虚拟地址: 0x43b56c
// WARP GUID: 6eac92f5-4d64-5e1a-94ef-880ec129c417
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SystemParametersInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43b5b8
// ============================================================

BOOLsub_43b56c(void* arg1)
{
    // 第一条实际指令: int32_t pvParam = 0x154
    int32_t pvParam = 0x154
    BOOL result = SystemParametersInfoA(SPI_GETNONCLIENTMETRICS, 0, &pvParam, 0)
    
    if (result != 0)
        int32_t var_c0
        **(arg1 - 4) = var_c0
        result = *(arg1 + 8)
        int32_t var_bc
        *result = var_bc
    
    return result
}
