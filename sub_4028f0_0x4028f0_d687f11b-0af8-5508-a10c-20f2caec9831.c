// ============================================================
// 函数名称: sub_4028f0
// 虚拟地址: 0x4028f0
// WARP GUID: d687f11b-0af8-5508-a10c-20f2caec9831
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetCurrentDirectoryA, GetCurrentDirectoryA
// [内部子函数调用]: sub_404028
// [被调用的父级函数]: sub_4b44d0, sub_4b47c8, sub_4b5160
// ============================================================

char** __convention("regparm")sub_4028f0(char arg1, char** arg2)
{
    // 第一条实际指令: uint8_t var_10c[0x104]
    uint8_t var_10c[0x104]
    
    if (arg1 != 0)
        char pathName = arg1 + 0x40
        char var_213_1 = 0x3a
        char var_212_1 = 0
        GetCurrentDirectoryA(0x104, &var_10c)
        SetCurrentDirectoryA(&pathName)
    
    void buffer
    GetCurrentDirectoryA(0x104, &buffer)
    
    if (arg1 != 0)
        SetCurrentDirectoryA(&var_10c)
    
    sub_404028(arg2, &buffer, 0x104)
    return arg2
}
