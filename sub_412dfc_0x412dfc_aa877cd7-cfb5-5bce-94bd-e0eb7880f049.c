// ============================================================
// 函数名称: sub_412dfc
// 虚拟地址: 0x412dfc
// WARP GUID: aa877cd7-cfb5-5bce-94bd-e0eb7880f049
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_404248, sub_402980
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412dfc(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: sub_4043ac(arg1 + 4, *(arg1 + 8) + arg3)
    sub_4043ac(arg1 + 4, *(arg1 + 8) + arg3)
    sub_402980(arg2, sub_404248(arg1 + 4) + *(arg1 + 8), arg3)
    *(arg1 + 8) += arg3
    return arg3
}
