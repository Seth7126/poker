// ============================================================
// 函数名称: sub_443154
// 虚拟地址: 0x443154
// WARP GUID: 75c4d9a8-4741-572d-975f-b8c13e6c9214
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_42b948
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_443154(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x50))
    if (arg2 == *(arg1 + 0x50))
        return 
    
    sub_42b948(arg1, arg2)
    
    if (*(arg1 + 0x24) == 0)
        sub_42c754(arg1, 0)
}
