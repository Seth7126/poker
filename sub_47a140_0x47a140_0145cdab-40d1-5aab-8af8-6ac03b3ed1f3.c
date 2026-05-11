// ============================================================
// 函数名称: sub_47a140
// 虚拟地址: 0x47a140
// WARP GUID: 0145cdab-40d1-5aab-8af8-6ac03b3ed1f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_472ccc, sub_4e6659, sub_471144, sub_517120, sub_4c5694, sub_516eec, sub_50732c, sub_483f98, sub_4e649b
// ============================================================

int32_t __fastcallsub_47a140(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t result = *(arg3 + 0xab0) + arg2 * 0x81c0
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, ecx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx_1
    ecx_1.b = arg4
    *(result + arg1 * 0x118 - 0x88) = ecx_1.b
    return result
}
