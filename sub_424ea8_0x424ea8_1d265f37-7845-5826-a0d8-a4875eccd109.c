// ============================================================
// 函数名称: sub_424ea8
// 虚拟地址: 0x424ea8
// WARP GUID: 1d265f37-7845-5826-a0d8-a4875eccd109
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42d87c, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_424ea8(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_42d87c(arg1, arg2)
    sub_42d87c(arg1, arg2)
    sub_403260(arg2, 0x422d54)
    *(arg1 + 0x28) = arg2
    return arg2
}
