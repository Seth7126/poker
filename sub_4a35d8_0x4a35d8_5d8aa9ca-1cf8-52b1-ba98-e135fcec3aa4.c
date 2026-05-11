// ============================================================
// 函数名称: sub_4a35d8
// 虚拟地址: 0x4a35d8
// WARP GUID: 5d8aa9ca-1cf8-52b1-ba98-e135fcec3aa4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a35d8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = arg2.b
    bool o = unimplemented  {imul eax, eax, 0x3}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(arg1 + eax * 0xc + 0x50) == 1 && *(arg1 + 0x42) != 0)
        *(arg1 + 0x44)
        (*(arg1 + 0x40))()
    
    int32_t eax_3
    eax_3.b = arg2.b
    int32_t result = eax_3 * 3
    bool o_1 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t temp2 = *(arg1 + (result << 2) + 0x50)
    *(arg1 + (result << 2) + 0x50) -= 1
    
    if (not(add_overflow(temp2, 0xffffffff)))
        return result
    
    sub_403010()
    noreturn
}
