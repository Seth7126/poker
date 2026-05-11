// ============================================================
// 函数名称: sub_449cec
// 虚拟地址: 0x449cec
// WARP GUID: 493b560e-664c-58ae-83e1-c9288d92c597
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetTimer
// [内部子函数调用]: sub_449ec0, sub_449d24
// [被调用的父级函数]: sub_449d44, sub_44a0a0
// ============================================================

int32_t __convention("regparm")sub_449cec(BOOL arg1, uint32_t arg2, char arg3)
{
    // 第一条实际指令: sub_449d24(arg1)
    sub_449d24(arg1)
    int16_t result = SetTimer(nullptr, 0, arg2, sub_447cf8)
    *(arg1 + 0x7a) = result
    *(arg1 + 0x79) = arg3
    
    if (*(arg1 + 0x7a) != 0)
        return result
    
    return sub_449ec0(arg1)
}
