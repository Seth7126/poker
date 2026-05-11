// ============================================================
// 函数名称: sub_40a1a0
// 虚拟地址: 0x40a1a0
// WARP GUID: 6d2b2e20-0341-535e-8a18-e34dd6800698
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40a02c
// [被调用的父级函数]: sub_40a48c
// ============================================================

void*sub_40a1a0(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    
    if (*(result - 0x13) == 0)
        void* eax_1 = *(arg1 + 8)
        sub_40a02c(arg1 - 0x12, arg1 - 0xe, *(eax_1 + 8), *(eax_1 + 0xc))
        result = arg1
        *(result - 0x13) = 1
    
    return result
}
