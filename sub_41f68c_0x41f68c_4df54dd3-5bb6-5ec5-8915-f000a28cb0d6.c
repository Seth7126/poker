// ============================================================
// 函数名称: sub_41f68c
// 虚拟地址: 0x41f68c
// WARP GUID: 4df54dd3-5bb6-5ec5-8915-f000a28cb0d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSystemMetrics
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41f68c(void* arg1)
{
    // 第一条实际指令: int32_t result = *(*(arg1 + 0x20) + 0x14)
    int32_t result = *(*(arg1 + 0x20) + 0x14)
    
    if (result != 0)
        return result
    
    return GetSystemMetrics(SM_CYICON)
}
