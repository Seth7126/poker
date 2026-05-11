// ============================================================
// 函数名称: sub_517b44
// 虚拟地址: 0x517b44
// WARP GUID: de1e35cd-4f06-53a4-8475-70128f1df4d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_51f90c, sub_51b920, sub_4ee958, sub_4e649b
// ============================================================

void __convention("regparm")sub_517b44(void* arg1)
{
    // 第一条实际指令: if (*(*data_5301f4 + 4) == 4)
    if (*(*data_5301f4 + 4) == 4)
        *(arg1 + 0x298) = 0
        return 
    
    *(arg1 + 0x298) = 0
    int32_t i_2 = 6
    void* edx_2 = arg1 + 0x302
    int32_t i
    
    do
        *edx_2 = 0
        edx_2 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t i_3 = 3
    void* esi = arg1 + 0x308
    int32_t i_1
    
    do
        int32_t j_1 = 6
        void* edx_3 = esi
        int32_t j
        
        do
            *edx_3 = 0
            edx_3 += 3
            j = j_1
            j_1 -= 1
        while (j != 1)
        esi += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
}
