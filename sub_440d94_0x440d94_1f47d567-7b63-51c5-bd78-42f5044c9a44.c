// ============================================================
// 函数名称: sub_440d94
// 虚拟地址: 0x440d94
// WARP GUID: 1f47d567-7b63-51c5-bd78-42f5044c9a44
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyState
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42cd94, sub_4307fc, sub_42cb24, sub_425fce, sub_42ce08
// ============================================================

int32_t __convention("regparm")sub_440d94(int16_t arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 0
    
    if ((arg1 & 4) != 0)
        result.b = 1
    
    if ((arg1 & 8) != 0)
        result.b |= 4
    
    if ((arg1 & 1) != 0)
        result.b |= 8
    
    if ((arg1 & 2) != 0)
        result.b |= 0x10
    
    if ((arg1 & 0x10) != 0)
        result.b |= 0x20
    
    if (GetKeyState(0x12) s< 0)
        result.b |= 2
    
    return result
}
