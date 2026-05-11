// ============================================================
// 函数名称: sub_499a38
// 虚拟地址: 0x499a38
// WARP GUID: 4087b224-f0ce-54c6-871b-b4c1dccbce0c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary, InterlockedExchange
// [内部子函数调用]: sub_49a8a4
// [被调用的父级函数]: sub_49aa04
// ============================================================

void**sub_499a38()
{
    // 第一条实际指令: void** hLibModule = InterlockedExchange(&data_52f600, 0)
    void** hLibModule = InterlockedExchange(&data_52f600, 0)
    
    if (hLibModule == 0)
        return hLibModule
    
    FreeLibrary(hLibModule)
    return sub_49a8a4()
}
