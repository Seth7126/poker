// ============================================================
// 函数名称: sub_4d5bdc
// 虚拟地址: 0x4d5bdc
// WARP GUID: af58b971-cafd-538e-bad7-11d4dcc92c4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ceed4, sub_4ce8e2, sub_4ce5b4, sub_4ce88a, sub_40e8c2, sub_4ce832
// ============================================================

int32_t __convention("regparm")sub_4d5bdc(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 5
    
    if (arg1 == 1)
        return 0
    
    if (arg1 == 5)
        result.b = 1
    else if (arg1 == 0xa)
        result.b = 2
    else if (arg1 == 0x19)
        result.b = 3
    else if (arg1 == 0x64)
        result.b = 4
    else if (arg1 == 0xffffff91)
        result.b = 6
    
    return result
}
