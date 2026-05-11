// ============================================================
// 函数名称: sub_42b828
// 虚拟地址: 0x42b828
// WARP GUID: 0c61ba5c-3390-5187-bffa-fa7571fc9152
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_418acc
// [被调用的父级函数]: sub_42a97c
// ============================================================

int32_t __convention("regparm")sub_42b828(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x49) = 0
    *(arg1 + 0x49) = 0
    *(arg1 + 0x46) = 0
    
    if (sub_418acc(*(arg1 + 0x58)) != *(arg1 + 0x74))
        *(arg1 + 0x88) |= 0x10
        *(arg1 + 0x74) = sub_418acc(*(arg1 + 0x58))
    
    sub_42c754(arg1, 0)
    return 0
}
