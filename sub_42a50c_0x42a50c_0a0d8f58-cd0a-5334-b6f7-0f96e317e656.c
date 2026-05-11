// ============================================================
// 函数名称: sub_42a50c
// 虚拟地址: 0x42a50c
// WARP GUID: 0a0d8f58-cd0a-5334-b6f7-0f96e317e656
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a4d8
// [被调用的父级函数]: sub_4258dc, sub_4425d8, sub_4331f0, sub_432928, sub_434670
// ============================================================

void __convention("regparm")sub_42a50c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x58))
    if (arg2 != *(arg1 + 0x58))
        sub_42a4d8(arg1)
        *(arg1 + 0x58) = arg2
}
