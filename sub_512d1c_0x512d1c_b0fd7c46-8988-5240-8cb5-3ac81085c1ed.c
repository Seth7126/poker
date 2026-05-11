// ============================================================
// 函数名称: sub_512d1c
// 虚拟地址: 0x512d1c
// WARP GUID: b0fd7c46-8988-5240-8cb5-3ac81085c1ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50a53c, sub_403010
// [被调用的父级函数]: sub_4c2f1c, sub_5223e8, sub_520efc, sub_4c2de8, sub_527454, sub_511b50, sub_4c8aa0, sub_509d44, sub_4c2d7c, sub_4fc834, sub_4c2e54
// ============================================================

int32_t __convention("regparm")sub_512d1c(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    
    if (arg2 s> 8)
        arg1.b = 1
    else if (arg3 == 0)
        arg1 = sub_50a53c(arg2) * 0xe9
        bool o_2 = unimplemented  {imul eax, eax, 0xe9}
        
        if (o_2)
            sub_403010()
            noreturn
        
        arg1.b = *(esi + (arg1 << 2) - 0x50) == 4
    else
        arg1 = sub_50a53c(arg2) * 0xe9
        bool o_1 = unimplemented  {imul eax, eax, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(esi + (arg1 << 2) - 0x50) != 4 || arg2 == 1)
            return 0
        
        arg1.b = 1
    
    return arg1
}
