// ============================================================
// 函数名称: sub_453098
// 虚拟地址: 0x453098
// WARP GUID: 1284f55e-2299-5101-8eeb-86aa6f88ae40
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary
// [内部子函数调用]: sub_4511d0, sub_44d008
// [被调用的父级函数]: sub_453138, sub_4531fc
// ============================================================

void*sub_453098()
{
    // 第一条实际指令: if (data_532078 != 0)
    if (data_532078 != 0)
        FreeLibrary(data_532078)
        data_532078 = 0
    
    if (data_53207c != 0)
        FreeLibrary(data_53207c)
        data_53207c = 0
    
    sub_44d008()
    return sub_4511d0()
}
