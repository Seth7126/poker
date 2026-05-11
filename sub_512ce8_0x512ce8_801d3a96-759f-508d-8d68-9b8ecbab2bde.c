// ============================================================
// 函数名称: sub_512ce8
// 虚拟地址: 0x512ce8
// WARP GUID: 801d3a96-759f-508d-8d68-9b8ecbab2bde
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50a53c, sub_403010
// [被调用的父级函数]: sub_5223e8, sub_520efc, sub_4c5eb0
// ============================================================

int32_t __convention("regparm")sub_512ce8(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = sub_50a53c(arg2) * 0xe9
    int32_t result = sub_50a53c(arg2) * 0xe9
    bool o = unimplemented  {imul eax, eax, 0xe9}
    
    if (o)
        sub_403010()
        noreturn
    
    result.b = *(arg1 + (result << 2) - 0x50)
    char temp1 = result.b
    result.b -= 3
    
    if (temp1 != 3)
        char temp2_1 = result.b
        result.b -= 2
        
        if (temp2_1 != 2)
            return 0
    
    result.b = 1
    return result
}
