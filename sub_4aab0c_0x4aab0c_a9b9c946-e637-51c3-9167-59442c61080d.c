// ============================================================
// 函数名称: sub_4aab0c
// 虚拟地址: 0x4aab0c
// WARP GUID: a9b9c946-e637-51c3-9167-59442c61080d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ab790
// ============================================================

int32_t __convention("regparm")sub_4aab0c(char arg1) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    var_4.b = arg1
    int32_t result = 0
    
    if ((var_4.b & 1) != 0)
        result = 1
    
    if ((var_4.b & 2) != 0)
        result |= 2
    
    if ((var_4.b & 4) == 0)
        return result
    
    return result | 4
}
