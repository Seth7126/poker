// ============================================================
// 函数名称: sub_42d14c
// 虚拟地址: 0x42d14c
// WARP GUID: 7fabff63-59fb-5be3-a346-527a4026668a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b1f4, sub_42afb8, sub_403018, sub_42b238, sub_42af98
// [被调用的父级函数]: sub_42d260, sub_42c4d4
// ============================================================

int32_t* __convention("regparm")sub_42d14c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_1c
    int32_t var_1c
    __builtin_memcpy(&var_1c, arg2, 0x10)
    int32_t* result = nullptr
    
    if ((*(*arg1 + 0x54))() != 0 && (*(*arg1 + 0x54))() != sub_403018(arg1))
        int32_t eax_7
        int32_t edx_3
        eax_7, edx_3 = (*(*arg1 + 0x54))()
        *data_530660
        edx_3.b = 1
        result = (*(eax_7 + 0x2c))()
        sub_42afb8(result)
        sub_42af98(result)
        int32_t var_14
        sub_42b1f4(result, var_14 - var_1c)
        int32_t var_18
        int32_t var_10
        sub_42b238(result, var_10 - var_18)
    
    return result
}
