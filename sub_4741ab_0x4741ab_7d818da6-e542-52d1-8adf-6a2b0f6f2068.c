// ============================================================
// 函数名称: sub_4741ab
// 虚拟地址: 0x4741ab
// WARP GUID: 7d818da6-e542-52d1-8adf-6a2b0f6f2068
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4741ab(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char temp0 = *arg1
    char temp0 = *arg1
    *arg1 += arg1.b
    
    if (add_overflow(temp0, arg1.b))
        sub_403010()
        noreturn
    
    int32_t ecx_1 = sx.d(*(*(arg1 + 0xab0) + (arg3 << 3) + 0x8134)) - 1
    
    if (ecx_1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o = unimplemented  {imul ecx, ecx, 0x23}
    
    if (o)
        sub_403010()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t result = *(arg1 + 0xab0) + arg2 * 0x81c0
    *(result + (ecx_1 + 1) * 0x118 - 0xa2) = 0
    return result
}
