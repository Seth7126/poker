// ============================================================
// 函数名称: sub_419868
// 虚拟地址: 0x419868
// WARP GUID: 938d3a46-076f-52f6-a6c0-37826e857198
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_453e4c, sub_453e0a, sub_44b940, sub_43ab7c, sub_43a2fc
// ============================================================

void __convention("regparm")sub_419868(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    (*(*arg1 + 0x10))()
    sub_419c14(arg1, 0xf)
    (*(*arg3 + 0x14))()
    (*(*arg1 + 0xc))()
}
