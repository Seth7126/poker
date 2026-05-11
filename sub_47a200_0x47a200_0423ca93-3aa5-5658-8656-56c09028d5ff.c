// ============================================================
// 函数名称: sub_47a200
// 虚拟地址: 0x47a200
// WARP GUID: 0423ca93-3aa5-5658-8656-56c09028d5ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4807f4, sub_47d208, sub_4dd1e0, sub_4dd1d7
// ============================================================

int32_t __fastcallsub_47a200(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: bool o = unimplemented  {imul ebx, edx, 0x1038}
    bool o = unimplemented  {imul ebx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul ebx, esi, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(*(arg3 + 0xab0) + arg2 * 0x81c0 + arg1 * 0x118 - 0xf1) = arg4
    bool o_2 = unimplemented  {imul ebx, edx, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_3 = unimplemented  {imul ebx, esi, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(*(arg3 + 0xab0) + arg2 * 0x81c0 + arg1 * 0x118 + 8) = arg4
    bool o_4 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int32_t result = *(arg3 + 0xab0) + arg2 * 0x81c0
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_5 = unimplemented  {imul edx, esi, 0x23}
    
    if (not(o_5))
        *(result + arg1 * 0x118 + 9) = arg4
        return result
    
    sub_403010()
    noreturn
}
