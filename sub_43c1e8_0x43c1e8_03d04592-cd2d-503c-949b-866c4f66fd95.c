// ============================================================
// 函数名称: sub_43c1e8
// 虚拟地址: 0x43c1e8
// WARP GUID: 03d04592-cd2d-503c-949b-866c4f66fd95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43c258, sub_437bec, sub_415df8, sub_437c30
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43c1e8(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x70)
    void* eax = *(arg1 + 0x70)
    
    if (eax != 0)
        sub_437bec(eax, *(arg1 + 0x6c))
    
    *(arg1 + 0x70) = arg2
    
    if (arg2 != 0)
        sub_437c30(arg2, *(arg1 + 0x6c))
        sub_415df8(*(arg1 + 0x70), arg1)
    
    return sub_43c258(arg1)
}
