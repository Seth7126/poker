// ============================================================
// 函数名称: sub_47a078
// 虚拟地址: 0x47a078
// WARP GUID: 20c47659-5f37-51f7-887b-e8ecd54705a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_484dfc, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4ca218, sub_50003c, sub_4ca2a8, sub_4fc834, sub_477844, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_47a078(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: bool o = unimplemented  {imul eax, esi, 0x1038}
    bool o = unimplemented  {imul eax, esi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf1) == 0)
        bool o_2 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_3 = unimplemented  {imul edx, edi, 0x23}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (sub_484dfc(arg3, *(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 + 8).b == 0)
            return 0
    
    int32_t result
    result.b = 1
    return result
}
