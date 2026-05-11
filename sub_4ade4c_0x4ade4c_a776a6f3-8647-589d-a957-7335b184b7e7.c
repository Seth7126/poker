// ============================================================
// 函数名称: sub_4ade4c
// 虚拟地址: 0x4ade4c
// WARP GUID: a776a6f3-8647-589d-a957-7335b184b7e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40ca50, sub_40c9e0
// [被调用的父级函数]: sub_4ae168, sub_4adcfc, sub_4acd4c, sub_4ae620
// ============================================================

int32_t __convention("regparm")sub_4ade4c(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 u< 1)
    if (arg2 u< 1)
        sub_40ca50(*(arg1 + 0x20))
    else if (arg2 == 1)
        sub_40c9e0(*(arg1 + 0x20))
    
    return *(arg1 + 0x1c)
}
