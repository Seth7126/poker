// ============================================================
// 函数名称: sub_42d87c
// 虚拟地址: 0x42d87c
// WARP GUID: 15c5aa39-d541-5629-85f7-01931ffba888
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a694, sub_403260
// [被调用的父级函数]: sub_424ea8
// ============================================================

int32_t* __convention("regparm")sub_42d87c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_42a694(arg1, arg2)
    sub_42a694(arg1, arg2)
    sub_403260(arg2, 0x427f2c)
    *(arg1 + 0x20) = arg2
    return arg2
}
