// ============================================================
// 函数名称: sub_456474
// 虚拟地址: 0x456474
// WARP GUID: 42877ed7-b24a-5cce-843b-901c2b7e523d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456504, sub_456790
// ============================================================

int32_t __convention("regparm")sub_456474(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x48) != 0 || *(arg1 + 0x122) != 0)
    if (*(arg1 + 0x48) != 0 || *(arg1 + 0x122) != 0)
        return 0
    
    if (*(arg1 + 0x24) != 3 || *(arg1 + 0x20) != 3 || *(arg1 + 0x28) != 2 || *(arg1 + 0x74) != 3)
        return 0
    
    void* edx = *(arg1 + 0xd4)
    
    if (*(edx + 8) != 2 || *(edx + 0x5c) != 1 || *(edx + 0xb0) != 1 || *(edx + 0xc) s> 2
            || *(edx + 0x60) != 1 || *(edx + 0xb4) != 1)
        return 0
    
    void* edx_1 = *(arg1 + 0xd4)
    int32_t ecx = *(arg1 + 0x12e)
    
    if (*(edx_1 + 0x24) == ecx && ecx == *(edx_1 + 0x78) && ecx == *(edx_1 + 0xcc))
        return 1
    
    return 0
}
