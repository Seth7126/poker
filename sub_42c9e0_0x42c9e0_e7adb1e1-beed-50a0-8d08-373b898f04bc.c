// ============================================================
// 函数名称: sub_42c9e0
// 虚拟地址: 0x42c9e0
// WARP GUID: e7adb1e1-beed-50a0-8d08-373b898f04bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42ca10
// ============================================================

void*sub_42c9e0(void* arg1)
{
    // 第一条实际指令: void* eax_2 = *(*(arg1 - 4) + 0x20)
    void* eax_2 = *(*(arg1 - 4) + 0x20)
    
    if (eax_2 == 0)
        void* eax_4
        eax_4.b = *(*(arg1 - 8) + 0x4e)
        return eax_4
    
    eax_2.b = *(eax_2 + 0x4e)
    eax_2.b = eax_2.b != *(*(arg1 - 8) + 0x4e)
    return eax_2
}
