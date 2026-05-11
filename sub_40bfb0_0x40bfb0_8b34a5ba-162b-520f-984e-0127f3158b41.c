// ============================================================
// 函数名称: sub_40bfb0
// 虚拟地址: 0x40bfb0
// WARP GUID: 8b34a5ba-162b-520f-984e-0127f3158b41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40bdc4, sub_404078
// [被调用的父级函数]: sub_40bfe4
// ============================================================

int32_t __convention("regparm")sub_40bfb0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s> 0 && arg2 s<= sub_404078(arg1) && *(arg1 + arg2 - 1) == 0x5c && sub_40bdc4(arg1, arg2) == 0)
    if (arg2 s> 0 && arg2 s<= sub_404078(arg1) && *(arg1 + arg2 - 1) == 0x5c
            && sub_40bdc4(arg1, arg2) == 0)
        return 1
    
    return 0
}
