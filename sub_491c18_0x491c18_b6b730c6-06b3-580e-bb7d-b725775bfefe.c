// ============================================================
// 函数名称: sub_491c18
// 虚拟地址: 0x491c18
// WARP GUID: b6b730c6-06b3-580e-bb7d-b725775bfefe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_491bf0
// ============================================================

int32_t __convention("regparm")sub_491c18(int32_t* arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8.w = arg2
    *(arg1 + 0x28a) = var_8.w
    int32_t edx = 0
    
    do
        bool c_1 = edx.b u< 0xf
        
        if (edx.b == 0xf || c_1)
            c_1 = test_bit(*(arg1 + 0x28a), edx & 0x7f)
        
        int32_t ecx_1
        ecx_1.b = c_1
        int32_t ebx_1
        ebx_1.b = edx.b
        *(&arg1[ebx_1 * 4] + 0x1f9) = ecx_1.b
        edx += 1
    while (edx.b != 9)
    
    return (*(*arg1 + 0x74))(var_8)
}
