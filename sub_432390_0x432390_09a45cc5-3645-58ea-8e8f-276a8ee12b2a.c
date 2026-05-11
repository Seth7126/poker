// ============================================================
// 函数名称: sub_432390
// 虚拟地址: 0x432390
// WARP GUID: 09a45cc5-3645-58ea-8e8f-276a8ee12b2a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_432390(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x5c)
    int32_t* esi = *(arg1 + 0x5c)
    
    if (esi != 0 && (*(*esi + 0x2c))().b != 0)
        return 0
    
    arg1.b = 1
    return arg1
}
