// ============================================================
// 函数名称: sub_431a10
// 虚拟地址: 0x431a10
// WARP GUID: e9fcbdb2-9d40-5667-a3e4-60646344705b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_430fbc, sub_4425d8
// ============================================================

void __convention("regparm")sub_431a10(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x138))
    if (arg2 == *(arg1 + 0x138))
        return 
    
    *(arg1 + 0x138) = arg2
    *(arg1 + 0x160) = 0
    sub_42c754(arg1, 0)
}
