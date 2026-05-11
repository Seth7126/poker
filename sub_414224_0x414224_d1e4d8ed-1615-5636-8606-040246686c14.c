// ============================================================
// 函数名称: sub_414224
// 虚拟地址: 0x414224
// WARP GUID: d1e4d8ed-1615-5636-8606-040246686c14
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_414430, sub_415210
// [被调用的父级函数]: sub_4148a8, sub_414aa0
// ============================================================

long double __convention("regparm")sub_414224(void* arg1)
{
    // 第一条实际指令: long double result
    long double result
    int32_t ecx
    
    if (sub_415210(ecx) != 5)
        *(arg1 + 0x10) -= 1
        result = float.t(sub_414430(arg1))
    else
        sub_413a6c(arg1, &result, 0xa)
    
    return result
}
