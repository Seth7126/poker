// ============================================================
// 函数名称: sub_457ec0
// 虚拟地址: 0x457ec0
// WARP GUID: 4cbb1c4e-0ba5-5c8d-b924-5dc1633b9e5f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_457f28
// ============================================================

int32_t __convention("regparm")sub_457ec0(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1ae)
    void* esi = *(arg1 + 0x1ae)
    int32_t eax = *(esi + 0xc)
    
    if (eax s< 0)
        eax += 7
    
    void* edx = *(arg1 + 0x1aa)
    *(edx + 0x5c) += eax s>> 3
    *(esi + 0xc) = 0
    
    if ((*(*(arg1 + 0x1aa) + 8))() == 0)
        return 0
    
    int32_t i = 0
    void* eax_5 = esi + 0x14
    
    while (i s< *(arg1 + 0x13a))
        i += 1
        *eax_5 = 0
        eax_5 += 4
    
    *(esi + 0x24) = *(arg1 + 0x110)
    *(esi + 0x10) = 0
    return 1
}
