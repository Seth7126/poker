// ============================================================
// 函数名称: sub_42d02c
// 虚拟地址: 0x42d02c
// WARP GUID: 44155fba-ec11-559d-bf6c-33c6182e24ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b904
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42d02c(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x4a) == 0)
    if (*(arg1 + 0x4a) == 0)
        return 
    
    if (*(arg2 + 4) == 0)
        sub_42b904(arg1, *(*(arg1 + 0x24) + 0x60))
    else
        sub_42b904(arg1, *(arg2 + 8))
    
    *(arg1 + 0x4a) = 1
}
