// ============================================================
// 函数名称: sub_42b948
// 虚拟地址: 0x42b948
// WARP GUID: f3b02819-2e94-5cf3-b579-2e498b70f655
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_443154
// ============================================================

void __convention("regparm")sub_42b948(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x50))
    if (arg2 == *(arg1 + 0x50))
        return 
    
    *(arg1 + 0x50) = arg2
    
    if (*(arg1 + 0x24) != 0)
        sub_42c754(arg1, 0)
}
