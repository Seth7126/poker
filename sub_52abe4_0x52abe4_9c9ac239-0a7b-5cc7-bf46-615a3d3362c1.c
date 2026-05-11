// ============================================================
// 函数名称: sub_52abe4
// 虚拟地址: 0x52abe4
// WARP GUID: 9c9ac239-0a7b-5cc7-bf46-615a3d3362c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e548c
// ============================================================

int32_t __convention("regparm")sub_52abe4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: *(arg1 + 0xa8) = 0
    *(arg1 + 0xa8) = 0
    
    for (int32_t i = 0; i != 0x29; i += 1)
        *(arg1 + (i << 2) + 4) = 0
    
    return arg3
}
