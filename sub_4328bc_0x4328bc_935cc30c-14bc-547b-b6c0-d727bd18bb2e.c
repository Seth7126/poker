// ============================================================
// 函数名称: sub_4328bc
// 虚拟地址: 0x4328bc
// WARP GUID: 935cc30c-14bc-547b-b6c0-d727bd18bb2e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b31c, sub_42c754, sub_42d734, sub_407800, sub_42f140
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4328bc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 0xc) != 0)
    if (*(arg2 + 0xc) != 0)
        return 
    
    void var_14
    sub_407800(*(arg2 + 8), &var_14)
    void var_1c
    sub_42b31c(arg1, &var_14, &var_1c)
    sub_42f140(arg1, 0)
    
    if (*(arg2 + 0xc) == 0)
        sub_42d734(arg1, arg2)
}
