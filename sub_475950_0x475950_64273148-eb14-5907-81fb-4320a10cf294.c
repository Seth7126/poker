// ============================================================
// 函数名称: sub_475950
// 虚拟地址: 0x475950
// WARP GUID: 64273148-eb14-5907-81fb-4320a10cf294
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_475950(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: bool o_1 = unimplemented  {imul edx, edx, 0x1038}
    bool o_1 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    void* result = *(arg1 + 0xab0) + arg2 * 0x81c0
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o = unimplemented  {imul ecx, edx, 0x23}
    
    if (o)
        sub_403010()
        noreturn
    
    *(result + arg3 * 0x118 - 0x87) = 0
    *(result + 0x8132) = 0
    return result
}
