// ============================================================
// 函数名称: sub_471078
// 虚拟地址: 0x471078
// WARP GUID: b4623116-43e1-558e-a87b-139090c55bd7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_471144
// ============================================================

int32_t __convention("regparm")sub_471078(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 s>= 0x3e && arg1 s<= 0x42)
        result.b = 1
    
    if (arg1 s>= 0x7e && arg1 s<= 0x83)
        result.b = 1
    
    if (arg1 s>= 0xfd && arg1 s<= 0x106)
        result.b = 1
    
    if (arg1 s>= 0x1fc && arg1 s<= 0x208)
        result.b = 1
    
    if (arg1 s>= 0x3f8 && arg1 s<= 0x410)
        result.b = 1
    
    return result
}
