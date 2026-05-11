// ============================================================
// 函数名称: sub_462ca0
// 虚拟地址: 0x462ca0
// WARP GUID: b87dc3cb-e4a6-54f0-9191-edbca8ab3c1d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_463240, sub_462cec, sub_462d80
// ============================================================

int32_t __convention("regparm")sub_462ca0(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x14d)
    void* edx = *(arg1 + 0x14d)
    
    if (*(arg1 + 0xe9) s> 1)
        *(edx + 0x14) = 1
    else if (*(arg1 + 0xe5) - 1 u<= *(edx + 8))
        *(edx + 0x14) = *(*(arg1 + 0xed) + 0x48)
    else
        *(edx + 0x14) = *(*(arg1 + 0xed) + 0xc)
    
    *(edx + 0xc) = 0
    *(edx + 0x10) = 0
    return 0
}
