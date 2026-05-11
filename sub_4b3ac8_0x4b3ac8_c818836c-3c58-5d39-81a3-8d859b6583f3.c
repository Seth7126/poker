// ============================================================
// 函数名称: sub_4b3ac8
// 虚拟地址: 0x4b3ac8
// WARP GUID: c818836c-3c58-5d39-81a3-8d859b6583f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary
// [内部子函数调用]: sub_4b39a8, sub_4b2ecc
// [被调用的父级函数]: sub_4b3b14
// ============================================================

int32_tsub_4b3ac8()
{
    // 第一条实际指令: if (data_532d04 u> 0)
    if (data_532d04 u> 0)
        FreeLibrary(data_532d04)
        data_532d04 = 0
    
    if (data_532d08 u> 0)
        FreeLibrary(data_532d08)
        data_532d08 = 0
    
    sub_4b2ecc()
    sub_4b39a8()
    data_532cfc = 1
    return 0
}
