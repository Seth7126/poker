// ============================================================
// 函数名称: sub_4a30d8
// 虚拟地址: 0x4a30d8
// WARP GUID: 356e9873-adef-5f79-980f-2103354e11e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49e5ec
// [被调用的父级函数]: sub_4a8f18, sub_4a3090, sub_4a8ea2, sub_4a3e6c, sub_4a90cc
// ============================================================

uint32_tsub_4a30d8()
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (data_52fbf8 != 0)
        result = sub_49e5ec()
    
    if (data_52fbf8 != 0 && result.b != 0)
        result.b = 1
    else
        result = 0
    
    if (result.b != 0)
        result.b = *(data_52fbf8 + 0x24)
    
    return result
}
