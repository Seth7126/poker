// ============================================================
// 函数名称: sub_4d00b8
// 虚拟地址: 0x4d00b8
// WARP GUID: 28365675-55f8-5df8-b815-c535aea6596c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cff1c, sub_403010
// [被调用的父级函数]: sub_4d4f84, sub_4d5577
// ============================================================

int32_t __convention("regparm")sub_4d00b8(int32_t arg1)
{
    // 第一条实际指令: char var_54
    char var_54
    __builtin_memcpy(&var_54, arg1, 0x50)
    
    if (var_54 == 6)
        return 0
    
    char var_44
    int32_t eax_1
    eax_1.b = var_44
    bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
    
    if (o_1)
        sub_403010()
        noreturn
    
    bool o_2 = unimplemented  {imul edx, dword [ebp-0x44], 0x2e9c}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t var_48
    int32_t eax_3 = *(var_48 * 0x174e0 + &data_532f70 + eax_1 * 0x353c - 0x14010)
    
    if (add_overflow(eax_3, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t var_50
    
    if (add_overflow(var_50, 1))
        sub_403010()
        noreturn
    
    if (eax_3 - 1 s< var_50 + 1)
        return 0
    
    char var_3c
    
    if (sub_4cff1c(&var_54) == 0 && var_3c != 0 && var_3c - 2 u>= 2)
        return 1
    
    return 0
}
