// ============================================================
// 函数名称: sub_412120
// 虚拟地址: 0x412120
// WARP GUID: 789bf4de-dff6-5c17-928a-608995531f5b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405b58
// [被调用的父级函数]: sub_411458
// ============================================================

int32_t __convention("regparm")sub_412120(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 8) != 0)
    if (*(arg1 + 8) != 0)
        (*(**(arg1 + 8) + 0x10))()
    
    int32_t result = sub_405b58(arg1 + 8, arg2)
    
    if (*(arg1 + 8) == 0)
        return result
    
    return (*(**(arg1 + 8) + 0xc))()
}
