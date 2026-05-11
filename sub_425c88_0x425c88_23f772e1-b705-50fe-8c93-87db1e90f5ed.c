// ============================================================
// 函数名称: sub_425c88
// 虚拟地址: 0x425c88
// WARP GUID: 23f772e1-b705-50fe-8c93-87db1e90f5ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: sub_4b47c8
// ============================================================

void __convention("regparm")sub_425c88(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x204))
    if (arg2 != *(arg1 + 0x204))
        *(arg1 + 0x204) = arg2
        sub_42ee80(arg1)
}
