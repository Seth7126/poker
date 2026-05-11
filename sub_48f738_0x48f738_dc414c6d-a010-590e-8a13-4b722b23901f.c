// ============================================================
// 函数名称: sub_48f738
// 虚拟地址: 0x48f738
// WARP GUID: dc414c6d-a010-590e-8a13-4b722b23901f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_48f760
// ============================================================

int32_t* __convention("regparm")sub_48f738(char arg1, void* arg2)
{
    // 第一条实际指令: *(*(arg2 - 4) + 0x10) = arg1
    *(*(arg2 - 4) + 0x10) = arg1
    sub_4030d0(**(arg2 - 4))
    int32_t* result = *(arg2 - 4)
    *result = 0
    return result
}
