// ============================================================
// 函数名称: sub_4c2be8
// 虚拟地址: 0x4c2be8
// WARP GUID: 0c09327a-3cb7-5cd6-9ea1-2e99ec7c5d6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4b7000, sub_4c2d18, sub_4babf8, sub_4c2ca0, sub_52acfc, sub_4c1e14, sub_4b9e84, sub_4b77e0, sub_4c06c0, sub_4ca778, sub_4c5034, sub_4b7068, sub_4c62e8, sub_4c1254, sub_4c8aa0, sub_4c2c48, sub_4be3e0, sub_4cb03c
// ============================================================

int32_t __convention("regparm")sub_4c2be8(int32_t arg1)
{
    // 第一条实际指令: bool o = unimplemented  {imul eax, eax, 0x41}
    bool o = unimplemented  {imul eax, eax, 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t result
    result.b = *(*data_5301f4 + arg1 * 0x208 + 0x1fea0) == 1
    
    if (*(*data_5301f4 + 4) != 7)
        result.b = 1
    
    return result
}
