// ============================================================
// 函数名称: sub_4b4488
// 虚拟地址: 0x4b4488
// WARP GUID: 3b2dd778-a2b4-5c99-baa2-6a962e2c767d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_4040c4, sub_409180
// [被调用的父级函数]: sub_4b543f
// ============================================================

int32_t __convention("regparm")sub_4b4488(char* arg1, char* arg2, char** arg3)
{
    // 第一条实际指令: if (*sub_409180(arg1) == 0x5c)
    if (*sub_409180(arg1) == 0x5c)
        return sub_4040c4(arg3, arg1, arg2)
    
    char* var_10_1 = arg1
    void* const var_14_1 = &data_4b44cc
    char* var_18_1 = arg2
    return sub_404138(arg3, 3)
}
