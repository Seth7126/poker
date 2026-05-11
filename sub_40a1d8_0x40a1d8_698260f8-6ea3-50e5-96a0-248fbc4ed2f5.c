// ============================================================
// 函数名称: sub_40a1d8
// 虚拟地址: 0x40a1d8
// WARP GUID: 698260f8-6ea3-50e5-96a0-248fbc4ed2f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409d14
// [被调用的父级函数]: sub_40a48c
// ============================================================

void*sub_40a1d8(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    
    if (*(result - 0x1d) == 0)
        void* eax_1 = *(arg1 + 8)
        sub_409d14(arg1 - 0x1a, arg1 - 0x18, arg1 - 0x16, arg1 - 0x1c, *(eax_1 + 8), *(eax_1 + 0xc))
        result = arg1
        *(result - 0x1d) = 1
    
    return result
}
