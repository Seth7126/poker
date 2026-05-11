// ============================================================
// 函数名称: sub_4b72e4
// 虚拟地址: 0x4b72e4
// WARP GUID: 21bcd2b0-d215-5d66-8469-118dd1dd6a2c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_4c0924
// [被调用的父级函数]: sub_4b8c38, sub_4babf8, sub_4b77e0, sub_4b8204, sub_4be3e0
// ============================================================

int32_t __convention("regparm")sub_4b72e4(int32_t arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (sub_4c0924() != 0)
        bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        result = *(*data_530454 + arg1 * 0x3a4 + 0x180)
    else if (*(*data_5301f4 + 0x111f8) == 0)
        bool o_2 = unimplemented  {imul eax, ebx, 0x29}
        
        if (o_2)
            sub_403010()
            noreturn
        
        result = *(*data_5301f4 + arg1 * 0xa4 + 0x25bac)
    else
        result = *(*data_5301f4 + 0x11208)
    
    if (arg1 != 1)
        return result
    
    return 3
}
