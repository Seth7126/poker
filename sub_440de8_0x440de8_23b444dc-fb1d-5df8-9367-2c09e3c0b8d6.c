// ============================================================
// 函数名称: sub_440de8
// 虚拟地址: 0x440de8
// WARP GUID: 23b444dc-fb1d-5df8-9367-2c09e3c0b8d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyState
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_436850, sub_43057c, sub_425208, sub_43064c
// ============================================================

int32_t __convention("regparm")sub_440de8(int32_t arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 0
    
    if (GetKeyState(0x10) s< 0)
        result.b = 1
    
    if (GetKeyState(0x11) s< 0)
        result.b |= 4
    
    if ((arg1 & 0x20000000) != 0)
        result.b |= 2
    
    return result
}
