// ============================================================
// 函数名称: sub_52c0c8
// 虚拟地址: 0x52c0c8
// WARP GUID: 0ec7fb37-b5b8-5d4b-8db3-29f0a2344fbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4746a0, sub_403010
// [被调用的父级函数]: sub_52c3cc, sub_52c2dc, sub_52c15c
// ============================================================

int32_t __convention("regparm")sub_52c0c8(int32_t arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t var_8 = arg1
    arg1.b = var_8:1.b
    
    if (arg1.b s<= 0 || var_8.b s<= 0 || arg2:1.b s<= 0 || arg2.b s<= 0)
        int32_t var_14_1 = 0
        sub_4746a0(nullptr, 4, *data_530304, &data_52c158, &data_52c158)
    else
        bool o_1 = unimplemented  {imul eax, eax, 0x7}
        
        if (o_1)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul edx, edx, 0x7}
        
        if (o_2)
            sub_403010()
            noreturn
        
        entry_result.b = *(data_530594 + sx.d(arg1.b) * 0x38 + (sx.d(var_8.b) << 2) - 0x3c)
            s> *(data_530594 + sx.d(arg2:1.b) * 0x38 + (sx.d(arg2.b) << 2) - 0x3c)
    
    return entry_result
}
