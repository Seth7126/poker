// ============================================================
// 函数名称: sub_40dfb0
// 虚拟地址: 0x40dfb0
// WARP GUID: 0e7b0790-0ab5-50f1-a87f-4de156c11eb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41504c, sub_41115f, sub_411168
// ============================================================

void* __convention("regparm")sub_40dfb0(void* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = *(arg1 + 1)
    return arg1 + edx + 2
}
