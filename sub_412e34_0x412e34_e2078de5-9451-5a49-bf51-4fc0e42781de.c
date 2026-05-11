// ============================================================
// 函数名称: sub_412e34
// 虚拟地址: 0x412e34
// WARP GUID: e2078de5-9451-5a49-bf51-4fc0e42781de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412e34(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: if (arg3 u< 1)
    if (arg3 u< 1)
        *(arg1 + 8) = arg2
    else if (arg3 == 1)
        *(arg1 + 8) += arg2
    else if (arg3 == 2)
        *(arg1 + 8) = sub_404078(*(arg1 + 4)) - arg2
    
    if (sub_404078(*(arg1 + 4)) s< *(arg1 + 8))
        *(arg1 + 8) = sub_404078(*(arg1 + 4))
    else if (*(arg1 + 8) s< 0)
        *(arg1 + 8) = 0
    
    return *(arg1 + 8)
}
