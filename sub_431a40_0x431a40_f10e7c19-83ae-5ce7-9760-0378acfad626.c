// ============================================================
// 函数名称: sub_431a40
// 虚拟地址: 0x431a40
// WARP GUID: f10e7c19-83ae-5ce7-9760-0378acfad626
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_431a40(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x160))
    if (arg2 == *(arg1 + 0x160))
        return 
    
    *(arg1 + 0x160) = arg2
    
    if (*(arg1 + 0x24) != 0)
        sub_42c754(arg1, 0)
}
