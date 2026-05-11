// ============================================================
// 函数名称: sub_42bd90
// 虚拟地址: 0x42bd90
// WARP GUID: 376a5e73-1593-51cf-ba51-37bdb4f67a91
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42e92c, sub_42d6dc, sub_42a524, sub_430d2c
// ============================================================

void* __convention("regparm")sub_42bd90(void* arg1)
{
    // 第一条实际指令: if (*(data_530a80 + 9) == 0 || *(arg1 + 0x4f) == 0)
    if (*(data_530a80 + 9) == 0 || *(arg1 + 0x4f) == 0)
        return 0
    
    arg1.b = 1
    return arg1
}
