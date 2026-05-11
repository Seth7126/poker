// ============================================================
// 函数名称: sub_47a960
// 虚拟地址: 0x47a960
// WARP GUID: 18ac3ccd-a513-52b1-9b20-f357bfefcede
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_50e11c, sub_50dbd4, sub_4e649b
// ============================================================

int32_t __fastcallsub_47a960(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4)
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
    
    int32_t result = sx.d(*(*(arg3 + 0xab0) + arg2 * 0x81c0 + arg1 * 0x118 - 0x86))
    *arg4 = result
    return result
}
