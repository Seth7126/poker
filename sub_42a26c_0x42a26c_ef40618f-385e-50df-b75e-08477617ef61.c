// ============================================================
// 函数名称: sub_42a26c
// 虚拟地址: 0x42a26c
// WARP GUID: ef40618f-385e-50df-b75e-08477617ef61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowOrgEx, SetWindowOrgEx
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f6d0
// ============================================================

BOOL __convention("regparm")sub_42a26c(HDC arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: POINT lppoint
    POINT lppoint
    GetWindowOrgEx(arg1, &lppoint)
    return SetWindowOrgEx(arg1, lppoint.x - arg2, lppoint.y - arg3, nullptr)
}
