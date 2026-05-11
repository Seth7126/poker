// ============================================================
// 函数名称: sub_460618
// 虚拟地址: 0x460618
// WARP GUID: 685aecb0-c486-5a40-a1a5-f672e5ffa948
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4605c0, sub_460554, sub_460708
// [被调用的父级函数]: sub_453acc
// ============================================================

int32_t* __convention("regparm")sub_460618(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[4] != 0x64)
    if (arg1[4] != 0x64)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    if (arg1[0xf] == 0)
        arg1[0xf] = (*arg1[1])()
    
    arg1[0xc] = 8
    sub_460554(arg1, 0x4b, 1)
    sub_4605c0(arg1)
    int32_t i = 0
    void* eax_6 = &arg1[0x1c]
    
    do
        *eax_6 = 0
        *(eax_6 + 0x10) = 1
        *(eax_6 + 0x20) = 5
        i += 1
        eax_6 += 1
    while (i s< 0x10)
    
    __builtin_memset(&arg1[0x28], 0, 0x14)
    
    if (arg1[0xc] s> 8)
        arg1[0x2c] = 1
    
    __builtin_memset(&arg1[0x2d], 0, 0x14)
    arg1[0x33].b = 0
    *(arg1 + 0xcd) = 1
    *(arg1 + 0xcf) = 1
    return sub_460708(arg1)
}
