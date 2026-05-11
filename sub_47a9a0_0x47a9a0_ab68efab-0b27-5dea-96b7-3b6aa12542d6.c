// ============================================================
// 函数名称: sub_47a9a0
// 虚拟地址: 0x47a9a0
// WARP GUID: ab68efab-0b27-5dea-96b7-3b6aa12542d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4c1fb8, sub_51f90c, sub_4c0ff8, sub_4e6659, sub_50c5e0, sub_5072b8, sub_473938, sub_514ef8, sub_50a64c, sub_46ea8b, sub_480418, sub_4c2418, sub_4d7f8c, sub_4c585c, sub_4dc3b8, sub_46e24c, sub_50abec, sub_4e649b
// ============================================================

int32_t __fastcallsub_47a9a0(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, ecx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t result = sx.d(*(*(arg3 + 0xab0) + arg2 * 0x81c0 + arg1 * 0x118 - 0x84))
    *arg4 = result
    return result
}
