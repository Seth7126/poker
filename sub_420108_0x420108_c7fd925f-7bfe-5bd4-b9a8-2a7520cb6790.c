// ============================================================
// 函数名称: sub_420108
// 虚拟地址: 0x420108
// WARP GUID: c7fd925f-7bfe-5bd4-b9a8-2a7520cb6790
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410414
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_420108(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = (*(*arg1 + 8))()
    int32_t result = (*(*arg1 + 8))()
    int32_t* eax_1 = arg1[1]
    sub_410414(eax_1, eax_1[2] - 1)
    return result
}
