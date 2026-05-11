// ============================================================
// 函数名称: sub_425c74
// 虚拟地址: 0x425c74
// WARP GUID: 6ee04c12-4d7d-56f8-8647-67ed51e2e171
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: sub_4b47c8
// ============================================================

void __convention("regparm")sub_425c74(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x207))
    if (arg2 != *(arg1 + 0x207))
        *(arg1 + 0x207) = arg2
        sub_42ee80(arg1)
}
