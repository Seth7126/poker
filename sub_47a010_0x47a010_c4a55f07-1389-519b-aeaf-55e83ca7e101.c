// ============================================================
// 函数名称: sub_47a010
// 虚拟地址: 0x47a010
// WARP GUID: c4a55f07-1389-519b-aeaf-55e83ca7e101
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4c1fb8, sub_50c5e0, sub_516eec, sub_480418, sub_4c585c, sub_4dc3b8, sub_46e24c
// ============================================================

int32_t __convention("regparm")sub_47a010(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: bool o_1 = unimplemented  {imul edx, edx, 0x1038}
    bool o_1 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o = unimplemented  {imul edx, ecx, 0x23}
    
    if (not(o))
        int32_t result
        result.b = *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x88)
        return result
    
    sub_403010()
    noreturn
}
