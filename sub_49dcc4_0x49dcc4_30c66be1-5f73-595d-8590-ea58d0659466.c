// ============================================================
// 函数名称: sub_49dcc4
// 虚拟地址: 0x49dcc4
// WARP GUID: 30c66be1-5f73-595d-8590-ea58d0659466
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_403e4c, sub_404280, sub_404078
// [被调用的父级函数]: sub_4ace9c
// ============================================================

char** __convention("regparm")sub_49dcc4(char* arg1, void* arg2, char** arg3)
{
    // 第一条实际指令: char** var_8 = arg3
    char** var_8 = arg3
    int32_t eax_1 = sub_404078(arg1)
    
    if (eax_1 s< arg2 || arg2 s< 0)
        return sub_403e4c(arg3, arg1)
    
    void* edx_2 = eax_1 - arg2
    
    if (add_overflow(eax_1, neg.d(arg2)))
        sub_403010()
        noreturn
    
    if (not(add_overflow(edx_2, 1)))
        return sub_404280(arg2, edx_2 + 1, arg1, arg3)
    
    sub_403010()
    noreturn
}
