// ============================================================
// 函数名称: sub_40eb1f
// 虚拟地址: 0x40eb1f
// WARP GUID: 0d18bf7a-2443-5b3c-9e39-84fa88a097b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_40eb1f(char* arg1, int32_t, char arg3, long double arg4 @ st0) __noreturn
{
    // 第一条实际指令: *(arg1 * 2) += arg3
    *(arg1 * 2) += arg3
    *arg1 += arg1.b
    *(arg1 * 3)
    trap(0xd)
}
