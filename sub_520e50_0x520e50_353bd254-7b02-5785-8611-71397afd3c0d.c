// ============================================================
// 函数名称: sub_520e50
// 虚拟地址: 0x520e50
// WARP GUID: 353bd254-7b02-5785-8611-71397afd3c0d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2d7c, sub_403010
// [被调用的父级函数]: sub_5223e8, sub_520efc
// ============================================================

int32_t __convention("regparm")sub_520e50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char eax_1 = sub_4c2d7c(arg1)
    int32_t result = sub_4c2d7c(arg2)
    
    if ((result.b & eax_1) != 0)
        bool o_1 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_1)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
        
        if (o_2)
            sub_403010()
            noreturn
        
        result.b = *(*data_5301f4 + arg1 * 0x208 + 0x20078) s> *(*data_5301f4 + arg2 * 0x208 + 0x20078)
    else if (eax_1 == 0 || result.b != 0)
        if (eax_1 != 0 || result.b != 0)
            return 0
        
        bool o_3 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_3)
            sub_403010()
            noreturn
        
        bool o_4 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
        
        if (o_4)
            sub_403010()
            noreturn
        
        result.b = *(*data_5301f4 + arg1 * 0x208 + 0x20090) s< *(*data_5301f4 + arg2 * 0x208 + 0x20090)
    else
        result.b = 1
    
    return result
}
