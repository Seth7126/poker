// ============================================================
// 函数名称: sub_454d3c
// 虚拟地址: 0x454d3c
// WARP GUID: 3d988eb3-9f71-5461-8ecb-bd43f883d900
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4602c8
// [被调用的父级函数]: sub_453ff8
// ============================================================

int32_t __convention("regparm")sub_454d3c(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    
    if ((eax == 0xcd || eax == 0xce) && arg1[0xf] == 0)
        if (arg1[0x22] u< arg1[0x1c])
            *(*arg1 + 0x14) = 0x42
            (**arg1)()
        
        (*(*(arg1 + 0x196) + 4))()
        arg1[4] = 0xd2
    else if (arg1[4] == 0xcf)
        arg1[4] = 0xd2
    else if (arg1[4] != 0xd2)
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 0x12
        *(eax_3 + 0x18) = arg1[4]
        (**arg1)()
    
    int32_t i
    
    do
        if (*(*(arg1 + 0x1a6) + 0x14) != 0)
            (*(arg1[5] + 0x18))()
            sub_4602c8(arg1)
            return 1
        
        i = (**(arg1 + 0x1a6))()
    while (i != 0)
    return 0
}
