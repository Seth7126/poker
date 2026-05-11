// ============================================================
// 函数名称: sub_41e130
// 虚拟地址: 0x41e130
// WARP GUID: 54f550bb-6125-550f-ba66-67d2dd5fb3bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41e0b0
// [被调用的父级函数]: sub_41efec, sub_453ff8
// ============================================================

int32_t __convention("regparm")sub_41e130(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 8
    
    if (sub_41e0b0(arg1) == 1)
        return 0
    
    void* edx_1 = *(arg1 + 0x20) + 0x18
    uint32_t ecx_1 = zx.d(*(edx_1 + 0x26))
    
    if (ecx_1 s> 0x10)
        if (ecx_1 == 0x18)
            result.b = 6
        else if (ecx_1 == 0x20 && *(edx_1 + 0x28) == 0)
            result.b = 7
    else if (ecx_1 == 0x10)
        int32_t eax_4 = *(edx_1 + 0x28)
        
        if (eax_4 u< 1)
            result.b = 4
        else if (eax_4 == 3 && *(edx_1 + 0x44) == 0x7e0)
            result.b = 5
    else if (ecx_1 == 1)
        result.b = 1
    else if (ecx_1 == 4)
        result.b = 2
    else if (ecx_1 == 8)
        result.b = 3
    
    return result
}
