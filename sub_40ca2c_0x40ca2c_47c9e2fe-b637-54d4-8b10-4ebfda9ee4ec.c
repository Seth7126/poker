// ============================================================
// 函数名称: sub_40ca2c
// 虚拟地址: 0x40ca2c
// WARP GUID: 47c9e2fe-b637-54d4-8b10-4ebfda9ee4ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_414fca, sub_4427a0, sub_414fde, sub_4ade74, sub_41037a, sub_41341e, sub_442414
// ============================================================

int32_t __convention("regparm")sub_40ca2c(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x20) -= 1
    *(arg1 + 0x20) -= 1
    
    if (*(arg1 + 0x20) == 0)
        *(arg1 + 0x20) = *(arg1 + 0x24)
        *(arg1 + 0x24) = 0
        *(arg1 + 0x34) = 0
    
    return LeaveCriticalSection(arg1 + 4)
}
