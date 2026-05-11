// ============================================================
// 函数名称: sub_49aef8
// 虚拟地址: 0x49aef8
// WARP GUID: 9354dcfa-9090-5035-9518-edaf85b9149d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ad8, sub_403e4c, sub_49b718
// [被调用的父级函数]: sub_4a90cc, sub_4a6308
// ============================================================

int32_t __convention("regparm")sub_49aef8(int32_t* arg1, char* arg2, char** arg3)
{
    // 第一条实际指令: char** var_8 = arg3
    char** var_8 = arg3
    
    if (sub_408ad8(arg2, "LOCALHOST") != 0)
        return sub_403e4c(arg3, sub_49af67+5)
    
    if (sub_49b718() == 0)
        return (*(*arg1 + 0x20))()
    
    return sub_403e4c(arg3, arg2)
}
