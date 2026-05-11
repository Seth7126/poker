// ============================================================
// 函数名称: sub_4157a8
// 虚拟地址: 0x4157a8
// WARP GUID: 41ac970f-3f9b-58ca-bcef-348a10913a31
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415730, sub_415888
// [被调用的父级函数]: sub_415e80, sub_442d98, sub_415e74, sub_442db4
// ============================================================

int32_t __convention("regparm")sub_4157a8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8 = arg2
    
    if (var_8 s>= 0xffffff80 && var_8 s<= 0x7f)
        arg2.b = 2
        sub_415888(arg3, arg2.b)
        return sub_415730(arg1, &var_8, 1)
    
    if (var_8 s>= 0xffff8000 && var_8 s<= 0x7fff)
        arg2.b = 3
        sub_415888(arg3, arg2.b)
        return sub_415730(arg1, &var_8, 2)
    
    arg2.b = 4
    sub_415888(arg3, arg2.b)
    return sub_415730(arg1, &var_8, 4)
}
