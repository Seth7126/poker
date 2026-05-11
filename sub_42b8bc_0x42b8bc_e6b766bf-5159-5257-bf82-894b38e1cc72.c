// ============================================================
// 函数名称: sub_42b8bc
// 虚拟地址: 0x42b8bc
// WARP GUID: e6b766bf-5159-5257-bf82-894b38e1cc72
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_42d094
// ============================================================

void __convention("regparm")sub_42b8bc(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x89))
    if (arg2 == *(arg1 + 0x89))
        return 
    
    *(arg1 + 0x89) = arg2
    *(arg1 + 0x8a) = 0
    sub_42c754(arg1, 0)
}
