// ============================================================
// 函数名称: sub_4c2d7c
// 虚拟地址: 0x4c2d7c
// WARP GUID: 3421e96c-f50a-52a8-9c42-11b334fbe5ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512d1c, sub_4c0924, sub_403010
// [被调用的父级函数]: sub_520efc, sub_507e90, sub_520e50, sub_4c39c8, sub_4cc140, sub_4b7000, sub_4d0148, sub_4c8aa0, sub_529818, sub_4e649b, sub_4c1e70, sub_4e6659, sub_5223e8, sub_4b7068, sub_4c62e8, sub_5285a8, sub_508998, sub_50907c, sub_4c10a0, sub_509024, sub_4c2ec4, sub_4c2de8, sub_50928c, sub_509d44, sub_507d3f, sub_4fc834, sub_4c2e54
// ============================================================

int32_t __convention("regparm")sub_4c2d7c(int32_t arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1 s< 1 || arg1 s> *data_5300d0)
        result = 0
    else
        bool o_1 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(*data_5301f4 + arg1 * 0x208 + 0x1fea0) != 0)
            result.b = 1
        else
            result = 0
    
    if (sub_4c0924() != 0 && arg1 s>= 1 && arg1 s<= *data_5300d0
            && sub_512d1c(*data_530454, arg1, 0) != 0)
        return 0
    
    return result
}
