// ============================================================
// 函数名称: sub_52c000
// 虚拟地址: 0x52c000
// WARP GUID: 640559c2-6bda-5232-a8cd-c2d7cbdc033f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4746a0, sub_403010
// [被调用的父级函数]: sub_52c1b4
// ============================================================

int32_t __convention("regparm")sub_52c000(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    char var_1ac
    __builtin_memcpy(&var_1ac, arg2, 0xd4)
    char var_d8
    __builtin_memcpy(&var_d8, arg1, 0xd4)
    char var_d7
    arg1.b = var_d7
    char var_1ab
    
    if (arg1.b s<= 0 || var_d8 s<= 0 || var_1ab s<= 0 || var_1ac s<= 0)
        int32_t var_1bc_1 = 0
        sub_4746a0(nullptr, 3, *data_530304, &data_52c0c4, &data_52c0c4)
    else
        bool o_1 = unimplemented  {imul eax, eax, 0x7}
        
        if (o_1)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul edx, edx, 0x7}
        
        if (o_2)
            sub_403010()
            noreturn
        
        entry_result.b = *(data_530594 + sx.d(arg1.b) * 0x38 + (sx.d(var_d8) << 2) - 0x3c)
            s> *(data_530594 + sx.d(var_1ab) * 0x38 + (sx.d(var_1ac) << 2) - 0x3c)
    
    return entry_result
}
