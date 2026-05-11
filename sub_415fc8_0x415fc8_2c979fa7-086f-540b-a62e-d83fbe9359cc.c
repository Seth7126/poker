// ============================================================
// 函数名称: sub_415fc8
// 虚拟地址: 0x415fc8
// WARP GUID: 2c979fa7-086f-540b-a62e-d83fbe9359cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415fc8, sub_410524
// [被调用的父级函数]: sub_415dec, sub_442735, sub_4408d0, sub_415d64, sub_415fc8, sub_42da58
// ============================================================

void __convention("regparm")sub_415fc8(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if ((*(ebx + 0x20) & 8) != 0)
        return 
    
    *(ebx + 0x20) |= 8
    arg1 = *(ebx + 0x10)
    
    if (arg1 == 0)
        return 
    
    int32_t esi_2 = *(arg1 + 8) - 1
    
    if (esi_2 s< 0)
        return 
    
    int32_t i_1 = esi_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        sub_410524(*(ebx + 0x10), edi_1)
        sub_415fc8()
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
