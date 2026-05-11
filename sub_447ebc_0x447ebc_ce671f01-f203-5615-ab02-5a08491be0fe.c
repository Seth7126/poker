// ============================================================
// 函数名称: sub_447ebc
// 虚拟地址: 0x447ebc
// WARP GUID: ce671f01-f203-5615-ab02-5a08491be0fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SystemParametersInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_447f14
// ============================================================

BOOLsub_447ebc()
{
    // 第一条实际指令: int32_t pvParam = 8
    int32_t pvParam = 8
    
    if (SystemParametersInfoA(SPI_GETANIMATION, 8, &pvParam, 0) == 0)
        return 0
    
    int32_t var_4
    BOOL result
    result.b = var_4 != 0
    return result
}
