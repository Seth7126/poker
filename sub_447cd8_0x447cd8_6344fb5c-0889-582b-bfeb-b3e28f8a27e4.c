// ============================================================
// 函数名称: sub_447cd8
// 虚拟地址: 0x447cd8
// WARP GUID: 6344fb5c-0889-582b-bfeb-b3e28f8a27e4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449d44, sub_44a0a0
// ============================================================

void __convention("regparm")sub_447cd8(void* const arg1)
{
    // 第一条实际指令: while (arg1 != 0)
    for (; arg1 != 0; arg1 = *(arg1 + 0x24))
        if (*(arg1 + 0x89) != 0)
            break
    
    if (arg1 != 0)
        *(arg1 + 0x20)
}
