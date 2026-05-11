// ============================================================
// 函数名称: sub_449e50
// 虚拟地址: 0x449e50
// WARP GUID: 88681421-fa5a-513f-b632-5ffdad5c7936
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos
// [内部子函数调用]: sub_449e84, sub_449d24, sub_44a0a0
// [被调用的父级函数]: sub_447cf8
// ============================================================

int32_t __convention("regparm")sub_449e50(BOOL arg1)
{
    // 第一条实际指令: sub_449d24(arg1)
    sub_449d24(arg1)
    char eax_1 = *(arg1 + 0x79)
    char temp0 = eax_1
    
    if (temp0 u< 1)
        int32_t point
        GetCursorPos(&point)
        return sub_44a0a0(arg1, &point)
    
    if (temp0 != 1)
        return eax_1 - 1
    
    return sub_449e84(arg1)
}
