// ============================================================
// 函数名称: sub_456e4c
// 虚拟地址: 0x456e4c
// WARP GUID: ce2a04c2-168b-56b7-8a96-73e532fd5497
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4573a4, sub_457104, sub_456eb8, sub_4574bc
// ============================================================

int32_t __convention("regparm")sub_456e4c(void* arg1)
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
    void* eax_5 = esi + 0x18
    
    while (i s< *(arg1 + 0x13a))
        i += 1
        *eax_5 = 0
        eax_5 += 4
    
    *(esi + 0x14) = 0
    *(esi + 0x28) = *(arg1 + 0x110)
    *(esi + 0x10) = 0
    return 1
}
