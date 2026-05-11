// ============================================================
// 函数名称: sub_4624e4
// 虚拟地址: 0x4624e4
// WARP GUID: 6986c8b8-8e9d-5604-9599-812fd528cbbb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462540
// ============================================================

int32_t __convention("regparm")sub_4624e4(void* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x141)
    void* ebx = *(arg1 + 0x141)
    int32_t result = (*(*(arg1 + 0x161) + 8))()
    int32_t ecx = *(ebx + 0x14)
    
    if (ecx u< 1)
        *(ebx + 0x14) = 2
        
        if (*(arg1 + 0xb0) == 0)
            *(ebx + 0x20) += 1
    else if (ecx == 1)
        *(ebx + 0x14) = 2
    else if (ecx == 2)
        if (*(arg1 + 0xb0) != 0)
            *(ebx + 0x14) = 1
        
        *(ebx + 0x20) += 1
    
    *(ebx + 0x18) += 1
    return result
}
