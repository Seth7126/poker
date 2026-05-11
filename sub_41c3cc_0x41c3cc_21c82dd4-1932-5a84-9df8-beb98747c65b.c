// ============================================================
// 函数名称: sub_41c3cc
// 虚拟地址: 0x41c3cc
// WARP GUID: 21c82dd4-1932-5a84-9df8-beb98747c65b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41c894, sub_41c438, sub_41c508
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c3cc(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx_1 = (*(*arg2 + 4))(arg3)
    int32_t ecx_1 = (*(*arg2 + 4))(arg3)
    
    if (arg3 s> 4)
        if (sub_41c894(ecx_1, arg2) == 0)
            sub_41c508(arg1, arg2, arg3 - 4)
        else
            sub_41c438(arg1, arg2)
    else
        (*(*arg1 + 8))()
    
    int32_t eax_7
    eax_7.b = (*(*arg1 + 0x24))() != 0
    *(arg1 + 0x1a) = eax_7.b
    return (*(*arg1 + 0x10))()
}
