// ============================================================
// 函数名称: sub_41582c
// 虚拟地址: 0x41582c
// WARP GUID: 62e93f89-2fdb-5254-a8b1-28204a1ffe44
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415730, sub_415888, sub_404078
// [被调用的父级函数]: sub_412268
// ============================================================

int32_t __convention("regparm")sub_41582c(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    void* esi = arg2
    var_c = sub_404078(esi)
    
    if (var_c s> 0xff)
        arg2.b = 0xc
        sub_415888(arg3, arg2.b)
        sub_415730(arg1, &var_c, 4)
    else
        arg2.b = 6
        sub_415888(arg3, arg2.b)
        sub_415730(arg1, &var_c, 1)
    
    return sub_415730(arg1, esi, var_c)
}
