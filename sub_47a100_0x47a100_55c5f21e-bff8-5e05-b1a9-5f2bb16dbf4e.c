// ============================================================
// 函数名称: sub_47a100
// 虚拟地址: 0x47a100
// WARP GUID: 55c5f21e-bff8-5e05-b1a9-5f2bb16dbf4e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_46e24c, sub_46ea8b
// ============================================================

int32_t __fastcallsub_47a100(int32_t arg1, int32_t arg2, void* arg3 @ eax, char* arg4)
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
    
    int32_t result
    result.b = *(*(arg3 + 0xab0) + arg2 * 0x81c0 + arg1 * 0x118 - 0x88)
    *arg4 = result.b
    return result
}
