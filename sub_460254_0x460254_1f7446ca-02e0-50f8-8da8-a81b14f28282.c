// ============================================================
// 函数名称: sub_460254
// 虚拟地址: 0x460254
// WARP GUID: 1f7446ca-02e0-50f8-8da8-a81b14f28282
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45d134, sub_45c8d0, sub_463408, sub_45c55c
// ============================================================

int32_t __convention("regparm")sub_460254(int32_t arg1, int32_t arg2) __pure
{
    // 第一条实际指令: int32_t ecx_1 = arg1 + arg2 - 1
    int32_t ecx_1 = arg1 + arg2 - 1
    return ecx_1 - mods.dp.d(sx.q(ecx_1), arg2)
}
