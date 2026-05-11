// ============================================================
// 函数名称: sub_461548
// 虚拟地址: 0x461548
// WARP GUID: 40aefcf7-2059-525c-b1c2-269362807b82
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461334, sub_4612e4
// [被调用的父级函数]: sub_461884
// ============================================================

int32_t* __convention("regparm")sub_461548(int32_t* arg1)
{
    // 第一条实际指令: char edx
    char edx
    sub_461314(arg1, edx)
    sub_461334(arg1, arg1[0xd] * 3 + 8)
    
    if (arg1[7] s> 0xffff || arg1[6] s> 0xffff)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0x28
        *(eax_2 + 0x18) = 0xffff
        (**arg1)()
    
    sub_4612e4(arg1, (arg1[0xc]).b)
    sub_461334(arg1, arg1[7])
    sub_461334(arg1, arg1[6])
    int32_t* result = sub_4612e4(arg1, (arg1[0xd]).b)
    int32_t i = 0
    int32_t* esi = arg1[0xf]
    
    while (i s< arg1[0xd])
        sub_4612e4(arg1, (*esi).b)
        sub_4612e4(arg1, (esi[2] << 4).b + (esi[3]).b)
        result = sub_4612e4(arg1, (esi[4]).b)
        i += 1
        esi = &esi[0x15]
    
    return result
}
