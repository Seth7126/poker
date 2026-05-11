// ============================================================
// 函数名称: sub_4c1e14
// 虚拟地址: 0x4c1e14
// WARP GUID: d7fa6b68-7bc9-5ce9-bfe9-4d2f67b20089
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8
// [被调用的父级函数]: sub_527454, sub_4cf900, sub_503984, sub_52ba68
// ============================================================

int32_tsub_4c1e14()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (*(*data_5301f4 + 4) == 7)
        if (sub_4c2be8(1) == 0)
            result.b = 1
        
        if (*(*data_530304 + 0xce0) != 0 && *(data_530598 + 0x18) == 6)
            result.b = 1
    
    return result
}
