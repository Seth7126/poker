// ============================================================
// 函数名称: sub_50d9e0
// 虚拟地址: 0x50d9e0
// WARP GUID: 5a7ec21e-bfc1-50f5-8e8a-3d1f898f3796
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_516c3c, sub_4d6ac0, sub_509af8, sub_50d988, sub_507dbc, sub_507d3f, sub_4dad04, sub_511bec, sub_4e649b
// ============================================================

void* const __convention("regparm")sub_50d9e0(void* const arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    arg1.b = *(arg1 + 0x1b1f6)
    
    if (arg1.b == 0)
        arg1.b = 1
    else
        char temp0_1 = arg1.b
        arg1.b -= 9
        
        if (temp0_1 == 9)
            arg1.b = 1
        else
            arg1 = nullptr
    
    arg1.b ^= 1
    return arg1
}
