// ============================================================
// 函数名称: sub_4339d8
// 虚拟地址: 0x4339d8
// WARP GUID: 879df677-ab4a-578f-b2da-e27aee594420
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4339d8
// [被调用的父级函数]: sub_433a30, sub_4339d8
// ============================================================

void* __convention("regparm")sub_4339d8(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 - 4) == *(arg1 + 4))
    if (*(arg2 - 4) == *(arg1 + 4))
        *(arg2 - 8) = arg1
        return arg2
    
    if (*(arg2 - 8) == 0 && *(arg1 + 0xc) != 0)
        *(arg1 + 0xc)
        sub_4339d8(arg2)
    
    void* eax_8 = arg2
    
    if (*(eax_8 - 8) == 0 && *(arg1 + 8) != 0)
        *(arg1 + 8)
        eax_8 = sub_4339d8(arg2)
    
    return eax_8
}
