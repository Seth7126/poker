// ============================================================
// 函数名称: sub_442d80
// 虚拟地址: 0x442d80
// WARP GUID: 238f4128-7b67-5ded-b441-7967e720c949
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_414430
// [被调用的父级函数]: sub_442cad
// ============================================================

int32_t __convention("regparm")sub_442d80(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_414430(arg2)
    int32_t result = sub_414430(arg2)
    *(arg1 + 0x258) = result
    return result
}
