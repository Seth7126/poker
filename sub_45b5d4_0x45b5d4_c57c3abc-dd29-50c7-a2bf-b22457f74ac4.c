// ============================================================
// 函数名称: sub_45b5d4
// 虚拟地址: 0x45b5d4
// WARP GUID: c57c3abc-dd29-50c7-a2bf-b22457f74ac4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b66c, sub_45b8c0, sub_45b620
// ============================================================

int32_t __convention("regparm")sub_45b5d4(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x19e)
    void* edx = *(arg1 + 0x19e)
    
    if (*(arg1 + 0x13a) s> 1)
        *(edx + 0x1c) = 1
    else if (*(arg1 + 0x132) - 1 u<= *(arg1 + 0x90))
        *(edx + 0x1c) = *(*(arg1 + 0x13e) + 0x48)
    else
        *(edx + 0x1c) = *(*(arg1 + 0x13e) + 0xc)
    
    *(edx + 0x14) = 0
    *(edx + 0x18) = 0
    return 0
}
