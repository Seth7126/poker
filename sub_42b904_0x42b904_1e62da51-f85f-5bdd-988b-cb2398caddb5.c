// ============================================================
// 函数名称: sub_42b904
// 虚拟地址: 0x42b904
// WARP GUID: 1e62da51-f85f-5bdd-988b-cb2398caddb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_42d02c, sub_443be4, sub_44bddc, sub_443fcc, sub_432a70, sub_4498a0, sub_44a0a0
// ============================================================

void __convention("regparm")sub_42b904(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x60))
    if (arg2 == *(arg1 + 0x60))
        return 
    
    *(arg1 + 0x60) = arg2
    *(arg1 + 0x4a) = 0
    sub_42c754(arg1, 0)
}
