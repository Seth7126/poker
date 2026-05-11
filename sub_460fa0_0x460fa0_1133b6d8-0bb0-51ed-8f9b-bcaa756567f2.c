// ============================================================
// 函数名称: sub_460fa0
// 虚拟地址: 0x460fa0
// WARP GUID: 1133b6d8-0bb0-51ed-8f9b-bcaa756567f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45591c, sub_4533f4
// [被调用的父级函数]: sub_453acc
// ============================================================

int32_t __convention("regparm")sub_460fa0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: arg1[1] = 0
    arg1[1] = 0
    
    if (arg2 != 0x3d)
        void* eax = *arg1
        *(eax + 0x14) = 0xa
        *(eax + 0x18) = 0x3d
        *(eax + 0x1c) = arg2
        (**arg1)()
    
    if (arg3 != 0x165)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0x13
        *(eax_2 + 0x18) = 0x165
        *(eax_2 + 0x1c) = arg3
        (**arg1)()
    
    int32_t esi_1 = *arg1
    sub_4533f4(arg1, 0, 0x165)
    *arg1 = esi_1
    arg1[3] = 0
    sub_45591c(arg1)
    arg1[2] = 0
    arg1[5] = 0
    void* edx_2 = &arg1[0x10]
    arg1[0xf] = 0
    
    for (int32_t i = 0; i s< 4; )
        i += 1
        *edx_2 = 0
        edx_2 += 4
    
    int32_t i_1 = 0
    void* edx_3 = &arg1[0x14]
    
    do
        i_1 += 1
        *edx_3 = 0
        *(edx_3 + 0x10) = 0
        edx_3 += 4
    while (i_1 s< 4)
    
    arg1[0xa] = 0
    arg1[0xb] = 0x3ff00000
    arg1[4] = 0x64
    return 0
}
