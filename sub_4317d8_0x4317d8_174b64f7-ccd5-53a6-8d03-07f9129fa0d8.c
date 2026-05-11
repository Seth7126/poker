// ============================================================
// 函数名称: sub_4317d8
// 虚拟地址: 0x4317d8
// WARP GUID: 174b64f7-ccd5-53a6-8d03-07f9129fa0d8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InflateRect, InvalidateRect
// [内部子函数调用]: sub_42b180
// [被调用的父级函数]: sub_430f7c, sub_42fc10
// ============================================================

BOOL __convention("regparm")sub_4317d8(void* arg1)
{
    // 第一条实际指令: void var_14
    void var_14
    sub_42b180(arg1, &var_14)
    InflateRect(&var_14, 1, 1)
    return InvalidateRect(*(*(arg1 + 0x24) + 0x14c), &var_14, 0xffffffff)
}
