// ============================================================
// 函数名称: sub_449234
// 虚拟地址: 0x449234
// WARP GUID: 29c90116-7b11-5b04-ab8e-be0cf201e6ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4499c8, sub_449184
// [被调用的父级函数]: sub_4702a8, sub_4493c8, sub_4463a4
// ============================================================

int32_t __convention("regparm")sub_449234(BOOL arg1)
{
    // 第一条实际指令: MSG var_20
    MSG var_20
    char result = sub_449184(arg1, &var_20)
    
    if (result != 0)
        return result
    
    return sub_4499c8(arg1)
}
