// ============================================================
// 函数名称: sub_4c4b34
// 虚拟地址: 0x4c4b34
// WARP GUID: 50ba26f1-a927-5ba2-a682-8800f25f9453
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2cdc, sub_4c0924, sub_403010
// [被调用的父级函数]: sub_4dc3b8, sub_4c4bec, sub_4fc834
// ============================================================

int32_t __convention("regparm")sub_4c4b34(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (*(*data_530304 + 0xcf6) == 0 && sub_4c2cdc() s> 1 && arg1 != 1)
        bool o_1 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(*data_5301f4 + arg1 * 0x208 + 0x1fea1) == 1 && *(*data_5301f4 + 0xfff0) s>= 9)
            result.b = 1
    
    if (sub_4c0924() != 0)
        void* eax_8 = data_5302c8
        *eax_8
        bool o_2 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (*(*(*data_530304 + 0xab0) + *eax_8 * 0x81c0 + 1) != 0 || *data_530538 != 0)
            result = 0
    
    if (*(*data_5301f4 + 0x111f9) != 0 && *(*data_5301f4 + 0x10038) != 0)
        result.b = 1
    
    return result
}
