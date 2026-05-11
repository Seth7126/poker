// ============================================================
// 函数名称: sub_462cec
// 虚拟地址: 0x462cec
// WARP GUID: d9ddd946-13bd-59c9-a767-3f604843e109
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_462ca0
// [被调用的父级函数]: sub_463408
// ============================================================

int32_t __convention("regparm")sub_462cec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x14d)
    void* ebx = *(arg1 + 0x14d)
    *(ebx + 8) = 0
    int32_t result = sub_462ca0(arg1)
    
    if (arg2 u< 1)
        if (*(ebx + 0x40) != 0)
            *(*arg1 + 0x14) = 4
            result = (**arg1)()
        
        *(ebx + 4) = sub_462d80
    else if (arg2 == 2)
        if (*(ebx + 0x40) == 0)
            *(*arg1 + 0x14) = 4
            result = (**arg1)()
        
        *(ebx + 4) = sub_463240
    else
        if (arg2 != 3)
            *(*arg1 + 0x14) = 4
            return (**arg1)()
        
        if (*(ebx + 0x40) == 0)
            *(*arg1 + 0x14) = 4
            result = (**arg1)()
        
        *(ebx + 4) = sub_462fb0
    
    return result
}
