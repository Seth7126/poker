// ============================================================
// 函数名称: sub_47a180
// 虚拟地址: 0x47a180
// WARP GUID: d583d02c-dffd-5465-b096-45585064884d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_472ccc, sub_51f90c, sub_46ea8b, sub_509af8, sub_4cc428, sub_5079cc, sub_51e1c0, sub_47d208, sub_516eec, sub_4c2418, sub_480418, sub_4d78f8, sub_51dbe0, sub_4c8aa0, sub_5079c3, sub_4e649b, sub_4e6659, sub_50c5e0, sub_509bfc, sub_5295d8, sub_50e4b0, sub_4d7ff0, sub_46e24c, sub_50e9c0
// ============================================================

int32_t __fastcallsub_47a180(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
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
    *(result + arg1 * 0x118 - 0xf2) = ecx_1.b
    return result
}
