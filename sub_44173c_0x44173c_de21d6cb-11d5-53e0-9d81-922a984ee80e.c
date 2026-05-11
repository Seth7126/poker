// ============================================================
// 函数名称: sub_44173c
// 虚拟地址: 0x44173c
// WARP GUID: de21d6cb-11d5-53e0-9d81-922a984ee80e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441dc4
// [被调用的父级函数]: sub_441758
// ============================================================

void __convention("regparm")sub_44173c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x28))
    if (arg2 == *(arg1 + 0x28))
        return 
    
    *(arg1 + 0x28) = arg2
    *(arg1 + 0x2c) = 0
    *(arg1 + 0x44) = 1
    sub_441dc4(*(arg1 + 4))
}
