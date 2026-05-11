// ============================================================
// 函数名称: sub_42b80c
// 虚拟地址: 0x42b80c
// WARP GUID: 7b708521-de73-54de-bf6f-973a703ae42b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42b80c(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x4f))
    if (arg2 == *(arg1 + 0x4f))
        return 
    
    *(arg1 + 0x4f) = arg2
    *(arg1 + 0x50) = 0
    sub_42c754(arg1, 0)
}
