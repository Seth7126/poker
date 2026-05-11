// ============================================================
// 函数名称: sub_460e34
// 虚拟地址: 0x460e34
// WARP GUID: e3712036-2548-54d1-a4c3-b8af8c652d5e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453acc
// ============================================================

int32_t __convention("regparm")sub_460e34(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg3
    int32_t esi = arg3
    
    if (arg1[4] != 0x65)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)(arg3)
    
    if (*(arg1 + 0xd5) u>= arg1[7])
        *(*arg1 + 0x14) = 0x77
        (*(*arg1 + 4))(arg3)
    
    void* eax_4 = arg1[2]
    
    if (eax_4 != 0)
        *(eax_4 + 4) = *(arg1 + 0xd5)
        *(eax_4 + 8) = arg1[7]
        (*arg1[2])(arg3)
    
    if (*(*(arg1 + 0x141) + 0xc) != 0)
        (*(*(arg1 + 0x141) + 4))(arg3)
    
    int32_t eax_8 = arg1[7] - *(arg1 + 0xd5)
    
    if (eax_8 u< esi)
        esi = eax_8
    
    (*(*(arg1 + 0x145) + 4))(esi)
    *(arg1 + 0xd5) = *(arg1 + 0xd5)
    return 0
}
