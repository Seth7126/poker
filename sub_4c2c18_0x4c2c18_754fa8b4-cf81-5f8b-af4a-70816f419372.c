// ============================================================
// 函数名称: sub_4c2c18
// 虚拟地址: 0x4c2c18
// WARP GUID: 754fa8b4-cf81-5f8b-af4a-70816f419372
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c2cdc
// ============================================================

int32_t __convention("regparm")sub_4c2c18(int32_t arg1)
{
    // 第一条实际指令: bool o = unimplemented  {imul eax, eax, 0x41}
    bool o = unimplemented  {imul eax, eax, 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t result
    result.b = *(*data_5301f4 + arg1 * 0x208 + 0x1fea1) == 1
    
    if (*(*data_5301f4 + 4) != 7)
        result.b = 1
    
    return result
}
