// ============================================================
// 函数名称: sub_4ade74
// 虚拟地址: 0x4ade74
// WARP GUID: eeab4534-600b-5918-922d-d970ddfea962
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40cbc8, sub_40ca2c
// [被调用的父级函数]: sub_4ae168, sub_4adcfc, sub_4acd4c, sub_4ae620
// ============================================================

void __convention("regparm")sub_4ade74(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 u< 1)
    if (arg2 u< 1)
        sub_40cbc8(*(arg1 + 0x20))
        return 
    
    if (arg2 == 1)
        sub_40ca2c(*(arg1 + 0x20))
}
