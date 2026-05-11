// ============================================================
// 函数名称: sub_440e24
// 虚拟地址: 0x440e24
// WARP GUID: e6bd8ff7-cdc4-5599-9432-5a627bfcb7dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f268
// ============================================================

int32_t __convention("regparm")sub_440e24(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 0
    
    if ((*(arg1 + 0x10) & 0x80) != 0)
        result.b = 1
    
    if ((*(arg1 + 0x11) & 0x80) != 0)
        result.b |= 4
    
    if ((*(arg1 + 0x12) & 0x80) != 0)
        result.b |= 2
    
    if ((*(arg1 + 1) & 0x80) != 0)
        result.b |= 8
    
    if ((*(arg1 + 2) & 0x80) != 0)
        result.b |= 0x10
    
    if ((*(arg1 + 4) & 0x80) != 0)
        result.b |= 0x20
    
    return result
}
