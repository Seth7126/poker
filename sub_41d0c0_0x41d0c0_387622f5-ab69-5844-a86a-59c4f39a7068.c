// ============================================================
// 函数名称: sub_41d0c0
// 虚拟地址: 0x41d0c0
// WARP GUID: 387622f5-ab69-5844-a86a-59c4f39a7068
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_41cdd0, sub_417c44
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41d0c0(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 8)
    int32_t eax = *(arg1 + 8)
    
    if (eax != 0 && eax != *(arg1 + 0x14))
        sub_41cdd0(eax)
        DeleteObject(*(arg1 + 8))
    
    int32_t eax_2 = *(arg1 + 0xc)
    
    if (eax_2 != 0)
        sub_41cdd0(eax_2)
        DeleteObject(*(arg1 + 0xc))
        *(arg1 + 0xc) = 0
    
    sub_417c44(*(arg1 + 0x10))
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = 0
    return 0
}
