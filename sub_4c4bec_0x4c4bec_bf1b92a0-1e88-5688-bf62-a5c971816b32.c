// ============================================================
// 函数名称: sub_4c4bec
// 虚拟地址: 0x4c4bec
// WARP GUID: bf1b92a0-1e88-5688-bf62-a5c971816b32
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2ca0, sub_4c4b34, sub_4c1090, sub_403010
// [被调用的父级函数]: sub_4ee7d8, sub_4ca104, sub_4c8aa0, sub_4f9658
// ============================================================

int32_t __convention("regparm")sub_4c4bec(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s> 8)
    if (arg1 s> 8)
        return 0
    
    int32_t result
    
    if (sub_4c1090() == 0 || *(*data_5301f4 + 0x111fb) == 0)
        result = 0
        
        if (*(*data_530304 + 0xcf6) == 0 && sub_4c2ca0() s> 1 && arg1 != 1)
            bool o_1 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + arg1 * 0x208 + 0x1fea1) == 1 && *(*data_5301f4 + 0xfff0) s>= 9)
                result.b = 1
    else
        result = sub_4c4b34(arg1)
    
    if (*(*data_5301f4 + 0x111f9) != 0 && *(*data_5301f4 + 0x10038) != 0)
        result.b = 1
    
    return result
}
