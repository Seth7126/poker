// ============================================================
// 函数名称: sub_4cb50c
// 虚拟地址: 0x4cb50c
// WARP GUID: 4aa072e1-4460-55cf-87b4-d6e7d71e21f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_4c1108, sub_403df8, sub_403010
// [被调用的父级函数]: sub_51e1c0, sub_4c8aa0
// ============================================================

int32_t __convention("regparm")sub_4cb50c(char arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax_1 = *data_5301f4
    *(eax_1 + 0x10020)
    bool o = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    var_8:3.b = *(*data_5301f4 + *(eax_1 + 0x10020) * 0x208 + 0x1fea4) s< *(*data_5301f4 + 0x21104)
    sub_403df8(arg2)
    sub_4c1108()
    
    switch (arg1)
        case 0
            if (*(*data_5301f4 + 0x20096) == 0)
                return sub_403e4c(arg2, "Bet ")
            
            return sub_403e4c(arg2, "Raise ")
        case 5
            return sub_403e4c(arg2, "Raise")
        case 6
            return sub_403e4c(arg2, "Call")
        case 7
            return sub_403e4c(arg2, "Check")
        case 8
            return sub_403e4c(arg2, "Fold")
        case 9
            return sub_403e4c(arg2, "All-In")
        case 0xa
            return sub_403e4c(arg2, "Bet")
    
    if (arg1 - 1 u< 2)
        if (var_8:3.b == 0)
            return sub_403e4c(arg2, "Check")
        
        return sub_403e4c(arg2, "Call ")
    
    if (arg1 == 3)
        return sub_403e4c(arg2, "Fold")
    
    if (arg1 != 4)
        return arg1 - 3
    
    return sub_403e4c(arg2, "All-In")
}
