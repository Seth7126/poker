// ============================================================
// 函数名称: sub_416348
// 虚拟地址: 0x416348
// WARP GUID: 3fbd49d7-01ec-5430-a3e2-39e4fe80216d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4163ac, sub_443850, sub_443028, sub_4430c0
// ============================================================

int32_t __convention("regparm")sub_416348(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x10)
    void* edx = *(arg1 + 0x10)
    
    if (edx == 0)
        return 0
    
    return *(edx + 8)
}
