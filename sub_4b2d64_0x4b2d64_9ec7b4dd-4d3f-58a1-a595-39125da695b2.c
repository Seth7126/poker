// ============================================================
// 函数名称: sub_4b2d64
// 虚拟地址: 0x4b2d64
// WARP GUID: 9ec7b4dd-4d3f-58a1-a595-39125da695b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b2d64(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x200))
    if (arg2 != *(arg1 + 0x200))
        *(arg1 + 0x200) = arg2
        sub_42ee80(arg1)
}
