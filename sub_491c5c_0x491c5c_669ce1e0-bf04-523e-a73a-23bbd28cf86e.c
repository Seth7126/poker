// ============================================================
// 函数名称: sub_491c5c
// 虚拟地址: 0x491c5c
// WARP GUID: 669ce1e0-bf04-523e-a73a-23bbd28cf86e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49292c, sub_49277c, sub_4926a0, sub_4925fc, sub_492b8c, sub_491bf0
// ============================================================

int32_t __convention("regparm")sub_491c5c(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    
    do
        bool c_1 = edx.b u< 0xf
        
        if (edx.b == 0xf || c_1)
            c_1 = test_bit(*(arg1 + 0x28e), edx & 0x7f)
        
        int32_t ecx_1
        ecx_1.b = c_1
        int32_t ebx_1
        ebx_1.b = edx.b
        *(&arg1[ebx_1 * 4] + 0x1fb) = ecx_1.b
        edx += 1
    while (edx.b != 9)
    
    return (*(*arg1 + 0x74))()
}
