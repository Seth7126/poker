// ============================================================
// 函数名称: sub_42b2f0
// 虚拟地址: 0x42b2f0
// WARP GUID: 1d146885-03ca-5e71-a051-bfaf029c4d5d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4457e8, sub_42d1d4, sub_42d734, sub_449d44, sub_42c2ec, sub_44a0a0, sub_429cf8, sub_441ed4
// ============================================================

int32_t __convention("regparm")sub_42b2f0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: (*(*arg1 + 0x3c))()
    (*(*arg1 + 0x3c))()
    int32_t var_14
    *arg3 = *arg2 + var_14
    int32_t var_10
    int32_t result = arg2[1] + var_10
    arg3[1] = result
    return result
}
