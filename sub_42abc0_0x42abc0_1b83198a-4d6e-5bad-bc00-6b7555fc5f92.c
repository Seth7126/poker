// ============================================================
// 函数名称: sub_42abc0
// 虚拟地址: 0x42abc0
// WARP GUID: 1b83198a-4d6e-5bad-bc00-6b7555fc5f92
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42ca60, sub_42ad4c, sub_42d480, sub_42d3b4
// ============================================================

int32_t __convention("regparm")sub_42abc0(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x5c)
    void* edx = *(arg1 + 0x5c)
    
    if (edx == 0)
        return 0
    
    return *(edx + 0x10)
}
