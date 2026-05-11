// ============================================================
// 函数名称: sub_49e0cc
// 虚拟地址: 0x49e0cc
// WARP GUID: c876fa85-d7f8-57af-8bfb-1e9b9a25d014
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d5c
// [被调用的父级函数]: sub_4a1b34
// ============================================================

int32_t __convention("regparm")sub_49e0cc(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    sub_402d5c(arg1, &var_8)
    int32_t result
    result.b = var_8 == 0
    return result
}
