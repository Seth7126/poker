// ============================================================
// 函数名称: sub_419a88
// 虚拟地址: 0x419a88
// WARP GUID: 82a05994-ccd6-54cd-b74f-ca6f765cd577
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentPositionEx
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_419bc0
// ============================================================

BOOL __convention("regparm")sub_419a88(int32_t arg1, POINT* arg2)
{
    // 第一条实际指令: POINT* lppt = arg2
    POINT* lppt = arg2
    arg2.b = 1
    sub_419c14(arg1, arg2.b)
    return GetCurrentPositionEx(*(arg1 + 4), lppt)
}
