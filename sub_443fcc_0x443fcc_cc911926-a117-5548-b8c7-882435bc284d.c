// ============================================================
// 函数名称: sub_443fcc
// 虚拟地址: 0x443fcc
// WARP GUID: cc911926-a117-5548-b8c7-882435bc284d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b904, sub_430f7c, sub_443fb4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_443fcc(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_430f7c(arg1)
    int32_t result = sub_430f7c(arg1)
    
    if (*(arg1 + 0x138) != 0)
        result = sub_443fb4(arg1)
        
        if (result == *(arg1 + 0x60))
            return sub_42b904(arg1, 0x8000000f)
    else if (*(arg1 + 0x60) == 0x8000000f)
        return sub_42b904(arg1, sub_443fb4(arg1))
    
    return result
}
