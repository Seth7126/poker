// ============================================================
// 函数名称: sub_491d44
// 虚拟地址: 0x491d44
// WARP GUID: 30e9e1d3-2ed9-51e1-8f79-d1817c4428ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_491cd4, sub_491d94, sub_491d6c
// ============================================================

int32_t __convention("regparm")sub_491d44(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t edx = 0
    
    do
        int32_t ecx_1
        ecx_1.b = edx.b
        
        if (*(arg1 + ecx_1 * 0x10 + 0x1f8) != 0)
            result += 1
        
        edx += 1
    while (edx.b != 9)
    
    if (result != 0)
        return result
    
    return result + 1
}
